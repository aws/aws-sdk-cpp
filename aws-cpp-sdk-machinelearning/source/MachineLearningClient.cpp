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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/machinelearning/MachineLearningClient.h>
#include <aws/machinelearning/MachineLearningErrorMarshaller.h>
#include <aws/machinelearning/MachineLearningEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* MachineLearningClient::SERVICE_NAME = "machinelearning";
const char* MachineLearningClient::ALLOCATION_TAG = "MachineLearningClient";

MachineLearningClient::MachineLearningClient(const MachineLearning::MachineLearningClientConfiguration& clientConfiguration,
                                             std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const AWSCredentials& credentials,
                                             std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider,
                                             const MachineLearning::MachineLearningClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider,
                                             const MachineLearning::MachineLearningClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MachineLearningClient::MachineLearningClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MachineLearningEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MachineLearningEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MachineLearningClient::MachineLearningClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MachineLearningErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MachineLearningEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MachineLearningClient::~MachineLearningClient()
{
}

std::shared_ptr<MachineLearningEndpointProviderBase>& MachineLearningClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MachineLearningClient::init(const MachineLearning::MachineLearningClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Machine Learning");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MachineLearningClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddTagsOutcome MachineLearningClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}


CreateBatchPredictionOutcome MachineLearningClient::CreateBatchPrediction(const CreateBatchPredictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBatchPredictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBatchPrediction(request), context);
    } );
}


CreateDataSourceFromRDSOutcome MachineLearningClient::CreateDataSourceFromRDS(const CreateDataSourceFromRDSRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSourceFromRDS, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSourceFromRDS, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDataSourceFromRDSOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataSourceFromRDS(request), context);
    } );
}


CreateDataSourceFromRedshiftOutcome MachineLearningClient::CreateDataSourceFromRedshift(const CreateDataSourceFromRedshiftRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSourceFromRedshift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSourceFromRedshift, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDataSourceFromRedshiftOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataSourceFromRedshift(request), context);
    } );
}


CreateDataSourceFromS3Outcome MachineLearningClient::CreateDataSourceFromS3(const CreateDataSourceFromS3Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSourceFromS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSourceFromS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDataSourceFromS3Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataSourceFromS3(request), context);
    } );
}


CreateEvaluationOutcome MachineLearningClient::CreateEvaluation(const CreateEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEvaluation(request), context);
    } );
}


CreateMLModelOutcome MachineLearningClient::CreateMLModel(const CreateMLModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMLModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMLModel(request), context);
    } );
}


CreateRealtimeEndpointOutcome MachineLearningClient::CreateRealtimeEndpoint(const CreateRealtimeEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRealtimeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRealtimeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRealtimeEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRealtimeEndpoint(request), context);
    } );
}


DeleteBatchPredictionOutcome MachineLearningClient::DeleteBatchPrediction(const DeleteBatchPredictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBatchPredictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBatchPrediction(request), context);
    } );
}


DeleteDataSourceOutcome MachineLearningClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataSource(request), context);
    } );
}


DeleteEvaluationOutcome MachineLearningClient::DeleteEvaluation(const DeleteEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEvaluation(request), context);
    } );
}


DeleteMLModelOutcome MachineLearningClient::DeleteMLModel(const DeleteMLModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMLModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMLModel(request), context);
    } );
}


DeleteRealtimeEndpointOutcome MachineLearningClient::DeleteRealtimeEndpoint(const DeleteRealtimeEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRealtimeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRealtimeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRealtimeEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRealtimeEndpoint(request), context);
    } );
}


DeleteTagsOutcome MachineLearningClient::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTags(request), context);
    } );
}


DescribeBatchPredictionsOutcome MachineLearningClient::DescribeBatchPredictions(const DescribeBatchPredictionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBatchPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBatchPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBatchPredictionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBatchPredictions(request), context);
    } );
}


DescribeDataSourcesOutcome MachineLearningClient::DescribeDataSources(const DescribeDataSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataSources(request), context);
    } );
}


DescribeEvaluationsOutcome MachineLearningClient::DescribeEvaluations(const DescribeEvaluationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvaluations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEvaluationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEvaluations(request), context);
    } );
}


DescribeMLModelsOutcome MachineLearningClient::DescribeMLModels(const DescribeMLModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMLModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMLModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMLModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMLModels(request), context);
    } );
}


DescribeTagsOutcome MachineLearningClient::DescribeTags(const DescribeTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTags(request), context);
    } );
}


GetBatchPredictionOutcome MachineLearningClient::GetBatchPrediction(const GetBatchPredictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBatchPredictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBatchPrediction(request), context);
    } );
}


GetDataSourceOutcome MachineLearningClient::GetDataSource(const GetDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDataSource(request), context);
    } );
}


GetEvaluationOutcome MachineLearningClient::GetEvaluation(const GetEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEvaluation(request), context);
    } );
}


GetMLModelOutcome MachineLearningClient::GetMLModel(const GetMLModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMLModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMLModel(request), context);
    } );
}


PredictOutcome MachineLearningClient::Predict(const PredictRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Predict, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Predict, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PredictOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Predict(request), context);
    } );
}


UpdateBatchPredictionOutcome MachineLearningClient::UpdateBatchPrediction(const UpdateBatchPredictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBatchPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBatchPredictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBatchPrediction(request), context);
    } );
}


UpdateDataSourceOutcome MachineLearningClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataSource(request), context);
    } );
}


UpdateEvaluationOutcome MachineLearningClient::UpdateEvaluation(const UpdateEvaluationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEvaluationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEvaluation(request), context);
    } );
}


UpdateMLModelOutcome MachineLearningClient::UpdateMLModel(const UpdateMLModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMLModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMLModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMLModel(request), context);
    } );
}


