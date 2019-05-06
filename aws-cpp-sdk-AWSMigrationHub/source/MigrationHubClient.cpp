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

#include <aws/AWSMigrationHub/MigrationHubClient.h>
#include <aws/AWSMigrationHub/MigrationHubEndpoint.h>
#include <aws/AWSMigrationHub/MigrationHubErrorMarshaller.h>
#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/AssociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/DeleteProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/DescribeApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/DescribeMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/ImportMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsRequest.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesRequest.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksRequest.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsRequest.h>
#include <aws/AWSMigrationHub/model/NotifyApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateRequest.h>
#include <aws/AWSMigrationHub/model/PutResourceAttributesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHub;
using namespace Aws::MigrationHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mgh";
static const char* ALLOCATION_TAG = "MigrationHubClient";


MigrationHubClient::MigrationHubClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubClient::~MigrationHubClient()
{
}

void MigrationHubClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MigrationHubEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MigrationHubClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateCreatedArtifactOutcome MigrationHubClient::AssociateCreatedArtifact(const AssociateCreatedArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateCreatedArtifactOutcome(AssociateCreatedArtifactResult(outcome.GetResult()));
  }
  else
  {
    return AssociateCreatedArtifactOutcome(outcome.GetError());
  }
}

