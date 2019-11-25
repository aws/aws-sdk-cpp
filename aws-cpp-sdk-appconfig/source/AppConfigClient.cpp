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

#include <aws/appconfig/AppConfigClient.h>
#include <aws/appconfig/AppConfigEndpoint.h>
#include <aws/appconfig/AppConfigErrorMarshaller.h>
#include <aws/appconfig/model/CreateApplicationRequest.h>
#include <aws/appconfig/model/CreateConfigurationProfileRequest.h>
#include <aws/appconfig/model/CreateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/CreateEnvironmentRequest.h>
#include <aws/appconfig/model/DeleteApplicationRequest.h>
#include <aws/appconfig/model/DeleteConfigurationProfileRequest.h>
#include <aws/appconfig/model/DeleteDeploymentStrategyRequest.h>
#include <aws/appconfig/model/DeleteEnvironmentRequest.h>
#include <aws/appconfig/model/GetApplicationRequest.h>
#include <aws/appconfig/model/GetConfigurationRequest.h>
#include <aws/appconfig/model/GetConfigurationProfileRequest.h>
#include <aws/appconfig/model/GetDeploymentRequest.h>
#include <aws/appconfig/model/GetDeploymentStrategyRequest.h>
#include <aws/appconfig/model/GetEnvironmentRequest.h>
#include <aws/appconfig/model/ListApplicationsRequest.h>
#include <aws/appconfig/model/ListConfigurationProfilesRequest.h>
#include <aws/appconfig/model/ListDeploymentStrategiesRequest.h>
#include <aws/appconfig/model/ListDeploymentsRequest.h>
#include <aws/appconfig/model/ListEnvironmentsRequest.h>
#include <aws/appconfig/model/ListTagsForResourceRequest.h>
#include <aws/appconfig/model/StartDeploymentRequest.h>
#include <aws/appconfig/model/StopDeploymentRequest.h>
#include <aws/appconfig/model/TagResourceRequest.h>
#include <aws/appconfig/model/UntagResourceRequest.h>
#include <aws/appconfig/model/UpdateApplicationRequest.h>
#include <aws/appconfig/model/UpdateConfigurationProfileRequest.h>
#include <aws/appconfig/model/UpdateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/UpdateEnvironmentRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppConfigClient::AppConfigClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppConfigClient::AppConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppConfigClient::~AppConfigClient()
{
}

void AppConfigClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/applications";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateApplicationOutcome(CreateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationOutcome(outcome.GetError());
  }
}

CreateApplicationOutcomeCallable AppConfigClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateConfigurationProfileOutcome AppConfigClient::CreateConfigurationProfile(const CreateConfigurationProfileRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfigurationProfile", "Required field: ApplicationId, is not set");
    return CreateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/configurationprofiles";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConfigurationProfileOutcome(CreateConfigurationProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigurationProfileOutcome(outcome.GetError());
  }
}

CreateConfigurationProfileOutcomeCallable AppConfigClient::CreateConfigurationProfileCallable(const CreateConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::CreateConfigurationProfileAsync(const CreateConfigurationProfileRequest& request, const CreateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationProfileAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::CreateConfigurationProfileAsyncHelper(const CreateConfigurationProfileRequest& request, const CreateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfigurationProfile(request), context);
}

CreateDeploymentStrategyOutcome AppConfigClient::CreateDeploymentStrategy(const CreateDeploymentStrategyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deploymentstrategies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentStrategyOutcome(CreateDeploymentStrategyResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentStrategyOutcome(outcome.GetError());
  }
}

CreateDeploymentStrategyOutcomeCallable AppConfigClient::CreateDeploymentStrategyCallable(const CreateDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::CreateDeploymentStrategyAsync(const CreateDeploymentStrategyRequest& request, const CreateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentStrategyAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::CreateDeploymentStrategyAsyncHelper(const CreateDeploymentStrategyRequest& request, const CreateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeploymentStrategy(request), context);
}

CreateEnvironmentOutcome AppConfigClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEnvironment", "Required field: ApplicationId, is not set");
    return CreateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEnvironmentOutcome(CreateEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return CreateEnvironmentOutcome(outcome.GetError());
  }
}

CreateEnvironmentOutcomeCallable AppConfigClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEnvironmentAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::CreateEnvironmentAsyncHelper(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEnvironment(request), context);
}

