/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/ApplicationInsightsClient.h>
#include <aws/application-insights/ApplicationInsightsEndpointProvider.h>
#include <aws/application-insights/ApplicationInsightsErrorMarshaller.h>
#include <aws/application-insights/model/AddWorkloadRequest.h>
#include <aws/application-insights/model/CreateApplicationRequest.h>
#include <aws/application-insights/model/CreateComponentRequest.h>
#include <aws/application-insights/model/CreateLogPatternRequest.h>
#include <aws/application-insights/model/DeleteApplicationRequest.h>
#include <aws/application-insights/model/DeleteComponentRequest.h>
#include <aws/application-insights/model/DeleteLogPatternRequest.h>
#include <aws/application-insights/model/DescribeApplicationRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRequest.h>
#include <aws/application-insights/model/DescribeComponentRequest.h>
#include <aws/application-insights/model/DescribeLogPatternRequest.h>
#include <aws/application-insights/model/DescribeObservationRequest.h>
#include <aws/application-insights/model/DescribeProblemObservationsRequest.h>
#include <aws/application-insights/model/DescribeProblemRequest.h>
#include <aws/application-insights/model/DescribeWorkloadRequest.h>
#include <aws/application-insights/model/ListApplicationsRequest.h>
#include <aws/application-insights/model/ListComponentsRequest.h>
#include <aws/application-insights/model/ListConfigurationHistoryRequest.h>
#include <aws/application-insights/model/ListLogPatternSetsRequest.h>
#include <aws/application-insights/model/ListLogPatternsRequest.h>
#include <aws/application-insights/model/ListProblemsRequest.h>
#include <aws/application-insights/model/ListTagsForResourceRequest.h>
#include <aws/application-insights/model/ListWorkloadsRequest.h>
#include <aws/application-insights/model/RemoveWorkloadRequest.h>
#include <aws/application-insights/model/TagResourceRequest.h>
#include <aws/application-insights/model/UntagResourceRequest.h>
#include <aws/application-insights/model/UpdateApplicationRequest.h>
#include <aws/application-insights/model/UpdateComponentConfigurationRequest.h>
#include <aws/application-insights/model/UpdateComponentRequest.h>
#include <aws/application-insights/model/UpdateLogPatternRequest.h>
#include <aws/application-insights/model/UpdateProblemRequest.h>
#include <aws/application-insights/model/UpdateWorkloadRequest.h>
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
using namespace Aws::ApplicationInsights;
using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ApplicationInsights {
const char SERVICE_NAME[] = "applicationinsights";
const char ALLOCATION_TAG[] = "ApplicationInsightsClient";
}  // namespace ApplicationInsights
}  // namespace Aws
const char* ApplicationInsightsClient::GetServiceName() { return SERVICE_NAME; }
const char* ApplicationInsightsClient::GetAllocationTag() { return ALLOCATION_TAG; }

