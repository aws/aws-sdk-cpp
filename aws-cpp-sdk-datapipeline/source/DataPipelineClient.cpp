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

#include <aws/datapipeline/DataPipelineClient.h>
#include <aws/datapipeline/DataPipelineEndpoint.h>
#include <aws/datapipeline/DataPipelineErrorMarshaller.h>
#include <aws/datapipeline/model/ActivatePipelineRequest.h>
#include <aws/datapipeline/model/AddTagsRequest.h>
#include <aws/datapipeline/model/CreatePipelineRequest.h>
#include <aws/datapipeline/model/DeactivatePipelineRequest.h>
#include <aws/datapipeline/model/DeletePipelineRequest.h>
#include <aws/datapipeline/model/DescribeObjectsRequest.h>
#include <aws/datapipeline/model/DescribePipelinesRequest.h>
#include <aws/datapipeline/model/EvaluateExpressionRequest.h>
#include <aws/datapipeline/model/GetPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/ListPipelinesRequest.h>
#include <aws/datapipeline/model/PollForTaskRequest.h>
#include <aws/datapipeline/model/PutPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/QueryObjectsRequest.h>
#include <aws/datapipeline/model/RemoveTagsRequest.h>
#include <aws/datapipeline/model/ReportTaskProgressRequest.h>
#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatRequest.h>
#include <aws/datapipeline/model/SetStatusRequest.h>
#include <aws/datapipeline/model/SetTaskStatusRequest.h>
#include <aws/datapipeline/model/ValidatePipelineDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataPipeline;
using namespace Aws::DataPipeline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "datapipeline";
static const char* ALLOCATION_TAG = "DataPipelineClient";


DataPipelineClient::DataPipelineClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DataPipelineClient::~DataPipelineClient()
{
}

void DataPipelineClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DataPipelineEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DataPipelineClient::OverrideEndpoint(const Aws::String& endpoint)
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

ActivatePipelineOutcome DataPipelineClient::ActivatePipeline(const ActivatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ActivatePipelineOutcome(ActivatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return ActivatePipelineOutcome(outcome.GetError());
  }
}

ActivatePipelineOutcomeCallable DataPipelineClient::ActivatePipelineCallable(const ActivatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ActivatePipelineAsync(const ActivatePipelineRequest& request, const ActivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivatePipelineAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::ActivatePipelineAsyncHelper(const ActivatePipelineRequest& request, const ActivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivatePipeline(request), context);
}

AddTagsOutcome DataPipelineClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable DataPipelineClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CreatePipelineOutcome DataPipelineClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePipelineOutcome(CreatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return CreatePipelineOutcome(outcome.GetError());
  }
}

CreatePipelineOutcomeCallable DataPipelineClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePipelineAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::CreatePipelineAsyncHelper(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePipeline(request), context);
}

DeactivatePipelineOutcome DataPipelineClient::DeactivatePipeline(const DeactivatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeactivatePipelineOutcome(DeactivatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return DeactivatePipelineOutcome(outcome.GetError());
  }
}

DeactivatePipelineOutcomeCallable DataPipelineClient::DeactivatePipelineCallable(const DeactivatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DeactivatePipelineAsync(const DeactivatePipelineRequest& request, const DeactivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeactivatePipelineAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::DeactivatePipelineAsyncHelper(const DeactivatePipelineRequest& request, const DeactivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivatePipeline(request), context);
}

DeletePipelineOutcome DataPipelineClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePipelineOutcome(NoResult());
  }
  else
  {
    return DeletePipelineOutcome(outcome.GetError());
  }
}

DeletePipelineOutcomeCallable DataPipelineClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePipelineAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::DeletePipelineAsyncHelper(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePipeline(request), context);
}

DescribeObjectsOutcome DataPipelineClient::DescribeObjects(const DescribeObjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeObjectsOutcome(DescribeObjectsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeObjectsOutcome(outcome.GetError());
  }
}

