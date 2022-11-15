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
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAutoPredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAutoPredictorOutcomeCallable ForecastServiceClient::CreateAutoPredictorCallable(const CreateAutoPredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoPredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoPredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateAutoPredictorAsync(const CreateAutoPredictorRequest& request, const CreateAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAutoPredictor(request), context);
    } );
}

CreateDatasetOutcome ForecastServiceClient::CreateDataset(const CreateDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable ForecastServiceClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataset(request), context);
    } );
}

CreateDatasetGroupOutcome ForecastServiceClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetGroupOutcomeCallable ForecastServiceClient::CreateDatasetGroupCallable(const CreateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateDatasetGroupAsync(const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatasetGroup(request), context);
    } );
}

CreateDatasetImportJobOutcome ForecastServiceClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetImportJobOutcomeCallable ForecastServiceClient::CreateDatasetImportJobCallable(const CreateDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateDatasetImportJobAsync(const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatasetImportJob(request), context);
    } );
}

CreateExplainabilityOutcome ForecastServiceClient::CreateExplainability(const CreateExplainabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateExplainabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExplainabilityOutcomeCallable ForecastServiceClient::CreateExplainabilityCallable(const CreateExplainabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExplainabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExplainability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateExplainabilityAsync(const CreateExplainabilityRequest& request, const CreateExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExplainability(request), context);
    } );
}

CreateExplainabilityExportOutcome ForecastServiceClient::CreateExplainabilityExport(const CreateExplainabilityExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateExplainabilityExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExplainabilityExportOutcomeCallable ForecastServiceClient::CreateExplainabilityExportCallable(const CreateExplainabilityExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExplainabilityExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExplainabilityExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateExplainabilityExportAsync(const CreateExplainabilityExportRequest& request, const CreateExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExplainabilityExport(request), context);
    } );
}

CreateForecastOutcome ForecastServiceClient::CreateForecast(const CreateForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateForecastOutcomeCallable ForecastServiceClient::CreateForecastCallable(const CreateForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateForecastAsync(const CreateForecastRequest& request, const CreateForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateForecast(request), context);
    } );
}

CreateForecastExportJobOutcome ForecastServiceClient::CreateForecastExportJob(const CreateForecastExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateForecastExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateForecastExportJobOutcomeCallable ForecastServiceClient::CreateForecastExportJobCallable(const CreateForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateForecastExportJobAsync(const CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateForecastExportJob(request), context);
    } );
}

CreateMonitorOutcome ForecastServiceClient::CreateMonitor(const CreateMonitorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMonitorOutcomeCallable ForecastServiceClient::CreateMonitorCallable(const CreateMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateMonitorAsync(const CreateMonitorRequest& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMonitor(request), context);
    } );
}

CreatePredictorOutcome ForecastServiceClient::CreatePredictor(const CreatePredictorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePredictorOutcomeCallable ForecastServiceClient::CreatePredictorCallable(const CreatePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreatePredictorAsync(const CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePredictor(request), context);
    } );
}

CreatePredictorBacktestExportJobOutcome ForecastServiceClient::CreatePredictorBacktestExportJob(const CreatePredictorBacktestExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePredictorBacktestExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePredictorBacktestExportJobOutcomeCallable ForecastServiceClient::CreatePredictorBacktestExportJobCallable(const CreatePredictorBacktestExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePredictorBacktestExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePredictorBacktestExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreatePredictorBacktestExportJobAsync(const CreatePredictorBacktestExportJobRequest& request, const CreatePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePredictorBacktestExportJob(request), context);
    } );
}

CreateWhatIfAnalysisOutcome ForecastServiceClient::CreateWhatIfAnalysis(const CreateWhatIfAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWhatIfAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfAnalysisOutcomeCallable ForecastServiceClient::CreateWhatIfAnalysisCallable(const CreateWhatIfAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWhatIfAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWhatIfAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateWhatIfAnalysisAsync(const CreateWhatIfAnalysisRequest& request, const CreateWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWhatIfAnalysis(request), context);
    } );
}

CreateWhatIfForecastOutcome ForecastServiceClient::CreateWhatIfForecast(const CreateWhatIfForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWhatIfForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfForecastOutcomeCallable ForecastServiceClient::CreateWhatIfForecastCallable(const CreateWhatIfForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWhatIfForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWhatIfForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateWhatIfForecastAsync(const CreateWhatIfForecastRequest& request, const CreateWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWhatIfForecast(request), context);
    } );
}

