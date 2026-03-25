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

  return AssociateChannelFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return BatchCreateChannelMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ChannelFlowCallbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateChannelBanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChannelFlowOutcome ChimeSDKMessagingClient::CreateChannelFlow(const CreateChannelFlowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-flows");
  };

  return CreateChannelFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateChannelMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateChannelModeratorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteChannelBanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteChannelFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteChannelMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteChannelMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteChannelModeratorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteMessagingStreamingConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DescribeChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeChannelBanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeChannelFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeChannelMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeChannelMembershipForAppInstanceUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeChannelModeratedByAppInstanceUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeChannelModeratorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DisassociateChannelFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return GetChannelMembershipPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetChannelMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetChannelMessageStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMessagingSessionEndpointOutcome ChimeSDKMessagingClient::GetMessagingSessionEndpoint(
    const GetMessagingSessionEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/messaging-session");
  };

  return GetMessagingSessionEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMessagingStreamingConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelBansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelFlowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelMembershipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelMembershipsForAppInstanceUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelModeratorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelsAssociatedWithChannelFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChannelsModeratedByAppInstanceUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListSubChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return PutChannelExpirationSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutChannelMembershipPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutMessagingStreamingConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return RedactChannelMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchChannelsOutcome ChimeSDKMessagingClient::SearchChannels(const SearchChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
    ss.str("?operation=search");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return SearchChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return SendChannelMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ChimeSDKMessagingClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=tag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ChimeSDKMessagingClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
    ss.str("?operation=untag-resource");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateChannelFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateChannelMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateChannelReadMarkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
