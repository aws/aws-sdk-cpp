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

AssociateRoleToGroupOutcomeCallable GreengrassClient::AssociateRoleToGroupCallable(const AssociateRoleToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateRoleToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateRoleToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::AssociateRoleToGroupAsync(const AssociateRoleToGroupRequest& request, const AssociateRoleToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateRoleToGroup(request), context);
    } );
}

AssociateServiceRoleToAccountOutcome GreengrassClient::AssociateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateServiceRoleToAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateServiceRoleToAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  return AssociateServiceRoleToAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateServiceRoleToAccountOutcomeCallable GreengrassClient::AssociateServiceRoleToAccountCallable(const AssociateServiceRoleToAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateServiceRoleToAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateServiceRoleToAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::AssociateServiceRoleToAccountAsync(const AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateServiceRoleToAccount(request), context);
    } );
}

CreateConnectorDefinitionOutcome GreengrassClient::CreateConnectorDefinition(const CreateConnectorDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnectorDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors");
  return CreateConnectorDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectorDefinitionOutcomeCallable GreengrassClient::CreateConnectorDefinitionCallable(const CreateConnectorDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectorDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectorDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateConnectorDefinitionAsync(const CreateConnectorDefinitionRequest& request, const CreateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConnectorDefinition(request), context);
    } );
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

CreateConnectorDefinitionVersionOutcomeCallable GreengrassClient::CreateConnectorDefinitionVersionCallable(const CreateConnectorDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectorDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectorDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateConnectorDefinitionVersionAsync(const CreateConnectorDefinitionVersionRequest& request, const CreateConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConnectorDefinitionVersion(request), context);
    } );
}

CreateCoreDefinitionOutcome GreengrassClient::CreateCoreDefinition(const CreateCoreDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCoreDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores");
  return CreateCoreDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCoreDefinitionOutcomeCallable GreengrassClient::CreateCoreDefinitionCallable(const CreateCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateCoreDefinitionAsync(const CreateCoreDefinitionRequest& request, const CreateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCoreDefinition(request), context);
    } );
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

CreateCoreDefinitionVersionOutcomeCallable GreengrassClient::CreateCoreDefinitionVersionCallable(const CreateCoreDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCoreDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCoreDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateCoreDefinitionVersionAsync(const CreateCoreDefinitionVersionRequest& request, const CreateCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCoreDefinitionVersion(request), context);
    } );
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

CreateDeploymentOutcomeCallable GreengrassClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeployment(request), context);
    } );
}

CreateDeviceDefinitionOutcome GreengrassClient::CreateDeviceDefinition(const CreateDeviceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeviceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices");
  return CreateDeviceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceDefinitionOutcomeCallable GreengrassClient::CreateDeviceDefinitionCallable(const CreateDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateDeviceDefinitionAsync(const CreateDeviceDefinitionRequest& request, const CreateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeviceDefinition(request), context);
    } );
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

CreateDeviceDefinitionVersionOutcomeCallable GreengrassClient::CreateDeviceDefinitionVersionCallable(const CreateDeviceDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeviceDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateDeviceDefinitionVersionAsync(const CreateDeviceDefinitionVersionRequest& request, const CreateDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeviceDefinitionVersion(request), context);
    } );
}

CreateFunctionDefinitionOutcome GreengrassClient::CreateFunctionDefinition(const CreateFunctionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFunctionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions");
  return CreateFunctionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFunctionDefinitionOutcomeCallable GreengrassClient::CreateFunctionDefinitionCallable(const CreateFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateFunctionDefinitionAsync(const CreateFunctionDefinitionRequest& request, const CreateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFunctionDefinition(request), context);
    } );
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

CreateFunctionDefinitionVersionOutcomeCallable GreengrassClient::CreateFunctionDefinitionVersionCallable(const CreateFunctionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunctionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunctionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateFunctionDefinitionVersionAsync(const CreateFunctionDefinitionVersionRequest& request, const CreateFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFunctionDefinitionVersion(request), context);
    } );
}

CreateGroupOutcome GreengrassClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups");
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable GreengrassClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGroup(request), context);
    } );
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

