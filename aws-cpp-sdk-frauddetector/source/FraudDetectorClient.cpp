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
#include <aws/frauddetector/model/CreateDetectorVersionRequest.h>
#include <aws/frauddetector/model/CreateModelRequest.h>
#include <aws/frauddetector/model/CreateModelVersionRequest.h>
#include <aws/frauddetector/model/CreateRuleRequest.h>
#include <aws/frauddetector/model/CreateVariableRequest.h>
#include <aws/frauddetector/model/DeleteDetectorRequest.h>
#include <aws/frauddetector/model/DeleteDetectorVersionRequest.h>
#include <aws/frauddetector/model/DeleteEntityTypeRequest.h>
#include <aws/frauddetector/model/DeleteEventRequest.h>
#include <aws/frauddetector/model/DeleteEventTypeRequest.h>
#include <aws/frauddetector/model/DeleteExternalModelRequest.h>
#include <aws/frauddetector/model/DeleteLabelRequest.h>
#include <aws/frauddetector/model/DeleteModelRequest.h>
#include <aws/frauddetector/model/DeleteModelVersionRequest.h>
#include <aws/frauddetector/model/DeleteOutcomeRequest.h>
#include <aws/frauddetector/model/DeleteRuleRequest.h>
#include <aws/frauddetector/model/DeleteVariableRequest.h>
#include <aws/frauddetector/model/DescribeDetectorRequest.h>
#include <aws/frauddetector/model/DescribeModelVersionsRequest.h>
#include <aws/frauddetector/model/GetDetectorVersionRequest.h>
#include <aws/frauddetector/model/GetDetectorsRequest.h>
#include <aws/frauddetector/model/GetEntityTypesRequest.h>
#include <aws/frauddetector/model/GetEventPredictionRequest.h>
#include <aws/frauddetector/model/GetEventTypesRequest.h>
#include <aws/frauddetector/model/GetExternalModelsRequest.h>
#include <aws/frauddetector/model/GetLabelsRequest.h>
#include <aws/frauddetector/model/GetModelVersionRequest.h>
#include <aws/frauddetector/model/GetModelsRequest.h>
#include <aws/frauddetector/model/GetOutcomesRequest.h>
#include <aws/frauddetector/model/GetRulesRequest.h>
#include <aws/frauddetector/model/GetVariablesRequest.h>
#include <aws/frauddetector/model/ListTagsForResourceRequest.h>
#include <aws/frauddetector/model/PutDetectorRequest.h>
#include <aws/frauddetector/model/PutEntityTypeRequest.h>
#include <aws/frauddetector/model/PutEventTypeRequest.h>
#include <aws/frauddetector/model/PutExternalModelRequest.h>
#include <aws/frauddetector/model/PutKMSEncryptionKeyRequest.h>
#include <aws/frauddetector/model/PutLabelRequest.h>
#include <aws/frauddetector/model/PutOutcomeRequest.h>
#include <aws/frauddetector/model/TagResourceRequest.h>
#include <aws/frauddetector/model/UntagResourceRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionMetadataRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionStatusRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::~FraudDetectorClient()
{
}

void FraudDetectorClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("FraudDetector");
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchCreateVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreateVariableAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::BatchCreateVariableAsyncHelper(const BatchCreateVariableRequest& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreateVariable(request), context);
}

BatchGetVariableOutcome FraudDetectorClient::BatchGetVariable(const BatchGetVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchGetVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetVariableAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::BatchGetVariableAsyncHelper(const BatchGetVariableRequest& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetVariable(request), context);
}

CreateDetectorVersionOutcome FraudDetectorClient::CreateDetectorVersion(const CreateDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDetectorVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::CreateDetectorVersionAsyncHelper(const CreateDetectorVersionRequest& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDetectorVersion(request), context);
}

CreateModelOutcome FraudDetectorClient::CreateModel(const CreateModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateModelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::CreateModelAsyncHelper(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateModel(request), context);
}

CreateModelVersionOutcome FraudDetectorClient::CreateModelVersion(const CreateModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateModelVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::CreateModelVersionAsyncHelper(const CreateModelVersionRequest& request, const CreateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateModelVersion(request), context);
}

CreateRuleOutcome FraudDetectorClient::CreateRule(const CreateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateRuleAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::CreateRuleAsyncHelper(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRule(request), context);
}

CreateVariableOutcome FraudDetectorClient::CreateVariable(const CreateVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateVariableAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::CreateVariableAsyncHelper(const CreateVariableRequest& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVariable(request), context);
}

DeleteDetectorOutcome FraudDetectorClient::DeleteDetector(const DeleteDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDetectorAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteDetectorAsyncHelper(const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDetector(request), context);
}

DeleteDetectorVersionOutcome FraudDetectorClient::DeleteDetectorVersion(const DeleteDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDetectorVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteDetectorVersionAsyncHelper(const DeleteDetectorVersionRequest& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDetectorVersion(request), context);
}

