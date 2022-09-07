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

#include <aws/appconfig/AppConfigClient.h>
#include <aws/appconfig/AppConfigEndpoint.h>
#include <aws/appconfig/AppConfigErrorMarshaller.h>
#include <aws/appconfig/model/CreateApplicationRequest.h>
#include <aws/appconfig/model/CreateConfigurationProfileRequest.h>
#include <aws/appconfig/model/CreateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/CreateEnvironmentRequest.h>
#include <aws/appconfig/model/CreateExtensionRequest.h>
#include <aws/appconfig/model/CreateExtensionAssociationRequest.h>
#include <aws/appconfig/model/CreateHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/DeleteApplicationRequest.h>
#include <aws/appconfig/model/DeleteConfigurationProfileRequest.h>
#include <aws/appconfig/model/DeleteDeploymentStrategyRequest.h>
#include <aws/appconfig/model/DeleteEnvironmentRequest.h>
#include <aws/appconfig/model/DeleteExtensionRequest.h>
#include <aws/appconfig/model/DeleteExtensionAssociationRequest.h>
#include <aws/appconfig/model/DeleteHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/GetApplicationRequest.h>
#include <aws/appconfig/model/GetConfigurationProfileRequest.h>
#include <aws/appconfig/model/GetDeploymentRequest.h>
#include <aws/appconfig/model/GetDeploymentStrategyRequest.h>
#include <aws/appconfig/model/GetEnvironmentRequest.h>
#include <aws/appconfig/model/GetExtensionRequest.h>
#include <aws/appconfig/model/GetExtensionAssociationRequest.h>
#include <aws/appconfig/model/GetHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/ListApplicationsRequest.h>
#include <aws/appconfig/model/ListConfigurationProfilesRequest.h>
#include <aws/appconfig/model/ListDeploymentStrategiesRequest.h>
#include <aws/appconfig/model/ListDeploymentsRequest.h>
#include <aws/appconfig/model/ListEnvironmentsRequest.h>
#include <aws/appconfig/model/ListExtensionAssociationsRequest.h>
#include <aws/appconfig/model/ListExtensionsRequest.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsRequest.h>
#include <aws/appconfig/model/ListTagsForResourceRequest.h>
#include <aws/appconfig/model/StartDeploymentRequest.h>
#include <aws/appconfig/model/StopDeploymentRequest.h>
#include <aws/appconfig/model/TagResourceRequest.h>
#include <aws/appconfig/model/UntagResourceRequest.h>
#include <aws/appconfig/model/UpdateApplicationRequest.h>
#include <aws/appconfig/model/UpdateConfigurationProfileRequest.h>
#include <aws/appconfig/model/UpdateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/UpdateEnvironmentRequest.h>
#include <aws/appconfig/model/UpdateExtensionRequest.h>
#include <aws/appconfig/model/UpdateExtensionAssociationRequest.h>
#include <aws/appconfig/model/ValidateConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppConfig;
using namespace Aws::AppConfig::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "appconfig";
static const char* ALLOCATION_TAG = "AppConfigClient";

AppConfigClient::AppConfigClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppConfigClient::AppConfigClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppConfigClient::AppConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppConfigClient::~AppConfigClient()
{
}

void AppConfigClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppConfig");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppConfigEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppConfigClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateApplicationOutcome AppConfigClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable AppConfigClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientCreateApplicationAsyncHelper(AppConfigClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void AppConfigClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationProfileOutcome AppConfigClient::CreateConfigurationProfile(const CreateConfigurationProfileRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfigurationProfile", "Required field: ApplicationId, is not set");
    return CreateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles");
  return CreateConfigurationProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationProfileOutcomeCallable AppConfigClient::CreateConfigurationProfileCallable(const CreateConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientCreateConfigurationProfileAsyncHelper(AppConfigClient const * const clientThis, const CreateConfigurationProfileRequest& request, const CreateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationProfile(request), context);
}

