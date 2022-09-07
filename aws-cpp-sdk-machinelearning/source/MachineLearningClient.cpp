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
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/machinelearning/MachineLearningClient.h>
#include <aws/machinelearning/MachineLearningEndpoint.h>
#include <aws/machinelearning/MachineLearningErrorMarshaller.h>
#include <aws/machinelearning/model/AddTagsRequest.h>
#include <aws/machinelearning/model/CreateBatchPredictionRequest.h>
#include <aws/machinelearning/model/CreateDataSourceFromRDSRequest.h>
#include <aws/machinelearning/model/CreateDataSourceFromRedshiftRequest.h>
#include <aws/machinelearning/model/CreateDataSourceFromS3Request.h>
#include <aws/machinelearning/model/CreateEvaluationRequest.h>
#include <aws/machinelearning/model/CreateMLModelRequest.h>
#include <aws/machinelearning/model/CreateRealtimeEndpointRequest.h>
#include <aws/machinelearning/model/DeleteBatchPredictionRequest.h>
#include <aws/machinelearning/model/DeleteDataSourceRequest.h>
#include <aws/machinelearning/model/DeleteEvaluationRequest.h>
#include <aws/machinelearning/model/DeleteMLModelRequest.h>
#include <aws/machinelearning/model/DeleteRealtimeEndpointRequest.h>
#include <aws/machinelearning/model/DeleteTagsRequest.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsRequest.h>
#include <aws/machinelearning/model/DescribeDataSourcesRequest.h>
#include <aws/machinelearning/model/DescribeEvaluationsRequest.h>
#include <aws/machinelearning/model/DescribeMLModelsRequest.h>
#include <aws/machinelearning/model/DescribeTagsRequest.h>
#include <aws/machinelearning/model/GetBatchPredictionRequest.h>
#include <aws/machinelearning/model/GetDataSourceRequest.h>
#include <aws/machinelearning/model/GetEvaluationRequest.h>
#include <aws/machinelearning/model/GetMLModelRequest.h>
#include <aws/machinelearning/model/PredictRequest.h>
#include <aws/machinelearning/model/UpdateBatchPredictionRequest.h>
#include <aws/machinelearning/model/UpdateDataSourceRequest.h>
#include <aws/machinelearning/model/UpdateEvaluationRequest.h>
#include <aws/machinelearning/model/UpdateMLModelRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MachineLearning;
using namespace Aws::MachineLearning::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;


static const char* SERVICE_NAME = "machinelearning";
static const char* ALLOCATION_TAG = "MachineLearningClient";

MachineLearningClient::MachineLearningClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::~MachineLearningClient()
{
}

void MachineLearningClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Machine Learning");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MachineLearningEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MachineLearningClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsOutcome MachineLearningClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsOutcomeCallable MachineLearningClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientAddTagsAsyncHelper(MachineLearningClient const * const clientThis, const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTags(request), context);
}

void MachineLearningClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientAddTagsAsyncHelper(this, request, handler, context); } );
}


CreateBatchPredictionOutcome MachineLearningClient::CreateBatchPrediction(const CreateBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBatchPredictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateBatchPredictionOutcomeCallable MachineLearningClient::CreateBatchPredictionCallable(const CreateBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientCreateBatchPredictionAsyncHelper(MachineLearningClient const * const clientThis, const CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBatchPrediction(request), context);
}

void MachineLearningClient::CreateBatchPredictionAsync(const CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientCreateBatchPredictionAsyncHelper(this, request, handler, context); } );
}


CreateDataSourceFromRDSOutcome MachineLearningClient::CreateDataSourceFromRDS(const CreateDataSourceFromRDSRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataSourceFromRDSOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDataSourceFromRDSOutcomeCallable MachineLearningClient::CreateDataSourceFromRDSCallable(const CreateDataSourceFromRDSRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceFromRDSOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSourceFromRDS(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientCreateDataSourceFromRDSAsyncHelper(MachineLearningClient const * const clientThis, const CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSourceFromRDS(request), context);
}

void MachineLearningClient::CreateDataSourceFromRDSAsync(const CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientCreateDataSourceFromRDSAsyncHelper(this, request, handler, context); } );
}


