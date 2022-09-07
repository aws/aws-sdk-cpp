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

#include <aws/frauddetector/FraudDetectorClient.h>
#include <aws/frauddetector/FraudDetectorEndpoint.h>
#include <aws/frauddetector/FraudDetectorErrorMarshaller.h>
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

static const char* SERVICE_NAME = "frauddetector";
static const char* ALLOCATION_TAG = "FraudDetectorClient";

FraudDetectorClient::FraudDetectorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::~FraudDetectorClient()
{
}

void FraudDetectorClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("FraudDetector");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FraudDetectorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FraudDetectorClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchCreateVariableOutcome FraudDetectorClient::BatchCreateVariable(const BatchCreateVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchCreateVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateVariableOutcomeCallable FraudDetectorClient::BatchCreateVariableCallable(const BatchCreateVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientBatchCreateVariableAsyncHelper(FraudDetectorClient const * const clientThis, const BatchCreateVariableRequest& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchCreateVariable(request), context);
}

void FraudDetectorClient::BatchCreateVariableAsync(const BatchCreateVariableRequest& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientBatchCreateVariableAsyncHelper( this, request, handler, context ); } );
}

BatchGetVariableOutcome FraudDetectorClient::BatchGetVariable(const BatchGetVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetVariableOutcomeCallable FraudDetectorClient::BatchGetVariableCallable(const BatchGetVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientBatchGetVariableAsyncHelper(FraudDetectorClient const * const clientThis, const BatchGetVariableRequest& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetVariable(request), context);
}

void FraudDetectorClient::BatchGetVariableAsync(const BatchGetVariableRequest& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientBatchGetVariableAsyncHelper( this, request, handler, context ); } );
}

CancelBatchImportJobOutcome FraudDetectorClient::CancelBatchImportJob(const CancelBatchImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelBatchImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelBatchImportJobOutcomeCallable FraudDetectorClient::CancelBatchImportJobCallable(const CancelBatchImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelBatchImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelBatchImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCancelBatchImportJobAsyncHelper(FraudDetectorClient const * const clientThis, const CancelBatchImportJobRequest& request, const CancelBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelBatchImportJob(request), context);
}

void FraudDetectorClient::CancelBatchImportJobAsync(const CancelBatchImportJobRequest& request, const CancelBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCancelBatchImportJobAsyncHelper( this, request, handler, context ); } );
}

CancelBatchPredictionJobOutcome FraudDetectorClient::CancelBatchPredictionJob(const CancelBatchPredictionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelBatchPredictionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelBatchPredictionJobOutcomeCallable FraudDetectorClient::CancelBatchPredictionJobCallable(const CancelBatchPredictionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelBatchPredictionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelBatchPredictionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCancelBatchPredictionJobAsyncHelper(FraudDetectorClient const * const clientThis, const CancelBatchPredictionJobRequest& request, const CancelBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelBatchPredictionJob(request), context);
}

void FraudDetectorClient::CancelBatchPredictionJobAsync(const CancelBatchPredictionJobRequest& request, const CancelBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCancelBatchPredictionJobAsyncHelper( this, request, handler, context ); } );
}

CreateBatchImportJobOutcome FraudDetectorClient::CreateBatchImportJob(const CreateBatchImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBatchImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBatchImportJobOutcomeCallable FraudDetectorClient::CreateBatchImportJobCallable(const CreateBatchImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCreateBatchImportJobAsyncHelper(FraudDetectorClient const * const clientThis, const CreateBatchImportJobRequest& request, const CreateBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBatchImportJob(request), context);
}

void FraudDetectorClient::CreateBatchImportJobAsync(const CreateBatchImportJobRequest& request, const CreateBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCreateBatchImportJobAsyncHelper( this, request, handler, context ); } );
}

CreateBatchPredictionJobOutcome FraudDetectorClient::CreateBatchPredictionJob(const CreateBatchPredictionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBatchPredictionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBatchPredictionJobOutcomeCallable FraudDetectorClient::CreateBatchPredictionJobCallable(const CreateBatchPredictionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchPredictionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchPredictionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCreateBatchPredictionJobAsyncHelper(FraudDetectorClient const * const clientThis, const CreateBatchPredictionJobRequest& request, const CreateBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBatchPredictionJob(request), context);
}

void FraudDetectorClient::CreateBatchPredictionJobAsync(const CreateBatchPredictionJobRequest& request, const CreateBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCreateBatchPredictionJobAsyncHelper( this, request, handler, context ); } );
}

