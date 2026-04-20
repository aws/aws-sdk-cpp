/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/ConnectHealthClient.h>
#include <aws/connecthealth/ConnectHealthEndpointProvider.h>
#include <aws/connecthealth/ConnectHealthErrorMarshaller.h>
#include <aws/connecthealth/model/ActivateSubscriptionRequest.h>
#include <aws/connecthealth/model/CreateDomainRequest.h>
#include <aws/connecthealth/model/CreateSubscriptionRequest.h>
#include <aws/connecthealth/model/DeactivateSubscriptionRequest.h>
#include <aws/connecthealth/model/DeleteDomainRequest.h>
#include <aws/connecthealth/model/GetDomainRequest.h>
#include <aws/connecthealth/model/GetMedicalScribeListeningSessionRequest.h>
#include <aws/connecthealth/model/GetPatientInsightsJobRequest.h>
#include <aws/connecthealth/model/GetSubscriptionRequest.h>
#include <aws/connecthealth/model/ListDomainsRequest.h>
#include <aws/connecthealth/model/ListSubscriptionsRequest.h>
#include <aws/connecthealth/model/ListTagsForResourceRequest.h>
#include <aws/connecthealth/model/StartMedicalScribeListeningSessionRequest.h>
#include <aws/connecthealth/model/StartPatientInsightsJobRequest.h>
#include <aws/connecthealth/model/TagResourceRequest.h>
#include <aws/connecthealth/model/UntagResourceRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSClientBidirectionalStreaming.h>
#include <aws/core/client/AWSClientEventStreamingAsyncTask.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectHealth;
using namespace Aws::ConnectHealth::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ConnectHealth {
const char SERVICE_NAME[] = "health-agent";
const char ALLOCATION_TAG[] = "ConnectHealthClient";
}  // namespace ConnectHealth
}  // namespace Aws
const char* ConnectHealthClient::GetServiceName() { return SERVICE_NAME; }
const char* ConnectHealthClient::GetAllocationTag() { return ALLOCATION_TAG; }

ConnectHealthClient::ConnectHealthClient(const ConnectHealth::ConnectHealthClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ConnectHealthEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectHealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectHealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectHealthClient::ConnectHealthClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ConnectHealthEndpointProviderBase> endpointProvider,
                                         const ConnectHealth::ConnectHealthClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectHealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectHealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectHealthClient::ConnectHealthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ConnectHealthEndpointProviderBase> endpointProvider,
                                         const ConnectHealth::ConnectHealthClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectHealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectHealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConnectHealthClient::ConnectHealthClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectHealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectHealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectHealthClient::ConnectHealthClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectHealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectHealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectHealthClient::ConnectHealthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectHealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectHealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConnectHealthClient::~ConnectHealthClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConnectHealthEndpointProviderBase>& ConnectHealthClient::accessEndpointProvider() { return m_endpointProvider; }

void ConnectHealthClient::init(const ConnectHealth::ConnectHealthClientConfiguration& config) {
  AWSClient::SetServiceClientName("ConnectHealth");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "health-agent");
}

void ConnectHealthClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ConnectHealthClient::InvokeOperationOutcome ConnectHealthClient::InvokeServiceOperation(
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

ActivateSubscriptionOutcome ConnectHealthClient::ActivateSubscription(const ActivateSubscriptionRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateSubscription", "Required field: DomainId, is not set");
    return ActivateSubscriptionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateSubscription", "Required field: SubscriptionId, is not set");
    return ActivateSubscriptionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ActivateSubscriptionOutcome(result.GetResultWithOwnership())
                            : ActivateSubscriptionOutcome(std::move(result.GetError()));
}

CreateDomainOutcome ConnectHealthClient::CreateDomain(const CreateDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainOutcome(result.GetResultWithOwnership()) : CreateDomainOutcome(std::move(result.GetError()));
}

CreateSubscriptionOutcome ConnectHealthClient::CreateSubscription(const CreateSubscriptionRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscription", "Required field: DomainId, is not set");
    return CreateSubscriptionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateSubscriptionOutcome(std::move(result.GetError()));
}

DeactivateSubscriptionOutcome ConnectHealthClient::DeactivateSubscription(const DeactivateSubscriptionRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateSubscription", "Required field: DomainId, is not set");
    return DeactivateSubscriptionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateSubscription", "Required field: SubscriptionId, is not set");
    return DeactivateSubscriptionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeactivateSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeactivateSubscriptionOutcome(std::move(result.GetError()));
}

DeleteDomainOutcome ConnectHealthClient::DeleteDomain(const DeleteDomainRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainId, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDomainOutcome(result.GetResultWithOwnership()) : DeleteDomainOutcome(std::move(result.GetError()));
}

GetDomainOutcome ConnectHealthClient::GetDomain(const GetDomainRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: DomainId, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDomainOutcome(result.GetResultWithOwnership()) : GetDomainOutcome(std::move(result.GetError()));
}

GetMedicalScribeListeningSessionOutcome ConnectHealthClient::GetMedicalScribeListeningSession(
    const GetMedicalScribeListeningSessionRequest& request) const {
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMedicalScribeListeningSession", "Required field: SessionId, is not set");
    return GetMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMedicalScribeListeningSession", "Required field: DomainId, is not set");
    return GetMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMedicalScribeListeningSession", "Required field: SubscriptionId, is not set");
    return GetMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/medical-scribe-stream/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMedicalScribeListeningSessionOutcome(result.GetResultWithOwnership())
                            : GetMedicalScribeListeningSessionOutcome(std::move(result.GetError()));
}

GetPatientInsightsJobOutcome ConnectHealthClient::GetPatientInsightsJob(const GetPatientInsightsJobRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPatientInsightsJob", "Required field: DomainId, is not set");
    return GetPatientInsightsJobOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPatientInsightsJob", "Required field: JobId, is not set");
    return GetPatientInsightsJobOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/patient-insights-job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPatientInsightsJobOutcome(result.GetResultWithOwnership())
                            : GetPatientInsightsJobOutcome(std::move(result.GetError()));
}

GetSubscriptionOutcome ConnectHealthClient::GetSubscription(const GetSubscriptionRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: DomainId, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainId]", false));
  }
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: SubscriptionId, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SubscriptionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSubscriptionOutcome(result.GetResultWithOwnership())
                            : GetSubscriptionOutcome(std::move(result.GetError()));
}