ApplicationInsightsClient::ApplicationInsightsClient(const ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider,
                                                     const ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider,
                                                     const ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ApplicationInsightsClient::ApplicationInsightsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ApplicationInsightsClient::~ApplicationInsightsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ApplicationInsightsEndpointProviderBase>& ApplicationInsightsClient::accessEndpointProvider() { return m_endpointProvider; }

void ApplicationInsightsClient::init(const ApplicationInsights::ApplicationInsightsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Application Insights");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "applicationinsights");
}

void ApplicationInsightsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ApplicationInsightsClient::InvokeOperationOutcome ApplicationInsightsClient::InvokeServiceOperation(
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

AddWorkloadOutcome ApplicationInsightsClient::AddWorkload(const AddWorkloadRequest& request) const {
  return AddWorkloadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome ApplicationInsightsClient::CreateApplication(const CreateApplicationRequest& request) const {
  return CreateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateComponentOutcome ApplicationInsightsClient::CreateComponent(const CreateComponentRequest& request) const {
  return CreateComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLogPatternOutcome ApplicationInsightsClient::CreateLogPattern(const CreateLogPatternRequest& request) const {
  return CreateLogPatternOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome ApplicationInsightsClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  return DeleteApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteComponentOutcome ApplicationInsightsClient::DeleteComponent(const DeleteComponentRequest& request) const {
  return DeleteComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLogPatternOutcome ApplicationInsightsClient::DeleteLogPattern(const DeleteLogPatternRequest& request) const {
  return DeleteLogPatternOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationOutcome ApplicationInsightsClient::DescribeApplication(const DescribeApplicationRequest& request) const {
  return DescribeApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeComponentOutcome ApplicationInsightsClient::DescribeComponent(const DescribeComponentRequest& request) const {
  return DescribeComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeComponentConfigurationOutcome ApplicationInsightsClient::DescribeComponentConfiguration(
    const DescribeComponentConfigurationRequest& request) const {
  return DescribeComponentConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeComponentConfigurationRecommendationOutcome ApplicationInsightsClient::DescribeComponentConfigurationRecommendation(
    const DescribeComponentConfigurationRecommendationRequest& request) const {
  return DescribeComponentConfigurationRecommendationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLogPatternOutcome ApplicationInsightsClient::DescribeLogPattern(const DescribeLogPatternRequest& request) const {
  return DescribeLogPatternOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeObservationOutcome ApplicationInsightsClient::DescribeObservation(const DescribeObservationRequest& request) const {
  return DescribeObservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProblemOutcome ApplicationInsightsClient::DescribeProblem(const DescribeProblemRequest& request) const {
  return DescribeProblemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProblemObservationsOutcome ApplicationInsightsClient::DescribeProblemObservations(
    const DescribeProblemObservationsRequest& request) const {
  return DescribeProblemObservationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkloadOutcome ApplicationInsightsClient::DescribeWorkload(const DescribeWorkloadRequest& request) const {
  return DescribeWorkloadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationsOutcome ApplicationInsightsClient::ListApplications(const ListApplicationsRequest& request) const {
  return ListApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComponentsOutcome ApplicationInsightsClient::ListComponents(const ListComponentsRequest& request) const {
  return ListComponentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConfigurationHistoryOutcome ApplicationInsightsClient::ListConfigurationHistory(const ListConfigurationHistoryRequest& request) const {
  return ListConfigurationHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLogPatternSetsOutcome ApplicationInsightsClient::ListLogPatternSets(const ListLogPatternSetsRequest& request) const {
  return ListLogPatternSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLogPatternsOutcome ApplicationInsightsClient::ListLogPatterns(const ListLogPatternsRequest& request) const {
  return ListLogPatternsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProblemsOutcome ApplicationInsightsClient::ListProblems(const ListProblemsRequest& request) const {
  return ListProblemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ApplicationInsightsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkloadsOutcome ApplicationInsightsClient::ListWorkloads(const ListWorkloadsRequest& request) const {
  return ListWorkloadsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveWorkloadOutcome ApplicationInsightsClient::RemoveWorkload(const RemoveWorkloadRequest& request) const {
  return RemoveWorkloadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ApplicationInsightsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ApplicationInsightsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome ApplicationInsightsClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  return UpdateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateComponentOutcome ApplicationInsightsClient::UpdateComponent(const UpdateComponentRequest& request) const {
  return UpdateComponentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateComponentConfigurationOutcome ApplicationInsightsClient::UpdateComponentConfiguration(
    const UpdateComponentConfigurationRequest& request) const {
  return UpdateComponentConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLogPatternOutcome ApplicationInsightsClient::UpdateLogPattern(const UpdateLogPatternRequest& request) const {
  return UpdateLogPatternOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProblemOutcome ApplicationInsightsClient::UpdateProblem(const UpdateProblemRequest& request) const {
  return UpdateProblemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkloadOutcome ApplicationInsightsClient::UpdateWorkload(const UpdateWorkloadRequest& request) const {
  return UpdateWorkloadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