CreateDetectorVersionOutcome FraudDetectorClient::CreateDetectorVersion(const CreateDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDetectorVersionOutcomeCallable FraudDetectorClient::CreateDetectorVersionCallable(const CreateDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCreateDetectorVersionAsyncHelper(FraudDetectorClient const * const clientThis, const CreateDetectorVersionRequest& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDetectorVersion(request), context);
}

void FraudDetectorClient::CreateDetectorVersionAsync(const CreateDetectorVersionRequest& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCreateDetectorVersionAsyncHelper( this, request, handler, context ); } );
}

CreateModelOutcome FraudDetectorClient::CreateModel(const CreateModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable FraudDetectorClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCreateModelAsyncHelper(FraudDetectorClient const * const clientThis, const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModel(request), context);
}

void FraudDetectorClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCreateModelAsyncHelper( this, request, handler, context ); } );
}

CreateModelVersionOutcome FraudDetectorClient::CreateModelVersion(const CreateModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelVersionOutcomeCallable FraudDetectorClient::CreateModelVersionCallable(const CreateModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCreateModelVersionAsyncHelper(FraudDetectorClient const * const clientThis, const CreateModelVersionRequest& request, const CreateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModelVersion(request), context);
}

void FraudDetectorClient::CreateModelVersionAsync(const CreateModelVersionRequest& request, const CreateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCreateModelVersionAsyncHelper( this, request, handler, context ); } );
}

CreateRuleOutcome FraudDetectorClient::CreateRule(const CreateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleOutcomeCallable FraudDetectorClient::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCreateRuleAsyncHelper(FraudDetectorClient const * const clientThis, const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRule(request), context);
}

void FraudDetectorClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCreateRuleAsyncHelper( this, request, handler, context ); } );
}

CreateVariableOutcome FraudDetectorClient::CreateVariable(const CreateVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVariableOutcomeCallable FraudDetectorClient::CreateVariableCallable(const CreateVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientCreateVariableAsyncHelper(FraudDetectorClient const * const clientThis, const CreateVariableRequest& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVariable(request), context);
}

void FraudDetectorClient::CreateVariableAsync(const CreateVariableRequest& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientCreateVariableAsyncHelper( this, request, handler, context ); } );
}

DeleteBatchImportJobOutcome FraudDetectorClient::DeleteBatchImportJob(const DeleteBatchImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBatchImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBatchImportJobOutcomeCallable FraudDetectorClient::DeleteBatchImportJobCallable(const DeleteBatchImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBatchImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBatchImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteBatchImportJobAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteBatchImportJobRequest& request, const DeleteBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBatchImportJob(request), context);
}

void FraudDetectorClient::DeleteBatchImportJobAsync(const DeleteBatchImportJobRequest& request, const DeleteBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteBatchImportJobAsyncHelper( this, request, handler, context ); } );
}

DeleteBatchPredictionJobOutcome FraudDetectorClient::DeleteBatchPredictionJob(const DeleteBatchPredictionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBatchPredictionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBatchPredictionJobOutcomeCallable FraudDetectorClient::DeleteBatchPredictionJobCallable(const DeleteBatchPredictionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBatchPredictionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBatchPredictionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteBatchPredictionJobAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteBatchPredictionJobRequest& request, const DeleteBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBatchPredictionJob(request), context);
}

void FraudDetectorClient::DeleteBatchPredictionJobAsync(const DeleteBatchPredictionJobRequest& request, const DeleteBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteBatchPredictionJobAsyncHelper( this, request, handler, context ); } );
}

DeleteDetectorOutcome FraudDetectorClient::DeleteDetector(const DeleteDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDetectorOutcomeCallable FraudDetectorClient::DeleteDetectorCallable(const DeleteDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteDetectorAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDetector(request), context);
}

void FraudDetectorClient::DeleteDetectorAsync(const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteDetectorAsyncHelper( this, request, handler, context ); } );
}

DeleteDetectorVersionOutcome FraudDetectorClient::DeleteDetectorVersion(const DeleteDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDetectorVersionOutcomeCallable FraudDetectorClient::DeleteDetectorVersionCallable(const DeleteDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteDetectorVersionAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteDetectorVersionRequest& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDetectorVersion(request), context);
}