DeleteEntityTypeOutcome FraudDetectorClient::DeleteEntityType(const DeleteEntityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEntityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEntityTypeAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteEntityTypeAsyncHelper(const DeleteEntityTypeRequest& request, const DeleteEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEntityType(request), context);
}

DeleteEventOutcome FraudDetectorClient::DeleteEvent(const DeleteEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteEventAsyncHelper(const DeleteEventRequest& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEvent(request), context);
}

DeleteEventTypeOutcome FraudDetectorClient::DeleteEventType(const DeleteEventTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEventTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventTypeAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteEventTypeAsyncHelper(const DeleteEventTypeRequest& request, const DeleteEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventType(request), context);
}

DeleteExternalModelOutcome FraudDetectorClient::DeleteExternalModel(const DeleteExternalModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteExternalModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteExternalModelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteExternalModelAsyncHelper(const DeleteExternalModelRequest& request, const DeleteExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteExternalModel(request), context);
}

DeleteLabelOutcome FraudDetectorClient::DeleteLabel(const DeleteLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLabelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteLabelAsyncHelper(const DeleteLabelRequest& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLabel(request), context);
}

DeleteModelOutcome FraudDetectorClient::DeleteModel(const DeleteModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteModelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteModelAsyncHelper(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteModel(request), context);
}

DeleteModelVersionOutcome FraudDetectorClient::DeleteModelVersion(const DeleteModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteModelVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteModelVersionAsyncHelper(const DeleteModelVersionRequest& request, const DeleteModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteModelVersion(request), context);
}

DeleteOutcomeOutcome FraudDetectorClient::DeleteOutcome(const DeleteOutcomeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteOutcomeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOutcomeAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteOutcomeAsyncHelper(const DeleteOutcomeRequest& request, const DeleteOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOutcome(request), context);
}

DeleteRuleOutcome FraudDetectorClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRuleAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteRuleAsyncHelper(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRule(request), context);
}

DeleteVariableOutcome FraudDetectorClient::DeleteVariable(const DeleteVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVariableAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DeleteVariableAsyncHelper(const DeleteVariableRequest& request, const DeleteVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVariable(request), context);
}

DescribeDetectorOutcome FraudDetectorClient::DescribeDetector(const DescribeDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDetectorAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DescribeDetectorAsyncHelper(const DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDetector(request), context);
}

DescribeModelVersionsOutcome FraudDetectorClient::DescribeModelVersions(const DescribeModelVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeModelVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeModelVersionsAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::DescribeModelVersionsAsyncHelper(const DescribeModelVersionsRequest& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeModelVersions(request), context);
}

GetDetectorVersionOutcome FraudDetectorClient::GetDetectorVersion(const GetDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDetectorVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetDetectorVersionAsyncHelper(const GetDetectorVersionRequest& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDetectorVersion(request), context);
}

GetDetectorsOutcome FraudDetectorClient::GetDetectors(const GetDetectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDetectorsAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetDetectorsAsyncHelper(const GetDetectorsRequest& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDetectors(request), context);
}

GetEntityTypesOutcome FraudDetectorClient::GetEntityTypes(const GetEntityTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEntityTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEntityTypesAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetEntityTypesAsyncHelper(const GetEntityTypesRequest& request, const GetEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEntityTypes(request), context);
}

GetEventPredictionOutcome FraudDetectorClient::GetEventPrediction(const GetEventPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEventPredictionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEventPredictionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetEventPredictionAsyncHelper(const GetEventPredictionRequest& request, const GetEventPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventPrediction(request), context);
}

GetEventTypesOutcome FraudDetectorClient::GetEventTypes(const GetEventTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEventTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEventTypesAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetEventTypesAsyncHelper(const GetEventTypesRequest& request, const GetEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventTypes(request), context);
}

GetExternalModelsOutcome FraudDetectorClient::GetExternalModels(const GetExternalModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetExternalModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetExternalModelsAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetExternalModelsAsyncHelper(const GetExternalModelsRequest& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExternalModels(request), context);
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

void FraudDetectorClient::GetKMSEncryptionKeyAsync(const GetKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->GetKMSEncryptionKeyAsyncHelper( handler, context ); } );
}

void FraudDetectorClient::GetKMSEncryptionKeyAsyncHelper(const GetKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, GetKMSEncryptionKey(), context);
}

GetLabelsOutcome FraudDetectorClient::GetLabels(const GetLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLabelsAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetLabelsAsyncHelper(const GetLabelsRequest& request, const GetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLabels(request), context);
}

GetModelVersionOutcome FraudDetectorClient::GetModelVersion(const GetModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetModelVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetModelVersionAsyncHelper(const GetModelVersionRequest& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModelVersion(request), context);
}

GetModelsOutcome FraudDetectorClient::GetModels(const GetModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetModelsAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetModelsAsyncHelper(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModels(request), context);
}

