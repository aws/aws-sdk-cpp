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

#include <aws/forecast/ForecastServiceClient.h>
#include <aws/forecast/ForecastServiceEndpoint.h>
#include <aws/forecast/ForecastServiceErrorMarshaller.h>
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

static const char* SERVICE_NAME = "forecast";
static const char* ALLOCATION_TAG = "ForecastServiceClient";

ForecastServiceClient::ForecastServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ForecastServiceClient::~ForecastServiceClient()
{
}

void ForecastServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("forecast");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ForecastServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ForecastServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateAutoPredictorOutcome ForecastServiceClient::CreateAutoPredictor(const CreateAutoPredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAutoPredictorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAutoPredictorOutcomeCallable ForecastServiceClient::CreateAutoPredictorCallable(const CreateAutoPredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoPredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoPredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateAutoPredictorAsyncHelper(ForecastServiceClient const * const clientThis, const CreateAutoPredictorRequest& request, const CreateAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAutoPredictor(request), context);
}

void ForecastServiceClient::CreateAutoPredictorAsync(const CreateAutoPredictorRequest& request, const CreateAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateAutoPredictorAsyncHelper( this, request, handler, context ); } );
}

CreateDatasetOutcome ForecastServiceClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable ForecastServiceClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateDatasetAsyncHelper(ForecastServiceClient const * const clientThis, const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataset(request), context);
}

void ForecastServiceClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateDatasetAsyncHelper( this, request, handler, context ); } );
}

CreateDatasetGroupOutcome ForecastServiceClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDatasetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetGroupOutcomeCallable ForecastServiceClient::CreateDatasetGroupCallable(const CreateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateDatasetGroupAsyncHelper(ForecastServiceClient const * const clientThis, const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDatasetGroup(request), context);
}

void ForecastServiceClient::CreateDatasetGroupAsync(const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateDatasetGroupAsyncHelper( this, request, handler, context ); } );
}

CreateDatasetImportJobOutcome ForecastServiceClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDatasetImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetImportJobOutcomeCallable ForecastServiceClient::CreateDatasetImportJobCallable(const CreateDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateDatasetImportJobAsyncHelper(ForecastServiceClient const * const clientThis, const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDatasetImportJob(request), context);
}

void ForecastServiceClient::CreateDatasetImportJobAsync(const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateDatasetImportJobAsyncHelper( this, request, handler, context ); } );
}

CreateExplainabilityOutcome ForecastServiceClient::CreateExplainability(const CreateExplainabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateExplainabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExplainabilityOutcomeCallable ForecastServiceClient::CreateExplainabilityCallable(const CreateExplainabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExplainabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExplainability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateExplainabilityAsyncHelper(ForecastServiceClient const * const clientThis, const CreateExplainabilityRequest& request, const CreateExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExplainability(request), context);
}

void ForecastServiceClient::CreateExplainabilityAsync(const CreateExplainabilityRequest& request, const CreateExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateExplainabilityAsyncHelper( this, request, handler, context ); } );
}

CreateExplainabilityExportOutcome ForecastServiceClient::CreateExplainabilityExport(const CreateExplainabilityExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateExplainabilityExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExplainabilityExportOutcomeCallable ForecastServiceClient::CreateExplainabilityExportCallable(const CreateExplainabilityExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExplainabilityExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExplainabilityExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateExplainabilityExportAsyncHelper(ForecastServiceClient const * const clientThis, const CreateExplainabilityExportRequest& request, const CreateExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExplainabilityExport(request), context);
}

void ForecastServiceClient::CreateExplainabilityExportAsync(const CreateExplainabilityExportRequest& request, const CreateExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateExplainabilityExportAsyncHelper( this, request, handler, context ); } );
}

CreateForecastOutcome ForecastServiceClient::CreateForecast(const CreateForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateForecastOutcomeCallable ForecastServiceClient::CreateForecastCallable(const CreateForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateForecastAsyncHelper(ForecastServiceClient const * const clientThis, const CreateForecastRequest& request, const CreateForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateForecast(request), context);
}

void ForecastServiceClient::CreateForecastAsync(const CreateForecastRequest& request, const CreateForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateForecastAsyncHelper( this, request, handler, context ); } );
}

