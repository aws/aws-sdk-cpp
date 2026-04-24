/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/ConnectCampaignsV2Client.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2EndpointProvider.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2ErrorMarshaller.h>
#include <aws/connectcampaignsv2/model/CreateCampaignRequest.h>
#include <aws/connectcampaignsv2/model/DeleteCampaignChannelSubtypeConfigRequest.h>
#include <aws/connectcampaignsv2/model/DeleteCampaignCommunicationLimitsRequest.h>
#include <aws/connectcampaignsv2/model/DeleteCampaignCommunicationTimeRequest.h>
#include <aws/connectcampaignsv2/model/DeleteCampaignEntryLimitsRequest.h>
#include <aws/connectcampaignsv2/model/DeleteCampaignRequest.h>
#include <aws/connectcampaignsv2/model/DeleteConnectInstanceConfigRequest.h>
#include <aws/connectcampaignsv2/model/DeleteConnectInstanceIntegrationRequest.h>
#include <aws/connectcampaignsv2/model/DeleteInstanceOnboardingJobRequest.h>
#include <aws/connectcampaignsv2/model/DescribeCampaignRequest.h>
#include <aws/connectcampaignsv2/model/GetCampaignStateBatchRequest.h>
#include <aws/connectcampaignsv2/model/GetCampaignStateRequest.h>
#include <aws/connectcampaignsv2/model/GetConnectInstanceConfigRequest.h>
#include <aws/connectcampaignsv2/model/GetInstanceCommunicationLimitsRequest.h>
#include <aws/connectcampaignsv2/model/GetInstanceOnboardingJobStatusRequest.h>
#include <aws/connectcampaignsv2/model/ListCampaignsRequest.h>
#include <aws/connectcampaignsv2/model/ListConnectInstanceIntegrationsRequest.h>
#include <aws/connectcampaignsv2/model/ListTagsForResourceRequest.h>
#include <aws/connectcampaignsv2/model/PauseCampaignRequest.h>
#include <aws/connectcampaignsv2/model/PutConnectInstanceIntegrationRequest.h>
#include <aws/connectcampaignsv2/model/PutInstanceCommunicationLimitsRequest.h>
#include <aws/connectcampaignsv2/model/PutOutboundRequestBatchRequest.h>
#include <aws/connectcampaignsv2/model/PutProfileOutboundRequestBatchRequest.h>
#include <aws/connectcampaignsv2/model/ResumeCampaignRequest.h>
#include <aws/connectcampaignsv2/model/StartCampaignRequest.h>
#include <aws/connectcampaignsv2/model/StartInstanceOnboardingJobRequest.h>
#include <aws/connectcampaignsv2/model/StopCampaignRequest.h>
#include <aws/connectcampaignsv2/model/TagResourceRequest.h>
#include <aws/connectcampaignsv2/model/UntagResourceRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignChannelSubtypeConfigRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignCommunicationLimitsRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignCommunicationTimeRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignEntryLimitsRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignFlowAssociationRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignNameRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignScheduleRequest.h>
#include <aws/connectcampaignsv2/model/UpdateCampaignSourceRequest.h>
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
using namespace Aws::ConnectCampaignsV2;
using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ConnectCampaignsV2 {
const char SERVICE_NAME[] = "connect-campaigns";
const char ALLOCATION_TAG[] = "ConnectCampaignsV2Client";
}  // namespace ConnectCampaignsV2
}  // namespace Aws
const char* ConnectCampaignsV2Client::GetServiceName() { return SERVICE_NAME; }
const char* ConnectCampaignsV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

