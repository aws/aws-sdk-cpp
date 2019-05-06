/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::~MachineLearningClient()
{
}

void MachineLearningClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable MachineLearningClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CreateBatchPredictionOutcome MachineLearningClient::CreateBatchPrediction(const CreateBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateBatchPredictionOutcome(CreateBatchPredictionResult(outcome.GetResult()));
  }
  else
  {
    return CreateBatchPredictionOutcome(outcome.GetError());
  }
}

CreateBatchPredictionOutcomeCallable MachineLearningClient::CreateBatchPredictionCallable(const CreateBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::CreateBatchPredictionAsync(const CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBatchPredictionAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::CreateBatchPredictionAsyncHelper(const CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBatchPrediction(request), context);
}

CreateDataSourceFromRDSOutcome MachineLearningClient::CreateDataSourceFromRDS(const CreateDataSourceFromRDSRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDataSourceFromRDSOutcome(CreateDataSourceFromRDSResult(outcome.GetResult()));
  }
  else
  {
    return CreateDataSourceFromRDSOutcome(outcome.GetError());
  }
}

CreateDataSourceFromRDSOutcomeCallable MachineLearningClient::CreateDataSourceFromRDSCallable(const CreateDataSourceFromRDSRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceFromRDSOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSourceFromRDS(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::CreateDataSourceFromRDSAsync(const CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataSourceFromRDSAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::CreateDataSourceFromRDSAsyncHelper(const CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSourceFromRDS(request), context);
}

CreateDataSourceFromRedshiftOutcome MachineLearningClient::CreateDataSourceFromRedshift(const CreateDataSourceFromRedshiftRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDataSourceFromRedshiftOutcome(CreateDataSourceFromRedshiftResult(outcome.GetResult()));
  }
  else
  {
    return CreateDataSourceFromRedshiftOutcome(outcome.GetError());
  }
}

CreateDataSourceFromRedshiftOutcomeCallable MachineLearningClient::CreateDataSourceFromRedshiftCallable(const CreateDataSourceFromRedshiftRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceFromRedshiftOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSourceFromRedshift(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::CreateDataSourceFromRedshiftAsync(const CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataSourceFromRedshiftAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::CreateDataSourceFromRedshiftAsyncHelper(const CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSourceFromRedshift(request), context);
}

CreateDataSourceFromS3Outcome MachineLearningClient::CreateDataSourceFromS3(const CreateDataSourceFromS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDataSourceFromS3Outcome(CreateDataSourceFromS3Result(outcome.GetResult()));
  }
  else
  {
    return CreateDataSourceFromS3Outcome(outcome.GetError());
  }
}

CreateDataSourceFromS3OutcomeCallable MachineLearningClient::CreateDataSourceFromS3Callable(const CreateDataSourceFromS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceFromS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSourceFromS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::CreateDataSourceFromS3Async(const CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataSourceFromS3AsyncHelper(request, handler, context); } );
}

void MachineLearningClient::CreateDataSourceFromS3AsyncHelper(const CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSourceFromS3(request), context);
}

CreateEvaluationOutcome MachineLearningClient::CreateEvaluation(const CreateEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateEvaluationOutcome(CreateEvaluationResult(outcome.GetResult()));
  }
  else
  {
    return CreateEvaluationOutcome(outcome.GetError());
  }
}

CreateEvaluationOutcomeCallable MachineLearningClient::CreateEvaluationCallable(const CreateEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::CreateEvaluationAsync(const CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEvaluationAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::CreateEvaluationAsyncHelper(const CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEvaluation(request), context);
}

CreateMLModelOutcome MachineLearningClient::CreateMLModel(const CreateMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateMLModelOutcome(CreateMLModelResult(outcome.GetResult()));
  }
  else
  {
    return CreateMLModelOutcome(outcome.GetError());
  }
}

CreateMLModelOutcomeCallable MachineLearningClient::CreateMLModelCallable(const CreateMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::CreateMLModelAsync(const CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMLModelAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::CreateMLModelAsyncHelper(const CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMLModel(request), context);
}

CreateRealtimeEndpointOutcome MachineLearningClient::CreateRealtimeEndpoint(const CreateRealtimeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateRealtimeEndpointOutcome(CreateRealtimeEndpointResult(outcome.GetResult()));
  }
  else
  {
    return CreateRealtimeEndpointOutcome(outcome.GetError());
  }
}

