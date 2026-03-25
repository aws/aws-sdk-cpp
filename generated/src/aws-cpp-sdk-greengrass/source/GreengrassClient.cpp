/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/greengrass/GreengrassClient.h>
#include <aws/greengrass/GreengrassEndpointProvider.h>
#include <aws/greengrass/GreengrassErrorMarshaller.h>
#include <aws/greengrass/model/AssociateRoleToGroupRequest.h>
#include <aws/greengrass/model/AssociateServiceRoleToAccountRequest.h>
#include <aws/greengrass/model/CreateConnectorDefinitionRequest.h>
#include <aws/greengrass/model/CreateConnectorDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateCoreDefinitionRequest.h>
#include <aws/greengrass/model/CreateCoreDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateDeploymentRequest.h>
#include <aws/greengrass/model/CreateDeviceDefinitionRequest.h>
#include <aws/greengrass/model/CreateDeviceDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateFunctionDefinitionRequest.h>
#include <aws/greengrass/model/CreateFunctionDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateGroupCertificateAuthorityRequest.h>
#include <aws/greengrass/model/CreateGroupRequest.h>
#include <aws/greengrass/model/CreateGroupVersionRequest.h>
#include <aws/greengrass/model/CreateLoggerDefinitionRequest.h>
#include <aws/greengrass/model/CreateLoggerDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateResourceDefinitionRequest.h>
#include <aws/greengrass/model/CreateResourceDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateSoftwareUpdateJobRequest.h>
#include <aws/greengrass/model/CreateSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/CreateSubscriptionDefinitionVersionRequest.h>
#include <aws/greengrass/model/DeleteConnectorDefinitionRequest.h>
#include <aws/greengrass/model/DeleteCoreDefinitionRequest.h>
#include <aws/greengrass/model/DeleteDeviceDefinitionRequest.h>
#include <aws/greengrass/model/DeleteFunctionDefinitionRequest.h>
#include <aws/greengrass/model/DeleteGroupRequest.h>
#include <aws/greengrass/model/DeleteLoggerDefinitionRequest.h>
#include <aws/greengrass/model/DeleteResourceDefinitionRequest.h>
#include <aws/greengrass/model/DeleteSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/DisassociateRoleFromGroupRequest.h>
#include <aws/greengrass/model/DisassociateServiceRoleFromAccountRequest.h>
#include <aws/greengrass/model/GetAssociatedRoleRequest.h>
#include <aws/greengrass/model/GetBulkDeploymentStatusRequest.h>
#include <aws/greengrass/model/GetConnectivityInfoRequest.h>
#include <aws/greengrass/model/GetConnectorDefinitionRequest.h>
#include <aws/greengrass/model/GetConnectorDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetCoreDefinitionRequest.h>
#include <aws/greengrass/model/GetCoreDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetDeploymentStatusRequest.h>
#include <aws/greengrass/model/GetDeviceDefinitionRequest.h>
#include <aws/greengrass/model/GetDeviceDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetFunctionDefinitionRequest.h>
#include <aws/greengrass/model/GetFunctionDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetGroupCertificateAuthorityRequest.h>
#include <aws/greengrass/model/GetGroupCertificateConfigurationRequest.h>
#include <aws/greengrass/model/GetGroupRequest.h>
#include <aws/greengrass/model/GetGroupVersionRequest.h>
#include <aws/greengrass/model/GetLoggerDefinitionRequest.h>
#include <aws/greengrass/model/GetLoggerDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetResourceDefinitionRequest.h>
#include <aws/greengrass/model/GetResourceDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetServiceRoleForAccountRequest.h>
#include <aws/greengrass/model/GetSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/GetSubscriptionDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetThingRuntimeConfigurationRequest.h>
#include <aws/greengrass/model/ListBulkDeploymentDetailedReportsRequest.h>
#include <aws/greengrass/model/ListBulkDeploymentsRequest.h>
#include <aws/greengrass/model/ListConnectorDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListConnectorDefinitionsRequest.h>
#include <aws/greengrass/model/ListCoreDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListCoreDefinitionsRequest.h>
#include <aws/greengrass/model/ListDeploymentsRequest.h>
#include <aws/greengrass/model/ListDeviceDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListDeviceDefinitionsRequest.h>
#include <aws/greengrass/model/ListFunctionDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListFunctionDefinitionsRequest.h>
#include <aws/greengrass/model/ListGroupCertificateAuthoritiesRequest.h>
#include <aws/greengrass/model/ListGroupVersionsRequest.h>
#include <aws/greengrass/model/ListGroupsRequest.h>
#include <aws/greengrass/model/ListLoggerDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListLoggerDefinitionsRequest.h>
#include <aws/greengrass/model/ListResourceDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListResourceDefinitionsRequest.h>
#include <aws/greengrass/model/ListSubscriptionDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListSubscriptionDefinitionsRequest.h>
#include <aws/greengrass/model/ListTagsForResourceRequest.h>
#include <aws/greengrass/model/ResetDeploymentsRequest.h>
#include <aws/greengrass/model/StartBulkDeploymentRequest.h>
#include <aws/greengrass/model/StopBulkDeploymentRequest.h>
#include <aws/greengrass/model/TagResourceRequest.h>
#include <aws/greengrass/model/UntagResourceRequest.h>
#include <aws/greengrass/model/UpdateConnectivityInfoRequest.h>
#include <aws/greengrass/model/UpdateConnectorDefinitionRequest.h>
#include <aws/greengrass/model/UpdateCoreDefinitionRequest.h>
#include <aws/greengrass/model/UpdateDeviceDefinitionRequest.h>
#include <aws/greengrass/model/UpdateFunctionDefinitionRequest.h>
#include <aws/greengrass/model/UpdateGroupCertificateConfigurationRequest.h>
#include <aws/greengrass/model/UpdateGroupRequest.h>
#include <aws/greengrass/model/UpdateLoggerDefinitionRequest.h>
#include <aws/greengrass/model/UpdateResourceDefinitionRequest.h>
#include <aws/greengrass/model/UpdateSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/UpdateThingRuntimeConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Greengrass;
using namespace Aws::Greengrass::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Greengrass {
const char SERVICE_NAME[] = "greengrass";
const char ALLOCATION_TAG[] = "GreengrassClient";
}  // namespace Greengrass
}  // namespace Aws
const char* GreengrassClient::GetServiceName() { return SERVICE_NAME; }
const char* GreengrassClient::GetAllocationTag() { return ALLOCATION_TAG; }