CreateWhatIfForecastExportOutcome ForecastServiceClient::CreateWhatIfForecastExport(const CreateWhatIfForecastExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWhatIfForecastExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfForecastExportOutcomeCallable ForecastServiceClient::CreateWhatIfForecastExportCallable(const CreateWhatIfForecastExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWhatIfForecastExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWhatIfForecastExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateWhatIfForecastExportAsync(const CreateWhatIfForecastExportRequest& request, const CreateWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWhatIfForecastExport(request), context);
    } );
}

DeleteDatasetOutcome ForecastServiceClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable ForecastServiceClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataset(request), context);
    } );
}

DeleteDatasetGroupOutcome ForecastServiceClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetGroupOutcomeCallable ForecastServiceClient::DeleteDatasetGroupCallable(const DeleteDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteDatasetGroupAsync(const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDatasetGroup(request), context);
    } );
}

DeleteDatasetImportJobOutcome ForecastServiceClient::DeleteDatasetImportJob(const DeleteDatasetImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetImportJobOutcomeCallable ForecastServiceClient::DeleteDatasetImportJobCallable(const DeleteDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteDatasetImportJobAsync(const DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDatasetImportJob(request), context);
    } );
}

DeleteExplainabilityOutcome ForecastServiceClient::DeleteExplainability(const DeleteExplainabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteExplainabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExplainabilityOutcomeCallable ForecastServiceClient::DeleteExplainabilityCallable(const DeleteExplainabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExplainabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExplainability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteExplainabilityAsync(const DeleteExplainabilityRequest& request, const DeleteExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteExplainability(request), context);
    } );
}

DeleteExplainabilityExportOutcome ForecastServiceClient::DeleteExplainabilityExport(const DeleteExplainabilityExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteExplainabilityExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExplainabilityExportOutcomeCallable ForecastServiceClient::DeleteExplainabilityExportCallable(const DeleteExplainabilityExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExplainabilityExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExplainabilityExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteExplainabilityExportAsync(const DeleteExplainabilityExportRequest& request, const DeleteExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteExplainabilityExport(request), context);
    } );
}

DeleteForecastOutcome ForecastServiceClient::DeleteForecast(const DeleteForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteForecastOutcomeCallable ForecastServiceClient::DeleteForecastCallable(const DeleteForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteForecastAsync(const DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteForecast(request), context);
    } );
}

DeleteForecastExportJobOutcome ForecastServiceClient::DeleteForecastExportJob(const DeleteForecastExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteForecastExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteForecastExportJobOutcomeCallable ForecastServiceClient::DeleteForecastExportJobCallable(const DeleteForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteForecastExportJobAsync(const DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteForecastExportJob(request), context);
    } );
}

DeleteMonitorOutcome ForecastServiceClient::DeleteMonitor(const DeleteMonitorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMonitorOutcomeCallable ForecastServiceClient::DeleteMonitorCallable(const DeleteMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteMonitorAsync(const DeleteMonitorRequest& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMonitor(request), context);
    } );
}

DeletePredictorOutcome ForecastServiceClient::DeletePredictor(const DeletePredictorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePredictorOutcomeCallable ForecastServiceClient::DeletePredictorCallable(const DeletePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeletePredictorAsync(const DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePredictor(request), context);
    } );
}

DeletePredictorBacktestExportJobOutcome ForecastServiceClient::DeletePredictorBacktestExportJob(const DeletePredictorBacktestExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePredictorBacktestExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePredictorBacktestExportJobOutcomeCallable ForecastServiceClient::DeletePredictorBacktestExportJobCallable(const DeletePredictorBacktestExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePredictorBacktestExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePredictorBacktestExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeletePredictorBacktestExportJobAsync(const DeletePredictorBacktestExportJobRequest& request, const DeletePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePredictorBacktestExportJob(request), context);
    } );
}

DeleteResourceTreeOutcome ForecastServiceClient::DeleteResourceTree(const DeleteResourceTreeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceTree, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceTree, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourceTreeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceTreeOutcomeCallable ForecastServiceClient::DeleteResourceTreeCallable(const DeleteResourceTreeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceTreeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceTree(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteResourceTreeAsync(const DeleteResourceTreeRequest& request, const DeleteResourceTreeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourceTree(request), context);
    } );
}

DeleteWhatIfAnalysisOutcome ForecastServiceClient::DeleteWhatIfAnalysis(const DeleteWhatIfAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWhatIfAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfAnalysisOutcomeCallable ForecastServiceClient::DeleteWhatIfAnalysisCallable(const DeleteWhatIfAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWhatIfAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWhatIfAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteWhatIfAnalysisAsync(const DeleteWhatIfAnalysisRequest& request, const DeleteWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWhatIfAnalysis(request), context);
    } );
}

