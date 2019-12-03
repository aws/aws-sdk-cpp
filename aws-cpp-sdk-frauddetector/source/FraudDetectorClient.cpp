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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/frauddetector/FraudDetectorClient.h>
#include <aws/frauddetector/FraudDetectorEndpoint.h>
#include <aws/frauddetector/FraudDetectorErrorMarshaller.h>
#include <aws/frauddetector/model/BatchCreateVariableRequest.h>
#include <aws/frauddetector/model/BatchGetVariableRequest.h>
#include <aws/frauddetector/model/CreateDetectorVersionRequest.h>
#include <aws/frauddetector/model/CreateModelVersionRequest.h>
#include <aws/frauddetector/model/CreateRuleRequest.h>
#include <aws/frauddetector/model/CreateVariableRequest.h>
#include <aws/frauddetector/model/DeleteDetectorVersionRequest.h>
#include <aws/frauddetector/model/DeleteEventRequest.h>
#include <aws/frauddetector/model/DescribeDetectorRequest.h>
#include <aws/frauddetector/model/DescribeModelVersionsRequest.h>
#include <aws/frauddetector/model/GetDetectorVersionRequest.h>
#include <aws/frauddetector/model/GetDetectorsRequest.h>
#include <aws/frauddetector/model/GetExternalModelsRequest.h>
#include <aws/frauddetector/model/GetModelVersionRequest.h>
#include <aws/frauddetector/model/GetModelsRequest.h>
#include <aws/frauddetector/model/GetOutcomesRequest.h>
#include <aws/frauddetector/model/GetPredictionRequest.h>
#include <aws/frauddetector/model/GetRulesRequest.h>
#include <aws/frauddetector/model/GetVariablesRequest.h>
#include <aws/frauddetector/model/PutDetectorRequest.h>
#include <aws/frauddetector/model/PutExternalModelRequest.h>
#include <aws/frauddetector/model/PutModelRequest.h>
#include <aws/frauddetector/model/PutOutcomeRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionMetadataRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionStatusRequest.h>
#include <aws/frauddetector/model/UpdateModelVersionRequest.h>
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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchCreateVariableOutcome(BatchCreateVariableResult(outcome.GetResult()));
  }
  else
  {
    return BatchCreateVariableOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetVariableOutcome(BatchGetVariableResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetVariableOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDetectorVersionOutcome(CreateDetectorVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateDetectorVersionOutcome(outcome.GetError());
  }
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

CreateModelVersionOutcome FraudDetectorClient::CreateModelVersion(const CreateModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateModelVersionOutcome(CreateModelVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateModelVersionOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRuleOutcome(CreateRuleResult(outcome.GetResult()));
  }
  else
  {
    return CreateRuleOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVariableOutcome(CreateVariableResult(outcome.GetResult()));
  }
  else
  {
    return CreateVariableOutcome(outcome.GetError());
  }
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

DeleteDetectorVersionOutcome FraudDetectorClient::DeleteDetectorVersion(const DeleteDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDetectorVersionOutcome(DeleteDetectorVersionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDetectorVersionOutcome(outcome.GetError());
  }
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

DeleteEventOutcome FraudDetectorClient::DeleteEvent(const DeleteEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEventOutcome(DeleteEventResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEventOutcome(outcome.GetError());
  }
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

DescribeDetectorOutcome FraudDetectorClient::DescribeDetector(const DescribeDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDetectorOutcome(DescribeDetectorResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDetectorOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeModelVersionsOutcome(DescribeModelVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeModelVersionsOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDetectorVersionOutcome(GetDetectorVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetDetectorVersionOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDetectorsOutcome(GetDetectorsResult(outcome.GetResult()));
  }
  else
  {
    return GetDetectorsOutcome(outcome.GetError());
  }
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

GetExternalModelsOutcome FraudDetectorClient::GetExternalModels(const GetExternalModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetExternalModelsOutcome(GetExternalModelsResult(outcome.GetResult()));
  }
  else
  {
    return GetExternalModelsOutcome(outcome.GetError());
  }
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

GetModelVersionOutcome FraudDetectorClient::GetModelVersion(const GetModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetModelVersionOutcome(GetModelVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetModelVersionOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetModelsOutcome(GetModelsResult(outcome.GetResult()));
  }
  else
  {
    return GetModelsOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOutcomesOutcome(GetOutcomesResult(outcome.GetResult()));
  }
  else
  {
    return GetOutcomesOutcome(outcome.GetError());
  }
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

GetPredictionOutcome FraudDetectorClient::GetPrediction(const GetPredictionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPredictionOutcome(GetPredictionResult(outcome.GetResult()));
  }
  else
  {
    return GetPredictionOutcome(outcome.GetError());
  }
}

GetPredictionOutcomeCallable FraudDetectorClient::GetPredictionCallable(const GetPredictionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPredictionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPrediction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::GetPredictionAsync(const GetPredictionRequest& request, const GetPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPredictionAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::GetPredictionAsyncHelper(const GetPredictionRequest& request, const GetPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPrediction(request), context);
}

GetRulesOutcome FraudDetectorClient::GetRules(const GetRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRulesOutcome(GetRulesResult(outcome.GetResult()));
  }
  else
  {
    return GetRulesOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVariablesOutcome(GetVariablesResult(outcome.GetResult()));
  }
  else
  {
    return GetVariablesOutcome(outcome.GetError());
  }
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

PutDetectorOutcome FraudDetectorClient::PutDetector(const PutDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDetectorOutcome(PutDetectorResult(outcome.GetResult()));
  }
  else
  {
    return PutDetectorOutcome(outcome.GetError());
  }
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

PutExternalModelOutcome FraudDetectorClient::PutExternalModel(const PutExternalModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutExternalModelOutcome(PutExternalModelResult(outcome.GetResult()));
  }
  else
  {
    return PutExternalModelOutcome(outcome.GetError());
  }
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

PutModelOutcome FraudDetectorClient::PutModel(const PutModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutModelOutcome(PutModelResult(outcome.GetResult()));
  }
  else
  {
    return PutModelOutcome(outcome.GetError());
  }
}

PutModelOutcomeCallable FraudDetectorClient::PutModelCallable(const PutModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FraudDetectorClient::PutModelAsync(const PutModelRequest& request, const PutModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutModelAsyncHelper( request, handler, context ); } );
}

void FraudDetectorClient::PutModelAsyncHelper(const PutModelRequest& request, const PutModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutModel(request), context);
}

PutOutcomeOutcome FraudDetectorClient::PutOutcome(const PutOutcomeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutOutcomeOutcome(PutOutcomeResult(outcome.GetResult()));
  }
  else
  {
    return PutOutcomeOutcome(outcome.GetError());
  }
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

UpdateDetectorVersionOutcome FraudDetectorClient::UpdateDetectorVersion(const UpdateDetectorVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDetectorVersionOutcome(UpdateDetectorVersionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDetectorVersionOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDetectorVersionMetadataOutcome(UpdateDetectorVersionMetadataResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDetectorVersionMetadataOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDetectorVersionStatusOutcome(UpdateDetectorVersionStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDetectorVersionStatusOutcome(outcome.GetError());
  }
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

UpdateModelVersionOutcome FraudDetectorClient::UpdateModelVersion(const UpdateModelVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateModelVersionOutcome(UpdateModelVersionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateModelVersionOutcome(outcome.GetError());
  }
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

UpdateRuleMetadataOutcome FraudDetectorClient::UpdateRuleMetadata(const UpdateRuleMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRuleMetadataOutcome(UpdateRuleMetadataResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRuleMetadataOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRuleVersionOutcome(UpdateRuleVersionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRuleVersionOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVariableOutcome(UpdateVariableResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVariableOutcome(outcome.GetError());
  }
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

