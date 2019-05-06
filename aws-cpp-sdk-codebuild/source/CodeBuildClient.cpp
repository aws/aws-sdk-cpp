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

#include <aws/codebuild/CodeBuildClient.h>
#include <aws/codebuild/CodeBuildEndpoint.h>
#include <aws/codebuild/CodeBuildErrorMarshaller.h>
#include <aws/codebuild/model/BatchDeleteBuildsRequest.h>
#include <aws/codebuild/model/BatchGetBuildsRequest.h>
#include <aws/codebuild/model/BatchGetProjectsRequest.h>
#include <aws/codebuild/model/CreateProjectRequest.h>
#include <aws/codebuild/model/CreateWebhookRequest.h>
#include <aws/codebuild/model/DeleteProjectRequest.h>
#include <aws/codebuild/model/DeleteSourceCredentialsRequest.h>
#include <aws/codebuild/model/DeleteWebhookRequest.h>
#include <aws/codebuild/model/ImportSourceCredentialsRequest.h>
#include <aws/codebuild/model/InvalidateProjectCacheRequest.h>
#include <aws/codebuild/model/ListBuildsRequest.h>
#include <aws/codebuild/model/ListBuildsForProjectRequest.h>
#include <aws/codebuild/model/ListCuratedEnvironmentImagesRequest.h>
#include <aws/codebuild/model/ListProjectsRequest.h>
#include <aws/codebuild/model/ListSourceCredentialsRequest.h>
#include <aws/codebuild/model/StartBuildRequest.h>
#include <aws/codebuild/model/StopBuildRequest.h>
#include <aws/codebuild/model/UpdateProjectRequest.h>
#include <aws/codebuild/model/UpdateWebhookRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeBuild;
using namespace Aws::CodeBuild::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codebuild";
static const char* ALLOCATION_TAG = "CodeBuildClient";


CodeBuildClient::CodeBuildClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeBuildClient::CodeBuildClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeBuildErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeBuildClient::~CodeBuildClient()
{
}

void CodeBuildClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeBuildEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeBuildClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchDeleteBuildsOutcome CodeBuildClient::BatchDeleteBuilds(const BatchDeleteBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDeleteBuildsOutcome(BatchDeleteBuildsResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeleteBuildsOutcome(outcome.GetError());
  }
}

BatchDeleteBuildsOutcomeCallable CodeBuildClient::BatchDeleteBuildsCallable(const BatchDeleteBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchDeleteBuildsAsync(const BatchDeleteBuildsRequest& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteBuildsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::BatchDeleteBuildsAsyncHelper(const BatchDeleteBuildsRequest& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteBuilds(request), context);
}

BatchGetBuildsOutcome CodeBuildClient::BatchGetBuilds(const BatchGetBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetBuildsOutcome(BatchGetBuildsResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetBuildsOutcome(outcome.GetError());
  }
}

BatchGetBuildsOutcomeCallable CodeBuildClient::BatchGetBuildsCallable(const BatchGetBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchGetBuildsAsync(const BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetBuildsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::BatchGetBuildsAsyncHelper(const BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetBuilds(request), context);
}

BatchGetProjectsOutcome CodeBuildClient::BatchGetProjects(const BatchGetProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetProjectsOutcome(BatchGetProjectsResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetProjectsOutcome(outcome.GetError());
  }
}

BatchGetProjectsOutcomeCallable CodeBuildClient::BatchGetProjectsCallable(const BatchGetProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::BatchGetProjectsAsync(const BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetProjectsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::BatchGetProjectsAsyncHelper(const BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetProjects(request), context);
}

CreateProjectOutcome CodeBuildClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProjectOutcome(CreateProjectResult(outcome.GetResult()));
  }
  else
  {
    return CreateProjectOutcome(outcome.GetError());
  }
}

CreateProjectOutcomeCallable CodeBuildClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProjectAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::CreateProjectAsyncHelper(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProject(request), context);
}

CreateWebhookOutcome CodeBuildClient::CreateWebhook(const CreateWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateWebhookOutcome(CreateWebhookResult(outcome.GetResult()));
  }
  else
  {
    return CreateWebhookOutcome(outcome.GetError());
  }
}

CreateWebhookOutcomeCallable CodeBuildClient::CreateWebhookCallable(const CreateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::CreateWebhookAsync(const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWebhookAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::CreateWebhookAsyncHelper(const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWebhook(request), context);
}

DeleteProjectOutcome CodeBuildClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProjectOutcome(DeleteProjectResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProjectOutcome(outcome.GetError());
  }
}

DeleteProjectOutcomeCallable CodeBuildClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProjectAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::DeleteProjectAsyncHelper(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProject(request), context);
}

DeleteSourceCredentialsOutcome CodeBuildClient::DeleteSourceCredentials(const DeleteSourceCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSourceCredentialsOutcome(DeleteSourceCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSourceCredentialsOutcome(outcome.GetError());
  }
}

DeleteSourceCredentialsOutcomeCallable CodeBuildClient::DeleteSourceCredentialsCallable(const DeleteSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteSourceCredentialsAsync(const DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSourceCredentialsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::DeleteSourceCredentialsAsyncHelper(const DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSourceCredentials(request), context);
}

DeleteWebhookOutcome CodeBuildClient::DeleteWebhook(const DeleteWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteWebhookOutcome(DeleteWebhookResult(outcome.GetResult()));
  }
  else
  {
    return DeleteWebhookOutcome(outcome.GetError());
  }
}