void FraudDetectorClient::DeleteDetectorVersionAsync(const DeleteDetectorVersionRequest& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteDetectorVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteEntityTypeOutcome FraudDetectorClient::DeleteEntityType(const DeleteEntityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEntityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntityTypeOutcomeCallable FraudDetectorClient::DeleteEntityTypeCallable(const DeleteEntityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEntityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEntityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteEntityTypeAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteEntityTypeRequest& request, const DeleteEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEntityType(request), context);
}

void FraudDetectorClient::DeleteEntityTypeAsync(const DeleteEntityTypeRequest& request, const DeleteEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteEntityTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteEventOutcome FraudDetectorClient::DeleteEvent(const DeleteEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventOutcomeCallable FraudDetectorClient::DeleteEventCallable(const DeleteEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteEventAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteEventRequest& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEvent(request), context);
}

void FraudDetectorClient::DeleteEventAsync(const DeleteEventRequest& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteEventAsyncHelper( this, request, handler, context ); } );
}

DeleteEventTypeOutcome FraudDetectorClient::DeleteEventType(const DeleteEventTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventTypeOutcomeCallable FraudDetectorClient::DeleteEventTypeCallable(const DeleteEventTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteEventTypeAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteEventTypeRequest& request, const DeleteEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventType(request), context);
}

void FraudDetectorClient::DeleteEventTypeAsync(const DeleteEventTypeRequest& request, const DeleteEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteEventTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteEventsByEventTypeOutcome FraudDetectorClient::DeleteEventsByEventType(const DeleteEventsByEventTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventsByEventTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventsByEventTypeOutcomeCallable FraudDetectorClient::DeleteEventsByEventTypeCallable(const DeleteEventsByEventTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventsByEventTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventsByEventType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteEventsByEventTypeAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteEventsByEventTypeRequest& request, const DeleteEventsByEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventsByEventType(request), context);
}

void FraudDetectorClient::DeleteEventsByEventTypeAsync(const DeleteEventsByEventTypeRequest& request, const DeleteEventsByEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteEventsByEventTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteExternalModelOutcome FraudDetectorClient::DeleteExternalModel(const DeleteExternalModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteExternalModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExternalModelOutcomeCallable FraudDetectorClient::DeleteExternalModelCallable(const DeleteExternalModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExternalModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExternalModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteExternalModelAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteExternalModelRequest& request, const DeleteExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExternalModel(request), context);
}

void FraudDetectorClient::DeleteExternalModelAsync(const DeleteExternalModelRequest& request, const DeleteExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteExternalModelAsyncHelper( this, request, handler, context ); } );
}

DeleteLabelOutcome FraudDetectorClient::DeleteLabel(const DeleteLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLabelOutcomeCallable FraudDetectorClient::DeleteLabelCallable(const DeleteLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteLabelAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteLabelRequest& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLabel(request), context);
}

void FraudDetectorClient::DeleteLabelAsync(const DeleteLabelRequest& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteLabelAsyncHelper( this, request, handler, context ); } );
}

DeleteModelOutcome FraudDetectorClient::DeleteModel(const DeleteModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable FraudDetectorClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteModelAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModel(request), context);
}

void FraudDetectorClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteModelAsyncHelper( this, request, handler, context ); } );
}

DeleteModelVersionOutcome FraudDetectorClient::DeleteModelVersion(const DeleteModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelVersionOutcomeCallable FraudDetectorClient::DeleteModelVersionCallable(const DeleteModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteModelVersionAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteModelVersionRequest& request, const DeleteModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModelVersion(request), context);
}

void FraudDetectorClient::DeleteModelVersionAsync(const DeleteModelVersionRequest& request, const DeleteModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteModelVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteOutcomeOutcome FraudDetectorClient::DeleteOutcome(const DeleteOutcomeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOutcomeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOutcomeOutcomeCallable FraudDetectorClient::DeleteOutcomeCallable(const DeleteOutcomeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOutcomeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOutcome(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteOutcomeAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteOutcomeRequest& request, const DeleteOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOutcome(request), context);
}

void FraudDetectorClient::DeleteOutcomeAsync(const DeleteOutcomeRequest& request, const DeleteOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteOutcomeAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleOutcome FraudDetectorClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable FraudDetectorClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteRuleAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRule(request), context);
}

void FraudDetectorClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteVariableOutcome FraudDetectorClient::DeleteVariable(const DeleteVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVariableOutcomeCallable FraudDetectorClient::DeleteVariableCallable(const DeleteVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDeleteVariableAsyncHelper(FraudDetectorClient const * const clientThis, const DeleteVariableRequest& request, const DeleteVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVariable(request), context);
}

void FraudDetectorClient::DeleteVariableAsync(const DeleteVariableRequest& request, const DeleteVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDeleteVariableAsyncHelper( this, request, handler, context ); } );
}

