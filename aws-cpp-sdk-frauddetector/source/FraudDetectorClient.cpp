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

#include <aws/frauddetector/FraudDetectorClient.h>
#include <aws/frauddetector/FraudDetectorErrorMarshaller.h>
#include <aws/frauddetector/FraudDetectorEndpointProvider.h>
#include <aws/frauddetector/model/BatchCreateVariableRequest.h>
#include <aws/frauddetector/model/BatchGetVariableRequest.h>
#include <aws/frauddetector/model/CancelBatchImportJobRequest.h>
#include <aws/frauddetector/model/CancelBatchPredictionJobRequest.h>
#include <aws/frauddetector/model/CreateBatchImportJobRequest.h>
#include <aws/frauddetector/model/CreateBatchPredictionJobRequest.h>
#include <aws/frauddetector/model/CreateDetectorVersionRequest.h>
#include <aws/frauddetector/model/CreateModelRequest.h>
#include <aws/frauddetector/model/CreateModelVersionRequest.h>
#include <aws/frauddetector/model/CreateRuleRequest.h>
#include <aws/frauddetector/model/CreateVariableRequest.h>
#include <aws/frauddetector/model/DeleteBatchImportJobRequest.h>
#include <aws/frauddetector/model/DeleteBatchPredictionJobRequest.h>
#include <aws/frauddetector/model/DeleteDetectorRequest.h>
#include <aws/frauddetector/model/DeleteDetectorVersionRequest.h>
#include <aws/frauddetector/model/DeleteEntityTypeRequest.h>
#include <aws/frauddetector/model/DeleteEventRequest.h>
#include <aws/frauddetector/model/DeleteEventTypeRequest.h>
#include <aws/frauddetector/model/DeleteEventsByEventTypeRequest.h>
#include <aws/frauddetector/model/DeleteExternalModelRequest.h>
#include <aws/frauddetector/model/DeleteLabelRequest.h>
#include <aws/frauddetector/model/DeleteModelRequest.h>
#include <aws/frauddetector/model/DeleteModelVersionRequest.h>
#include <aws/frauddetector/model/DeleteOutcomeRequest.h>
#include <aws/frauddetector/model/DeleteRuleRequest.h>
#include <aws/frauddetector/model/DeleteVariableRequest.h>
#include <aws/frauddetector/model/DescribeDetectorRequest.h>
#include <aws/frauddetector/model/DescribeModelVersionsRequest.h>
#include <aws/frauddetector/model/GetBatchImportJobsRequest.h>
#include <aws/frauddetector/model/GetBatchPredictionJobsRequest.h>
#include <aws/frauddetector/model/GetDeleteEventsByEventTypeStatusRequest.h>
#include <aws/frauddetector/model/GetDetectorVersionRequest.h>
#include <aws/frauddetector/model/GetDetectorsRequest.h>
#include <aws/frauddetector/model/GetEntityTypesRequest.h>
#include <aws/frauddetector/model/GetEventRequest.h>
#include <aws/frauddetector/model/GetEventPredictionRequest.h>
#include <aws/frauddetector/model/GetEventPredictionMetadataRequest.h>
#include <aws/frauddetector/model/GetEventTypesRequest.h>
#include <aws/frauddetector/model/GetExternalModelsRequest.h>
#include <aws/frauddetector/model/GetLabelsRequest.h>
#include <aws/frauddetector/model/GetModelVersionRequest.h>
#include <aws/frauddetector/model/GetModelsRequest.h>
#include <aws/frauddetector/model/GetOutcomesRequest.h>
#include <aws/frauddetector/model/GetRulesRequest.h>
#include <aws/frauddetector/model/GetVariablesRequest.h>
#include <aws/frauddetector/model/ListEventPredictionsRequest.h>
#include <aws/frauddetector/model/ListTagsForResourceRequest.h>
#include <aws/frauddetector/model/PutDetectorRequest.h>
#include <aws/frauddetector/model/PutEntityTypeRequest.h>
#include <aws/frauddetector/model/PutEventTypeRequest.h>
#include <aws/frauddetector/model/PutExternalModelRequest.h>
#include <aws/frauddetector/model/PutKMSEncryptionKeyRequest.h>
#include <aws/frauddetector/model/PutLabelRequest.h>
#include <aws/frauddetector/model/PutOutcomeRequest.h>
#include <aws/frauddetector/model/SendEventRequest.h>
#include <aws/frauddetector/model/TagResourceRequest.h>
#include <aws/frauddetector/model/UntagResourceRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionMetadataRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionStatusRequest.h>
#include <aws/frauddetector/model/UpdateEventLabelRequest.h>
#include <aws/frauddetector/model/UpdateModelRequest.h>
#include <aws/frauddetector/model/UpdateModelVersionRequest.h>
#include <aws/frauddetector/model/UpdateModelVersionStatusRequest.h>
#include <aws/frauddetector/model/UpdateRuleMetadataRequest.h>
#include <aws/frauddetector/model/UpdateRuleVersionRequest.h>
#include <aws/frauddetector/model/UpdateVariableRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FraudDetector;
using namespace Aws::FraudDetector::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* FraudDetectorClient::SERVICE_NAME = "frauddetector";
const char* FraudDetectorClient::ALLOCATION_TAG = "FraudDetectorClient";