CreateGroupCertificateAuthorityOutcomeCallable GreengrassClient::CreateGroupCertificateAuthorityCallable(const CreateGroupCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroupCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateGroupCertificateAuthorityAsync(const CreateGroupCertificateAuthorityRequest& request, const CreateGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGroupCertificateAuthority(request), context);
    } );
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

CreateGroupVersionOutcomeCallable GreengrassClient::CreateGroupVersionCallable(const CreateGroupVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroupVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateGroupVersionAsync(const CreateGroupVersionRequest& request, const CreateGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGroupVersion(request), context);
    } );
}

CreateLoggerDefinitionOutcome GreengrassClient::CreateLoggerDefinition(const CreateLoggerDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoggerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers");
  return CreateLoggerDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoggerDefinitionOutcomeCallable GreengrassClient::CreateLoggerDefinitionCallable(const CreateLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateLoggerDefinitionAsync(const CreateLoggerDefinitionRequest& request, const CreateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoggerDefinition(request), context);
    } );
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

CreateLoggerDefinitionVersionOutcomeCallable GreengrassClient::CreateLoggerDefinitionVersionCallable(const CreateLoggerDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoggerDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoggerDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateLoggerDefinitionVersionAsync(const CreateLoggerDefinitionVersionRequest& request, const CreateLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoggerDefinitionVersion(request), context);
    } );
}

CreateResourceDefinitionOutcome GreengrassClient::CreateResourceDefinition(const CreateResourceDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources");
  return CreateResourceDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceDefinitionOutcomeCallable GreengrassClient::CreateResourceDefinitionCallable(const CreateResourceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateResourceDefinitionAsync(const CreateResourceDefinitionRequest& request, const CreateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResourceDefinition(request), context);
    } );
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

CreateResourceDefinitionVersionOutcomeCallable GreengrassClient::CreateResourceDefinitionVersionCallable(const CreateResourceDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateResourceDefinitionVersionAsync(const CreateResourceDefinitionVersionRequest& request, const CreateResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResourceDefinitionVersion(request), context);
    } );
}

CreateSoftwareUpdateJobOutcome GreengrassClient::CreateSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSoftwareUpdateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSoftwareUpdateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/updates");
  return CreateSoftwareUpdateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSoftwareUpdateJobOutcomeCallable GreengrassClient::CreateSoftwareUpdateJobCallable(const CreateSoftwareUpdateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSoftwareUpdateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSoftwareUpdateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateSoftwareUpdateJobAsync(const CreateSoftwareUpdateJobRequest& request, const CreateSoftwareUpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSoftwareUpdateJob(request), context);
    } );
}

CreateSubscriptionDefinitionOutcome GreengrassClient::CreateSubscriptionDefinition(const CreateSubscriptionDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions");
  return CreateSubscriptionDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriptionDefinitionOutcomeCallable GreengrassClient::CreateSubscriptionDefinitionCallable(const CreateSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateSubscriptionDefinitionAsync(const CreateSubscriptionDefinitionRequest& request, const CreateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSubscriptionDefinition(request), context);
    } );
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

CreateSubscriptionDefinitionVersionOutcomeCallable GreengrassClient::CreateSubscriptionDefinitionVersionCallable(const CreateSubscriptionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriptionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscriptionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateSubscriptionDefinitionVersionAsync(const CreateSubscriptionDefinitionVersionRequest& request, const CreateSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSubscriptionDefinitionVersion(request), context);
    } );
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

DeleteConnectorDefinitionOutcomeCallable GreengrassClient::DeleteConnectorDefinitionCallable(const DeleteConnectorDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectorDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnectorDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteConnectorDefinitionAsync(const DeleteConnectorDefinitionRequest& request, const DeleteConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConnectorDefinition(request), context);
    } );
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

DeleteCoreDefinitionOutcomeCallable GreengrassClient::DeleteCoreDefinitionCallable(const DeleteCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteCoreDefinitionAsync(const DeleteCoreDefinitionRequest& request, const DeleteCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCoreDefinition(request), context);
    } );
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

DeleteDeviceDefinitionOutcomeCallable GreengrassClient::DeleteDeviceDefinitionCallable(const DeleteDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteDeviceDefinitionAsync(const DeleteDeviceDefinitionRequest& request, const DeleteDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDeviceDefinition(request), context);
    } );
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