DescribeDetectorOutcome FraudDetectorClient::DescribeDetector(const DescribeDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDetectorOutcomeCallable FraudDetectorClient::DescribeDetectorCallable(const DescribeDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDescribeDetectorAsyncHelper(FraudDetectorClient const * const clientThis, const DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDetector(request), context);
}

void FraudDetectorClient::DescribeDetectorAsync(const DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDescribeDetectorAsyncHelper( this, request, handler, context ); } );
}

DescribeModelVersionsOutcome FraudDetectorClient::DescribeModelVersions(const DescribeModelVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelVersionsOutcomeCallable FraudDetectorClient::DescribeModelVersionsCallable(const DescribeModelVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientDescribeModelVersionsAsyncHelper(FraudDetectorClient const * const clientThis, const DescribeModelVersionsRequest& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeModelVersions(request), context);
}

void FraudDetectorClient::DescribeModelVersionsAsync(const DescribeModelVersionsRequest& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientDescribeModelVersionsAsyncHelper( this, request, handler, context ); } );
}

GetBatchImportJobsOutcome FraudDetectorClient::GetBatchImportJobs(const GetBatchImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBatchImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBatchImportJobsOutcomeCallable FraudDetectorClient::GetBatchImportJobsCallable(const GetBatchImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBatchImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBatchImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetBatchImportJobsAsyncHelper(FraudDetectorClient const * const clientThis, const GetBatchImportJobsRequest& request, const GetBatchImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBatchImportJobs(request), context);
}

void FraudDetectorClient::GetBatchImportJobsAsync(const GetBatchImportJobsRequest& request, const GetBatchImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetBatchImportJobsAsyncHelper( this, request, handler, context ); } );
}

GetBatchPredictionJobsOutcome FraudDetectorClient::GetBatchPredictionJobs(const GetBatchPredictionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBatchPredictionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBatchPredictionJobsOutcomeCallable FraudDetectorClient::GetBatchPredictionJobsCallable(const GetBatchPredictionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBatchPredictionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBatchPredictionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetBatchPredictionJobsAsyncHelper(FraudDetectorClient const * const clientThis, const GetBatchPredictionJobsRequest& request, const GetBatchPredictionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBatchPredictionJobs(request), context);
}

void FraudDetectorClient::GetBatchPredictionJobsAsync(const GetBatchPredictionJobsRequest& request, const GetBatchPredictionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetBatchPredictionJobsAsyncHelper( this, request, handler, context ); } );
}

GetDeleteEventsByEventTypeStatusOutcome FraudDetectorClient::GetDeleteEventsByEventTypeStatus(const GetDeleteEventsByEventTypeStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeleteEventsByEventTypeStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeleteEventsByEventTypeStatusOutcomeCallable FraudDetectorClient::GetDeleteEventsByEventTypeStatusCallable(const GetDeleteEventsByEventTypeStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeleteEventsByEventTypeStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeleteEventsByEventTypeStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetDeleteEventsByEventTypeStatusAsyncHelper(FraudDetectorClient const * const clientThis, const GetDeleteEventsByEventTypeStatusRequest& request, const GetDeleteEventsByEventTypeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeleteEventsByEventTypeStatus(request), context);
}

void FraudDetectorClient::GetDeleteEventsByEventTypeStatusAsync(const GetDeleteEventsByEventTypeStatusRequest& request, const GetDeleteEventsByEventTypeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetDeleteEventsByEventTypeStatusAsyncHelper( this, request, handler, context ); } );
}

GetDetectorVersionOutcome FraudDetectorClient::GetDetectorVersion(const GetDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDetectorVersionOutcomeCallable FraudDetectorClient::GetDetectorVersionCallable(const GetDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetDetectorVersionAsyncHelper(FraudDetectorClient const * const clientThis, const GetDetectorVersionRequest& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDetectorVersion(request), context);
}

void FraudDetectorClient::GetDetectorVersionAsync(const GetDetectorVersionRequest& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetDetectorVersionAsyncHelper( this, request, handler, context ); } );
}

GetDetectorsOutcome FraudDetectorClient::GetDetectors(const GetDetectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDetectorsOutcomeCallable FraudDetectorClient::GetDetectorsCallable(const GetDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetDetectorsAsyncHelper(FraudDetectorClient const * const clientThis, const GetDetectorsRequest& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDetectors(request), context);
}

void FraudDetectorClient::GetDetectorsAsync(const GetDetectorsRequest& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetDetectorsAsyncHelper( this, request, handler, context ); } );
}