void AppConfigClient::CreateConfigurationProfileAsync(const CreateConfigurationProfileRequest& request, const CreateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientCreateConfigurationProfileAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentStrategyOutcome AppConfigClient::CreateDeploymentStrategy(const CreateDeploymentStrategyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deploymentstrategies");
  return CreateDeploymentStrategyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentStrategyOutcomeCallable AppConfigClient::CreateDeploymentStrategyCallable(const CreateDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientCreateDeploymentStrategyAsyncHelper(AppConfigClient const * const clientThis, const CreateDeploymentStrategyRequest& request, const CreateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeploymentStrategy(request), context);
}

void AppConfigClient::CreateDeploymentStrategyAsync(const CreateDeploymentStrategyRequest& request, const CreateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientCreateDeploymentStrategyAsyncHelper( this, request, handler, context ); } );
}

CreateEnvironmentOutcome AppConfigClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEnvironment", "Required field: ApplicationId, is not set");
    return CreateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments");
  return CreateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentOutcomeCallable AppConfigClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientCreateEnvironmentAsyncHelper(AppConfigClient const * const clientThis, const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEnvironment(request), context);
}

void AppConfigClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientCreateEnvironmentAsyncHelper( this, request, handler, context ); } );
}

CreateExtensionOutcome AppConfigClient::CreateExtension(const CreateExtensionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensions");
  return CreateExtensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExtensionOutcomeCallable AppConfigClient::CreateExtensionCallable(const CreateExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientCreateExtensionAsyncHelper(AppConfigClient const * const clientThis, const CreateExtensionRequest& request, const CreateExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExtension(request), context);
}

void AppConfigClient::CreateExtensionAsync(const CreateExtensionRequest& request, const CreateExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientCreateExtensionAsyncHelper( this, request, handler, context ); } );
}

CreateExtensionAssociationOutcome AppConfigClient::CreateExtensionAssociation(const CreateExtensionAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensionassociations");
  return CreateExtensionAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExtensionAssociationOutcomeCallable AppConfigClient::CreateExtensionAssociationCallable(const CreateExtensionAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExtensionAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExtensionAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientCreateExtensionAssociationAsyncHelper(AppConfigClient const * const clientThis, const CreateExtensionAssociationRequest& request, const CreateExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExtensionAssociation(request), context);
}

void AppConfigClient::CreateExtensionAssociationAsync(const CreateExtensionAssociationRequest& request, const CreateExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientCreateExtensionAssociationAsyncHelper( this, request, handler, context ); } );
}

