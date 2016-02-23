/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearningClient.h>
#include <aws/machinelearning/MachineLearningEndpoint.h>
#include <aws/machinelearning/MachineLearningErrorMarshaller.h>
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
#include <aws/machinelearning/model/DescribeBatchPredictionsRequest.h>
#include <aws/machinelearning/model/DescribeDataSourcesRequest.h>
#include <aws/machinelearning/model/DescribeEvaluationsRequest.h>
#include <aws/machinelearning/model/DescribeMLModelsRequest.h>
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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << MachineLearningEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CreateBatchPredictionOutcome MachineLearningClient::CreateBatchPrediction(const CreateBatchPredictionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::CreateBatchPrediction, this, request);
}

void MachineLearningClient::CreateBatchPredictionAsync(const CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::CreateBatchPredictionAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::CreateBatchPredictionAsyncHelper(const CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBatchPrediction(request), context);
}

CreateDataSourceFromRDSOutcome MachineLearningClient::CreateDataSourceFromRDS(const CreateDataSourceFromRDSRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::CreateDataSourceFromRDS, this, request);
}

void MachineLearningClient::CreateDataSourceFromRDSAsync(const CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::CreateDataSourceFromRDSAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::CreateDataSourceFromRDSAsyncHelper(const CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSourceFromRDS(request), context);
}

CreateDataSourceFromRedshiftOutcome MachineLearningClient::CreateDataSourceFromRedshift(const CreateDataSourceFromRedshiftRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::CreateDataSourceFromRedshift, this, request);
}

void MachineLearningClient::CreateDataSourceFromRedshiftAsync(const CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::CreateDataSourceFromRedshiftAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::CreateDataSourceFromRedshiftAsyncHelper(const CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSourceFromRedshift(request), context);
}

CreateDataSourceFromS3Outcome MachineLearningClient::CreateDataSourceFromS3(const CreateDataSourceFromS3Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::CreateDataSourceFromS3, this, request);
}

void MachineLearningClient::CreateDataSourceFromS3Async(const CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::CreateDataSourceFromS3AsyncHelper, this, request, handler, context);
}

void MachineLearningClient::CreateDataSourceFromS3AsyncHelper(const CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSourceFromS3(request), context);
}

CreateEvaluationOutcome MachineLearningClient::CreateEvaluation(const CreateEvaluationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::CreateEvaluation, this, request);
}

void MachineLearningClient::CreateEvaluationAsync(const CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::CreateEvaluationAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::CreateEvaluationAsyncHelper(const CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEvaluation(request), context);
}

CreateMLModelOutcome MachineLearningClient::CreateMLModel(const CreateMLModelRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::CreateMLModel, this, request);
}

void MachineLearningClient::CreateMLModelAsync(const CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::CreateMLModelAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::CreateMLModelAsyncHelper(const CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMLModel(request), context);
}

CreateRealtimeEndpointOutcome MachineLearningClient::CreateRealtimeEndpoint(const CreateRealtimeEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::CreateRealtimeEndpoint, this, request);
}

void MachineLearningClient::CreateRealtimeEndpointAsync(const CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::CreateRealtimeEndpointAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::CreateRealtimeEndpointAsyncHelper(const CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRealtimeEndpoint(request), context);
}

DeleteBatchPredictionOutcome MachineLearningClient::DeleteBatchPrediction(const DeleteBatchPredictionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DeleteBatchPrediction, this, request);
}

void MachineLearningClient::DeleteBatchPredictionAsync(const DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DeleteBatchPredictionAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DeleteBatchPredictionAsyncHelper(const DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBatchPrediction(request), context);
}

DeleteDataSourceOutcome MachineLearningClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DeleteDataSource, this, request);
}

void MachineLearningClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DeleteDataSourceAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DeleteDataSourceAsyncHelper(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataSource(request), context);
}

DeleteEvaluationOutcome MachineLearningClient::DeleteEvaluation(const DeleteEvaluationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DeleteEvaluation, this, request);
}

void MachineLearningClient::DeleteEvaluationAsync(const DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DeleteEvaluationAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DeleteEvaluationAsyncHelper(const DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEvaluation(request), context);
}

DeleteMLModelOutcome MachineLearningClient::DeleteMLModel(const DeleteMLModelRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DeleteMLModel, this, request);
}

void MachineLearningClient::DeleteMLModelAsync(const DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DeleteMLModelAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DeleteMLModelAsyncHelper(const DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMLModel(request), context);
}