DeleteWhatIfForecastOutcome ForecastServiceClient::DeleteWhatIfForecast(const DeleteWhatIfForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWhatIfForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfForecastOutcomeCallable ForecastServiceClient::DeleteWhatIfForecastCallable(const DeleteWhatIfForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWhatIfForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWhatIfForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteWhatIfForecastAsync(const DeleteWhatIfForecastRequest& request, const DeleteWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWhatIfForecast(request), context);
    } );
}

DeleteWhatIfForecastExportOutcome ForecastServiceClient::DeleteWhatIfForecastExport(const DeleteWhatIfForecastExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWhatIfForecastExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfForecastExportOutcomeCallable ForecastServiceClient::DeleteWhatIfForecastExportCallable(const DeleteWhatIfForecastExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWhatIfForecastExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWhatIfForecastExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteWhatIfForecastExportAsync(const DeleteWhatIfForecastExportRequest& request, const DeleteWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWhatIfForecastExport(request), context);
    } );
}

DescribeAutoPredictorOutcome ForecastServiceClient::DescribeAutoPredictor(const DescribeAutoPredictorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAutoPredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAutoPredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutoPredictorOutcomeCallable ForecastServiceClient::DescribeAutoPredictorCallable(const DescribeAutoPredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoPredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoPredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeAutoPredictorAsync(const DescribeAutoPredictorRequest& request, const DescribeAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAutoPredictor(request), context);
    } );
}

DescribeDatasetOutcome ForecastServiceClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable ForecastServiceClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataset(request), context);
    } );
}

DescribeDatasetGroupOutcome ForecastServiceClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetGroupOutcomeCallable ForecastServiceClient::DescribeDatasetGroupCallable(const DescribeDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeDatasetGroupAsync(const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDatasetGroup(request), context);
    } );
}

DescribeDatasetImportJobOutcome ForecastServiceClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetImportJobOutcomeCallable ForecastServiceClient::DescribeDatasetImportJobCallable(const DescribeDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeDatasetImportJobAsync(const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDatasetImportJob(request), context);
    } );
}

DescribeExplainabilityOutcome ForecastServiceClient::DescribeExplainability(const DescribeExplainabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExplainability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExplainabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExplainabilityOutcomeCallable ForecastServiceClient::DescribeExplainabilityCallable(const DescribeExplainabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExplainabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExplainability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeExplainabilityAsync(const DescribeExplainabilityRequest& request, const DescribeExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeExplainability(request), context);
    } );
}

DescribeExplainabilityExportOutcome ForecastServiceClient::DescribeExplainabilityExport(const DescribeExplainabilityExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExplainabilityExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExplainabilityExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExplainabilityExportOutcomeCallable ForecastServiceClient::DescribeExplainabilityExportCallable(const DescribeExplainabilityExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExplainabilityExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExplainabilityExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeExplainabilityExportAsync(const DescribeExplainabilityExportRequest& request, const DescribeExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeExplainabilityExport(request), context);
    } );
}

DescribeForecastOutcome ForecastServiceClient::DescribeForecast(const DescribeForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeForecastOutcomeCallable ForecastServiceClient::DescribeForecastCallable(const DescribeForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeForecastAsync(const DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeForecast(request), context);
    } );
}

DescribeForecastExportJobOutcome ForecastServiceClient::DescribeForecastExportJob(const DescribeForecastExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeForecastExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeForecastExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeForecastExportJobOutcomeCallable ForecastServiceClient::DescribeForecastExportJobCallable(const DescribeForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeForecastExportJobAsync(const DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeForecastExportJob(request), context);
    } );
}

DescribeMonitorOutcome ForecastServiceClient::DescribeMonitor(const DescribeMonitorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMonitorOutcomeCallable ForecastServiceClient::DescribeMonitorCallable(const DescribeMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeMonitorAsync(const DescribeMonitorRequest& request, const DescribeMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMonitor(request), context);
    } );
}

DescribePredictorOutcome ForecastServiceClient::DescribePredictor(const DescribePredictorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePredictor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePredictorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePredictorOutcomeCallable ForecastServiceClient::DescribePredictorCallable(const DescribePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribePredictorAsync(const DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePredictor(request), context);
    } );
}

