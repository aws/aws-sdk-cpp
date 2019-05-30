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

#include <aws/rds-data/RDSDataServiceClient.h>
#include <aws/rds-data/RDSDataServiceEndpoint.h>
#include <aws/rds-data/RDSDataServiceErrorMarshaller.h>
#include <aws/rds-data/model/BatchExecuteStatementRequest.h>
#include <aws/rds-data/model/BeginTransactionRequest.h>
#include <aws/rds-data/model/CommitTransactionRequest.h>
#include <aws/rds-data/model/ExecuteStatementRequest.h>
#include <aws/rds-data/model/RollbackTransactionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RDSDataService;
using namespace Aws::RDSDataService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "rds-data";
static const char* ALLOCATION_TAG = "RDSDataServiceClient";


RDSDataServiceClient::RDSDataServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSDataServiceClient::RDSDataServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSDataServiceClient::RDSDataServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RDSDataServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RDSDataServiceClient::~RDSDataServiceClient()
{
}

void RDSDataServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RDSDataServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RDSDataServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchExecuteStatementOutcome RDSDataServiceClient::BatchExecuteStatement(const BatchExecuteStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/BatchExecute";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchExecuteStatementOutcome(BatchExecuteStatementResult(outcome.GetResult()));
  }
  else
  {
    return BatchExecuteStatementOutcome(outcome.GetError());
  }
}

BatchExecuteStatementOutcomeCallable RDSDataServiceClient::BatchExecuteStatementCallable(const BatchExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::BatchExecuteStatementAsync(const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchExecuteStatementAsyncHelper( request, handler, context ); } );
}

void RDSDataServiceClient::BatchExecuteStatementAsyncHelper(const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchExecuteStatement(request), context);
}

BeginTransactionOutcome RDSDataServiceClient::BeginTransaction(const BeginTransactionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/BeginTransaction";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BeginTransactionOutcome(BeginTransactionResult(outcome.GetResult()));
  }
  else
  {
    return BeginTransactionOutcome(outcome.GetError());
  }
}

BeginTransactionOutcomeCallable RDSDataServiceClient::BeginTransactionCallable(const BeginTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BeginTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BeginTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::BeginTransactionAsync(const BeginTransactionRequest& request, const BeginTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BeginTransactionAsyncHelper( request, handler, context ); } );
}

void RDSDataServiceClient::BeginTransactionAsyncHelper(const BeginTransactionRequest& request, const BeginTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BeginTransaction(request), context);
}

CommitTransactionOutcome RDSDataServiceClient::CommitTransaction(const CommitTransactionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CommitTransaction";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CommitTransactionOutcome(CommitTransactionResult(outcome.GetResult()));
  }
  else
  {
    return CommitTransactionOutcome(outcome.GetError());
  }
}

CommitTransactionOutcomeCallable RDSDataServiceClient::CommitTransactionCallable(const CommitTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CommitTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CommitTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::CommitTransactionAsync(const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CommitTransactionAsyncHelper( request, handler, context ); } );
}

void RDSDataServiceClient::CommitTransactionAsyncHelper(const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CommitTransaction(request), context);
}

ExecuteStatementOutcome RDSDataServiceClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/Execute";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ExecuteStatementOutcome(ExecuteStatementResult(outcome.GetResult()));
  }
  else
  {
    return ExecuteStatementOutcome(outcome.GetError());
  }
}

ExecuteStatementOutcomeCallable RDSDataServiceClient::ExecuteStatementCallable(const ExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::ExecuteStatementAsync(const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExecuteStatementAsyncHelper( request, handler, context ); } );
}

void RDSDataServiceClient::ExecuteStatementAsyncHelper(const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecuteStatement(request), context);
}

RollbackTransactionOutcome RDSDataServiceClient::RollbackTransaction(const RollbackTransactionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/RollbackTransaction";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RollbackTransactionOutcome(RollbackTransactionResult(outcome.GetResult()));
  }
  else
  {
    return RollbackTransactionOutcome(outcome.GetError());
  }
}

RollbackTransactionOutcomeCallable RDSDataServiceClient::RollbackTransactionCallable(const RollbackTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RollbackTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RollbackTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RDSDataServiceClient::RollbackTransactionAsync(const RollbackTransactionRequest& request, const RollbackTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RollbackTransactionAsyncHelper( request, handler, context ); } );
}

void RDSDataServiceClient::RollbackTransactionAsyncHelper(const RollbackTransactionRequest& request, const RollbackTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RollbackTransaction(request), context);
}