DescribeObjectsOutcomeCallable DataPipelineClient::DescribeObjectsCallable(const DescribeObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DescribeObjectsAsync(const DescribeObjectsRequest& request, const DescribeObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeObjectsAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::DescribeObjectsAsyncHelper(const DescribeObjectsRequest& request, const DescribeObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeObjects(request), context);
}

DescribePipelinesOutcome DataPipelineClient::DescribePipelines(const DescribePipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePipelinesOutcome(DescribePipelinesResult(outcome.GetResult()));
  }
  else
  {
    return DescribePipelinesOutcome(outcome.GetError());
  }
}

DescribePipelinesOutcomeCallable DataPipelineClient::DescribePipelinesCallable(const DescribePipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DescribePipelinesAsync(const DescribePipelinesRequest& request, const DescribePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePipelinesAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::DescribePipelinesAsyncHelper(const DescribePipelinesRequest& request, const DescribePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePipelines(request), context);
}

EvaluateExpressionOutcome DataPipelineClient::EvaluateExpression(const EvaluateExpressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EvaluateExpressionOutcome(EvaluateExpressionResult(outcome.GetResult()));
  }
  else
  {
    return EvaluateExpressionOutcome(outcome.GetError());
  }
}

EvaluateExpressionOutcomeCallable DataPipelineClient::EvaluateExpressionCallable(const EvaluateExpressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EvaluateExpressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EvaluateExpression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::EvaluateExpressionAsync(const EvaluateExpressionRequest& request, const EvaluateExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EvaluateExpressionAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::EvaluateExpressionAsyncHelper(const EvaluateExpressionRequest& request, const EvaluateExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EvaluateExpression(request), context);
}

GetPipelineDefinitionOutcome DataPipelineClient::GetPipelineDefinition(const GetPipelineDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPipelineDefinitionOutcome(GetPipelineDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return GetPipelineDefinitionOutcome(outcome.GetError());
  }
}

GetPipelineDefinitionOutcomeCallable DataPipelineClient::GetPipelineDefinitionCallable(const GetPipelineDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipelineDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::GetPipelineDefinitionAsync(const GetPipelineDefinitionRequest& request, const GetPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPipelineDefinitionAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::GetPipelineDefinitionAsyncHelper(const GetPipelineDefinitionRequest& request, const GetPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPipelineDefinition(request), context);
}

ListPipelinesOutcome DataPipelineClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPipelinesOutcome(ListPipelinesResult(outcome.GetResult()));
  }
  else
  {
    return ListPipelinesOutcome(outcome.GetError());
  }
}

ListPipelinesOutcomeCallable DataPipelineClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPipelinesAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::ListPipelinesAsyncHelper(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPipelines(request), context);
}

PollForTaskOutcome DataPipelineClient::PollForTask(const PollForTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PollForTaskOutcome(PollForTaskResult(outcome.GetResult()));
  }
  else
  {
    return PollForTaskOutcome(outcome.GetError());
  }
}

