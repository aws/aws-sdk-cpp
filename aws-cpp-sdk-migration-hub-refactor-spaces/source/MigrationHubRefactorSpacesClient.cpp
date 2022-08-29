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

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClient.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpoint.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrorMarshaller.h>
#include <aws/migration-hub-refactor-spaces/model/CreateApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListTagsForResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/PutResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/TagResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/UntagResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/UpdateRouteRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubRefactorSpaces;
using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "refactor-spaces";
static const char* ALLOCATION_TAG = "MigrationHubRefactorSpacesClient";

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const AWSCredentials& credentials,
                                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubRefactorSpacesClient::~MigrationHubRefactorSpacesClient()
{
}

void MigrationHubRefactorSpacesClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Migration Hub Refactor Spaces");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MigrationHubRefactorSpacesEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MigrationHubRefactorSpacesClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateApplicationOutcome MigrationHubRefactorSpacesClient::CreateApplication(const CreateApplicationRequest& request) const
{
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApplication", "Required field: EnvironmentIdentifier, is not set");
    return CreateApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable MigrationHubRefactorSpacesClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateEnvironmentOutcome MigrationHubRefactorSpacesClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments");
  return CreateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentOutcomeCallable MigrationHubRefactorSpacesClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEnvironmentAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::CreateEnvironmentAsyncHelper(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEnvironment(request), context);
}

CreateRouteOutcome MigrationHubRefactorSpacesClient::CreateRoute(const CreateRouteRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: ApplicationIdentifier, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: EnvironmentIdentifier, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/routes");
  return CreateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRouteOutcomeCallable MigrationHubRefactorSpacesClient::CreateRouteCallable(const CreateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRouteAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::CreateRouteAsyncHelper(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoute(request), context);
}

CreateServiceOutcome MigrationHubRefactorSpacesClient::CreateService(const CreateServiceRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateService", "Required field: ApplicationIdentifier, is not set");
    return CreateServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateService", "Required field: EnvironmentIdentifier, is not set");
    return CreateServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/services");
  return CreateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcomeCallable MigrationHubRefactorSpacesClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServiceAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::CreateServiceAsyncHelper(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateService(request), context);
}

DeleteApplicationOutcome MigrationHubRefactorSpacesClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationIdentifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: EnvironmentIdentifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable MigrationHubRefactorSpacesClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteEnvironmentOutcome MigrationHubRefactorSpacesClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentIdentifier, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  return DeleteEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentOutcomeCallable MigrationHubRefactorSpacesClient::DeleteEnvironmentCallable(const DeleteEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEnvironmentAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::DeleteEnvironmentAsyncHelper(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEnvironment(request), context);
}

DeleteResourcePolicyOutcome MigrationHubRefactorSpacesClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: Identifier, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resourcepolicy/");
  uri.AddPathSegment(request.GetIdentifier());
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable MigrationHubRefactorSpacesClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::DeleteResourcePolicyAsyncHelper(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicy(request), context);
}