GetEntityTypesOutcome FraudDetectorClient::GetEntityTypes(const GetEntityTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEntityTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEntityTypesOutcomeCallable FraudDetectorClient::GetEntityTypesCallable(const GetEntityTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEntityTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEntityTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetEntityTypesAsyncHelper(FraudDetectorClient const * const clientThis, const GetEntityTypesRequest& request, const GetEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEntityTypes(request), context);
}

void FraudDetectorClient::GetEntityTypesAsync(const GetEntityTypesRequest& request, const GetEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetEntityTypesAsyncHelper( this, request, handler, context ); } );
}

GetEventOutcome FraudDetectorClient::GetEvent(const GetEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventOutcomeCallable FraudDetectorClient::GetEventCallable(const GetEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetEventAsyncHelper(FraudDetectorClient const * const clientThis, const GetEventRequest& request, const GetEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEvent(request), context);
}

void FraudDetectorClient::GetEventAsync(const GetEventRequest& request, const GetEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetEventAsyncHelper( this, request, handler, context ); } );
}

GetEventPredictionOutcome FraudDetectorClient::GetEventPrediction(const GetEventPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEventPredictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventPredictionOutcomeCallable FraudDetectorClient::GetEventPredictionCallable(const GetEventPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetEventPredictionAsyncHelper(FraudDetectorClient const * const clientThis, const GetEventPredictionRequest& request, const GetEventPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEventPrediction(request), context);
}

void FraudDetectorClient::GetEventPredictionAsync(const GetEventPredictionRequest& request, const GetEventPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetEventPredictionAsyncHelper( this, request, handler, context ); } );
}

GetEventPredictionMetadataOutcome FraudDetectorClient::GetEventPredictionMetadata(const GetEventPredictionMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEventPredictionMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventPredictionMetadataOutcomeCallable FraudDetectorClient::GetEventPredictionMetadataCallable(const GetEventPredictionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventPredictionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventPredictionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetEventPredictionMetadataAsyncHelper(FraudDetectorClient const * const clientThis, const GetEventPredictionMetadataRequest& request, const GetEventPredictionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEventPredictionMetadata(request), context);
}

void FraudDetectorClient::GetEventPredictionMetadataAsync(const GetEventPredictionMetadataRequest& request, const GetEventPredictionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetEventPredictionMetadataAsyncHelper( this, request, handler, context ); } );
}

GetEventTypesOutcome FraudDetectorClient::GetEventTypes(const GetEventTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEventTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEventTypesOutcomeCallable FraudDetectorClient::GetEventTypesCallable(const GetEventTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetEventTypesAsyncHelper(FraudDetectorClient const * const clientThis, const GetEventTypesRequest& request, const GetEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEventTypes(request), context);
}

void FraudDetectorClient::GetEventTypesAsync(const GetEventTypesRequest& request, const GetEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetEventTypesAsyncHelper( this, request, handler, context ); } );
}

GetExternalModelsOutcome FraudDetectorClient::GetExternalModels(const GetExternalModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetExternalModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExternalModelsOutcomeCallable FraudDetectorClient::GetExternalModelsCallable(const GetExternalModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExternalModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExternalModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetExternalModelsAsyncHelper(FraudDetectorClient const * const clientThis, const GetExternalModelsRequest& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExternalModels(request), context);
}

void FraudDetectorClient::GetExternalModelsAsync(const GetExternalModelsRequest& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetExternalModelsAsyncHelper( this, request, handler, context ); } );
}

GetKMSEncryptionKeyOutcome FraudDetectorClient::GetKMSEncryptionKey() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return GetKMSEncryptionKeyOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "GetKMSEncryptionKey"));
}

GetKMSEncryptionKeyOutcomeCallable FraudDetectorClient::GetKMSEncryptionKeyCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKMSEncryptionKeyOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetKMSEncryptionKey(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetKMSEncryptionKeyAsyncHelper(FraudDetectorClient const * const clientThis, const GetKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->GetKMSEncryptionKey(), context);
}

void FraudDetectorClient::GetKMSEncryptionKeyAsync(const GetKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ FraudDetectorClientGetKMSEncryptionKeyAsyncHelper( this, handler, context ); } );
}