DescribePredictorBacktestExportJobOutcome ForecastServiceClient::DescribePredictorBacktestExportJob(const DescribePredictorBacktestExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePredictorBacktestExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePredictorBacktestExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePredictorBacktestExportJobOutcomeCallable ForecastServiceClient::DescribePredictorBacktestExportJobCallable(const DescribePredictorBacktestExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePredictorBacktestExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePredictorBacktestExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribePredictorBacktestExportJobAsync(const DescribePredictorBacktestExportJobRequest& request, const DescribePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePredictorBacktestExportJob(request), context);
    } );
}

DescribeWhatIfAnalysisOutcome ForecastServiceClient::DescribeWhatIfAnalysis(const DescribeWhatIfAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWhatIfAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWhatIfAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfAnalysisOutcomeCallable ForecastServiceClient::DescribeWhatIfAnalysisCallable(const DescribeWhatIfAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWhatIfAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWhatIfAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeWhatIfAnalysisAsync(const DescribeWhatIfAnalysisRequest& request, const DescribeWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWhatIfAnalysis(request), context);
    } );
}

DescribeWhatIfForecastOutcome ForecastServiceClient::DescribeWhatIfForecast(const DescribeWhatIfForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWhatIfForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfForecastOutcomeCallable ForecastServiceClient::DescribeWhatIfForecastCallable(const DescribeWhatIfForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWhatIfForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWhatIfForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeWhatIfForecastAsync(const DescribeWhatIfForecastRequest& request, const DescribeWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWhatIfForecast(request), context);
    } );
}

DescribeWhatIfForecastExportOutcome ForecastServiceClient::DescribeWhatIfForecastExport(const DescribeWhatIfForecastExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWhatIfForecastExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWhatIfForecastExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfForecastExportOutcomeCallable ForecastServiceClient::DescribeWhatIfForecastExportCallable(const DescribeWhatIfForecastExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWhatIfForecastExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWhatIfForecastExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeWhatIfForecastExportAsync(const DescribeWhatIfForecastExportRequest& request, const DescribeWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWhatIfForecastExport(request), context);
    } );
}

GetAccuracyMetricsOutcome ForecastServiceClient::GetAccuracyMetrics(const GetAccuracyMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccuracyMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccuracyMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccuracyMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccuracyMetricsOutcomeCallable ForecastServiceClient::GetAccuracyMetricsCallable(const GetAccuracyMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccuracyMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccuracyMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::GetAccuracyMetricsAsync(const GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccuracyMetrics(request), context);
    } );
}

ListDatasetGroupsOutcome ForecastServiceClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetGroupsOutcomeCallable ForecastServiceClient::ListDatasetGroupsCallable(const ListDatasetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListDatasetGroupsAsync(const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasetGroups(request), context);
    } );
}

ListDatasetImportJobsOutcome ForecastServiceClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetImportJobsOutcomeCallable ForecastServiceClient::ListDatasetImportJobsCallable(const ListDatasetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListDatasetImportJobsAsync(const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasetImportJobs(request), context);
    } );
}

ListDatasetsOutcome ForecastServiceClient::ListDatasets(const ListDatasetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable ForecastServiceClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasets(request), context);
    } );
}

ListExplainabilitiesOutcome ForecastServiceClient::ListExplainabilities(const ListExplainabilitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExplainabilities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExplainabilities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListExplainabilitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExplainabilitiesOutcomeCallable ForecastServiceClient::ListExplainabilitiesCallable(const ListExplainabilitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExplainabilitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExplainabilities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListExplainabilitiesAsync(const ListExplainabilitiesRequest& request, const ListExplainabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExplainabilities(request), context);
    } );
}

ListExplainabilityExportsOutcome ForecastServiceClient::ListExplainabilityExports(const ListExplainabilityExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExplainabilityExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExplainabilityExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListExplainabilityExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExplainabilityExportsOutcomeCallable ForecastServiceClient::ListExplainabilityExportsCallable(const ListExplainabilityExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExplainabilityExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExplainabilityExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListExplainabilityExportsAsync(const ListExplainabilityExportsRequest& request, const ListExplainabilityExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExplainabilityExports(request), context);
    } );
}

ListForecastExportJobsOutcome ForecastServiceClient::ListForecastExportJobs(const ListForecastExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListForecastExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListForecastExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListForecastExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListForecastExportJobsOutcomeCallable ForecastServiceClient::ListForecastExportJobsCallable(const ListForecastExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListForecastExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListForecastExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListForecastExportJobsAsync(const ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListForecastExportJobs(request), context);
    } );
}

ListForecastsOutcome ForecastServiceClient::ListForecasts(const ListForecastsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListForecastsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListForecastsOutcomeCallable ForecastServiceClient::ListForecastsCallable(const ListForecastsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListForecastsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListForecasts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListForecastsAsync(const ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListForecasts(request), context);
    } );
}