CreateHostedConfigurationVersionOutcome AppConfigClient::CreateHostedConfigurationVersion(const CreateHostedConfigurationVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateHostedConfigurationVersion", "Required field: ApplicationId, is not set");
    return CreateHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateHostedConfigurationVersion", "Required field: ConfigurationProfileId, is not set");
    return CreateHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  uri.AddPathSegments("/hostedconfigurationversions");
  return CreateHostedConfigurationVersionOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateHostedConfigurationVersionOutcomeCallable AppConfigClient::CreateHostedConfigurationVersionCallable(const CreateHostedConfigurationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHostedConfigurationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHostedConfigurationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientCreateHostedConfigurationVersionAsyncHelper(AppConfigClient const * const clientThis, const CreateHostedConfigurationVersionRequest& request, const CreateHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHostedConfigurationVersion(request), context);
}

void AppConfigClient::CreateHostedConfigurationVersionAsync(const CreateHostedConfigurationVersionRequest& request, const CreateHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientCreateHostedConfigurationVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome AppConfigClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable AppConfigClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientDeleteApplicationAsyncHelper(AppConfigClient const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void AppConfigClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationProfileOutcome AppConfigClient::DeleteConfigurationProfile(const DeleteConfigurationProfileRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationProfile", "Required field: ApplicationId, is not set");
    return DeleteConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationProfile", "Required field: ConfigurationProfileId, is not set");
    return DeleteConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  return DeleteConfigurationProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationProfileOutcomeCallable AppConfigClient::DeleteConfigurationProfileCallable(const DeleteConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientDeleteConfigurationProfileAsyncHelper(AppConfigClient const * const clientThis, const DeleteConfigurationProfileRequest& request, const DeleteConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationProfile(request), context);
}

void AppConfigClient::DeleteConfigurationProfileAsync(const DeleteConfigurationProfileRequest& request, const DeleteConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientDeleteConfigurationProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteDeploymentStrategyOutcome AppConfigClient::DeleteDeploymentStrategy(const DeleteDeploymentStrategyRequest& request) const
{
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return DeleteDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deployementstrategies/");
  uri.AddPathSegment(request.GetDeploymentStrategyId());
  return DeleteDeploymentStrategyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentStrategyOutcomeCallable AppConfigClient::DeleteDeploymentStrategyCallable(const DeleteDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientDeleteDeploymentStrategyAsyncHelper(AppConfigClient const * const clientThis, const DeleteDeploymentStrategyRequest& request, const DeleteDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeploymentStrategy(request), context);
}

void AppConfigClient::DeleteDeploymentStrategyAsync(const DeleteDeploymentStrategyRequest& request, const DeleteDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientDeleteDeploymentStrategyAsyncHelper( this, request, handler, context ); } );
}

DeleteEnvironmentOutcome AppConfigClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: ApplicationId, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  return DeleteEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentOutcomeCallable AppConfigClient::DeleteEnvironmentCallable(const DeleteEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientDeleteEnvironmentAsyncHelper(AppConfigClient const * const clientThis, const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEnvironment(request), context);
}

void AppConfigClient::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientDeleteEnvironmentAsyncHelper( this, request, handler, context ); } );
}

DeleteExtensionOutcome AppConfigClient::DeleteExtension(const DeleteExtensionRequest& request) const
{
  if (!request.ExtensionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExtension", "Required field: ExtensionIdentifier, is not set");
    return DeleteExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensions/");
  uri.AddPathSegment(request.GetExtensionIdentifier());
  return DeleteExtensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExtensionOutcomeCallable AppConfigClient::DeleteExtensionCallable(const DeleteExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientDeleteExtensionAsyncHelper(AppConfigClient const * const clientThis, const DeleteExtensionRequest& request, const DeleteExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExtension(request), context);
}

void AppConfigClient::DeleteExtensionAsync(const DeleteExtensionRequest& request, const DeleteExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientDeleteExtensionAsyncHelper( this, request, handler, context ); } );
}

DeleteExtensionAssociationOutcome AppConfigClient::DeleteExtensionAssociation(const DeleteExtensionAssociationRequest& request) const
{
  if (!request.ExtensionAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return DeleteExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensionassociations/");
  uri.AddPathSegment(request.GetExtensionAssociationId());
  return DeleteExtensionAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExtensionAssociationOutcomeCallable AppConfigClient::DeleteExtensionAssociationCallable(const DeleteExtensionAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExtensionAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExtensionAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientDeleteExtensionAssociationAsyncHelper(AppConfigClient const * const clientThis, const DeleteExtensionAssociationRequest& request, const DeleteExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExtensionAssociation(request), context);
}

void AppConfigClient::DeleteExtensionAssociationAsync(const DeleteExtensionAssociationRequest& request, const DeleteExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientDeleteExtensionAssociationAsyncHelper( this, request, handler, context ); } );
}

DeleteHostedConfigurationVersionOutcome AppConfigClient::DeleteHostedConfigurationVersion(const DeleteHostedConfigurationVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHostedConfigurationVersion", "Required field: ApplicationId, is not set");
    return DeleteHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHostedConfigurationVersion", "Required field: ConfigurationProfileId, is not set");
    return DeleteHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHostedConfigurationVersion", "Required field: VersionNumber, is not set");
    return DeleteHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  uri.AddPathSegments("/hostedconfigurationversions/");
  uri.AddPathSegment(request.GetVersionNumber());
  return DeleteHostedConfigurationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteHostedConfigurationVersionOutcomeCallable AppConfigClient::DeleteHostedConfigurationVersionCallable(const DeleteHostedConfigurationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHostedConfigurationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHostedConfigurationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientDeleteHostedConfigurationVersionAsyncHelper(AppConfigClient const * const clientThis, const DeleteHostedConfigurationVersionRequest& request, const DeleteHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHostedConfigurationVersion(request), context);
}

void AppConfigClient::DeleteHostedConfigurationVersionAsync(const DeleteHostedConfigurationVersionRequest& request, const DeleteHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientDeleteHostedConfigurationVersionAsyncHelper( this, request, handler, context ); } );
}

