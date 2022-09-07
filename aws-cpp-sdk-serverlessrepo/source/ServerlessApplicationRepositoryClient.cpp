/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/serverlessrepo/model/UnshareApplicationRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const AWSCredentials& credentials,
                                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServerlessApplicationRepositoryClient::~ServerlessApplicationRepositoryClient()
{
}

void ServerlessApplicationRepositoryClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ServerlessApplicationRepository");
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
  uri.AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable ServerlessApplicationRepositoryClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientCreateApplicationAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void ServerlessApplicationRepositoryClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
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
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetSemanticVersion());
  return CreateApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationVersionOutcomeCallable ServerlessApplicationRepositoryClient::CreateApplicationVersionCallable(const CreateApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientCreateApplicationVersionAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplicationVersion(request), context);
}

void ServerlessApplicationRepositoryClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientCreateApplicationVersionAsyncHelper( this, request, handler, context ); } );
}

CreateCloudFormationChangeSetOutcome ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSet(const CreateCloudFormationChangeSetRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCloudFormationChangeSet", "Required field: ApplicationId, is not set");
    return CreateCloudFormationChangeSetOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/changesets");
  return CreateCloudFormationChangeSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCloudFormationChangeSetOutcomeCallable ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSetCallable(const CreateCloudFormationChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFormationChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFormationChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientCreateCloudFormationChangeSetAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCloudFormationChangeSet(request), context);
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSetAsync(const CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientCreateCloudFormationChangeSetAsyncHelper( this, request, handler, context ); } );
}

CreateCloudFormationTemplateOutcome ServerlessApplicationRepositoryClient::CreateCloudFormationTemplate(const CreateCloudFormationTemplateRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCloudFormationTemplate", "Required field: ApplicationId, is not set");
    return CreateCloudFormationTemplateOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/templates");
  return CreateCloudFormationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCloudFormationTemplateOutcomeCallable ServerlessApplicationRepositoryClient::CreateCloudFormationTemplateCallable(const CreateCloudFormationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFormationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFormationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientCreateCloudFormationTemplateAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCloudFormationTemplate(request), context);
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationTemplateAsync(const CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientCreateCloudFormationTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome ServerlessApplicationRepositoryClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable ServerlessApplicationRepositoryClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientDeleteApplicationAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void ServerlessApplicationRepositoryClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

GetApplicationOutcome ServerlessApplicationRepositoryClient::GetApplication(const GetApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return GetApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable ServerlessApplicationRepositoryClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientGetApplicationAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplication(request), context);
}

void ServerlessApplicationRepositoryClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientGetApplicationAsyncHelper( this, request, handler, context ); } );
}

GetApplicationPolicyOutcome ServerlessApplicationRepositoryClient::GetApplicationPolicy(const GetApplicationPolicyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationPolicy", "Required field: ApplicationId, is not set");
    return GetApplicationPolicyOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/policy");
  return GetApplicationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationPolicyOutcomeCallable ServerlessApplicationRepositoryClient::GetApplicationPolicyCallable(const GetApplicationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientGetApplicationPolicyAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplicationPolicy(request), context);
}

void ServerlessApplicationRepositoryClient::GetApplicationPolicyAsync(const GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientGetApplicationPolicyAsyncHelper( this, request, handler, context ); } );
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
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  return GetCloudFormationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCloudFormationTemplateOutcomeCallable ServerlessApplicationRepositoryClient::GetCloudFormationTemplateCallable(const GetCloudFormationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFormationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFormationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientGetCloudFormationTemplateAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const GetCloudFormationTemplateRequest& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCloudFormationTemplate(request), context);
}

void ServerlessApplicationRepositoryClient::GetCloudFormationTemplateAsync(const GetCloudFormationTemplateRequest& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientGetCloudFormationTemplateAsyncHelper( this, request, handler, context ); } );
}

ListApplicationDependenciesOutcome ServerlessApplicationRepositoryClient::ListApplicationDependencies(const ListApplicationDependenciesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationDependencies", "Required field: ApplicationId, is not set");
    return ListApplicationDependenciesOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/dependencies");
  return ListApplicationDependenciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationDependenciesOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationDependenciesCallable(const ListApplicationDependenciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationDependenciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationDependencies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientListApplicationDependenciesAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationDependencies(request), context);
}

void ServerlessApplicationRepositoryClient::ListApplicationDependenciesAsync(const ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientListApplicationDependenciesAsyncHelper( this, request, handler, context ); } );
}

ListApplicationVersionsOutcome ServerlessApplicationRepositoryClient::ListApplicationVersions(const ListApplicationVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationVersions", "Required field: ApplicationId, is not set");
    return ListApplicationVersionsOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/versions");
  return ListApplicationVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationVersionsOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationVersionsCallable(const ListApplicationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientListApplicationVersionsAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationVersions(request), context);
}

void ServerlessApplicationRepositoryClient::ListApplicationVersionsAsync(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientListApplicationVersionsAsyncHelper( this, request, handler, context ); } );
}

ListApplicationsOutcome ServerlessApplicationRepositoryClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientListApplicationsAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplications(request), context);
}

void ServerlessApplicationRepositoryClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientListApplicationsAsyncHelper( this, request, handler, context ); } );
}

PutApplicationPolicyOutcome ServerlessApplicationRepositoryClient::PutApplicationPolicy(const PutApplicationPolicyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutApplicationPolicy", "Required field: ApplicationId, is not set");
    return PutApplicationPolicyOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/policy");
  return PutApplicationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutApplicationPolicyOutcomeCallable ServerlessApplicationRepositoryClient::PutApplicationPolicyCallable(const PutApplicationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutApplicationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutApplicationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientPutApplicationPolicyAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutApplicationPolicy(request), context);
}

void ServerlessApplicationRepositoryClient::PutApplicationPolicyAsync(const PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientPutApplicationPolicyAsyncHelper( this, request, handler, context ); } );
}

UnshareApplicationOutcome ServerlessApplicationRepositoryClient::UnshareApplication(const UnshareApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnshareApplication", "Required field: ApplicationId, is not set");
    return UnshareApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/unshare");
  return UnshareApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnshareApplicationOutcomeCallable ServerlessApplicationRepositoryClient::UnshareApplicationCallable(const UnshareApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnshareApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnshareApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientUnshareApplicationAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const UnshareApplicationRequest& request, const UnshareApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnshareApplication(request), context);
}

void ServerlessApplicationRepositoryClient::UnshareApplicationAsync(const UnshareApplicationRequest& request, const UnshareApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientUnshareApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome ServerlessApplicationRepositoryClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable ServerlessApplicationRepositoryClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClientUpdateApplicationAsyncHelper(ServerlessApplicationRepositoryClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void ServerlessApplicationRepositoryClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServerlessApplicationRepositoryClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