CreateForecastExportJobOutcome ForecastServiceClient::CreateForecastExportJob(const CreateForecastExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateForecastExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateForecastExportJobOutcomeCallable ForecastServiceClient::CreateForecastExportJobCallable(const CreateForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateForecastExportJobAsyncHelper(ForecastServiceClient const * const clientThis, const CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateForecastExportJob(request), context);
}

void ForecastServiceClient::CreateForecastExportJobAsync(const CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateForecastExportJobAsyncHelper( this, request, handler, context ); } );
}

CreateMonitorOutcome ForecastServiceClient::CreateMonitor(const CreateMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMonitorOutcomeCallable ForecastServiceClient::CreateMonitorCallable(const CreateMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateMonitorAsyncHelper(ForecastServiceClient const * const clientThis, const CreateMonitorRequest& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMonitor(request), context);
}

void ForecastServiceClient::CreateMonitorAsync(const CreateMonitorRequest& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateMonitorAsyncHelper( this, request, handler, context ); } );
}

CreatePredictorOutcome ForecastServiceClient::CreatePredictor(const CreatePredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePredictorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePredictorOutcomeCallable ForecastServiceClient::CreatePredictorCallable(const CreatePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreatePredictorAsyncHelper(ForecastServiceClient const * const clientThis, const CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePredictor(request), context);
}

void ForecastServiceClient::CreatePredictorAsync(const CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreatePredictorAsyncHelper( this, request, handler, context ); } );
}

CreatePredictorBacktestExportJobOutcome ForecastServiceClient::CreatePredictorBacktestExportJob(const CreatePredictorBacktestExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePredictorBacktestExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePredictorBacktestExportJobOutcomeCallable ForecastServiceClient::CreatePredictorBacktestExportJobCallable(const CreatePredictorBacktestExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePredictorBacktestExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePredictorBacktestExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreatePredictorBacktestExportJobAsyncHelper(ForecastServiceClient const * const clientThis, const CreatePredictorBacktestExportJobRequest& request, const CreatePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePredictorBacktestExportJob(request), context);
}

void ForecastServiceClient::CreatePredictorBacktestExportJobAsync(const CreatePredictorBacktestExportJobRequest& request, const CreatePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreatePredictorBacktestExportJobAsyncHelper( this, request, handler, context ); } );
}

CreateWhatIfAnalysisOutcome ForecastServiceClient::CreateWhatIfAnalysis(const CreateWhatIfAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWhatIfAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfAnalysisOutcomeCallable ForecastServiceClient::CreateWhatIfAnalysisCallable(const CreateWhatIfAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWhatIfAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWhatIfAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateWhatIfAnalysisAsyncHelper(ForecastServiceClient const * const clientThis, const CreateWhatIfAnalysisRequest& request, const CreateWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWhatIfAnalysis(request), context);
}

void ForecastServiceClient::CreateWhatIfAnalysisAsync(const CreateWhatIfAnalysisRequest& request, const CreateWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateWhatIfAnalysisAsyncHelper( this, request, handler, context ); } );
}

CreateWhatIfForecastOutcome ForecastServiceClient::CreateWhatIfForecast(const CreateWhatIfForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWhatIfForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfForecastOutcomeCallable ForecastServiceClient::CreateWhatIfForecastCallable(const CreateWhatIfForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWhatIfForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWhatIfForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateWhatIfForecastAsyncHelper(ForecastServiceClient const * const clientThis, const CreateWhatIfForecastRequest& request, const CreateWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWhatIfForecast(request), context);
}

void ForecastServiceClient::CreateWhatIfForecastAsync(const CreateWhatIfForecastRequest& request, const CreateWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateWhatIfForecastAsyncHelper( this, request, handler, context ); } );
}

CreateWhatIfForecastExportOutcome ForecastServiceClient::CreateWhatIfForecastExport(const CreateWhatIfForecastExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWhatIfForecastExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWhatIfForecastExportOutcomeCallable ForecastServiceClient::CreateWhatIfForecastExportCallable(const CreateWhatIfForecastExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWhatIfForecastExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWhatIfForecastExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientCreateWhatIfForecastExportAsyncHelper(ForecastServiceClient const * const clientThis, const CreateWhatIfForecastExportRequest& request, const CreateWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWhatIfForecastExport(request), context);
}

void ForecastServiceClient::CreateWhatIfForecastExportAsync(const CreateWhatIfForecastExportRequest& request, const CreateWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientCreateWhatIfForecastExportAsyncHelper( this, request, handler, context ); } );
}