DeleteFunctionDefinitionOutcomeCallable GreengrassClient::DeleteFunctionDefinitionCallable(const DeleteFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteFunctionDefinitionAsync(const DeleteFunctionDefinitionRequest& request, const DeleteFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFunctionDefinition(request), context);
    } );
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

DeleteGroupOutcomeCallable GreengrassClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGroup(request), context);
    } );
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

DeleteLoggerDefinitionOutcomeCallable GreengrassClient::DeleteLoggerDefinitionCallable(const DeleteLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteLoggerDefinitionAsync(const DeleteLoggerDefinitionRequest& request, const DeleteLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoggerDefinition(request), context);
    } );
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

DeleteResourceDefinitionOutcomeCallable GreengrassClient::DeleteResourceDefinitionCallable(const DeleteResourceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteResourceDefinitionAsync(const DeleteResourceDefinitionRequest& request, const DeleteResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourceDefinition(request), context);
    } );
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

DeleteSubscriptionDefinitionOutcomeCallable GreengrassClient::DeleteSubscriptionDefinitionCallable(const DeleteSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteSubscriptionDefinitionAsync(const DeleteSubscriptionDefinitionRequest& request, const DeleteSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSubscriptionDefinition(request), context);
    } );
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

DisassociateRoleFromGroupOutcomeCallable GreengrassClient::DisassociateRoleFromGroupCallable(const DisassociateRoleFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRoleFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateRoleFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DisassociateRoleFromGroupAsync(const DisassociateRoleFromGroupRequest& request, const DisassociateRoleFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateRoleFromGroup(request), context);
    } );
}

DisassociateServiceRoleFromAccountOutcome GreengrassClient::DisassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateServiceRoleFromAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateServiceRoleFromAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  return DisassociateServiceRoleFromAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateServiceRoleFromAccountOutcomeCallable GreengrassClient::DisassociateServiceRoleFromAccountCallable(const DisassociateServiceRoleFromAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateServiceRoleFromAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateServiceRoleFromAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DisassociateServiceRoleFromAccountAsync(const DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateServiceRoleFromAccount(request), context);
    } );
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

GetAssociatedRoleOutcomeCallable GreengrassClient::GetAssociatedRoleCallable(const GetAssociatedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssociatedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssociatedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetAssociatedRoleAsync(const GetAssociatedRoleRequest& request, const GetAssociatedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssociatedRole(request), context);
    } );
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

GetBulkDeploymentStatusOutcomeCallable GreengrassClient::GetBulkDeploymentStatusCallable(const GetBulkDeploymentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBulkDeploymentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBulkDeploymentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetBulkDeploymentStatusAsync(const GetBulkDeploymentStatusRequest& request, const GetBulkDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBulkDeploymentStatus(request), context);
    } );
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

GetConnectivityInfoOutcomeCallable GreengrassClient::GetConnectivityInfoCallable(const GetConnectivityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectivityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectivityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetConnectivityInfoAsync(const GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConnectivityInfo(request), context);
    } );
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

GetConnectorDefinitionOutcomeCallable GreengrassClient::GetConnectorDefinitionCallable(const GetConnectorDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectorDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectorDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetConnectorDefinitionAsync(const GetConnectorDefinitionRequest& request, const GetConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConnectorDefinition(request), context);
    } );
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

GetConnectorDefinitionVersionOutcomeCallable GreengrassClient::GetConnectorDefinitionVersionCallable(const GetConnectorDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectorDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectorDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetConnectorDefinitionVersionAsync(const GetConnectorDefinitionVersionRequest& request, const GetConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConnectorDefinitionVersion(request), context);
    } );
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

GetCoreDefinitionOutcomeCallable GreengrassClient::GetCoreDefinitionCallable(const GetCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetCoreDefinitionAsync(const GetCoreDefinitionRequest& request, const GetCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCoreDefinition(request), context);
    } );
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

GetCoreDefinitionVersionOutcomeCallable GreengrassClient::GetCoreDefinitionVersionCallable(const GetCoreDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetCoreDefinitionVersionAsync(const GetCoreDefinitionVersionRequest& request, const GetCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCoreDefinitionVersion(request), context);
    } );
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

