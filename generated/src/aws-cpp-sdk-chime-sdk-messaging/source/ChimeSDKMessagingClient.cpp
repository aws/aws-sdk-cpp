/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/ChimeSDKMessagingClient.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingEndpointProvider.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingErrorMarshaller.h>
#include <aws/chime-sdk-messaging/model/AssociateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/BatchCreateChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/ChannelFlowCallbackRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelBanRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelModeratorRequest.h>
#include <aws/chime-sdk-messaging/model/CreateChannelRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelBanRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelModeratorRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteChannelRequest.h>
#include <aws/chime-sdk-messaging/model/DeleteMessagingStreamingConfigurationsRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelBanRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelMembershipForAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelMembershipRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelModeratedByAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelModeratorRequest.h>
#include <aws/chime-sdk-messaging/model/DescribeChannelRequest.h>
#include <aws/chime-sdk-messaging/model/DisassociateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/GetChannelMembershipPreferencesRequest.h>
#include <aws/chime-sdk-messaging/model/GetChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/GetChannelMessageStatusRequest.h>
#include <aws/chime-sdk-messaging/model/GetMessagingSessionEndpointRequest.h>
#include <aws/chime-sdk-messaging/model/GetMessagingStreamingConfigurationsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelBansRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelFlowsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsForAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelMessagesRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelModeratorsRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelsModeratedByAppInstanceUserRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelsRequest.h>
#include <aws/chime-sdk-messaging/model/ListSubChannelsRequest.h>
#include <aws/chime-sdk-messaging/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-messaging/model/PutChannelExpirationSettingsRequest.h>
#include <aws/chime-sdk-messaging/model/PutChannelMembershipPreferencesRequest.h>
#include <aws/chime-sdk-messaging/model/PutMessagingStreamingConfigurationsRequest.h>
#include <aws/chime-sdk-messaging/model/RedactChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/SearchChannelsRequest.h>
#include <aws/chime-sdk-messaging/model/SendChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/TagResourceRequest.h>
#include <aws/chime-sdk-messaging/model/UntagResourceRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelMessageRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelReadMarkerRequest.h>
#include <aws/chime-sdk-messaging/model/UpdateChannelRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKMessaging;
using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ChimeSDKMessaging {
const char SERVICE_NAME[] = "chime";
const char ALLOCATION_TAG[] = "ChimeSDKMessagingClient";
}  // namespace ChimeSDKMessaging
}  // namespace Aws
const char* ChimeSDKMessagingClient::GetServiceName() { return SERVICE_NAME; }
const char* ChimeSDKMessagingClient::GetAllocationTag() { return ALLOCATION_TAG; }

ChimeSDKMessagingClient::ChimeSDKMessagingClient(const ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<ChimeSDKMessagingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMessagingClient::ChimeSDKMessagingClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<ChimeSDKMessagingEndpointProviderBase> endpointProvider,
                                                 const ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMessagingClient::ChimeSDKMessagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<ChimeSDKMessagingEndpointProviderBase> endpointProvider,
                                                 const ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ChimeSDKMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ChimeSDKMessagingClient::ChimeSDKMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMessagingClient::ChimeSDKMessagingClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeSDKMessagingClient::ChimeSDKMessagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeSDKMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeSDKMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ChimeSDKMessagingClient::~ChimeSDKMessagingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ChimeSDKMessagingEndpointProviderBase>& ChimeSDKMessagingClient::accessEndpointProvider() { return m_endpointProvider; }

void ChimeSDKMessagingClient::init(const ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration& config) {
  AWSClient::SetServiceClientName("Chime SDK Messaging");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "chime");
}

void ChimeSDKMessagingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ChimeSDKMessagingClient::InvokeOperationOutcome ChimeSDKMessagingClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateChannelFlowOutcome ChimeSDKMessagingClient::AssociateChannelFlow(const AssociateChannelFlowRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateChannelFlow", "Required field: ChannelArn, is not set");
    return AssociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateChannelFlow", "Required field: ChimeBearer, is not set");
    return AssociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flow");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateChannelFlowOutcome(result.GetResultWithOwnership())
                            : AssociateChannelFlowOutcome(std::move(result.GetError()));
}