GetLabelsOutcome FraudDetectorClient::GetLabels(const GetLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLabelsOutcomeCallable FraudDetectorClient::GetLabelsCallable(const GetLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetLabelsAsyncHelper(FraudDetectorClient const * const clientThis, const GetLabelsRequest& request, const GetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLabels(request), context);
}

void FraudDetectorClient::GetLabelsAsync(const GetLabelsRequest& request, const GetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetLabelsAsyncHelper( this, request, handler, context ); } );
}

GetModelVersionOutcome FraudDetectorClient::GetModelVersion(const GetModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetModelVersionOutcomeCallable FraudDetectorClient::GetModelVersionCallable(const GetModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetModelVersionAsyncHelper(FraudDetectorClient const * const clientThis, const GetModelVersionRequest& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetModelVersion(request), context);
}

void FraudDetectorClient::GetModelVersionAsync(const GetModelVersionRequest& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetModelVersionAsyncHelper( this, request, handler, context ); } );
}

GetModelsOutcome FraudDetectorClient::GetModels(const GetModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetModelsOutcomeCallable FraudDetectorClient::GetModelsCallable(const GetModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetModelsAsyncHelper(FraudDetectorClient const * const clientThis, const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetModels(request), context);
}

void FraudDetectorClient::GetModelsAsync(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetModelsAsyncHelper( this, request, handler, context ); } );
}

GetOutcomesOutcome FraudDetectorClient::GetOutcomes(const GetOutcomesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOutcomesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOutcomesOutcomeCallable FraudDetectorClient::GetOutcomesCallable(const GetOutcomesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOutcomesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOutcomes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetOutcomesAsyncHelper(FraudDetectorClient const * const clientThis, const GetOutcomesRequest& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOutcomes(request), context);
}

void FraudDetectorClient::GetOutcomesAsync(const GetOutcomesRequest& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetOutcomesAsyncHelper( this, request, handler, context ); } );
}

GetRulesOutcome FraudDetectorClient::GetRules(const GetRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRulesOutcomeCallable FraudDetectorClient::GetRulesCallable(const GetRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetRulesAsyncHelper(FraudDetectorClient const * const clientThis, const GetRulesRequest& request, const GetRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRules(request), context);
}

void FraudDetectorClient::GetRulesAsync(const GetRulesRequest& request, const GetRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetRulesAsyncHelper( this, request, handler, context ); } );
}

GetVariablesOutcome FraudDetectorClient::GetVariables(const GetVariablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetVariablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVariablesOutcomeCallable FraudDetectorClient::GetVariablesCallable(const GetVariablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVariablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVariables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientGetVariablesAsyncHelper(FraudDetectorClient const * const clientThis, const GetVariablesRequest& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVariables(request), context);
}

void FraudDetectorClient::GetVariablesAsync(const GetVariablesRequest& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientGetVariablesAsyncHelper( this, request, handler, context ); } );
}

ListEventPredictionsOutcome FraudDetectorClient::ListEventPredictions(const ListEventPredictionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventPredictionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventPredictionsOutcomeCallable FraudDetectorClient::ListEventPredictionsCallable(const ListEventPredictionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventPredictionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventPredictions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientListEventPredictionsAsyncHelper(FraudDetectorClient const * const clientThis, const ListEventPredictionsRequest& request, const ListEventPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEventPredictions(request), context);
}

void FraudDetectorClient::ListEventPredictionsAsync(const ListEventPredictionsRequest& request, const ListEventPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientListEventPredictionsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome FraudDetectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable FraudDetectorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientListTagsForResourceAsyncHelper(FraudDetectorClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void FraudDetectorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutDetectorOutcome FraudDetectorClient::PutDetector(const PutDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDetectorOutcomeCallable FraudDetectorClient::PutDetectorCallable(const PutDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientPutDetectorAsyncHelper(FraudDetectorClient const * const clientThis, const PutDetectorRequest& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDetector(request), context);
}

void FraudDetectorClient::PutDetectorAsync(const PutDetectorRequest& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientPutDetectorAsyncHelper( this, request, handler, context ); } );
}

PutEntityTypeOutcome FraudDetectorClient::PutEntityType(const PutEntityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutEntityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEntityTypeOutcomeCallable FraudDetectorClient::PutEntityTypeCallable(const PutEntityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEntityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEntityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientPutEntityTypeAsyncHelper(FraudDetectorClient const * const clientThis, const PutEntityTypeRequest& request, const PutEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEntityType(request), context);
}

void FraudDetectorClient::PutEntityTypeAsync(const PutEntityTypeRequest& request, const PutEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientPutEntityTypeAsyncHelper( this, request, handler, context ); } );
}

PutEventTypeOutcome FraudDetectorClient::PutEventType(const PutEventTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutEventTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventTypeOutcomeCallable FraudDetectorClient::PutEventTypeCallable(const PutEventTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientPutEventTypeAsyncHelper(FraudDetectorClient const * const clientThis, const PutEventTypeRequest& request, const PutEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEventType(request), context);
}

void FraudDetectorClient::PutEventTypeAsync(const PutEventTypeRequest& request, const PutEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientPutEventTypeAsyncHelper( this, request, handler, context ); } );
}

