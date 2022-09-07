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

#include <aws/amplify/AmplifyClient.h>
#include <aws/amplify/AmplifyEndpoint.h>
#include <aws/amplify/AmplifyErrorMarshaller.h>
#include <aws/amplify/model/CreateAppRequest.h>
#include <aws/amplify/model/CreateBackendEnvironmentRequest.h>
#include <aws/amplify/model/CreateBranchRequest.h>
#include <aws/amplify/model/CreateDeploymentRequest.h>
#include <aws/amplify/model/CreateDomainAssociationRequest.h>
#include <aws/amplify/model/CreateWebhookRequest.h>
#include <aws/amplify/model/DeleteAppRequest.h>
#include <aws/amplify/model/DeleteBackendEnvironmentRequest.h>
#include <aws/amplify/model/DeleteBranchRequest.h>
#include <aws/amplify/model/DeleteDomainAssociationRequest.h>
#include <aws/amplify/model/DeleteJobRequest.h>
#include <aws/amplify/model/DeleteWebhookRequest.h>
#include <aws/amplify/model/GenerateAccessLogsRequest.h>
#include <aws/amplify/model/GetAppRequest.h>
#include <aws/amplify/model/GetArtifactUrlRequest.h>
#include <aws/amplify/model/GetBackendEnvironmentRequest.h>
#include <aws/amplify/model/GetBranchRequest.h>
#include <aws/amplify/model/GetDomainAssociationRequest.h>
#include <aws/amplify/model/GetJobRequest.h>
#include <aws/amplify/model/GetWebhookRequest.h>
#include <aws/amplify/model/ListAppsRequest.h>
#include <aws/amplify/model/ListArtifactsRequest.h>
#include <aws/amplify/model/ListBackendEnvironmentsRequest.h>
#include <aws/amplify/model/ListBranchesRequest.h>
#include <aws/amplify/model/ListDomainAssociationsRequest.h>
#include <aws/amplify/model/ListJobsRequest.h>
#include <aws/amplify/model/ListTagsForResourceRequest.h>
#include <aws/amplify/model/ListWebhooksRequest.h>
#include <aws/amplify/model/StartDeploymentRequest.h>
#include <aws/amplify/model/StartJobRequest.h>
#include <aws/amplify/model/StopJobRequest.h>
#include <aws/amplify/model/TagResourceRequest.h>
#include <aws/amplify/model/UntagResourceRequest.h>
#include <aws/amplify/model/UpdateAppRequest.h>
#include <aws/amplify/model/UpdateBranchRequest.h>
#include <aws/amplify/model/UpdateDomainAssociationRequest.h>
#include <aws/amplify/model/UpdateWebhookRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Amplify;
using namespace Aws::Amplify::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "amplify";
static const char* ALLOCATION_TAG = "AmplifyClient";

AmplifyClient::AmplifyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyClient::AmplifyClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyClient::AmplifyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyClient::~AmplifyClient()
{
}

void AmplifyClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Amplify");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AmplifyEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AmplifyClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAppOutcome AmplifyClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps");
  return CreateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable AmplifyClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientCreateAppAsyncHelper(AmplifyClient const * const clientThis, const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApp(request), context);
}

void AmplifyClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientCreateAppAsyncHelper( this, request, handler, context ); } );
}

CreateBackendEnvironmentOutcome AmplifyClient::CreateBackendEnvironment(const CreateBackendEnvironmentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendEnvironment", "Required field: AppId, is not set");
    return CreateBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/backendenvironments");
  return CreateBackendEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendEnvironmentOutcomeCallable AmplifyClient::CreateBackendEnvironmentCallable(const CreateBackendEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackendEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackendEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientCreateBackendEnvironmentAsyncHelper(AmplifyClient const * const clientThis, const CreateBackendEnvironmentRequest& request, const CreateBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBackendEnvironment(request), context);
}

void AmplifyClient::CreateBackendEnvironmentAsync(const CreateBackendEnvironmentRequest& request, const CreateBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientCreateBackendEnvironmentAsyncHelper( this, request, handler, context ); } );
}