CreateDataSourceFromRedshiftOutcome MachineLearningClient::CreateDataSourceFromRedshift(const CreateDataSourceFromRedshiftRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataSourceFromRedshiftOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDataSourceFromRedshiftOutcomeCallable MachineLearningClient::CreateDataSourceFromRedshiftCallable(const CreateDataSourceFromRedshiftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceFromRedshiftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSourceFromRedshift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientCreateDataSourceFromRedshiftAsyncHelper(MachineLearningClient const * const clientThis, const CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSourceFromRedshift(request), context);
}

void MachineLearningClient::CreateDataSourceFromRedshiftAsync(const CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientCreateDataSourceFromRedshiftAsyncHelper(this, request, handler, context); } );
}


CreateDataSourceFromS3Outcome MachineLearningClient::CreateDataSourceFromS3(const CreateDataSourceFromS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataSourceFromS3Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDataSourceFromS3OutcomeCallable MachineLearningClient::CreateDataSourceFromS3Callable(const CreateDataSourceFromS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceFromS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSourceFromS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientCreateDataSourceFromS3AsyncHelper(MachineLearningClient const * const clientThis, const CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSourceFromS3(request), context);
}

void MachineLearningClient::CreateDataSourceFromS3Async(const CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientCreateDataSourceFromS3AsyncHelper(this, request, handler, context); } );
}


CreateEvaluationOutcome MachineLearningClient::CreateEvaluation(const CreateEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEvaluationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateEvaluationOutcomeCallable MachineLearningClient::CreateEvaluationCallable(const CreateEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientCreateEvaluationAsyncHelper(MachineLearningClient const * const clientThis, const CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEvaluation(request), context);
}

void MachineLearningClient::CreateEvaluationAsync(const CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientCreateEvaluationAsyncHelper(this, request, handler, context); } );
}


CreateMLModelOutcome MachineLearningClient::CreateMLModel(const CreateMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMLModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateMLModelOutcomeCallable MachineLearningClient::CreateMLModelCallable(const CreateMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientCreateMLModelAsyncHelper(MachineLearningClient const * const clientThis, const CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMLModel(request), context);
}

void MachineLearningClient::CreateMLModelAsync(const CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientCreateMLModelAsyncHelper(this, request, handler, context); } );
}


CreateRealtimeEndpointOutcome MachineLearningClient::CreateRealtimeEndpoint(const CreateRealtimeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRealtimeEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateRealtimeEndpointOutcomeCallable MachineLearningClient::CreateRealtimeEndpointCallable(const CreateRealtimeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRealtimeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRealtimeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientCreateRealtimeEndpointAsyncHelper(MachineLearningClient const * const clientThis, const CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRealtimeEndpoint(request), context);
}

void MachineLearningClient::CreateRealtimeEndpointAsync(const CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientCreateRealtimeEndpointAsyncHelper(this, request, handler, context); } );
}


DeleteBatchPredictionOutcome MachineLearningClient::DeleteBatchPrediction(const DeleteBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBatchPredictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteBatchPredictionOutcomeCallable MachineLearningClient::DeleteBatchPredictionCallable(const DeleteBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDeleteBatchPredictionAsyncHelper(MachineLearningClient const * const clientThis, const DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBatchPrediction(request), context);
}

void MachineLearningClient::DeleteBatchPredictionAsync(const DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDeleteBatchPredictionAsyncHelper(this, request, handler, context); } );
}


DeleteDataSourceOutcome MachineLearningClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDataSourceOutcomeCallable MachineLearningClient::DeleteDataSourceCallable(const DeleteDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDeleteDataSourceAsyncHelper(MachineLearningClient const * const clientThis, const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataSource(request), context);
}

void MachineLearningClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDeleteDataSourceAsyncHelper(this, request, handler, context); } );
}


DeleteEvaluationOutcome MachineLearningClient::DeleteEvaluation(const DeleteEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEvaluationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEvaluationOutcomeCallable MachineLearningClient::DeleteEvaluationCallable(const DeleteEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDeleteEvaluationAsyncHelper(MachineLearningClient const * const clientThis, const DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEvaluation(request), context);
}

void MachineLearningClient::DeleteEvaluationAsync(const DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDeleteEvaluationAsyncHelper(this, request, handler, context); } );
}