ListMonitorEvaluationsOutcome ForecastServiceClient::ListMonitorEvaluations(const ListMonitorEvaluationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitorEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitorEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitorEvaluationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitorEvaluationsOutcomeCallable ForecastServiceClient::ListMonitorEvaluationsCallable(const ListMonitorEvaluationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitorEvaluationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitorEvaluations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListMonitorEvaluationsAsync(const ListMonitorEvaluationsRequest& request, const ListMonitorEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMonitorEvaluations(request), context);
    } );
}

ListMonitorsOutcome ForecastServiceClient::ListMonitors(const ListMonitorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitorsOutcomeCallable ForecastServiceClient::ListMonitorsCallable(const ListMonitorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListMonitorsAsync(const ListMonitorsRequest& request, const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMonitors(request), context);
    } );
}

ListPredictorBacktestExportJobsOutcome ForecastServiceClient::ListPredictorBacktestExportJobs(const ListPredictorBacktestExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPredictorBacktestExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPredictorBacktestExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPredictorBacktestExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPredictorBacktestExportJobsOutcomeCallable ForecastServiceClient::ListPredictorBacktestExportJobsCallable(const ListPredictorBacktestExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPredictorBacktestExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPredictorBacktestExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListPredictorBacktestExportJobsAsync(const ListPredictorBacktestExportJobsRequest& request, const ListPredictorBacktestExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPredictorBacktestExportJobs(request), context);
    } );
}

ListPredictorsOutcome ForecastServiceClient::ListPredictors(const ListPredictorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPredictors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPredictors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPredictorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPredictorsOutcomeCallable ForecastServiceClient::ListPredictorsCallable(const ListPredictorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPredictorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPredictors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListPredictorsAsync(const ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPredictors(request), context);
    } );
}

ListTagsForResourceOutcome ForecastServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ForecastServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWhatIfAnalysesOutcome ForecastServiceClient::ListWhatIfAnalyses(const ListWhatIfAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWhatIfAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWhatIfAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWhatIfAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfAnalysesOutcomeCallable ForecastServiceClient::ListWhatIfAnalysesCallable(const ListWhatIfAnalysesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWhatIfAnalysesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWhatIfAnalyses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListWhatIfAnalysesAsync(const ListWhatIfAnalysesRequest& request, const ListWhatIfAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWhatIfAnalyses(request), context);
    } );
}

ListWhatIfForecastExportsOutcome ForecastServiceClient::ListWhatIfForecastExports(const ListWhatIfForecastExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWhatIfForecastExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWhatIfForecastExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWhatIfForecastExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfForecastExportsOutcomeCallable ForecastServiceClient::ListWhatIfForecastExportsCallable(const ListWhatIfForecastExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWhatIfForecastExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWhatIfForecastExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListWhatIfForecastExportsAsync(const ListWhatIfForecastExportsRequest& request, const ListWhatIfForecastExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWhatIfForecastExports(request), context);
    } );
}

ListWhatIfForecastsOutcome ForecastServiceClient::ListWhatIfForecasts(const ListWhatIfForecastsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWhatIfForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWhatIfForecasts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWhatIfForecastsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfForecastsOutcomeCallable ForecastServiceClient::ListWhatIfForecastsCallable(const ListWhatIfForecastsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWhatIfForecastsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWhatIfForecasts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListWhatIfForecastsAsync(const ListWhatIfForecastsRequest& request, const ListWhatIfForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWhatIfForecasts(request), context);
    } );
}

ResumeResourceOutcome ForecastServiceClient::ResumeResource(const ResumeResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResumeResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeResourceOutcomeCallable ForecastServiceClient::ResumeResourceCallable(const ResumeResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ResumeResourceAsync(const ResumeResourceRequest& request, const ResumeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResumeResource(request), context);
    } );
}

StopResourceOutcome ForecastServiceClient::StopResource(const StopResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopResourceOutcomeCallable ForecastServiceClient::StopResourceCallable(const StopResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::StopResourceAsync(const StopResourceRequest& request, const StopResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopResource(request), context);
    } );
}

TagResourceOutcome ForecastServiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ForecastServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ForecastServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ForecastServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDatasetGroupOutcome ForecastServiceClient::UpdateDatasetGroup(const UpdateDatasetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetGroupOutcomeCallable ForecastServiceClient::UpdateDatasetGroupCallable(const UpdateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::UpdateDatasetGroupAsync(const UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDatasetGroup(request), context);
    } );
}

