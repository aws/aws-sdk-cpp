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

#include <aws/states/SFNClient.h>
#include <aws/states/SFNEndpoint.h>
#include <aws/states/SFNErrorMarshaller.h>
#include <aws/states/model/CreateActivityRequest.h>
#include <aws/states/model/CreateStateMachineRequest.h>
#include <aws/states/model/DeleteActivityRequest.h>
#include <aws/states/model/DeleteStateMachineRequest.h>
#include <aws/states/model/DescribeActivityRequest.h>
#include <aws/states/model/DescribeExecutionRequest.h>
#include <aws/states/model/DescribeStateMachineRequest.h>
#include <aws/states/model/DescribeStateMachineForExecutionRequest.h>
#include <aws/states/model/GetActivityTaskRequest.h>
#include <aws/states/model/GetExecutionHistoryRequest.h>
#include <aws/states/model/ListActivitiesRequest.h>
#include <aws/states/model/ListExecutionsRequest.h>
#include <aws/states/model/ListStateMachinesRequest.h>
#include <aws/states/model/ListTagsForResourceRequest.h>
#include <aws/states/model/SendTaskFailureRequest.h>
#include <aws/states/model/SendTaskHeartbeatRequest.h>
#include <aws/states/model/SendTaskSuccessRequest.h>
#include <aws/states/model/StartExecutionRequest.h>
#include <aws/states/model/StopExecutionRequest.h>
#include <aws/states/model/TagResourceRequest.h>
#include <aws/states/model/UntagResourceRequest.h>
#include <aws/states/model/UpdateStateMachineRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SFN;
using namespace Aws::SFN::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "states";
static const char* ALLOCATION_TAG = "SFNClient";


SFNClient::SFNClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SFNClient::SFNClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SFNClient::SFNClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SFNClient::~SFNClient()
{
}

void SFNClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SFNEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SFNClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateActivityOutcome SFNClient::CreateActivity(const CreateActivityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateActivityOutcome(CreateActivityResult(outcome.GetResult()));
  }
  else
  {
    return CreateActivityOutcome(outcome.GetError());
  }
}

CreateActivityOutcomeCallable SFNClient::CreateActivityCallable(const CreateActivityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateActivityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateActivity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::CreateActivityAsync(const CreateActivityRequest& request, const CreateActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateActivityAsyncHelper( request, handler, context ); } );
}

void SFNClient::CreateActivityAsyncHelper(const CreateActivityRequest& request, const CreateActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateActivity(request), context);
}

CreateStateMachineOutcome SFNClient::CreateStateMachine(const CreateStateMachineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStateMachineOutcome(CreateStateMachineResult(outcome.GetResult()));
  }
  else
  {
    return CreateStateMachineOutcome(outcome.GetError());
  }
}

CreateStateMachineOutcomeCallable SFNClient::CreateStateMachineCallable(const CreateStateMachineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStateMachineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStateMachine(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::CreateStateMachineAsync(const CreateStateMachineRequest& request, const CreateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStateMachineAsyncHelper( request, handler, context ); } );
}

void SFNClient::CreateStateMachineAsyncHelper(const CreateStateMachineRequest& request, const CreateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStateMachine(request), context);
}

DeleteActivityOutcome SFNClient::DeleteActivity(const DeleteActivityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteActivityOutcome(DeleteActivityResult(outcome.GetResult()));
  }
  else
  {
    return DeleteActivityOutcome(outcome.GetError());
  }
}

DeleteActivityOutcomeCallable SFNClient::DeleteActivityCallable(const DeleteActivityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteActivityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteActivity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::DeleteActivityAsync(const DeleteActivityRequest& request, const DeleteActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteActivityAsyncHelper( request, handler, context ); } );
}

void SFNClient::DeleteActivityAsyncHelper(const DeleteActivityRequest& request, const DeleteActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteActivity(request), context);
}

DeleteStateMachineOutcome SFNClient::DeleteStateMachine(const DeleteStateMachineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStateMachineOutcome(DeleteStateMachineResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStateMachineOutcome(outcome.GetError());
  }
}

DeleteStateMachineOutcomeCallable SFNClient::DeleteStateMachineCallable(const DeleteStateMachineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStateMachineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStateMachine(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::DeleteStateMachineAsync(const DeleteStateMachineRequest& request, const DeleteStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStateMachineAsyncHelper( request, handler, context ); } );
}

void SFNClient::DeleteStateMachineAsyncHelper(const DeleteStateMachineRequest& request, const DeleteStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStateMachine(request), context);
}

DescribeActivityOutcome SFNClient::DescribeActivity(const DescribeActivityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeActivityOutcome(DescribeActivityResult(outcome.GetResult()));
  }
  else
  {
    return DescribeActivityOutcome(outcome.GetError());
  }
}

DescribeActivityOutcomeCallable SFNClient::DescribeActivityCallable(const DescribeActivityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActivityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActivity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::DescribeActivityAsync(const DescribeActivityRequest& request, const DescribeActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeActivityAsyncHelper( request, handler, context ); } );
}