DeleteDatasetOutcome ForecastServiceClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable ForecastServiceClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteDatasetAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataset(request), context);
}

void ForecastServiceClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteDatasetAsyncHelper( this, request, handler, context ); } );
}

DeleteDatasetGroupOutcome ForecastServiceClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDatasetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetGroupOutcomeCallable ForecastServiceClient::DeleteDatasetGroupCallable(const DeleteDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteDatasetGroupAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDatasetGroup(request), context);
}

void ForecastServiceClient::DeleteDatasetGroupAsync(const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteDatasetGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteDatasetImportJobOutcome ForecastServiceClient::DeleteDatasetImportJob(const DeleteDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDatasetImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetImportJobOutcomeCallable ForecastServiceClient::DeleteDatasetImportJobCallable(const DeleteDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteDatasetImportJobAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDatasetImportJob(request), context);
}

void ForecastServiceClient::DeleteDatasetImportJobAsync(const DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteDatasetImportJobAsyncHelper( this, request, handler, context ); } );
}

DeleteExplainabilityOutcome ForecastServiceClient::DeleteExplainability(const DeleteExplainabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteExplainabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExplainabilityOutcomeCallable ForecastServiceClient::DeleteExplainabilityCallable(const DeleteExplainabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExplainabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExplainability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteExplainabilityAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteExplainabilityRequest& request, const DeleteExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExplainability(request), context);
}

void ForecastServiceClient::DeleteExplainabilityAsync(const DeleteExplainabilityRequest& request, const DeleteExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteExplainabilityAsyncHelper( this, request, handler, context ); } );
}

DeleteExplainabilityExportOutcome ForecastServiceClient::DeleteExplainabilityExport(const DeleteExplainabilityExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteExplainabilityExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExplainabilityExportOutcomeCallable ForecastServiceClient::DeleteExplainabilityExportCallable(const DeleteExplainabilityExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExplainabilityExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExplainabilityExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteExplainabilityExportAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteExplainabilityExportRequest& request, const DeleteExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExplainabilityExport(request), context);
}

void ForecastServiceClient::DeleteExplainabilityExportAsync(const DeleteExplainabilityExportRequest& request, const DeleteExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteExplainabilityExportAsyncHelper( this, request, handler, context ); } );
}

DeleteForecastOutcome ForecastServiceClient::DeleteForecast(const DeleteForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteForecastOutcomeCallable ForecastServiceClient::DeleteForecastCallable(const DeleteForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteForecastAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteForecast(request), context);
}

void ForecastServiceClient::DeleteForecastAsync(const DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteForecastAsyncHelper( this, request, handler, context ); } );
}

DeleteForecastExportJobOutcome ForecastServiceClient::DeleteForecastExportJob(const DeleteForecastExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteForecastExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteForecastExportJobOutcomeCallable ForecastServiceClient::DeleteForecastExportJobCallable(const DeleteForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteForecastExportJobAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteForecastExportJob(request), context);
}

void ForecastServiceClient::DeleteForecastExportJobAsync(const DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteForecastExportJobAsyncHelper( this, request, handler, context ); } );
}

DeleteMonitorOutcome ForecastServiceClient::DeleteMonitor(const DeleteMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMonitorOutcomeCallable ForecastServiceClient::DeleteMonitorCallable(const DeleteMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteMonitorAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteMonitorRequest& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMonitor(request), context);
}

void ForecastServiceClient::DeleteMonitorAsync(const DeleteMonitorRequest& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteMonitorAsyncHelper( this, request, handler, context ); } );
}

DeletePredictorOutcome ForecastServiceClient::DeletePredictor(const DeletePredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePredictorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePredictorOutcomeCallable ForecastServiceClient::DeletePredictorCallable(const DeletePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeletePredictorAsyncHelper(ForecastServiceClient const * const clientThis, const DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePredictor(request), context);
}

void ForecastServiceClient::DeletePredictorAsync(const DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeletePredictorAsyncHelper( this, request, handler, context ); } );
}