PutExternalModelOutcome FraudDetectorClient::PutExternalModel(const PutExternalModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutExternalModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutExternalModelOutcomeCallable FraudDetectorClient::PutExternalModelCallable(const PutExternalModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutExternalModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutExternalModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientPutExternalModelAsyncHelper(FraudDetectorClient const * const clientThis, const PutExternalModelRequest& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutExternalModel(request), context);
}

void FraudDetectorClient::PutExternalModelAsync(const PutExternalModelRequest& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientPutExternalModelAsyncHelper( this, request, handler, context ); } );
}

PutKMSEncryptionKeyOutcome FraudDetectorClient::PutKMSEncryptionKey(const PutKMSEncryptionKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutKMSEncryptionKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutKMSEncryptionKeyOutcomeCallable FraudDetectorClient::PutKMSEncryptionKeyCallable(const PutKMSEncryptionKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutKMSEncryptionKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutKMSEncryptionKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientPutKMSEncryptionKeyAsyncHelper(FraudDetectorClient const * const clientThis, const PutKMSEncryptionKeyRequest& request, const PutKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutKMSEncryptionKey(request), context);
}

void FraudDetectorClient::PutKMSEncryptionKeyAsync(const PutKMSEncryptionKeyRequest& request, const PutKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientPutKMSEncryptionKeyAsyncHelper( this, request, handler, context ); } );
}

PutLabelOutcome FraudDetectorClient::PutLabel(const PutLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLabelOutcomeCallable FraudDetectorClient::PutLabelCallable(const PutLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientPutLabelAsyncHelper(FraudDetectorClient const * const clientThis, const PutLabelRequest& request, const PutLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLabel(request), context);
}

void FraudDetectorClient::PutLabelAsync(const PutLabelRequest& request, const PutLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientPutLabelAsyncHelper( this, request, handler, context ); } );
}

PutOutcomeOutcome FraudDetectorClient::PutOutcome(const PutOutcomeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutOutcomeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutOutcomeOutcomeCallable FraudDetectorClient::PutOutcomeCallable(const PutOutcomeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutOutcomeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutOutcome(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientPutOutcomeAsyncHelper(FraudDetectorClient const * const clientThis, const PutOutcomeRequest& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutOutcome(request), context);
}

void FraudDetectorClient::PutOutcomeAsync(const PutOutcomeRequest& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientPutOutcomeAsyncHelper( this, request, handler, context ); } );
}