void SFNClient::DescribeActivityAsyncHelper(const DescribeActivityRequest& request, const DescribeActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeActivity(request), context);
}

DescribeExecutionOutcome SFNClient::DescribeExecution(const DescribeExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeExecutionOutcome(DescribeExecutionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeExecutionOutcome(outcome.GetError());
  }
}

DescribeExecutionOutcomeCallable SFNClient::DescribeExecutionCallable(const DescribeExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::DescribeExecutionAsync(const DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExecutionAsyncHelper( request, handler, context ); } );
}

void SFNClient::DescribeExecutionAsyncHelper(const DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExecution(request), context);
}

DescribeStateMachineOutcome SFNClient::DescribeStateMachine(const DescribeStateMachineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStateMachineOutcome(DescribeStateMachineResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStateMachineOutcome(outcome.GetError());
  }
}

DescribeStateMachineOutcomeCallable SFNClient::DescribeStateMachineCallable(const DescribeStateMachineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStateMachineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStateMachine(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::DescribeStateMachineAsync(const DescribeStateMachineRequest& request, const DescribeStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStateMachineAsyncHelper( request, handler, context ); } );
}

void SFNClient::DescribeStateMachineAsyncHelper(const DescribeStateMachineRequest& request, const DescribeStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStateMachine(request), context);
}

DescribeStateMachineForExecutionOutcome SFNClient::DescribeStateMachineForExecution(const DescribeStateMachineForExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStateMachineForExecutionOutcome(DescribeStateMachineForExecutionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStateMachineForExecutionOutcome(outcome.GetError());
  }
}

DescribeStateMachineForExecutionOutcomeCallable SFNClient::DescribeStateMachineForExecutionCallable(const DescribeStateMachineForExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStateMachineForExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStateMachineForExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::DescribeStateMachineForExecutionAsync(const DescribeStateMachineForExecutionRequest& request, const DescribeStateMachineForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStateMachineForExecutionAsyncHelper( request, handler, context ); } );
}

void SFNClient::DescribeStateMachineForExecutionAsyncHelper(const DescribeStateMachineForExecutionRequest& request, const DescribeStateMachineForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStateMachineForExecution(request), context);
}

GetActivityTaskOutcome SFNClient::GetActivityTask(const GetActivityTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetActivityTaskOutcome(GetActivityTaskResult(outcome.GetResult()));
  }
  else
  {
    return GetActivityTaskOutcome(outcome.GetError());
  }
}

GetActivityTaskOutcomeCallable SFNClient::GetActivityTaskCallable(const GetActivityTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetActivityTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetActivityTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::GetActivityTaskAsync(const GetActivityTaskRequest& request, const GetActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetActivityTaskAsyncHelper( request, handler, context ); } );
}

void SFNClient::GetActivityTaskAsyncHelper(const GetActivityTaskRequest& request, const GetActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetActivityTask(request), context);
}

GetExecutionHistoryOutcome SFNClient::GetExecutionHistory(const GetExecutionHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetExecutionHistoryOutcome(GetExecutionHistoryResult(outcome.GetResult()));
  }
  else
  {
    return GetExecutionHistoryOutcome(outcome.GetError());
  }
}

GetExecutionHistoryOutcomeCallable SFNClient::GetExecutionHistoryCallable(const GetExecutionHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExecutionHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExecutionHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::GetExecutionHistoryAsync(const GetExecutionHistoryRequest& request, const GetExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExecutionHistoryAsyncHelper( request, handler, context ); } );
}

void SFNClient::GetExecutionHistoryAsyncHelper(const GetExecutionHistoryRequest& request, const GetExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExecutionHistory(request), context);
}

ListActivitiesOutcome SFNClient::ListActivities(const ListActivitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListActivitiesOutcome(ListActivitiesResult(outcome.GetResult()));
  }
  else
  {
    return ListActivitiesOutcome(outcome.GetError());
  }
}

ListActivitiesOutcomeCallable SFNClient::ListActivitiesCallable(const ListActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::ListActivitiesAsync(const ListActivitiesRequest& request, const ListActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListActivitiesAsyncHelper( request, handler, context ); } );
}

void SFNClient::ListActivitiesAsyncHelper(const ListActivitiesRequest& request, const ListActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListActivities(request), context);
}

ListExecutionsOutcome SFNClient::ListExecutions(const ListExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListExecutionsOutcome(ListExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListExecutionsOutcome(outcome.GetError());
  }
}

ListExecutionsOutcomeCallable SFNClient::ListExecutionsCallable(const ListExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::ListExecutionsAsync(const ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExecutionsAsyncHelper( request, handler, context ); } );
}

void SFNClient::ListExecutionsAsyncHelper(const ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExecutions(request), context);
}

ListStateMachinesOutcome SFNClient::ListStateMachines(const ListStateMachinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListStateMachinesOutcome(ListStateMachinesResult(outcome.GetResult()));
  }
  else
  {
    return ListStateMachinesOutcome(outcome.GetError());
  }
}