DeletePredictorBacktestExportJobOutcome ForecastServiceClient::DeletePredictorBacktestExportJob(const DeletePredictorBacktestExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePredictorBacktestExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePredictorBacktestExportJobOutcomeCallable ForecastServiceClient::DeletePredictorBacktestExportJobCallable(const DeletePredictorBacktestExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePredictorBacktestExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePredictorBacktestExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeletePredictorBacktestExportJobAsyncHelper(ForecastServiceClient const * const clientThis, const DeletePredictorBacktestExportJobRequest& request, const DeletePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePredictorBacktestExportJob(request), context);
}

void ForecastServiceClient::DeletePredictorBacktestExportJobAsync(const DeletePredictorBacktestExportJobRequest& request, const DeletePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeletePredictorBacktestExportJobAsyncHelper( this, request, handler, context ); } );
}

DeleteResourceTreeOutcome ForecastServiceClient::DeleteResourceTree(const DeleteResourceTreeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourceTreeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceTreeOutcomeCallable ForecastServiceClient::DeleteResourceTreeCallable(const DeleteResourceTreeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceTreeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceTree(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteResourceTreeAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteResourceTreeRequest& request, const DeleteResourceTreeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourceTree(request), context);
}

void ForecastServiceClient::DeleteResourceTreeAsync(const DeleteResourceTreeRequest& request, const DeleteResourceTreeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteResourceTreeAsyncHelper( this, request, handler, context ); } );
}

DeleteWhatIfAnalysisOutcome ForecastServiceClient::DeleteWhatIfAnalysis(const DeleteWhatIfAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWhatIfAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfAnalysisOutcomeCallable ForecastServiceClient::DeleteWhatIfAnalysisCallable(const DeleteWhatIfAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWhatIfAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWhatIfAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteWhatIfAnalysisAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteWhatIfAnalysisRequest& request, const DeleteWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWhatIfAnalysis(request), context);
}

void ForecastServiceClient::DeleteWhatIfAnalysisAsync(const DeleteWhatIfAnalysisRequest& request, const DeleteWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteWhatIfAnalysisAsyncHelper( this, request, handler, context ); } );
}

DeleteWhatIfForecastOutcome ForecastServiceClient::DeleteWhatIfForecast(const DeleteWhatIfForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWhatIfForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfForecastOutcomeCallable ForecastServiceClient::DeleteWhatIfForecastCallable(const DeleteWhatIfForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWhatIfForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWhatIfForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteWhatIfForecastAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteWhatIfForecastRequest& request, const DeleteWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWhatIfForecast(request), context);
}

void ForecastServiceClient::DeleteWhatIfForecastAsync(const DeleteWhatIfForecastRequest& request, const DeleteWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteWhatIfForecastAsyncHelper( this, request, handler, context ); } );
}

DeleteWhatIfForecastExportOutcome ForecastServiceClient::DeleteWhatIfForecastExport(const DeleteWhatIfForecastExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWhatIfForecastExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWhatIfForecastExportOutcomeCallable ForecastServiceClient::DeleteWhatIfForecastExportCallable(const DeleteWhatIfForecastExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWhatIfForecastExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWhatIfForecastExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDeleteWhatIfForecastExportAsyncHelper(ForecastServiceClient const * const clientThis, const DeleteWhatIfForecastExportRequest& request, const DeleteWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWhatIfForecastExport(request), context);
}

void ForecastServiceClient::DeleteWhatIfForecastExportAsync(const DeleteWhatIfForecastExportRequest& request, const DeleteWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDeleteWhatIfForecastExportAsyncHelper( this, request, handler, context ); } );
}

DescribeAutoPredictorOutcome ForecastServiceClient::DescribeAutoPredictor(const DescribeAutoPredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutoPredictorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutoPredictorOutcomeCallable ForecastServiceClient::DescribeAutoPredictorCallable(const DescribeAutoPredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoPredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoPredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeAutoPredictorAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeAutoPredictorRequest& request, const DescribeAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAutoPredictor(request), context);
}

void ForecastServiceClient::DescribeAutoPredictorAsync(const DescribeAutoPredictorRequest& request, const DescribeAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeAutoPredictorAsyncHelper( this, request, handler, context ); } );
}

DescribeDatasetOutcome ForecastServiceClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable ForecastServiceClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeDatasetAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataset(request), context);
}

void ForecastServiceClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeDatasetAsyncHelper( this, request, handler, context ); } );
}

DescribeDatasetGroupOutcome ForecastServiceClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDatasetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetGroupOutcomeCallable ForecastServiceClient::DescribeDatasetGroupCallable(const DescribeDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeDatasetGroupAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDatasetGroup(request), context);
}