FraudDetectorClient::FraudDetectorClient(const FraudDetector::FraudDetectorClientConfiguration& clientConfiguration,
                                         std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const AWSCredentials& credentials,
                                         std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider,
                                         const FraudDetector::FraudDetectorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider,
                                         const FraudDetector::FraudDetectorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  FraudDetectorClient::FraudDetectorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
FraudDetectorClient::~FraudDetectorClient()
{
}

std::shared_ptr<FraudDetectorEndpointProviderBase>& FraudDetectorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void FraudDetectorClient::init(const FraudDetector::FraudDetectorClientConfiguration& config)
{
  AWSClient::SetServiceClientName("FraudDetector");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void FraudDetectorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchCreateVariableOutcome FraudDetectorClient::BatchCreateVariable(const BatchCreateVariableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchCreateVariableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateVariableOutcomeCallable FraudDetectorClient::BatchCreateVariableCallable(const BatchCreateVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::BatchCreateVariableAsync(const BatchCreateVariableRequest& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateVariable(request), context);
    } );
}

BatchGetVariableOutcome FraudDetectorClient::BatchGetVariable(const BatchGetVariableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetVariableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetVariableOutcomeCallable FraudDetectorClient::BatchGetVariableCallable(const BatchGetVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::BatchGetVariableAsync(const BatchGetVariableRequest& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetVariable(request), context);
    } );
}

CancelBatchImportJobOutcome FraudDetectorClient::CancelBatchImportJob(const CancelBatchImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelBatchImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelBatchImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelBatchImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelBatchImportJobOutcomeCallable FraudDetectorClient::CancelBatchImportJobCallable(const CancelBatchImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelBatchImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelBatchImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CancelBatchImportJobAsync(const CancelBatchImportJobRequest& request, const CancelBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelBatchImportJob(request), context);
    } );
}

CancelBatchPredictionJobOutcome FraudDetectorClient::CancelBatchPredictionJob(const CancelBatchPredictionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelBatchPredictionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelBatchPredictionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelBatchPredictionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelBatchPredictionJobOutcomeCallable FraudDetectorClient::CancelBatchPredictionJobCallable(const CancelBatchPredictionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelBatchPredictionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelBatchPredictionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CancelBatchPredictionJobAsync(const CancelBatchPredictionJobRequest& request, const CancelBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelBatchPredictionJob(request), context);
    } );
}

CreateBatchImportJobOutcome FraudDetectorClient::CreateBatchImportJob(const CreateBatchImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBatchImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBatchImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBatchImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBatchImportJobOutcomeCallable FraudDetectorClient::CreateBatchImportJobCallable(const CreateBatchImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CreateBatchImportJobAsync(const CreateBatchImportJobRequest& request, const CreateBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBatchImportJob(request), context);
    } );
}

CreateBatchPredictionJobOutcome FraudDetectorClient::CreateBatchPredictionJob(const CreateBatchPredictionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBatchPredictionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBatchPredictionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBatchPredictionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBatchPredictionJobOutcomeCallable FraudDetectorClient::CreateBatchPredictionJobCallable(const CreateBatchPredictionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchPredictionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchPredictionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CreateBatchPredictionJobAsync(const CreateBatchPredictionJobRequest& request, const CreateBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBatchPredictionJob(request), context);
    } );
}