DeleteRealtimeEndpointOutcome MachineLearningClient::DeleteRealtimeEndpoint(const DeleteRealtimeEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DeleteRealtimeEndpoint, this, request);
}

void MachineLearningClient::DeleteRealtimeEndpointAsync(const DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DeleteRealtimeEndpointAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DeleteRealtimeEndpointAsyncHelper(const DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRealtimeEndpoint(request), context);
}

DescribeBatchPredictionsOutcome MachineLearningClient::DescribeBatchPredictions(const DescribeBatchPredictionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DescribeBatchPredictions, this, request);
}

void MachineLearningClient::DescribeBatchPredictionsAsync(const DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DescribeBatchPredictionsAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DescribeBatchPredictionsAsyncHelper(const DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBatchPredictions(request), context);
}

DescribeDataSourcesOutcome MachineLearningClient::DescribeDataSources(const DescribeDataSourcesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DescribeDataSources, this, request);
}

void MachineLearningClient::DescribeDataSourcesAsync(const DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DescribeDataSourcesAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DescribeDataSourcesAsyncHelper(const DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataSources(request), context);
}

DescribeEvaluationsOutcome MachineLearningClient::DescribeEvaluations(const DescribeEvaluationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DescribeEvaluations, this, request);
}

void MachineLearningClient::DescribeEvaluationsAsync(const DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DescribeEvaluationsAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DescribeEvaluationsAsyncHelper(const DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvaluations(request), context);
}

DescribeMLModelsOutcome MachineLearningClient::DescribeMLModels(const DescribeMLModelsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::DescribeMLModels, this, request);
}

void MachineLearningClient::DescribeMLModelsAsync(const DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::DescribeMLModelsAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::DescribeMLModelsAsyncHelper(const DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMLModels(request), context);
}

GetBatchPredictionOutcome MachineLearningClient::GetBatchPrediction(const GetBatchPredictionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::GetBatchPrediction, this, request);
}

void MachineLearningClient::GetBatchPredictionAsync(const GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::GetBatchPredictionAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::GetBatchPredictionAsyncHelper(const GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBatchPrediction(request), context);
}

GetDataSourceOutcome MachineLearningClient::GetDataSource(const GetDataSourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::GetDataSource, this, request);
}

void MachineLearningClient::GetDataSourceAsync(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::GetDataSourceAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::GetDataSourceAsyncHelper(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataSource(request), context);
}

GetEvaluationOutcome MachineLearningClient::GetEvaluation(const GetEvaluationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::GetEvaluation, this, request);
}

void MachineLearningClient::GetEvaluationAsync(const GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::GetEvaluationAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::GetEvaluationAsyncHelper(const GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEvaluation(request), context);
}

GetMLModelOutcome MachineLearningClient::GetMLModel(const GetMLModelRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::GetMLModel, this, request);
}

void MachineLearningClient::GetMLModelAsync(const GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::GetMLModelAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::GetMLModelAsyncHelper(const GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMLModel(request), context);
}

PredictOutcome MachineLearningClient::Predict(const PredictRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::Predict, this, request);
}

void MachineLearningClient::PredictAsync(const PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::PredictAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::PredictAsyncHelper(const PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Predict(request), context);
}

UpdateBatchPredictionOutcome MachineLearningClient::UpdateBatchPrediction(const UpdateBatchPredictionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::UpdateBatchPrediction, this, request);
}

void MachineLearningClient::UpdateBatchPredictionAsync(const UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::UpdateBatchPredictionAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::UpdateBatchPredictionAsyncHelper(const UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBatchPrediction(request), context);
}

UpdateDataSourceOutcome MachineLearningClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::UpdateDataSource, this, request);
}

void MachineLearningClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::UpdateDataSourceAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::UpdateDataSourceAsyncHelper(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataSource(request), context);
}

UpdateEvaluationOutcome MachineLearningClient::UpdateEvaluation(const UpdateEvaluationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::UpdateEvaluation, this, request);
}

void MachineLearningClient::UpdateEvaluationAsync(const UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::UpdateEvaluationAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::UpdateEvaluationAsyncHelper(const UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEvaluation(request), context);
}

UpdateMLModelOutcome MachineLearningClient::UpdateMLModel(const UpdateMLModelRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MachineLearningClient::UpdateMLModel, this, request);
}

void MachineLearningClient::UpdateMLModelAsync(const UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MachineLearningClient::UpdateMLModelAsyncHelper, this, request, handler, context);
}

void MachineLearningClient::UpdateMLModelAsyncHelper(const UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMLModel(request), context);
}