void ForecastServiceClient::DescribeDatasetGroupAsync(const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeDatasetGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeDatasetImportJobOutcome ForecastServiceClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDatasetImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetImportJobOutcomeCallable ForecastServiceClient::DescribeDatasetImportJobCallable(const DescribeDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeDatasetImportJobAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDatasetImportJob(request), context);
}

void ForecastServiceClient::DescribeDatasetImportJobAsync(const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeDatasetImportJobAsyncHelper( this, request, handler, context ); } );
}

DescribeExplainabilityOutcome ForecastServiceClient::DescribeExplainability(const DescribeExplainabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExplainabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExplainabilityOutcomeCallable ForecastServiceClient::DescribeExplainabilityCallable(const DescribeExplainabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExplainabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExplainability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeExplainabilityAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeExplainabilityRequest& request, const DescribeExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExplainability(request), context);
}

void ForecastServiceClient::DescribeExplainabilityAsync(const DescribeExplainabilityRequest& request, const DescribeExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeExplainabilityAsyncHelper( this, request, handler, context ); } );
}

DescribeExplainabilityExportOutcome ForecastServiceClient::DescribeExplainabilityExport(const DescribeExplainabilityExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExplainabilityExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExplainabilityExportOutcomeCallable ForecastServiceClient::DescribeExplainabilityExportCallable(const DescribeExplainabilityExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExplainabilityExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExplainabilityExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeExplainabilityExportAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeExplainabilityExportRequest& request, const DescribeExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExplainabilityExport(request), context);
}

void ForecastServiceClient::DescribeExplainabilityExportAsync(const DescribeExplainabilityExportRequest& request, const DescribeExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeExplainabilityExportAsyncHelper( this, request, handler, context ); } );
}

DescribeForecastOutcome ForecastServiceClient::DescribeForecast(const DescribeForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeForecastOutcomeCallable ForecastServiceClient::DescribeForecastCallable(const DescribeForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeForecastAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeForecast(request), context);
}

void ForecastServiceClient::DescribeForecastAsync(const DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeForecastAsyncHelper( this, request, handler, context ); } );
}

DescribeForecastExportJobOutcome ForecastServiceClient::DescribeForecastExportJob(const DescribeForecastExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeForecastExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeForecastExportJobOutcomeCallable ForecastServiceClient::DescribeForecastExportJobCallable(const DescribeForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeForecastExportJobAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeForecastExportJob(request), context);
}

void ForecastServiceClient::DescribeForecastExportJobAsync(const DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeForecastExportJobAsyncHelper( this, request, handler, context ); } );
}

DescribeMonitorOutcome ForecastServiceClient::DescribeMonitor(const DescribeMonitorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMonitorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMonitorOutcomeCallable ForecastServiceClient::DescribeMonitorCallable(const DescribeMonitorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMonitorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMonitor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeMonitorAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeMonitorRequest& request, const DescribeMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMonitor(request), context);
}

void ForecastServiceClient::DescribeMonitorAsync(const DescribeMonitorRequest& request, const DescribeMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeMonitorAsyncHelper( this, request, handler, context ); } );
}

DescribePredictorOutcome ForecastServiceClient::DescribePredictor(const DescribePredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePredictorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePredictorOutcomeCallable ForecastServiceClient::DescribePredictorCallable(const DescribePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribePredictorAsyncHelper(ForecastServiceClient const * const clientThis, const DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePredictor(request), context);
}

void ForecastServiceClient::DescribePredictorAsync(const DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribePredictorAsyncHelper( this, request, handler, context ); } );
}

DescribePredictorBacktestExportJobOutcome ForecastServiceClient::DescribePredictorBacktestExportJob(const DescribePredictorBacktestExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePredictorBacktestExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePredictorBacktestExportJobOutcomeCallable ForecastServiceClient::DescribePredictorBacktestExportJobCallable(const DescribePredictorBacktestExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePredictorBacktestExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePredictorBacktestExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribePredictorBacktestExportJobAsyncHelper(ForecastServiceClient const * const clientThis, const DescribePredictorBacktestExportJobRequest& request, const DescribePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePredictorBacktestExportJob(request), context);
}

void ForecastServiceClient::DescribePredictorBacktestExportJobAsync(const DescribePredictorBacktestExportJobRequest& request, const DescribePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribePredictorBacktestExportJobAsyncHelper( this, request, handler, context ); } );
}

