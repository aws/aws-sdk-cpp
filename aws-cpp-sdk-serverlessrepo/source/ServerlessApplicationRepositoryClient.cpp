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

#include <aws/serverlessrepo/ServerlessApplicationRepositoryClient.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpoint.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrorMarshaller.h>
#include <aws/serverlessrepo/model/CreateApplicationRequest.h>
#include <aws/serverlessrepo/model/CreateApplicationVersionRequest.h>
#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetRequest.h>
#include <aws/serverlessrepo/model/CreateCloudFormationTemplateRequest.h>
#include <aws/serverlessrepo/model/DeleteApplicationRequest.h>
#include <aws/serverlessrepo/model/GetApplicationRequest.h>
#include <aws/serverlessrepo/model/GetApplicationPolicyRequest.h>
#include <aws/serverlessrepo/model/GetCloudFormationTemplateRequest.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesRequest.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsRequest.h>
#include <aws/serverlessrepo/model/ListApplicationsRequest.h>
#include <aws/serverlessrepo/model/PutApplicationPolicyRequest.h>
#include <aws/serverlessrepo/model/UpdateApplicationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServerlessApplicationRepository;
using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "serverlessrepo";
static const char* ALLOCATION_TAG = "ServerlessApplicationRepositoryClient";


ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServerlessApplicationRepositoryClient::~ServerlessApplicationRepositoryClient()
{
}

void ServerlessApplicationRepositoryClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ServerlessApplicationRepositoryEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ServerlessApplicationRepositoryClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateApplicationOutcome ServerlessApplicationRepositoryClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateApplicationOutcome(CreateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationOutcome(outcome.GetError());
  }
}

CreateApplicationOutcomeCallable ServerlessApplicationRepositoryClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateApplicationVersionOutcome ServerlessApplicationRepositoryClient::CreateApplicationVersion(const CreateApplicationVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApplicationVersion", "Required field: ApplicationId, is not set");
    return CreateApplicationVersionOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SemanticVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApplicationVersion", "Required field: SemanticVersion, is not set");
    return CreateApplicationVersionOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SemanticVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/versions/";
  ss << request.GetSemanticVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateApplicationVersionOutcome(CreateApplicationVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationVersionOutcome(outcome.GetError());
  }
}

CreateApplicationVersionOutcomeCallable ServerlessApplicationRepositoryClient::CreateApplicationVersionCallable(const CreateApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationVersionAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::CreateApplicationVersionAsyncHelper(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplicationVersion(request), context);
}

CreateCloudFormationChangeSetOutcome ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSet(const CreateCloudFormationChangeSetRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCloudFormationChangeSet", "Required field: ApplicationId, is not set");
    return CreateCloudFormationChangeSetOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/changesets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCloudFormationChangeSetOutcome(CreateCloudFormationChangeSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFormationChangeSetOutcome(outcome.GetError());
  }
}

CreateCloudFormationChangeSetOutcomeCallable ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSetCallable(const CreateCloudFormationChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFormationChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFormationChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSetAsync(const CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFormationChangeSetAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSetAsyncHelper(const CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFormationChangeSet(request), context);
}

CreateCloudFormationTemplateOutcome ServerlessApplicationRepositoryClient::CreateCloudFormationTemplate(const CreateCloudFormationTemplateRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCloudFormationTemplate", "Required field: ApplicationId, is not set");
    return CreateCloudFormationTemplateOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/templates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCloudFormationTemplateOutcome(CreateCloudFormationTemplateResult(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFormationTemplateOutcome(outcome.GetError());
  }
}

CreateCloudFormationTemplateOutcomeCallable ServerlessApplicationRepositoryClient::CreateCloudFormationTemplateCallable(const CreateCloudFormationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFormationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFormationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationTemplateAsync(const CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFormationTemplateAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationTemplateAsyncHelper(const CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFormationTemplate(request), context);
}

DeleteApplicationOutcome ServerlessApplicationRepositoryClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApplicationOutcome(NoResult());
  }
  else
  {
    return DeleteApplicationOutcome(outcome.GetError());
  }
}

DeleteApplicationOutcomeCallable ServerlessApplicationRepositoryClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

GetApplicationOutcome ServerlessApplicationRepositoryClient::GetApplication(const GetApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApplicationOutcome(GetApplicationResult(outcome.GetResult()));
  }
  else
  {
    return GetApplicationOutcome(outcome.GetError());
  }
}