CreateRealtimeEndpointOutcomeCallable MachineLearningClient::CreateRealtimeEndpointCallable(const CreateRealtimeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRealtimeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRealtimeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::CreateRealtimeEndpointAsync(const CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRealtimeEndpointAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::CreateRealtimeEndpointAsyncHelper(const CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRealtimeEndpoint(request), context);
}

DeleteBatchPredictionOutcome MachineLearningClient::DeleteBatchPrediction(const DeleteBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteBatchPredictionOutcome(DeleteBatchPredictionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBatchPredictionOutcome(outcome.GetError());
  }
}

DeleteBatchPredictionOutcomeCallable MachineLearningClient::DeleteBatchPredictionCallable(const DeleteBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DeleteBatchPredictionAsync(const DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBatchPredictionAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DeleteBatchPredictionAsyncHelper(const DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBatchPrediction(request), context);
}

DeleteDataSourceOutcome MachineLearningClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDataSourceOutcome(DeleteDataSourceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDataSourceOutcome(outcome.GetError());
  }
}

DeleteDataSourceOutcomeCallable MachineLearningClient::DeleteDataSourceCallable(const DeleteDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDataSourceAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DeleteDataSourceAsyncHelper(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataSource(request), context);
}

DeleteEvaluationOutcome MachineLearningClient::DeleteEvaluation(const DeleteEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteEvaluationOutcome(DeleteEvaluationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEvaluationOutcome(outcome.GetError());
  }
}

DeleteEvaluationOutcomeCallable MachineLearningClient::DeleteEvaluationCallable(const DeleteEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DeleteEvaluationAsync(const DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEvaluationAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DeleteEvaluationAsyncHelper(const DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEvaluation(request), context);
}

DeleteMLModelOutcome MachineLearningClient::DeleteMLModel(const DeleteMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteMLModelOutcome(DeleteMLModelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMLModelOutcome(outcome.GetError());
  }
}

DeleteMLModelOutcomeCallable MachineLearningClient::DeleteMLModelCallable(const DeleteMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DeleteMLModelAsync(const DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMLModelAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DeleteMLModelAsyncHelper(const DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMLModel(request), context);
}

DeleteRealtimeEndpointOutcome MachineLearningClient::DeleteRealtimeEndpoint(const DeleteRealtimeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRealtimeEndpointOutcome(DeleteRealtimeEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRealtimeEndpointOutcome(outcome.GetError());
  }
}

DeleteRealtimeEndpointOutcomeCallable MachineLearningClient::DeleteRealtimeEndpointCallable(const DeleteRealtimeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRealtimeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRealtimeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DeleteRealtimeEndpointAsync(const DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRealtimeEndpointAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DeleteRealtimeEndpointAsyncHelper(const DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRealtimeEndpoint(request), context);
}

DeleteTagsOutcome MachineLearningClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(DeleteTagsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable MachineLearningClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeBatchPredictionsOutcome MachineLearningClient::DescribeBatchPredictions(const DescribeBatchPredictionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeBatchPredictionsOutcome(DescribeBatchPredictionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBatchPredictionsOutcome(outcome.GetError());
  }
}

DescribeBatchPredictionsOutcomeCallable MachineLearningClient::DescribeBatchPredictionsCallable(const DescribeBatchPredictionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBatchPredictionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBatchPredictions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DescribeBatchPredictionsAsync(const DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBatchPredictionsAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DescribeBatchPredictionsAsyncHelper(const DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBatchPredictions(request), context);
}

DescribeDataSourcesOutcome MachineLearningClient::DescribeDataSources(const DescribeDataSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDataSourcesOutcome(DescribeDataSourcesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDataSourcesOutcome(outcome.GetError());
  }
}

DescribeDataSourcesOutcomeCallable MachineLearningClient::DescribeDataSourcesCallable(const DescribeDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DescribeDataSourcesAsync(const DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDataSourcesAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DescribeDataSourcesAsyncHelper(const DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataSources(request), context);
}

DescribeEvaluationsOutcome MachineLearningClient::DescribeEvaluations(const DescribeEvaluationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEvaluationsOutcome(DescribeEvaluationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEvaluationsOutcome(outcome.GetError());
  }
}

DescribeEvaluationsOutcomeCallable MachineLearningClient::DescribeEvaluationsCallable(const DescribeEvaluationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEvaluationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvaluations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DescribeEvaluationsAsync(const DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEvaluationsAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DescribeEvaluationsAsyncHelper(const DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvaluations(request), context);
}

DescribeMLModelsOutcome MachineLearningClient::DescribeMLModels(const DescribeMLModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMLModelsOutcome(DescribeMLModelsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMLModelsOutcome(outcome.GetError());
  }
}

DescribeMLModelsOutcomeCallable MachineLearningClient::DescribeMLModelsCallable(const DescribeMLModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMLModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMLModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DescribeMLModelsAsync(const DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMLModelsAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DescribeMLModelsAsyncHelper(const DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMLModels(request), context);
}

DescribeTagsOutcome MachineLearningClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable MachineLearningClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

GetBatchPredictionOutcome MachineLearningClient::GetBatchPrediction(const GetBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetBatchPredictionOutcome(GetBatchPredictionResult(outcome.GetResult()));
  }
  else
  {
    return GetBatchPredictionOutcome(outcome.GetError());
  }
}

GetBatchPredictionOutcomeCallable MachineLearningClient::GetBatchPredictionCallable(const GetBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::GetBatchPredictionAsync(const GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBatchPredictionAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::GetBatchPredictionAsyncHelper(const GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBatchPrediction(request), context);
}

GetDataSourceOutcome MachineLearningClient::GetDataSource(const GetDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDataSourceOutcome(GetDataSourceResult(outcome.GetResult()));
  }
  else
  {
    return GetDataSourceOutcome(outcome.GetError());
  }
}

GetDataSourceOutcomeCallable MachineLearningClient::GetDataSourceCallable(const GetDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::GetDataSourceAsync(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataSourceAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::GetDataSourceAsyncHelper(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataSource(request), context);
}

GetEvaluationOutcome MachineLearningClient::GetEvaluation(const GetEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetEvaluationOutcome(GetEvaluationResult(outcome.GetResult()));
  }
  else
  {
    return GetEvaluationOutcome(outcome.GetError());
  }
}

GetEvaluationOutcomeCallable MachineLearningClient::GetEvaluationCallable(const GetEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::GetEvaluationAsync(const GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEvaluationAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::GetEvaluationAsyncHelper(const GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEvaluation(request), context);
}

GetMLModelOutcome MachineLearningClient::GetMLModel(const GetMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMLModelOutcome(GetMLModelResult(outcome.GetResult()));
  }
  else
  {
    return GetMLModelOutcome(outcome.GetError());
  }
}

GetMLModelOutcomeCallable MachineLearningClient::GetMLModelCallable(const GetMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::GetMLModelAsync(const GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMLModelAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::GetMLModelAsyncHelper(const GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMLModel(request), context);
}

PredictOutcome MachineLearningClient::Predict(const PredictRequest& request) const
{
  JsonOutcome outcome = MakeRequest(request.GetPredictEndpoint(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PredictOutcome(PredictResult(outcome.GetResult()));
  }
  else
  {
    return PredictOutcome(outcome.GetError());
  }
}

PredictOutcomeCallable MachineLearningClient::PredictCallable(const PredictRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PredictOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Predict(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::PredictAsync(const PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PredictAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::PredictAsyncHelper(const PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Predict(request), context);
}

UpdateBatchPredictionOutcome MachineLearningClient::UpdateBatchPrediction(const UpdateBatchPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateBatchPredictionOutcome(UpdateBatchPredictionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBatchPredictionOutcome(outcome.GetError());
  }
}

UpdateBatchPredictionOutcomeCallable MachineLearningClient::UpdateBatchPredictionCallable(const UpdateBatchPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBatchPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBatchPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::UpdateBatchPredictionAsync(const UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBatchPredictionAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::UpdateBatchPredictionAsyncHelper(const UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBatchPrediction(request), context);
}

UpdateDataSourceOutcome MachineLearningClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDataSourceOutcome(UpdateDataSourceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDataSourceOutcome(outcome.GetError());
  }
}

UpdateDataSourceOutcomeCallable MachineLearningClient::UpdateDataSourceCallable(const UpdateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDataSourceAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::UpdateDataSourceAsyncHelper(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataSource(request), context);
}

UpdateEvaluationOutcome MachineLearningClient::UpdateEvaluation(const UpdateEvaluationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateEvaluationOutcome(UpdateEvaluationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEvaluationOutcome(outcome.GetError());
  }
}

UpdateEvaluationOutcomeCallable MachineLearningClient::UpdateEvaluationCallable(const UpdateEvaluationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEvaluationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEvaluation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::UpdateEvaluationAsync(const UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEvaluationAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::UpdateEvaluationAsyncHelper(const UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEvaluation(request), context);
}

UpdateMLModelOutcome MachineLearningClient::UpdateMLModel(const UpdateMLModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateMLModelOutcome(UpdateMLModelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMLModelOutcome(outcome.GetError());
  }
}

UpdateMLModelOutcomeCallable MachineLearningClient::UpdateMLModelCallable(const UpdateMLModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMLModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMLModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MachineLearningClient::UpdateMLModelAsync(const UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMLModelAsyncHelper(request, handler, context); } );
}

void MachineLearningClient::UpdateMLModelAsyncHelper(const UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMLModel(request), context);
}