DescribeWhatIfAnalysisOutcome ForecastServiceClient::DescribeWhatIfAnalysis(const DescribeWhatIfAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWhatIfAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfAnalysisOutcomeCallable ForecastServiceClient::DescribeWhatIfAnalysisCallable(const DescribeWhatIfAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWhatIfAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWhatIfAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeWhatIfAnalysisAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeWhatIfAnalysisRequest& request, const DescribeWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWhatIfAnalysis(request), context);
}

void ForecastServiceClient::DescribeWhatIfAnalysisAsync(const DescribeWhatIfAnalysisRequest& request, const DescribeWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeWhatIfAnalysisAsyncHelper( this, request, handler, context ); } );
}

DescribeWhatIfForecastOutcome ForecastServiceClient::DescribeWhatIfForecast(const DescribeWhatIfForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWhatIfForecastOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfForecastOutcomeCallable ForecastServiceClient::DescribeWhatIfForecastCallable(const DescribeWhatIfForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWhatIfForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWhatIfForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeWhatIfForecastAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeWhatIfForecastRequest& request, const DescribeWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWhatIfForecast(request), context);
}

void ForecastServiceClient::DescribeWhatIfForecastAsync(const DescribeWhatIfForecastRequest& request, const DescribeWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeWhatIfForecastAsyncHelper( this, request, handler, context ); } );
}

DescribeWhatIfForecastExportOutcome ForecastServiceClient::DescribeWhatIfForecastExport(const DescribeWhatIfForecastExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWhatIfForecastExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWhatIfForecastExportOutcomeCallable ForecastServiceClient::DescribeWhatIfForecastExportCallable(const DescribeWhatIfForecastExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWhatIfForecastExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWhatIfForecastExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientDescribeWhatIfForecastExportAsyncHelper(ForecastServiceClient const * const clientThis, const DescribeWhatIfForecastExportRequest& request, const DescribeWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWhatIfForecastExport(request), context);
}

void ForecastServiceClient::DescribeWhatIfForecastExportAsync(const DescribeWhatIfForecastExportRequest& request, const DescribeWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientDescribeWhatIfForecastExportAsyncHelper( this, request, handler, context ); } );
}

GetAccuracyMetricsOutcome ForecastServiceClient::GetAccuracyMetrics(const GetAccuracyMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccuracyMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccuracyMetricsOutcomeCallable ForecastServiceClient::GetAccuracyMetricsCallable(const GetAccuracyMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccuracyMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccuracyMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientGetAccuracyMetricsAsyncHelper(ForecastServiceClient const * const clientThis, const GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccuracyMetrics(request), context);
}

void ForecastServiceClient::GetAccuracyMetricsAsync(const GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientGetAccuracyMetricsAsyncHelper( this, request, handler, context ); } );
}

ListDatasetGroupsOutcome ForecastServiceClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatasetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetGroupsOutcomeCallable ForecastServiceClient::ListDatasetGroupsCallable(const ListDatasetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListDatasetGroupsAsyncHelper(ForecastServiceClient const * const clientThis, const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasetGroups(request), context);
}

void ForecastServiceClient::ListDatasetGroupsAsync(const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListDatasetGroupsAsyncHelper( this, request, handler, context ); } );
}

ListDatasetImportJobsOutcome ForecastServiceClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatasetImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetImportJobsOutcomeCallable ForecastServiceClient::ListDatasetImportJobsCallable(const ListDatasetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListDatasetImportJobsAsyncHelper(ForecastServiceClient const * const clientThis, const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasetImportJobs(request), context);
}

void ForecastServiceClient::ListDatasetImportJobsAsync(const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListDatasetImportJobsAsyncHelper( this, request, handler, context ); } );
}

ListDatasetsOutcome ForecastServiceClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatasetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable ForecastServiceClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListDatasetsAsyncHelper(ForecastServiceClient const * const clientThis, const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasets(request), context);
}

void ForecastServiceClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListDatasetsAsyncHelper( this, request, handler, context ); } );
}

ListExplainabilitiesOutcome ForecastServiceClient::ListExplainabilities(const ListExplainabilitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExplainabilitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExplainabilitiesOutcomeCallable ForecastServiceClient::ListExplainabilitiesCallable(const ListExplainabilitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExplainabilitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExplainabilities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListExplainabilitiesAsyncHelper(ForecastServiceClient const * const clientThis, const ListExplainabilitiesRequest& request, const ListExplainabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExplainabilities(request), context);
}

void ForecastServiceClient::ListExplainabilitiesAsync(const ListExplainabilitiesRequest& request, const ListExplainabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListExplainabilitiesAsyncHelper( this, request, handler, context ); } );
}