GetDeploymentStatusOutcomeCallable GreengrassClient::GetDeploymentStatusCallable(const GetDeploymentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetDeploymentStatusAsync(const GetDeploymentStatusRequest& request, const GetDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeploymentStatus(request), context);
    } );
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

GetDeviceDefinitionOutcomeCallable GreengrassClient::GetDeviceDefinitionCallable(const GetDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetDeviceDefinitionAsync(const GetDeviceDefinitionRequest& request, const GetDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeviceDefinition(request), context);
    } );
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

GetDeviceDefinitionVersionOutcomeCallable GreengrassClient::GetDeviceDefinitionVersionCallable(const GetDeviceDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetDeviceDefinitionVersionAsync(const GetDeviceDefinitionVersionRequest& request, const GetDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeviceDefinitionVersion(request), context);
    } );
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

GetFunctionDefinitionOutcomeCallable GreengrassClient::GetFunctionDefinitionCallable(const GetFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetFunctionDefinitionAsync(const GetFunctionDefinitionRequest& request, const GetFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFunctionDefinition(request), context);
    } );
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

GetFunctionDefinitionVersionOutcomeCallable GreengrassClient::GetFunctionDefinitionVersionCallable(const GetFunctionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetFunctionDefinitionVersionAsync(const GetFunctionDefinitionVersionRequest& request, const GetFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFunctionDefinitionVersion(request), context);
    } );
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

GetGroupOutcomeCallable GreengrassClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGroup(request), context);
    } );
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

GetGroupCertificateAuthorityOutcomeCallable GreengrassClient::GetGroupCertificateAuthorityCallable(const GetGroupCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupCertificateAuthorityAsync(const GetGroupCertificateAuthorityRequest& request, const GetGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGroupCertificateAuthority(request), context);
    } );
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

GetGroupCertificateConfigurationOutcomeCallable GreengrassClient::GetGroupCertificateConfigurationCallable(const GetGroupCertificateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupCertificateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupCertificateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupCertificateConfigurationAsync(const GetGroupCertificateConfigurationRequest& request, const GetGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGroupCertificateConfiguration(request), context);
    } );
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

GetGroupVersionOutcomeCallable GreengrassClient::GetGroupVersionCallable(const GetGroupVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupVersionAsync(const GetGroupVersionRequest& request, const GetGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGroupVersion(request), context);
    } );
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

GetLoggerDefinitionOutcomeCallable GreengrassClient::GetLoggerDefinitionCallable(const GetLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetLoggerDefinitionAsync(const GetLoggerDefinitionRequest& request, const GetLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoggerDefinition(request), context);
    } );
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

GetLoggerDefinitionVersionOutcomeCallable GreengrassClient::GetLoggerDefinitionVersionCallable(const GetLoggerDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggerDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggerDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetLoggerDefinitionVersionAsync(const GetLoggerDefinitionVersionRequest& request, const GetLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoggerDefinitionVersion(request), context);
    } );
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

GetResourceDefinitionOutcomeCallable GreengrassClient::GetResourceDefinitionCallable(const GetResourceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetResourceDefinitionAsync(const GetResourceDefinitionRequest& request, const GetResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceDefinition(request), context);
    } );
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

GetResourceDefinitionVersionOutcomeCallable GreengrassClient::GetResourceDefinitionVersionCallable(const GetResourceDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetResourceDefinitionVersionAsync(const GetResourceDefinitionVersionRequest& request, const GetResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceDefinitionVersion(request), context);
    } );
}

GetServiceRoleForAccountOutcome GreengrassClient::GetServiceRoleForAccount(const GetServiceRoleForAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceRoleForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceRoleForAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  return GetServiceRoleForAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceRoleForAccountOutcomeCallable GreengrassClient::GetServiceRoleForAccountCallable(const GetServiceRoleForAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceRoleForAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceRoleForAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetServiceRoleForAccountAsync(const GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceRoleForAccount(request), context);
    } );
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