GetApplicationOutcomeCallable ServerlessApplicationRepositoryClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::GetApplicationAsyncHelper(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplication(request), context);
}

GetApplicationPolicyOutcome ServerlessApplicationRepositoryClient::GetApplicationPolicy(const GetApplicationPolicyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationPolicy", "Required field: ApplicationId, is not set");
    return GetApplicationPolicyOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApplicationPolicyOutcome(GetApplicationPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetApplicationPolicyOutcome(outcome.GetError());
  }
}

GetApplicationPolicyOutcomeCallable ServerlessApplicationRepositoryClient::GetApplicationPolicyCallable(const GetApplicationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::GetApplicationPolicyAsync(const GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationPolicyAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::GetApplicationPolicyAsyncHelper(const GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplicationPolicy(request), context);
}

GetCloudFormationTemplateOutcome ServerlessApplicationRepositoryClient::GetCloudFormationTemplate(const GetCloudFormationTemplateRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFormationTemplate", "Required field: ApplicationId, is not set");
    return GetCloudFormationTemplateOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFormationTemplate", "Required field: TemplateId, is not set");
    return GetCloudFormationTemplateOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/templates/";
  ss << request.GetTemplateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCloudFormationTemplateOutcome(GetCloudFormationTemplateResult(outcome.GetResult()));
  }
  else
  {
    return GetCloudFormationTemplateOutcome(outcome.GetError());
  }
}

GetCloudFormationTemplateOutcomeCallable ServerlessApplicationRepositoryClient::GetCloudFormationTemplateCallable(const GetCloudFormationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFormationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFormationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::GetCloudFormationTemplateAsync(const GetCloudFormationTemplateRequest& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFormationTemplateAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::GetCloudFormationTemplateAsyncHelper(const GetCloudFormationTemplateRequest& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFormationTemplate(request), context);
}

ListApplicationDependenciesOutcome ServerlessApplicationRepositoryClient::ListApplicationDependencies(const ListApplicationDependenciesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationDependencies", "Required field: ApplicationId, is not set");
    return ListApplicationDependenciesOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/dependencies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListApplicationDependenciesOutcome(ListApplicationDependenciesResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationDependenciesOutcome(outcome.GetError());
  }
}

ListApplicationDependenciesOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationDependenciesCallable(const ListApplicationDependenciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationDependenciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationDependencies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::ListApplicationDependenciesAsync(const ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationDependenciesAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::ListApplicationDependenciesAsyncHelper(const ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationDependencies(request), context);
}

ListApplicationVersionsOutcome ServerlessApplicationRepositoryClient::ListApplicationVersions(const ListApplicationVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationVersions", "Required field: ApplicationId, is not set");
    return ListApplicationVersionsOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListApplicationVersionsOutcome(ListApplicationVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationVersionsOutcome(outcome.GetError());
  }
}

ListApplicationVersionsOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationVersionsCallable(const ListApplicationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::ListApplicationVersionsAsync(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationVersionsAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::ListApplicationVersionsAsyncHelper(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationVersions(request), context);
}

ListApplicationsOutcome ServerlessApplicationRepositoryClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListApplicationsOutcome(ListApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationsOutcome(outcome.GetError());
  }
}

ListApplicationsOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

PutApplicationPolicyOutcome ServerlessApplicationRepositoryClient::PutApplicationPolicy(const PutApplicationPolicyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutApplicationPolicy", "Required field: ApplicationId, is not set");
    return PutApplicationPolicyOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutApplicationPolicyOutcome(PutApplicationPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutApplicationPolicyOutcome(outcome.GetError());
  }
}

PutApplicationPolicyOutcomeCallable ServerlessApplicationRepositoryClient::PutApplicationPolicyCallable(const PutApplicationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutApplicationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutApplicationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::PutApplicationPolicyAsync(const PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutApplicationPolicyAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::PutApplicationPolicyAsyncHelper(const PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutApplicationPolicy(request), context);
}

UpdateApplicationOutcome ServerlessApplicationRepositoryClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApplicationOutcome(UpdateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApplicationOutcome(outcome.GetError());
  }
}

UpdateApplicationOutcomeCallable ServerlessApplicationRepositoryClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void ServerlessApplicationRepositoryClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

