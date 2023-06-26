/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/forecast/ForecastServiceClient.h>
#include <aws/forecast/ForecastServiceErrorMarshaller.h>
#include <aws/forecast/ForecastServiceEndpointProvider.h>
#include <aws/forecast/model/CreateAutoPredictorRequest.h>
#include <aws/forecast/model/CreateDatasetRequest.h>
#include <aws/forecast/model/CreateDatasetGroupRequest.h>
#include <aws/forecast/model/CreateDatasetImportJobRequest.h>
#include <aws/forecast/model/CreateExplainabilityRequest.h>
#include <aws/forecast/model/CreateExplainabilityExportRequest.h>
#include <aws/forecast/model/CreateForecastRequest.h>
#include <aws/forecast/model/CreateForecastExportJobRequest.h>
#include <aws/forecast/model/CreateMonitorRequest.h>
#include <aws/forecast/model/CreatePredictorRequest.h>
#include <aws/forecast/model/CreatePredictorBacktestExportJobRequest.h>
#include <aws/forecast/model/CreateWhatIfAnalysisRequest.h>
#include <aws/forecast/model/CreateWhatIfForecastRequest.h>
#include <aws/forecast/model/CreateWhatIfForecastExportRequest.h>
#include <aws/forecast/model/DeleteDatasetRequest.h>
#include <aws/forecast/model/DeleteDatasetGroupRequest.h>
#include <aws/forecast/model/DeleteDatasetImportJobRequest.h>
#include <aws/forecast/model/DeleteExplainabilityRequest.h>
#include <aws/forecast/model/DeleteExplainabilityExportRequest.h>
#include <aws/forecast/model/DeleteForecastRequest.h>
#include <aws/forecast/model/DeleteForecastExportJobRequest.h>
#include <aws/forecast/model/DeleteMonitorRequest.h>
#include <aws/forecast/model/DeletePredictorRequest.h>
#include <aws/forecast/model/DeletePredictorBacktestExportJobRequest.h>
#include <aws/forecast/model/DeleteResourceTreeRequest.h>
#include <aws/forecast/model/DeleteWhatIfAnalysisRequest.h>
#include <aws/forecast/model/DeleteWhatIfForecastRequest.h>
#include <aws/forecast/model/DeleteWhatIfForecastExportRequest.h>
#include <aws/forecast/model/DescribeAutoPredictorRequest.h>
#include <aws/forecast/model/DescribeDatasetRequest.h>
#include <aws/forecast/model/DescribeDatasetGroupRequest.h>
#include <aws/forecast/model/DescribeDatasetImportJobRequest.h>
#include <aws/forecast/model/DescribeExplainabilityRequest.h>
#include <aws/forecast/model/DescribeExplainabilityExportRequest.h>
#include <aws/forecast/model/DescribeForecastRequest.h>
#include <aws/forecast/model/DescribeForecastExportJobRequest.h>
#include <aws/forecast/model/DescribeMonitorRequest.h>
#include <aws/forecast/model/DescribePredictorRequest.h>
#include <aws/forecast/model/DescribePredictorBacktestExportJobRequest.h>
#include <aws/forecast/model/DescribeWhatIfAnalysisRequest.h>
#include <aws/forecast/model/DescribeWhatIfForecastRequest.h>
#include <aws/forecast/model/DescribeWhatIfForecastExportRequest.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ForecastService;
using namespace Aws::ForecastService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ForecastServiceClient::SERVICE_NAME = "forecast";
const char* ForecastServiceClient::ALLOCATION_TAG = "ForecastServiceClient";