BatchCreateChannelMembershipOutcome ChimeSDKMessagingClient::BatchCreateChannelMembership(
    const BatchCreateChannelMembershipRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateChannelMembership", "Required field: ChannelArn, is not set");
    return BatchCreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateChannelMembership", "Required field: ChimeBearer, is not set");
    return BatchCreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
    ss.str("?operation=batch-create");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateChannelMembershipOutcome(result.GetResultWithOwnership())
                            : BatchCreateChannelMembershipOutcome(std::move(result.GetError()));
}

ChannelFlowCallbackOutcome ChimeSDKMessagingClient::ChannelFlowCallback(const ChannelFlowCallbackRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ChannelFlowCallback", "Required field: ChannelArn, is not set");
    return ChannelFlowCallbackOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    ss.str("?operation=channel-flow-callback");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ChannelFlowCallbackOutcome(result.GetResultWithOwnership())
                            : ChannelFlowCallbackOutcome(std::move(result.GetError()));
}

CreateChannelOutcome ChimeSDKMessagingClient::CreateChannel(const CreateChannelRequest& request) const {
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChimeBearer, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelOutcome(result.GetResultWithOwnership()) : CreateChannelOutcome(std::move(result.GetError()));
}

CreateChannelBanOutcome ChimeSDKMessagingClient::CreateChannelBan(const CreateChannelBanRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelBan", "Required field: ChannelArn, is not set");
    return CreateChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelBan", "Required field: ChimeBearer, is not set");
    return CreateChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelBanOutcome(result.GetResultWithOwnership())
                            : CreateChannelBanOutcome(std::move(result.GetError()));
}

CreateChannelFlowOutcome ChimeSDKMessagingClient::CreateChannelFlow(const CreateChannelFlowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelFlowOutcome(result.GetResultWithOwnership())
                            : CreateChannelFlowOutcome(std::move(result.GetError()));
}

CreateChannelMembershipOutcome ChimeSDKMessagingClient::CreateChannelMembership(const CreateChannelMembershipRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelMembership", "Required field: ChannelArn, is not set");
    return CreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelMembership", "Required field: ChimeBearer, is not set");
    return CreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelMembershipOutcome(result.GetResultWithOwnership())
                            : CreateChannelMembershipOutcome(std::move(result.GetError()));
}

CreateChannelModeratorOutcome ChimeSDKMessagingClient::CreateChannelModerator(const CreateChannelModeratorRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelModerator", "Required field: ChannelArn, is not set");
    return CreateChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelModerator", "Required field: ChimeBearer, is not set");
    return CreateChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/moderators");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelModeratorOutcome(result.GetResultWithOwnership())
                            : CreateChannelModeratorOutcome(std::move(result.GetError()));
}

DeleteChannelOutcome ChimeSDKMessagingClient::DeleteChannel(const DeleteChannelRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelArn, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChimeBearer, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelOutcome(result.GetResultWithOwnership()) : DeleteChannelOutcome(std::move(result.GetError()));
}

DeleteChannelBanOutcome ChimeSDKMessagingClient::DeleteChannelBan(const DeleteChannelBanRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: ChannelArn, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: MemberArn, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: ChimeBearer, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelBanOutcome(result.GetResultWithOwnership())
                            : DeleteChannelBanOutcome(std::move(result.GetError()));
}