GetApplicationOutcome AppConfigClient::GetApplication(const GetApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return GetApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable AppConfigClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetApplicationAsyncHelper(AppConfigClient const * const clientThis, const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplication(request), context);
}

void AppConfigClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetApplicationAsyncHelper( this, request, handler, context ); } );
}

GetConfigurationProfileOutcome AppConfigClient::GetConfigurationProfile(const GetConfigurationProfileRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationProfile", "Required field: ApplicationId, is not set");
    return GetConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationProfile", "Required field: ConfigurationProfileId, is not set");
    return GetConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  return GetConfigurationProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationProfileOutcomeCallable AppConfigClient::GetConfigurationProfileCallable(const GetConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetConfigurationProfileAsyncHelper(AppConfigClient const * const clientThis, const GetConfigurationProfileRequest& request, const GetConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConfigurationProfile(request), context);
}

void AppConfigClient::GetConfigurationProfileAsync(const GetConfigurationProfileRequest& request, const GetConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetConfigurationProfileAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentOutcome AppConfigClient::GetDeployment(const GetDeploymentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: ApplicationId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: EnvironmentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DeploymentNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentNumber, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  uri.AddPathSegments("/deployments/");
  uri.AddPathSegment(request.GetDeploymentNumber());
  return GetDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcomeCallable AppConfigClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetDeploymentAsyncHelper(AppConfigClient const * const clientThis, const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeployment(request), context);
}

void AppConfigClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetDeploymentAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentStrategyOutcome AppConfigClient::GetDeploymentStrategy(const GetDeploymentStrategyRequest& request) const
{
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return GetDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deploymentstrategies/");
  uri.AddPathSegment(request.GetDeploymentStrategyId());
  return GetDeploymentStrategyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentStrategyOutcomeCallable AppConfigClient::GetDeploymentStrategyCallable(const GetDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetDeploymentStrategyAsyncHelper(AppConfigClient const * const clientThis, const GetDeploymentStrategyRequest& request, const GetDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeploymentStrategy(request), context);
}

void AppConfigClient::GetDeploymentStrategyAsync(const GetDeploymentStrategyRequest& request, const GetDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetDeploymentStrategyAsyncHelper( this, request, handler, context ); } );
}

GetEnvironmentOutcome AppConfigClient::GetEnvironment(const GetEnvironmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: ApplicationId, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentId, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  return GetEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentOutcomeCallable AppConfigClient::GetEnvironmentCallable(const GetEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetEnvironmentAsyncHelper(AppConfigClient const * const clientThis, const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEnvironment(request), context);
}

void AppConfigClient::GetEnvironmentAsync(const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetEnvironmentAsyncHelper( this, request, handler, context ); } );
}

GetExtensionOutcome AppConfigClient::GetExtension(const GetExtensionRequest& request) const
{
  if (!request.ExtensionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtension", "Required field: ExtensionIdentifier, is not set");
    return GetExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensions/");
  uri.AddPathSegment(request.GetExtensionIdentifier());
  return GetExtensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionOutcomeCallable AppConfigClient::GetExtensionCallable(const GetExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetExtensionAsyncHelper(AppConfigClient const * const clientThis, const GetExtensionRequest& request, const GetExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExtension(request), context);
}

void AppConfigClient::GetExtensionAsync(const GetExtensionRequest& request, const GetExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetExtensionAsyncHelper( this, request, handler, context ); } );
}

GetExtensionAssociationOutcome AppConfigClient::GetExtensionAssociation(const GetExtensionAssociationRequest& request) const
{
  if (!request.ExtensionAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return GetExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensionassociations/");
  uri.AddPathSegment(request.GetExtensionAssociationId());
  return GetExtensionAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionAssociationOutcomeCallable AppConfigClient::GetExtensionAssociationCallable(const GetExtensionAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExtensionAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExtensionAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetExtensionAssociationAsyncHelper(AppConfigClient const * const clientThis, const GetExtensionAssociationRequest& request, const GetExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExtensionAssociation(request), context);
}

void AppConfigClient::GetExtensionAssociationAsync(const GetExtensionAssociationRequest& request, const GetExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetExtensionAssociationAsyncHelper( this, request, handler, context ); } );
}

