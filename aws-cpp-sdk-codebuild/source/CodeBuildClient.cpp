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
#include <aws/codebuild/CodeBuildClient.h>
#include <aws/codebuild/CodeBuildEndpoint.h>
#include <aws/codebuild/CodeBuildErrorMarshaller.h>
#include <aws/codebuild/model/BatchGetBuildsRequest.h>
#include <aws/codebuild/model/BatchGetProjectsRequest.h>
#include <aws/codebuild/model/CreateProjectRequest.h>
#include <aws/codebuild/model/DeleteProjectRequest.h>
#include <aws/codebuild/model/ListBuildsRequest.h>
#include <aws/codebuild/model/ListBuildsForProjectRequest.h>
#include <aws/codebuild/model/ListCuratedEnvironmentImagesRequest.h>
#include <aws/codebuild/model/ListProjectsRequest.h>
#include <aws/codebuild/model/StartBuildRequest.h>
#include <aws/codebuild/model/StopBuildRequest.h>
#include <aws/codebuild/model/UpdateProjectRequest.h>

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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CodeBuildEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchGetBuildsOutcome CodeBuildClient::BatchGetBuilds(const BatchGetBuildsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

DeleteProjectOutcome CodeBuildClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

ListBuildsOutcome CodeBuildClient::ListBuilds(const ListBuildsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

StartBuildOutcome CodeBuildClient::StartBuild(const StartBuildRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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

