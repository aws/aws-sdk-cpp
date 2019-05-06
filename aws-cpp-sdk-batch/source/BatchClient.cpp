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

#include <aws/batch/BatchClient.h>
#include <aws/batch/BatchEndpoint.h>
#include <aws/batch/BatchErrorMarshaller.h>
#include <aws/batch/model/CancelJobRequest.h>
#include <aws/batch/model/CreateComputeEnvironmentRequest.h>
#include <aws/batch/model/CreateJobQueueRequest.h>
#include <aws/batch/model/DeleteComputeEnvironmentRequest.h>
#include <aws/batch/model/DeleteJobQueueRequest.h>
#include <aws/batch/model/DeregisterJobDefinitionRequest.h>
#include <aws/batch/model/DescribeComputeEnvironmentsRequest.h>
#include <aws/batch/model/DescribeJobDefinitionsRequest.h>
#include <aws/batch/model/DescribeJobQueuesRequest.h>
#include <aws/batch/model/DescribeJobsRequest.h>
#include <aws/batch/model/ListJobsRequest.h>
#include <aws/batch/model/RegisterJobDefinitionRequest.h>
#include <aws/batch/model/SubmitJobRequest.h>
#include <aws/batch/model/TerminateJobRequest.h>
#include <aws/batch/model/UpdateComputeEnvironmentRequest.h>
#include <aws/batch/model/UpdateJobQueueRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Batch;
using namespace Aws::Batch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "batch";
static const char* ALLOCATION_TAG = "BatchClient";


BatchClient::BatchClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BatchClient::BatchClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BatchClient::BatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BatchClient::~BatchClient()
{
}

void BatchClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + BatchEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void BatchClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelJobOutcome BatchClient::CancelJob(const CancelJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/canceljob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelJobOutcome(CancelJobResult(outcome.GetResult()));
  }
  else
  {
    return CancelJobOutcome(outcome.GetError());
  }
}

CancelJobOutcomeCallable BatchClient::CancelJobCallable(const CancelJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelJobAsyncHelper( request, handler, context ); } );
}

void BatchClient::CancelJobAsyncHelper(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelJob(request), context);
}

CreateComputeEnvironmentOutcome BatchClient::CreateComputeEnvironment(const CreateComputeEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/createcomputeenvironment";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateComputeEnvironmentOutcome(CreateComputeEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return CreateComputeEnvironmentOutcome(outcome.GetError());
  }
}

CreateComputeEnvironmentOutcomeCallable BatchClient::CreateComputeEnvironmentCallable(const CreateComputeEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComputeEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComputeEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::CreateComputeEnvironmentAsync(const CreateComputeEnvironmentRequest& request, const CreateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateComputeEnvironmentAsyncHelper( request, handler, context ); } );
}

void BatchClient::CreateComputeEnvironmentAsyncHelper(const CreateComputeEnvironmentRequest& request, const CreateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateComputeEnvironment(request), context);
}

CreateJobQueueOutcome BatchClient::CreateJobQueue(const CreateJobQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/createjobqueue";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateJobQueueOutcome(CreateJobQueueResult(outcome.GetResult()));
  }
  else
  {
    return CreateJobQueueOutcome(outcome.GetError());
  }
}

CreateJobQueueOutcomeCallable BatchClient::CreateJobQueueCallable(const CreateJobQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJobQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::CreateJobQueueAsync(const CreateJobQueueRequest& request, const CreateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateJobQueueAsyncHelper( request, handler, context ); } );
}

void BatchClient::CreateJobQueueAsyncHelper(const CreateJobQueueRequest& request, const CreateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateJobQueue(request), context);
}

DeleteComputeEnvironmentOutcome BatchClient::DeleteComputeEnvironment(const DeleteComputeEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/deletecomputeenvironment";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteComputeEnvironmentOutcome(DeleteComputeEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteComputeEnvironmentOutcome(outcome.GetError());
  }
}

DeleteComputeEnvironmentOutcomeCallable BatchClient::DeleteComputeEnvironmentCallable(const DeleteComputeEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComputeEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComputeEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::DeleteComputeEnvironmentAsync(const DeleteComputeEnvironmentRequest& request, const DeleteComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteComputeEnvironmentAsyncHelper( request, handler, context ); } );
}

