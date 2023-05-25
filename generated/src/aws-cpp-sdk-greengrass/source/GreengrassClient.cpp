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

#include <aws/greengrass/GreengrassClient.h>
#include <aws/greengrass/GreengrassErrorMarshaller.h>
#include <aws/greengrass/GreengrassEndpointProvider.h>
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
#include <aws/greengrass/model/CreateGroupRequest.h>
#include <aws/greengrass/model/CreateGroupCertificateAuthorityRequest.h>
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
#include <aws/greengrass/model/GetGroupRequest.h>
#include <aws/greengrass/model/GetGroupCertificateAuthorityRequest.h>
#include <aws/greengrass/model/GetGroupCertificateConfigurationRequest.h>
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
#include <aws/greengrass/model/UpdateGroupRequest.h>
#include <aws/greengrass/model/UpdateGroupCertificateConfigurationRequest.h>
#include <aws/greengrass/model/UpdateLoggerDefinitionRequest.h>
#include <aws/greengrass/model/UpdateResourceDefinitionRequest.h>
#include <aws/greengrass/model/UpdateSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/UpdateThingRuntimeConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Greengrass;
using namespace Aws::Greengrass::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* GreengrassClient::SERVICE_NAME = "greengrass";
const char* GreengrassClient::ALLOCATION_TAG = "GreengrassClient";