CreateDetectorVersionOutcome FraudDetectorClient::CreateDetectorVersion(const CreateDetectorVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDetectorVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDetectorVersionOutcomeCallable FraudDetectorClient::CreateDetectorVersionCallable(const CreateDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CreateDetectorVersionAsync(const CreateDetectorVersionRequest& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDetectorVersion(request), context);
    } );
}

CreateModelOutcome FraudDetectorClient::CreateModel(const CreateModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable FraudDetectorClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModel(request), context);
    } );
}

CreateModelVersionOutcome FraudDetectorClient::CreateModelVersion(const CreateModelVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelVersionOutcomeCallable FraudDetectorClient::CreateModelVersionCallable(const CreateModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CreateModelVersionAsync(const CreateModelVersionRequest& request, const CreateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelVersion(request), context);
    } );
}

CreateRuleOutcome FraudDetectorClient::CreateRule(const CreateRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleOutcomeCallable FraudDetectorClient::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRule(request), context);
    } );
}

CreateVariableOutcome FraudDetectorClient::CreateVariable(const CreateVariableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVariableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVariableOutcomeCallable FraudDetectorClient::CreateVariableCallable(const CreateVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::CreateVariableAsync(const CreateVariableRequest& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVariable(request), context);
    } );
}

DeleteBatchImportJobOutcome FraudDetectorClient::DeleteBatchImportJob(const DeleteBatchImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBatchImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBatchImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBatchImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBatchImportJobOutcomeCallable FraudDetectorClient::DeleteBatchImportJobCallable(const DeleteBatchImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBatchImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBatchImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteBatchImportJobAsync(const DeleteBatchImportJobRequest& request, const DeleteBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBatchImportJob(request), context);
    } );
}

DeleteBatchPredictionJobOutcome FraudDetectorClient::DeleteBatchPredictionJob(const DeleteBatchPredictionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBatchPredictionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBatchPredictionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBatchPredictionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBatchPredictionJobOutcomeCallable FraudDetectorClient::DeleteBatchPredictionJobCallable(const DeleteBatchPredictionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBatchPredictionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBatchPredictionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteBatchPredictionJobAsync(const DeleteBatchPredictionJobRequest& request, const DeleteBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBatchPredictionJob(request), context);
    } );
}

DeleteDetectorOutcome FraudDetectorClient::DeleteDetector(const DeleteDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDetectorOutcomeCallable FraudDetectorClient::DeleteDetectorCallable(const DeleteDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteDetectorAsync(const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDetector(request), context);
    } );
}

DeleteDetectorVersionOutcome FraudDetectorClient::DeleteDetectorVersion(const DeleteDetectorVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDetectorVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDetectorVersionOutcomeCallable FraudDetectorClient::DeleteDetectorVersionCallable(const DeleteDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteDetectorVersionAsync(const DeleteDetectorVersionRequest& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDetectorVersion(request), context);
    } );
}

DeleteEntityTypeOutcome FraudDetectorClient::DeleteEntityType(const DeleteEntityTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEntityType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEntityType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEntityTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntityTypeOutcomeCallable FraudDetectorClient::DeleteEntityTypeCallable(const DeleteEntityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEntityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEntityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteEntityTypeAsync(const DeleteEntityTypeRequest& request, const DeleteEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEntityType(request), context);
    } );
}

DeleteEventOutcome FraudDetectorClient::DeleteEvent(const DeleteEventRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventOutcomeCallable FraudDetectorClient::DeleteEventCallable(const DeleteEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteEventAsync(const DeleteEventRequest& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEvent(request), context);
    } );
}

DeleteEventTypeOutcome FraudDetectorClient::DeleteEventType(const DeleteEventTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventTypeOutcomeCallable FraudDetectorClient::DeleteEventTypeCallable(const DeleteEventTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteEventTypeAsync(const DeleteEventTypeRequest& request, const DeleteEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventType(request), context);
    } );
}

DeleteEventsByEventTypeOutcome FraudDetectorClient::DeleteEventsByEventType(const DeleteEventsByEventTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventsByEventType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventsByEventType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventsByEventTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventsByEventTypeOutcomeCallable FraudDetectorClient::DeleteEventsByEventTypeCallable(const DeleteEventsByEventTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventsByEventTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventsByEventType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteEventsByEventTypeAsync(const DeleteEventsByEventTypeRequest& request, const DeleteEventsByEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventsByEventType(request), context);
    } );
}

