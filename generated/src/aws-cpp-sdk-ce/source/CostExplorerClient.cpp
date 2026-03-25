/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/CostExplorerClient.h>
#include <aws/ce/CostExplorerEndpointProvider.h>
#include <aws/ce/CostExplorerErrorMarshaller.h>
#include <aws/ce/model/CreateAnomalyMonitorRequest.h>
#include <aws/ce/model/CreateAnomalySubscriptionRequest.h>
#include <aws/ce/model/CreateCostCategoryDefinitionRequest.h>
#include <aws/ce/model/DeleteAnomalyMonitorRequest.h>
#include <aws/ce/model/DeleteAnomalySubscriptionRequest.h>
#include <aws/ce/model/DeleteCostCategoryDefinitionRequest.h>
#include <aws/ce/model/DescribeCostCategoryDefinitionRequest.h>
#include <aws/ce/model/GetAnomaliesRequest.h>
#include <aws/ce/model/GetAnomalyMonitorsRequest.h>
#include <aws/ce/model/GetAnomalySubscriptionsRequest.h>
#include <aws/ce/model/GetApproximateUsageRecordsRequest.h>
#include <aws/ce/model/GetCommitmentPurchaseAnalysisRequest.h>
#include <aws/ce/model/GetCostAndUsageComparisonsRequest.h>
#include <aws/ce/model/GetCostAndUsageRequest.h>
#include <aws/ce/model/GetCostAndUsageWithResourcesRequest.h>
#include <aws/ce/model/GetCostCategoriesRequest.h>
#include <aws/ce/model/GetCostComparisonDriversRequest.h>
#include <aws/ce/model/GetCostForecastRequest.h>
#include <aws/ce/model/GetDimensionValuesRequest.h>
#include <aws/ce/model/GetReservationCoverageRequest.h>
#include <aws/ce/model/GetReservationPurchaseRecommendationRequest.h>
#include <aws/ce/model/GetReservationUtilizationRequest.h>
#include <aws/ce/model/GetRightsizingRecommendationRequest.h>
#include <aws/ce/model/GetSavingsPlanPurchaseRecommendationDetailsRequest.h>
#include <aws/ce/model/GetSavingsPlansCoverageRequest.h>
#include <aws/ce/model/GetSavingsPlansPurchaseRecommendationRequest.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsRequest.h>
#include <aws/ce/model/GetSavingsPlansUtilizationRequest.h>
#include <aws/ce/model/GetTagsRequest.h>
#include <aws/ce/model/GetUsageForecastRequest.h>
#include <aws/ce/model/ListCommitmentPurchaseAnalysesRequest.h>
#include <aws/ce/model/ListCostAllocationTagBackfillHistoryRequest.h>
#include <aws/ce/model/ListCostAllocationTagsRequest.h>
#include <aws/ce/model/ListCostCategoryDefinitionsRequest.h>
#include <aws/ce/model/ListCostCategoryResourceAssociationsRequest.h>
#include <aws/ce/model/ListSavingsPlansPurchaseRecommendationGenerationRequest.h>
#include <aws/ce/model/ListTagsForResourceRequest.h>
#include <aws/ce/model/ProvideAnomalyFeedbackRequest.h>
#include <aws/ce/model/StartCommitmentPurchaseAnalysisRequest.h>
#include <aws/ce/model/StartCostAllocationTagBackfillRequest.h>
#include <aws/ce/model/StartSavingsPlansPurchaseRecommendationGenerationRequest.h>
#include <aws/ce/model/TagResourceRequest.h>
#include <aws/ce/model/UntagResourceRequest.h>
#include <aws/ce/model/UpdateAnomalyMonitorRequest.h>
#include <aws/ce/model/UpdateAnomalySubscriptionRequest.h>
#include <aws/ce/model/UpdateCostAllocationTagsStatusRequest.h>
#include <aws/ce/model/UpdateCostCategoryDefinitionRequest.h>
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
using namespace Aws::CostExplorer;
using namespace Aws::CostExplorer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CostExplorer {
const char SERVICE_NAME[] = "ce";
const char ALLOCATION_TAG[] = "CostExplorerClient";
}  // namespace CostExplorer
}  // namespace Aws
const char* CostExplorerClient::GetServiceName() { return SERVICE_NAME; }
const char* CostExplorerClient::GetAllocationTag() { return ALLOCATION_TAG; }