PollForTaskOutcomeCallable DataPipelineClient::PollForTaskCallable(const PollForTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::PollForTaskAsync(const PollForTaskRequest& request, const PollForTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PollForTaskAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::PollForTaskAsyncHelper(const PollForTaskRequest& request, const PollForTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForTask(request), context);
}

PutPipelineDefinitionOutcome DataPipelineClient::PutPipelineDefinition(const PutPipelineDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutPipelineDefinitionOutcome(PutPipelineDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return PutPipelineDefinitionOutcome(outcome.GetError());
  }
}

PutPipelineDefinitionOutcomeCallable DataPipelineClient::PutPipelineDefinitionCallable(const PutPipelineDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPipelineDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPipelineDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::PutPipelineDefinitionAsync(const PutPipelineDefinitionRequest& request, const PutPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPipelineDefinitionAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::PutPipelineDefinitionAsyncHelper(const PutPipelineDefinitionRequest& request, const PutPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPipelineDefinition(request), context);
}

QueryObjectsOutcome DataPipelineClient::QueryObjects(const QueryObjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return QueryObjectsOutcome(QueryObjectsResult(outcome.GetResult()));
  }
  else
  {
    return QueryObjectsOutcome(outcome.GetError());
  }
}

QueryObjectsOutcomeCallable DataPipelineClient::QueryObjectsCallable(const QueryObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::QueryObjectsAsync(const QueryObjectsRequest& request, const QueryObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->QueryObjectsAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::QueryObjectsAsyncHelper(const QueryObjectsRequest& request, const QueryObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, QueryObjects(request), context);
}

RemoveTagsOutcome DataPipelineClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable DataPipelineClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

ReportTaskProgressOutcome DataPipelineClient::ReportTaskProgress(const ReportTaskProgressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ReportTaskProgressOutcome(ReportTaskProgressResult(outcome.GetResult()));
  }
  else
  {
    return ReportTaskProgressOutcome(outcome.GetError());
  }
}

ReportTaskProgressOutcomeCallable DataPipelineClient::ReportTaskProgressCallable(const ReportTaskProgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReportTaskProgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReportTaskProgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ReportTaskProgressAsync(const ReportTaskProgressRequest& request, const ReportTaskProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReportTaskProgressAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::ReportTaskProgressAsyncHelper(const ReportTaskProgressRequest& request, const ReportTaskProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReportTaskProgress(request), context);
}

ReportTaskRunnerHeartbeatOutcome DataPipelineClient::ReportTaskRunnerHeartbeat(const ReportTaskRunnerHeartbeatRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ReportTaskRunnerHeartbeatOutcome(ReportTaskRunnerHeartbeatResult(outcome.GetResult()));
  }
  else
  {
    return ReportTaskRunnerHeartbeatOutcome(outcome.GetError());
  }
}

ReportTaskRunnerHeartbeatOutcomeCallable DataPipelineClient::ReportTaskRunnerHeartbeatCallable(const ReportTaskRunnerHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReportTaskRunnerHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReportTaskRunnerHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ReportTaskRunnerHeartbeatAsync(const ReportTaskRunnerHeartbeatRequest& request, const ReportTaskRunnerHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReportTaskRunnerHeartbeatAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::ReportTaskRunnerHeartbeatAsyncHelper(const ReportTaskRunnerHeartbeatRequest& request, const ReportTaskRunnerHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReportTaskRunnerHeartbeat(request), context);
}

SetStatusOutcome DataPipelineClient::SetStatus(const SetStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetStatusOutcome(NoResult());
  }
  else
  {
    return SetStatusOutcome(outcome.GetError());
  }
}

SetStatusOutcomeCallable DataPipelineClient::SetStatusCallable(const SetStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::SetStatusAsync(const SetStatusRequest& request, const SetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetStatusAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::SetStatusAsyncHelper(const SetStatusRequest& request, const SetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetStatus(request), context);
}

SetTaskStatusOutcome DataPipelineClient::SetTaskStatus(const SetTaskStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetTaskStatusOutcome(SetTaskStatusResult(outcome.GetResult()));
  }
  else
  {
    return SetTaskStatusOutcome(outcome.GetError());
  }
}

SetTaskStatusOutcomeCallable DataPipelineClient::SetTaskStatusCallable(const SetTaskStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTaskStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTaskStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::SetTaskStatusAsync(const SetTaskStatusRequest& request, const SetTaskStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetTaskStatusAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::SetTaskStatusAsyncHelper(const SetTaskStatusRequest& request, const SetTaskStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTaskStatus(request), context);
}

ValidatePipelineDefinitionOutcome DataPipelineClient::ValidatePipelineDefinition(const ValidatePipelineDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ValidatePipelineDefinitionOutcome(ValidatePipelineDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return ValidatePipelineDefinitionOutcome(outcome.GetError());
  }
}

ValidatePipelineDefinitionOutcomeCallable DataPipelineClient::ValidatePipelineDefinitionCallable(const ValidatePipelineDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidatePipelineDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidatePipelineDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ValidatePipelineDefinitionAsync(const ValidatePipelineDefinitionRequest& request, const ValidatePipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ValidatePipelineDefinitionAsyncHelper( request, handler, context ); } );
}

void DataPipelineClient::ValidatePipelineDefinitionAsyncHelper(const ValidatePipelineDefinitionRequest& request, const ValidatePipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ValidatePipelineDefinition(request), context);
}