GetHostedConfigurationVersionOutcome AppConfigClient::GetHostedConfigurationVersion(const GetHostedConfigurationVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedConfigurationVersion", "Required field: ApplicationId, is not set");
    return GetHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedConfigurationVersion", "Required field: ConfigurationProfileId, is not set");
    return GetHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedConfigurationVersion", "Required field: VersionNumber, is not set");
    return GetHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  uri.AddPathSegments("/hostedconfigurationversions/");
  uri.AddPathSegment(request.GetVersionNumber());
  return GetHostedConfigurationVersionOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHostedConfigurationVersionOutcomeCallable AppConfigClient::GetHostedConfigurationVersionCallable(const GetHostedConfigurationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostedConfigurationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostedConfigurationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientGetHostedConfigurationVersionAsyncHelper(AppConfigClient const * const clientThis, const GetHostedConfigurationVersionRequest& request, const GetHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHostedConfigurationVersion(request), context);
}

void AppConfigClient::GetHostedConfigurationVersionAsync(const GetHostedConfigurationVersionRequest& request, const GetHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientGetHostedConfigurationVersionAsyncHelper( this, request, handler, context ); } );
}

ListApplicationsOutcome AppConfigClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable AppConfigClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListApplicationsAsyncHelper(AppConfigClient const * const clientThis, const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplications(request), context);
}

void AppConfigClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListApplicationsAsyncHelper( this, request, handler, context ); } );
}

ListConfigurationProfilesOutcome AppConfigClient::ListConfigurationProfiles(const ListConfigurationProfilesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfigurationProfiles", "Required field: ApplicationId, is not set");
    return ListConfigurationProfilesOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles");
  return ListConfigurationProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationProfilesOutcomeCallable AppConfigClient::ListConfigurationProfilesCallable(const ListConfigurationProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListConfigurationProfilesAsyncHelper(AppConfigClient const * const clientThis, const ListConfigurationProfilesRequest& request, const ListConfigurationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurationProfiles(request), context);
}

void AppConfigClient::ListConfigurationProfilesAsync(const ListConfigurationProfilesRequest& request, const ListConfigurationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListConfigurationProfilesAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentStrategiesOutcome AppConfigClient::ListDeploymentStrategies(const ListDeploymentStrategiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deploymentstrategies");
  return ListDeploymentStrategiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentStrategiesOutcomeCallable AppConfigClient::ListDeploymentStrategiesCallable(const ListDeploymentStrategiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentStrategiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentStrategies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListDeploymentStrategiesAsyncHelper(AppConfigClient const * const clientThis, const ListDeploymentStrategiesRequest& request, const ListDeploymentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeploymentStrategies(request), context);
}

void AppConfigClient::ListDeploymentStrategiesAsync(const ListDeploymentStrategiesRequest& request, const ListDeploymentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListDeploymentStrategiesAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentsOutcome AppConfigClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: ApplicationId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: EnvironmentId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  uri.AddPathSegments("/deployments");
  return ListDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentsOutcomeCallable AppConfigClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListDeploymentsAsyncHelper(AppConfigClient const * const clientThis, const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeployments(request), context);
}

void AppConfigClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListDeploymentsAsyncHelper( this, request, handler, context ); } );
}

ListEnvironmentsOutcome AppConfigClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: ApplicationId, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments");
  return ListEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentsOutcomeCallable AppConfigClient::ListEnvironmentsCallable(const ListEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListEnvironmentsAsyncHelper(AppConfigClient const * const clientThis, const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEnvironments(request), context);
}

void AppConfigClient::ListEnvironmentsAsync(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListEnvironmentsAsyncHelper( this, request, handler, context ); } );
}

ListExtensionAssociationsOutcome AppConfigClient::ListExtensionAssociations(const ListExtensionAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensionassociations");
  return ListExtensionAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionAssociationsOutcomeCallable AppConfigClient::ListExtensionAssociationsCallable(const ListExtensionAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExtensionAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExtensionAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListExtensionAssociationsAsyncHelper(AppConfigClient const * const clientThis, const ListExtensionAssociationsRequest& request, const ListExtensionAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExtensionAssociations(request), context);
}

void AppConfigClient::ListExtensionAssociationsAsync(const ListExtensionAssociationsRequest& request, const ListExtensionAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListExtensionAssociationsAsyncHelper( this, request, handler, context ); } );
}