void BatchClient::DeleteComputeEnvironmentAsyncHelper(const DeleteComputeEnvironmentRequest& request, const DeleteComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteComputeEnvironment(request), context);
}

DeleteJobQueueOutcome BatchClient::DeleteJobQueue(const DeleteJobQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/deletejobqueue";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteJobQueueOutcome(DeleteJobQueueResult(outcome.GetResult()));
  }
  else
  {
    return DeleteJobQueueOutcome(outcome.GetError());
  }
}

DeleteJobQueueOutcomeCallable BatchClient::DeleteJobQueueCallable(const DeleteJobQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJobQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::DeleteJobQueueAsync(const DeleteJobQueueRequest& request, const DeleteJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteJobQueueAsyncHelper( request, handler, context ); } );
}

void BatchClient::DeleteJobQueueAsyncHelper(const DeleteJobQueueRequest& request, const DeleteJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteJobQueue(request), context);
}

DeregisterJobDefinitionOutcome BatchClient::DeregisterJobDefinition(const DeregisterJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/deregisterjobdefinition";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterJobDefinitionOutcome(DeregisterJobDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterJobDefinitionOutcome(outcome.GetError());
  }
}

DeregisterJobDefinitionOutcomeCallable BatchClient::DeregisterJobDefinitionCallable(const DeregisterJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::DeregisterJobDefinitionAsync(const DeregisterJobDefinitionRequest& request, const DeregisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterJobDefinitionAsyncHelper( request, handler, context ); } );
}

void BatchClient::DeregisterJobDefinitionAsyncHelper(const DeregisterJobDefinitionRequest& request, const DeregisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterJobDefinition(request), context);
}

DescribeComputeEnvironmentsOutcome BatchClient::DescribeComputeEnvironments(const DescribeComputeEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/describecomputeenvironments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeComputeEnvironmentsOutcome(DescribeComputeEnvironmentsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComputeEnvironmentsOutcome(outcome.GetError());
  }
}

DescribeComputeEnvironmentsOutcomeCallable BatchClient::DescribeComputeEnvironmentsCallable(const DescribeComputeEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComputeEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComputeEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::DescribeComputeEnvironmentsAsync(const DescribeComputeEnvironmentsRequest& request, const DescribeComputeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeComputeEnvironmentsAsyncHelper( request, handler, context ); } );
}

void BatchClient::DescribeComputeEnvironmentsAsyncHelper(const DescribeComputeEnvironmentsRequest& request, const DescribeComputeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComputeEnvironments(request), context);
}

DescribeJobDefinitionsOutcome BatchClient::DescribeJobDefinitions(const DescribeJobDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/describejobdefinitions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeJobDefinitionsOutcome(DescribeJobDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobDefinitionsOutcome(outcome.GetError());
  }
}

DescribeJobDefinitionsOutcomeCallable BatchClient::DescribeJobDefinitionsCallable(const DescribeJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::DescribeJobDefinitionsAsync(const DescribeJobDefinitionsRequest& request, const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobDefinitionsAsyncHelper( request, handler, context ); } );
}

void BatchClient::DescribeJobDefinitionsAsyncHelper(const DescribeJobDefinitionsRequest& request, const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJobDefinitions(request), context);
}

DescribeJobQueuesOutcome BatchClient::DescribeJobQueues(const DescribeJobQueuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/describejobqueues";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeJobQueuesOutcome(DescribeJobQueuesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobQueuesOutcome(outcome.GetError());
  }
}

DescribeJobQueuesOutcomeCallable BatchClient::DescribeJobQueuesCallable(const DescribeJobQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::DescribeJobQueuesAsync(const DescribeJobQueuesRequest& request, const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobQueuesAsyncHelper( request, handler, context ); } );
}

void BatchClient::DescribeJobQueuesAsyncHelper(const DescribeJobQueuesRequest& request, const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJobQueues(request), context);
}

DescribeJobsOutcome BatchClient::DescribeJobs(const DescribeJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/describejobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeJobsOutcome(DescribeJobsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobsOutcome(outcome.GetError());
  }
}

