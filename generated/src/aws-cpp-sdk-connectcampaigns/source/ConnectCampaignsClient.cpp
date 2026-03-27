/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/ConnectCampaignsClient.h>
#include <aws/connectcampaigns/ConnectCampaignsEndpointProvider.h>
#include <aws/connectcampaigns/ConnectCampaignsErrorMarshaller.h>
#include <aws/connectcampaigns/model/CreateCampaignRequest.h>
#include <aws/connectcampaigns/model/DeleteCampaignRequest.h>
#include <aws/connectcampaigns/model/DeleteConnectInstanceConfigRequest.h>
#include <aws/connectcampaigns/model/DeleteInstanceOnboardingJobRequest.h>
#include <aws/connectcampaigns/model/DescribeCampaignRequest.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchRequest.h>
#include <aws/connectcampaigns/model/GetCampaignStateRequest.h>
#include <aws/connectcampaigns/model/GetConnectInstanceConfigRequest.h>
#include <aws/connectcampaigns/model/GetInstanceOnboardingJobStatusRequest.h>
#include <aws/connectcampaigns/model/ListCampaignsRequest.h>
#include <aws/connectcampaigns/model/ListTagsForResourceRequest.h>
#include <aws/connectcampaigns/model/PauseCampaignRequest.h>
#include <aws/connectcampaigns/model/PutDialRequestBatchRequest.h>
#include <aws/connectcampaigns/model/ResumeCampaignRequest.h>
#include <aws/connectcampaigns/model/StartCampaignRequest.h>
#include <aws/connectcampaigns/model/StartInstanceOnboardingJobRequest.h>
#include <aws/connectcampaigns/model/StopCampaignRequest.h>
#include <aws/connectcampaigns/model/TagResourceRequest.h>
#include <aws/connectcampaigns/model/UntagResourceRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignDialerConfigRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignNameRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignOutboundCallConfigRequest.h>
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
using namespace Aws::ConnectCampaigns;
using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ConnectCampaigns {
const char SERVICE_NAME[] = "connect-campaigns";
const char ALLOCATION_TAG[] = "ConnectCampaignsClient";
}  // namespace ConnectCampaigns
}  // namespace Aws
const char* ConnectCampaignsClient::GetServiceName() { return SERVICE_NAME; }
const char* ConnectCampaignsClient::GetAllocationTag() { return ALLOCATION_TAG; }