ListExtensionsOutcome AppConfigClient::ListExtensions(const ListExtensionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensions");
  return ListExtensionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionsOutcomeCallable AppConfigClient::ListExtensionsCallable(const ListExtensionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExtensionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExtensions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListExtensionsAsyncHelper(AppConfigClient const * const clientThis, const ListExtensionsRequest& request, const ListExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExtensions(request), context);
}

void AppConfigClient::ListExtensionsAsync(const ListExtensionsRequest& request, const ListExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListExtensionsAsyncHelper( this, request, handler, context ); } );
}

ListHostedConfigurationVersionsOutcome AppConfigClient::ListHostedConfigurationVersions(const ListHostedConfigurationVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHostedConfigurationVersions", "Required field: ApplicationId, is not set");
    return ListHostedConfigurationVersionsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHostedConfigurationVersions", "Required field: ConfigurationProfileId, is not set");
    return ListHostedConfigurationVersionsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  uri.AddPathSegments("/hostedconfigurationversions");
  return ListHostedConfigurationVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListHostedConfigurationVersionsOutcomeCallable AppConfigClient::ListHostedConfigurationVersionsCallable(const ListHostedConfigurationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHostedConfigurationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHostedConfigurationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListHostedConfigurationVersionsAsyncHelper(AppConfigClient const * const clientThis, const ListHostedConfigurationVersionsRequest& request, const ListHostedConfigurationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHostedConfigurationVersions(request), context);
}

void AppConfigClient::ListHostedConfigurationVersionsAsync(const ListHostedConfigurationVersionsRequest& request, const ListHostedConfigurationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListHostedConfigurationVersionsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AppConfigClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppConfigClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientListTagsForResourceAsyncHelper(AppConfigClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AppConfigClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

StartDeploymentOutcome AppConfigClient::StartDeployment(const StartDeploymentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: ApplicationId, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: EnvironmentId, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  uri.AddPathSegments("/deployments");
  return StartDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeploymentOutcomeCallable AppConfigClient::StartDeploymentCallable(const StartDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientStartDeploymentAsyncHelper(AppConfigClient const * const clientThis, const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDeployment(request), context);
}

void AppConfigClient::StartDeploymentAsync(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientStartDeploymentAsyncHelper( this, request, handler, context ); } );
}

StopDeploymentOutcome AppConfigClient::StopDeployment(const StopDeploymentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDeployment", "Required field: ApplicationId, is not set");
    return StopDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDeployment", "Required field: EnvironmentId, is not set");
    return StopDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DeploymentNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDeployment", "Required field: DeploymentNumber, is not set");
    return StopDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  uri.AddPathSegments("/deployments/");
  uri.AddPathSegment(request.GetDeploymentNumber());
  return StopDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

StopDeploymentOutcomeCallable AppConfigClient::StopDeploymentCallable(const StopDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientStopDeploymentAsyncHelper(AppConfigClient const * const clientThis, const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDeployment(request), context);
}

void AppConfigClient::StopDeploymentAsync(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientStopDeploymentAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AppConfigClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppConfigClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientTagResourceAsyncHelper(AppConfigClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AppConfigClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AppConfigClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppConfigClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientUntagResourceAsyncHelper(AppConfigClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AppConfigClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome AppConfigClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable AppConfigClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientUpdateApplicationAsyncHelper(AppConfigClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void AppConfigClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationProfileOutcome AppConfigClient::UpdateConfigurationProfile(const UpdateConfigurationProfileRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationProfile", "Required field: ApplicationId, is not set");
    return UpdateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationProfile", "Required field: ConfigurationProfileId, is not set");
    return UpdateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  return UpdateConfigurationProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationProfileOutcomeCallable AppConfigClient::UpdateConfigurationProfileCallable(const UpdateConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientUpdateConfigurationProfileAsyncHelper(AppConfigClient const * const clientThis, const UpdateConfigurationProfileRequest& request, const UpdateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationProfile(request), context);
}

void AppConfigClient::UpdateConfigurationProfileAsync(const UpdateConfigurationProfileRequest& request, const UpdateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientUpdateConfigurationProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateDeploymentStrategyOutcome AppConfigClient::UpdateDeploymentStrategy(const UpdateDeploymentStrategyRequest& request) const
{
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return UpdateDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deploymentstrategies/");
  uri.AddPathSegment(request.GetDeploymentStrategyId());
  return UpdateDeploymentStrategyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeploymentStrategyOutcomeCallable AppConfigClient::UpdateDeploymentStrategyCallable(const UpdateDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientUpdateDeploymentStrategyAsyncHelper(AppConfigClient const * const clientThis, const UpdateDeploymentStrategyRequest& request, const UpdateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDeploymentStrategy(request), context);
}

void AppConfigClient::UpdateDeploymentStrategyAsync(const UpdateDeploymentStrategyRequest& request, const UpdateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientUpdateDeploymentStrategyAsyncHelper( this, request, handler, context ); } );
}

UpdateEnvironmentOutcome AppConfigClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: ApplicationId, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  return UpdateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentOutcomeCallable AppConfigClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientUpdateEnvironmentAsyncHelper(AppConfigClient const * const clientThis, const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEnvironment(request), context);
}

void AppConfigClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientUpdateEnvironmentAsyncHelper( this, request, handler, context ); } );
}

UpdateExtensionOutcome AppConfigClient::UpdateExtension(const UpdateExtensionRequest& request) const
{
  if (!request.ExtensionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExtension", "Required field: ExtensionIdentifier, is not set");
    return UpdateExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensions/");
  uri.AddPathSegment(request.GetExtensionIdentifier());
  return UpdateExtensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateExtensionOutcomeCallable AppConfigClient::UpdateExtensionCallable(const UpdateExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientUpdateExtensionAsyncHelper(AppConfigClient const * const clientThis, const UpdateExtensionRequest& request, const UpdateExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateExtension(request), context);
}

void AppConfigClient::UpdateExtensionAsync(const UpdateExtensionRequest& request, const UpdateExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientUpdateExtensionAsyncHelper( this, request, handler, context ); } );
}

UpdateExtensionAssociationOutcome AppConfigClient::UpdateExtensionAssociation(const UpdateExtensionAssociationRequest& request) const
{
  if (!request.ExtensionAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return UpdateExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extensionassociations/");
  uri.AddPathSegment(request.GetExtensionAssociationId());
  return UpdateExtensionAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateExtensionAssociationOutcomeCallable AppConfigClient::UpdateExtensionAssociationCallable(const UpdateExtensionAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExtensionAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExtensionAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientUpdateExtensionAssociationAsyncHelper(AppConfigClient const * const clientThis, const UpdateExtensionAssociationRequest& request, const UpdateExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateExtensionAssociation(request), context);
}

void AppConfigClient::UpdateExtensionAssociationAsync(const UpdateExtensionAssociationRequest& request, const UpdateExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientUpdateExtensionAssociationAsyncHelper( this, request, handler, context ); } );
}

ValidateConfigurationOutcome AppConfigClient::ValidateConfiguration(const ValidateConfigurationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ValidateConfiguration", "Required field: ApplicationId, is not set");
    return ValidateConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ValidateConfiguration", "Required field: ConfigurationProfileId, is not set");
    return ValidateConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  if (!request.ConfigurationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ValidateConfiguration", "Required field: ConfigurationVersion, is not set");
    return ValidateConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/configurationprofiles/");
  uri.AddPathSegment(request.GetConfigurationProfileId());
  uri.AddPathSegments("/validators");
  return ValidateConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateConfigurationOutcomeCallable AppConfigClient::ValidateConfigurationCallable(const ValidateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClientValidateConfigurationAsyncHelper(AppConfigClient const * const clientThis, const ValidateConfigurationRequest& request, const ValidateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ValidateConfiguration(request), context);
}

void AppConfigClient::ValidateConfigurationAsync(const ValidateConfigurationRequest& request, const ValidateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppConfigClientValidateConfigurationAsyncHelper( this, request, handler, context ); } );
}