DeleteExternalModelOutcome FraudDetectorClient::DeleteExternalModel(const DeleteExternalModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExternalModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExternalModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteExternalModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExternalModelOutcomeCallable FraudDetectorClient::DeleteExternalModelCallable(const DeleteExternalModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExternalModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExternalModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteExternalModelAsync(const DeleteExternalModelRequest& request, const DeleteExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteExternalModel(request), context);
    } );
}

DeleteLabelOutcome FraudDetectorClient::DeleteLabel(const DeleteLabelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLabelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLabelOutcomeCallable FraudDetectorClient::DeleteLabelCallable(const DeleteLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteLabelAsync(const DeleteLabelRequest& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLabel(request), context);
    } );
}

DeleteModelOutcome FraudDetectorClient::DeleteModel(const DeleteModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable FraudDetectorClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModel(request), context);
    } );
}

DeleteModelVersionOutcome FraudDetectorClient::DeleteModelVersion(const DeleteModelVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelVersionOutcomeCallable FraudDetectorClient::DeleteModelVersionCallable(const DeleteModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteModelVersionAsync(const DeleteModelVersionRequest& request, const DeleteModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelVersion(request), context);
    } );
}

DeleteOutcomeOutcome FraudDetectorClient::DeleteOutcome(const DeleteOutcomeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOutcome, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOutcome, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteOutcomeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOutcomeOutcomeCallable FraudDetectorClient::DeleteOutcomeCallable(const DeleteOutcomeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOutcomeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOutcome(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteOutcomeAsync(const DeleteOutcomeRequest& request, const DeleteOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOutcome(request), context);
    } );
}

DeleteRuleOutcome FraudDetectorClient::DeleteRule(const DeleteRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable FraudDetectorClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRule(request), context);
    } );
}

DeleteVariableOutcome FraudDetectorClient::DeleteVariable(const DeleteVariableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVariableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVariableOutcomeCallable FraudDetectorClient::DeleteVariableCallable(const DeleteVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DeleteVariableAsync(const DeleteVariableRequest& request, const DeleteVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVariable(request), context);
    } );
}

DescribeDetectorOutcome FraudDetectorClient::DescribeDetector(const DescribeDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDetectorOutcomeCallable FraudDetectorClient::DescribeDetectorCallable(const DescribeDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DescribeDetectorAsync(const DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDetector(request), context);
    } );
}

DescribeModelVersionsOutcome FraudDetectorClient::DescribeModelVersions(const DescribeModelVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelVersionsOutcomeCallable FraudDetectorClient::DescribeModelVersionsCallable(const DescribeModelVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::DescribeModelVersionsAsync(const DescribeModelVersionsRequest& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelVersions(request), context);
    } );
}

GetBatchImportJobsOutcome FraudDetectorClient::GetBatchImportJobs(const GetBatchImportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBatchImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBatchImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBatchImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBatchImportJobsOutcomeCallable FraudDetectorClient::GetBatchImportJobsCallable(const GetBatchImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBatchImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBatchImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetBatchImportJobsAsync(const GetBatchImportJobsRequest& request, const GetBatchImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBatchImportJobs(request), context);
    } );
}

GetBatchPredictionJobsOutcome FraudDetectorClient::GetBatchPredictionJobs(const GetBatchPredictionJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBatchPredictionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBatchPredictionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBatchPredictionJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBatchPredictionJobsOutcomeCallable FraudDetectorClient::GetBatchPredictionJobsCallable(const GetBatchPredictionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBatchPredictionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBatchPredictionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetBatchPredictionJobsAsync(const GetBatchPredictionJobsRequest& request, const GetBatchPredictionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBatchPredictionJobs(request), context);
    } );
}

GetDeleteEventsByEventTypeStatusOutcome FraudDetectorClient::GetDeleteEventsByEventTypeStatus(const GetDeleteEventsByEventTypeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeleteEventsByEventTypeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeleteEventsByEventTypeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeleteEventsByEventTypeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeleteEventsByEventTypeStatusOutcomeCallable FraudDetectorClient::GetDeleteEventsByEventTypeStatusCallable(const GetDeleteEventsByEventTypeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeleteEventsByEventTypeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeleteEventsByEventTypeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetDeleteEventsByEventTypeStatusAsync(const GetDeleteEventsByEventTypeStatusRequest& request, const GetDeleteEventsByEventTypeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeleteEventsByEventTypeStatus(request), context);
    } );
}