ConnectCampaignsV2Client::ConnectCampaignsV2Client(const ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<ConnectCampaignsV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectCampaignsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsV2Client::ConnectCampaignsV2Client(const AWSCredentials& credentials,
                                                   std::shared_ptr<ConnectCampaignsV2EndpointProviderBase> endpointProvider,
                                                   const ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectCampaignsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsV2Client::ConnectCampaignsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<ConnectCampaignsV2EndpointProviderBase> endpointProvider,
                                                   const ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectCampaignsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConnectCampaignsV2Client::ConnectCampaignsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCampaignsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsV2Client::ConnectCampaignsV2Client(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCampaignsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsV2Client::ConnectCampaignsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCampaignsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConnectCampaignsV2Client::~ConnectCampaignsV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConnectCampaignsV2EndpointProviderBase>& ConnectCampaignsV2Client::accessEndpointProvider() { return m_endpointProvider; }

void ConnectCampaignsV2Client::init(const ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("ConnectCampaignsV2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "connect-campaigns");
}

void ConnectCampaignsV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ConnectCampaignsV2Client::InvokeOperationOutcome ConnectCampaignsV2Client::InvokeServiceOperation(
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

CreateCampaignOutcome ConnectCampaignsV2Client::CreateCampaign(const CreateCampaignRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateCampaignOutcome(result.GetResultWithOwnership()) : CreateCampaignOutcome(std::move(result.GetError()));
}

DeleteCampaignOutcome ConnectCampaignsV2Client::DeleteCampaign(const DeleteCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: Id, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCampaignOutcome(result.GetResultWithOwnership()) : DeleteCampaignOutcome(std::move(result.GetError()));
}

DeleteCampaignChannelSubtypeConfigOutcome ConnectCampaignsV2Client::DeleteCampaignChannelSubtypeConfig(
    const DeleteCampaignChannelSubtypeConfigRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaignChannelSubtypeConfig", "Required field: Id, is not set");
    return DeleteCampaignChannelSubtypeConfigOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ChannelSubtypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaignChannelSubtypeConfig", "Required field: ChannelSubtype, is not set");
    return DeleteCampaignChannelSubtypeConfigOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelSubtype]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-subtype-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCampaignChannelSubtypeConfigOutcome(result.GetResultWithOwnership())
                            : DeleteCampaignChannelSubtypeConfigOutcome(std::move(result.GetError()));
}

DeleteCampaignCommunicationLimitsOutcome ConnectCampaignsV2Client::DeleteCampaignCommunicationLimits(
    const DeleteCampaignCommunicationLimitsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaignCommunicationLimits", "Required field: Id, is not set");
    return DeleteCampaignCommunicationLimitsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ConfigHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaignCommunicationLimits", "Required field: Config, is not set");
    return DeleteCampaignCommunicationLimitsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Config]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/communication-limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCampaignCommunicationLimitsOutcome(result.GetResultWithOwnership())
                            : DeleteCampaignCommunicationLimitsOutcome(std::move(result.GetError()));
}

DeleteCampaignCommunicationTimeOutcome ConnectCampaignsV2Client::DeleteCampaignCommunicationTime(
    const DeleteCampaignCommunicationTimeRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaignCommunicationTime", "Required field: Id, is not set");
    return DeleteCampaignCommunicationTimeOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ConfigHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaignCommunicationTime", "Required field: Config, is not set");
    return DeleteCampaignCommunicationTimeOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Config]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/communication-time");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCampaignCommunicationTimeOutcome(result.GetResultWithOwnership())
                            : DeleteCampaignCommunicationTimeOutcome(std::move(result.GetError()));
}

DeleteCampaignEntryLimitsOutcome ConnectCampaignsV2Client::DeleteCampaignEntryLimits(
    const DeleteCampaignEntryLimitsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaignEntryLimits", "Required field: Id, is not set");
    return DeleteCampaignEntryLimitsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entry-limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCampaignEntryLimitsOutcome(result.GetResultWithOwnership())
                            : DeleteCampaignEntryLimitsOutcome(std::move(result.GetError()));
}

DeleteConnectInstanceConfigOutcome ConnectCampaignsV2Client::DeleteConnectInstanceConfig(
    const DeleteConnectInstanceConfigRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectInstanceConfig", "Required field: ConnectInstanceId, is not set");
    return DeleteConnectInstanceConfigOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConnectInstanceConfigOutcome(result.GetResultWithOwnership())
                            : DeleteConnectInstanceConfigOutcome(std::move(result.GetError()));
}

DeleteConnectInstanceIntegrationOutcome ConnectCampaignsV2Client::DeleteConnectInstanceIntegration(
    const DeleteConnectInstanceIntegrationRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectInstanceIntegration", "Required field: ConnectInstanceId, is not set");
    return DeleteConnectInstanceIntegrationOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectInstanceIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteConnectInstanceIntegrationOutcome(std::move(result.GetError()));
}

DeleteInstanceOnboardingJobOutcome ConnectCampaignsV2Client::DeleteInstanceOnboardingJob(
    const DeleteInstanceOnboardingJobRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInstanceOnboardingJob", "Required field: ConnectInstanceId, is not set");
    return DeleteInstanceOnboardingJobOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/onboarding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInstanceOnboardingJobOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceOnboardingJobOutcome(std::move(result.GetError()));
}

DescribeCampaignOutcome ConnectCampaignsV2Client::DescribeCampaign(const DescribeCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCampaign", "Required field: Id, is not set");
    return DescribeCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCampaignOutcome(result.GetResultWithOwnership())
                            : DescribeCampaignOutcome(std::move(result.GetError()));
}

GetCampaignStateOutcome ConnectCampaignsV2Client::GetCampaignState(const GetCampaignStateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignState", "Required field: Id, is not set");
    return GetCampaignStateOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCampaignStateOutcome(result.GetResultWithOwnership())
                            : GetCampaignStateOutcome(std::move(result.GetError()));
}

GetCampaignStateBatchOutcome ConnectCampaignsV2Client::GetCampaignStateBatch(const GetCampaignStateBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns-state");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCampaignStateBatchOutcome(result.GetResultWithOwnership())
                            : GetCampaignStateBatchOutcome(std::move(result.GetError()));
}

GetConnectInstanceConfigOutcome ConnectCampaignsV2Client::GetConnectInstanceConfig(const GetConnectInstanceConfigRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectInstanceConfig", "Required field: ConnectInstanceId, is not set");
    return GetConnectInstanceConfigOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectInstanceConfigOutcome(result.GetResultWithOwnership())
                            : GetConnectInstanceConfigOutcome(std::move(result.GetError()));
}

GetInstanceCommunicationLimitsOutcome ConnectCampaignsV2Client::GetInstanceCommunicationLimits(
    const GetInstanceCommunicationLimitsRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInstanceCommunicationLimits", "Required field: ConnectInstanceId, is not set");
    return GetInstanceCommunicationLimitsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/communication-limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInstanceCommunicationLimitsOutcome(result.GetResultWithOwnership())
                            : GetInstanceCommunicationLimitsOutcome(std::move(result.GetError()));
}

GetInstanceOnboardingJobStatusOutcome ConnectCampaignsV2Client::GetInstanceOnboardingJobStatus(
    const GetInstanceOnboardingJobStatusRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInstanceOnboardingJobStatus", "Required field: ConnectInstanceId, is not set");
    return GetInstanceOnboardingJobStatusOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/onboarding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInstanceOnboardingJobStatusOutcome(result.GetResultWithOwnership())
                            : GetInstanceOnboardingJobStatusOutcome(std::move(result.GetError()));
}

ListCampaignsOutcome ConnectCampaignsV2Client::ListCampaigns(const ListCampaignsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns-summary");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCampaignsOutcome(result.GetResultWithOwnership()) : ListCampaignsOutcome(std::move(result.GetError()));
}

ListConnectInstanceIntegrationsOutcome ConnectCampaignsV2Client::ListConnectInstanceIntegrations(
    const ListConnectInstanceIntegrationsRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConnectInstanceIntegrations", "Required field: ConnectInstanceId, is not set");
    return ListConnectInstanceIntegrationsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConnectInstanceIntegrationsOutcome(result.GetResultWithOwnership())
                            : ListConnectInstanceIntegrationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ConnectCampaignsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PauseCampaignOutcome ConnectCampaignsV2Client::PauseCampaign(const PauseCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PauseCampaign", "Required field: Id, is not set");
    return PauseCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(ConnectCampaignsV2Errors::MISSING_PARAMETER,
                                                                                "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pause");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PauseCampaignOutcome(result.GetResultWithOwnership()) : PauseCampaignOutcome(std::move(result.GetError()));
}

PutConnectInstanceIntegrationOutcome ConnectCampaignsV2Client::PutConnectInstanceIntegration(
    const PutConnectInstanceIntegrationRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConnectInstanceIntegration", "Required field: ConnectInstanceId, is not set");
    return PutConnectInstanceIntegrationOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutConnectInstanceIntegrationOutcome(result.GetResultWithOwnership())
                            : PutConnectInstanceIntegrationOutcome(std::move(result.GetError()));
}

PutInstanceCommunicationLimitsOutcome ConnectCampaignsV2Client::PutInstanceCommunicationLimits(
    const PutInstanceCommunicationLimitsRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutInstanceCommunicationLimits", "Required field: ConnectInstanceId, is not set");
    return PutInstanceCommunicationLimitsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/communication-limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutInstanceCommunicationLimitsOutcome(result.GetResultWithOwnership())
                            : PutInstanceCommunicationLimitsOutcome(std::move(result.GetError()));
}

PutOutboundRequestBatchOutcome ConnectCampaignsV2Client::PutOutboundRequestBatch(const PutOutboundRequestBatchRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutOutboundRequestBatch", "Required field: Id, is not set");
    return PutOutboundRequestBatchOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-requests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutOutboundRequestBatchOutcome(result.GetResultWithOwnership())
                            : PutOutboundRequestBatchOutcome(std::move(result.GetError()));
}

PutProfileOutboundRequestBatchOutcome ConnectCampaignsV2Client::PutProfileOutboundRequestBatch(
    const PutProfileOutboundRequestBatchRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutProfileOutboundRequestBatch", "Required field: Id, is not set");
    return PutProfileOutboundRequestBatchOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profile-outbound-requests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutProfileOutboundRequestBatchOutcome(result.GetResultWithOwnership())
                            : PutProfileOutboundRequestBatchOutcome(std::move(result.GetError()));
}

ResumeCampaignOutcome ConnectCampaignsV2Client::ResumeCampaign(const ResumeCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResumeCampaign", "Required field: Id, is not set");
    return ResumeCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resume");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeCampaignOutcome(result.GetResultWithOwnership()) : ResumeCampaignOutcome(std::move(result.GetError()));
}

StartCampaignOutcome ConnectCampaignsV2Client::StartCampaign(const StartCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCampaign", "Required field: Id, is not set");
    return StartCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(ConnectCampaignsV2Errors::MISSING_PARAMETER,
                                                                                "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCampaignOutcome(result.GetResultWithOwnership()) : StartCampaignOutcome(std::move(result.GetError()));
}

StartInstanceOnboardingJobOutcome ConnectCampaignsV2Client::StartInstanceOnboardingJob(
    const StartInstanceOnboardingJobRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartInstanceOnboardingJob", "Required field: ConnectInstanceId, is not set");
    return StartInstanceOnboardingJobOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/onboarding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartInstanceOnboardingJobOutcome(result.GetResultWithOwnership())
                            : StartInstanceOnboardingJobOutcome(std::move(result.GetError()));
}

StopCampaignOutcome ConnectCampaignsV2Client::StopCampaign(const StopCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopCampaign", "Required field: Id, is not set");
    return StopCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(ConnectCampaignsV2Errors::MISSING_PARAMETER,
                                                                               "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopCampaignOutcome(result.GetResultWithOwnership()) : StopCampaignOutcome(std::move(result.GetError()));
}

TagResourceOutcome ConnectCampaignsV2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(ConnectCampaignsV2Errors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ConnectCampaignsV2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCampaignChannelSubtypeConfigOutcome ConnectCampaignsV2Client::UpdateCampaignChannelSubtypeConfig(
    const UpdateCampaignChannelSubtypeConfigRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignChannelSubtypeConfig", "Required field: Id, is not set");
    return UpdateCampaignChannelSubtypeConfigOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel-subtype-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignChannelSubtypeConfigOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignChannelSubtypeConfigOutcome(std::move(result.GetError()));
}

UpdateCampaignCommunicationLimitsOutcome ConnectCampaignsV2Client::UpdateCampaignCommunicationLimits(
    const UpdateCampaignCommunicationLimitsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignCommunicationLimits", "Required field: Id, is not set");
    return UpdateCampaignCommunicationLimitsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/communication-limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignCommunicationLimitsOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignCommunicationLimitsOutcome(std::move(result.GetError()));
}

UpdateCampaignCommunicationTimeOutcome ConnectCampaignsV2Client::UpdateCampaignCommunicationTime(
    const UpdateCampaignCommunicationTimeRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignCommunicationTime", "Required field: Id, is not set");
    return UpdateCampaignCommunicationTimeOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/communication-time");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignCommunicationTimeOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignCommunicationTimeOutcome(std::move(result.GetError()));
}

UpdateCampaignEntryLimitsOutcome ConnectCampaignsV2Client::UpdateCampaignEntryLimits(
    const UpdateCampaignEntryLimitsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignEntryLimits", "Required field: Id, is not set");
    return UpdateCampaignEntryLimitsOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entry-limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignEntryLimitsOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignEntryLimitsOutcome(std::move(result.GetError()));
}

UpdateCampaignFlowAssociationOutcome ConnectCampaignsV2Client::UpdateCampaignFlowAssociation(
    const UpdateCampaignFlowAssociationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignFlowAssociation", "Required field: Id, is not set");
    return UpdateCampaignFlowAssociationOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/flow");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignFlowAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignFlowAssociationOutcome(std::move(result.GetError()));
}

UpdateCampaignNameOutcome ConnectCampaignsV2Client::UpdateCampaignName(const UpdateCampaignNameRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignName", "Required field: Id, is not set");
    return UpdateCampaignNameOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/name");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignNameOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignNameOutcome(std::move(result.GetError()));
}

UpdateCampaignScheduleOutcome ConnectCampaignsV2Client::UpdateCampaignSchedule(const UpdateCampaignScheduleRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignSchedule", "Required field: Id, is not set");
    return UpdateCampaignScheduleOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignScheduleOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignScheduleOutcome(std::move(result.GetError()));
}

UpdateCampaignSourceOutcome ConnectCampaignsV2Client::UpdateCampaignSource(const UpdateCampaignSourceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignSource", "Required field: Id, is not set");
    return UpdateCampaignSourceOutcome(Aws::Client::AWSError<ConnectCampaignsV2Errors>(
        ConnectCampaignsV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/source");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignSourceOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignSourceOutcome(std::move(result.GetError()));
}