ListExplainabilityExportsOutcome ForecastServiceClient::ListExplainabilityExports(const ListExplainabilityExportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExplainabilityExportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExplainabilityExportsOutcomeCallable ForecastServiceClient::ListExplainabilityExportsCallable(const ListExplainabilityExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExplainabilityExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExplainabilityExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListExplainabilityExportsAsyncHelper(ForecastServiceClient const * const clientThis, const ListExplainabilityExportsRequest& request, const ListExplainabilityExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExplainabilityExports(request), context);
}

void ForecastServiceClient::ListExplainabilityExportsAsync(const ListExplainabilityExportsRequest& request, const ListExplainabilityExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListExplainabilityExportsAsyncHelper( this, request, handler, context ); } );
}

ListForecastExportJobsOutcome ForecastServiceClient::ListForecastExportJobs(const ListForecastExportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListForecastExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListForecastExportJobsOutcomeCallable ForecastServiceClient::ListForecastExportJobsCallable(const ListForecastExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListForecastExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListForecastExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListForecastExportJobsAsyncHelper(ForecastServiceClient const * const clientThis, const ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListForecastExportJobs(request), context);
}

void ForecastServiceClient::ListForecastExportJobsAsync(const ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListForecastExportJobsAsyncHelper( this, request, handler, context ); } );
}

ListForecastsOutcome ForecastServiceClient::ListForecasts(const ListForecastsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListForecastsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListForecastsOutcomeCallable ForecastServiceClient::ListForecastsCallable(const ListForecastsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListForecastsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListForecasts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListForecastsAsyncHelper(ForecastServiceClient const * const clientThis, const ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListForecasts(request), context);
}

void ForecastServiceClient::ListForecastsAsync(const ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListForecastsAsyncHelper( this, request, handler, context ); } );
}

ListMonitorEvaluationsOutcome ForecastServiceClient::ListMonitorEvaluations(const ListMonitorEvaluationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMonitorEvaluationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitorEvaluationsOutcomeCallable ForecastServiceClient::ListMonitorEvaluationsCallable(const ListMonitorEvaluationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitorEvaluationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitorEvaluations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListMonitorEvaluationsAsyncHelper(ForecastServiceClient const * const clientThis, const ListMonitorEvaluationsRequest& request, const ListMonitorEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMonitorEvaluations(request), context);
}

void ForecastServiceClient::ListMonitorEvaluationsAsync(const ListMonitorEvaluationsRequest& request, const ListMonitorEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListMonitorEvaluationsAsyncHelper( this, request, handler, context ); } );
}

ListMonitorsOutcome ForecastServiceClient::ListMonitors(const ListMonitorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMonitorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitorsOutcomeCallable ForecastServiceClient::ListMonitorsCallable(const ListMonitorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListMonitorsAsyncHelper(ForecastServiceClient const * const clientThis, const ListMonitorsRequest& request, const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMonitors(request), context);
}

void ForecastServiceClient::ListMonitorsAsync(const ListMonitorsRequest& request, const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListMonitorsAsyncHelper( this, request, handler, context ); } );
}

ListPredictorBacktestExportJobsOutcome ForecastServiceClient::ListPredictorBacktestExportJobs(const ListPredictorBacktestExportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPredictorBacktestExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPredictorBacktestExportJobsOutcomeCallable ForecastServiceClient::ListPredictorBacktestExportJobsCallable(const ListPredictorBacktestExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPredictorBacktestExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPredictorBacktestExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListPredictorBacktestExportJobsAsyncHelper(ForecastServiceClient const * const clientThis, const ListPredictorBacktestExportJobsRequest& request, const ListPredictorBacktestExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPredictorBacktestExportJobs(request), context);
}

void ForecastServiceClient::ListPredictorBacktestExportJobsAsync(const ListPredictorBacktestExportJobsRequest& request, const ListPredictorBacktestExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListPredictorBacktestExportJobsAsyncHelper( this, request, handler, context ); } );
}