GetSubscriptionDefinitionOutcomeCallable GreengrassClient::GetSubscriptionDefinitionCallable(const GetSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetSubscriptionDefinitionAsync(const GetSubscriptionDefinitionRequest& request, const GetSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSubscriptionDefinition(request), context);
    } );
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

GetSubscriptionDefinitionVersionOutcomeCallable GreengrassClient::GetSubscriptionDefinitionVersionCallable(const GetSubscriptionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetSubscriptionDefinitionVersionAsync(const GetSubscriptionDefinitionVersionRequest& request, const GetSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSubscriptionDefinitionVersion(request), context);
    } );
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

GetThingRuntimeConfigurationOutcomeCallable GreengrassClient::GetThingRuntimeConfigurationCallable(const GetThingRuntimeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetThingRuntimeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetThingRuntimeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetThingRuntimeConfigurationAsync(const GetThingRuntimeConfigurationRequest& request, const GetThingRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetThingRuntimeConfiguration(request), context);
    } );
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

ListBulkDeploymentDetailedReportsOutcomeCallable GreengrassClient::ListBulkDeploymentDetailedReportsCallable(const ListBulkDeploymentDetailedReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBulkDeploymentDetailedReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBulkDeploymentDetailedReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListBulkDeploymentDetailedReportsAsync(const ListBulkDeploymentDetailedReportsRequest& request, const ListBulkDeploymentDetailedReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBulkDeploymentDetailedReports(request), context);
    } );
}

ListBulkDeploymentsOutcome GreengrassClient::ListBulkDeployments(const ListBulkDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBulkDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBulkDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments");
  return ListBulkDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBulkDeploymentsOutcomeCallable GreengrassClient::ListBulkDeploymentsCallable(const ListBulkDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBulkDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBulkDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListBulkDeploymentsAsync(const ListBulkDeploymentsRequest& request, const ListBulkDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBulkDeployments(request), context);
    } );
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

ListConnectorDefinitionVersionsOutcomeCallable GreengrassClient::ListConnectorDefinitionVersionsCallable(const ListConnectorDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectorDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListConnectorDefinitionVersionsAsync(const ListConnectorDefinitionVersionsRequest& request, const ListConnectorDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConnectorDefinitionVersions(request), context);
    } );
}

ListConnectorDefinitionsOutcome GreengrassClient::ListConnectorDefinitions(const ListConnectorDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnectorDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConnectorDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/connectors");
  return ListConnectorDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorDefinitionsOutcomeCallable GreengrassClient::ListConnectorDefinitionsCallable(const ListConnectorDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectorDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListConnectorDefinitionsAsync(const ListConnectorDefinitionsRequest& request, const ListConnectorDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConnectorDefinitions(request), context);
    } );
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

ListCoreDefinitionVersionsOutcomeCallable GreengrassClient::ListCoreDefinitionVersionsCallable(const ListCoreDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoreDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoreDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListCoreDefinitionVersionsAsync(const ListCoreDefinitionVersionsRequest& request, const ListCoreDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCoreDefinitionVersions(request), context);
    } );
}

ListCoreDefinitionsOutcome GreengrassClient::ListCoreDefinitions(const ListCoreDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCoreDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCoreDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/cores");
  return ListCoreDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCoreDefinitionsOutcomeCallable GreengrassClient::ListCoreDefinitionsCallable(const ListCoreDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoreDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoreDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListCoreDefinitionsAsync(const ListCoreDefinitionsRequest& request, const ListCoreDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCoreDefinitions(request), context);
    } );
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

ListDeploymentsOutcomeCallable GreengrassClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeployments(request), context);
    } );
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

ListDeviceDefinitionVersionsOutcomeCallable GreengrassClient::ListDeviceDefinitionVersionsCallable(const ListDeviceDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListDeviceDefinitionVersionsAsync(const ListDeviceDefinitionVersionsRequest& request, const ListDeviceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeviceDefinitionVersions(request), context);
    } );
}

ListDeviceDefinitionsOutcome GreengrassClient::ListDeviceDefinitions(const ListDeviceDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/devices");
  return ListDeviceDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceDefinitionsOutcomeCallable GreengrassClient::ListDeviceDefinitionsCallable(const ListDeviceDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListDeviceDefinitionsAsync(const ListDeviceDefinitionsRequest& request, const ListDeviceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeviceDefinitions(request), context);
    } );
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

