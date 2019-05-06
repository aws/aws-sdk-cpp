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

#include <aws/datasync/DataSyncClient.h>
#include <aws/datasync/DataSyncEndpoint.h>
#include <aws/datasync/DataSyncErrorMarshaller.h>
#include <aws/datasync/model/CancelTaskExecutionRequest.h>
#include <aws/datasync/model/CreateAgentRequest.h>
#include <aws/datasync/model/CreateLocationEfsRequest.h>
#include <aws/datasync/model/CreateLocationNfsRequest.h>
#include <aws/datasync/model/CreateLocationS3Request.h>
#include <aws/datasync/model/CreateTaskRequest.h>
#include <aws/datasync/model/DeleteAgentRequest.h>
#include <aws/datasync/model/DeleteLocationRequest.h>
#include <aws/datasync/model/DeleteTaskRequest.h>
#include <aws/datasync/model/DescribeAgentRequest.h>
#include <aws/datasync/model/DescribeLocationEfsRequest.h>
#include <aws/datasync/model/DescribeLocationNfsRequest.h>
#include <aws/datasync/model/DescribeLocationS3Request.h>
#include <aws/datasync/model/DescribeTaskRequest.h>
#include <aws/datasync/model/DescribeTaskExecutionRequest.h>
#include <aws/datasync/model/ListAgentsRequest.h>
#include <aws/datasync/model/ListLocationsRequest.h>
#include <aws/datasync/model/ListTagsForResourceRequest.h>
#include <aws/datasync/model/ListTaskExecutionsRequest.h>
#include <aws/datasync/model/ListTasksRequest.h>
#include <aws/datasync/model/StartTaskExecutionRequest.h>
#include <aws/datasync/model/TagResourceRequest.h>
#include <aws/datasync/model/UntagResourceRequest.h>
#include <aws/datasync/model/UpdateAgentRequest.h>
#include <aws/datasync/model/UpdateTaskRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataSync;
using namespace Aws::DataSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "datasync";
static const char* ALLOCATION_TAG = "DataSyncClient";


DataSyncClient::DataSyncClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataSyncClient::DataSyncClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataSyncClient::DataSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataSyncClient::~DataSyncClient()
{
}

void DataSyncClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DataSyncEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DataSyncClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelTaskExecutionOutcome DataSyncClient::CancelTaskExecution(const CancelTaskExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelTaskExecutionOutcome(CancelTaskExecutionResult(outcome.GetResult()));
  }
  else
  {
    return CancelTaskExecutionOutcome(outcome.GetError());
  }
}

CancelTaskExecutionOutcomeCallable DataSyncClient::CancelTaskExecutionCallable(const CancelTaskExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelTaskExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelTaskExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CancelTaskExecutionAsync(const CancelTaskExecutionRequest& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelTaskExecutionAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::CancelTaskExecutionAsyncHelper(const CancelTaskExecutionRequest& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelTaskExecution(request), context);
}

CreateAgentOutcome DataSyncClient::CreateAgent(const CreateAgentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAgentOutcome(CreateAgentResult(outcome.GetResult()));
  }
  else
  {
    return CreateAgentOutcome(outcome.GetError());
  }
}

CreateAgentOutcomeCallable DataSyncClient::CreateAgentCallable(const CreateAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateAgentAsync(const CreateAgentRequest& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAgentAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::CreateAgentAsyncHelper(const CreateAgentRequest& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAgent(request), context);
}

CreateLocationEfsOutcome DataSyncClient::CreateLocationEfs(const CreateLocationEfsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLocationEfsOutcome(CreateLocationEfsResult(outcome.GetResult()));
  }
  else
  {
    return CreateLocationEfsOutcome(outcome.GetError());
  }
}

CreateLocationEfsOutcomeCallable DataSyncClient::CreateLocationEfsCallable(const CreateLocationEfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationEfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationEfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationEfsAsync(const CreateLocationEfsRequest& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLocationEfsAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::CreateLocationEfsAsyncHelper(const CreateLocationEfsRequest& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLocationEfs(request), context);
}

CreateLocationNfsOutcome DataSyncClient::CreateLocationNfs(const CreateLocationNfsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLocationNfsOutcome(CreateLocationNfsResult(outcome.GetResult()));
  }
  else
  {
    return CreateLocationNfsOutcome(outcome.GetError());
  }
}

CreateLocationNfsOutcomeCallable DataSyncClient::CreateLocationNfsCallable(const CreateLocationNfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationNfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationNfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationNfsAsync(const CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLocationNfsAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::CreateLocationNfsAsyncHelper(const CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLocationNfs(request), context);
}

CreateLocationS3Outcome DataSyncClient::CreateLocationS3(const CreateLocationS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLocationS3Outcome(CreateLocationS3Result(outcome.GetResult()));
  }
  else
  {
    return CreateLocationS3Outcome(outcome.GetError());
  }
}