DeleteRouteOutcome MigrationHubRefactorSpacesClient::DeleteRoute(const DeleteRouteRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: ApplicationIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: EnvironmentIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: RouteIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/routes/");
  uri.AddPathSegment(request.GetRouteIdentifier());
  return DeleteRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteOutcomeCallable MigrationHubRefactorSpacesClient::DeleteRouteCallable(const DeleteRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::DeleteRouteAsyncHelper(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoute(request), context);
}

DeleteServiceOutcome MigrationHubRefactorSpacesClient::DeleteService(const DeleteServiceRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ApplicationIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: EnvironmentIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ServiceIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/services/");
  uri.AddPathSegment(request.GetServiceIdentifier());
  return DeleteServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcomeCallable MigrationHubRefactorSpacesClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::DeleteServiceAsyncHelper(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteService(request), context);
}

GetApplicationOutcome MigrationHubRefactorSpacesClient::GetApplication(const GetApplicationRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationIdentifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: EnvironmentIdentifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  return GetApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable MigrationHubRefactorSpacesClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::GetApplicationAsyncHelper(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplication(request), context);
}

GetEnvironmentOutcome MigrationHubRefactorSpacesClient::GetEnvironment(const GetEnvironmentRequest& request) const
{
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentIdentifier, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  return GetEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentOutcomeCallable MigrationHubRefactorSpacesClient::GetEnvironmentCallable(const GetEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::GetEnvironmentAsync(const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEnvironmentAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::GetEnvironmentAsyncHelper(const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEnvironment(request), context);
}

GetResourcePolicyOutcome MigrationHubRefactorSpacesClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: Identifier, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resourcepolicy/");
  uri.AddPathSegment(request.GetIdentifier());
  return GetResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable MigrationHubRefactorSpacesClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcePolicyAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::GetResourcePolicyAsyncHelper(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourcePolicy(request), context);
}

GetRouteOutcome MigrationHubRefactorSpacesClient::GetRoute(const GetRouteRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: ApplicationIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: EnvironmentIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: RouteIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/routes/");
  uri.AddPathSegment(request.GetRouteIdentifier());
  return GetRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRouteOutcomeCallable MigrationHubRefactorSpacesClient::GetRouteCallable(const GetRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::GetRouteAsync(const GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRouteAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::GetRouteAsyncHelper(const GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoute(request), context);
}

GetServiceOutcome MigrationHubRefactorSpacesClient::GetService(const GetServiceRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ApplicationIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: EnvironmentIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ServiceIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/services/");
  uri.AddPathSegment(request.GetServiceIdentifier());
  return GetServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceOutcomeCallable MigrationHubRefactorSpacesClient::GetServiceCallable(const GetServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::GetServiceAsync(const GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::GetServiceAsyncHelper(const GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetService(request), context);
}

ListApplicationsOutcome MigrationHubRefactorSpacesClient::ListApplications(const ListApplicationsRequest& request) const
{
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplications", "Required field: EnvironmentIdentifier, is not set");
    return ListApplicationsOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable MigrationHubRefactorSpacesClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListEnvironmentVpcsOutcome MigrationHubRefactorSpacesClient::ListEnvironmentVpcs(const ListEnvironmentVpcsRequest& request) const
{
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironmentVpcs", "Required field: EnvironmentIdentifier, is not set");
    return ListEnvironmentVpcsOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/vpcs");
  return ListEnvironmentVpcsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentVpcsOutcomeCallable MigrationHubRefactorSpacesClient::ListEnvironmentVpcsCallable(const ListEnvironmentVpcsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentVpcsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironmentVpcs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::ListEnvironmentVpcsAsync(const ListEnvironmentVpcsRequest& request, const ListEnvironmentVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEnvironmentVpcsAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::ListEnvironmentVpcsAsyncHelper(const ListEnvironmentVpcsRequest& request, const ListEnvironmentVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEnvironmentVpcs(request), context);
}

ListEnvironmentsOutcome MigrationHubRefactorSpacesClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments");
  return ListEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentsOutcomeCallable MigrationHubRefactorSpacesClient::ListEnvironmentsCallable(const ListEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::ListEnvironmentsAsync(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEnvironmentsAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::ListEnvironmentsAsyncHelper(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEnvironments(request), context);
}

ListRoutesOutcome MigrationHubRefactorSpacesClient::ListRoutes(const ListRoutesRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: ApplicationIdentifier, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: EnvironmentIdentifier, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/routes");
  return ListRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutesOutcomeCallable MigrationHubRefactorSpacesClient::ListRoutesCallable(const ListRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::ListRoutesAsync(const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoutesAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::ListRoutesAsyncHelper(const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoutes(request), context);
}

ListServicesOutcome MigrationHubRefactorSpacesClient::ListServices(const ListServicesRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: ApplicationIdentifier, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: EnvironmentIdentifier, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/services");
  return ListServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable MigrationHubRefactorSpacesClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServicesAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::ListServicesAsyncHelper(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServices(request), context);
}

ListTagsForResourceOutcome MigrationHubRefactorSpacesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MigrationHubRefactorSpacesClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutResourcePolicyOutcome MigrationHubRefactorSpacesClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resourcepolicy");
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable MigrationHubRefactorSpacesClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutResourcePolicyAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::PutResourcePolicyAsyncHelper(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResourcePolicy(request), context);
}

TagResourceOutcome MigrationHubRefactorSpacesClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MigrationHubRefactorSpacesClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome MigrationHubRefactorSpacesClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MigrationHubRefactorSpacesClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateRouteOutcome MigrationHubRefactorSpacesClient::UpdateRoute(const UpdateRouteRequest& request) const
{
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: ApplicationIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: EnvironmentIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: RouteIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentIdentifier());
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationIdentifier());
  uri.AddPathSegments("/routes/");
  uri.AddPathSegment(request.GetRouteIdentifier());
  return UpdateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRouteOutcomeCallable MigrationHubRefactorSpacesClient::UpdateRouteCallable(const UpdateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubRefactorSpacesClient::UpdateRouteAsync(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRouteAsyncHelper( request, handler, context ); } );
}

void MigrationHubRefactorSpacesClient::UpdateRouteAsyncHelper(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoute(request), context);
}