ConnectCampaignsClient::ConnectCampaignsClient(const ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration,
                                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsClient::ConnectCampaignsClient(const AWSCredentials& credentials,
                                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider,
                                               const ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsClient::ConnectCampaignsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider,
                                               const ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConnectCampaignsClient::ConnectCampaignsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsClient::ConnectCampaignsClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCampaignsClient::ConnectCampaignsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCampaignsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConnectCampaignsClient::~ConnectCampaignsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConnectCampaignsEndpointProviderBase>& ConnectCampaignsClient::accessEndpointProvider() { return m_endpointProvider; }

void ConnectCampaignsClient::init(const ConnectCampaigns::ConnectCampaignsClientConfiguration& config) {
  AWSClient::SetServiceClientName("ConnectCampaigns");
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

void ConnectCampaignsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ConnectCampaignsClient::InvokeOperationOutcome ConnectCampaignsClient::InvokeServiceOperation(
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

CreateCampaignOutcome ConnectCampaignsClient::CreateCampaign(const CreateCampaignRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateCampaignOutcome(result.GetResultWithOwnership()) : CreateCampaignOutcome(std::move(result.GetError()));
}

DeleteCampaignOutcome ConnectCampaignsClient::DeleteCampaign(const DeleteCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: Id, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER,
                                                                               "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCampaignOutcome(result.GetResultWithOwnership()) : DeleteCampaignOutcome(std::move(result.GetError()));
}

DeleteConnectInstanceConfigOutcome ConnectCampaignsClient::DeleteConnectInstanceConfig(
    const DeleteConnectInstanceConfigRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectInstanceConfig", "Required field: ConnectInstanceId, is not set");
    return DeleteConnectInstanceConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConnectInstanceConfigOutcome(result.GetResultWithOwnership())
                            : DeleteConnectInstanceConfigOutcome(std::move(result.GetError()));
}

DeleteInstanceOnboardingJobOutcome ConnectCampaignsClient::DeleteInstanceOnboardingJob(
    const DeleteInstanceOnboardingJobRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInstanceOnboardingJob", "Required field: ConnectInstanceId, is not set");
    return DeleteInstanceOnboardingJobOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/onboarding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInstanceOnboardingJobOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceOnboardingJobOutcome(std::move(result.GetError()));
}

DescribeCampaignOutcome ConnectCampaignsClient::DescribeCampaign(const DescribeCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCampaign", "Required field: Id, is not set");
    return DescribeCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCampaignOutcome(result.GetResultWithOwnership())
                            : DescribeCampaignOutcome(std::move(result.GetError()));
}

GetCampaignStateOutcome ConnectCampaignsClient::GetCampaignState(const GetCampaignStateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignState", "Required field: Id, is not set");
    return GetCampaignStateOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCampaignStateOutcome(result.GetResultWithOwnership())
                            : GetCampaignStateOutcome(std::move(result.GetError()));
}

GetCampaignStateBatchOutcome ConnectCampaignsClient::GetCampaignStateBatch(const GetCampaignStateBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns-state");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCampaignStateBatchOutcome(result.GetResultWithOwnership())
                            : GetCampaignStateBatchOutcome(std::move(result.GetError()));
}

GetConnectInstanceConfigOutcome ConnectCampaignsClient::GetConnectInstanceConfig(const GetConnectInstanceConfigRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectInstanceConfig", "Required field: ConnectInstanceId, is not set");
    return GetConnectInstanceConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectInstanceConfigOutcome(result.GetResultWithOwnership())
                            : GetConnectInstanceConfigOutcome(std::move(result.GetError()));
}

GetInstanceOnboardingJobStatusOutcome ConnectCampaignsClient::GetInstanceOnboardingJobStatus(
    const GetInstanceOnboardingJobStatusRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInstanceOnboardingJobStatus", "Required field: ConnectInstanceId, is not set");
    return GetInstanceOnboardingJobStatusOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/onboarding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInstanceOnboardingJobStatusOutcome(result.GetResultWithOwnership())
                            : GetInstanceOnboardingJobStatusOutcome(std::move(result.GetError()));
}

ListCampaignsOutcome ConnectCampaignsClient::ListCampaigns(const ListCampaignsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns-summary");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCampaignsOutcome(result.GetResultWithOwnership()) : ListCampaignsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ConnectCampaignsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PauseCampaignOutcome ConnectCampaignsClient::PauseCampaign(const PauseCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PauseCampaign", "Required field: Id, is not set");
    return PauseCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pause");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PauseCampaignOutcome(result.GetResultWithOwnership()) : PauseCampaignOutcome(std::move(result.GetError()));
}

PutDialRequestBatchOutcome ConnectCampaignsClient::PutDialRequestBatch(const PutDialRequestBatchRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDialRequestBatch", "Required field: Id, is not set");
    return PutDialRequestBatchOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dial-requests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutDialRequestBatchOutcome(result.GetResultWithOwnership())
                            : PutDialRequestBatchOutcome(std::move(result.GetError()));
}

ResumeCampaignOutcome ConnectCampaignsClient::ResumeCampaign(const ResumeCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResumeCampaign", "Required field: Id, is not set");
    return ResumeCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER,
                                                                               "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resume");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeCampaignOutcome(result.GetResultWithOwnership()) : ResumeCampaignOutcome(std::move(result.GetError()));
}

StartCampaignOutcome ConnectCampaignsClient::StartCampaign(const StartCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCampaign", "Required field: Id, is not set");
    return StartCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCampaignOutcome(result.GetResultWithOwnership()) : StartCampaignOutcome(std::move(result.GetError()));
}

StartInstanceOnboardingJobOutcome ConnectCampaignsClient::StartInstanceOnboardingJob(
    const StartInstanceOnboardingJobRequest& request) const {
  if (!request.ConnectInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartInstanceOnboardingJob", "Required field: ConnectInstanceId, is not set");
    return StartInstanceOnboardingJobOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/onboarding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartInstanceOnboardingJobOutcome(result.GetResultWithOwnership())
                            : StartInstanceOnboardingJobOutcome(std::move(result.GetError()));
}

StopCampaignOutcome ConnectCampaignsClient::StopCampaign(const StopCampaignRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopCampaign", "Required field: Id, is not set");
    return StopCampaignOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopCampaignOutcome(result.GetResultWithOwnership()) : StopCampaignOutcome(std::move(result.GetError()));
}

TagResourceOutcome ConnectCampaignsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ConnectCampaignsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(ConnectCampaignsErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCampaignDialerConfigOutcome ConnectCampaignsClient::UpdateCampaignDialerConfig(
    const UpdateCampaignDialerConfigRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignDialerConfig", "Required field: Id, is not set");
    return UpdateCampaignDialerConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dialer-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignDialerConfigOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignDialerConfigOutcome(std::move(result.GetError()));
}

UpdateCampaignNameOutcome ConnectCampaignsClient::UpdateCampaignName(const UpdateCampaignNameRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignName", "Required field: Id, is not set");
    return UpdateCampaignNameOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/name");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignNameOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignNameOutcome(std::move(result.GetError()));
}

UpdateCampaignOutboundCallConfigOutcome ConnectCampaignsClient::UpdateCampaignOutboundCallConfig(
    const UpdateCampaignOutboundCallConfigRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaignOutboundCallConfig", "Required field: Id, is not set");
    return UpdateCampaignOutboundCallConfigOutcome(Aws::Client::AWSError<ConnectCampaignsErrors>(
        ConnectCampaignsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-call-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignOutboundCallConfigOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignOutboundCallConfigOutcome(std::move(result.GetError()));
}