DeleteApplicationOutcome AppConfigClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApplicationOutcome(NoResult());
  }
  else
  {
    return DeleteApplicationOutcome(outcome.GetError());
  }
}

DeleteApplicationOutcomeCallable AppConfigClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/configurationprofiles/";
  ss << request.GetConfigurationProfileId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationProfileOutcome(NoResult());
  }
  else
  {
    return DeleteConfigurationProfileOutcome(outcome.GetError());
  }
}

DeleteConfigurationProfileOutcomeCallable AppConfigClient::DeleteConfigurationProfileCallable(const DeleteConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::DeleteConfigurationProfileAsync(const DeleteConfigurationProfileRequest& request, const DeleteConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationProfileAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::DeleteConfigurationProfileAsyncHelper(const DeleteConfigurationProfileRequest& request, const DeleteConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationProfile(request), context);
}

DeleteDeploymentStrategyOutcome AppConfigClient::DeleteDeploymentStrategy(const DeleteDeploymentStrategyRequest& request) const
{
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return DeleteDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deployementstrategies/";
  ss << request.GetDeploymentStrategyId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDeploymentStrategyOutcome(NoResult());
  }
  else
  {
    return DeleteDeploymentStrategyOutcome(outcome.GetError());
  }
}

DeleteDeploymentStrategyOutcomeCallable AppConfigClient::DeleteDeploymentStrategyCallable(const DeleteDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::DeleteDeploymentStrategyAsync(const DeleteDeploymentStrategyRequest& request, const DeleteDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeploymentStrategyAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::DeleteDeploymentStrategyAsyncHelper(const DeleteDeploymentStrategyRequest& request, const DeleteDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeploymentStrategy(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments/";
  ss << request.GetEnvironmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEnvironmentOutcome(NoResult());
  }
  else
  {
    return DeleteEnvironmentOutcome(outcome.GetError());
  }
}

DeleteEnvironmentOutcomeCallable AppConfigClient::DeleteEnvironmentCallable(const DeleteEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEnvironmentAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::DeleteEnvironmentAsyncHelper(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEnvironment(request), context);
}

GetApplicationOutcome AppConfigClient::GetApplication(const GetApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApplicationOutcome(GetApplicationResult(outcome.GetResult()));
  }
  else
  {
    return GetApplicationOutcome(outcome.GetError());
  }
}

GetApplicationOutcomeCallable AppConfigClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::GetApplicationAsyncHelper(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplication(request), context);
}

GetConfigurationOutcome AppConfigClient::GetConfiguration(const GetConfigurationRequest& request) const
{
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguration", "Required field: Application, is not set");
    return GetConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.EnvironmentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguration", "Required field: Environment, is not set");
    return GetConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Environment]", false));
  }
  if (!request.ConfigurationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguration", "Required field: Configuration, is not set");
    return GetConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Configuration]", false));
  }
  if (!request.ClientIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguration", "Required field: ClientId, is not set");
    return GetConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplication();
  ss << "/environments/";
  ss << request.GetEnvironment();
  ss << "/configurations/";
  ss << request.GetConfiguration();
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetConfigurationOutcome(GetConfigurationResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetConfigurationOutcome(outcome.GetError());
  }
}