GetDetectorVersionOutcome FraudDetectorClient::GetDetectorVersion(const GetDetectorVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDetectorVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDetectorVersionOutcomeCallable FraudDetectorClient::GetDetectorVersionCallable(const GetDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetDetectorVersionAsync(const GetDetectorVersionRequest& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDetectorVersion(request), context);
    } );
}

GetDetectorsOutcome FraudDetectorClient::GetDetectors(const GetDetectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDetectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDetectorsOutcomeCallable FraudDetectorClient::GetDetectorsCallable(const GetDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetDetectorsAsync(const GetDetectorsRequest& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDetectors(request), context);
    } );
}

GetEntityTypesOutcome FraudDetectorClient::GetEntityTypes(const GetEntityTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEntityTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEntityTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEntityTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEntityTypesOutcomeCallable FraudDetectorClient::GetEntityTypesCallable(const GetEntityTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEntityTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEntityTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetEntityTypesAsync(const GetEntityTypesRequest& request, const GetEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEntityTypes(request), context);
    } );
}

GetEventOutcome FraudDetectorClient::GetEvent(const GetEventRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEventOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventOutcomeCallable FraudDetectorClient::GetEventCallable(const GetEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetEventAsync(const GetEventRequest& request, const GetEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEvent(request), context);
    } );
}

GetEventPredictionOutcome FraudDetectorClient::GetEventPrediction(const GetEventPredictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventPrediction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEventPredictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventPredictionOutcomeCallable FraudDetectorClient::GetEventPredictionCallable(const GetEventPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetEventPredictionAsync(const GetEventPredictionRequest& request, const GetEventPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventPrediction(request), context);
    } );
}

GetEventPredictionMetadataOutcome FraudDetectorClient::GetEventPredictionMetadata(const GetEventPredictionMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventPredictionMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventPredictionMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEventPredictionMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventPredictionMetadataOutcomeCallable FraudDetectorClient::GetEventPredictionMetadataCallable(const GetEventPredictionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventPredictionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventPredictionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetEventPredictionMetadataAsync(const GetEventPredictionMetadataRequest& request, const GetEventPredictionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventPredictionMetadata(request), context);
    } );
}

GetEventTypesOutcome FraudDetectorClient::GetEventTypes(const GetEventTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEventTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventTypesOutcomeCallable FraudDetectorClient::GetEventTypesCallable(const GetEventTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetEventTypesAsync(const GetEventTypesRequest& request, const GetEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventTypes(request), context);
    } );
}

GetExternalModelsOutcome FraudDetectorClient::GetExternalModels(const GetExternalModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExternalModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExternalModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetExternalModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExternalModelsOutcomeCallable FraudDetectorClient::GetExternalModelsCallable(const GetExternalModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExternalModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExternalModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetExternalModelsAsync(const GetExternalModelsRequest& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetExternalModels(request), context);
    } );
}

GetKMSEncryptionKeyOutcome FraudDetectorClient::GetKMSEncryptionKey() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKMSEncryptionKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKMSEncryptionKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetKMSEncryptionKeyOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "GetKMSEncryptionKey"));
}

GetKMSEncryptionKeyOutcomeCallable FraudDetectorClient::GetKMSEncryptionKeyCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKMSEncryptionKeyOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetKMSEncryptionKey(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetKMSEncryptionKeyAsync(const GetKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetKMSEncryptionKey(), context);
    } );
}

GetLabelsOutcome FraudDetectorClient::GetLabels(const GetLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLabelsOutcomeCallable FraudDetectorClient::GetLabelsCallable(const GetLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetLabelsAsync(const GetLabelsRequest& request, const GetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLabels(request), context);
    } );
}

GetModelVersionOutcome FraudDetectorClient::GetModelVersion(const GetModelVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetModelVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetModelVersionOutcomeCallable FraudDetectorClient::GetModelVersionCallable(const GetModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetModelVersionAsync(const GetModelVersionRequest& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetModelVersion(request), context);
    } );
}