AssociateCreatedArtifactOutcomeCallable MigrationHubClient::AssociateCreatedArtifactCallable(const AssociateCreatedArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateCreatedArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateCreatedArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::AssociateCreatedArtifactAsync(const AssociateCreatedArtifactRequest& request, const AssociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateCreatedArtifactAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::AssociateCreatedArtifactAsyncHelper(const AssociateCreatedArtifactRequest& request, const AssociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateCreatedArtifact(request), context);
}

AssociateDiscoveredResourceOutcome MigrationHubClient::AssociateDiscoveredResource(const AssociateDiscoveredResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDiscoveredResourceOutcome(AssociateDiscoveredResourceResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDiscoveredResourceOutcome(outcome.GetError());
  }
}

AssociateDiscoveredResourceOutcomeCallable MigrationHubClient::AssociateDiscoveredResourceCallable(const AssociateDiscoveredResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDiscoveredResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDiscoveredResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::AssociateDiscoveredResourceAsync(const AssociateDiscoveredResourceRequest& request, const AssociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDiscoveredResourceAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::AssociateDiscoveredResourceAsyncHelper(const AssociateDiscoveredResourceRequest& request, const AssociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDiscoveredResource(request), context);
}

CreateProgressUpdateStreamOutcome MigrationHubClient::CreateProgressUpdateStream(const CreateProgressUpdateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProgressUpdateStreamOutcome(CreateProgressUpdateStreamResult(outcome.GetResult()));
  }
  else
  {
    return CreateProgressUpdateStreamOutcome(outcome.GetError());
  }
}

CreateProgressUpdateStreamOutcomeCallable MigrationHubClient::CreateProgressUpdateStreamCallable(const CreateProgressUpdateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProgressUpdateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProgressUpdateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::CreateProgressUpdateStreamAsync(const CreateProgressUpdateStreamRequest& request, const CreateProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProgressUpdateStreamAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::CreateProgressUpdateStreamAsyncHelper(const CreateProgressUpdateStreamRequest& request, const CreateProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProgressUpdateStream(request), context);
}

DeleteProgressUpdateStreamOutcome MigrationHubClient::DeleteProgressUpdateStream(const DeleteProgressUpdateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProgressUpdateStreamOutcome(DeleteProgressUpdateStreamResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProgressUpdateStreamOutcome(outcome.GetError());
  }
}

DeleteProgressUpdateStreamOutcomeCallable MigrationHubClient::DeleteProgressUpdateStreamCallable(const DeleteProgressUpdateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProgressUpdateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProgressUpdateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::DeleteProgressUpdateStreamAsync(const DeleteProgressUpdateStreamRequest& request, const DeleteProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProgressUpdateStreamAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::DeleteProgressUpdateStreamAsyncHelper(const DeleteProgressUpdateStreamRequest& request, const DeleteProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProgressUpdateStream(request), context);
}

DescribeApplicationStateOutcome MigrationHubClient::DescribeApplicationState(const DescribeApplicationStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeApplicationStateOutcome(DescribeApplicationStateResult(outcome.GetResult()));
  }
  else
  {
    return DescribeApplicationStateOutcome(outcome.GetError());
  }
}

DescribeApplicationStateOutcomeCallable MigrationHubClient::DescribeApplicationStateCallable(const DescribeApplicationStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicationState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::DescribeApplicationStateAsync(const DescribeApplicationStateRequest& request, const DescribeApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationStateAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::DescribeApplicationStateAsyncHelper(const DescribeApplicationStateRequest& request, const DescribeApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplicationState(request), context);
}

DescribeMigrationTaskOutcome MigrationHubClient::DescribeMigrationTask(const DescribeMigrationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMigrationTaskOutcome(DescribeMigrationTaskResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMigrationTaskOutcome(outcome.GetError());
  }
}

DescribeMigrationTaskOutcomeCallable MigrationHubClient::DescribeMigrationTaskCallable(const DescribeMigrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMigrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMigrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::DescribeMigrationTaskAsync(const DescribeMigrationTaskRequest& request, const DescribeMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMigrationTaskAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::DescribeMigrationTaskAsyncHelper(const DescribeMigrationTaskRequest& request, const DescribeMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMigrationTask(request), context);
}

DisassociateCreatedArtifactOutcome MigrationHubClient::DisassociateCreatedArtifact(const DisassociateCreatedArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateCreatedArtifactOutcome(DisassociateCreatedArtifactResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateCreatedArtifactOutcome(outcome.GetError());
  }
}

DisassociateCreatedArtifactOutcomeCallable MigrationHubClient::DisassociateCreatedArtifactCallable(const DisassociateCreatedArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateCreatedArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateCreatedArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::DisassociateCreatedArtifactAsync(const DisassociateCreatedArtifactRequest& request, const DisassociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateCreatedArtifactAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::DisassociateCreatedArtifactAsyncHelper(const DisassociateCreatedArtifactRequest& request, const DisassociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateCreatedArtifact(request), context);
}

DisassociateDiscoveredResourceOutcome MigrationHubClient::DisassociateDiscoveredResource(const DisassociateDiscoveredResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDiscoveredResourceOutcome(DisassociateDiscoveredResourceResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDiscoveredResourceOutcome(outcome.GetError());
  }
}

DisassociateDiscoveredResourceOutcomeCallable MigrationHubClient::DisassociateDiscoveredResourceCallable(const DisassociateDiscoveredResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDiscoveredResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDiscoveredResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::DisassociateDiscoveredResourceAsync(const DisassociateDiscoveredResourceRequest& request, const DisassociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDiscoveredResourceAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::DisassociateDiscoveredResourceAsyncHelper(const DisassociateDiscoveredResourceRequest& request, const DisassociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDiscoveredResource(request), context);
}

ImportMigrationTaskOutcome MigrationHubClient::ImportMigrationTask(const ImportMigrationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportMigrationTaskOutcome(ImportMigrationTaskResult(outcome.GetResult()));
  }
  else
  {
    return ImportMigrationTaskOutcome(outcome.GetError());
  }
}

ImportMigrationTaskOutcomeCallable MigrationHubClient::ImportMigrationTaskCallable(const ImportMigrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportMigrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportMigrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::ImportMigrationTaskAsync(const ImportMigrationTaskRequest& request, const ImportMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportMigrationTaskAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::ImportMigrationTaskAsyncHelper(const ImportMigrationTaskRequest& request, const ImportMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportMigrationTask(request), context);
}

ListCreatedArtifactsOutcome MigrationHubClient::ListCreatedArtifacts(const ListCreatedArtifactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCreatedArtifactsOutcome(ListCreatedArtifactsResult(outcome.GetResult()));
  }
  else
  {
    return ListCreatedArtifactsOutcome(outcome.GetError());
  }
}

ListCreatedArtifactsOutcomeCallable MigrationHubClient::ListCreatedArtifactsCallable(const ListCreatedArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCreatedArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCreatedArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::ListCreatedArtifactsAsync(const ListCreatedArtifactsRequest& request, const ListCreatedArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCreatedArtifactsAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::ListCreatedArtifactsAsyncHelper(const ListCreatedArtifactsRequest& request, const ListCreatedArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCreatedArtifacts(request), context);
}

ListDiscoveredResourcesOutcome MigrationHubClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDiscoveredResourcesOutcome(ListDiscoveredResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListDiscoveredResourcesOutcome(outcome.GetError());
  }
}

ListDiscoveredResourcesOutcomeCallable MigrationHubClient::ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDiscoveredResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDiscoveredResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDiscoveredResourcesAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::ListDiscoveredResourcesAsyncHelper(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDiscoveredResources(request), context);
}

ListMigrationTasksOutcome MigrationHubClient::ListMigrationTasks(const ListMigrationTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMigrationTasksOutcome(ListMigrationTasksResult(outcome.GetResult()));
  }
  else
  {
    return ListMigrationTasksOutcome(outcome.GetError());
  }
}

ListMigrationTasksOutcomeCallable MigrationHubClient::ListMigrationTasksCallable(const ListMigrationTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMigrationTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMigrationTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::ListMigrationTasksAsync(const ListMigrationTasksRequest& request, const ListMigrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMigrationTasksAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::ListMigrationTasksAsyncHelper(const ListMigrationTasksRequest& request, const ListMigrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMigrationTasks(request), context);
}

ListProgressUpdateStreamsOutcome MigrationHubClient::ListProgressUpdateStreams(const ListProgressUpdateStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProgressUpdateStreamsOutcome(ListProgressUpdateStreamsResult(outcome.GetResult()));
  }
  else
  {
    return ListProgressUpdateStreamsOutcome(outcome.GetError());
  }
}

ListProgressUpdateStreamsOutcomeCallable MigrationHubClient::ListProgressUpdateStreamsCallable(const ListProgressUpdateStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProgressUpdateStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProgressUpdateStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::ListProgressUpdateStreamsAsync(const ListProgressUpdateStreamsRequest& request, const ListProgressUpdateStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProgressUpdateStreamsAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::ListProgressUpdateStreamsAsyncHelper(const ListProgressUpdateStreamsRequest& request, const ListProgressUpdateStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProgressUpdateStreams(request), context);
}

NotifyApplicationStateOutcome MigrationHubClient::NotifyApplicationState(const NotifyApplicationStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return NotifyApplicationStateOutcome(NotifyApplicationStateResult(outcome.GetResult()));
  }
  else
  {
    return NotifyApplicationStateOutcome(outcome.GetError());
  }
}

NotifyApplicationStateOutcomeCallable MigrationHubClient::NotifyApplicationStateCallable(const NotifyApplicationStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyApplicationStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyApplicationState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::NotifyApplicationStateAsync(const NotifyApplicationStateRequest& request, const NotifyApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->NotifyApplicationStateAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::NotifyApplicationStateAsyncHelper(const NotifyApplicationStateRequest& request, const NotifyApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, NotifyApplicationState(request), context);
}

NotifyMigrationTaskStateOutcome MigrationHubClient::NotifyMigrationTaskState(const NotifyMigrationTaskStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return NotifyMigrationTaskStateOutcome(NotifyMigrationTaskStateResult(outcome.GetResult()));
  }
  else
  {
    return NotifyMigrationTaskStateOutcome(outcome.GetError());
  }
}

NotifyMigrationTaskStateOutcomeCallable MigrationHubClient::NotifyMigrationTaskStateCallable(const NotifyMigrationTaskStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyMigrationTaskStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyMigrationTaskState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::NotifyMigrationTaskStateAsync(const NotifyMigrationTaskStateRequest& request, const NotifyMigrationTaskStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->NotifyMigrationTaskStateAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::NotifyMigrationTaskStateAsyncHelper(const NotifyMigrationTaskStateRequest& request, const NotifyMigrationTaskStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, NotifyMigrationTaskState(request), context);
}

PutResourceAttributesOutcome MigrationHubClient::PutResourceAttributes(const PutResourceAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutResourceAttributesOutcome(PutResourceAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutResourceAttributesOutcome(outcome.GetError());
  }
}

PutResourceAttributesOutcomeCallable MigrationHubClient::PutResourceAttributesCallable(const PutResourceAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourceAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourceAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubClient::PutResourceAttributesAsync(const PutResourceAttributesRequest& request, const PutResourceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutResourceAttributesAsyncHelper( request, handler, context ); } );
}

void MigrationHubClient::PutResourceAttributesAsyncHelper(const PutResourceAttributesRequest& request, const PutResourceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResourceAttributes(request), context);
}