CostExplorerClient::CostExplorerClient(const CostExplorer::CostExplorerClientConfiguration& clientConfiguration,
                                       std::shared_ptr<CostExplorerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CostExplorerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const AWSCredentials& credentials,
                                       std::shared_ptr<CostExplorerEndpointProviderBase> endpointProvider,
                                       const CostExplorer::CostExplorerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CostExplorerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<CostExplorerEndpointProviderBase> endpointProvider,
                                       const CostExplorer::CostExplorerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CostExplorerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CostExplorerClient::CostExplorerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CostExplorerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CostExplorerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CostExplorerClient::CostExplorerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CostExplorerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CostExplorerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CostExplorerClient::~CostExplorerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CostExplorerEndpointProviderBase>& CostExplorerClient::accessEndpointProvider() { return m_endpointProvider; }

void CostExplorerClient::init(const CostExplorer::CostExplorerClientConfiguration& config) {
  AWSClient::SetServiceClientName("Cost Explorer");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ce");
}

void CostExplorerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CostExplorerClient::InvokeOperationOutcome CostExplorerClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateAnomalyMonitorOutcome CostExplorerClient::CreateAnomalyMonitor(const CreateAnomalyMonitorRequest& request) const {
  return CreateAnomalyMonitorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAnomalySubscriptionOutcome CostExplorerClient::CreateAnomalySubscription(const CreateAnomalySubscriptionRequest& request) const {
  return CreateAnomalySubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCostCategoryDefinitionOutcome CostExplorerClient::CreateCostCategoryDefinition(
    const CreateCostCategoryDefinitionRequest& request) const {
  return CreateCostCategoryDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAnomalyMonitorOutcome CostExplorerClient::DeleteAnomalyMonitor(const DeleteAnomalyMonitorRequest& request) const {
  return DeleteAnomalyMonitorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAnomalySubscriptionOutcome CostExplorerClient::DeleteAnomalySubscription(const DeleteAnomalySubscriptionRequest& request) const {
  return DeleteAnomalySubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCostCategoryDefinitionOutcome CostExplorerClient::DeleteCostCategoryDefinition(
    const DeleteCostCategoryDefinitionRequest& request) const {
  return DeleteCostCategoryDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCostCategoryDefinitionOutcome CostExplorerClient::DescribeCostCategoryDefinition(
    const DescribeCostCategoryDefinitionRequest& request) const {
  return DescribeCostCategoryDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAnomaliesOutcome CostExplorerClient::GetAnomalies(const GetAnomaliesRequest& request) const {
  return GetAnomaliesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAnomalyMonitorsOutcome CostExplorerClient::GetAnomalyMonitors(const GetAnomalyMonitorsRequest& request) const {
  return GetAnomalyMonitorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAnomalySubscriptionsOutcome CostExplorerClient::GetAnomalySubscriptions(const GetAnomalySubscriptionsRequest& request) const {
  return GetAnomalySubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApproximateUsageRecordsOutcome CostExplorerClient::GetApproximateUsageRecords(const GetApproximateUsageRecordsRequest& request) const {
  return GetApproximateUsageRecordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommitmentPurchaseAnalysisOutcome CostExplorerClient::GetCommitmentPurchaseAnalysis(
    const GetCommitmentPurchaseAnalysisRequest& request) const {
  return GetCommitmentPurchaseAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCostAndUsageOutcome CostExplorerClient::GetCostAndUsage(const GetCostAndUsageRequest& request) const {
  return GetCostAndUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCostAndUsageComparisonsOutcome CostExplorerClient::GetCostAndUsageComparisons(const GetCostAndUsageComparisonsRequest& request) const {
  return GetCostAndUsageComparisonsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCostAndUsageWithResourcesOutcome CostExplorerClient::GetCostAndUsageWithResources(
    const GetCostAndUsageWithResourcesRequest& request) const {
  return GetCostAndUsageWithResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCostCategoriesOutcome CostExplorerClient::GetCostCategories(const GetCostCategoriesRequest& request) const {
  return GetCostCategoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCostComparisonDriversOutcome CostExplorerClient::GetCostComparisonDrivers(const GetCostComparisonDriversRequest& request) const {
  return GetCostComparisonDriversOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCostForecastOutcome CostExplorerClient::GetCostForecast(const GetCostForecastRequest& request) const {
  return GetCostForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDimensionValuesOutcome CostExplorerClient::GetDimensionValues(const GetDimensionValuesRequest& request) const {
  return GetDimensionValuesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReservationCoverageOutcome CostExplorerClient::GetReservationCoverage(const GetReservationCoverageRequest& request) const {
  return GetReservationCoverageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReservationPurchaseRecommendationOutcome CostExplorerClient::GetReservationPurchaseRecommendation(
    const GetReservationPurchaseRecommendationRequest& request) const {
  return GetReservationPurchaseRecommendationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReservationUtilizationOutcome CostExplorerClient::GetReservationUtilization(const GetReservationUtilizationRequest& request) const {
  return GetReservationUtilizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRightsizingRecommendationOutcome CostExplorerClient::GetRightsizingRecommendation(
    const GetRightsizingRecommendationRequest& request) const {
  return GetRightsizingRecommendationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSavingsPlanPurchaseRecommendationDetailsOutcome CostExplorerClient::GetSavingsPlanPurchaseRecommendationDetails(
    const GetSavingsPlanPurchaseRecommendationDetailsRequest& request) const {
  return GetSavingsPlanPurchaseRecommendationDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSavingsPlansCoverageOutcome CostExplorerClient::GetSavingsPlansCoverage(const GetSavingsPlansCoverageRequest& request) const {
  return GetSavingsPlansCoverageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSavingsPlansPurchaseRecommendationOutcome CostExplorerClient::GetSavingsPlansPurchaseRecommendation(
    const GetSavingsPlansPurchaseRecommendationRequest& request) const {
  return GetSavingsPlansPurchaseRecommendationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSavingsPlansUtilizationOutcome CostExplorerClient::GetSavingsPlansUtilization(const GetSavingsPlansUtilizationRequest& request) const {
  return GetSavingsPlansUtilizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSavingsPlansUtilizationDetailsOutcome CostExplorerClient::GetSavingsPlansUtilizationDetails(
    const GetSavingsPlansUtilizationDetailsRequest& request) const {
  return GetSavingsPlansUtilizationDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTagsOutcome CostExplorerClient::GetTags(const GetTagsRequest& request) const {
  return GetTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUsageForecastOutcome CostExplorerClient::GetUsageForecast(const GetUsageForecastRequest& request) const {
  return GetUsageForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCommitmentPurchaseAnalysesOutcome CostExplorerClient::ListCommitmentPurchaseAnalyses(
    const ListCommitmentPurchaseAnalysesRequest& request) const {
  return ListCommitmentPurchaseAnalysesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCostAllocationTagBackfillHistoryOutcome CostExplorerClient::ListCostAllocationTagBackfillHistory(
    const ListCostAllocationTagBackfillHistoryRequest& request) const {
  return ListCostAllocationTagBackfillHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCostAllocationTagsOutcome CostExplorerClient::ListCostAllocationTags(const ListCostAllocationTagsRequest& request) const {
  return ListCostAllocationTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCostCategoryDefinitionsOutcome CostExplorerClient::ListCostCategoryDefinitions(
    const ListCostCategoryDefinitionsRequest& request) const {
  return ListCostCategoryDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCostCategoryResourceAssociationsOutcome CostExplorerClient::ListCostCategoryResourceAssociations(
    const ListCostCategoryResourceAssociationsRequest& request) const {
  return ListCostCategoryResourceAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSavingsPlansPurchaseRecommendationGenerationOutcome CostExplorerClient::ListSavingsPlansPurchaseRecommendationGeneration(
    const ListSavingsPlansPurchaseRecommendationGenerationRequest& request) const {
  return ListSavingsPlansPurchaseRecommendationGenerationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CostExplorerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ProvideAnomalyFeedbackOutcome CostExplorerClient::ProvideAnomalyFeedback(const ProvideAnomalyFeedbackRequest& request) const {
  return ProvideAnomalyFeedbackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCommitmentPurchaseAnalysisOutcome CostExplorerClient::StartCommitmentPurchaseAnalysis(
    const StartCommitmentPurchaseAnalysisRequest& request) const {
  return StartCommitmentPurchaseAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCostAllocationTagBackfillOutcome CostExplorerClient::StartCostAllocationTagBackfill(
    const StartCostAllocationTagBackfillRequest& request) const {
  return StartCostAllocationTagBackfillOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSavingsPlansPurchaseRecommendationGenerationOutcome CostExplorerClient::StartSavingsPlansPurchaseRecommendationGeneration(
    const StartSavingsPlansPurchaseRecommendationGenerationRequest& request) const {
  return StartSavingsPlansPurchaseRecommendationGenerationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CostExplorerClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CostExplorerClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAnomalyMonitorOutcome CostExplorerClient::UpdateAnomalyMonitor(const UpdateAnomalyMonitorRequest& request) const {
  return UpdateAnomalyMonitorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAnomalySubscriptionOutcome CostExplorerClient::UpdateAnomalySubscription(const UpdateAnomalySubscriptionRequest& request) const {
  return UpdateAnomalySubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCostAllocationTagsStatusOutcome CostExplorerClient::UpdateCostAllocationTagsStatus(
    const UpdateCostAllocationTagsStatusRequest& request) const {
  return UpdateCostAllocationTagsStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCostCategoryDefinitionOutcome CostExplorerClient::UpdateCostCategoryDefinition(
    const UpdateCostCategoryDefinitionRequest& request) const {
  return UpdateCostCategoryDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
