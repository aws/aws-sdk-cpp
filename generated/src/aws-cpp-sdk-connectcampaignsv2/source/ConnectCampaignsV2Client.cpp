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

  return CreateCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return DeleteCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteCampaignChannelSubtypeConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteCampaignCommunicationLimitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteCampaignCommunicationTimeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteConnectInstanceConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteConnectInstanceIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteInstanceOnboardingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DescribeCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetCampaignStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCampaignStateBatchOutcome ConnectCampaignsV2Client::GetCampaignStateBatch(const GetCampaignStateBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns-state");
  };

  return GetCampaignStateBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetConnectInstanceConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetInstanceCommunicationLimitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetInstanceOnboardingJobStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCampaignsOutcome ConnectCampaignsV2Client::ListCampaigns(const ListCampaignsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/campaigns-summary");
  };

  return ListCampaignsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListConnectInstanceIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return PauseCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return PutConnectInstanceIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutInstanceCommunicationLimitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutOutboundRequestBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutProfileOutboundRequestBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return ResumeCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StartCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StartInstanceOnboardingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return StopCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateCampaignChannelSubtypeConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateCampaignCommunicationLimitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateCampaignCommunicationTimeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateCampaignFlowAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateCampaignNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateCampaignScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateCampaignSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
