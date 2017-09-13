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
#include <aws/athena/AthenaClient.h>
#include <aws/athena/AthenaEndpoint.h>
#include <aws/athena/AthenaErrorMarshaller.h>
#include <aws/athena/model/BatchGetNamedQueryRequest.h>
#include <aws/athena/model/BatchGetQueryExecutionRequest.h>
#include <aws/athena/model/CreateNamedQueryRequest.h>
#include <aws/athena/model/DeleteNamedQueryRequest.h>
#include <aws/athena/model/GetNamedQueryRequest.h>
#include <aws/athena/model/GetQueryExecutionRequest.h>
#include <aws/athena/model/GetQueryResultsRequest.h>
#include <aws/athena/model/ListNamedQueriesRequest.h>
#include <aws/athena/model/ListQueryExecutionsRequest.h>
#include <aws/athena/model/StartQueryExecutionRequest.h>
#include <aws/athena/model/StopQueryExecutionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Athena;
using namespace Aws::Athena::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "athena";
static const char* ALLOCATION_TAG = "AthenaClient";


AthenaClient::AthenaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::AthenaClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::AthenaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AthenaClient::~AthenaClient()
{
}

void AthenaClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << AthenaEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchGetNamedQueryOutcome AthenaClient::BatchGetNamedQuery(const BatchGetNamedQueryRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetNamedQueryOutcome(BatchGetNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetNamedQueryOutcome(outcome.GetError());
  }
}

BatchGetNamedQueryOutcomeCallable AthenaClient::BatchGetNamedQueryCallable(const BatchGetNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::BatchGetNamedQueryAsync(const BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::BatchGetNamedQueryAsyncHelper(const BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetNamedQuery(request), context);
}

BatchGetQueryExecutionOutcome AthenaClient::BatchGetQueryExecution(const BatchGetQueryExecutionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetQueryExecutionOutcome(BatchGetQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetQueryExecutionOutcome(outcome.GetError());
  }
}

BatchGetQueryExecutionOutcomeCallable AthenaClient::BatchGetQueryExecutionCallable(const BatchGetQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::BatchGetQueryExecutionAsync(const BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::BatchGetQueryExecutionAsyncHelper(const BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetQueryExecution(request), context);
}

CreateNamedQueryOutcome AthenaClient::CreateNamedQuery(const CreateNamedQueryRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNamedQueryOutcome(CreateNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return CreateNamedQueryOutcome(outcome.GetError());
  }
}

CreateNamedQueryOutcomeCallable AthenaClient::CreateNamedQueryCallable(const CreateNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::CreateNamedQueryAsync(const CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::CreateNamedQueryAsyncHelper(const CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNamedQuery(request), context);
}

DeleteNamedQueryOutcome AthenaClient::DeleteNamedQuery(const DeleteNamedQueryRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNamedQueryOutcome(DeleteNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNamedQueryOutcome(outcome.GetError());
  }
}

DeleteNamedQueryOutcomeCallable AthenaClient::DeleteNamedQueryCallable(const DeleteNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::DeleteNamedQueryAsync(const DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::DeleteNamedQueryAsyncHelper(const DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNamedQuery(request), context);
}

GetNamedQueryOutcome AthenaClient::GetNamedQuery(const GetNamedQueryRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNamedQueryOutcome(GetNamedQueryResult(outcome.GetResult()));
  }
  else
  {
    return GetNamedQueryOutcome(outcome.GetError());
  }
}

GetNamedQueryOutcomeCallable AthenaClient::GetNamedQueryCallable(const GetNamedQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNamedQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNamedQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetNamedQueryAsync(const GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNamedQueryAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetNamedQueryAsyncHelper(const GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNamedQuery(request), context);
}

GetQueryExecutionOutcome AthenaClient::GetQueryExecution(const GetQueryExecutionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetQueryExecutionOutcome(GetQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return GetQueryExecutionOutcome(outcome.GetError());
  }
}

GetQueryExecutionOutcomeCallable AthenaClient::GetQueryExecutionCallable(const GetQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetQueryExecutionAsync(const GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetQueryExecutionAsyncHelper(const GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryExecution(request), context);
}

GetQueryResultsOutcome AthenaClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetQueryResultsOutcome(GetQueryResultsResult(outcome.GetResult()));
  }
  else
  {
    return GetQueryResultsOutcome(outcome.GetError());
  }
}

GetQueryResultsOutcomeCallable AthenaClient::GetQueryResultsCallable(const GetQueryResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::GetQueryResultsAsync(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryResultsAsyncHelper( request, handler, context ); } );
}

void AthenaClient::GetQueryResultsAsyncHelper(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryResults(request), context);
}

ListNamedQueriesOutcome AthenaClient::ListNamedQueries(const ListNamedQueriesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNamedQueriesOutcome(ListNamedQueriesResult(outcome.GetResult()));
  }
  else
  {
    return ListNamedQueriesOutcome(outcome.GetError());
  }
}

ListNamedQueriesOutcomeCallable AthenaClient::ListNamedQueriesCallable(const ListNamedQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamedQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamedQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListNamedQueriesAsync(const ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNamedQueriesAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListNamedQueriesAsyncHelper(const ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNamedQueries(request), context);
}

ListQueryExecutionsOutcome AthenaClient::ListQueryExecutions(const ListQueryExecutionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListQueryExecutionsOutcome(ListQueryExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListQueryExecutionsOutcome(outcome.GetError());
  }
}

ListQueryExecutionsOutcomeCallable AthenaClient::ListQueryExecutionsCallable(const ListQueryExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueryExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueryExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::ListQueryExecutionsAsync(const ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQueryExecutionsAsyncHelper( request, handler, context ); } );
}

void AthenaClient::ListQueryExecutionsAsyncHelper(const ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueryExecutions(request), context);
}

StartQueryExecutionOutcome AthenaClient::StartQueryExecution(const StartQueryExecutionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartQueryExecutionOutcome(StartQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartQueryExecutionOutcome(outcome.GetError());
  }
}

StartQueryExecutionOutcomeCallable AthenaClient::StartQueryExecutionCallable(const StartQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::StartQueryExecutionAsync(const StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::StartQueryExecutionAsyncHelper(const StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartQueryExecution(request), context);
}

StopQueryExecutionOutcome AthenaClient::StopQueryExecution(const StopQueryExecutionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopQueryExecutionOutcome(StopQueryExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StopQueryExecutionOutcome(outcome.GetError());
  }
}

StopQueryExecutionOutcomeCallable AthenaClient::StopQueryExecutionCallable(const StopQueryExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopQueryExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopQueryExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AthenaClient::StopQueryExecutionAsync(const StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopQueryExecutionAsyncHelper( request, handler, context ); } );
}

void AthenaClient::StopQueryExecutionAsyncHelper(const StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopQueryExecution(request), context);
}

