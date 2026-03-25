/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/cost-optimization-hub/CostOptimizationHubClient.h>
#include <aws/cost-optimization-hub/CostOptimizationHubEndpointProvider.h>
#include <aws/cost-optimization-hub/CostOptimizationHubErrorMarshaller.h>
#include <aws/cost-optimization-hub/model/GetPreferencesRequest.h>
#include <aws/cost-optimization-hub/model/GetRecommendationRequest.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsRequest.h>
#include <aws/cost-optimization-hub/model/ListEnrollmentStatusesRequest.h>
#include <aws/cost-optimization-hub/model/ListRecommendationSummariesRequest.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsRequest.h>
#include <aws/cost-optimization-hub/model/UpdateEnrollmentStatusRequest.h>
#include <aws/cost-optimization-hub/model/UpdatePreferencesRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CostOptimizationHub;
using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CostOptimizationHub {
const char SERVICE_NAME[] = "cost-optimization-hub";
const char ALLOCATION_TAG[] = "CostOptimizationHubClient";
}  // namespace CostOptimizationHub
}  // namespace Aws
const char* CostOptimizationHubClient::GetServiceName() { return SERVICE_NAME; }
const char* CostOptimizationHubClient::GetAllocationTag() { return ALLOCATION_TAG; }

CostOptimizationHubClient::CostOptimizationHubClient(const CostOptimizationHub::CostOptimizationHubClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<CostOptimizationHubEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostOptimizationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CostOptimizationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostOptimizationHubClient::CostOptimizationHubClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<CostOptimizationHubEndpointProviderBase> endpointProvider,
                                                     const CostOptimizationHub::CostOptimizationHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostOptimizationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CostOptimizationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostOptimizationHubClient::CostOptimizationHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<CostOptimizationHubEndpointProviderBase> endpointProvider,
                                                     const CostOptimizationHub::CostOptimizationHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostOptimizationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CostOptimizationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CostOptimizationHubClient::CostOptimizationHubClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostOptimizationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CostOptimizationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostOptimizationHubClient::CostOptimizationHubClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostOptimizationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CostOptimizationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostOptimizationHubClient::CostOptimizationHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostOptimizationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CostOptimizationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CostOptimizationHubClient::~CostOptimizationHubClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CostOptimizationHubEndpointProviderBase>& CostOptimizationHubClient::accessEndpointProvider() { return m_endpointProvider; }

void CostOptimizationHubClient::init(const CostOptimizationHub::CostOptimizationHubClientConfiguration& config) {
  AWSClient::SetServiceClientName("Cost Optimization Hub");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cost-optimization-hub");
}

void CostOptimizationHubClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CostOptimizationHubClient::InvokeOperationOutcome CostOptimizationHubClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

GetPreferencesOutcome CostOptimizationHubClient::GetPreferences(const GetPreferencesRequest& request) const {
  return GetPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRecommendationOutcome CostOptimizationHubClient::GetRecommendation(const GetRecommendationRequest& request) const {
  return GetRecommendationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEfficiencyMetricsOutcome CostOptimizationHubClient::ListEfficiencyMetrics(const ListEfficiencyMetricsRequest& request) const {
  return ListEfficiencyMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEnrollmentStatusesOutcome CostOptimizationHubClient::ListEnrollmentStatuses(const ListEnrollmentStatusesRequest& request) const {
  return ListEnrollmentStatusesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecommendationSummariesOutcome CostOptimizationHubClient::ListRecommendationSummaries(
    const ListRecommendationSummariesRequest& request) const {
  return ListRecommendationSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecommendationsOutcome CostOptimizationHubClient::ListRecommendations(const ListRecommendationsRequest& request) const {
  return ListRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEnrollmentStatusOutcome CostOptimizationHubClient::UpdateEnrollmentStatus(const UpdateEnrollmentStatusRequest& request) const {
  return UpdateEnrollmentStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePreferencesOutcome CostOptimizationHubClient::UpdatePreferences(const UpdatePreferencesRequest& request) const {
  return UpdatePreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