DeleteWebhookOutcomeCallable CodeBuildClient::DeleteWebhookCallable(const DeleteWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::DeleteWebhookAsync(const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWebhookAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::DeleteWebhookAsyncHelper(const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWebhook(request), context);
}

ImportSourceCredentialsOutcome CodeBuildClient::ImportSourceCredentials(const ImportSourceCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportSourceCredentialsOutcome(ImportSourceCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return ImportSourceCredentialsOutcome(outcome.GetError());
  }
}

ImportSourceCredentialsOutcomeCallable CodeBuildClient::ImportSourceCredentialsCallable(const ImportSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ImportSourceCredentialsAsync(const ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportSourceCredentialsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::ImportSourceCredentialsAsyncHelper(const ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportSourceCredentials(request), context);
}

InvalidateProjectCacheOutcome CodeBuildClient::InvalidateProjectCache(const InvalidateProjectCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InvalidateProjectCacheOutcome(InvalidateProjectCacheResult(outcome.GetResult()));
  }
  else
  {
    return InvalidateProjectCacheOutcome(outcome.GetError());
  }
}

InvalidateProjectCacheOutcomeCallable CodeBuildClient::InvalidateProjectCacheCallable(const InvalidateProjectCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvalidateProjectCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvalidateProjectCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::InvalidateProjectCacheAsync(const InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InvalidateProjectCacheAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::InvalidateProjectCacheAsyncHelper(const InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InvalidateProjectCache(request), context);
}

ListBuildsOutcome CodeBuildClient::ListBuilds(const ListBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBuildsOutcome(ListBuildsResult(outcome.GetResult()));
  }
  else
  {
    return ListBuildsOutcome(outcome.GetError());
  }
}

ListBuildsOutcomeCallable CodeBuildClient::ListBuildsCallable(const ListBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListBuildsAsync(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBuildsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::ListBuildsAsyncHelper(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBuilds(request), context);
}

ListBuildsForProjectOutcome CodeBuildClient::ListBuildsForProject(const ListBuildsForProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBuildsForProjectOutcome(ListBuildsForProjectResult(outcome.GetResult()));
  }
  else
  {
    return ListBuildsForProjectOutcome(outcome.GetError());
  }
}

ListBuildsForProjectOutcomeCallable CodeBuildClient::ListBuildsForProjectCallable(const ListBuildsForProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsForProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuildsForProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListBuildsForProjectAsync(const ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBuildsForProjectAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::ListBuildsForProjectAsyncHelper(const ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBuildsForProject(request), context);
}

ListCuratedEnvironmentImagesOutcome CodeBuildClient::ListCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCuratedEnvironmentImagesOutcome(ListCuratedEnvironmentImagesResult(outcome.GetResult()));
  }
  else
  {
    return ListCuratedEnvironmentImagesOutcome(outcome.GetError());
  }
}

ListCuratedEnvironmentImagesOutcomeCallable CodeBuildClient::ListCuratedEnvironmentImagesCallable(const ListCuratedEnvironmentImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCuratedEnvironmentImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCuratedEnvironmentImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListCuratedEnvironmentImagesAsync(const ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCuratedEnvironmentImagesAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::ListCuratedEnvironmentImagesAsyncHelper(const ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCuratedEnvironmentImages(request), context);
}

ListProjectsOutcome CodeBuildClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProjectsOutcome(ListProjectsResult(outcome.GetResult()));
  }
  else
  {
    return ListProjectsOutcome(outcome.GetError());
  }
}

ListProjectsOutcomeCallable CodeBuildClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProjectsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::ListProjectsAsyncHelper(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProjects(request), context);
}

ListSourceCredentialsOutcome CodeBuildClient::ListSourceCredentials(const ListSourceCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSourceCredentialsOutcome(ListSourceCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return ListSourceCredentialsOutcome(outcome.GetError());
  }
}

ListSourceCredentialsOutcomeCallable CodeBuildClient::ListSourceCredentialsCallable(const ListSourceCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSourceCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSourceCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::ListSourceCredentialsAsync(const ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSourceCredentialsAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::ListSourceCredentialsAsyncHelper(const ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSourceCredentials(request), context);
}

StartBuildOutcome CodeBuildClient::StartBuild(const StartBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartBuildOutcome(StartBuildResult(outcome.GetResult()));
  }
  else
  {
    return StartBuildOutcome(outcome.GetError());
  }
}

StartBuildOutcomeCallable CodeBuildClient::StartBuildCallable(const StartBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::StartBuildAsync(const StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartBuildAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::StartBuildAsyncHelper(const StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartBuild(request), context);
}

StopBuildOutcome CodeBuildClient::StopBuild(const StopBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopBuildOutcome(StopBuildResult(outcome.GetResult()));
  }
  else
  {
    return StopBuildOutcome(outcome.GetError());
  }
}

StopBuildOutcomeCallable CodeBuildClient::StopBuildCallable(const StopBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::StopBuildAsync(const StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopBuildAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::StopBuildAsyncHelper(const StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopBuild(request), context);
}

UpdateProjectOutcome CodeBuildClient::UpdateProject(const UpdateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProjectOutcome(UpdateProjectResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProjectOutcome(outcome.GetError());
  }
}

UpdateProjectOutcomeCallable CodeBuildClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProjectAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::UpdateProjectAsyncHelper(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProject(request), context);
}

UpdateWebhookOutcome CodeBuildClient::UpdateWebhook(const UpdateWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateWebhookOutcome(UpdateWebhookResult(outcome.GetResult()));
  }
  else
  {
    return UpdateWebhookOutcome(outcome.GetError());
  }
}

UpdateWebhookOutcomeCallable CodeBuildClient::UpdateWebhookCallable(const UpdateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeBuildClient::UpdateWebhookAsync(const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWebhookAsyncHelper( request, handler, context ); } );
}

void CodeBuildClient::UpdateWebhookAsyncHelper(const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWebhook(request), context);
}