ListStateMachinesOutcomeCallable SFNClient::ListStateMachinesCallable(const ListStateMachinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStateMachinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStateMachines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::ListStateMachinesAsync(const ListStateMachinesRequest& request, const ListStateMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStateMachinesAsyncHelper( request, handler, context ); } );
}

void SFNClient::ListStateMachinesAsyncHelper(const ListStateMachinesRequest& request, const ListStateMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStateMachines(request), context);
}

ListTagsForResourceOutcome SFNClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
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

ListTagsForResourceOutcomeCallable SFNClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SFNClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

SendTaskFailureOutcome SFNClient::SendTaskFailure(const SendTaskFailureRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendTaskFailureOutcome(SendTaskFailureResult(outcome.GetResult()));
  }
  else
  {
    return SendTaskFailureOutcome(outcome.GetError());
  }
}

SendTaskFailureOutcomeCallable SFNClient::SendTaskFailureCallable(const SendTaskFailureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendTaskFailureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendTaskFailure(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::SendTaskFailureAsync(const SendTaskFailureRequest& request, const SendTaskFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendTaskFailureAsyncHelper( request, handler, context ); } );
}

void SFNClient::SendTaskFailureAsyncHelper(const SendTaskFailureRequest& request, const SendTaskFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendTaskFailure(request), context);
}

SendTaskHeartbeatOutcome SFNClient::SendTaskHeartbeat(const SendTaskHeartbeatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendTaskHeartbeatOutcome(SendTaskHeartbeatResult(outcome.GetResult()));
  }
  else
  {
    return SendTaskHeartbeatOutcome(outcome.GetError());
  }
}

SendTaskHeartbeatOutcomeCallable SFNClient::SendTaskHeartbeatCallable(const SendTaskHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendTaskHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendTaskHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::SendTaskHeartbeatAsync(const SendTaskHeartbeatRequest& request, const SendTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendTaskHeartbeatAsyncHelper( request, handler, context ); } );
}

void SFNClient::SendTaskHeartbeatAsyncHelper(const SendTaskHeartbeatRequest& request, const SendTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendTaskHeartbeat(request), context);
}

SendTaskSuccessOutcome SFNClient::SendTaskSuccess(const SendTaskSuccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendTaskSuccessOutcome(SendTaskSuccessResult(outcome.GetResult()));
  }
  else
  {
    return SendTaskSuccessOutcome(outcome.GetError());
  }
}

SendTaskSuccessOutcomeCallable SFNClient::SendTaskSuccessCallable(const SendTaskSuccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendTaskSuccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendTaskSuccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::SendTaskSuccessAsync(const SendTaskSuccessRequest& request, const SendTaskSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendTaskSuccessAsyncHelper( request, handler, context ); } );
}

void SFNClient::SendTaskSuccessAsyncHelper(const SendTaskSuccessRequest& request, const SendTaskSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendTaskSuccess(request), context);
}

StartExecutionOutcome SFNClient::StartExecution(const StartExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartExecutionOutcome(StartExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartExecutionOutcome(outcome.GetError());
  }
}

StartExecutionOutcomeCallable SFNClient::StartExecutionCallable(const StartExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::StartExecutionAsync(const StartExecutionRequest& request, const StartExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartExecutionAsyncHelper( request, handler, context ); } );
}

void SFNClient::StartExecutionAsyncHelper(const StartExecutionRequest& request, const StartExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartExecution(request), context);
}

StopExecutionOutcome SFNClient::StopExecution(const StopExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopExecutionOutcome(StopExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StopExecutionOutcome(outcome.GetError());
  }
}

StopExecutionOutcomeCallable SFNClient::StopExecutionCallable(const StopExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::StopExecutionAsync(const StopExecutionRequest& request, const StopExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopExecutionAsyncHelper( request, handler, context ); } );
}

void SFNClient::StopExecutionAsyncHelper(const StopExecutionRequest& request, const StopExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopExecution(request), context);
}

TagResourceOutcome SFNClient::TagResource(const TagResourceRequest& request) const
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

TagResourceOutcomeCallable SFNClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SFNClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SFNClient::UntagResource(const UntagResourceRequest& request) const
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

UntagResourceOutcomeCallable SFNClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SFNClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateStateMachineOutcome SFNClient::UpdateStateMachine(const UpdateStateMachineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateStateMachineOutcome(UpdateStateMachineResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStateMachineOutcome(outcome.GetError());
  }
}

UpdateStateMachineOutcomeCallable SFNClient::UpdateStateMachineCallable(const UpdateStateMachineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStateMachineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStateMachine(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SFNClient::UpdateStateMachineAsync(const UpdateStateMachineRequest& request, const UpdateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStateMachineAsyncHelper( request, handler, context ); } );
}

void SFNClient::UpdateStateMachineAsyncHelper(const UpdateStateMachineRequest& request, const UpdateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStateMachine(request), context);
}