GetConfigurationOutcomeCallable AppConfigClient::GetConfigurationCallable(const GetConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::GetConfigurationAsync(const GetConfigurationRequest& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConfigurationAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::GetConfigurationAsyncHelper(const GetConfigurationRequest& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConfiguration(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/configurationprofiles/";
  ss << request.GetConfigurationProfileId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConfigurationProfileOutcome(GetConfigurationProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetConfigurationProfileOutcome(outcome.GetError());
  }
}

GetConfigurationProfileOutcomeCallable AppConfigClient::GetConfigurationProfileCallable(const GetConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::GetConfigurationProfileAsync(const GetConfigurationProfileRequest& request, const GetConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConfigurationProfileAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::GetConfigurationProfileAsyncHelper(const GetConfigurationProfileRequest& request, const GetConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConfigurationProfile(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments/";
  ss << request.GetEnvironmentId();
  ss << "/deployments/";
  ss << request.GetDeploymentNumber();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeploymentOutcome(GetDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentOutcome(outcome.GetError());
  }
}

GetDeploymentOutcomeCallable AppConfigClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::GetDeploymentAsyncHelper(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeployment(request), context);
}

GetDeploymentStrategyOutcome AppConfigClient::GetDeploymentStrategy(const GetDeploymentStrategyRequest& request) const
{
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return GetDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deploymentstrategies/";
  ss << request.GetDeploymentStrategyId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeploymentStrategyOutcome(GetDeploymentStrategyResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentStrategyOutcome(outcome.GetError());
  }
}

GetDeploymentStrategyOutcomeCallable AppConfigClient::GetDeploymentStrategyCallable(const GetDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::GetDeploymentStrategyAsync(const GetDeploymentStrategyRequest& request, const GetDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentStrategyAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::GetDeploymentStrategyAsyncHelper(const GetDeploymentStrategyRequest& request, const GetDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentStrategy(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments/";
  ss << request.GetEnvironmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEnvironmentOutcome(GetEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return GetEnvironmentOutcome(outcome.GetError());
  }
}

GetEnvironmentOutcomeCallable AppConfigClient::GetEnvironmentCallable(const GetEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::GetEnvironmentAsync(const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEnvironmentAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::GetEnvironmentAsyncHelper(const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEnvironment(request), context);
}

ListApplicationsOutcome AppConfigClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListApplicationsOutcome(ListApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationsOutcome(outcome.GetError());
  }
}

ListApplicationsOutcomeCallable AppConfigClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListConfigurationProfilesOutcome AppConfigClient::ListConfigurationProfiles(const ListConfigurationProfilesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfigurationProfiles", "Required field: ApplicationId, is not set");
    return ListConfigurationProfilesOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/configurationprofiles";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListConfigurationProfilesOutcome(ListConfigurationProfilesResult(outcome.GetResult()));
  }
  else
  {
    return ListConfigurationProfilesOutcome(outcome.GetError());
  }
}

ListConfigurationProfilesOutcomeCallable AppConfigClient::ListConfigurationProfilesCallable(const ListConfigurationProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::ListConfigurationProfilesAsync(const ListConfigurationProfilesRequest& request, const ListConfigurationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConfigurationProfilesAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::ListConfigurationProfilesAsyncHelper(const ListConfigurationProfilesRequest& request, const ListConfigurationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConfigurationProfiles(request), context);
}

ListDeploymentStrategiesOutcome AppConfigClient::ListDeploymentStrategies(const ListDeploymentStrategiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deploymentstrategies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeploymentStrategiesOutcome(ListDeploymentStrategiesResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentStrategiesOutcome(outcome.GetError());
  }
}

ListDeploymentStrategiesOutcomeCallable AppConfigClient::ListDeploymentStrategiesCallable(const ListDeploymentStrategiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentStrategiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentStrategies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::ListDeploymentStrategiesAsync(const ListDeploymentStrategiesRequest& request, const ListDeploymentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentStrategiesAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::ListDeploymentStrategiesAsyncHelper(const ListDeploymentStrategiesRequest& request, const ListDeploymentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentStrategies(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments/";
  ss << request.GetEnvironmentId();
  ss << "/deployments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeploymentsOutcome(ListDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentsOutcome(outcome.GetError());
  }
}

ListDeploymentsOutcomeCallable AppConfigClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentsAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::ListDeploymentsAsyncHelper(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeployments(request), context);
}

ListEnvironmentsOutcome AppConfigClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: ApplicationId, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEnvironmentsOutcome(ListEnvironmentsResult(outcome.GetResult()));
  }
  else
  {
    return ListEnvironmentsOutcome(outcome.GetError());
  }
}

ListEnvironmentsOutcomeCallable AppConfigClient::ListEnvironmentsCallable(const ListEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::ListEnvironmentsAsync(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEnvironmentsAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::ListEnvironmentsAsyncHelper(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEnvironments(request), context);
}

ListTagsForResourceOutcome AppConfigClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable AppConfigClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments/";
  ss << request.GetEnvironmentId();
  ss << "/deployments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDeploymentOutcome(StartDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return StartDeploymentOutcome(outcome.GetError());
  }
}

StartDeploymentOutcomeCallable AppConfigClient::StartDeploymentCallable(const StartDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::StartDeploymentAsync(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDeploymentAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::StartDeploymentAsyncHelper(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDeployment(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments/";
  ss << request.GetEnvironmentId();
  ss << "/deployments/";
  ss << request.GetDeploymentNumber();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopDeploymentOutcome(StopDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return StopDeploymentOutcome(outcome.GetError());
  }
}

StopDeploymentOutcomeCallable AppConfigClient::StopDeploymentCallable(const StopDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::StopDeploymentAsync(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDeploymentAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::StopDeploymentAsyncHelper(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDeployment(request), context);
}

TagResourceOutcome AppConfigClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable AppConfigClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable AppConfigClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateApplicationOutcome AppConfigClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApplicationOutcome(UpdateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApplicationOutcome(outcome.GetError());
  }
}

UpdateApplicationOutcomeCallable AppConfigClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/configurationprofiles/";
  ss << request.GetConfigurationProfileId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConfigurationProfileOutcome(UpdateConfigurationProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConfigurationProfileOutcome(outcome.GetError());
  }
}

UpdateConfigurationProfileOutcomeCallable AppConfigClient::UpdateConfigurationProfileCallable(const UpdateConfigurationProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::UpdateConfigurationProfileAsync(const UpdateConfigurationProfileRequest& request, const UpdateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConfigurationProfileAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::UpdateConfigurationProfileAsyncHelper(const UpdateConfigurationProfileRequest& request, const UpdateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConfigurationProfile(request), context);
}

UpdateDeploymentStrategyOutcome AppConfigClient::UpdateDeploymentStrategy(const UpdateDeploymentStrategyRequest& request) const
{
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return UpdateDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deploymentstrategies/";
  ss << request.GetDeploymentStrategyId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeploymentStrategyOutcome(UpdateDeploymentStrategyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeploymentStrategyOutcome(outcome.GetError());
  }
}

UpdateDeploymentStrategyOutcomeCallable AppConfigClient::UpdateDeploymentStrategyCallable(const UpdateDeploymentStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeploymentStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::UpdateDeploymentStrategyAsync(const UpdateDeploymentStrategyRequest& request, const UpdateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeploymentStrategyAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::UpdateDeploymentStrategyAsyncHelper(const UpdateDeploymentStrategyRequest& request, const UpdateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeploymentStrategy(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/environments/";
  ss << request.GetEnvironmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEnvironmentOutcome(UpdateEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEnvironmentOutcome(outcome.GetError());
  }
}

UpdateEnvironmentOutcomeCallable AppConfigClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEnvironmentAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::UpdateEnvironmentAsyncHelper(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEnvironment(request), context);
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
  Aws::StringStream ss;
  ss << "/applications/";
  ss << request.GetApplicationId();
  ss << "/configurationprofiles/";
  ss << request.GetConfigurationProfileId();
  ss << "/validators";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ValidateConfigurationOutcome(NoResult());
  }
  else
  {
    return ValidateConfigurationOutcome(outcome.GetError());
  }
}

ValidateConfigurationOutcomeCallable AppConfigClient::ValidateConfigurationCallable(const ValidateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigClient::ValidateConfigurationAsync(const ValidateConfigurationRequest& request, const ValidateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ValidateConfigurationAsyncHelper( request, handler, context ); } );
}

void AppConfigClient::ValidateConfigurationAsyncHelper(const ValidateConfigurationRequest& request, const ValidateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ValidateConfiguration(request), context);
}