DescribeJobsOutcomeCallable BatchClient::DescribeJobsCallable(const DescribeJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobsAsyncHelper( request, handler, context ); } );
}

void BatchClient::DescribeJobsAsyncHelper(const DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJobs(request), context);
}

ListJobsOutcome BatchClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/listjobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListJobsOutcome(ListJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsOutcome(outcome.GetError());
  }
}

ListJobsOutcomeCallable BatchClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListJobsAsyncHelper( request, handler, context ); } );
}

void BatchClient::ListJobsAsyncHelper(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobs(request), context);
}

RegisterJobDefinitionOutcome BatchClient::RegisterJobDefinition(const RegisterJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registerjobdefinition";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterJobDefinitionOutcome(RegisterJobDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return RegisterJobDefinitionOutcome(outcome.GetError());
  }
}

RegisterJobDefinitionOutcomeCallable BatchClient::RegisterJobDefinitionCallable(const RegisterJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::RegisterJobDefinitionAsync(const RegisterJobDefinitionRequest& request, const RegisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterJobDefinitionAsyncHelper( request, handler, context ); } );
}

void BatchClient::RegisterJobDefinitionAsyncHelper(const RegisterJobDefinitionRequest& request, const RegisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterJobDefinition(request), context);
}

SubmitJobOutcome BatchClient::SubmitJob(const SubmitJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/submitjob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SubmitJobOutcome(SubmitJobResult(outcome.GetResult()));
  }
  else
  {
    return SubmitJobOutcome(outcome.GetError());
  }
}

SubmitJobOutcomeCallable BatchClient::SubmitJobCallable(const SubmitJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::SubmitJobAsync(const SubmitJobRequest& request, const SubmitJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SubmitJobAsyncHelper( request, handler, context ); } );
}

void BatchClient::SubmitJobAsyncHelper(const SubmitJobRequest& request, const SubmitJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubmitJob(request), context);
}

TerminateJobOutcome BatchClient::TerminateJob(const TerminateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/terminatejob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TerminateJobOutcome(TerminateJobResult(outcome.GetResult()));
  }
  else
  {
    return TerminateJobOutcome(outcome.GetError());
  }
}

TerminateJobOutcomeCallable BatchClient::TerminateJobCallable(const TerminateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::TerminateJobAsync(const TerminateJobRequest& request, const TerminateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateJobAsyncHelper( request, handler, context ); } );
}

void BatchClient::TerminateJobAsyncHelper(const TerminateJobRequest& request, const TerminateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateJob(request), context);
}

UpdateComputeEnvironmentOutcome BatchClient::UpdateComputeEnvironment(const UpdateComputeEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/updatecomputeenvironment";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateComputeEnvironmentOutcome(UpdateComputeEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateComputeEnvironmentOutcome(outcome.GetError());
  }
}

UpdateComputeEnvironmentOutcomeCallable BatchClient::UpdateComputeEnvironmentCallable(const UpdateComputeEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComputeEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComputeEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::UpdateComputeEnvironmentAsync(const UpdateComputeEnvironmentRequest& request, const UpdateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateComputeEnvironmentAsyncHelper( request, handler, context ); } );
}

void BatchClient::UpdateComputeEnvironmentAsyncHelper(const UpdateComputeEnvironmentRequest& request, const UpdateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateComputeEnvironment(request), context);
}

UpdateJobQueueOutcome BatchClient::UpdateJobQueue(const UpdateJobQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/updatejobqueue";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateJobQueueOutcome(UpdateJobQueueResult(outcome.GetResult()));
  }
  else
  {
    return UpdateJobQueueOutcome(outcome.GetError());
  }
}

UpdateJobQueueOutcomeCallable BatchClient::UpdateJobQueueCallable(const UpdateJobQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJobQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BatchClient::UpdateJobQueueAsync(const UpdateJobQueueRequest& request, const UpdateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateJobQueueAsyncHelper( request, handler, context ); } );
}

void BatchClient::UpdateJobQueueAsyncHelper(const UpdateJobQueueRequest& request, const UpdateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateJobQueue(request), context);
}