GetModelsOutcome FraudDetectorClient::GetModels(const GetModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetModelsOutcomeCallable FraudDetectorClient::GetModelsCallable(const GetModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetModelsAsync(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetModels(request), context);
    } );
}

GetOutcomesOutcome FraudDetectorClient::GetOutcomes(const GetOutcomesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOutcomes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOutcomes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOutcomesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOutcomesOutcomeCallable FraudDetectorClient::GetOutcomesCallable(const GetOutcomesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOutcomesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOutcomes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetOutcomesAsync(const GetOutcomesRequest& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOutcomes(request), context);
    } );
}

GetRulesOutcome FraudDetectorClient::GetRules(const GetRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRulesOutcomeCallable FraudDetectorClient::GetRulesCallable(const GetRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetRulesAsync(const GetRulesRequest& request, const GetRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRules(request), context);
    } );
}

GetVariablesOutcome FraudDetectorClient::GetVariables(const GetVariablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVariables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVariables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVariablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVariablesOutcomeCallable FraudDetectorClient::GetVariablesCallable(const GetVariablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVariablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVariables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetVariablesAsync(const GetVariablesRequest& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVariables(request), context);
    } );
}

ListEventPredictionsOutcome FraudDetectorClient::ListEventPredictions(const ListEventPredictionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEventPredictionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventPredictionsOutcomeCallable FraudDetectorClient::ListEventPredictionsCallable(const ListEventPredictionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventPredictionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventPredictions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::ListEventPredictionsAsync(const ListEventPredictionsRequest& request, const ListEventPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventPredictions(request), context);
    } );
}

ListTagsForResourceOutcome FraudDetectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable FraudDetectorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutDetectorOutcome FraudDetectorClient::PutDetector(const PutDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDetectorOutcomeCallable FraudDetectorClient::PutDetectorCallable(const PutDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutDetectorAsync(const PutDetectorRequest& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDetector(request), context);
    } );
}

PutEntityTypeOutcome FraudDetectorClient::PutEntityType(const PutEntityTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEntityType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEntityType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutEntityTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEntityTypeOutcomeCallable FraudDetectorClient::PutEntityTypeCallable(const PutEntityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEntityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEntityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutEntityTypeAsync(const PutEntityTypeRequest& request, const PutEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEntityType(request), context);
    } );
}

PutEventTypeOutcome FraudDetectorClient::PutEventType(const PutEventTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEventType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEventType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutEventTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventTypeOutcomeCallable FraudDetectorClient::PutEventTypeCallable(const PutEventTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutEventTypeAsync(const PutEventTypeRequest& request, const PutEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEventType(request), context);
    } );
}

PutExternalModelOutcome FraudDetectorClient::PutExternalModel(const PutExternalModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutExternalModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutExternalModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutExternalModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutExternalModelOutcomeCallable FraudDetectorClient::PutExternalModelCallable(const PutExternalModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutExternalModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutExternalModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutExternalModelAsync(const PutExternalModelRequest& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutExternalModel(request), context);
    } );
}

PutKMSEncryptionKeyOutcome FraudDetectorClient::PutKMSEncryptionKey(const PutKMSEncryptionKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutKMSEncryptionKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutKMSEncryptionKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutKMSEncryptionKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutKMSEncryptionKeyOutcomeCallable FraudDetectorClient::PutKMSEncryptionKeyCallable(const PutKMSEncryptionKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutKMSEncryptionKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutKMSEncryptionKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutKMSEncryptionKeyAsync(const PutKMSEncryptionKeyRequest& request, const PutKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutKMSEncryptionKey(request), context);
    } );
}

PutLabelOutcome FraudDetectorClient::PutLabel(const PutLabelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutLabelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLabelOutcomeCallable FraudDetectorClient::PutLabelCallable(const PutLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutLabelAsync(const PutLabelRequest& request, const PutLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLabel(request), context);
    } );
}

PutOutcomeOutcome FraudDetectorClient::PutOutcome(const PutOutcomeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutOutcome, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutOutcome, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutOutcomeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutOutcomeOutcomeCallable FraudDetectorClient::PutOutcomeCallable(const PutOutcomeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutOutcomeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutOutcome(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutOutcomeAsync(const PutOutcomeRequest& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutOutcome(request), context);
    } );
}