GetOutcomesOutcome FraudDetectorClient::GetOutcomes(const GetOutcomesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetOutcomesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetOutcomesAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetOutcomesAsyncHelper(const GetOutcomesRequest& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOutcomes(request), context);
}

GetRulesOutcome FraudDetectorClient::GetRules(const GetRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRulesAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetRulesAsyncHelper(const GetRulesRequest& request, const GetRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRules(request), context);
}

GetVariablesOutcome FraudDetectorClient::GetVariables(const GetVariablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVariablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetVariablesAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetVariablesAsyncHelper(const GetVariablesRequest& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVariables(request), context);
}

ListTagsForResourceOutcome FraudDetectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutDetectorOutcome FraudDetectorClient::PutDetector(const PutDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutDetectorAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutDetectorAsyncHelper(const PutDetectorRequest& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDetector(request), context);
}

PutEntityTypeOutcome FraudDetectorClient::PutEntityType(const PutEntityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutEntityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutEntityTypeAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutEntityTypeAsyncHelper(const PutEntityTypeRequest& request, const PutEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEntityType(request), context);
}

PutEventTypeOutcome FraudDetectorClient::PutEventType(const PutEventTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutEventTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutEventTypeAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutEventTypeAsyncHelper(const PutEventTypeRequest& request, const PutEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEventType(request), context);
}

PutExternalModelOutcome FraudDetectorClient::PutExternalModel(const PutExternalModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutExternalModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutExternalModelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutExternalModelAsyncHelper(const PutExternalModelRequest& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutExternalModel(request), context);
}

PutKMSEncryptionKeyOutcome FraudDetectorClient::PutKMSEncryptionKey(const PutKMSEncryptionKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutKMSEncryptionKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutKMSEncryptionKeyAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutKMSEncryptionKeyAsyncHelper(const PutKMSEncryptionKeyRequest& request, const PutKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutKMSEncryptionKey(request), context);
}

PutLabelOutcome FraudDetectorClient::PutLabel(const PutLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutLabelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutLabelAsyncHelper(const PutLabelRequest& request, const PutLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLabel(request), context);
}

PutOutcomeOutcome FraudDetectorClient::PutOutcome(const PutOutcomeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutOutcomeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutOutcomeAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutOutcomeAsyncHelper(const PutOutcomeRequest& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutOutcome(request), context);
}

TagResourceOutcome FraudDetectorClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome FraudDetectorClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDetectorVersionOutcome FraudDetectorClient::UpdateDetectorVersion(const UpdateDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDetectorVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDetectorVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateDetectorVersionAsyncHelper(const UpdateDetectorVersionRequest& request, const UpdateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDetectorVersion(request), context);
}

UpdateDetectorVersionMetadataOutcome FraudDetectorClient::UpdateDetectorVersionMetadata(const UpdateDetectorVersionMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDetectorVersionMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDetectorVersionMetadataAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateDetectorVersionMetadataAsyncHelper(const UpdateDetectorVersionMetadataRequest& request, const UpdateDetectorVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDetectorVersionMetadata(request), context);
}

UpdateDetectorVersionStatusOutcome FraudDetectorClient::UpdateDetectorVersionStatus(const UpdateDetectorVersionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDetectorVersionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDetectorVersionStatusAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateDetectorVersionStatusAsyncHelper(const UpdateDetectorVersionStatusRequest& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDetectorVersionStatus(request), context);
}

UpdateModelOutcome FraudDetectorClient::UpdateModel(const UpdateModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateModelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateModelAsyncHelper(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateModel(request), context);
}

UpdateModelVersionOutcome FraudDetectorClient::UpdateModelVersion(const UpdateModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateModelVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateModelVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateModelVersionAsyncHelper(const UpdateModelVersionRequest& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateModelVersion(request), context);
}

UpdateModelVersionStatusOutcome FraudDetectorClient::UpdateModelVersionStatus(const UpdateModelVersionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateModelVersionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateModelVersionStatusAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateModelVersionStatusAsyncHelper(const UpdateModelVersionStatusRequest& request, const UpdateModelVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateModelVersionStatus(request), context);
}

UpdateRuleMetadataOutcome FraudDetectorClient::UpdateRuleMetadata(const UpdateRuleMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRuleMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRuleMetadataAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateRuleMetadataAsyncHelper(const UpdateRuleMetadataRequest& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRuleMetadata(request), context);
}

UpdateRuleVersionOutcome FraudDetectorClient::UpdateRuleVersion(const UpdateRuleVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRuleVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRuleVersionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateRuleVersionAsyncHelper(const UpdateRuleVersionRequest& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRuleVersion(request), context);
}

UpdateVariableOutcome FraudDetectorClient::UpdateVariable(const UpdateVariableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVariableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVariableAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::UpdateVariableAsyncHelper(const UpdateVariableRequest& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVariable(request), context);
}