ListFunctionDefinitionVersionsOutcomeCallable GreengrassClient::ListFunctionDefinitionVersionsCallable(const ListFunctionDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctionDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListFunctionDefinitionVersionsAsync(const ListFunctionDefinitionVersionsRequest& request, const ListFunctionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFunctionDefinitionVersions(request), context);
    } );
}

ListFunctionDefinitionsOutcome GreengrassClient::ListFunctionDefinitions(const ListFunctionDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFunctionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFunctionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/functions");
  return ListFunctionDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionDefinitionsOutcomeCallable GreengrassClient::ListFunctionDefinitionsCallable(const ListFunctionDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctionDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListFunctionDefinitionsAsync(const ListFunctionDefinitionsRequest& request, const ListFunctionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFunctionDefinitions(request), context);
    } );
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

ListGroupCertificateAuthoritiesOutcomeCallable GreengrassClient::ListGroupCertificateAuthoritiesCallable(const ListGroupCertificateAuthoritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupCertificateAuthoritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupCertificateAuthorities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListGroupCertificateAuthoritiesAsync(const ListGroupCertificateAuthoritiesRequest& request, const ListGroupCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroupCertificateAuthorities(request), context);
    } );
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

ListGroupVersionsOutcomeCallable GreengrassClient::ListGroupVersionsCallable(const ListGroupVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListGroupVersionsAsync(const ListGroupVersionsRequest& request, const ListGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroupVersions(request), context);
    } );
}

ListGroupsOutcome GreengrassClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/groups");
  return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable GreengrassClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroups(request), context);
    } );
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

ListLoggerDefinitionVersionsOutcomeCallable GreengrassClient::ListLoggerDefinitionVersionsCallable(const ListLoggerDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggerDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggerDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListLoggerDefinitionVersionsAsync(const ListLoggerDefinitionVersionsRequest& request, const ListLoggerDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLoggerDefinitionVersions(request), context);
    } );
}

ListLoggerDefinitionsOutcome GreengrassClient::ListLoggerDefinitions(const ListLoggerDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLoggerDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLoggerDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/loggers");
  return ListLoggerDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLoggerDefinitionsOutcomeCallable GreengrassClient::ListLoggerDefinitionsCallable(const ListLoggerDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggerDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggerDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListLoggerDefinitionsAsync(const ListLoggerDefinitionsRequest& request, const ListLoggerDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLoggerDefinitions(request), context);
    } );
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

ListResourceDefinitionVersionsOutcomeCallable GreengrassClient::ListResourceDefinitionVersionsCallable(const ListResourceDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListResourceDefinitionVersionsAsync(const ListResourceDefinitionVersionsRequest& request, const ListResourceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceDefinitionVersions(request), context);
    } );
}

ListResourceDefinitionsOutcome GreengrassClient::ListResourceDefinitions(const ListResourceDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/resources");
  return ListResourceDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResourceDefinitionsOutcomeCallable GreengrassClient::ListResourceDefinitionsCallable(const ListResourceDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListResourceDefinitionsAsync(const ListResourceDefinitionsRequest& request, const ListResourceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceDefinitions(request), context);
    } );
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

ListSubscriptionDefinitionVersionsOutcomeCallable GreengrassClient::ListSubscriptionDefinitionVersionsCallable(const ListSubscriptionDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptionDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListSubscriptionDefinitionVersionsAsync(const ListSubscriptionDefinitionVersionsRequest& request, const ListSubscriptionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubscriptionDefinitionVersions(request), context);
    } );
}

ListSubscriptionDefinitionsOutcome GreengrassClient::ListSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscriptionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscriptionDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/definition/subscriptions");
  return ListSubscriptionDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSubscriptionDefinitionsOutcomeCallable GreengrassClient::ListSubscriptionDefinitionsCallable(const ListSubscriptionDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptionDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListSubscriptionDefinitionsAsync(const ListSubscriptionDefinitionsRequest& request, const ListSubscriptionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubscriptionDefinitions(request), context);
    } );
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

ListTagsForResourceOutcomeCallable GreengrassClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
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