DeleteMLModelOutcome MachineLearningClient::DeleteMLModel(const DeleteMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMLModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMLModelOutcomeCallable MachineLearningClient::DeleteMLModelCallable(const DeleteMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDeleteMLModelAsyncHelper(MachineLearningClient const * const clientThis, const DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMLModel(request), context);
}

void MachineLearningClient::DeleteMLModelAsync(const DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDeleteMLModelAsyncHelper(this, request, handler, context); } );
}


DeleteRealtimeEndpointOutcome MachineLearningClient::DeleteRealtimeEndpoint(const DeleteRealtimeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRealtimeEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRealtimeEndpointOutcomeCallable MachineLearningClient::DeleteRealtimeEndpointCallable(const DeleteRealtimeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRealtimeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRealtimeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDeleteRealtimeEndpointAsyncHelper(MachineLearningClient const * const clientThis, const DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRealtimeEndpoint(request), context);
}

void MachineLearningClient::DeleteRealtimeEndpointAsync(const DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDeleteRealtimeEndpointAsyncHelper(this, request, handler, context); } );
}


DeleteTagsOutcome MachineLearningClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTagsOutcomeCallable MachineLearningClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDeleteTagsAsyncHelper(MachineLearningClient const * const clientThis, const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTags(request), context);
}

void MachineLearningClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDeleteTagsAsyncHelper(this, request, handler, context); } );
}


DescribeBatchPredictionsOutcome MachineLearningClient::DescribeBatchPredictions(const DescribeBatchPredictionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeBatchPredictionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeBatchPredictionsOutcomeCallable MachineLearningClient::DescribeBatchPredictionsCallable(const DescribeBatchPredictionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBatchPredictionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBatchPredictions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDescribeBatchPredictionsAsyncHelper(MachineLearningClient const * const clientThis, const DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBatchPredictions(request), context);
}

void MachineLearningClient::DescribeBatchPredictionsAsync(const DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDescribeBatchPredictionsAsyncHelper(this, request, handler, context); } );
}


DescribeDataSourcesOutcome MachineLearningClient::DescribeDataSources(const DescribeDataSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDataSourcesOutcomeCallable MachineLearningClient::DescribeDataSourcesCallable(const DescribeDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDescribeDataSourcesAsyncHelper(MachineLearningClient const * const clientThis, const DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataSources(request), context);
}

void MachineLearningClient::DescribeDataSourcesAsync(const DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDescribeDataSourcesAsyncHelper(this, request, handler, context); } );
}


DescribeEvaluationsOutcome MachineLearningClient::DescribeEvaluations(const DescribeEvaluationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEvaluationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEvaluationsOutcomeCallable MachineLearningClient::DescribeEvaluationsCallable(const DescribeEvaluationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEvaluationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvaluations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDescribeEvaluationsAsyncHelper(MachineLearningClient const * const clientThis, const DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvaluations(request), context);
}

void MachineLearningClient::DescribeEvaluationsAsync(const DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDescribeEvaluationsAsyncHelper(this, request, handler, context); } );
}


DescribeMLModelsOutcome MachineLearningClient::DescribeMLModels(const DescribeMLModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMLModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeMLModelsOutcomeCallable MachineLearningClient::DescribeMLModelsCallable(const DescribeMLModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMLModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMLModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDescribeMLModelsAsyncHelper(MachineLearningClient const * const clientThis, const DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMLModels(request), context);
}

void MachineLearningClient::DescribeMLModelsAsync(const DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDescribeMLModelsAsyncHelper(this, request, handler, context); } );
}


DescribeTagsOutcome MachineLearningClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcomeCallable MachineLearningClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientDescribeTagsAsyncHelper(MachineLearningClient const * const clientThis, const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTags(request), context);
}

void MachineLearningClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientDescribeTagsAsyncHelper(this, request, handler, context); } );
}