DeleteChannelFlowOutcome ChimeSDKMessagingClient::DeleteChannelFlow(const DeleteChannelFlowRequest& request) const {
  if (!request.ChannelFlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelFlow", "Required field: ChannelFlowArn, is not set");
    return DeleteChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelFlowArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelFlowOutcome(result.GetResultWithOwnership())
                            : DeleteChannelFlowOutcome(std::move(result.GetError()));
}

DeleteChannelMembershipOutcome ChimeSDKMessagingClient::DeleteChannelMembership(const DeleteChannelMembershipRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: ChannelArn, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: MemberArn, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: ChimeBearer, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelMembershipOutcome(result.GetResultWithOwnership())
                            : DeleteChannelMembershipOutcome(std::move(result.GetError()));
}

DeleteChannelMessageOutcome ChimeSDKMessagingClient::DeleteChannelMessage(const DeleteChannelMessageRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: ChannelArn, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: MessageId, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: ChimeBearer, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelMessageOutcome(result.GetResultWithOwnership())
                            : DeleteChannelMessageOutcome(std::move(result.GetError()));
}

DeleteChannelModeratorOutcome ChimeSDKMessagingClient::DeleteChannelModerator(const DeleteChannelModeratorRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChannelArn, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelModeratorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChannelModeratorArn, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelModeratorArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChimeBearer, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/moderators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelModeratorArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelModeratorOutcome(result.GetResultWithOwnership())
                            : DeleteChannelModeratorOutcome(std::move(result.GetError()));
}

DeleteMessagingStreamingConfigurationsOutcome ChimeSDKMessagingClient::DeleteMessagingStreamingConfigurations(
    const DeleteMessagingStreamingConfigurationsRequest& request) const {
  if (!request.AppInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMessagingStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return DeleteMessagingStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMessagingStreamingConfigurationsOutcome(result.GetResultWithOwnership())
                            : DeleteMessagingStreamingConfigurationsOutcome(std::move(result.GetError()));
}

DescribeChannelOutcome ChimeSDKMessagingClient::DescribeChannel(const DescribeChannelRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelArn, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChimeBearer, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelOutcome(result.GetResultWithOwnership())
                            : DescribeChannelOutcome(std::move(result.GetError()));
}

DescribeChannelBanOutcome ChimeSDKMessagingClient::DescribeChannelBan(const DescribeChannelBanRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: ChannelArn, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: MemberArn, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: ChimeBearer, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelBanOutcome(result.GetResultWithOwnership())
                            : DescribeChannelBanOutcome(std::move(result.GetError()));
}

DescribeChannelFlowOutcome ChimeSDKMessagingClient::DescribeChannelFlow(const DescribeChannelFlowRequest& request) const {
  if (!request.ChannelFlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelFlow", "Required field: ChannelFlowArn, is not set");
    return DescribeChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelFlowArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelFlowOutcome(result.GetResultWithOwnership())
                            : DescribeChannelFlowOutcome(std::move(result.GetError()));
}

DescribeChannelMembershipOutcome ChimeSDKMessagingClient::DescribeChannelMembership(const DescribeChannelMembershipRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: ChannelArn, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: MemberArn, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: ChimeBearer, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelMembershipOutcome(result.GetResultWithOwnership())
                            : DescribeChannelMembershipOutcome(std::move(result.GetError()));
}

DescribeChannelMembershipForAppInstanceUserOutcome ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUser(
    const DescribeChannelMembershipForAppInstanceUserRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: ChannelArn, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.AppInstanceUserArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: ChimeBearer, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    ss.str("?scope=app-instance-user-membership");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelMembershipForAppInstanceUserOutcome(result.GetResultWithOwnership())
                            : DescribeChannelMembershipForAppInstanceUserOutcome(std::move(result.GetError()));
}

DescribeChannelModeratedByAppInstanceUserOutcome ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUser(
    const DescribeChannelModeratedByAppInstanceUserRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: ChannelArn, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.AppInstanceUserArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: ChimeBearer, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    ss.str("?scope=app-instance-user-moderated-channel");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelModeratedByAppInstanceUserOutcome(result.GetResultWithOwnership())
                            : DescribeChannelModeratedByAppInstanceUserOutcome(std::move(result.GetError()));
}

DescribeChannelModeratorOutcome ChimeSDKMessagingClient::DescribeChannelModerator(const DescribeChannelModeratorRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChannelArn, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelModeratorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChannelModeratorArn, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelModeratorArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChimeBearer, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/moderators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelModeratorArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelModeratorOutcome(result.GetResultWithOwnership())
                            : DescribeChannelModeratorOutcome(std::move(result.GetError()));
}

DisassociateChannelFlowOutcome ChimeSDKMessagingClient::DisassociateChannelFlow(const DisassociateChannelFlowRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateChannelFlow", "Required field: ChannelArn, is not set");
    return DisassociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelFlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateChannelFlow", "Required field: ChannelFlowArn, is not set");
    return DisassociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateChannelFlow", "Required field: ChimeBearer, is not set");
    return DisassociateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelFlowArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateChannelFlowOutcome(result.GetResultWithOwnership())
                            : DisassociateChannelFlowOutcome(std::move(result.GetError()));
}

GetChannelMembershipPreferencesOutcome ChimeSDKMessagingClient::GetChannelMembershipPreferences(
    const GetChannelMembershipPreferencesRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMembershipPreferences", "Required field: ChannelArn, is not set");
    return GetChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMembershipPreferences", "Required field: MemberArn, is not set");
    return GetChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMembershipPreferences", "Required field: ChimeBearer, is not set");
    return GetChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/preferences");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelMembershipPreferencesOutcome(result.GetResultWithOwnership())
                            : GetChannelMembershipPreferencesOutcome(std::move(result.GetError()));
}

GetChannelMessageOutcome ChimeSDKMessagingClient::GetChannelMessage(const GetChannelMessageRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: ChannelArn, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: MessageId, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: ChimeBearer, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelMessageOutcome(result.GetResultWithOwnership())
                            : GetChannelMessageOutcome(std::move(result.GetError()));
}

GetChannelMessageStatusOutcome ChimeSDKMessagingClient::GetChannelMessageStatus(const GetChannelMessageStatusRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMessageStatus", "Required field: ChannelArn, is not set");
    return GetChannelMessageStatusOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMessageStatus", "Required field: MessageId, is not set");
    return GetChannelMessageStatusOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelMessageStatus", "Required field: ChimeBearer, is not set");
    return GetChannelMessageStatusOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
    ss.str("?scope=message-status");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelMessageStatusOutcome(result.GetResultWithOwnership())
                            : GetChannelMessageStatusOutcome(std::move(result.GetError()));
}

GetMessagingSessionEndpointOutcome ChimeSDKMessagingClient::GetMessagingSessionEndpoint(
    const GetMessagingSessionEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/messaging-session");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMessagingSessionEndpointOutcome(result.GetResultWithOwnership())
                            : GetMessagingSessionEndpointOutcome(std::move(result.GetError()));
}

GetMessagingStreamingConfigurationsOutcome ChimeSDKMessagingClient::GetMessagingStreamingConfigurations(
    const GetMessagingStreamingConfigurationsRequest& request) const {
  if (!request.AppInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMessagingStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return GetMessagingStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMessagingStreamingConfigurationsOutcome(result.GetResultWithOwnership())
                            : GetMessagingStreamingConfigurationsOutcome(std::move(result.GetError()));
}

ListChannelBansOutcome ChimeSDKMessagingClient::ListChannelBans(const ListChannelBansRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelBans", "Required field: ChannelArn, is not set");
    return ListChannelBansOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelBans", "Required field: ChimeBearer, is not set");
    return ListChannelBansOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelBansOutcome(result.GetResultWithOwnership())
                            : ListChannelBansOutcome(std::move(result.GetError()));
}

ListChannelFlowsOutcome ChimeSDKMessagingClient::ListChannelFlows(const ListChannelFlowsRequest& request) const {
  if (!request.AppInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelFlows", "Required field: AppInstanceArn, is not set");
    return ListChannelFlowsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelFlowsOutcome(result.GetResultWithOwnership())
                            : ListChannelFlowsOutcome(std::move(result.GetError()));
}

ListChannelMembershipsOutcome ChimeSDKMessagingClient::ListChannelMemberships(const ListChannelMembershipsRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelMemberships", "Required field: ChannelArn, is not set");
    return ListChannelMembershipsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelMemberships", "Required field: ChimeBearer, is not set");
    return ListChannelMembershipsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelMembershipsOutcome(result.GetResultWithOwnership())
                            : ListChannelMembershipsOutcome(std::move(result.GetError()));
}

ListChannelMembershipsForAppInstanceUserOutcome ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUser(
    const ListChannelMembershipsForAppInstanceUserRequest& request) const {
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelMembershipsForAppInstanceUser", "Required field: ChimeBearer, is not set");
    return ListChannelMembershipsForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
    ss.str("?scope=app-instance-user-memberships");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelMembershipsForAppInstanceUserOutcome(result.GetResultWithOwnership())
                            : ListChannelMembershipsForAppInstanceUserOutcome(std::move(result.GetError()));
}

ListChannelMessagesOutcome ChimeSDKMessagingClient::ListChannelMessages(const ListChannelMessagesRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelMessages", "Required field: ChannelArn, is not set");
    return ListChannelMessagesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelMessages", "Required field: ChimeBearer, is not set");
    return ListChannelMessagesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelMessagesOutcome(result.GetResultWithOwnership())
                            : ListChannelMessagesOutcome(std::move(result.GetError()));
}

ListChannelModeratorsOutcome ChimeSDKMessagingClient::ListChannelModerators(const ListChannelModeratorsRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelModerators", "Required field: ChannelArn, is not set");
    return ListChannelModeratorsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelModerators", "Required field: ChimeBearer, is not set");
    return ListChannelModeratorsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/moderators");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelModeratorsOutcome(result.GetResultWithOwnership())
                            : ListChannelModeratorsOutcome(std::move(result.GetError()));
}

ListChannelsOutcome ChimeSDKMessagingClient::ListChannels(const ListChannelsRequest& request) const {
  if (!request.AppInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: AppInstanceArn, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: ChimeBearer, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsOutcome(result.GetResultWithOwnership()) : ListChannelsOutcome(std::move(result.GetError()));
}

ListChannelsAssociatedWithChannelFlowOutcome ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlow(
    const ListChannelsAssociatedWithChannelFlowRequest& request) const {
  if (!request.ChannelFlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelsAssociatedWithChannelFlow", "Required field: ChannelFlowArn, is not set");
    return ListChannelsAssociatedWithChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
    ss.str("?scope=channel-flow-associations");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsAssociatedWithChannelFlowOutcome(result.GetResultWithOwnership())
                            : ListChannelsAssociatedWithChannelFlowOutcome(std::move(result.GetError()));
}

ListChannelsModeratedByAppInstanceUserOutcome ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUser(
    const ListChannelsModeratedByAppInstanceUserRequest& request) const {
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelsModeratedByAppInstanceUser", "Required field: ChimeBearer, is not set");
    return ListChannelsModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
    ss.str("?scope=app-instance-user-moderated-channels");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsModeratedByAppInstanceUserOutcome(result.GetResultWithOwnership())
                            : ListChannelsModeratedByAppInstanceUserOutcome(std::move(result.GetError()));
}

ListSubChannelsOutcome ChimeSDKMessagingClient::ListSubChannels(const ListSubChannelsRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubChannels", "Required field: ChannelArn, is not set");
    return ListSubChannelsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubChannels", "Required field: ChimeBearer, is not set");
    return ListSubChannelsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subchannels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubChannelsOutcome(result.GetResultWithOwnership())
                            : ListSubChannelsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ChimeSDKMessagingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutChannelExpirationSettingsOutcome ChimeSDKMessagingClient::PutChannelExpirationSettings(
    const PutChannelExpirationSettingsRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutChannelExpirationSettings", "Required field: ChannelArn, is not set");
    return PutChannelExpirationSettingsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/expiration-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutChannelExpirationSettingsOutcome(result.GetResultWithOwnership())
                            : PutChannelExpirationSettingsOutcome(std::move(result.GetError()));
}

PutChannelMembershipPreferencesOutcome ChimeSDKMessagingClient::PutChannelMembershipPreferences(
    const PutChannelMembershipPreferencesRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutChannelMembershipPreferences", "Required field: ChannelArn, is not set");
    return PutChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutChannelMembershipPreferences", "Required field: MemberArn, is not set");
    return PutChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutChannelMembershipPreferences", "Required field: ChimeBearer, is not set");
    return PutChannelMembershipPreferencesOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/preferences");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutChannelMembershipPreferencesOutcome(result.GetResultWithOwnership())
                            : PutChannelMembershipPreferencesOutcome(std::move(result.GetError()));
}

PutMessagingStreamingConfigurationsOutcome ChimeSDKMessagingClient::PutMessagingStreamingConfigurations(
    const PutMessagingStreamingConfigurationsRequest& request) const {
  if (!request.AppInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMessagingStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return PutMessagingStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutMessagingStreamingConfigurationsOutcome(result.GetResultWithOwnership())
                            : PutMessagingStreamingConfigurationsOutcome(std::move(result.GetError()));
}

RedactChannelMessageOutcome ChimeSDKMessagingClient::RedactChannelMessage(const RedactChannelMessageRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: ChannelArn, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: MessageId, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: ChimeBearer, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
    ss.str("?operation=redact");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RedactChannelMessageOutcome(result.GetResultWithOwnership())
                            : RedactChannelMessageOutcome(std::move(result.GetError()));
}

SearchChannelsOutcome ChimeSDKMessagingClient::SearchChannels(const SearchChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
    ss.str("?operation=search");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchChannelsOutcome(result.GetResultWithOwnership()) : SearchChannelsOutcome(std::move(result.GetError()));
}

SendChannelMessageOutcome ChimeSDKMessagingClient::SendChannelMessage(const SendChannelMessageRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendChannelMessage", "Required field: ChannelArn, is not set");
    return SendChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendChannelMessage", "Required field: ChimeBearer, is not set");
    return SendChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendChannelMessageOutcome(result.GetResultWithOwnership())
                            : SendChannelMessageOutcome(std::move(result.GetError()));
}

TagResourceOutcome ChimeSDKMessagingClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=tag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ChimeSDKMessagingClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=untag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateChannelOutcome ChimeSDKMessagingClient::UpdateChannel(const UpdateChannelRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelArn, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChimeBearer, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelOutcome(result.GetResultWithOwnership()) : UpdateChannelOutcome(std::move(result.GetError()));
}

UpdateChannelFlowOutcome ChimeSDKMessagingClient::UpdateChannelFlow(const UpdateChannelFlowRequest& request) const {
  if (!request.ChannelFlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelFlow", "Required field: ChannelFlowArn, is not set");
    return UpdateChannelFlowOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelFlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelFlowArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelFlowOutcome(result.GetResultWithOwnership())
                            : UpdateChannelFlowOutcome(std::move(result.GetError()));
}

UpdateChannelMessageOutcome ChimeSDKMessagingClient::UpdateChannelMessage(const UpdateChannelMessageRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: ChannelArn, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: MessageId, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: ChimeBearer, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelMessageOutcome(result.GetResultWithOwnership())
                            : UpdateChannelMessageOutcome(std::move(result.GetError()));
}

UpdateChannelReadMarkerOutcome ChimeSDKMessagingClient::UpdateChannelReadMarker(const UpdateChannelReadMarkerRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelReadMarker", "Required field: ChannelArn, is not set");
    return UpdateChannelReadMarkerOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChimeBearerHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelReadMarker", "Required field: ChimeBearer, is not set");
    return UpdateChannelReadMarkerOutcome(Aws::Client::AWSError<ChimeSDKMessagingErrors>(
        ChimeSDKMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChimeBearer]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/readMarker");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelReadMarkerOutcome(result.GetResultWithOwnership())
                            : UpdateChannelReadMarkerOutcome(std::move(result.GetError()));
}