CreateBranchOutcome AmplifyClient::CreateBranch(const CreateBranchRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBranch", "Required field: AppId, is not set");
    return CreateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches");
  return CreateBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBranchOutcomeCallable AmplifyClient::CreateBranchCallable(const CreateBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientCreateBranchAsyncHelper(AmplifyClient const * const clientThis, const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBranch(request), context);
}

void AmplifyClient::CreateBranchAsync(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientCreateBranchAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentOutcome AmplifyClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: AppId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: BranchName, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/deployments");
  return CreateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable AmplifyClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientCreateDeploymentAsyncHelper(AmplifyClient const * const clientThis, const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeployment(request), context);
}

void AmplifyClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientCreateDeploymentAsyncHelper( this, request, handler, context ); } );
}

CreateDomainAssociationOutcome AmplifyClient::CreateDomainAssociation(const CreateDomainAssociationRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomainAssociation", "Required field: AppId, is not set");
    return CreateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/domains");
  return CreateDomainAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainAssociationOutcomeCallable AmplifyClient::CreateDomainAssociationCallable(const CreateDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientCreateDomainAssociationAsyncHelper(AmplifyClient const * const clientThis, const CreateDomainAssociationRequest& request, const CreateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomainAssociation(request), context);
}

void AmplifyClient::CreateDomainAssociationAsync(const CreateDomainAssociationRequest& request, const CreateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientCreateDomainAssociationAsyncHelper( this, request, handler, context ); } );
}

CreateWebhookOutcome AmplifyClient::CreateWebhook(const CreateWebhookRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWebhook", "Required field: AppId, is not set");
    return CreateWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/webhooks");
  return CreateWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebhookOutcomeCallable AmplifyClient::CreateWebhookCallable(const CreateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientCreateWebhookAsyncHelper(AmplifyClient const * const clientThis, const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWebhook(request), context);
}

void AmplifyClient::CreateWebhookAsync(const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientCreateWebhookAsyncHelper( this, request, handler, context ); } );
}

DeleteAppOutcome AmplifyClient::DeleteApp(const DeleteAppRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: AppId, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  return DeleteAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable AmplifyClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientDeleteAppAsyncHelper(AmplifyClient const * const clientThis, const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApp(request), context);
}

void AmplifyClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientDeleteAppAsyncHelper( this, request, handler, context ); } );
}

DeleteBackendEnvironmentOutcome AmplifyClient::DeleteBackendEnvironment(const DeleteBackendEnvironmentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendEnvironment", "Required field: AppId, is not set");
    return DeleteBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendEnvironment", "Required field: EnvironmentName, is not set");
    return DeleteBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/backendenvironments/");
  uri.AddPathSegment(request.GetEnvironmentName());
  return DeleteBackendEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendEnvironmentOutcomeCallable AmplifyClient::DeleteBackendEnvironmentCallable(const DeleteBackendEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackendEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackendEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientDeleteBackendEnvironmentAsyncHelper(AmplifyClient const * const clientThis, const DeleteBackendEnvironmentRequest& request, const DeleteBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBackendEnvironment(request), context);
}

void AmplifyClient::DeleteBackendEnvironmentAsync(const DeleteBackendEnvironmentRequest& request, const DeleteBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientDeleteBackendEnvironmentAsyncHelper( this, request, handler, context ); } );
}

DeleteBranchOutcome AmplifyClient::DeleteBranch(const DeleteBranchRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBranch", "Required field: AppId, is not set");
    return DeleteBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBranch", "Required field: BranchName, is not set");
    return DeleteBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  return DeleteBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBranchOutcomeCallable AmplifyClient::DeleteBranchCallable(const DeleteBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientDeleteBranchAsyncHelper(AmplifyClient const * const clientThis, const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBranch(request), context);
}

void AmplifyClient::DeleteBranchAsync(const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientDeleteBranchAsyncHelper( this, request, handler, context ); } );
}

