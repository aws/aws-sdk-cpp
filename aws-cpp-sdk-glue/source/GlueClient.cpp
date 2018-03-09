﻿/*
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
#include <aws/glue/GlueClient.h>
#include <aws/glue/GlueEndpoint.h>
#include <aws/glue/GlueErrorMarshaller.h>
#include <aws/glue/model/BatchCreatePartitionRequest.h>
#include <aws/glue/model/BatchDeleteConnectionRequest.h>
#include <aws/glue/model/BatchDeletePartitionRequest.h>
#include <aws/glue/model/BatchDeleteTableRequest.h>
#include <aws/glue/model/BatchDeleteTableVersionRequest.h>
#include <aws/glue/model/BatchGetPartitionRequest.h>
#include <aws/glue/model/BatchStopJobRunRequest.h>
#include <aws/glue/model/CreateClassifierRequest.h>
#include <aws/glue/model/CreateConnectionRequest.h>
#include <aws/glue/model/CreateCrawlerRequest.h>
#include <aws/glue/model/CreateDatabaseRequest.h>
#include <aws/glue/model/CreateDevEndpointRequest.h>
#include <aws/glue/model/CreateJobRequest.h>
#include <aws/glue/model/CreatePartitionRequest.h>
#include <aws/glue/model/CreateScriptRequest.h>
#include <aws/glue/model/CreateTableRequest.h>
#include <aws/glue/model/CreateTriggerRequest.h>
#include <aws/glue/model/CreateUserDefinedFunctionRequest.h>
#include <aws/glue/model/DeleteClassifierRequest.h>
#include <aws/glue/model/DeleteConnectionRequest.h>
#include <aws/glue/model/DeleteCrawlerRequest.h>
#include <aws/glue/model/DeleteDatabaseRequest.h>
#include <aws/glue/model/DeleteDevEndpointRequest.h>
#include <aws/glue/model/DeleteJobRequest.h>
#include <aws/glue/model/DeletePartitionRequest.h>
#include <aws/glue/model/DeleteTableRequest.h>
#include <aws/glue/model/DeleteTableVersionRequest.h>
#include <aws/glue/model/DeleteTriggerRequest.h>
#include <aws/glue/model/DeleteUserDefinedFunctionRequest.h>
#include <aws/glue/model/GetCatalogImportStatusRequest.h>
#include <aws/glue/model/GetClassifierRequest.h>
#include <aws/glue/model/GetClassifiersRequest.h>
#include <aws/glue/model/GetConnectionRequest.h>
#include <aws/glue/model/GetConnectionsRequest.h>
#include <aws/glue/model/GetCrawlerRequest.h>
#include <aws/glue/model/GetCrawlerMetricsRequest.h>
#include <aws/glue/model/GetCrawlersRequest.h>
#include <aws/glue/model/GetDatabaseRequest.h>
#include <aws/glue/model/GetDatabasesRequest.h>
#include <aws/glue/model/GetDataflowGraphRequest.h>
#include <aws/glue/model/GetDevEndpointRequest.h>
#include <aws/glue/model/GetDevEndpointsRequest.h>
#include <aws/glue/model/GetJobRequest.h>
#include <aws/glue/model/GetJobRunRequest.h>
#include <aws/glue/model/GetJobRunsRequest.h>
#include <aws/glue/model/GetJobsRequest.h>
#include <aws/glue/model/GetMappingRequest.h>
#include <aws/glue/model/GetPartitionRequest.h>
#include <aws/glue/model/GetPartitionsRequest.h>
#include <aws/glue/model/GetPlanRequest.h>
#include <aws/glue/model/GetTableRequest.h>
#include <aws/glue/model/GetTableVersionRequest.h>
#include <aws/glue/model/GetTableVersionsRequest.h>
#include <aws/glue/model/GetTablesRequest.h>
#include <aws/glue/model/GetTriggerRequest.h>
#include <aws/glue/model/GetTriggersRequest.h>
#include <aws/glue/model/GetUserDefinedFunctionRequest.h>
#include <aws/glue/model/GetUserDefinedFunctionsRequest.h>
#include <aws/glue/model/ImportCatalogToGlueRequest.h>
#include <aws/glue/model/ResetJobBookmarkRequest.h>
#include <aws/glue/model/StartCrawlerRequest.h>
#include <aws/glue/model/StartCrawlerScheduleRequest.h>
#include <aws/glue/model/StartJobRunRequest.h>
#include <aws/glue/model/StartTriggerRequest.h>
#include <aws/glue/model/StopCrawlerRequest.h>
#include <aws/glue/model/StopCrawlerScheduleRequest.h>
#include <aws/glue/model/StopTriggerRequest.h>
#include <aws/glue/model/UpdateClassifierRequest.h>
#include <aws/glue/model/UpdateConnectionRequest.h>
#include <aws/glue/model/UpdateCrawlerRequest.h>
#include <aws/glue/model/UpdateCrawlerScheduleRequest.h>
#include <aws/glue/model/UpdateDatabaseRequest.h>
#include <aws/glue/model/UpdateDevEndpointRequest.h>
#include <aws/glue/model/UpdateJobRequest.h>
#include <aws/glue/model/UpdatePartitionRequest.h>
#include <aws/glue/model/UpdateTableRequest.h>
#include <aws/glue/model/UpdateTriggerRequest.h>
#include <aws/glue/model/UpdateUserDefinedFunctionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glue;
using namespace Aws::Glue::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "glue";
static const char* ALLOCATION_TAG = "GlueClient";


GlueClient::GlueClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueClient::GlueClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueClient::GlueClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueClient::~GlueClient()
{
}

void GlueClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << GlueEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchCreatePartitionOutcome GlueClient::BatchCreatePartition(const BatchCreatePartitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchCreatePartitionOutcome(BatchCreatePartitionResult(outcome.GetResult()));
  }
  else
  {
    return BatchCreatePartitionOutcome(outcome.GetError());
  }
}

BatchCreatePartitionOutcomeCallable GlueClient::BatchCreatePartitionCallable(const BatchCreatePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreatePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreatePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::BatchCreatePartitionAsync(const BatchCreatePartitionRequest& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreatePartitionAsyncHelper( request, handler, context ); } );
}

void GlueClient::BatchCreatePartitionAsyncHelper(const BatchCreatePartitionRequest& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreatePartition(request), context);
}

BatchDeleteConnectionOutcome GlueClient::BatchDeleteConnection(const BatchDeleteConnectionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDeleteConnectionOutcome(BatchDeleteConnectionResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeleteConnectionOutcome(outcome.GetError());
  }
}

BatchDeleteConnectionOutcomeCallable GlueClient::BatchDeleteConnectionCallable(const BatchDeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::BatchDeleteConnectionAsync(const BatchDeleteConnectionRequest& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteConnectionAsyncHelper( request, handler, context ); } );
}

void GlueClient::BatchDeleteConnectionAsyncHelper(const BatchDeleteConnectionRequest& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteConnection(request), context);
}

BatchDeletePartitionOutcome GlueClient::BatchDeletePartition(const BatchDeletePartitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDeletePartitionOutcome(BatchDeletePartitionResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeletePartitionOutcome(outcome.GetError());
  }
}

BatchDeletePartitionOutcomeCallable GlueClient::BatchDeletePartitionCallable(const BatchDeletePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeletePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeletePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::BatchDeletePartitionAsync(const BatchDeletePartitionRequest& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeletePartitionAsyncHelper( request, handler, context ); } );
}

void GlueClient::BatchDeletePartitionAsyncHelper(const BatchDeletePartitionRequest& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeletePartition(request), context);
}

BatchDeleteTableOutcome GlueClient::BatchDeleteTable(const BatchDeleteTableRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDeleteTableOutcome(BatchDeleteTableResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeleteTableOutcome(outcome.GetError());
  }
}

BatchDeleteTableOutcomeCallable GlueClient::BatchDeleteTableCallable(const BatchDeleteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::BatchDeleteTableAsync(const BatchDeleteTableRequest& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteTableAsyncHelper( request, handler, context ); } );
}

void GlueClient::BatchDeleteTableAsyncHelper(const BatchDeleteTableRequest& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteTable(request), context);
}

BatchDeleteTableVersionOutcome GlueClient::BatchDeleteTableVersion(const BatchDeleteTableVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDeleteTableVersionOutcome(BatchDeleteTableVersionResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeleteTableVersionOutcome(outcome.GetError());
  }
}

BatchDeleteTableVersionOutcomeCallable GlueClient::BatchDeleteTableVersionCallable(const BatchDeleteTableVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteTableVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteTableVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::BatchDeleteTableVersionAsync(const BatchDeleteTableVersionRequest& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteTableVersionAsyncHelper( request, handler, context ); } );
}

void GlueClient::BatchDeleteTableVersionAsyncHelper(const BatchDeleteTableVersionRequest& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteTableVersion(request), context);
}

BatchGetPartitionOutcome GlueClient::BatchGetPartition(const BatchGetPartitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetPartitionOutcome(BatchGetPartitionResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetPartitionOutcome(outcome.GetError());
  }
}

BatchGetPartitionOutcomeCallable GlueClient::BatchGetPartitionCallable(const BatchGetPartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetPartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetPartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::BatchGetPartitionAsync(const BatchGetPartitionRequest& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetPartitionAsyncHelper( request, handler, context ); } );
}

void GlueClient::BatchGetPartitionAsyncHelper(const BatchGetPartitionRequest& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetPartition(request), context);
}

BatchStopJobRunOutcome GlueClient::BatchStopJobRun(const BatchStopJobRunRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchStopJobRunOutcome(BatchStopJobRunResult(outcome.GetResult()));
  }
  else
  {
    return BatchStopJobRunOutcome(outcome.GetError());
  }
}

BatchStopJobRunOutcomeCallable GlueClient::BatchStopJobRunCallable(const BatchStopJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchStopJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchStopJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::BatchStopJobRunAsync(const BatchStopJobRunRequest& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchStopJobRunAsyncHelper( request, handler, context ); } );
}

void GlueClient::BatchStopJobRunAsyncHelper(const BatchStopJobRunRequest& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchStopJobRun(request), context);
}

CreateClassifierOutcome GlueClient::CreateClassifier(const CreateClassifierRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateClassifierOutcome(CreateClassifierResult(outcome.GetResult()));
  }
  else
  {
    return CreateClassifierOutcome(outcome.GetError());
  }
}

CreateClassifierOutcomeCallable GlueClient::CreateClassifierCallable(const CreateClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateClassifierAsync(const CreateClassifierRequest& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateClassifierAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateClassifierAsyncHelper(const CreateClassifierRequest& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateClassifier(request), context);
}

CreateConnectionOutcome GlueClient::CreateConnection(const CreateConnectionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConnectionOutcome(CreateConnectionResult(outcome.GetResult()));
  }
  else
  {
    return CreateConnectionOutcome(outcome.GetError());
  }
}

CreateConnectionOutcomeCallable GlueClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectionAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateConnectionAsyncHelper(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnection(request), context);
}

CreateCrawlerOutcome GlueClient::CreateCrawler(const CreateCrawlerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCrawlerOutcome(CreateCrawlerResult(outcome.GetResult()));
  }
  else
  {
    return CreateCrawlerOutcome(outcome.GetError());
  }
}

CreateCrawlerOutcomeCallable GlueClient::CreateCrawlerCallable(const CreateCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateCrawlerAsync(const CreateCrawlerRequest& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCrawlerAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateCrawlerAsyncHelper(const CreateCrawlerRequest& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCrawler(request), context);
}

CreateDatabaseOutcome GlueClient::CreateDatabase(const CreateDatabaseRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatabaseOutcome(CreateDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatabaseOutcome(outcome.GetError());
  }
}

CreateDatabaseOutcomeCallable GlueClient::CreateDatabaseCallable(const CreateDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatabaseAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateDatabaseAsyncHelper(const CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDatabase(request), context);
}

CreateDevEndpointOutcome GlueClient::CreateDevEndpoint(const CreateDevEndpointRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDevEndpointOutcome(CreateDevEndpointResult(outcome.GetResult()));
  }
  else
  {
    return CreateDevEndpointOutcome(outcome.GetError());
  }
}

CreateDevEndpointOutcomeCallable GlueClient::CreateDevEndpointCallable(const CreateDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateDevEndpointAsync(const CreateDevEndpointRequest& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDevEndpointAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateDevEndpointAsyncHelper(const CreateDevEndpointRequest& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDevEndpoint(request), context);
}

CreateJobOutcome GlueClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateJobOutcome(CreateJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateJobOutcome(outcome.GetError());
  }
}

CreateJobOutcomeCallable GlueClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateJobAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateJobAsyncHelper(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateJob(request), context);
}

CreatePartitionOutcome GlueClient::CreatePartition(const CreatePartitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePartitionOutcome(CreatePartitionResult(outcome.GetResult()));
  }
  else
  {
    return CreatePartitionOutcome(outcome.GetError());
  }
}

CreatePartitionOutcomeCallable GlueClient::CreatePartitionCallable(const CreatePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreatePartitionAsync(const CreatePartitionRequest& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePartitionAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreatePartitionAsyncHelper(const CreatePartitionRequest& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePartition(request), context);
}

CreateScriptOutcome GlueClient::CreateScript(const CreateScriptRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateScriptOutcome(CreateScriptResult(outcome.GetResult()));
  }
  else
  {
    return CreateScriptOutcome(outcome.GetError());
  }
}

CreateScriptOutcomeCallable GlueClient::CreateScriptCallable(const CreateScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateScriptAsync(const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateScriptAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateScriptAsyncHelper(const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateScript(request), context);
}

CreateTableOutcome GlueClient::CreateTable(const CreateTableRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTableOutcome(CreateTableResult(outcome.GetResult()));
  }
  else
  {
    return CreateTableOutcome(outcome.GetError());
  }
}

CreateTableOutcomeCallable GlueClient::CreateTableCallable(const CreateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTableAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateTableAsyncHelper(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTable(request), context);
}

CreateTriggerOutcome GlueClient::CreateTrigger(const CreateTriggerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTriggerOutcome(CreateTriggerResult(outcome.GetResult()));
  }
  else
  {
    return CreateTriggerOutcome(outcome.GetError());
  }
}

CreateTriggerOutcomeCallable GlueClient::CreateTriggerCallable(const CreateTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateTriggerAsync(const CreateTriggerRequest& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTriggerAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateTriggerAsyncHelper(const CreateTriggerRequest& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrigger(request), context);
}

CreateUserDefinedFunctionOutcome GlueClient::CreateUserDefinedFunction(const CreateUserDefinedFunctionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserDefinedFunctionOutcome(CreateUserDefinedFunctionResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserDefinedFunctionOutcome(outcome.GetError());
  }
}

CreateUserDefinedFunctionOutcomeCallable GlueClient::CreateUserDefinedFunctionCallable(const CreateUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::CreateUserDefinedFunctionAsync(const CreateUserDefinedFunctionRequest& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserDefinedFunctionAsyncHelper( request, handler, context ); } );
}

void GlueClient::CreateUserDefinedFunctionAsyncHelper(const CreateUserDefinedFunctionRequest& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserDefinedFunction(request), context);
}

DeleteClassifierOutcome GlueClient::DeleteClassifier(const DeleteClassifierRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteClassifierOutcome(DeleteClassifierResult(outcome.GetResult()));
  }
  else
  {
    return DeleteClassifierOutcome(outcome.GetError());
  }
}

DeleteClassifierOutcomeCallable GlueClient::DeleteClassifierCallable(const DeleteClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteClassifierAsync(const DeleteClassifierRequest& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteClassifierAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteClassifierAsyncHelper(const DeleteClassifierRequest& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteClassifier(request), context);
}

DeleteConnectionOutcome GlueClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConnectionOutcome(DeleteConnectionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConnectionOutcome(outcome.GetError());
  }
}

DeleteConnectionOutcomeCallable GlueClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectionAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteConnectionAsyncHelper(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnection(request), context);
}

DeleteCrawlerOutcome GlueClient::DeleteCrawler(const DeleteCrawlerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCrawlerOutcome(DeleteCrawlerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCrawlerOutcome(outcome.GetError());
  }
}

DeleteCrawlerOutcomeCallable GlueClient::DeleteCrawlerCallable(const DeleteCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteCrawlerAsync(const DeleteCrawlerRequest& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCrawlerAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteCrawlerAsyncHelper(const DeleteCrawlerRequest& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCrawler(request), context);
}

DeleteDatabaseOutcome GlueClient::DeleteDatabase(const DeleteDatabaseRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatabaseOutcome(DeleteDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDatabaseOutcome(outcome.GetError());
  }
}

DeleteDatabaseOutcomeCallable GlueClient::DeleteDatabaseCallable(const DeleteDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatabaseAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteDatabaseAsyncHelper(const DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDatabase(request), context);
}

DeleteDevEndpointOutcome GlueClient::DeleteDevEndpoint(const DeleteDevEndpointRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDevEndpointOutcome(DeleteDevEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDevEndpointOutcome(outcome.GetError());
  }
}

DeleteDevEndpointOutcomeCallable GlueClient::DeleteDevEndpointCallable(const DeleteDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteDevEndpointAsync(const DeleteDevEndpointRequest& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDevEndpointAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteDevEndpointAsyncHelper(const DeleteDevEndpointRequest& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDevEndpoint(request), context);
}

DeleteJobOutcome GlueClient::DeleteJob(const DeleteJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteJobOutcome(DeleteJobResult(outcome.GetResult()));
  }
  else
  {
    return DeleteJobOutcome(outcome.GetError());
  }
}

DeleteJobOutcomeCallable GlueClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteJobAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteJobAsyncHelper(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteJob(request), context);
}

DeletePartitionOutcome GlueClient::DeletePartition(const DeletePartitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePartitionOutcome(DeletePartitionResult(outcome.GetResult()));
  }
  else
  {
    return DeletePartitionOutcome(outcome.GetError());
  }
}

DeletePartitionOutcomeCallable GlueClient::DeletePartitionCallable(const DeletePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeletePartitionAsync(const DeletePartitionRequest& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePartitionAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeletePartitionAsyncHelper(const DeletePartitionRequest& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePartition(request), context);
}

DeleteTableOutcome GlueClient::DeleteTable(const DeleteTableRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTableOutcome(DeleteTableResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTableOutcome(outcome.GetError());
  }
}

DeleteTableOutcomeCallable GlueClient::DeleteTableCallable(const DeleteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTableAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteTableAsyncHelper(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTable(request), context);
}

DeleteTableVersionOutcome GlueClient::DeleteTableVersion(const DeleteTableVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTableVersionOutcome(DeleteTableVersionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTableVersionOutcome(outcome.GetError());
  }
}

DeleteTableVersionOutcomeCallable GlueClient::DeleteTableVersionCallable(const DeleteTableVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTableVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTableVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteTableVersionAsync(const DeleteTableVersionRequest& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTableVersionAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteTableVersionAsyncHelper(const DeleteTableVersionRequest& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTableVersion(request), context);
}

DeleteTriggerOutcome GlueClient::DeleteTrigger(const DeleteTriggerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTriggerOutcome(DeleteTriggerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTriggerOutcome(outcome.GetError());
  }
}

DeleteTriggerOutcomeCallable GlueClient::DeleteTriggerCallable(const DeleteTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteTriggerAsync(const DeleteTriggerRequest& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTriggerAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteTriggerAsyncHelper(const DeleteTriggerRequest& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrigger(request), context);
}

DeleteUserDefinedFunctionOutcome GlueClient::DeleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserDefinedFunctionOutcome(DeleteUserDefinedFunctionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserDefinedFunctionOutcome(outcome.GetError());
  }
}

DeleteUserDefinedFunctionOutcomeCallable GlueClient::DeleteUserDefinedFunctionCallable(const DeleteUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::DeleteUserDefinedFunctionAsync(const DeleteUserDefinedFunctionRequest& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserDefinedFunctionAsyncHelper( request, handler, context ); } );
}

void GlueClient::DeleteUserDefinedFunctionAsyncHelper(const DeleteUserDefinedFunctionRequest& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserDefinedFunction(request), context);
}

GetCatalogImportStatusOutcome GlueClient::GetCatalogImportStatus(const GetCatalogImportStatusRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCatalogImportStatusOutcome(GetCatalogImportStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetCatalogImportStatusOutcome(outcome.GetError());
  }
}

GetCatalogImportStatusOutcomeCallable GlueClient::GetCatalogImportStatusCallable(const GetCatalogImportStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCatalogImportStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCatalogImportStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetCatalogImportStatusAsync(const GetCatalogImportStatusRequest& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCatalogImportStatusAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetCatalogImportStatusAsyncHelper(const GetCatalogImportStatusRequest& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCatalogImportStatus(request), context);
}

GetClassifierOutcome GlueClient::GetClassifier(const GetClassifierRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetClassifierOutcome(GetClassifierResult(outcome.GetResult()));
  }
  else
  {
    return GetClassifierOutcome(outcome.GetError());
  }
}

GetClassifierOutcomeCallable GlueClient::GetClassifierCallable(const GetClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetClassifierAsync(const GetClassifierRequest& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetClassifierAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetClassifierAsyncHelper(const GetClassifierRequest& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetClassifier(request), context);
}

GetClassifiersOutcome GlueClient::GetClassifiers(const GetClassifiersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetClassifiersOutcome(GetClassifiersResult(outcome.GetResult()));
  }
  else
  {
    return GetClassifiersOutcome(outcome.GetError());
  }
}

GetClassifiersOutcomeCallable GlueClient::GetClassifiersCallable(const GetClassifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClassifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClassifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetClassifiersAsync(const GetClassifiersRequest& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetClassifiersAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetClassifiersAsyncHelper(const GetClassifiersRequest& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetClassifiers(request), context);
}

GetConnectionOutcome GlueClient::GetConnection(const GetConnectionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConnectionOutcome(GetConnectionResult(outcome.GetResult()));
  }
  else
  {
    return GetConnectionOutcome(outcome.GetError());
  }
}

GetConnectionOutcomeCallable GlueClient::GetConnectionCallable(const GetConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetConnectionAsync(const GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectionAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetConnectionAsyncHelper(const GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnection(request), context);
}

GetConnectionsOutcome GlueClient::GetConnections(const GetConnectionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConnectionsOutcome(GetConnectionsResult(outcome.GetResult()));
  }
  else
  {
    return GetConnectionsOutcome(outcome.GetError());
  }
}

GetConnectionsOutcomeCallable GlueClient::GetConnectionsCallable(const GetConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetConnectionsAsync(const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectionsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetConnectionsAsyncHelper(const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnections(request), context);
}

GetCrawlerOutcome GlueClient::GetCrawler(const GetCrawlerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCrawlerOutcome(GetCrawlerResult(outcome.GetResult()));
  }
  else
  {
    return GetCrawlerOutcome(outcome.GetError());
  }
}

GetCrawlerOutcomeCallable GlueClient::GetCrawlerCallable(const GetCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetCrawlerAsync(const GetCrawlerRequest& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCrawlerAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetCrawlerAsyncHelper(const GetCrawlerRequest& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCrawler(request), context);
}

GetCrawlerMetricsOutcome GlueClient::GetCrawlerMetrics(const GetCrawlerMetricsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCrawlerMetricsOutcome(GetCrawlerMetricsResult(outcome.GetResult()));
  }
  else
  {
    return GetCrawlerMetricsOutcome(outcome.GetError());
  }
}

GetCrawlerMetricsOutcomeCallable GlueClient::GetCrawlerMetricsCallable(const GetCrawlerMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCrawlerMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCrawlerMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetCrawlerMetricsAsync(const GetCrawlerMetricsRequest& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCrawlerMetricsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetCrawlerMetricsAsyncHelper(const GetCrawlerMetricsRequest& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCrawlerMetrics(request), context);
}

GetCrawlersOutcome GlueClient::GetCrawlers(const GetCrawlersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCrawlersOutcome(GetCrawlersResult(outcome.GetResult()));
  }
  else
  {
    return GetCrawlersOutcome(outcome.GetError());
  }
}

GetCrawlersOutcomeCallable GlueClient::GetCrawlersCallable(const GetCrawlersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCrawlersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCrawlers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetCrawlersAsync(const GetCrawlersRequest& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCrawlersAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetCrawlersAsyncHelper(const GetCrawlersRequest& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCrawlers(request), context);
}

GetDatabaseOutcome GlueClient::GetDatabase(const GetDatabaseRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDatabaseOutcome(GetDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return GetDatabaseOutcome(outcome.GetError());
  }
}

GetDatabaseOutcomeCallable GlueClient::GetDatabaseCallable(const GetDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDatabaseAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetDatabaseAsyncHelper(const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDatabase(request), context);
}

GetDatabasesOutcome GlueClient::GetDatabases(const GetDatabasesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDatabasesOutcome(GetDatabasesResult(outcome.GetResult()));
  }
  else
  {
    return GetDatabasesOutcome(outcome.GetError());
  }
}

GetDatabasesOutcomeCallable GlueClient::GetDatabasesCallable(const GetDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetDatabasesAsync(const GetDatabasesRequest& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDatabasesAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetDatabasesAsyncHelper(const GetDatabasesRequest& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDatabases(request), context);
}

GetDataflowGraphOutcome GlueClient::GetDataflowGraph(const GetDataflowGraphRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDataflowGraphOutcome(GetDataflowGraphResult(outcome.GetResult()));
  }
  else
  {
    return GetDataflowGraphOutcome(outcome.GetError());
  }
}

GetDataflowGraphOutcomeCallable GlueClient::GetDataflowGraphCallable(const GetDataflowGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataflowGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataflowGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetDataflowGraphAsync(const GetDataflowGraphRequest& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataflowGraphAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetDataflowGraphAsyncHelper(const GetDataflowGraphRequest& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataflowGraph(request), context);
}

GetDevEndpointOutcome GlueClient::GetDevEndpoint(const GetDevEndpointRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDevEndpointOutcome(GetDevEndpointResult(outcome.GetResult()));
  }
  else
  {
    return GetDevEndpointOutcome(outcome.GetError());
  }
}

GetDevEndpointOutcomeCallable GlueClient::GetDevEndpointCallable(const GetDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetDevEndpointAsync(const GetDevEndpointRequest& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDevEndpointAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetDevEndpointAsyncHelper(const GetDevEndpointRequest& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevEndpoint(request), context);
}

GetDevEndpointsOutcome GlueClient::GetDevEndpoints(const GetDevEndpointsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDevEndpointsOutcome(GetDevEndpointsResult(outcome.GetResult()));
  }
  else
  {
    return GetDevEndpointsOutcome(outcome.GetError());
  }
}

GetDevEndpointsOutcomeCallable GlueClient::GetDevEndpointsCallable(const GetDevEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetDevEndpointsAsync(const GetDevEndpointsRequest& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDevEndpointsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetDevEndpointsAsyncHelper(const GetDevEndpointsRequest& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevEndpoints(request), context);
}

GetJobOutcome GlueClient::GetJob(const GetJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetJobOutcome(GetJobResult(outcome.GetResult()));
  }
  else
  {
    return GetJobOutcome(outcome.GetError());
  }
}

GetJobOutcomeCallable GlueClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetJobAsyncHelper(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJob(request), context);
}

GetJobRunOutcome GlueClient::GetJobRun(const GetJobRunRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetJobRunOutcome(GetJobRunResult(outcome.GetResult()));
  }
  else
  {
    return GetJobRunOutcome(outcome.GetError());
  }
}

GetJobRunOutcomeCallable GlueClient::GetJobRunCallable(const GetJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetJobRunAsync(const GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobRunAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetJobRunAsyncHelper(const GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJobRun(request), context);
}

GetJobRunsOutcome GlueClient::GetJobRuns(const GetJobRunsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetJobRunsOutcome(GetJobRunsResult(outcome.GetResult()));
  }
  else
  {
    return GetJobRunsOutcome(outcome.GetError());
  }
}

GetJobRunsOutcomeCallable GlueClient::GetJobRunsCallable(const GetJobRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetJobRunsAsync(const GetJobRunsRequest& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobRunsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetJobRunsAsyncHelper(const GetJobRunsRequest& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJobRuns(request), context);
}

GetJobsOutcome GlueClient::GetJobs(const GetJobsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetJobsOutcome(GetJobsResult(outcome.GetResult()));
  }
  else
  {
    return GetJobsOutcome(outcome.GetError());
  }
}

GetJobsOutcomeCallable GlueClient::GetJobsCallable(const GetJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetJobsAsync(const GetJobsRequest& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetJobsAsyncHelper(const GetJobsRequest& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJobs(request), context);
}

GetMappingOutcome GlueClient::GetMapping(const GetMappingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMappingOutcome(GetMappingResult(outcome.GetResult()));
  }
  else
  {
    return GetMappingOutcome(outcome.GetError());
  }
}

GetMappingOutcomeCallable GlueClient::GetMappingCallable(const GetMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetMappingAsync(const GetMappingRequest& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMappingAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetMappingAsyncHelper(const GetMappingRequest& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMapping(request), context);
}

GetPartitionOutcome GlueClient::GetPartition(const GetPartitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPartitionOutcome(GetPartitionResult(outcome.GetResult()));
  }
  else
  {
    return GetPartitionOutcome(outcome.GetError());
  }
}

GetPartitionOutcomeCallable GlueClient::GetPartitionCallable(const GetPartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetPartitionAsync(const GetPartitionRequest& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPartitionAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetPartitionAsyncHelper(const GetPartitionRequest& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPartition(request), context);
}

GetPartitionsOutcome GlueClient::GetPartitions(const GetPartitionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPartitionsOutcome(GetPartitionsResult(outcome.GetResult()));
  }
  else
  {
    return GetPartitionsOutcome(outcome.GetError());
  }
}

GetPartitionsOutcomeCallable GlueClient::GetPartitionsCallable(const GetPartitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPartitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPartitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetPartitionsAsync(const GetPartitionsRequest& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPartitionsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetPartitionsAsyncHelper(const GetPartitionsRequest& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPartitions(request), context);
}

GetPlanOutcome GlueClient::GetPlan(const GetPlanRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPlanOutcome(GetPlanResult(outcome.GetResult()));
  }
  else
  {
    return GetPlanOutcome(outcome.GetError());
  }
}

GetPlanOutcomeCallable GlueClient::GetPlanCallable(const GetPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetPlanAsync(const GetPlanRequest& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPlanAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetPlanAsyncHelper(const GetPlanRequest& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPlan(request), context);
}

GetTableOutcome GlueClient::GetTable(const GetTableRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTableOutcome(GetTableResult(outcome.GetResult()));
  }
  else
  {
    return GetTableOutcome(outcome.GetError());
  }
}

GetTableOutcomeCallable GlueClient::GetTableCallable(const GetTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetTableAsync(const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTableAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetTableAsyncHelper(const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTable(request), context);
}

GetTableVersionOutcome GlueClient::GetTableVersion(const GetTableVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTableVersionOutcome(GetTableVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetTableVersionOutcome(outcome.GetError());
  }
}

GetTableVersionOutcomeCallable GlueClient::GetTableVersionCallable(const GetTableVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetTableVersionAsync(const GetTableVersionRequest& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTableVersionAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetTableVersionAsyncHelper(const GetTableVersionRequest& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTableVersion(request), context);
}

GetTableVersionsOutcome GlueClient::GetTableVersions(const GetTableVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTableVersionsOutcome(GetTableVersionsResult(outcome.GetResult()));
  }
  else
  {
    return GetTableVersionsOutcome(outcome.GetError());
  }
}

GetTableVersionsOutcomeCallable GlueClient::GetTableVersionsCallable(const GetTableVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetTableVersionsAsync(const GetTableVersionsRequest& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTableVersionsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetTableVersionsAsyncHelper(const GetTableVersionsRequest& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTableVersions(request), context);
}

GetTablesOutcome GlueClient::GetTables(const GetTablesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTablesOutcome(GetTablesResult(outcome.GetResult()));
  }
  else
  {
    return GetTablesOutcome(outcome.GetError());
  }
}

GetTablesOutcomeCallable GlueClient::GetTablesCallable(const GetTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetTablesAsync(const GetTablesRequest& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTablesAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetTablesAsyncHelper(const GetTablesRequest& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTables(request), context);
}

GetTriggerOutcome GlueClient::GetTrigger(const GetTriggerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTriggerOutcome(GetTriggerResult(outcome.GetResult()));
  }
  else
  {
    return GetTriggerOutcome(outcome.GetError());
  }
}

GetTriggerOutcomeCallable GlueClient::GetTriggerCallable(const GetTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetTriggerAsync(const GetTriggerRequest& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTriggerAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetTriggerAsyncHelper(const GetTriggerRequest& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrigger(request), context);
}

GetTriggersOutcome GlueClient::GetTriggers(const GetTriggersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTriggersOutcome(GetTriggersResult(outcome.GetResult()));
  }
  else
  {
    return GetTriggersOutcome(outcome.GetError());
  }
}

GetTriggersOutcomeCallable GlueClient::GetTriggersCallable(const GetTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetTriggersAsync(const GetTriggersRequest& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTriggersAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetTriggersAsyncHelper(const GetTriggersRequest& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTriggers(request), context);
}

GetUserDefinedFunctionOutcome GlueClient::GetUserDefinedFunction(const GetUserDefinedFunctionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserDefinedFunctionOutcome(GetUserDefinedFunctionResult(outcome.GetResult()));
  }
  else
  {
    return GetUserDefinedFunctionOutcome(outcome.GetError());
  }
}

GetUserDefinedFunctionOutcomeCallable GlueClient::GetUserDefinedFunctionCallable(const GetUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetUserDefinedFunctionAsync(const GetUserDefinedFunctionRequest& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserDefinedFunctionAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetUserDefinedFunctionAsyncHelper(const GetUserDefinedFunctionRequest& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserDefinedFunction(request), context);
}

GetUserDefinedFunctionsOutcome GlueClient::GetUserDefinedFunctions(const GetUserDefinedFunctionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserDefinedFunctionsOutcome(GetUserDefinedFunctionsResult(outcome.GetResult()));
  }
  else
  {
    return GetUserDefinedFunctionsOutcome(outcome.GetError());
  }
}

GetUserDefinedFunctionsOutcomeCallable GlueClient::GetUserDefinedFunctionsCallable(const GetUserDefinedFunctionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserDefinedFunctionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserDefinedFunctions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::GetUserDefinedFunctionsAsync(const GetUserDefinedFunctionsRequest& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserDefinedFunctionsAsyncHelper( request, handler, context ); } );
}

void GlueClient::GetUserDefinedFunctionsAsyncHelper(const GetUserDefinedFunctionsRequest& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserDefinedFunctions(request), context);
}

ImportCatalogToGlueOutcome GlueClient::ImportCatalogToGlue(const ImportCatalogToGlueRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportCatalogToGlueOutcome(ImportCatalogToGlueResult(outcome.GetResult()));
  }
  else
  {
    return ImportCatalogToGlueOutcome(outcome.GetError());
  }
}

ImportCatalogToGlueOutcomeCallable GlueClient::ImportCatalogToGlueCallable(const ImportCatalogToGlueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCatalogToGlueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCatalogToGlue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::ImportCatalogToGlueAsync(const ImportCatalogToGlueRequest& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportCatalogToGlueAsyncHelper( request, handler, context ); } );
}

void GlueClient::ImportCatalogToGlueAsyncHelper(const ImportCatalogToGlueRequest& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportCatalogToGlue(request), context);
}

ResetJobBookmarkOutcome GlueClient::ResetJobBookmark(const ResetJobBookmarkRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResetJobBookmarkOutcome(ResetJobBookmarkResult(outcome.GetResult()));
  }
  else
  {
    return ResetJobBookmarkOutcome(outcome.GetError());
  }
}

ResetJobBookmarkOutcomeCallable GlueClient::ResetJobBookmarkCallable(const ResetJobBookmarkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetJobBookmarkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetJobBookmark(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::ResetJobBookmarkAsync(const ResetJobBookmarkRequest& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetJobBookmarkAsyncHelper( request, handler, context ); } );
}

void GlueClient::ResetJobBookmarkAsyncHelper(const ResetJobBookmarkRequest& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetJobBookmark(request), context);
}

StartCrawlerOutcome GlueClient::StartCrawler(const StartCrawlerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartCrawlerOutcome(StartCrawlerResult(outcome.GetResult()));
  }
  else
  {
    return StartCrawlerOutcome(outcome.GetError());
  }
}

StartCrawlerOutcomeCallable GlueClient::StartCrawlerCallable(const StartCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::StartCrawlerAsync(const StartCrawlerRequest& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartCrawlerAsyncHelper( request, handler, context ); } );
}

void GlueClient::StartCrawlerAsyncHelper(const StartCrawlerRequest& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartCrawler(request), context);
}

StartCrawlerScheduleOutcome GlueClient::StartCrawlerSchedule(const StartCrawlerScheduleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartCrawlerScheduleOutcome(StartCrawlerScheduleResult(outcome.GetResult()));
  }
  else
  {
    return StartCrawlerScheduleOutcome(outcome.GetError());
  }
}

StartCrawlerScheduleOutcomeCallable GlueClient::StartCrawlerScheduleCallable(const StartCrawlerScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCrawlerScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCrawlerSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::StartCrawlerScheduleAsync(const StartCrawlerScheduleRequest& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartCrawlerScheduleAsyncHelper( request, handler, context ); } );
}

void GlueClient::StartCrawlerScheduleAsyncHelper(const StartCrawlerScheduleRequest& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartCrawlerSchedule(request), context);
}

StartJobRunOutcome GlueClient::StartJobRun(const StartJobRunRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartJobRunOutcome(StartJobRunResult(outcome.GetResult()));
  }
  else
  {
    return StartJobRunOutcome(outcome.GetError());
  }
}

StartJobRunOutcomeCallable GlueClient::StartJobRunCallable(const StartJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::StartJobRunAsync(const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartJobRunAsyncHelper( request, handler, context ); } );
}

void GlueClient::StartJobRunAsyncHelper(const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartJobRun(request), context);
}

StartTriggerOutcome GlueClient::StartTrigger(const StartTriggerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartTriggerOutcome(StartTriggerResult(outcome.GetResult()));
  }
  else
  {
    return StartTriggerOutcome(outcome.GetError());
  }
}

StartTriggerOutcomeCallable GlueClient::StartTriggerCallable(const StartTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::StartTriggerAsync(const StartTriggerRequest& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTriggerAsyncHelper( request, handler, context ); } );
}

void GlueClient::StartTriggerAsyncHelper(const StartTriggerRequest& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTrigger(request), context);
}

StopCrawlerOutcome GlueClient::StopCrawler(const StopCrawlerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopCrawlerOutcome(StopCrawlerResult(outcome.GetResult()));
  }
  else
  {
    return StopCrawlerOutcome(outcome.GetError());
  }
}

StopCrawlerOutcomeCallable GlueClient::StopCrawlerCallable(const StopCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::StopCrawlerAsync(const StopCrawlerRequest& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopCrawlerAsyncHelper( request, handler, context ); } );
}

void GlueClient::StopCrawlerAsyncHelper(const StopCrawlerRequest& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopCrawler(request), context);
}

StopCrawlerScheduleOutcome GlueClient::StopCrawlerSchedule(const StopCrawlerScheduleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopCrawlerScheduleOutcome(StopCrawlerScheduleResult(outcome.GetResult()));
  }
  else
  {
    return StopCrawlerScheduleOutcome(outcome.GetError());
  }
}

StopCrawlerScheduleOutcomeCallable GlueClient::StopCrawlerScheduleCallable(const StopCrawlerScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCrawlerScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCrawlerSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::StopCrawlerScheduleAsync(const StopCrawlerScheduleRequest& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopCrawlerScheduleAsyncHelper( request, handler, context ); } );
}

void GlueClient::StopCrawlerScheduleAsyncHelper(const StopCrawlerScheduleRequest& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopCrawlerSchedule(request), context);
}

StopTriggerOutcome GlueClient::StopTrigger(const StopTriggerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopTriggerOutcome(StopTriggerResult(outcome.GetResult()));
  }
  else
  {
    return StopTriggerOutcome(outcome.GetError());
  }
}

StopTriggerOutcomeCallable GlueClient::StopTriggerCallable(const StopTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::StopTriggerAsync(const StopTriggerRequest& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopTriggerAsyncHelper( request, handler, context ); } );
}

void GlueClient::StopTriggerAsyncHelper(const StopTriggerRequest& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopTrigger(request), context);
}

UpdateClassifierOutcome GlueClient::UpdateClassifier(const UpdateClassifierRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateClassifierOutcome(UpdateClassifierResult(outcome.GetResult()));
  }
  else
  {
    return UpdateClassifierOutcome(outcome.GetError());
  }
}

UpdateClassifierOutcomeCallable GlueClient::UpdateClassifierCallable(const UpdateClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateClassifierAsync(const UpdateClassifierRequest& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClassifierAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateClassifierAsyncHelper(const UpdateClassifierRequest& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateClassifier(request), context);
}

UpdateConnectionOutcome GlueClient::UpdateConnection(const UpdateConnectionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConnectionOutcome(UpdateConnectionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConnectionOutcome(outcome.GetError());
  }
}

UpdateConnectionOutcomeCallable GlueClient::UpdateConnectionCallable(const UpdateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConnectionAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateConnectionAsyncHelper(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConnection(request), context);
}

UpdateCrawlerOutcome GlueClient::UpdateCrawler(const UpdateCrawlerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCrawlerOutcome(UpdateCrawlerResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCrawlerOutcome(outcome.GetError());
  }
}

UpdateCrawlerOutcomeCallable GlueClient::UpdateCrawlerCallable(const UpdateCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateCrawlerAsync(const UpdateCrawlerRequest& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCrawlerAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateCrawlerAsyncHelper(const UpdateCrawlerRequest& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCrawler(request), context);
}

UpdateCrawlerScheduleOutcome GlueClient::UpdateCrawlerSchedule(const UpdateCrawlerScheduleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCrawlerScheduleOutcome(UpdateCrawlerScheduleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCrawlerScheduleOutcome(outcome.GetError());
  }
}

UpdateCrawlerScheduleOutcomeCallable GlueClient::UpdateCrawlerScheduleCallable(const UpdateCrawlerScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCrawlerScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCrawlerSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateCrawlerScheduleAsync(const UpdateCrawlerScheduleRequest& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCrawlerScheduleAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateCrawlerScheduleAsyncHelper(const UpdateCrawlerScheduleRequest& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCrawlerSchedule(request), context);
}

UpdateDatabaseOutcome GlueClient::UpdateDatabase(const UpdateDatabaseRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDatabaseOutcome(UpdateDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDatabaseOutcome(outcome.GetError());
  }
}

UpdateDatabaseOutcomeCallable GlueClient::UpdateDatabaseCallable(const UpdateDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateDatabaseAsync(const UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDatabaseAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateDatabaseAsyncHelper(const UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDatabase(request), context);
}

UpdateDevEndpointOutcome GlueClient::UpdateDevEndpoint(const UpdateDevEndpointRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDevEndpointOutcome(UpdateDevEndpointResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDevEndpointOutcome(outcome.GetError());
  }
}

UpdateDevEndpointOutcomeCallable GlueClient::UpdateDevEndpointCallable(const UpdateDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateDevEndpointAsync(const UpdateDevEndpointRequest& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDevEndpointAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateDevEndpointAsyncHelper(const UpdateDevEndpointRequest& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDevEndpoint(request), context);
}

UpdateJobOutcome GlueClient::UpdateJob(const UpdateJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateJobOutcome(UpdateJobResult(outcome.GetResult()));
  }
  else
  {
    return UpdateJobOutcome(outcome.GetError());
  }
}

UpdateJobOutcomeCallable GlueClient::UpdateJobCallable(const UpdateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateJobAsync(const UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateJobAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateJobAsyncHelper(const UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateJob(request), context);
}

UpdatePartitionOutcome GlueClient::UpdatePartition(const UpdatePartitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePartitionOutcome(UpdatePartitionResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePartitionOutcome(outcome.GetError());
  }
}

UpdatePartitionOutcomeCallable GlueClient::UpdatePartitionCallable(const UpdatePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdatePartitionAsync(const UpdatePartitionRequest& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePartitionAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdatePartitionAsyncHelper(const UpdatePartitionRequest& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePartition(request), context);
}

UpdateTableOutcome GlueClient::UpdateTable(const UpdateTableRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTableOutcome(UpdateTableResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTableOutcome(outcome.GetError());
  }
}

UpdateTableOutcomeCallable GlueClient::UpdateTableCallable(const UpdateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTableAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateTableAsyncHelper(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTable(request), context);
}

UpdateTriggerOutcome GlueClient::UpdateTrigger(const UpdateTriggerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTriggerOutcome(UpdateTriggerResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTriggerOutcome(outcome.GetError());
  }
}

UpdateTriggerOutcomeCallable GlueClient::UpdateTriggerCallable(const UpdateTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateTriggerAsync(const UpdateTriggerRequest& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTriggerAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateTriggerAsyncHelper(const UpdateTriggerRequest& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrigger(request), context);
}

UpdateUserDefinedFunctionOutcome GlueClient::UpdateUserDefinedFunction(const UpdateUserDefinedFunctionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserDefinedFunctionOutcome(UpdateUserDefinedFunctionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserDefinedFunctionOutcome(outcome.GetError());
  }
}

UpdateUserDefinedFunctionOutcomeCallable GlueClient::UpdateUserDefinedFunctionCallable(const UpdateUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClient::UpdateUserDefinedFunctionAsync(const UpdateUserDefinedFunctionRequest& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserDefinedFunctionAsyncHelper( request, handler, context ); } );
}

void GlueClient::UpdateUserDefinedFunctionAsyncHelper(const UpdateUserDefinedFunctionRequest& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserDefinedFunction(request), context);
}