ForecastServiceClient::ForecastServiceClient(const ForecastService::ForecastServiceClientConfiguration& clientConfiguration,
                                             std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const AWSCredentials& credentials,
                                             std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider,
                                             const ForecastService::ForecastServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider,
                                             const ForecastService::ForecastServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ForecastServiceClient::ForecastServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ForecastServiceClient::~ForecastServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ForecastServiceEndpointProviderBase>& ForecastServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ForecastServiceClient::init(const ForecastService::ForecastServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("forecast");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ForecastServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAutoPredictorOutcome ForecastServiceClient::CreateAutoPredictor(const CreateAutoPredictorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAutoPredictor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAutoPredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcome ForecastServiceClient::CreateDataset(const CreateDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetGroupOutcome ForecastServiceClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDatasetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetImportJobOutcome ForecastServiceClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDatasetImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExplainabilityOutcome ForecastServiceClient::CreateExplainability(const CreateExplainabilityRequest& request) const
{
  AWS_OPERATION_GUARD(CreateExplainability);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateExplainabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExplainabilityExportOutcome ForecastServiceClient::CreateExplainabilityExport(const CreateExplainabilityExportRequest& request) const
{
  AWS_OPERATION_GUARD(CreateExplainabilityExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateExplainabilityExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateForecastOutcome ForecastServiceClient::CreateForecast(const CreateForecastRequest& request) const
{
  AWS_OPERATION_GUARD(CreateForecast);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateForecastExportJobOutcome ForecastServiceClient::CreateForecastExportJob(const CreateForecastExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreateForecastExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateForecastExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMonitorOutcome ForecastServiceClient::CreateMonitor(const CreateMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePredictorOutcome ForecastServiceClient::CreatePredictor(const CreatePredictorRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePredictor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePredictorBacktestExportJobOutcome ForecastServiceClient::CreatePredictorBacktestExportJob(const CreatePredictorBacktestExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePredictorBacktestExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePredictorBacktestExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfAnalysisOutcome ForecastServiceClient::CreateWhatIfAnalysis(const CreateWhatIfAnalysisRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWhatIfAnalysis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWhatIfAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfForecastOutcome ForecastServiceClient::CreateWhatIfForecast(const CreateWhatIfForecastRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWhatIfForecast);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWhatIfForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfForecastExportOutcome ForecastServiceClient::CreateWhatIfForecastExport(const CreateWhatIfForecastExportRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWhatIfForecastExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWhatIfForecastExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcome ForecastServiceClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetGroupOutcome ForecastServiceClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDatasetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetImportJobOutcome ForecastServiceClient::DeleteDatasetImportJob(const DeleteDatasetImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDatasetImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExplainabilityOutcome ForecastServiceClient::DeleteExplainability(const DeleteExplainabilityRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteExplainability);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteExplainabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExplainabilityExportOutcome ForecastServiceClient::DeleteExplainabilityExport(const DeleteExplainabilityExportRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteExplainabilityExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteExplainabilityExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteForecastOutcome ForecastServiceClient::DeleteForecast(const DeleteForecastRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteForecast);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteForecastExportJobOutcome ForecastServiceClient::DeleteForecastExportJob(const DeleteForecastExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteForecastExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteForecastExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMonitorOutcome ForecastServiceClient::DeleteMonitor(const DeleteMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePredictorOutcome ForecastServiceClient::DeletePredictor(const DeletePredictorRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePredictor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePredictorBacktestExportJobOutcome ForecastServiceClient::DeletePredictorBacktestExportJob(const DeletePredictorBacktestExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePredictorBacktestExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePredictorBacktestExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceTreeOutcome ForecastServiceClient::DeleteResourceTree(const DeleteResourceTreeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourceTree);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceTree, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceTree, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourceTreeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfAnalysisOutcome ForecastServiceClient::DeleteWhatIfAnalysis(const DeleteWhatIfAnalysisRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWhatIfAnalysis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWhatIfAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfForecastOutcome ForecastServiceClient::DeleteWhatIfForecast(const DeleteWhatIfForecastRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWhatIfForecast);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWhatIfForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfForecastExportOutcome ForecastServiceClient::DeleteWhatIfForecastExport(const DeleteWhatIfForecastExportRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWhatIfForecastExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWhatIfForecastExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutoPredictorOutcome ForecastServiceClient::DescribeAutoPredictor(const DescribeAutoPredictorRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAutoPredictor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAutoPredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcome ForecastServiceClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetGroupOutcome ForecastServiceClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDatasetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetImportJobOutcome ForecastServiceClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDatasetImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExplainabilityOutcome ForecastServiceClient::DescribeExplainability(const DescribeExplainabilityRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeExplainability);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExplainabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExplainabilityExportOutcome ForecastServiceClient::DescribeExplainabilityExport(const DescribeExplainabilityExportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeExplainabilityExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExplainabilityExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeForecastOutcome ForecastServiceClient::DescribeForecast(const DescribeForecastRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeForecast);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeForecastExportJobOutcome ForecastServiceClient::DescribeForecastExportJob(const DescribeForecastExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeForecastExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeForecastExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMonitorOutcome ForecastServiceClient::DescribeMonitor(const DescribeMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePredictorOutcome ForecastServiceClient::DescribePredictor(const DescribePredictorRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePredictor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePredictorBacktestExportJobOutcome ForecastServiceClient::DescribePredictorBacktestExportJob(const DescribePredictorBacktestExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePredictorBacktestExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePredictorBacktestExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfAnalysisOutcome ForecastServiceClient::DescribeWhatIfAnalysis(const DescribeWhatIfAnalysisRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeWhatIfAnalysis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWhatIfAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfForecastOutcome ForecastServiceClient::DescribeWhatIfForecast(const DescribeWhatIfForecastRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeWhatIfForecast);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWhatIfForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfForecastExportOutcome ForecastServiceClient::DescribeWhatIfForecastExport(const DescribeWhatIfForecastExportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeWhatIfForecastExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWhatIfForecastExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccuracyMetricsOutcome ForecastServiceClient::GetAccuracyMetrics(const GetAccuracyMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccuracyMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccuracyMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccuracyMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccuracyMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetGroupsOutcome ForecastServiceClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDatasetGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetImportJobsOutcome ForecastServiceClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDatasetImportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcome ForecastServiceClient::ListDatasets(const ListDatasetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDatasets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExplainabilitiesOutcome ForecastServiceClient::ListExplainabilities(const ListExplainabilitiesRequest& request) const
{
  AWS_OPERATION_GUARD(ListExplainabilities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExplainabilities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExplainabilities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListExplainabilitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExplainabilityExportsOutcome ForecastServiceClient::ListExplainabilityExports(const ListExplainabilityExportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListExplainabilityExports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExplainabilityExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExplainabilityExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListExplainabilityExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListForecastExportJobsOutcome ForecastServiceClient::ListForecastExportJobs(const ListForecastExportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListForecastExportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListForecastExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListForecastExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListForecastExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListForecastsOutcome ForecastServiceClient::ListForecasts(const ListForecastsRequest& request) const
{
  AWS_OPERATION_GUARD(ListForecasts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListForecastsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitorEvaluationsOutcome ForecastServiceClient::ListMonitorEvaluations(const ListMonitorEvaluationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitorEvaluations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitorEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitorEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitorEvaluationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitorsOutcome ForecastServiceClient::ListMonitors(const ListMonitorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPredictorBacktestExportJobsOutcome ForecastServiceClient::ListPredictorBacktestExportJobs(const ListPredictorBacktestExportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPredictorBacktestExportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPredictorBacktestExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPredictorBacktestExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPredictorBacktestExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPredictorsOutcome ForecastServiceClient::ListPredictors(const ListPredictorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPredictors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPredictors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPredictors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPredictorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome ForecastServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfAnalysesOutcome ForecastServiceClient::ListWhatIfAnalyses(const ListWhatIfAnalysesRequest& request) const
{
  AWS_OPERATION_GUARD(ListWhatIfAnalyses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWhatIfAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWhatIfAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWhatIfAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfForecastExportsOutcome ForecastServiceClient::ListWhatIfForecastExports(const ListWhatIfForecastExportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListWhatIfForecastExports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWhatIfForecastExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWhatIfForecastExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWhatIfForecastExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfForecastsOutcome ForecastServiceClient::ListWhatIfForecasts(const ListWhatIfForecastsRequest& request) const
{
  AWS_OPERATION_GUARD(ListWhatIfForecasts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWhatIfForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWhatIfForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWhatIfForecastsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeResourceOutcome ForecastServiceClient::ResumeResource(const ResumeResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ResumeResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResumeResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopResourceOutcome ForecastServiceClient::StopResource(const StopResourceRequest& request) const
{
  AWS_OPERATION_GUARD(StopResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome ForecastServiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome ForecastServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetGroupOutcome ForecastServiceClient::UpdateDatasetGroup(const UpdateDatasetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDatasetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