DeleteDomainAssociationOutcome AmplifyClient::DeleteDomainAssociation(const DeleteDomainAssociationRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainAssociation", "Required field: AppId, is not set");
    return DeleteDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainAssociation", "Required field: DomainName, is not set");
    return DeleteDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  return DeleteDomainAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainAssociationOutcomeCallable AmplifyClient::DeleteDomainAssociationCallable(const DeleteDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientDeleteDomainAssociationAsyncHelper(AmplifyClient const * const clientThis, const DeleteDomainAssociationRequest& request, const DeleteDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomainAssociation(request), context);
}

void AmplifyClient::DeleteDomainAssociationAsync(const DeleteDomainAssociationRequest& request, const DeleteDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientDeleteDomainAssociationAsyncHelper( this, request, handler, context ); } );
}

DeleteJobOutcome AmplifyClient::DeleteJob(const DeleteJobRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: AppId, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: BranchName, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: JobId, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DeleteJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable AmplifyClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientDeleteJobAsyncHelper(AmplifyClient const * const clientThis, const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteJob(request), context);
}

void AmplifyClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientDeleteJobAsyncHelper( this, request, handler, context ); } );
}

DeleteWebhookOutcome AmplifyClient::DeleteWebhook(const DeleteWebhookRequest& request) const
{
  if (!request.WebhookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWebhook", "Required field: WebhookId, is not set");
    return DeleteWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebhookId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/webhooks/");
  uri.AddPathSegment(request.GetWebhookId());
  return DeleteWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebhookOutcomeCallable AmplifyClient::DeleteWebhookCallable(const DeleteWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientDeleteWebhookAsyncHelper(AmplifyClient const * const clientThis, const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWebhook(request), context);
}

void AmplifyClient::DeleteWebhookAsync(const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientDeleteWebhookAsyncHelper( this, request, handler, context ); } );
}

GenerateAccessLogsOutcome AmplifyClient::GenerateAccessLogs(const GenerateAccessLogsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateAccessLogs", "Required field: AppId, is not set");
    return GenerateAccessLogsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/accesslogs");
  return GenerateAccessLogsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateAccessLogsOutcomeCallable AmplifyClient::GenerateAccessLogsCallable(const GenerateAccessLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateAccessLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateAccessLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGenerateAccessLogsAsyncHelper(AmplifyClient const * const clientThis, const GenerateAccessLogsRequest& request, const GenerateAccessLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateAccessLogs(request), context);
}

void AmplifyClient::GenerateAccessLogsAsync(const GenerateAccessLogsRequest& request, const GenerateAccessLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGenerateAccessLogsAsyncHelper( this, request, handler, context ); } );
}

GetAppOutcome AmplifyClient::GetApp(const GetAppRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApp", "Required field: AppId, is not set");
    return GetAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  return GetAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppOutcomeCallable AmplifyClient::GetAppCallable(const GetAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGetAppAsyncHelper(AmplifyClient const * const clientThis, const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApp(request), context);
}

void AmplifyClient::GetAppAsync(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGetAppAsyncHelper( this, request, handler, context ); } );
}

GetArtifactUrlOutcome AmplifyClient::GetArtifactUrl(const GetArtifactUrlRequest& request) const
{
  if (!request.ArtifactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArtifactUrl", "Required field: ArtifactId, is not set");
    return GetArtifactUrlOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ArtifactId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/artifacts/");
  uri.AddPathSegment(request.GetArtifactId());
  return GetArtifactUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetArtifactUrlOutcomeCallable AmplifyClient::GetArtifactUrlCallable(const GetArtifactUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetArtifactUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetArtifactUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGetArtifactUrlAsyncHelper(AmplifyClient const * const clientThis, const GetArtifactUrlRequest& request, const GetArtifactUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetArtifactUrl(request), context);
}

void AmplifyClient::GetArtifactUrlAsync(const GetArtifactUrlRequest& request, const GetArtifactUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGetArtifactUrlAsyncHelper( this, request, handler, context ); } );
}

