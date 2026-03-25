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
#include <aws/forecast/ForecastServiceClient.h>
#include <aws/forecast/ForecastServiceEndpointProvider.h>
#include <aws/forecast/ForecastServiceErrorMarshaller.h>
#include <aws/forecast/model/CreateAutoPredictorRequest.h>
#include <aws/forecast/model/CreateDatasetGroupRequest.h>
#include <aws/forecast/model/CreateDatasetImportJobRequest.h>
#include <aws/forecast/model/CreateDatasetRequest.h>
#include <aws/forecast/model/CreateExplainabilityExportRequest.h>
#include <aws/forecast/model/CreateExplainabilityRequest.h>
#include <aws/forecast/model/CreateForecastExportJobRequest.h>
#include <aws/forecast/model/CreateForecastRequest.h>
#include <aws/forecast/model/CreateMonitorRequest.h>
#include <aws/forecast/model/CreatePredictorBacktestExportJobRequest.h>
#include <aws/forecast/model/CreatePredictorRequest.h>
#include <aws/forecast/model/CreateWhatIfAnalysisRequest.h>
#include <aws/forecast/model/CreateWhatIfForecastExportRequest.h>
#include <aws/forecast/model/CreateWhatIfForecastRequest.h>
#include <aws/forecast/model/DeleteDatasetGroupRequest.h>
#include <aws/forecast/model/DeleteDatasetImportJobRequest.h>
#include <aws/forecast/model/DeleteDatasetRequest.h>
#include <aws/forecast/model/DeleteExplainabilityExportRequest.h>
#include <aws/forecast/model/DeleteExplainabilityRequest.h>
#include <aws/forecast/model/DeleteForecastExportJobRequest.h>
#include <aws/forecast/model/DeleteForecastRequest.h>
#include <aws/forecast/model/DeleteMonitorRequest.h>
#include <aws/forecast/model/DeletePredictorBacktestExportJobRequest.h>
#include <aws/forecast/model/DeletePredictorRequest.h>
#include <aws/forecast/model/DeleteResourceTreeRequest.h>
#include <aws/forecast/model/DeleteWhatIfAnalysisRequest.h>
#include <aws/forecast/model/DeleteWhatIfForecastExportRequest.h>
#include <aws/forecast/model/DeleteWhatIfForecastRequest.h>
#include <aws/forecast/model/DescribeAutoPredictorRequest.h>
#include <aws/forecast/model/DescribeDatasetGroupRequest.h>
#include <aws/forecast/model/DescribeDatasetImportJobRequest.h>
#include <aws/forecast/model/DescribeDatasetRequest.h>
#include <aws/forecast/model/DescribeExplainabilityExportRequest.h>
#include <aws/forecast/model/DescribeExplainabilityRequest.h>
#include <aws/forecast/model/DescribeForecastExportJobRequest.h>
#include <aws/forecast/model/DescribeForecastRequest.h>
#include <aws/forecast/model/DescribeMonitorRequest.h>
#include <aws/forecast/model/DescribePredictorBacktestExportJobRequest.h>
#include <aws/forecast/model/DescribePredictorRequest.h>
#include <aws/forecast/model/DescribeWhatIfAnalysisRequest.h>
#include <aws/forecast/model/DescribeWhatIfForecastExportRequest.h>
#include <aws/forecast/model/DescribeWhatIfForecastRequest.h>
#include <aws/forecast/model/GetAccuracyMetricsRequest.h>
#include <aws/forecast/model/ListDatasetGroupsRequest.h>
#include <aws/forecast/model/ListDatasetImportJobsRequest.h>
#include <aws/forecast/model/ListDatasetsRequest.h>
#include <aws/forecast/model/ListExplainabilitiesRequest.h>
#include <aws/forecast/model/ListExplainabilityExportsRequest.h>
#include <aws/forecast/model/ListForecastExportJobsRequest.h>
#include <aws/forecast/model/ListForecastsRequest.h>
#include <aws/forecast/model/ListMonitorEvaluationsRequest.h>
#include <aws/forecast/model/ListMonitorsRequest.h>
#include <aws/forecast/model/ListPredictorBacktestExportJobsRequest.h>
#include <aws/forecast/model/ListPredictorsRequest.h>
#include <aws/forecast/model/ListTagsForResourceRequest.h>
#include <aws/forecast/model/ListWhatIfAnalysesRequest.h>
#include <aws/forecast/model/ListWhatIfForecastExportsRequest.h>
#include <aws/forecast/model/ListWhatIfForecastsRequest.h>
#include <aws/forecast/model/ResumeResourceRequest.h>
#include <aws/forecast/model/StopResourceRequest.h>
#include <aws/forecast/model/TagResourceRequest.h>
#include <aws/forecast/model/UntagResourceRequest.h>
#include <aws/forecast/model/UpdateDatasetGroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ForecastService;
using namespace Aws::ForecastService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ForecastService {
const char SERVICE_NAME[] = "forecast";
const char ALLOCATION_TAG[] = "ForecastServiceClient";
}  // namespace ForecastService
}  // namespace Aws
const char* ForecastServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* ForecastServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

