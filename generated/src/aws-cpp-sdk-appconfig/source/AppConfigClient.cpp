/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/AppConfigClient.h>
#include <aws/appconfig/AppConfigEndpointProvider.h>
#include <aws/appconfig/AppConfigErrorMarshaller.h>
#include <aws/appconfig/model/CreateApplicationRequest.h>
#include <aws/appconfig/model/CreateConfigurationProfileRequest.h>
#include <aws/appconfig/model/CreateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/CreateEnvironmentRequest.h>
#include <aws/appconfig/model/CreateExtensionAssociationRequest.h>
#include <aws/appconfig/model/CreateExtensionRequest.h>
#include <aws/appconfig/model/CreateHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/DeleteApplicationRequest.h>
#include <aws/appconfig/model/DeleteConfigurationProfileRequest.h>
#include <aws/appconfig/model/DeleteDeploymentStrategyRequest.h>
#include <aws/appconfig/model/DeleteEnvironmentRequest.h>
#include <aws/appconfig/model/DeleteExtensionAssociationRequest.h>
#include <aws/appconfig/model/DeleteExtensionRequest.h>
#include <aws/appconfig/model/DeleteHostedConfigurationVersionRequest.h>
#include <aws/appconfig/model/GetAccountSettingsRequest.h>
#include <aws/appconfig/model/GetApplicationRequest.h>
#include <aws/appconfig/model/GetConfigurationProfileRequest.h>
#include <aws/appconfig/model/GetDeploymentRequest.h>
#include <aws/appconfig/model/GetDeploymentStrategyRequest.h>
#include <aws/appconfig/model/GetEnvironmentRequest.h>
#include <aws/appconfig/model/GetExtensionAssociationRequest.h>
#include <aws/appconfig/model/GetExtensionRequest.h>
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
#include <aws/appconfig/model/UpdateAccountSettingsRequest.h>
#include <aws/appconfig/model/UpdateApplicationRequest.h>
#include <aws/appconfig/model/UpdateConfigurationProfileRequest.h>
#include <aws/appconfig/model/UpdateDeploymentStrategyRequest.h>
#include <aws/appconfig/model/UpdateEnvironmentRequest.h>
#include <aws/appconfig/model/UpdateExtensionAssociationRequest.h>
#include <aws/appconfig/model/UpdateExtensionRequest.h>
#include <aws/appconfig/model/ValidateConfigurationRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppConfig;
using namespace Aws::AppConfig::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppConfig {
const char SERVICE_NAME[] = "appconfig";
const char ALLOCATION_TAG[] = "AppConfigClient";
}  // namespace AppConfig
}  // namespace Aws
const char* AppConfigClient::GetServiceName() { return SERVICE_NAME; }
const char* AppConfigClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppConfigClient::AppConfigClient(const AppConfig::AppConfigClientConfiguration& clientConfiguration,
                                 std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const AWSCredentials& credentials, std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider,
                                 const AppConfig::AppConfigClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider,
                                 const AppConfig::AppConfigClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppConfigClient::AppConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppConfigClient::AppConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppConfigErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppConfigEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppConfigClient::~AppConfigClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppConfigEndpointProviderBase>& AppConfigClient::accessEndpointProvider() { return m_endpointProvider; }

void AppConfigClient::init(const AppConfig::AppConfigClientConfiguration& config) {
  AWSClient::SetServiceClientName("AppConfig");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "appconfig");
}

void AppConfigClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppConfigClient::InvokeOperationOutcome AppConfigClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateApplicationOutcome AppConfigClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return CreateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationProfileOutcome AppConfigClient::CreateConfigurationProfile(const CreateConfigurationProfileRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfigurationProfile", "Required field: ApplicationId, is not set");
    return CreateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles");
  };

  return CreateConfigurationProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentStrategyOutcome AppConfigClient::CreateDeploymentStrategy(const CreateDeploymentStrategyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies");
  };

  return CreateDeploymentStrategyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEnvironmentOutcome AppConfigClient::CreateEnvironment(const CreateEnvironmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEnvironment", "Required field: ApplicationId, is not set");
    return CreateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  return CreateEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExtensionOutcome AppConfigClient::CreateExtension(const CreateExtensionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensions");
  };

  return CreateExtensionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExtensionAssociationOutcome AppConfigClient::CreateExtensionAssociation(const CreateExtensionAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations");
  };

  return CreateExtensionAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHostedConfigurationVersionOutcome AppConfigClient::CreateHostedConfigurationVersion(
    const CreateHostedConfigurationVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateHostedConfigurationVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHostedConfigurationVersion", "Required field: ApplicationId, is not set");
    return CreateHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHostedConfigurationVersion", "Required field: ConfigurationProfileId, is not set");
    return CreateHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateHostedConfigurationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateHostedConfigurationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateHostedConfigurationVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateHostedConfigurationVersionOutcome>(
      [&]() -> CreateHostedConfigurationVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHostedConfigurationVersion, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions");
        return CreateHostedConfigurationVersionOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteApplicationOutcome AppConfigClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  return DeleteApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfigurationProfileOutcome AppConfigClient::DeleteConfigurationProfile(const DeleteConfigurationProfileRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationProfile", "Required field: ApplicationId, is not set");
    return DeleteConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationProfile", "Required field: ConfigurationProfileId, is not set");
    return DeleteConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  };

  return DeleteConfigurationProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDeploymentStrategyOutcome AppConfigClient::DeleteDeploymentStrategy(const DeleteDeploymentStrategyRequest& request) const {
  if (!request.DeploymentStrategyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return DeleteDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DeploymentStrategyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployementstrategies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentStrategyId());
  };

  return DeleteDeploymentStrategyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEnvironmentOutcome AppConfigClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: ApplicationId, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  return DeleteEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteExtensionOutcome AppConfigClient::DeleteExtension(const DeleteExtensionRequest& request) const {
  if (!request.ExtensionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteExtension", "Required field: ExtensionIdentifier, is not set");
    return DeleteExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ExtensionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionIdentifier());
  };

  return DeleteExtensionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteExtensionAssociationOutcome AppConfigClient::DeleteExtensionAssociation(const DeleteExtensionAssociationRequest& request) const {
  if (!request.ExtensionAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return DeleteExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionAssociationId());
  };

  return DeleteExtensionAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteHostedConfigurationVersionOutcome AppConfigClient::DeleteHostedConfigurationVersion(
    const DeleteHostedConfigurationVersionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHostedConfigurationVersion", "Required field: ApplicationId, is not set");
    return DeleteHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHostedConfigurationVersion", "Required field: ConfigurationProfileId, is not set");
    return DeleteHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHostedConfigurationVersion", "Required field: VersionNumber, is not set");
    return DeleteHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  };

  return DeleteHostedConfigurationVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAccountSettingsOutcome AppConfigClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return GetAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApplicationOutcome AppConfigClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  return GetApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfigurationProfileOutcome AppConfigClient::GetConfigurationProfile(const GetConfigurationProfileRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationProfile", "Required field: ApplicationId, is not set");
    return GetConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationProfile", "Required field: ConfigurationProfileId, is not set");
    return GetConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ConfigurationProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  };

  return GetConfigurationProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentOutcome AppConfigClient::GetDeployment(const GetDeploymentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: ApplicationId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: EnvironmentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }
  if (!request.DeploymentNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentNumber, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DeploymentNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentNumber());
  };

  return GetDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentStrategyOutcome AppConfigClient::GetDeploymentStrategy(const GetDeploymentStrategyRequest& request) const {
  if (!request.DeploymentStrategyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return GetDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DeploymentStrategyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentStrategyId());
  };

  return GetDeploymentStrategyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentOutcome AppConfigClient::GetEnvironment(const GetEnvironmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: ApplicationId, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentId, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  return GetEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExtensionOutcome AppConfigClient::GetExtension(const GetExtensionRequest& request) const {
  if (!request.ExtensionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExtension", "Required field: ExtensionIdentifier, is not set");
    return GetExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ExtensionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionIdentifier());
  };

  return GetExtensionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExtensionAssociationOutcome AppConfigClient::GetExtensionAssociation(const GetExtensionAssociationRequest& request) const {
  if (!request.ExtensionAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return GetExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ExtensionAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionAssociationId());
  };

  return GetExtensionAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHostedConfigurationVersionOutcome AppConfigClient::GetHostedConfigurationVersion(
    const GetHostedConfigurationVersionRequest& request) const {
  AWS_OPERATION_GUARD(GetHostedConfigurationVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostedConfigurationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHostedConfigurationVersion", "Required field: ApplicationId, is not set");
    return GetHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHostedConfigurationVersion", "Required field: ConfigurationProfileId, is not set");
    return GetHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHostedConfigurationVersion", "Required field: VersionNumber, is not set");
    return GetHostedConfigurationVersionOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetHostedConfigurationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetHostedConfigurationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetHostedConfigurationVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetHostedConfigurationVersionOutcome>(
      [&]() -> GetHostedConfigurationVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostedConfigurationVersion, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
        return GetHostedConfigurationVersionOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListApplicationsOutcome AppConfigClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return ListApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationProfilesOutcome AppConfigClient::ListConfigurationProfiles(const ListConfigurationProfilesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConfigurationProfiles", "Required field: ApplicationId, is not set");
    return ListConfigurationProfilesOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles");
  };

  return ListConfigurationProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeploymentStrategiesOutcome AppConfigClient::ListDeploymentStrategies(const ListDeploymentStrategiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies");
  };

  return ListDeploymentStrategiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeploymentsOutcome AppConfigClient::ListDeployments(const ListDeploymentsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: ApplicationId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: EnvironmentId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return ListDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentsOutcome AppConfigClient::ListEnvironments(const ListEnvironmentsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: ApplicationId, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  return ListEnvironmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExtensionAssociationsOutcome AppConfigClient::ListExtensionAssociations(const ListExtensionAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations");
  };

  return ListExtensionAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExtensionsOutcome AppConfigClient::ListExtensions(const ListExtensionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensions");
  };

  return ListExtensionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHostedConfigurationVersionsOutcome AppConfigClient::ListHostedConfigurationVersions(
    const ListHostedConfigurationVersionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHostedConfigurationVersions", "Required field: ApplicationId, is not set");
    return ListHostedConfigurationVersionsOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHostedConfigurationVersions", "Required field: ConfigurationProfileId, is not set");
    return ListHostedConfigurationVersionsOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/hostedconfigurationversions");
  };

  return ListHostedConfigurationVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AppConfigClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartDeploymentOutcome AppConfigClient::StartDeployment(const StartDeploymentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: ApplicationId, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: EnvironmentId, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return StartDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDeploymentOutcome AppConfigClient::StopDeployment(const StopDeploymentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDeployment", "Required field: ApplicationId, is not set");
    return StopDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDeployment", "Required field: EnvironmentId, is not set");
    return StopDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }
  if (!request.DeploymentNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDeployment", "Required field: DeploymentNumber, is not set");
    return StopDeploymentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DeploymentNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentNumber());
  };

  return StopDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

TagResourceOutcome AppConfigClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AppConfigClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAccountSettingsOutcome AppConfigClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateApplicationOutcome AppConfigClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  return UpdateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConfigurationProfileOutcome AppConfigClient::UpdateConfigurationProfile(const UpdateConfigurationProfileRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationProfile", "Required field: ApplicationId, is not set");
    return UpdateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationProfile", "Required field: ConfigurationProfileId, is not set");
    return UpdateConfigurationProfileOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
  };

  return UpdateConfigurationProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDeploymentStrategyOutcome AppConfigClient::UpdateDeploymentStrategy(const UpdateDeploymentStrategyRequest& request) const {
  if (!request.DeploymentStrategyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeploymentStrategy", "Required field: DeploymentStrategyId, is not set");
    return UpdateDeploymentStrategyOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DeploymentStrategyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deploymentstrategies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentStrategyId());
  };

  return UpdateDeploymentStrategyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEnvironmentOutcome AppConfigClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: ApplicationId, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  return UpdateEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateExtensionOutcome AppConfigClient::UpdateExtension(const UpdateExtensionRequest& request) const {
  if (!request.ExtensionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateExtension", "Required field: ExtensionIdentifier, is not set");
    return UpdateExtensionOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ExtensionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionIdentifier());
  };

  return UpdateExtensionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateExtensionAssociationOutcome AppConfigClient::UpdateExtensionAssociation(const UpdateExtensionAssociationRequest& request) const {
  if (!request.ExtensionAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateExtensionAssociation", "Required field: ExtensionAssociationId, is not set");
    return UpdateExtensionAssociationOutcome(Aws::Client::AWSError<AppConfigErrors>(
        AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/extensionassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionAssociationId());
  };

  return UpdateExtensionAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

ValidateConfigurationOutcome AppConfigClient::ValidateConfiguration(const ValidateConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ValidateConfiguration", "Required field: ApplicationId, is not set");
    return ValidateConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationId]", false));
  }
  if (!request.ConfigurationProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ValidateConfiguration", "Required field: ConfigurationProfileId, is not set");
    return ValidateConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ConfigurationProfileId]", false));
  }
  if (!request.ConfigurationVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ValidateConfiguration", "Required field: ConfigurationVersion, is not set");
    return ValidateConfigurationOutcome(Aws::Client::AWSError<AppConfigErrors>(AppConfigErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ConfigurationVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configurationprofiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/validators");
  };

  return ValidateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