CreateLocationS3OutcomeCallable DataSyncClient::CreateLocationS3Callable(const CreateLocationS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationS3Async(const CreateLocationS3Request& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLocationS3AsyncHelper( request, handler, context ); } );
}

void DataSyncClient::CreateLocationS3AsyncHelper(const CreateLocationS3Request& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLocationS3(request), context);
}

CreateTaskOutcome DataSyncClient::CreateTask(const CreateTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTaskOutcome(CreateTaskResult(outcome.GetResult()));
  }
  else
  {
    return CreateTaskOutcome(outcome.GetError());
  }
}

CreateTaskOutcomeCallable DataSyncClient::CreateTaskCallable(const CreateTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTaskAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::CreateTaskAsyncHelper(const CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTask(request), context);
}

DeleteAgentOutcome DataSyncClient::DeleteAgent(const DeleteAgentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAgentOutcome(DeleteAgentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAgentOutcome(outcome.GetError());
  }
}

DeleteAgentOutcomeCallable DataSyncClient::DeleteAgentCallable(const DeleteAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DeleteAgentAsync(const DeleteAgentRequest& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAgentAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DeleteAgentAsyncHelper(const DeleteAgentRequest& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAgent(request), context);
}

DeleteLocationOutcome DataSyncClient::DeleteLocation(const DeleteLocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLocationOutcome(DeleteLocationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLocationOutcome(outcome.GetError());
  }
}

DeleteLocationOutcomeCallable DataSyncClient::DeleteLocationCallable(const DeleteLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DeleteLocationAsync(const DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLocationAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DeleteLocationAsyncHelper(const DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLocation(request), context);
}

DeleteTaskOutcome DataSyncClient::DeleteTask(const DeleteTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTaskOutcome(DeleteTaskResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTaskOutcome(outcome.GetError());
  }
}

DeleteTaskOutcomeCallable DataSyncClient::DeleteTaskCallable(const DeleteTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTaskAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DeleteTaskAsyncHelper(const DeleteTaskRequest& request, const DeleteTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTask(request), context);
}

DescribeAgentOutcome DataSyncClient::DescribeAgent(const DescribeAgentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAgentOutcome(DescribeAgentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAgentOutcome(outcome.GetError());
  }
}

DescribeAgentOutcomeCallable DataSyncClient::DescribeAgentCallable(const DescribeAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeAgentAsync(const DescribeAgentRequest& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAgentAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DescribeAgentAsyncHelper(const DescribeAgentRequest& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAgent(request), context);
}

DescribeLocationEfsOutcome DataSyncClient::DescribeLocationEfs(const DescribeLocationEfsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLocationEfsOutcome(DescribeLocationEfsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLocationEfsOutcome(outcome.GetError());
  }
}

DescribeLocationEfsOutcomeCallable DataSyncClient::DescribeLocationEfsCallable(const DescribeLocationEfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationEfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationEfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationEfsAsync(const DescribeLocationEfsRequest& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLocationEfsAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DescribeLocationEfsAsyncHelper(const DescribeLocationEfsRequest& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLocationEfs(request), context);
}

DescribeLocationNfsOutcome DataSyncClient::DescribeLocationNfs(const DescribeLocationNfsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLocationNfsOutcome(DescribeLocationNfsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLocationNfsOutcome(outcome.GetError());
  }
}

DescribeLocationNfsOutcomeCallable DataSyncClient::DescribeLocationNfsCallable(const DescribeLocationNfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationNfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationNfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationNfsAsync(const DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLocationNfsAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DescribeLocationNfsAsyncHelper(const DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLocationNfs(request), context);
}

DescribeLocationS3Outcome DataSyncClient::DescribeLocationS3(const DescribeLocationS3Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLocationS3Outcome(DescribeLocationS3Result(outcome.GetResult()));
  }
  else
  {
    return DescribeLocationS3Outcome(outcome.GetError());
  }
}

DescribeLocationS3OutcomeCallable DataSyncClient::DescribeLocationS3Callable(const DescribeLocationS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationS3Async(const DescribeLocationS3Request& request, const DescribeLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLocationS3AsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DescribeLocationS3AsyncHelper(const DescribeLocationS3Request& request, const DescribeLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLocationS3(request), context);
}

DescribeTaskOutcome DataSyncClient::DescribeTask(const DescribeTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTaskOutcome(DescribeTaskResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTaskOutcome(outcome.GetError());
  }
}

DescribeTaskOutcomeCallable DataSyncClient::DescribeTaskCallable(const DescribeTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTaskAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DescribeTaskAsyncHelper(const DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTask(request), context);
}

DescribeTaskExecutionOutcome DataSyncClient::DescribeTaskExecution(const DescribeTaskExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTaskExecutionOutcome(DescribeTaskExecutionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTaskExecutionOutcome(outcome.GetError());
  }
}

DescribeTaskExecutionOutcomeCallable DataSyncClient::DescribeTaskExecutionCallable(const DescribeTaskExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTaskExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeTaskExecutionAsync(const DescribeTaskExecutionRequest& request, const DescribeTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTaskExecutionAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::DescribeTaskExecutionAsyncHelper(const DescribeTaskExecutionRequest& request, const DescribeTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTaskExecution(request), context);
}

ListAgentsOutcome DataSyncClient::ListAgents(const ListAgentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAgentsOutcome(ListAgentsResult(outcome.GetResult()));
  }
  else
  {
    return ListAgentsOutcome(outcome.GetError());
  }
}

ListAgentsOutcomeCallable DataSyncClient::ListAgentsCallable(const ListAgentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAgentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAgents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListAgentsAsync(const ListAgentsRequest& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAgentsAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::ListAgentsAsyncHelper(const ListAgentsRequest& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAgents(request), context);
}

ListLocationsOutcome DataSyncClient::ListLocations(const ListLocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLocationsOutcome(ListLocationsResult(outcome.GetResult()));
  }
  else
  {
    return ListLocationsOutcome(outcome.GetError());
  }
}

ListLocationsOutcomeCallable DataSyncClient::ListLocationsCallable(const ListLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListLocationsAsync(const ListLocationsRequest& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLocationsAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::ListLocationsAsyncHelper(const ListLocationsRequest& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLocations(request), context);
}

ListTagsForResourceOutcome DataSyncClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable DataSyncClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTaskExecutionsOutcome DataSyncClient::ListTaskExecutions(const ListTaskExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTaskExecutionsOutcome(ListTaskExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListTaskExecutionsOutcome(outcome.GetError());
  }
}

ListTaskExecutionsOutcomeCallable DataSyncClient::ListTaskExecutionsCallable(const ListTaskExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTaskExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTaskExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListTaskExecutionsAsync(const ListTaskExecutionsRequest& request, const ListTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTaskExecutionsAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::ListTaskExecutionsAsyncHelper(const ListTaskExecutionsRequest& request, const ListTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTaskExecutions(request), context);
}

ListTasksOutcome DataSyncClient::ListTasks(const ListTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTasksOutcome(ListTasksResult(outcome.GetResult()));
  }
  else
  {
    return ListTasksOutcome(outcome.GetError());
  }
}

ListTasksOutcomeCallable DataSyncClient::ListTasksCallable(const ListTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTasksAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::ListTasksAsyncHelper(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTasks(request), context);
}

StartTaskExecutionOutcome DataSyncClient::StartTaskExecution(const StartTaskExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartTaskExecutionOutcome(StartTaskExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartTaskExecutionOutcome(outcome.GetError());
  }
}

StartTaskExecutionOutcomeCallable DataSyncClient::StartTaskExecutionCallable(const StartTaskExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTaskExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTaskExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::StartTaskExecutionAsync(const StartTaskExecutionRequest& request, const StartTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTaskExecutionAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::StartTaskExecutionAsyncHelper(const StartTaskExecutionRequest& request, const StartTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTaskExecution(request), context);
}

TagResourceOutcome DataSyncClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable DataSyncClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome DataSyncClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable DataSyncClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAgentOutcome DataSyncClient::UpdateAgent(const UpdateAgentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAgentOutcome(UpdateAgentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAgentOutcome(outcome.GetError());
  }
}

UpdateAgentOutcomeCallable DataSyncClient::UpdateAgentCallable(const UpdateAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateAgentAsync(const UpdateAgentRequest& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAgentAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::UpdateAgentAsyncHelper(const UpdateAgentRequest& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAgent(request), context);
}

UpdateTaskOutcome DataSyncClient::UpdateTask(const UpdateTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTaskOutcome(UpdateTaskResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTaskOutcome(outcome.GetError());
  }
}

UpdateTaskOutcomeCallable DataSyncClient::UpdateTaskCallable(const UpdateTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateTaskAsync(const UpdateTaskRequest& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTaskAsyncHelper( request, handler, context ); } );
}

void DataSyncClient::UpdateTaskAsyncHelper(const UpdateTaskRequest& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTask(request), context);
}