ForecastServiceClient::ForecastServiceClient(const ForecastService::ForecastServiceClientConfiguration& clientConfiguration,
                                             std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const AWSCredentials& credentials,
                                             std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider,
                                             const ForecastService::ForecastServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider,
                                             const ForecastService::ForecastServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ForecastServiceClient::ForecastServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ForecastServiceClient::~ForecastServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ForecastServiceEndpointProviderBase>& ForecastServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void ForecastServiceClient::init(const ForecastService::ForecastServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("forecast");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "forecast");
}

void ForecastServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ForecastServiceClient::InvokeOperationOutcome ForecastServiceClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateAutoPredictorOutcome ForecastServiceClient::CreateAutoPredictor(const CreateAutoPredictorRequest& request) const {
  return CreateAutoPredictorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetOutcome ForecastServiceClient::CreateDataset(const CreateDatasetRequest& request) const {
  return CreateDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetGroupOutcome ForecastServiceClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const {
  return CreateDatasetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetImportJobOutcome ForecastServiceClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const {
  return CreateDatasetImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExplainabilityOutcome ForecastServiceClient::CreateExplainability(const CreateExplainabilityRequest& request) const {
  return CreateExplainabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExplainabilityExportOutcome ForecastServiceClient::CreateExplainabilityExport(
    const CreateExplainabilityExportRequest& request) const {
  return CreateExplainabilityExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateForecastOutcome ForecastServiceClient::CreateForecast(const CreateForecastRequest& request) const {
  return CreateForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateForecastExportJobOutcome ForecastServiceClient::CreateForecastExportJob(const CreateForecastExportJobRequest& request) const {
  return CreateForecastExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMonitorOutcome ForecastServiceClient::CreateMonitor(const CreateMonitorRequest& request) const {
  return CreateMonitorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePredictorOutcome ForecastServiceClient::CreatePredictor(const CreatePredictorRequest& request) const {
  return CreatePredictorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePredictorBacktestExportJobOutcome ForecastServiceClient::CreatePredictorBacktestExportJob(
    const CreatePredictorBacktestExportJobRequest& request) const {
  return CreatePredictorBacktestExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWhatIfAnalysisOutcome ForecastServiceClient::CreateWhatIfAnalysis(const CreateWhatIfAnalysisRequest& request) const {
  return CreateWhatIfAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWhatIfForecastOutcome ForecastServiceClient::CreateWhatIfForecast(const CreateWhatIfForecastRequest& request) const {
  return CreateWhatIfForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWhatIfForecastExportOutcome ForecastServiceClient::CreateWhatIfForecastExport(
    const CreateWhatIfForecastExportRequest& request) const {
  return CreateWhatIfForecastExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetOutcome ForecastServiceClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  return DeleteDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetGroupOutcome ForecastServiceClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const {
  return DeleteDatasetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetImportJobOutcome ForecastServiceClient::DeleteDatasetImportJob(const DeleteDatasetImportJobRequest& request) const {
  return DeleteDatasetImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExplainabilityOutcome ForecastServiceClient::DeleteExplainability(const DeleteExplainabilityRequest& request) const {
  return DeleteExplainabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExplainabilityExportOutcome ForecastServiceClient::DeleteExplainabilityExport(
    const DeleteExplainabilityExportRequest& request) const {
  return DeleteExplainabilityExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteForecastOutcome ForecastServiceClient::DeleteForecast(const DeleteForecastRequest& request) const {
  return DeleteForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteForecastExportJobOutcome ForecastServiceClient::DeleteForecastExportJob(const DeleteForecastExportJobRequest& request) const {
  return DeleteForecastExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMonitorOutcome ForecastServiceClient::DeleteMonitor(const DeleteMonitorRequest& request) const {
  return DeleteMonitorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePredictorOutcome ForecastServiceClient::DeletePredictor(const DeletePredictorRequest& request) const {
  return DeletePredictorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePredictorBacktestExportJobOutcome ForecastServiceClient::DeletePredictorBacktestExportJob(
    const DeletePredictorBacktestExportJobRequest& request) const {
  return DeletePredictorBacktestExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourceTreeOutcome ForecastServiceClient::DeleteResourceTree(const DeleteResourceTreeRequest& request) const {
  return DeleteResourceTreeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWhatIfAnalysisOutcome ForecastServiceClient::DeleteWhatIfAnalysis(const DeleteWhatIfAnalysisRequest& request) const {
  return DeleteWhatIfAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWhatIfForecastOutcome ForecastServiceClient::DeleteWhatIfForecast(const DeleteWhatIfForecastRequest& request) const {
  return DeleteWhatIfForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWhatIfForecastExportOutcome ForecastServiceClient::DeleteWhatIfForecastExport(
    const DeleteWhatIfForecastExportRequest& request) const {
  return DeleteWhatIfForecastExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutoPredictorOutcome ForecastServiceClient::DescribeAutoPredictor(const DescribeAutoPredictorRequest& request) const {
  return DescribeAutoPredictorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetOutcome ForecastServiceClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  return DescribeDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetGroupOutcome ForecastServiceClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const {
  return DescribeDatasetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetImportJobOutcome ForecastServiceClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const {
  return DescribeDatasetImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExplainabilityOutcome ForecastServiceClient::DescribeExplainability(const DescribeExplainabilityRequest& request) const {
  return DescribeExplainabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExplainabilityExportOutcome ForecastServiceClient::DescribeExplainabilityExport(
    const DescribeExplainabilityExportRequest& request) const {
  return DescribeExplainabilityExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeForecastOutcome ForecastServiceClient::DescribeForecast(const DescribeForecastRequest& request) const {
  return DescribeForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeForecastExportJobOutcome ForecastServiceClient::DescribeForecastExportJob(const DescribeForecastExportJobRequest& request) const {
  return DescribeForecastExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMonitorOutcome ForecastServiceClient::DescribeMonitor(const DescribeMonitorRequest& request) const {
  return DescribeMonitorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePredictorOutcome ForecastServiceClient::DescribePredictor(const DescribePredictorRequest& request) const {
  return DescribePredictorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePredictorBacktestExportJobOutcome ForecastServiceClient::DescribePredictorBacktestExportJob(
    const DescribePredictorBacktestExportJobRequest& request) const {
  return DescribePredictorBacktestExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWhatIfAnalysisOutcome ForecastServiceClient::DescribeWhatIfAnalysis(const DescribeWhatIfAnalysisRequest& request) const {
  return DescribeWhatIfAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWhatIfForecastOutcome ForecastServiceClient::DescribeWhatIfForecast(const DescribeWhatIfForecastRequest& request) const {
  return DescribeWhatIfForecastOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWhatIfForecastExportOutcome ForecastServiceClient::DescribeWhatIfForecastExport(
    const DescribeWhatIfForecastExportRequest& request) const {
  return DescribeWhatIfForecastExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccuracyMetricsOutcome ForecastServiceClient::GetAccuracyMetrics(const GetAccuracyMetricsRequest& request) const {
  return GetAccuracyMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetGroupsOutcome ForecastServiceClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const {
  return ListDatasetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetImportJobsOutcome ForecastServiceClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const {
  return ListDatasetImportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetsOutcome ForecastServiceClient::ListDatasets(const ListDatasetsRequest& request) const {
  return ListDatasetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExplainabilitiesOutcome ForecastServiceClient::ListExplainabilities(const ListExplainabilitiesRequest& request) const {
  return ListExplainabilitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExplainabilityExportsOutcome ForecastServiceClient::ListExplainabilityExports(const ListExplainabilityExportsRequest& request) const {
  return ListExplainabilityExportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListForecastExportJobsOutcome ForecastServiceClient::ListForecastExportJobs(const ListForecastExportJobsRequest& request) const {
  return ListForecastExportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListForecastsOutcome ForecastServiceClient::ListForecasts(const ListForecastsRequest& request) const {
  return ListForecastsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMonitorEvaluationsOutcome ForecastServiceClient::ListMonitorEvaluations(const ListMonitorEvaluationsRequest& request) const {
  return ListMonitorEvaluationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMonitorsOutcome ForecastServiceClient::ListMonitors(const ListMonitorsRequest& request) const {
  return ListMonitorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPredictorBacktestExportJobsOutcome ForecastServiceClient::ListPredictorBacktestExportJobs(
    const ListPredictorBacktestExportJobsRequest& request) const {
  return ListPredictorBacktestExportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPredictorsOutcome ForecastServiceClient::ListPredictors(const ListPredictorsRequest& request) const {
  return ListPredictorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ForecastServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWhatIfAnalysesOutcome ForecastServiceClient::ListWhatIfAnalyses(const ListWhatIfAnalysesRequest& request) const {
  return ListWhatIfAnalysesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWhatIfForecastExportsOutcome ForecastServiceClient::ListWhatIfForecastExports(const ListWhatIfForecastExportsRequest& request) const {
  return ListWhatIfForecastExportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWhatIfForecastsOutcome ForecastServiceClient::ListWhatIfForecasts(const ListWhatIfForecastsRequest& request) const {
  return ListWhatIfForecastsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeResourceOutcome ForecastServiceClient::ResumeResource(const ResumeResourceRequest& request) const {
  return ResumeResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopResourceOutcome ForecastServiceClient::StopResource(const StopResourceRequest& request) const {
  return StopResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ForecastServiceClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ForecastServiceClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDatasetGroupOutcome ForecastServiceClient::UpdateDatasetGroup(const UpdateDatasetGroupRequest& request) const {
  return UpdateDatasetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