ListDomainsOutcome ConnectHealthClient::ListDomains(const ListDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDomainsOutcome(result.GetResultWithOwnership()) : ListDomainsOutcome(std::move(result.GetError()));
}

ListSubscriptionsOutcome ConnectHealthClient::ListSubscriptions(const ListSubscriptionsRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptions", "Required field: DomainId, is not set");
    return ListSubscriptionsOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubscriptionsOutcome(result.GetResultWithOwnership())
                            : ListSubscriptionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ConnectHealthClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

void ConnectHealthClient::StartMedicalScribeListeningSessionAsync(
    Model::StartMedicalScribeListeningSessionRequest& request,
    const StartMedicalScribeListeningSessionStreamReadyHandler& streamReadyHandler,
    const StartMedicalScribeListeningSessionResponseReceivedHandler& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(StartMedicalScribeListeningSession);
  if (!m_endpointProvider) {
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
                ConnectHealthErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)),
            handlerContext);
    return;
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeListeningSession", "Required field: SessionId, is not set");
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
                ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false)),
            handlerContext);
    return;
  }
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeListeningSession", "Required field: DomainId, is not set");
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
                ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false)),
            handlerContext);
    return;
  }
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeListeningSession", "Required field: SubscriptionId, is not set");
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
                ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false)),
            handlerContext);
    return;
  }
  if (!request.LanguageCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeListeningSession", "Required field: LanguageCode, is not set");
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
                ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LanguageCode]", false)),
            handlerContext);
    return;
  }
  if (!request.MediaSampleRateHertzHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeListeningSession", "Required field: MediaSampleRateHertz, is not set");
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
                ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaSampleRateHertz]", false)),
            handlerContext);
    return;
  }
  if (!request.MediaEncodingHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMedicalScribeListeningSession", "Required field: MediaEncoding, is not set");
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
                ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaEncoding]", false)),
            handlerContext);
    return;
  }
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(
                Aws::Client::AWSError<CoreErrors>(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE",
                                                  endpointResolutionOutcome.GetError().GetMessage(), false)),
            handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/medical-scribe-stream/");

#if AWS_SDK_USE_CRT_HTTP
  // Push-based WriteData path (CRT HTTP client only)
  auto writeDataStreamBuf = Aws::MakeShared<Aws::Utils::Stream::HttpWriteDataStreamBuf>(ALLOCATION_TAG, GetHttpClient());
  auto signer = GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);

  auto eventEncoderStream = Aws::MakeShared<Model::MedicalScribeInputStream>(ALLOCATION_TAG, writeDataStreamBuf);
  eventEncoderStream->SetSigner(signer);

  auto requestCopy = Aws::MakeShared<StartMedicalScribeListeningSessionRequest>(ALLOCATION_TAG, request);
  request.SetInputStream(eventEncoderStream);

  auto& endpoint = endpointResolutionOutcome.GetResult();
  auto httpRequest =
      CreateHttpRequest(endpoint.GetURI(), Aws::Http::HttpMethod::HTTP_POST, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  httpRequest->SetEventStreamRequest(true);
  httpRequest->SetHasEventStreamResponse(true);
  BuildHttpRequest(*requestCopy, httpRequest);

  if (!signer->SignRequest(*httpRequest, nullptr, nullptr, true)) {
    handler(this, request,
            StartMedicalScribeListeningSessionOutcome(
                Aws::Client::AWSError<CoreErrors>(CoreErrors::CLIENT_SIGNING_FAILURE, "", "Failed to sign request", false)),
            handlerContext);
    return;
  }
  eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(*httpRequest));

  Aws::Client::SubmitBidirectionalStreamingRequest<ConnectHealthClient, StartMedicalScribeListeningSessionOutcome,
                                                   StartMedicalScribeListeningSessionRequest, Model::MedicalScribeInputStream>(
      this, request, requestCopy, eventEncoderStream, writeDataStreamBuf, httpRequest, m_clientConfiguration.executor.get(),
      streamReadyHandler, handler, handlerContext);
#else
  // Pull-based path (curl/WinHTTP)
  auto eventEncoderStream = Aws::MakeShared<Model::MedicalScribeInputStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<StartMedicalScribeListeningSessionRequest>("StartMedicalScribeListeningSession", request);
  requestCopy->SetInputStream(eventEncoderStream);
  request.SetInputStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<StartMedicalScribeListeningSessionOutcome>(
      this, endpointResolutionOutcome.GetResultWithOwnership(), requestCopy, handler, handlerContext, eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
#endif
}
StartPatientInsightsJobOutcome ConnectHealthClient::StartPatientInsightsJob(const StartPatientInsightsJobRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartPatientInsightsJob", "Required field: DomainId, is not set");
    return StartPatientInsightsJobOutcome(Aws::Client::AWSError<ConnectHealthErrors>(
        ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/patient-insights-job");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartPatientInsightsJobOutcome(result.GetResultWithOwnership())
                            : StartPatientInsightsJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome ConnectHealthClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ConnectHealthClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectHealthErrors>(ConnectHealthErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