GetBatchPredictionOutcome MachineLearningClient::GetBatchPrediction(const GetBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBatchPredictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetBatchPredictionOutcomeCallable MachineLearningClient::GetBatchPredictionCallable(const GetBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientGetBatchPredictionAsyncHelper(MachineLearningClient const * const clientThis, const GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBatchPrediction(request), context);
}

void MachineLearningClient::GetBatchPredictionAsync(const GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientGetBatchPredictionAsyncHelper(this, request, handler, context); } );
}


GetDataSourceOutcome MachineLearningClient::GetDataSource(const GetDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetDataSourceOutcomeCallable MachineLearningClient::GetDataSourceCallable(const GetDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientGetDataSourceAsyncHelper(MachineLearningClient const * const clientThis, const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataSource(request), context);
}

void MachineLearningClient::GetDataSourceAsync(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientGetDataSourceAsyncHelper(this, request, handler, context); } );
}


GetEvaluationOutcome MachineLearningClient::GetEvaluation(const GetEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEvaluationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetEvaluationOutcomeCallable MachineLearningClient::GetEvaluationCallable(const GetEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientGetEvaluationAsyncHelper(MachineLearningClient const * const clientThis, const GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEvaluation(request), context);
}

void MachineLearningClient::GetEvaluationAsync(const GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientGetEvaluationAsyncHelper(this, request, handler, context); } );
}


GetMLModelOutcome MachineLearningClient::GetMLModel(const GetMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMLModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetMLModelOutcomeCallable MachineLearningClient::GetMLModelCallable(const GetMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientGetMLModelAsyncHelper(MachineLearningClient const * const clientThis, const GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMLModel(request), context);
}

void MachineLearningClient::GetMLModelAsync(const GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientGetMLModelAsyncHelper(this, request, handler, context); } );
}


PredictOutcome MachineLearningClient::Predict(const PredictRequest& request) const
{
  return PredictOutcome(MakeRequest(request.GetPredictEndpoint(), request, Aws::Http::HttpMethod::HTTP_POST));
}

PredictOutcomeCallable MachineLearningClient::PredictCallable(const PredictRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PredictOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Predict(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientPredictAsyncHelper(MachineLearningClient const * const clientThis, const PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Predict(request), context);
}

void MachineLearningClient::PredictAsync(const PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientPredictAsyncHelper(this, request, handler, context); } );
}


UpdateBatchPredictionOutcome MachineLearningClient::UpdateBatchPrediction(const UpdateBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateBatchPredictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateBatchPredictionOutcomeCallable MachineLearningClient::UpdateBatchPredictionCallable(const UpdateBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientUpdateBatchPredictionAsyncHelper(MachineLearningClient const * const clientThis, const UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBatchPrediction(request), context);
}

void MachineLearningClient::UpdateBatchPredictionAsync(const UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientUpdateBatchPredictionAsyncHelper(this, request, handler, context); } );
}


UpdateDataSourceOutcome MachineLearningClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateDataSourceOutcomeCallable MachineLearningClient::UpdateDataSourceCallable(const UpdateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientUpdateDataSourceAsyncHelper(MachineLearningClient const * const clientThis, const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataSource(request), context);
}

void MachineLearningClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientUpdateDataSourceAsyncHelper(this, request, handler, context); } );
}


UpdateEvaluationOutcome MachineLearningClient::UpdateEvaluation(const UpdateEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEvaluationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateEvaluationOutcomeCallable MachineLearningClient::UpdateEvaluationCallable(const UpdateEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientUpdateEvaluationAsyncHelper(MachineLearningClient const * const clientThis, const UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEvaluation(request), context);
}

void MachineLearningClient::UpdateEvaluationAsync(const UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientUpdateEvaluationAsyncHelper(this, request, handler, context); } );
}


UpdateMLModelOutcome MachineLearningClient::UpdateMLModel(const UpdateMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMLModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateMLModelOutcomeCallable MachineLearningClient::UpdateMLModelCallable(const UpdateMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClientUpdateMLModelAsyncHelper(MachineLearningClient const * const clientThis, const UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMLModel(request), context);
}

void MachineLearningClient::UpdateMLModelAsync(const UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MachineLearningClientUpdateMLModelAsyncHelper(this, request, handler, context); } );
}