GetBackendEnvironmentOutcome AmplifyClient::GetBackendEnvironment(const GetBackendEnvironmentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendEnvironment", "Required field: AppId, is not set");
    return GetBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendEnvironment", "Required field: EnvironmentName, is not set");
    return GetBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/backendenvironments/");
  uri.AddPathSegment(request.GetEnvironmentName());
  return GetBackendEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackendEnvironmentOutcomeCallable AmplifyClient::GetBackendEnvironmentCallable(const GetBackendEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackendEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGetBackendEnvironmentAsyncHelper(AmplifyClient const * const clientThis, const GetBackendEnvironmentRequest& request, const GetBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBackendEnvironment(request), context);
}

void AmplifyClient::GetBackendEnvironmentAsync(const GetBackendEnvironmentRequest& request, const GetBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGetBackendEnvironmentAsyncHelper( this, request, handler, context ); } );
}

GetBranchOutcome AmplifyClient::GetBranch(const GetBranchRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBranch", "Required field: AppId, is not set");
    return GetBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBranch", "Required field: BranchName, is not set");
    return GetBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  return GetBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBranchOutcomeCallable AmplifyClient::GetBranchCallable(const GetBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGetBranchAsyncHelper(AmplifyClient const * const clientThis, const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBranch(request), context);
}

void AmplifyClient::GetBranchAsync(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGetBranchAsyncHelper( this, request, handler, context ); } );
}

GetDomainAssociationOutcome AmplifyClient::GetDomainAssociation(const GetDomainAssociationRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainAssociation", "Required field: AppId, is not set");
    return GetDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainAssociation", "Required field: DomainName, is not set");
    return GetDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  return GetDomainAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainAssociationOutcomeCallable AmplifyClient::GetDomainAssociationCallable(const GetDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGetDomainAssociationAsyncHelper(AmplifyClient const * const clientThis, const GetDomainAssociationRequest& request, const GetDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainAssociation(request), context);
}

void AmplifyClient::GetDomainAssociationAsync(const GetDomainAssociationRequest& request, const GetDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGetDomainAssociationAsyncHelper( this, request, handler, context ); } );
}

GetJobOutcome AmplifyClient::GetJob(const GetJobRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: AppId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: BranchName, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return GetJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcomeCallable AmplifyClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGetJobAsyncHelper(AmplifyClient const * const clientThis, const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJob(request), context);
}

void AmplifyClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGetJobAsyncHelper( this, request, handler, context ); } );
}

GetWebhookOutcome AmplifyClient::GetWebhook(const GetWebhookRequest& request) const
{
  if (!request.WebhookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWebhook", "Required field: WebhookId, is not set");
    return GetWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebhookId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/webhooks/");
  uri.AddPathSegment(request.GetWebhookId());
  return GetWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWebhookOutcomeCallable AmplifyClient::GetWebhookCallable(const GetWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientGetWebhookAsyncHelper(AmplifyClient const * const clientThis, const GetWebhookRequest& request, const GetWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWebhook(request), context);
}

void AmplifyClient::GetWebhookAsync(const GetWebhookRequest& request, const GetWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientGetWebhookAsyncHelper( this, request, handler, context ); } );
}

ListAppsOutcome AmplifyClient::ListApps(const ListAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps");
  return ListAppsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppsOutcomeCallable AmplifyClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListAppsAsyncHelper(AmplifyClient const * const clientThis, const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApps(request), context);
}

void AmplifyClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListAppsAsyncHelper( this, request, handler, context ); } );
}