SendEventOutcome FraudDetectorClient::SendEvent(const SendEventRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendEventOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendEventOutcomeCallable FraudDetectorClient::SendEventCallable(const SendEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::SendEventAsync(const SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendEvent(request), context);
    } );
}

TagResourceOutcome FraudDetectorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable FraudDetectorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome FraudDetectorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable FraudDetectorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDetectorVersionOutcome FraudDetectorClient::UpdateDetectorVersion(const UpdateDetectorVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDetectorVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDetectorVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorVersionOutcomeCallable FraudDetectorClient::UpdateDetectorVersionCallable(const UpdateDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateDetectorVersionAsync(const UpdateDetectorVersionRequest& request, const UpdateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDetectorVersion(request), context);
    } );
}

UpdateDetectorVersionMetadataOutcome FraudDetectorClient::UpdateDetectorVersionMetadata(const UpdateDetectorVersionMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDetectorVersionMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDetectorVersionMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDetectorVersionMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorVersionMetadataOutcomeCallable FraudDetectorClient::UpdateDetectorVersionMetadataCallable(const UpdateDetectorVersionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorVersionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetectorVersionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateDetectorVersionMetadataAsync(const UpdateDetectorVersionMetadataRequest& request, const UpdateDetectorVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDetectorVersionMetadata(request), context);
    } );
}

UpdateDetectorVersionStatusOutcome FraudDetectorClient::UpdateDetectorVersionStatus(const UpdateDetectorVersionStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDetectorVersionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDetectorVersionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDetectorVersionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorVersionStatusOutcomeCallable FraudDetectorClient::UpdateDetectorVersionStatusCallable(const UpdateDetectorVersionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorVersionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetectorVersionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateDetectorVersionStatusAsync(const UpdateDetectorVersionStatusRequest& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDetectorVersionStatus(request), context);
    } );
}

UpdateEventLabelOutcome FraudDetectorClient::UpdateEventLabel(const UpdateEventLabelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEventLabel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEventLabelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventLabelOutcomeCallable FraudDetectorClient::UpdateEventLabelCallable(const UpdateEventLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateEventLabelAsync(const UpdateEventLabelRequest& request, const UpdateEventLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEventLabel(request), context);
    } );
}

UpdateModelOutcome FraudDetectorClient::UpdateModel(const UpdateModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelOutcomeCallable FraudDetectorClient::UpdateModelCallable(const UpdateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateModelAsync(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateModel(request), context);
    } );
}

UpdateModelVersionOutcome FraudDetectorClient::UpdateModelVersion(const UpdateModelVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateModelVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateModelVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelVersionOutcomeCallable FraudDetectorClient::UpdateModelVersionCallable(const UpdateModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateModelVersionAsync(const UpdateModelVersionRequest& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateModelVersion(request), context);
    } );
}

UpdateModelVersionStatusOutcome FraudDetectorClient::UpdateModelVersionStatus(const UpdateModelVersionStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateModelVersionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateModelVersionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateModelVersionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelVersionStatusOutcomeCallable FraudDetectorClient::UpdateModelVersionStatusCallable(const UpdateModelVersionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelVersionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelVersionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateModelVersionStatusAsync(const UpdateModelVersionStatusRequest& request, const UpdateModelVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateModelVersionStatus(request), context);
    } );
}

UpdateRuleMetadataOutcome FraudDetectorClient::UpdateRuleMetadata(const UpdateRuleMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRuleMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRuleMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRuleMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleMetadataOutcomeCallable FraudDetectorClient::UpdateRuleMetadataCallable(const UpdateRuleMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateRuleMetadataAsync(const UpdateRuleMetadataRequest& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRuleMetadata(request), context);
    } );
}

UpdateRuleVersionOutcome FraudDetectorClient::UpdateRuleVersion(const UpdateRuleVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRuleVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRuleVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRuleVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleVersionOutcomeCallable FraudDetectorClient::UpdateRuleVersionCallable(const UpdateRuleVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateRuleVersionAsync(const UpdateRuleVersionRequest& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRuleVersion(request), context);
    } );
}

UpdateVariableOutcome FraudDetectorClient::UpdateVariable(const UpdateVariableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVariable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVariableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVariableOutcomeCallable FraudDetectorClient::UpdateVariableCallable(const UpdateVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::UpdateVariableAsync(const UpdateVariableRequest& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVariable(request), context);
    } );
}