GreengrassClient::GreengrassClient(const Greengrass::GreengrassClientConfiguration& clientConfiguration,
                                   std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const AWSCredentials& credentials, std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider,
                                   const Greengrass::GreengrassClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider,
                                   const Greengrass::GreengrassClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GreengrassClient::GreengrassClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GreengrassClient::~GreengrassClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GreengrassEndpointProviderBase>& GreengrassClient::accessEndpointProvider() { return m_endpointProvider; }

void GreengrassClient::init(const Greengrass::GreengrassClientConfiguration& config) {
  AWSClient::SetServiceClientName("Greengrass");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "greengrass");
}

void GreengrassClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GreengrassClient::InvokeOperationOutcome GreengrassClient::InvokeServiceOperation(
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

AssociateRoleToGroupOutcome GreengrassClient::AssociateRoleToGroup(const AssociateRoleToGroupRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateRoleToGroup", "Required field: GroupId, is not set");
    return AssociateRoleToGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/role");
  };

  return AssociateRoleToGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateServiceRoleToAccountOutcome GreengrassClient::AssociateServiceRoleToAccount(
    const AssociateServiceRoleToAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  };

  return AssociateServiceRoleToAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateConnectorDefinitionOutcome GreengrassClient::CreateConnectorDefinition(const CreateConnectorDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors");
  };

  return CreateConnectorDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectorDefinitionVersionOutcome GreengrassClient::CreateConnectorDefinitionVersion(
    const CreateConnectorDefinitionVersionRequest& request) const {
  if (!request.ConnectorDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConnectorDefinitionVersion", "Required field: ConnectorDefinitionId, is not set");
    return CreateConnectorDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateConnectorDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCoreDefinitionOutcome GreengrassClient::CreateCoreDefinition(const CreateCoreDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores");
  };

  return CreateCoreDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCoreDefinitionVersionOutcome GreengrassClient::CreateCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest& request) const {
  if (!request.CoreDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCoreDefinitionVersion", "Required field: CoreDefinitionId, is not set");
    return CreateCoreDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateCoreDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentOutcome GreengrassClient::CreateDeployment(const CreateDeploymentRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: GroupId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return CreateDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeviceDefinitionOutcome GreengrassClient::CreateDeviceDefinition(const CreateDeviceDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices");
  };

  return CreateDeviceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeviceDefinitionVersionOutcome GreengrassClient::CreateDeviceDefinitionVersion(
    const CreateDeviceDefinitionVersionRequest& request) const {
  if (!request.DeviceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeviceDefinitionVersion", "Required field: DeviceDefinitionId, is not set");
    return CreateDeviceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateDeviceDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFunctionDefinitionOutcome GreengrassClient::CreateFunctionDefinition(const CreateFunctionDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions");
  };

  return CreateFunctionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFunctionDefinitionVersionOutcome GreengrassClient::CreateFunctionDefinitionVersion(
    const CreateFunctionDefinitionVersionRequest& request) const {
  if (!request.FunctionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFunctionDefinitionVersion", "Required field: FunctionDefinitionId, is not set");
    return CreateFunctionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateFunctionDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupOutcome GreengrassClient::CreateGroup(const CreateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups");
  };

  return CreateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupCertificateAuthorityOutcome GreengrassClient::CreateGroupCertificateAuthority(
    const CreateGroupCertificateAuthorityRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroupCertificateAuthority", "Required field: GroupId, is not set");
    return CreateGroupCertificateAuthorityOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities");
  };

  return CreateGroupCertificateAuthorityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupVersionOutcome GreengrassClient::CreateGroupVersion(const CreateGroupVersionRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroupVersion", "Required field: GroupId, is not set");
    return CreateGroupVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateGroupVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoggerDefinitionOutcome GreengrassClient::CreateLoggerDefinition(const CreateLoggerDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers");
  };

  return CreateLoggerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoggerDefinitionVersionOutcome GreengrassClient::CreateLoggerDefinitionVersion(
    const CreateLoggerDefinitionVersionRequest& request) const {
  if (!request.LoggerDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLoggerDefinitionVersion", "Required field: LoggerDefinitionId, is not set");
    return CreateLoggerDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateLoggerDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceDefinitionOutcome GreengrassClient::CreateResourceDefinition(const CreateResourceDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources");
  };

  return CreateResourceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceDefinitionVersionOutcome GreengrassClient::CreateResourceDefinitionVersion(
    const CreateResourceDefinitionVersionRequest& request) const {
  if (!request.ResourceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateResourceDefinitionVersion", "Required field: ResourceDefinitionId, is not set");
    return CreateResourceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateResourceDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSoftwareUpdateJobOutcome GreengrassClient::CreateSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/updates");
  };

  return CreateSoftwareUpdateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriptionDefinitionOutcome GreengrassClient::CreateSubscriptionDefinition(
    const CreateSubscriptionDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions");
  };

  return CreateSubscriptionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriptionDefinitionVersionOutcome GreengrassClient::CreateSubscriptionDefinitionVersion(
    const CreateSubscriptionDefinitionVersionRequest& request) const {
  if (!request.SubscriptionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionDefinitionVersion", "Required field: SubscriptionDefinitionId, is not set");
    return CreateSubscriptionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateSubscriptionDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectorDefinitionOutcome GreengrassClient::DeleteConnectorDefinition(const DeleteConnectorDefinitionRequest& request) const {
  if (!request.ConnectorDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectorDefinition", "Required field: ConnectorDefinitionId, is not set");
    return DeleteConnectorDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  };

  return DeleteConnectorDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCoreDefinitionOutcome GreengrassClient::DeleteCoreDefinition(const DeleteCoreDefinitionRequest& request) const {
  if (!request.CoreDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCoreDefinition", "Required field: CoreDefinitionId, is not set");
    return DeleteCoreDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [CoreDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  };

  return DeleteCoreDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDeviceDefinitionOutcome GreengrassClient::DeleteDeviceDefinition(const DeleteDeviceDefinitionRequest& request) const {
  if (!request.DeviceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeviceDefinition", "Required field: DeviceDefinitionId, is not set");
    return DeleteDeviceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DeviceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  };

  return DeleteDeviceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFunctionDefinitionOutcome GreengrassClient::DeleteFunctionDefinition(const DeleteFunctionDefinitionRequest& request) const {
  if (!request.FunctionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunctionDefinition", "Required field: FunctionDefinitionId, is not set");
    return DeleteFunctionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  };

  return DeleteFunctionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGroupOutcome GreengrassClient::DeleteGroup(const DeleteGroupRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  };

  return DeleteGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLoggerDefinitionOutcome GreengrassClient::DeleteLoggerDefinition(const DeleteLoggerDefinitionRequest& request) const {
  if (!request.LoggerDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLoggerDefinition", "Required field: LoggerDefinitionId, is not set");
    return DeleteLoggerDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [LoggerDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  };

  return DeleteLoggerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourceDefinitionOutcome GreengrassClient::DeleteResourceDefinition(const DeleteResourceDefinitionRequest& request) const {
  if (!request.ResourceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourceDefinition", "Required field: ResourceDefinitionId, is not set");
    return DeleteResourceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ResourceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  };

  return DeleteResourceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSubscriptionDefinitionOutcome GreengrassClient::DeleteSubscriptionDefinition(
    const DeleteSubscriptionDefinitionRequest& request) const {
  if (!request.SubscriptionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionDefinition", "Required field: SubscriptionDefinitionId, is not set");
    return DeleteSubscriptionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  };

  return DeleteSubscriptionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateRoleFromGroupOutcome GreengrassClient::DisassociateRoleFromGroup(const DisassociateRoleFromGroupRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRoleFromGroup", "Required field: GroupId, is not set");
    return DisassociateRoleFromGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/role");
  };

  return DisassociateRoleFromGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateServiceRoleFromAccountOutcome GreengrassClient::DisassociateServiceRoleFromAccount(
    const DisassociateServiceRoleFromAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  };

  return DisassociateServiceRoleFromAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAssociatedRoleOutcome GreengrassClient::GetAssociatedRole(const GetAssociatedRoleRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociatedRole", "Required field: GroupId, is not set");
    return GetAssociatedRoleOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/role");
  };

  return GetAssociatedRoleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBulkDeploymentStatusOutcome GreengrassClient::GetBulkDeploymentStatus(const GetBulkDeploymentStatusRequest& request) const {
  if (!request.BulkDeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBulkDeploymentStatus", "Required field: BulkDeploymentId, is not set");
    return GetBulkDeploymentStatusOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BulkDeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBulkDeploymentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return GetBulkDeploymentStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectivityInfoOutcome GreengrassClient::GetConnectivityInfo(const GetConnectivityInfoRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectivityInfo", "Required field: ThingName, is not set");
    return GetConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectivityInfo");
  };

  return GetConnectivityInfoOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectorDefinitionOutcome GreengrassClient::GetConnectorDefinition(const GetConnectorDefinitionRequest& request) const {
  if (!request.ConnectorDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectorDefinition", "Required field: ConnectorDefinitionId, is not set");
    return GetConnectorDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ConnectorDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  };

  return GetConnectorDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectorDefinitionVersionOutcome GreengrassClient::GetConnectorDefinitionVersion(
    const GetConnectorDefinitionVersionRequest& request) const {
  if (!request.ConnectorDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectorDefinitionVersion", "Required field: ConnectorDefinitionId, is not set");
    return GetConnectorDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }
  if (!request.ConnectorDefinitionVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectorDefinitionVersion", "Required field: ConnectorDefinitionVersionId, is not set");
    return GetConnectorDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionVersionId());
  };

  return GetConnectorDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoreDefinitionOutcome GreengrassClient::GetCoreDefinition(const GetCoreDefinitionRequest& request) const {
  if (!request.CoreDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreDefinition", "Required field: CoreDefinitionId, is not set");
    return GetCoreDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [CoreDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  };

  return GetCoreDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoreDefinitionVersionOutcome GreengrassClient::GetCoreDefinitionVersion(const GetCoreDefinitionVersionRequest& request) const {
  if (!request.CoreDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreDefinitionVersion", "Required field: CoreDefinitionId, is not set");
    return GetCoreDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [CoreDefinitionId]", false));
  }
  if (!request.CoreDefinitionVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreDefinitionVersion", "Required field: CoreDefinitionVersionId, is not set");
    return GetCoreDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionVersionId());
  };

  return GetCoreDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentStatusOutcome GreengrassClient::GetDeploymentStatus(const GetDeploymentStatusRequest& request) const {
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeploymentStatus", "Required field: DeploymentId, is not set");
    return GetDeploymentStatusOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DeploymentId]", false));
  }
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeploymentStatus", "Required field: GroupId, is not set");
    return GetDeploymentStatusOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return GetDeploymentStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeviceDefinitionOutcome GreengrassClient::GetDeviceDefinition(const GetDeviceDefinitionRequest& request) const {
  if (!request.DeviceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeviceDefinition", "Required field: DeviceDefinitionId, is not set");
    return GetDeviceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DeviceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  };

  return GetDeviceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeviceDefinitionVersionOutcome GreengrassClient::GetDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest& request) const {
  if (!request.DeviceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeviceDefinitionVersion", "Required field: DeviceDefinitionId, is not set");
    return GetDeviceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }
  if (!request.DeviceDefinitionVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeviceDefinitionVersion", "Required field: DeviceDefinitionVersionId, is not set");
    return GetDeviceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionVersionId());
  };

  return GetDeviceDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionDefinitionOutcome GreengrassClient::GetFunctionDefinition(const GetFunctionDefinitionRequest& request) const {
  if (!request.FunctionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionDefinition", "Required field: FunctionDefinitionId, is not set");
    return GetFunctionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FunctionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  };

  return GetFunctionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFunctionDefinitionVersionOutcome GreengrassClient::GetFunctionDefinitionVersion(
    const GetFunctionDefinitionVersionRequest& request) const {
  if (!request.FunctionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionDefinitionVersion", "Required field: FunctionDefinitionId, is not set");
    return GetFunctionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }
  if (!request.FunctionDefinitionVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunctionDefinitionVersion", "Required field: FunctionDefinitionVersionId, is not set");
    return GetFunctionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionVersionId());
  };

  return GetFunctionDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGroupOutcome GreengrassClient::GetGroup(const GetGroupRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: GroupId, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  };

  return GetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGroupCertificateAuthorityOutcome GreengrassClient::GetGroupCertificateAuthority(
    const GetGroupCertificateAuthorityRequest& request) const {
  if (!request.CertificateAuthorityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroupCertificateAuthority", "Required field: CertificateAuthorityId, is not set");
    return GetGroupCertificateAuthorityOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateAuthorityId]", false));
  }
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroupCertificateAuthority", "Required field: GroupId, is not set");
    return GetGroupCertificateAuthorityOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateAuthorityId());
  };

  return GetGroupCertificateAuthorityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGroupCertificateConfigurationOutcome GreengrassClient::GetGroupCertificateConfiguration(
    const GetGroupCertificateConfigurationRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroupCertificateConfiguration", "Required field: GroupId, is not set");
    return GetGroupCertificateConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities/configuration/expiry");
  };

  return GetGroupCertificateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGroupVersionOutcome GreengrassClient::GetGroupVersion(const GetGroupVersionRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroupVersion", "Required field: GroupId, is not set");
    return GetGroupVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GroupId]", false));
  }
  if (!request.GroupVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroupVersion", "Required field: GroupVersionId, is not set");
    return GetGroupVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GroupVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupVersionId());
  };

  return GetGroupVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLoggerDefinitionOutcome GreengrassClient::GetLoggerDefinition(const GetLoggerDefinitionRequest& request) const {
  if (!request.LoggerDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLoggerDefinition", "Required field: LoggerDefinitionId, is not set");
    return GetLoggerDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LoggerDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  };

  return GetLoggerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLoggerDefinitionVersionOutcome GreengrassClient::GetLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest& request) const {
  if (!request.LoggerDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLoggerDefinitionVersion", "Required field: LoggerDefinitionId, is not set");
    return GetLoggerDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }
  if (!request.LoggerDefinitionVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLoggerDefinitionVersion", "Required field: LoggerDefinitionVersionId, is not set");
    return GetLoggerDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionVersionId());
  };

  return GetLoggerDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourceDefinitionOutcome GreengrassClient::GetResourceDefinition(const GetResourceDefinitionRequest& request) const {
  if (!request.ResourceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceDefinition", "Required field: ResourceDefinitionId, is not set");
    return GetResourceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  };

  return GetResourceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourceDefinitionVersionOutcome GreengrassClient::GetResourceDefinitionVersion(
    const GetResourceDefinitionVersionRequest& request) const {
  if (!request.ResourceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceDefinitionVersion", "Required field: ResourceDefinitionId, is not set");
    return GetResourceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }
  if (!request.ResourceDefinitionVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceDefinitionVersion", "Required field: ResourceDefinitionVersionId, is not set");
    return GetResourceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionVersionId());
  };

  return GetResourceDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceRoleForAccountOutcome GreengrassClient::GetServiceRoleForAccount(const GetServiceRoleForAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  };

  return GetServiceRoleForAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubscriptionDefinitionOutcome GreengrassClient::GetSubscriptionDefinition(const GetSubscriptionDefinitionRequest& request) const {
  if (!request.SubscriptionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionDefinition", "Required field: SubscriptionDefinitionId, is not set");
    return GetSubscriptionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  };

  return GetSubscriptionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubscriptionDefinitionVersionOutcome GreengrassClient::GetSubscriptionDefinitionVersion(
    const GetSubscriptionDefinitionVersionRequest& request) const {
  if (!request.SubscriptionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionDefinitionVersion", "Required field: SubscriptionDefinitionId, is not set");
    return GetSubscriptionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }
  if (!request.SubscriptionDefinitionVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionDefinitionVersion", "Required field: SubscriptionDefinitionVersionId, is not set");
    return GetSubscriptionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionVersionId());
  };

  return GetSubscriptionDefinitionVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetThingRuntimeConfigurationOutcome GreengrassClient::GetThingRuntimeConfiguration(
    const GetThingRuntimeConfigurationRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetThingRuntimeConfiguration", "Required field: ThingName, is not set");
    return GetThingRuntimeConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimeconfig");
  };

  return GetThingRuntimeConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBulkDeploymentDetailedReportsOutcome GreengrassClient::ListBulkDeploymentDetailedReports(
    const ListBulkDeploymentDetailedReportsRequest& request) const {
  if (!request.BulkDeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBulkDeploymentDetailedReports", "Required field: BulkDeploymentId, is not set");
    return ListBulkDeploymentDetailedReportsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BulkDeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBulkDeploymentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/detailed-reports");
  };

  return ListBulkDeploymentDetailedReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBulkDeploymentsOutcome GreengrassClient::ListBulkDeployments(const ListBulkDeploymentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments");
  };

  return ListBulkDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectorDefinitionVersionsOutcome GreengrassClient::ListConnectorDefinitionVersions(
    const ListConnectorDefinitionVersionsRequest& request) const {
  if (!request.ConnectorDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConnectorDefinitionVersions", "Required field: ConnectorDefinitionId, is not set");
    return ListConnectorDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListConnectorDefinitionVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectorDefinitionsOutcome GreengrassClient::ListConnectorDefinitions(const ListConnectorDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors");
  };

  return ListConnectorDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCoreDefinitionVersionsOutcome GreengrassClient::ListCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest& request) const {
  if (!request.CoreDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCoreDefinitionVersions", "Required field: CoreDefinitionId, is not set");
    return ListCoreDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListCoreDefinitionVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCoreDefinitionsOutcome GreengrassClient::ListCoreDefinitions(const ListCoreDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores");
  };

  return ListCoreDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeploymentsOutcome GreengrassClient::ListDeployments(const ListDeploymentsRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: GroupId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return ListDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeviceDefinitionVersionsOutcome GreengrassClient::ListDeviceDefinitionVersions(
    const ListDeviceDefinitionVersionsRequest& request) const {
  if (!request.DeviceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDeviceDefinitionVersions", "Required field: DeviceDefinitionId, is not set");
    return ListDeviceDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListDeviceDefinitionVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeviceDefinitionsOutcome GreengrassClient::ListDeviceDefinitions(const ListDeviceDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices");
  };

  return ListDeviceDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionDefinitionVersionsOutcome GreengrassClient::ListFunctionDefinitionVersions(
    const ListFunctionDefinitionVersionsRequest& request) const {
  if (!request.FunctionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFunctionDefinitionVersions", "Required field: FunctionDefinitionId, is not set");
    return ListFunctionDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListFunctionDefinitionVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFunctionDefinitionsOutcome GreengrassClient::ListFunctionDefinitions(const ListFunctionDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions");
  };

  return ListFunctionDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGroupCertificateAuthoritiesOutcome GreengrassClient::ListGroupCertificateAuthorities(
    const ListGroupCertificateAuthoritiesRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroupCertificateAuthorities", "Required field: GroupId, is not set");
    return ListGroupCertificateAuthoritiesOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities");
  };

  return ListGroupCertificateAuthoritiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGroupVersionsOutcome GreengrassClient::ListGroupVersions(const ListGroupVersionsRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroupVersions", "Required field: GroupId, is not set");
    return ListGroupVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListGroupVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGroupsOutcome GreengrassClient::ListGroups(const ListGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups");
  };

  return ListGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLoggerDefinitionVersionsOutcome GreengrassClient::ListLoggerDefinitionVersions(
    const ListLoggerDefinitionVersionsRequest& request) const {
  if (!request.LoggerDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLoggerDefinitionVersions", "Required field: LoggerDefinitionId, is not set");
    return ListLoggerDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListLoggerDefinitionVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLoggerDefinitionsOutcome GreengrassClient::ListLoggerDefinitions(const ListLoggerDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers");
  };

  return ListLoggerDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceDefinitionVersionsOutcome GreengrassClient::ListResourceDefinitionVersions(
    const ListResourceDefinitionVersionsRequest& request) const {
  if (!request.ResourceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourceDefinitionVersions", "Required field: ResourceDefinitionId, is not set");
    return ListResourceDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListResourceDefinitionVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceDefinitionsOutcome GreengrassClient::ListResourceDefinitions(const ListResourceDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources");
  };

  return ListResourceDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSubscriptionDefinitionVersionsOutcome GreengrassClient::ListSubscriptionDefinitionVersions(
    const ListSubscriptionDefinitionVersionsRequest& request) const {
  if (!request.SubscriptionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptionDefinitionVersions", "Required field: SubscriptionDefinitionId, is not set");
    return ListSubscriptionDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListSubscriptionDefinitionVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSubscriptionDefinitionsOutcome GreengrassClient::ListSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions");
  };

  return ListSubscriptionDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome GreengrassClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ResetDeploymentsOutcome GreengrassClient::ResetDeployments(const ResetDeploymentsRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetDeployments", "Required field: GroupId, is not set");
    return ResetDeploymentsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/$reset");
  };

  return ResetDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartBulkDeploymentOutcome GreengrassClient::StartBulkDeployment(const StartBulkDeploymentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments");
  };

  return StartBulkDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopBulkDeploymentOutcome GreengrassClient::StopBulkDeployment(const StopBulkDeploymentRequest& request) const {
  if (!request.BulkDeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBulkDeployment", "Required field: BulkDeploymentId, is not set");
    return StopBulkDeploymentOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BulkDeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBulkDeploymentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/$stop");
  };

  return StopBulkDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome GreengrassClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome GreengrassClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateConnectivityInfoOutcome GreengrassClient::UpdateConnectivityInfo(const UpdateConnectivityInfoRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectivityInfo", "Required field: ThingName, is not set");
    return UpdateConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectivityInfo");
  };

  return UpdateConnectivityInfoOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateConnectorDefinitionOutcome GreengrassClient::UpdateConnectorDefinition(const UpdateConnectorDefinitionRequest& request) const {
  if (!request.ConnectorDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectorDefinition", "Required field: ConnectorDefinitionId, is not set");
    return UpdateConnectorDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  };

  return UpdateConnectorDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCoreDefinitionOutcome GreengrassClient::UpdateCoreDefinition(const UpdateCoreDefinitionRequest& request) const {
  if (!request.CoreDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCoreDefinition", "Required field: CoreDefinitionId, is not set");
    return UpdateCoreDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [CoreDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  };

  return UpdateCoreDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDeviceDefinitionOutcome GreengrassClient::UpdateDeviceDefinition(const UpdateDeviceDefinitionRequest& request) const {
  if (!request.DeviceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeviceDefinition", "Required field: DeviceDefinitionId, is not set");
    return UpdateDeviceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DeviceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  };

  return UpdateDeviceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFunctionDefinitionOutcome GreengrassClient::UpdateFunctionDefinition(const UpdateFunctionDefinitionRequest& request) const {
  if (!request.FunctionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunctionDefinition", "Required field: FunctionDefinitionId, is not set");
    return UpdateFunctionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FunctionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  };

  return UpdateFunctionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGroupOutcome GreengrassClient::UpdateGroup(const UpdateGroupRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: GroupId, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  };

  return UpdateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGroupCertificateConfigurationOutcome GreengrassClient::UpdateGroupCertificateConfiguration(
    const UpdateGroupCertificateConfigurationRequest& request) const {
  if (!request.GroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroupCertificateConfiguration", "Required field: GroupId, is not set");
    return UpdateGroupCertificateConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities/configuration/expiry");
  };

  return UpdateGroupCertificateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateLoggerDefinitionOutcome GreengrassClient::UpdateLoggerDefinition(const UpdateLoggerDefinitionRequest& request) const {
  if (!request.LoggerDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLoggerDefinition", "Required field: LoggerDefinitionId, is not set");
    return UpdateLoggerDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [LoggerDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  };

  return UpdateLoggerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateResourceDefinitionOutcome GreengrassClient::UpdateResourceDefinition(const UpdateResourceDefinitionRequest& request) const {
  if (!request.ResourceDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceDefinition", "Required field: ResourceDefinitionId, is not set");
    return UpdateResourceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ResourceDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  };

  return UpdateResourceDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSubscriptionDefinitionOutcome GreengrassClient::UpdateSubscriptionDefinition(
    const UpdateSubscriptionDefinitionRequest& request) const {
  if (!request.SubscriptionDefinitionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionDefinition", "Required field: SubscriptionDefinitionId, is not set");
    return UpdateSubscriptionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  };

  return UpdateSubscriptionDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateThingRuntimeConfigurationOutcome GreengrassClient::UpdateThingRuntimeConfiguration(
    const UpdateThingRuntimeConfigurationRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThingRuntimeConfiguration", "Required field: ThingName, is not set");
    return UpdateThingRuntimeConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(
        GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimeconfig");
  };

  return UpdateThingRuntimeConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