ResetDeploymentsOutcomeCallable GreengrassClient::ResetDeploymentsCallable(const ResetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ResetDeploymentsAsync(const ResetDeploymentsRequest& request, const ResetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetDeployments(request), context);
    } );
}

StartBulkDeploymentOutcome GreengrassClient::StartBulkDeployment(const StartBulkDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBulkDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBulkDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/bulk/deployments");
  return StartBulkDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBulkDeploymentOutcomeCallable GreengrassClient::StartBulkDeploymentCallable(const StartBulkDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBulkDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBulkDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::StartBulkDeploymentAsync(const StartBulkDeploymentRequest& request, const StartBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartBulkDeployment(request), context);
    } );
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

StopBulkDeploymentOutcomeCallable GreengrassClient::StopBulkDeploymentCallable(const StopBulkDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBulkDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBulkDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::StopBulkDeploymentAsync(const StopBulkDeploymentRequest& request, const StopBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopBulkDeployment(request), context);
    } );
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

TagResourceOutcomeCallable GreengrassClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
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

UntagResourceOutcomeCallable GreengrassClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
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

UpdateConnectivityInfoOutcomeCallable GreengrassClient::UpdateConnectivityInfoCallable(const UpdateConnectivityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectivityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectivityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateConnectivityInfoAsync(const UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConnectivityInfo(request), context);
    } );
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

UpdateConnectorDefinitionOutcomeCallable GreengrassClient::UpdateConnectorDefinitionCallable(const UpdateConnectorDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectorDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectorDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateConnectorDefinitionAsync(const UpdateConnectorDefinitionRequest& request, const UpdateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConnectorDefinition(request), context);
    } );
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

UpdateCoreDefinitionOutcomeCallable GreengrassClient::UpdateCoreDefinitionCallable(const UpdateCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateCoreDefinitionAsync(const UpdateCoreDefinitionRequest& request, const UpdateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCoreDefinition(request), context);
    } );
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

UpdateDeviceDefinitionOutcomeCallable GreengrassClient::UpdateDeviceDefinitionCallable(const UpdateDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateDeviceDefinitionAsync(const UpdateDeviceDefinitionRequest& request, const UpdateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDeviceDefinition(request), context);
    } );
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

UpdateFunctionDefinitionOutcomeCallable GreengrassClient::UpdateFunctionDefinitionCallable(const UpdateFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateFunctionDefinitionAsync(const UpdateFunctionDefinitionRequest& request, const UpdateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFunctionDefinition(request), context);
    } );
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

UpdateGroupOutcomeCallable GreengrassClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGroup(request), context);
    } );
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

UpdateGroupCertificateConfigurationOutcomeCallable GreengrassClient::UpdateGroupCertificateConfigurationCallable(const UpdateGroupCertificateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupCertificateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroupCertificateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateGroupCertificateConfigurationAsync(const UpdateGroupCertificateConfigurationRequest& request, const UpdateGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGroupCertificateConfiguration(request), context);
    } );
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

UpdateLoggerDefinitionOutcomeCallable GreengrassClient::UpdateLoggerDefinitionCallable(const UpdateLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateLoggerDefinitionAsync(const UpdateLoggerDefinitionRequest& request, const UpdateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLoggerDefinition(request), context);
    } );
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

UpdateResourceDefinitionOutcomeCallable GreengrassClient::UpdateResourceDefinitionCallable(const UpdateResourceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateResourceDefinitionAsync(const UpdateResourceDefinitionRequest& request, const UpdateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResourceDefinition(request), context);
    } );
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

UpdateSubscriptionDefinitionOutcomeCallable GreengrassClient::UpdateSubscriptionDefinitionCallable(const UpdateSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateSubscriptionDefinitionAsync(const UpdateSubscriptionDefinitionRequest& request, const UpdateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSubscriptionDefinition(request), context);
    } );
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

UpdateThingRuntimeConfigurationOutcomeCallable GreengrassClient::UpdateThingRuntimeConfigurationCallable(const UpdateThingRuntimeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingRuntimeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThingRuntimeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateThingRuntimeConfigurationAsync(const UpdateThingRuntimeConfigurationRequest& request, const UpdateThingRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateThingRuntimeConfiguration(request), context);
    } );
}