ListPredictorsOutcome ForecastServiceClient::ListPredictors(const ListPredictorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPredictorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPredictorsOutcomeCallable ForecastServiceClient::ListPredictorsCallable(const ListPredictorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPredictorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPredictors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListPredictorsAsyncHelper(ForecastServiceClient const * const clientThis, const ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPredictors(request), context);
}

void ForecastServiceClient::ListPredictorsAsync(const ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListPredictorsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ForecastServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ForecastServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListTagsForResourceAsyncHelper(ForecastServiceClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ForecastServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWhatIfAnalysesOutcome ForecastServiceClient::ListWhatIfAnalyses(const ListWhatIfAnalysesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWhatIfAnalysesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfAnalysesOutcomeCallable ForecastServiceClient::ListWhatIfAnalysesCallable(const ListWhatIfAnalysesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWhatIfAnalysesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWhatIfAnalyses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListWhatIfAnalysesAsyncHelper(ForecastServiceClient const * const clientThis, const ListWhatIfAnalysesRequest& request, const ListWhatIfAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWhatIfAnalyses(request), context);
}

void ForecastServiceClient::ListWhatIfAnalysesAsync(const ListWhatIfAnalysesRequest& request, const ListWhatIfAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListWhatIfAnalysesAsyncHelper( this, request, handler, context ); } );
}

ListWhatIfForecastExportsOutcome ForecastServiceClient::ListWhatIfForecastExports(const ListWhatIfForecastExportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWhatIfForecastExportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfForecastExportsOutcomeCallable ForecastServiceClient::ListWhatIfForecastExportsCallable(const ListWhatIfForecastExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWhatIfForecastExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWhatIfForecastExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListWhatIfForecastExportsAsyncHelper(ForecastServiceClient const * const clientThis, const ListWhatIfForecastExportsRequest& request, const ListWhatIfForecastExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWhatIfForecastExports(request), context);
}

void ForecastServiceClient::ListWhatIfForecastExportsAsync(const ListWhatIfForecastExportsRequest& request, const ListWhatIfForecastExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListWhatIfForecastExportsAsyncHelper( this, request, handler, context ); } );
}

ListWhatIfForecastsOutcome ForecastServiceClient::ListWhatIfForecasts(const ListWhatIfForecastsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWhatIfForecastsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWhatIfForecastsOutcomeCallable ForecastServiceClient::ListWhatIfForecastsCallable(const ListWhatIfForecastsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWhatIfForecastsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWhatIfForecasts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientListWhatIfForecastsAsyncHelper(ForecastServiceClient const * const clientThis, const ListWhatIfForecastsRequest& request, const ListWhatIfForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWhatIfForecasts(request), context);
}

void ForecastServiceClient::ListWhatIfForecastsAsync(const ListWhatIfForecastsRequest& request, const ListWhatIfForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientListWhatIfForecastsAsyncHelper( this, request, handler, context ); } );
}

ResumeResourceOutcome ForecastServiceClient::ResumeResource(const ResumeResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResumeResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeResourceOutcomeCallable ForecastServiceClient::ResumeResourceCallable(const ResumeResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientResumeResourceAsyncHelper(ForecastServiceClient const * const clientThis, const ResumeResourceRequest& request, const ResumeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResumeResource(request), context);
}

void ForecastServiceClient::ResumeResourceAsync(const ResumeResourceRequest& request, const ResumeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientResumeResourceAsyncHelper( this, request, handler, context ); } );
}

StopResourceOutcome ForecastServiceClient::StopResource(const StopResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopResourceOutcomeCallable ForecastServiceClient::StopResourceCallable(const StopResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientStopResourceAsyncHelper(ForecastServiceClient const * const clientThis, const StopResourceRequest& request, const StopResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopResource(request), context);
}

void ForecastServiceClient::StopResourceAsync(const StopResourceRequest& request, const StopResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientStopResourceAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ForecastServiceClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ForecastServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientTagResourceAsyncHelper(ForecastServiceClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ForecastServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ForecastServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ForecastServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientUntagResourceAsyncHelper(ForecastServiceClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ForecastServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDatasetGroupOutcome ForecastServiceClient::UpdateDatasetGroup(const UpdateDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDatasetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetGroupOutcomeCallable ForecastServiceClient::UpdateDatasetGroupCallable(const UpdateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClientUpdateDatasetGroupAsyncHelper(ForecastServiceClient const * const clientThis, const UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDatasetGroup(request), context);
}

void ForecastServiceClient::UpdateDatasetGroupAsync(const UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ForecastServiceClientUpdateDatasetGroupAsyncHelper( this, request, handler, context ); } );
}