GreengrassClient::GreengrassClient(const Greengrass::GreengrassClientConfiguration& clientConfiguration,
                                   std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const AWSCredentials& credentials,
                                   std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider,
                                   const Greengrass::GreengrassClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider,
                                   const Greengrass::GreengrassClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GreengrassClient::GreengrassClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GreengrassClient::GreengrassClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GreengrassClient::~GreengrassClient()
{
}

std::shared_ptr<GreengrassEndpointProviderBase>& GreengrassClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GreengrassClient::init(const Greengrass::GreengrassClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Greengrass");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void GreengrassClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateRoleToGroupOutcome GreengrassClient::AssociateRoleToGroup(const AssociateRoleToGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateRoleToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateRoleToGroup", "Required field: GroupId, is not set");
    return AssociateRoleToGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateRoleToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/role");
  return AssociateRoleToGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateServiceRoleToAccountOutcome GreengrassClient::AssociateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateServiceRoleToAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateServiceRoleToAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  return AssociateServiceRoleToAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectorDefinitionOutcome GreengrassClient::CreateConnectorDefinition(const CreateConnectorDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors");
  return CreateConnectorDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectorDefinitionVersionOutcome GreengrassClient::CreateConnectorDefinitionVersion(const CreateConnectorDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnectorDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConnectorDefinitionVersion", "Required field: ConnectorDefinitionId, is not set");
    return CreateConnectorDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnectorDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateConnectorDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCoreDefinitionOutcome GreengrassClient::CreateCoreDefinition(const CreateCoreDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores");
  return CreateCoreDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCoreDefinitionVersionOutcome GreengrassClient::CreateCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCoreDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CoreDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCoreDefinitionVersion", "Required field: CoreDefinitionId, is not set");
    return CreateCoreDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCoreDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateCoreDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcome GreengrassClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: GroupId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  return CreateDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceDefinitionOutcome GreengrassClient::CreateDeviceDefinition(const CreateDeviceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices");
  return CreateDeviceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceDefinitionVersionOutcome GreengrassClient::CreateDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeviceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeviceDefinitionVersion", "Required field: DeviceDefinitionId, is not set");
    return CreateDeviceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeviceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateDeviceDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFunctionDefinitionOutcome GreengrassClient::CreateFunctionDefinition(const CreateFunctionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions");
  return CreateFunctionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFunctionDefinitionVersionOutcome GreengrassClient::CreateFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFunctionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFunctionDefinitionVersion", "Required field: FunctionDefinitionId, is not set");
    return CreateFunctionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFunctionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateFunctionDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcome GreengrassClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups");
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupCertificateAuthorityOutcome GreengrassClient::CreateGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroupCertificateAuthority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupCertificateAuthority", "Required field: GroupId, is not set");
    return CreateGroupCertificateAuthorityOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroupCertificateAuthority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities");
  return CreateGroupCertificateAuthorityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupVersionOutcome GreengrassClient::CreateGroupVersion(const CreateGroupVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroupVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupVersion", "Required field: GroupId, is not set");
    return CreateGroupVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroupVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateGroupVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoggerDefinitionOutcome GreengrassClient::CreateLoggerDefinition(const CreateLoggerDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers");
  return CreateLoggerDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoggerDefinitionVersionOutcome GreengrassClient::CreateLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoggerDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LoggerDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLoggerDefinitionVersion", "Required field: LoggerDefinitionId, is not set");
    return CreateLoggerDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoggerDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateLoggerDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceDefinitionOutcome GreengrassClient::CreateResourceDefinition(const CreateResourceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources");
  return CreateResourceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceDefinitionVersionOutcome GreengrassClient::CreateResourceDefinitionVersion(const CreateResourceDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResourceDefinitionVersion", "Required field: ResourceDefinitionId, is not set");
    return CreateResourceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateResourceDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSoftwareUpdateJobOutcome GreengrassClient::CreateSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSoftwareUpdateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSoftwareUpdateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/updates");
  return CreateSoftwareUpdateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriptionDefinitionOutcome GreengrassClient::CreateSubscriptionDefinition(const CreateSubscriptionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions");
  return CreateSubscriptionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriptionDefinitionVersionOutcome GreengrassClient::CreateSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionDefinitionVersion", "Required field: SubscriptionDefinitionId, is not set");
    return CreateSubscriptionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateSubscriptionDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectorDefinitionOutcome GreengrassClient::DeleteConnectorDefinition(const DeleteConnectorDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnectorDefinition", "Required field: ConnectorDefinitionId, is not set");
    return DeleteConnectorDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  return DeleteConnectorDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCoreDefinitionOutcome GreengrassClient::DeleteCoreDefinition(const DeleteCoreDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CoreDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCoreDefinition", "Required field: CoreDefinitionId, is not set");
    return DeleteCoreDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  return DeleteCoreDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceDefinitionOutcome GreengrassClient::DeleteDeviceDefinition(const DeleteDeviceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeviceDefinition", "Required field: DeviceDefinitionId, is not set");
    return DeleteDeviceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  return DeleteDeviceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFunctionDefinitionOutcome GreengrassClient::DeleteFunctionDefinition(const DeleteFunctionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunctionDefinition", "Required field: FunctionDefinitionId, is not set");
    return DeleteFunctionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  return DeleteFunctionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcome GreengrassClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  return DeleteGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoggerDefinitionOutcome GreengrassClient::DeleteLoggerDefinition(const DeleteLoggerDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LoggerDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLoggerDefinition", "Required field: LoggerDefinitionId, is not set");
    return DeleteLoggerDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  return DeleteLoggerDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceDefinitionOutcome GreengrassClient::DeleteResourceDefinition(const DeleteResourceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourceDefinition", "Required field: ResourceDefinitionId, is not set");
    return DeleteResourceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  return DeleteResourceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriptionDefinitionOutcome GreengrassClient::DeleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionDefinition", "Required field: SubscriptionDefinitionId, is not set");
    return DeleteSubscriptionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  return DeleteSubscriptionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateRoleFromGroupOutcome GreengrassClient::DisassociateRoleFromGroup(const DisassociateRoleFromGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateRoleFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRoleFromGroup", "Required field: GroupId, is not set");
    return DisassociateRoleFromGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateRoleFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/role");
  return DisassociateRoleFromGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateServiceRoleFromAccountOutcome GreengrassClient::DisassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateServiceRoleFromAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateServiceRoleFromAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  return DisassociateServiceRoleFromAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetAssociatedRoleOutcome GreengrassClient::GetAssociatedRole(const GetAssociatedRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssociatedRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssociatedRole", "Required field: GroupId, is not set");
    return GetAssociatedRoleOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssociatedRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/role");
  return GetAssociatedRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBulkDeploymentStatusOutcome GreengrassClient::GetBulkDeploymentStatus(const GetBulkDeploymentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBulkDeploymentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BulkDeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBulkDeploymentStatus", "Required field: BulkDeploymentId, is not set");
    return GetBulkDeploymentStatusOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BulkDeploymentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBulkDeploymentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBulkDeploymentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetBulkDeploymentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectivityInfoOutcome GreengrassClient::GetConnectivityInfo(const GetConnectivityInfoRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnectivityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectivityInfo", "Required field: ThingName, is not set");
    return GetConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnectivityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/connectivityInfo");
  return GetConnectivityInfoOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectorDefinitionOutcome GreengrassClient::GetConnectorDefinition(const GetConnectorDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectorDefinition", "Required field: ConnectorDefinitionId, is not set");
    return GetConnectorDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  return GetConnectorDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectorDefinitionVersionOutcome GreengrassClient::GetConnectorDefinitionVersion(const GetConnectorDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnectorDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectorDefinitionVersion", "Required field: ConnectorDefinitionId, is not set");
    return GetConnectorDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }
  if (!request.ConnectorDefinitionVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnectorDefinitionVersion", "Required field: ConnectorDefinitionVersionId, is not set");
    return GetConnectorDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnectorDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionVersionId());
  return GetConnectorDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoreDefinitionOutcome GreengrassClient::GetCoreDefinition(const GetCoreDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CoreDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreDefinition", "Required field: CoreDefinitionId, is not set");
    return GetCoreDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  return GetCoreDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoreDefinitionVersionOutcome GreengrassClient::GetCoreDefinitionVersion(const GetCoreDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCoreDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CoreDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreDefinitionVersion", "Required field: CoreDefinitionId, is not set");
    return GetCoreDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }
  if (!request.CoreDefinitionVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoreDefinitionVersion", "Required field: CoreDefinitionVersionId, is not set");
    return GetCoreDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCoreDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionVersionId());
  return GetCoreDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentStatusOutcome GreengrassClient::GetDeploymentStatus(const GetDeploymentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeploymentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeploymentStatus", "Required field: DeploymentId, is not set");
    return GetDeploymentStatusOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeploymentStatus", "Required field: GroupId, is not set");
    return GetDeploymentStatusOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeploymentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetDeploymentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceDefinitionOutcome GreengrassClient::GetDeviceDefinition(const GetDeviceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceDefinition", "Required field: DeviceDefinitionId, is not set");
    return GetDeviceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  return GetDeviceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceDefinitionVersionOutcome GreengrassClient::GetDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceDefinitionVersion", "Required field: DeviceDefinitionId, is not set");
    return GetDeviceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }
  if (!request.DeviceDefinitionVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceDefinitionVersion", "Required field: DeviceDefinitionVersionId, is not set");
    return GetDeviceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeviceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionVersionId());
  return GetDeviceDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionDefinitionOutcome GreengrassClient::GetFunctionDefinition(const GetFunctionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionDefinition", "Required field: FunctionDefinitionId, is not set");
    return GetFunctionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  return GetFunctionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionDefinitionVersionOutcome GreengrassClient::GetFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFunctionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionDefinitionVersion", "Required field: FunctionDefinitionId, is not set");
    return GetFunctionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }
  if (!request.FunctionDefinitionVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionDefinitionVersion", "Required field: FunctionDefinitionVersionId, is not set");
    return GetFunctionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFunctionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionVersionId());
  return GetFunctionDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGroupOutcome GreengrassClient::GetGroup(const GetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: GroupId, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  return GetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGroupCertificateAuthorityOutcome GreengrassClient::GetGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroupCertificateAuthority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CertificateAuthorityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroupCertificateAuthority", "Required field: CertificateAuthorityId, is not set");
    return GetGroupCertificateAuthorityOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CertificateAuthorityId]", false));
  }
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroupCertificateAuthority", "Required field: GroupId, is not set");
    return GetGroupCertificateAuthorityOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroupCertificateAuthority, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateAuthorityId());
  return GetGroupCertificateAuthorityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGroupCertificateConfigurationOutcome GreengrassClient::GetGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroupCertificateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroupCertificateConfiguration", "Required field: GroupId, is not set");
    return GetGroupCertificateConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroupCertificateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities/configuration/expiry");
  return GetGroupCertificateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGroupVersionOutcome GreengrassClient::GetGroupVersion(const GetGroupVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroupVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroupVersion", "Required field: GroupId, is not set");
    return GetGroupVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  if (!request.GroupVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroupVersion", "Required field: GroupVersionId, is not set");
    return GetGroupVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroupVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupVersionId());
  return GetGroupVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLoggerDefinitionOutcome GreengrassClient::GetLoggerDefinition(const GetLoggerDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LoggerDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLoggerDefinition", "Required field: LoggerDefinitionId, is not set");
    return GetLoggerDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  return GetLoggerDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLoggerDefinitionVersionOutcome GreengrassClient::GetLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoggerDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LoggerDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLoggerDefinitionVersion", "Required field: LoggerDefinitionId, is not set");
    return GetLoggerDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }
  if (!request.LoggerDefinitionVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLoggerDefinitionVersion", "Required field: LoggerDefinitionVersionId, is not set");
    return GetLoggerDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoggerDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionVersionId());
  return GetLoggerDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceDefinitionOutcome GreengrassClient::GetResourceDefinition(const GetResourceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceDefinition", "Required field: ResourceDefinitionId, is not set");
    return GetResourceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  return GetResourceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceDefinitionVersionOutcome GreengrassClient::GetResourceDefinitionVersion(const GetResourceDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceDefinitionVersion", "Required field: ResourceDefinitionId, is not set");
    return GetResourceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }
  if (!request.ResourceDefinitionVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceDefinitionVersion", "Required field: ResourceDefinitionVersionId, is not set");
    return GetResourceDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionVersionId());
  return GetResourceDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceRoleForAccountOutcome GreengrassClient::GetServiceRoleForAccount(const GetServiceRoleForAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceRoleForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceRoleForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  return GetServiceRoleForAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSubscriptionDefinitionOutcome GreengrassClient::GetSubscriptionDefinition(const GetSubscriptionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionDefinition", "Required field: SubscriptionDefinitionId, is not set");
    return GetSubscriptionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  return GetSubscriptionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSubscriptionDefinitionVersionOutcome GreengrassClient::GetSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscriptionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionDefinitionVersion", "Required field: SubscriptionDefinitionId, is not set");
    return GetSubscriptionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }
  if (!request.SubscriptionDefinitionVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionDefinitionVersion", "Required field: SubscriptionDefinitionVersionId, is not set");
    return GetSubscriptionDefinitionVersionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionVersionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscriptionDefinitionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionVersionId());
  return GetSubscriptionDefinitionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetThingRuntimeConfigurationOutcome GreengrassClient::GetThingRuntimeConfiguration(const GetThingRuntimeConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetThingRuntimeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetThingRuntimeConfiguration", "Required field: ThingName, is not set");
    return GetThingRuntimeConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetThingRuntimeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/runtimeconfig");
  return GetThingRuntimeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBulkDeploymentDetailedReportsOutcome GreengrassClient::ListBulkDeploymentDetailedReports(const ListBulkDeploymentDetailedReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBulkDeploymentDetailedReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BulkDeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBulkDeploymentDetailedReports", "Required field: BulkDeploymentId, is not set");
    return ListBulkDeploymentDetailedReportsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BulkDeploymentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBulkDeploymentDetailedReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBulkDeploymentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detailed-reports");
  return ListBulkDeploymentDetailedReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBulkDeploymentsOutcome GreengrassClient::ListBulkDeployments(const ListBulkDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBulkDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBulkDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments");
  return ListBulkDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorDefinitionVersionsOutcome GreengrassClient::ListConnectorDefinitionVersions(const ListConnectorDefinitionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnectorDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConnectorDefinitionVersions", "Required field: ConnectorDefinitionId, is not set");
    return ListConnectorDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConnectorDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListConnectorDefinitionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorDefinitionsOutcome GreengrassClient::ListConnectorDefinitions(const ListConnectorDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnectorDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConnectorDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors");
  return ListConnectorDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCoreDefinitionVersionsOutcome GreengrassClient::ListCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCoreDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CoreDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCoreDefinitionVersions", "Required field: CoreDefinitionId, is not set");
    return ListCoreDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCoreDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListCoreDefinitionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCoreDefinitionsOutcome GreengrassClient::ListCoreDefinitions(const ListCoreDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCoreDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCoreDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores");
  return ListCoreDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentsOutcome GreengrassClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: GroupId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  return ListDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceDefinitionVersionsOutcome GreengrassClient::ListDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeviceDefinitionVersions", "Required field: DeviceDefinitionId, is not set");
    return ListDeviceDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListDeviceDefinitionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceDefinitionsOutcome GreengrassClient::ListDeviceDefinitions(const ListDeviceDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices");
  return ListDeviceDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionDefinitionVersionsOutcome GreengrassClient::ListFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFunctionDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFunctionDefinitionVersions", "Required field: FunctionDefinitionId, is not set");
    return ListFunctionDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFunctionDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListFunctionDefinitionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionDefinitionsOutcome GreengrassClient::ListFunctionDefinitions(const ListFunctionDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFunctionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFunctionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions");
  return ListFunctionDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupCertificateAuthoritiesOutcome GreengrassClient::ListGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroupCertificateAuthorities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupCertificateAuthorities", "Required field: GroupId, is not set");
    return ListGroupCertificateAuthoritiesOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroupCertificateAuthorities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities");
  return ListGroupCertificateAuthoritiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupVersionsOutcome GreengrassClient::ListGroupVersions(const ListGroupVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroupVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupVersions", "Required field: GroupId, is not set");
    return ListGroupVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroupVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListGroupVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcome GreengrassClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups");
  return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLoggerDefinitionVersionsOutcome GreengrassClient::ListLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLoggerDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LoggerDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLoggerDefinitionVersions", "Required field: LoggerDefinitionId, is not set");
    return ListLoggerDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLoggerDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListLoggerDefinitionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLoggerDefinitionsOutcome GreengrassClient::ListLoggerDefinitions(const ListLoggerDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLoggerDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLoggerDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers");
  return ListLoggerDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResourceDefinitionVersionsOutcome GreengrassClient::ListResourceDefinitionVersions(const ListResourceDefinitionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResourceDefinitionVersions", "Required field: ResourceDefinitionId, is not set");
    return ListResourceDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListResourceDefinitionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResourceDefinitionsOutcome GreengrassClient::ListResourceDefinitions(const ListResourceDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources");
  return ListResourceDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSubscriptionDefinitionVersionsOutcome GreengrassClient::ListSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscriptionDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSubscriptionDefinitionVersions", "Required field: SubscriptionDefinitionId, is not set");
    return ListSubscriptionDefinitionVersionsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscriptionDefinitionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListSubscriptionDefinitionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSubscriptionDefinitionsOutcome GreengrassClient::ListSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscriptionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscriptionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions");
  return ListSubscriptionDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome GreengrassClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ResetDeploymentsOutcome GreengrassClient::ResetDeployments(const ResetDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetDeployments", "Required field: GroupId, is not set");
    return ResetDeploymentsOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/$reset");
  return ResetDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBulkDeploymentOutcome GreengrassClient::StartBulkDeployment(const StartBulkDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBulkDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBulkDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments");
  return StartBulkDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopBulkDeploymentOutcome GreengrassClient::StopBulkDeployment(const StopBulkDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopBulkDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BulkDeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopBulkDeployment", "Required field: BulkDeploymentId, is not set");
    return StopBulkDeploymentOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BulkDeploymentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopBulkDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBulkDeploymentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/$stop");
  return StopBulkDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome GreengrassClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome GreengrassClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectivityInfoOutcome GreengrassClient::UpdateConnectivityInfo(const UpdateConnectivityInfoRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnectivityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnectivityInfo", "Required field: ThingName, is not set");
    return UpdateConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConnectivityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/connectivityInfo");
  return UpdateConnectivityInfoOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectorDefinitionOutcome GreengrassClient::UpdateConnectorDefinition(const UpdateConnectorDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnectorDefinition", "Required field: ConnectorDefinitionId, is not set");
    return UpdateConnectorDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorDefinitionId());
  return UpdateConnectorDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCoreDefinitionOutcome GreengrassClient::UpdateCoreDefinition(const UpdateCoreDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CoreDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCoreDefinition", "Required field: CoreDefinitionId, is not set");
    return UpdateCoreDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDefinitionId());
  return UpdateCoreDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceDefinitionOutcome GreengrassClient::UpdateDeviceDefinition(const UpdateDeviceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeviceDefinition", "Required field: DeviceDefinitionId, is not set");
    return UpdateDeviceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceDefinitionId());
  return UpdateDeviceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFunctionDefinitionOutcome GreengrassClient::UpdateFunctionDefinition(const UpdateFunctionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FunctionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunctionDefinition", "Required field: FunctionDefinitionId, is not set");
    return UpdateFunctionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFunctionDefinitionId());
  return UpdateFunctionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcome GreengrassClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: GroupId, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  return UpdateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupCertificateConfigurationOutcome GreengrassClient::UpdateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroupCertificateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroupCertificateConfiguration", "Required field: GroupId, is not set");
    return UpdateGroupCertificateConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroupCertificateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificateauthorities/configuration/expiry");
  return UpdateGroupCertificateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateLoggerDefinitionOutcome GreengrassClient::UpdateLoggerDefinition(const UpdateLoggerDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LoggerDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLoggerDefinition", "Required field: LoggerDefinitionId, is not set");
    return UpdateLoggerDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LoggerDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoggerDefinitionId());
  return UpdateLoggerDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceDefinitionOutcome GreengrassClient::UpdateResourceDefinition(const UpdateResourceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourceDefinition", "Required field: ResourceDefinitionId, is not set");
    return UpdateResourceDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceDefinitionId());
  return UpdateResourceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriptionDefinitionOutcome GreengrassClient::UpdateSubscriptionDefinition(const UpdateSubscriptionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionDefinition", "Required field: SubscriptionDefinitionId, is not set");
    return UpdateSubscriptionDefinitionOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionDefinitionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionDefinitionId());
  return UpdateSubscriptionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThingRuntimeConfigurationOutcome GreengrassClient::UpdateThingRuntimeConfiguration(const UpdateThingRuntimeConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateThingRuntimeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThingRuntimeConfiguration", "Required field: ThingName, is not set");
    return UpdateThingRuntimeConfigurationOutcome(Aws::Client::AWSError<GreengrassErrors>(GreengrassErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateThingRuntimeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/runtimeconfig");
  return UpdateThingRuntimeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

