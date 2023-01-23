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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/appconfig/AppConfigClient.h>
#include <aws/appconfig/AppConfigErrorMarshaller.h>
#include <aws/appconfig/AppConfigEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AppConfigClient::SERVICE_NAME = "appconfig";
const char* AppConfigClient::ALLOCATION_TAG = "AppConfigClient";

AppConfigClient::AppConfigClient(const AppConfig::AppConfigClientConfiguration& clientConfiguration,
                                 std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const AWSCredentials& credentials,
                                 std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider,
                                 const AppConfig::AppConfigClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider,
                                 const AppConfig::AppConfigClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AppConfigClient::AppConfigClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AppConfigClient::~AppConfigClient()
{
}

std::shared_ptr<AppConfigEndpointProviderBase>& AppConfigClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppConfigClient::init(const AppConfig::AppConfigClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppConfig");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AppConfigClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateApplicationOutcome AppConfigClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationProfileOutcome AppConfigClient::CreateConfigurationProfile(const CreateConfigurationProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfigurationProfile", "Required field: ApplicationId, is not set");
    return CreateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles");
  return CreateConfigurationProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentStrategyOutcome AppConfigClient::CreateDeploymentStrategy(const CreateDeploymentStrategyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies");
  return CreateDeploymentStrategyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentOutcome AppConfigClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEnvironment", "Required field: ApplicationId, is not set");
    return CreateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  return CreateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExtensionOutcome AppConfigClient::CreateExtension(const CreateExtensionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensions");
  return CreateExtensionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExtensionAssociationOutcome AppConfigClient::CreateExtensionAssociation(const CreateExtensionAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations");
  return CreateExtensionAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHostedConfigurationVersionOutcome AppConfigClient::CreateHostedConfigurationVersion(const CreateHostedConfigurationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions");
  return CreateHostedConfigurationVersionOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteApplicationOutcome AppConfigClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationProfileOutcome AppConfigClient::DeleteConfigurationProfile(const DeleteConfigurationProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  return DeleteConfigurationProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentStrategyOutcome AppConfigClient::DeleteDeploymentStrategy(const DeleteDeploymentStrategyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return DeleteDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployementstrategies/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentStrategyId());
  return DeleteDeploymentStrategyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentOutcome AppConfigClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  return DeleteEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExtensionOutcome AppConfigClient::DeleteExtension(const DeleteExtensionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExtensionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExtension", "Required field: ExtensionIdentifier, is not set");
    return DeleteExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionIdentifier());
  return DeleteExtensionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExtensionAssociationOutcome AppConfigClient::DeleteExtensionAssociation(const DeleteExtensionAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExtensionAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return DeleteExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionAssociationId());
  return DeleteExtensionAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteHostedConfigurationVersionOutcome AppConfigClient::DeleteHostedConfigurationVersion(const DeleteHostedConfigurationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  return DeleteHostedConfigurationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcome AppConfigClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return GetApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationProfileOutcome AppConfigClient::GetConfigurationProfile(const GetConfigurationProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  return GetConfigurationProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcome AppConfigClient::GetDeployment(const GetDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentNumber());
  return GetDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentStrategyOutcome AppConfigClient::GetDeploymentStrategy(const GetDeploymentStrategyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return GetDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentStrategyId());
  return GetDeploymentStrategyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentOutcome AppConfigClient::GetEnvironment(const GetEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  return GetEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionOutcome AppConfigClient::GetExtension(const GetExtensionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExtensionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtension", "Required field: ExtensionIdentifier, is not set");
    return GetExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionIdentifier());
  return GetExtensionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionAssociationOutcome AppConfigClient::GetExtensionAssociation(const GetExtensionAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExtensionAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return GetExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionAssociationId());
  return GetExtensionAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetHostedConfigurationVersionOutcome AppConfigClient::GetHostedConfigurationVersion(const GetHostedConfigurationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  return GetHostedConfigurationVersionOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListApplicationsOutcome AppConfigClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationProfilesOutcome AppConfigClient::ListConfigurationProfiles(const ListConfigurationProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfigurationProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfigurationProfiles", "Required field: ApplicationId, is not set");
    return ListConfigurationProfilesOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfigurationProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles");
  return ListConfigurationProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentStrategiesOutcome AppConfigClient::ListDeploymentStrategies(const ListDeploymentStrategiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeploymentStrategies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeploymentStrategies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies");
  return ListDeploymentStrategiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentsOutcome AppConfigClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  return ListDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentsOutcome AppConfigClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: ApplicationId, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  return ListEnvironmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionAssociationsOutcome AppConfigClient::ListExtensionAssociations(const ListExtensionAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExtensionAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExtensionAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations");
  return ListExtensionAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionsOutcome AppConfigClient::ListExtensions(const ListExtensionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExtensions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExtensions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensions");
  return ListExtensionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListHostedConfigurationVersionsOutcome AppConfigClient::ListHostedConfigurationVersions(const ListHostedConfigurationVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHostedConfigurationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHostedConfigurationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions");
  return ListHostedConfigurationVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome AppConfigClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartDeploymentOutcome AppConfigClient::StartDeployment(const StartDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  return StartDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDeploymentOutcome AppConfigClient::StopDeployment(const StopDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentNumber());
  return StopDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome AppConfigClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome AppConfigClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcome AppConfigClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return UpdateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationProfileOutcome AppConfigClient::UpdateConfigurationProfile(const UpdateConfigurationProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfigurationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  return UpdateConfigurationProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeploymentStrategyOutcome AppConfigClient::UpdateDeploymentStrategy(const UpdateDeploymentStrategyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeploymentStrategyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return UpdateDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentStrategyId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeploymentStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentStrategyId());
  return UpdateDeploymentStrategyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentOutcome AppConfigClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  return UpdateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateExtensionOutcome AppConfigClient::UpdateExtension(const UpdateExtensionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExtensionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExtension", "Required field: ExtensionIdentifier, is not set");
    return UpdateExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionIdentifier());
  return UpdateExtensionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateExtensionAssociationOutcome AppConfigClient::UpdateExtensionAssociation(const UpdateExtensionAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExtensionAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return UpdateExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateExtensionAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionAssociationId());
  return UpdateExtensionAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

ValidateConfigurationOutcome AppConfigClient::ValidateConfiguration(const ValidateConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/validators");
  return ValidateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