SendEventOutcome FraudDetectorClient::SendEvent(const SendEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendEventOutcomeCallable FraudDetectorClient::SendEventCallable(const SendEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientSendEventAsyncHelper(FraudDetectorClient const * const clientThis, const SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendEvent(request), context);
}

void FraudDetectorClient::SendEventAsync(const SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientSendEventAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome FraudDetectorClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable FraudDetectorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientTagResourceAsyncHelper(FraudDetectorClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void FraudDetectorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome FraudDetectorClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable FraudDetectorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUntagResourceAsyncHelper(FraudDetectorClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void FraudDetectorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDetectorVersionOutcome FraudDetectorClient::UpdateDetectorVersion(const UpdateDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorVersionOutcomeCallable FraudDetectorClient::UpdateDetectorVersionCallable(const UpdateDetectorVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetectorVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateDetectorVersionAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateDetectorVersionRequest& request, const UpdateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDetectorVersion(request), context);
}

void FraudDetectorClient::UpdateDetectorVersionAsync(const UpdateDetectorVersionRequest& request, const UpdateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateDetectorVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateDetectorVersionMetadataOutcome FraudDetectorClient::UpdateDetectorVersionMetadata(const UpdateDetectorVersionMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDetectorVersionMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorVersionMetadataOutcomeCallable FraudDetectorClient::UpdateDetectorVersionMetadataCallable(const UpdateDetectorVersionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorVersionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetectorVersionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateDetectorVersionMetadataAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateDetectorVersionMetadataRequest& request, const UpdateDetectorVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDetectorVersionMetadata(request), context);
}

void FraudDetectorClient::UpdateDetectorVersionMetadataAsync(const UpdateDetectorVersionMetadataRequest& request, const UpdateDetectorVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateDetectorVersionMetadataAsyncHelper( this, request, handler, context ); } );
}

UpdateDetectorVersionStatusOutcome FraudDetectorClient::UpdateDetectorVersionStatus(const UpdateDetectorVersionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDetectorVersionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorVersionStatusOutcomeCallable FraudDetectorClient::UpdateDetectorVersionStatusCallable(const UpdateDetectorVersionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorVersionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetectorVersionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateDetectorVersionStatusAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateDetectorVersionStatusRequest& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDetectorVersionStatus(request), context);
}

void FraudDetectorClient::UpdateDetectorVersionStatusAsync(const UpdateDetectorVersionStatusRequest& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateDetectorVersionStatusAsyncHelper( this, request, handler, context ); } );
}

UpdateEventLabelOutcome FraudDetectorClient::UpdateEventLabel(const UpdateEventLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEventLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventLabelOutcomeCallable FraudDetectorClient::UpdateEventLabelCallable(const UpdateEventLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateEventLabelAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateEventLabelRequest& request, const UpdateEventLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEventLabel(request), context);
}

void FraudDetectorClient::UpdateEventLabelAsync(const UpdateEventLabelRequest& request, const UpdateEventLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateEventLabelAsyncHelper( this, request, handler, context ); } );
}

UpdateModelOutcome FraudDetectorClient::UpdateModel(const UpdateModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelOutcomeCallable FraudDetectorClient::UpdateModelCallable(const UpdateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateModelAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateModel(request), context);
}

void FraudDetectorClient::UpdateModelAsync(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateModelAsyncHelper( this, request, handler, context ); } );
}

UpdateModelVersionOutcome FraudDetectorClient::UpdateModelVersion(const UpdateModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelVersionOutcomeCallable FraudDetectorClient::UpdateModelVersionCallable(const UpdateModelVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateModelVersionAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateModelVersionRequest& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateModelVersion(request), context);
}

void FraudDetectorClient::UpdateModelVersionAsync(const UpdateModelVersionRequest& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateModelVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateModelVersionStatusOutcome FraudDetectorClient::UpdateModelVersionStatus(const UpdateModelVersionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateModelVersionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelVersionStatusOutcomeCallable FraudDetectorClient::UpdateModelVersionStatusCallable(const UpdateModelVersionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelVersionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelVersionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateModelVersionStatusAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateModelVersionStatusRequest& request, const UpdateModelVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateModelVersionStatus(request), context);
}

void FraudDetectorClient::UpdateModelVersionStatusAsync(const UpdateModelVersionStatusRequest& request, const UpdateModelVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateModelVersionStatusAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleMetadataOutcome FraudDetectorClient::UpdateRuleMetadata(const UpdateRuleMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleMetadataOutcomeCallable FraudDetectorClient::UpdateRuleMetadataCallable(const UpdateRuleMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateRuleMetadataAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateRuleMetadataRequest& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuleMetadata(request), context);
}

void FraudDetectorClient::UpdateRuleMetadataAsync(const UpdateRuleMetadataRequest& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateRuleMetadataAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleVersionOutcome FraudDetectorClient::UpdateRuleVersion(const UpdateRuleVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleVersionOutcomeCallable FraudDetectorClient::UpdateRuleVersionCallable(const UpdateRuleVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateRuleVersionAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateRuleVersionRequest& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuleVersion(request), context);
}

void FraudDetectorClient::UpdateRuleVersionAsync(const UpdateRuleVersionRequest& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateRuleVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateVariableOutcome FraudDetectorClient::UpdateVariable(const UpdateVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVariableOutcomeCallable FraudDetectorClient::UpdateVariableCallable(const UpdateVariableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVariableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVariable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClientUpdateVariableAsyncHelper(FraudDetectorClient const * const clientThis, const UpdateVariableRequest& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVariable(request), context);
}

void FraudDetectorClient::UpdateVariableAsync(const UpdateVariableRequest& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FraudDetectorClientUpdateVariableAsyncHelper( this, request, handler, context ); } );
}