ListArtifactsOutcome AmplifyClient::ListArtifacts(const ListArtifactsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: AppId, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: BranchName, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: JobId, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/artifacts");
  return ListArtifactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListArtifactsOutcomeCallable AmplifyClient::ListArtifactsCallable(const ListArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListArtifactsAsyncHelper(AmplifyClient const * const clientThis, const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListArtifacts(request), context);
}

void AmplifyClient::ListArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListArtifactsAsyncHelper( this, request, handler, context ); } );
}

ListBackendEnvironmentsOutcome AmplifyClient::ListBackendEnvironments(const ListBackendEnvironmentsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackendEnvironments", "Required field: AppId, is not set");
    return ListBackendEnvironmentsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/backendenvironments");
  return ListBackendEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackendEnvironmentsOutcomeCallable AmplifyClient::ListBackendEnvironmentsCallable(const ListBackendEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackendEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackendEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListBackendEnvironmentsAsyncHelper(AmplifyClient const * const clientThis, const ListBackendEnvironmentsRequest& request, const ListBackendEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBackendEnvironments(request), context);
}

void AmplifyClient::ListBackendEnvironmentsAsync(const ListBackendEnvironmentsRequest& request, const ListBackendEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListBackendEnvironmentsAsyncHelper( this, request, handler, context ); } );
}

ListBranchesOutcome AmplifyClient::ListBranches(const ListBranchesRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBranches", "Required field: AppId, is not set");
    return ListBranchesOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches");
  return ListBranchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBranchesOutcomeCallable AmplifyClient::ListBranchesCallable(const ListBranchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBranchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBranches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListBranchesAsyncHelper(AmplifyClient const * const clientThis, const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBranches(request), context);
}

void AmplifyClient::ListBranchesAsync(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListBranchesAsyncHelper( this, request, handler, context ); } );
}

ListDomainAssociationsOutcome AmplifyClient::ListDomainAssociations(const ListDomainAssociationsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainAssociations", "Required field: AppId, is not set");
    return ListDomainAssociationsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/domains");
  return ListDomainAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainAssociationsOutcomeCallable AmplifyClient::ListDomainAssociationsCallable(const ListDomainAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListDomainAssociationsAsyncHelper(AmplifyClient const * const clientThis, const ListDomainAssociationsRequest& request, const ListDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomainAssociations(request), context);
}

void AmplifyClient::ListDomainAssociationsAsync(const ListDomainAssociationsRequest& request, const ListDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListDomainAssociationsAsyncHelper( this, request, handler, context ); } );
}

ListJobsOutcome AmplifyClient::ListJobs(const ListJobsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AppId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: BranchName, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/jobs");
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable AmplifyClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListJobsAsyncHelper(AmplifyClient const * const clientThis, const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobs(request), context);
}

void AmplifyClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListJobsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AmplifyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AmplifyClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListTagsForResourceAsyncHelper(AmplifyClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AmplifyClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWebhooksOutcome AmplifyClient::ListWebhooks(const ListWebhooksRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWebhooks", "Required field: AppId, is not set");
    return ListWebhooksOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/webhooks");
  return ListWebhooksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWebhooksOutcomeCallable AmplifyClient::ListWebhooksCallable(const ListWebhooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebhooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebhooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientListWebhooksAsyncHelper(AmplifyClient const * const clientThis, const ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWebhooks(request), context);
}

void AmplifyClient::ListWebhooksAsync(const ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientListWebhooksAsyncHelper( this, request, handler, context ); } );
}

StartDeploymentOutcome AmplifyClient::StartDeployment(const StartDeploymentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: AppId, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: BranchName, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/deployments/start");
  return StartDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeploymentOutcomeCallable AmplifyClient::StartDeploymentCallable(const StartDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientStartDeploymentAsyncHelper(AmplifyClient const * const clientThis, const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDeployment(request), context);
}

void AmplifyClient::StartDeploymentAsync(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientStartDeploymentAsyncHelper( this, request, handler, context ); } );
}

StartJobOutcome AmplifyClient::StartJob(const StartJobRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: AppId, is not set");
    return StartJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: BranchName, is not set");
    return StartJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/jobs");
  return StartJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartJobOutcomeCallable AmplifyClient::StartJobCallable(const StartJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientStartJobAsyncHelper(AmplifyClient const * const clientThis, const StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartJob(request), context);
}

void AmplifyClient::StartJobAsync(const StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientStartJobAsyncHelper( this, request, handler, context ); } );
}

StopJobOutcome AmplifyClient::StopJob(const StopJobRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: AppId, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: BranchName, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: JobId, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/stop");
  return StopJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

StopJobOutcomeCallable AmplifyClient::StopJobCallable(const StopJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientStopJobAsyncHelper(AmplifyClient const * const clientThis, const StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopJob(request), context);
}

void AmplifyClient::StopJobAsync(const StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientStopJobAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AmplifyClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AmplifyClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientTagResourceAsyncHelper(AmplifyClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AmplifyClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AmplifyClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AmplifyClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientUntagResourceAsyncHelper(AmplifyClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AmplifyClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAppOutcome AmplifyClient::UpdateApp(const UpdateAppRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApp", "Required field: AppId, is not set");
    return UpdateAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  return UpdateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppOutcomeCallable AmplifyClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientUpdateAppAsyncHelper(AmplifyClient const * const clientThis, const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApp(request), context);
}

void AmplifyClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientUpdateAppAsyncHelper( this, request, handler, context ); } );
}

UpdateBranchOutcome AmplifyClient::UpdateBranch(const UpdateBranchRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBranch", "Required field: AppId, is not set");
    return UpdateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBranch", "Required field: BranchName, is not set");
    return UpdateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/branches/");
  uri.AddPathSegment(request.GetBranchName());
  return UpdateBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBranchOutcomeCallable AmplifyClient::UpdateBranchCallable(const UpdateBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientUpdateBranchAsyncHelper(AmplifyClient const * const clientThis, const UpdateBranchRequest& request, const UpdateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBranch(request), context);
}

void AmplifyClient::UpdateBranchAsync(const UpdateBranchRequest& request, const UpdateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientUpdateBranchAsyncHelper( this, request, handler, context ); } );
}

UpdateDomainAssociationOutcome AmplifyClient::UpdateDomainAssociation(const UpdateDomainAssociationRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainAssociation", "Required field: AppId, is not set");
    return UpdateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainAssociation", "Required field: DomainName, is not set");
    return UpdateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apps/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/domains/");
  uri.AddPathSegment(request.GetDomainName());
  return UpdateDomainAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainAssociationOutcomeCallable AmplifyClient::UpdateDomainAssociationCallable(const UpdateDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientUpdateDomainAssociationAsyncHelper(AmplifyClient const * const clientThis, const UpdateDomainAssociationRequest& request, const UpdateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomainAssociation(request), context);
}

void AmplifyClient::UpdateDomainAssociationAsync(const UpdateDomainAssociationRequest& request, const UpdateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientUpdateDomainAssociationAsyncHelper( this, request, handler, context ); } );
}

UpdateWebhookOutcome AmplifyClient::UpdateWebhook(const UpdateWebhookRequest& request) const
{
  if (!request.WebhookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWebhook", "Required field: WebhookId, is not set");
    return UpdateWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebhookId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/webhooks/");
  uri.AddPathSegment(request.GetWebhookId());
  return UpdateWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebhookOutcomeCallable AmplifyClient::UpdateWebhookCallable(const UpdateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClientUpdateWebhookAsyncHelper(AmplifyClient const * const clientThis, const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWebhook(request), context);
}

void AmplifyClient::UpdateWebhookAsync(const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AmplifyClientUpdateWebhookAsyncHelper( this, request, handler, context ); } );
}

