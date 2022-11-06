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

#include <aws/workmail/WorkMailClient.h>
#include <aws/workmail/WorkMailErrorMarshaller.h>
#include <aws/workmail/WorkMailEndpointProvider.h>
#include <aws/workmail/model/AssociateDelegateToResourceRequest.h>
#include <aws/workmail/model/AssociateMemberToGroupRequest.h>
#include <aws/workmail/model/AssumeImpersonationRoleRequest.h>
#include <aws/workmail/model/CancelMailboxExportJobRequest.h>
#include <aws/workmail/model/CreateAliasRequest.h>
#include <aws/workmail/model/CreateAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/CreateGroupRequest.h>
#include <aws/workmail/model/CreateImpersonationRoleRequest.h>
#include <aws/workmail/model/CreateMobileDeviceAccessRuleRequest.h>
#include <aws/workmail/model/CreateOrganizationRequest.h>
#include <aws/workmail/model/CreateResourceRequest.h>
#include <aws/workmail/model/CreateUserRequest.h>
#include <aws/workmail/model/DeleteAccessControlRuleRequest.h>
#include <aws/workmail/model/DeleteAliasRequest.h>
#include <aws/workmail/model/DeleteAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/DeleteEmailMonitoringConfigurationRequest.h>
#include <aws/workmail/model/DeleteGroupRequest.h>
#include <aws/workmail/model/DeleteImpersonationRoleRequest.h>
#include <aws/workmail/model/DeleteMailboxPermissionsRequest.h>
#include <aws/workmail/model/DeleteMobileDeviceAccessOverrideRequest.h>
#include <aws/workmail/model/DeleteMobileDeviceAccessRuleRequest.h>
#include <aws/workmail/model/DeleteOrganizationRequest.h>
#include <aws/workmail/model/DeleteResourceRequest.h>
#include <aws/workmail/model/DeleteRetentionPolicyRequest.h>
#include <aws/workmail/model/DeleteUserRequest.h>
#include <aws/workmail/model/DeregisterFromWorkMailRequest.h>
#include <aws/workmail/model/DeregisterMailDomainRequest.h>
#include <aws/workmail/model/DescribeEmailMonitoringConfigurationRequest.h>
#include <aws/workmail/model/DescribeGroupRequest.h>
#include <aws/workmail/model/DescribeInboundDmarcSettingsRequest.h>
#include <aws/workmail/model/DescribeMailboxExportJobRequest.h>
#include <aws/workmail/model/DescribeOrganizationRequest.h>
#include <aws/workmail/model/DescribeResourceRequest.h>
#include <aws/workmail/model/DescribeUserRequest.h>
#include <aws/workmail/model/DisassociateDelegateFromResourceRequest.h>
#include <aws/workmail/model/DisassociateMemberFromGroupRequest.h>
#include <aws/workmail/model/GetAccessControlEffectRequest.h>
#include <aws/workmail/model/GetDefaultRetentionPolicyRequest.h>
#include <aws/workmail/model/GetImpersonationRoleRequest.h>
#include <aws/workmail/model/GetImpersonationRoleEffectRequest.h>
#include <aws/workmail/model/GetMailDomainRequest.h>
#include <aws/workmail/model/GetMailboxDetailsRequest.h>
#include <aws/workmail/model/GetMobileDeviceAccessEffectRequest.h>
#include <aws/workmail/model/GetMobileDeviceAccessOverrideRequest.h>
#include <aws/workmail/model/ListAccessControlRulesRequest.h>
#include <aws/workmail/model/ListAliasesRequest.h>
#include <aws/workmail/model/ListAvailabilityConfigurationsRequest.h>
#include <aws/workmail/model/ListGroupMembersRequest.h>
#include <aws/workmail/model/ListGroupsRequest.h>
#include <aws/workmail/model/ListImpersonationRolesRequest.h>
#include <aws/workmail/model/ListMailDomainsRequest.h>
#include <aws/workmail/model/ListMailboxExportJobsRequest.h>
#include <aws/workmail/model/ListMailboxPermissionsRequest.h>
#include <aws/workmail/model/ListMobileDeviceAccessOverridesRequest.h>
#include <aws/workmail/model/ListMobileDeviceAccessRulesRequest.h>
#include <aws/workmail/model/ListOrganizationsRequest.h>
#include <aws/workmail/model/ListResourceDelegatesRequest.h>
#include <aws/workmail/model/ListResourcesRequest.h>
#include <aws/workmail/model/ListTagsForResourceRequest.h>
#include <aws/workmail/model/ListUsersRequest.h>
#include <aws/workmail/model/PutAccessControlRuleRequest.h>
#include <aws/workmail/model/PutEmailMonitoringConfigurationRequest.h>
#include <aws/workmail/model/PutInboundDmarcSettingsRequest.h>
#include <aws/workmail/model/PutMailboxPermissionsRequest.h>
#include <aws/workmail/model/PutMobileDeviceAccessOverrideRequest.h>
#include <aws/workmail/model/PutRetentionPolicyRequest.h>
#include <aws/workmail/model/RegisterMailDomainRequest.h>
#include <aws/workmail/model/RegisterToWorkMailRequest.h>
#include <aws/workmail/model/ResetPasswordRequest.h>
#include <aws/workmail/model/StartMailboxExportJobRequest.h>
#include <aws/workmail/model/TagResourceRequest.h>
#include <aws/workmail/model/TestAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/UntagResourceRequest.h>
#include <aws/workmail/model/UpdateAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/UpdateDefaultMailDomainRequest.h>
#include <aws/workmail/model/UpdateImpersonationRoleRequest.h>
#include <aws/workmail/model/UpdateMailboxQuotaRequest.h>
#include <aws/workmail/model/UpdateMobileDeviceAccessRuleRequest.h>
#include <aws/workmail/model/UpdatePrimaryEmailAddressRequest.h>
#include <aws/workmail/model/UpdateResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkMail;
using namespace Aws::WorkMail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WorkMailClient::SERVICE_NAME = "workmail";
const char* WorkMailClient::ALLOCATION_TAG = "WorkMailClient";

WorkMailClient::WorkMailClient(const WorkMail::WorkMailClientConfiguration& clientConfiguration,
                               std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const AWSCredentials& credentials,
                               std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider,
                               const WorkMail::WorkMailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider,
                               const WorkMail::WorkMailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WorkMailClient::WorkMailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WorkMailClient::~WorkMailClient()
{
}

std::shared_ptr<WorkMailEndpointProviderBase>& WorkMailClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WorkMailClient::init(const WorkMail::WorkMailClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkMail");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WorkMailClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateDelegateToResourceOutcome WorkMailClient::AssociateDelegateToResource(const AssociateDelegateToResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDelegateToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDelegateToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDelegateToResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDelegateToResourceOutcomeCallable WorkMailClient::AssociateDelegateToResourceCallable(const AssociateDelegateToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDelegateToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDelegateToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::AssociateDelegateToResourceAsync(const AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateDelegateToResource(request), context);
    } );
}

AssociateMemberToGroupOutcome WorkMailClient::AssociateMemberToGroup(const AssociateMemberToGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateMemberToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateMemberToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateMemberToGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateMemberToGroupOutcomeCallable WorkMailClient::AssociateMemberToGroupCallable(const AssociateMemberToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateMemberToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateMemberToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::AssociateMemberToGroupAsync(const AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateMemberToGroup(request), context);
    } );
}

AssumeImpersonationRoleOutcome WorkMailClient::AssumeImpersonationRole(const AssumeImpersonationRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssumeImpersonationRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssumeImpersonationRoleOutcomeCallable WorkMailClient::AssumeImpersonationRoleCallable(const AssumeImpersonationRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeImpersonationRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeImpersonationRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::AssumeImpersonationRoleAsync(const AssumeImpersonationRoleRequest& request, const AssumeImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssumeImpersonationRole(request), context);
    } );
}

CancelMailboxExportJobOutcome WorkMailClient::CancelMailboxExportJob(const CancelMailboxExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelMailboxExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelMailboxExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelMailboxExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelMailboxExportJobOutcomeCallable WorkMailClient::CancelMailboxExportJobCallable(const CancelMailboxExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelMailboxExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelMailboxExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CancelMailboxExportJobAsync(const CancelMailboxExportJobRequest& request, const CancelMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelMailboxExportJob(request), context);
    } );
}

CreateAliasOutcome WorkMailClient::CreateAlias(const CreateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAliasOutcomeCallable WorkMailClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAlias(request), context);
    } );
}

CreateAvailabilityConfigurationOutcome WorkMailClient::CreateAvailabilityConfiguration(const CreateAvailabilityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAvailabilityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAvailabilityConfigurationOutcomeCallable WorkMailClient::CreateAvailabilityConfigurationCallable(const CreateAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateAvailabilityConfigurationAsync(const CreateAvailabilityConfigurationRequest& request, const CreateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAvailabilityConfiguration(request), context);
    } );
}

CreateGroupOutcome WorkMailClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable WorkMailClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGroup(request), context);
    } );
}

CreateImpersonationRoleOutcome WorkMailClient::CreateImpersonationRole(const CreateImpersonationRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateImpersonationRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImpersonationRoleOutcomeCallable WorkMailClient::CreateImpersonationRoleCallable(const CreateImpersonationRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImpersonationRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImpersonationRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateImpersonationRoleAsync(const CreateImpersonationRoleRequest& request, const CreateImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImpersonationRole(request), context);
    } );
}

CreateMobileDeviceAccessRuleOutcome WorkMailClient::CreateMobileDeviceAccessRule(const CreateMobileDeviceAccessRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMobileDeviceAccessRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMobileDeviceAccessRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMobileDeviceAccessRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMobileDeviceAccessRuleOutcomeCallable WorkMailClient::CreateMobileDeviceAccessRuleCallable(const CreateMobileDeviceAccessRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMobileDeviceAccessRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMobileDeviceAccessRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateMobileDeviceAccessRuleAsync(const CreateMobileDeviceAccessRuleRequest& request, const CreateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMobileDeviceAccessRule(request), context);
    } );
}

CreateOrganizationOutcome WorkMailClient::CreateOrganization(const CreateOrganizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOrganizationOutcomeCallable WorkMailClient::CreateOrganizationCallable(const CreateOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateOrganizationAsync(const CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateOrganization(request), context);
    } );
}

CreateResourceOutcome WorkMailClient::CreateResource(const CreateResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceOutcomeCallable WorkMailClient::CreateResourceCallable(const CreateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResource(request), context);
    } );
}

CreateUserOutcome WorkMailClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable WorkMailClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUser(request), context);
    } );
}

DeleteAccessControlRuleOutcome WorkMailClient::DeleteAccessControlRule(const DeleteAccessControlRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessControlRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessControlRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAccessControlRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessControlRuleOutcomeCallable WorkMailClient::DeleteAccessControlRuleCallable(const DeleteAccessControlRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessControlRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessControlRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteAccessControlRuleAsync(const DeleteAccessControlRuleRequest& request, const DeleteAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccessControlRule(request), context);
    } );
}

DeleteAliasOutcome WorkMailClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAliasOutcomeCallable WorkMailClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAlias(request), context);
    } );
}

DeleteAvailabilityConfigurationOutcome WorkMailClient::DeleteAvailabilityConfiguration(const DeleteAvailabilityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAvailabilityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAvailabilityConfigurationOutcomeCallable WorkMailClient::DeleteAvailabilityConfigurationCallable(const DeleteAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteAvailabilityConfigurationAsync(const DeleteAvailabilityConfigurationRequest& request, const DeleteAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAvailabilityConfiguration(request), context);
    } );
}

DeleteEmailMonitoringConfigurationOutcome WorkMailClient::DeleteEmailMonitoringConfiguration(const DeleteEmailMonitoringConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEmailMonitoringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEmailMonitoringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEmailMonitoringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailMonitoringConfigurationOutcomeCallable WorkMailClient::DeleteEmailMonitoringConfigurationCallable(const DeleteEmailMonitoringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailMonitoringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailMonitoringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteEmailMonitoringConfigurationAsync(const DeleteEmailMonitoringConfigurationRequest& request, const DeleteEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEmailMonitoringConfiguration(request), context);
    } );
}

DeleteGroupOutcome WorkMailClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable WorkMailClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGroup(request), context);
    } );
}

DeleteImpersonationRoleOutcome WorkMailClient::DeleteImpersonationRole(const DeleteImpersonationRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteImpersonationRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImpersonationRoleOutcomeCallable WorkMailClient::DeleteImpersonationRoleCallable(const DeleteImpersonationRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImpersonationRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImpersonationRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteImpersonationRoleAsync(const DeleteImpersonationRoleRequest& request, const DeleteImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImpersonationRole(request), context);
    } );
}

DeleteMailboxPermissionsOutcome WorkMailClient::DeleteMailboxPermissions(const DeleteMailboxPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMailboxPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMailboxPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMailboxPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMailboxPermissionsOutcomeCallable WorkMailClient::DeleteMailboxPermissionsCallable(const DeleteMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteMailboxPermissionsAsync(const DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMailboxPermissions(request), context);
    } );
}

DeleteMobileDeviceAccessOverrideOutcome WorkMailClient::DeleteMobileDeviceAccessOverride(const DeleteMobileDeviceAccessOverrideRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMobileDeviceAccessOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMobileDeviceAccessOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMobileDeviceAccessOverrideOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMobileDeviceAccessOverrideOutcomeCallable WorkMailClient::DeleteMobileDeviceAccessOverrideCallable(const DeleteMobileDeviceAccessOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMobileDeviceAccessOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMobileDeviceAccessOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteMobileDeviceAccessOverrideAsync(const DeleteMobileDeviceAccessOverrideRequest& request, const DeleteMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMobileDeviceAccessOverride(request), context);
    } );
}

DeleteMobileDeviceAccessRuleOutcome WorkMailClient::DeleteMobileDeviceAccessRule(const DeleteMobileDeviceAccessRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMobileDeviceAccessRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMobileDeviceAccessRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMobileDeviceAccessRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMobileDeviceAccessRuleOutcomeCallable WorkMailClient::DeleteMobileDeviceAccessRuleCallable(const DeleteMobileDeviceAccessRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMobileDeviceAccessRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMobileDeviceAccessRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteMobileDeviceAccessRuleAsync(const DeleteMobileDeviceAccessRuleRequest& request, const DeleteMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMobileDeviceAccessRule(request), context);
    } );
}

DeleteOrganizationOutcome WorkMailClient::DeleteOrganization(const DeleteOrganizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOrganizationOutcomeCallable WorkMailClient::DeleteOrganizationCallable(const DeleteOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteOrganizationAsync(const DeleteOrganizationRequest& request, const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOrganization(request), context);
    } );
}

DeleteResourceOutcome WorkMailClient::DeleteResource(const DeleteResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceOutcomeCallable WorkMailClient::DeleteResourceCallable(const DeleteResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResource(request), context);
    } );
}

DeleteRetentionPolicyOutcome WorkMailClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRetentionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRetentionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRetentionPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRetentionPolicyOutcomeCallable WorkMailClient::DeleteRetentionPolicyCallable(const DeleteRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteRetentionPolicyAsync(const DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRetentionPolicy(request), context);
    } );
}

DeleteUserOutcome WorkMailClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable WorkMailClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUser(request), context);
    } );
}

DeregisterFromWorkMailOutcome WorkMailClient::DeregisterFromWorkMail(const DeregisterFromWorkMailRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterFromWorkMail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterFromWorkMail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterFromWorkMailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterFromWorkMailOutcomeCallable WorkMailClient::DeregisterFromWorkMailCallable(const DeregisterFromWorkMailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterFromWorkMailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterFromWorkMail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeregisterFromWorkMailAsync(const DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterFromWorkMail(request), context);
    } );
}

DeregisterMailDomainOutcome WorkMailClient::DeregisterMailDomain(const DeregisterMailDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterMailDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterMailDomainOutcomeCallable WorkMailClient::DeregisterMailDomainCallable(const DeregisterMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeregisterMailDomainAsync(const DeregisterMailDomainRequest& request, const DeregisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterMailDomain(request), context);
    } );
}

DescribeEmailMonitoringConfigurationOutcome WorkMailClient::DescribeEmailMonitoringConfiguration(const DescribeEmailMonitoringConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEmailMonitoringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEmailMonitoringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEmailMonitoringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEmailMonitoringConfigurationOutcomeCallable WorkMailClient::DescribeEmailMonitoringConfigurationCallable(const DescribeEmailMonitoringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEmailMonitoringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEmailMonitoringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeEmailMonitoringConfigurationAsync(const DescribeEmailMonitoringConfigurationRequest& request, const DescribeEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEmailMonitoringConfiguration(request), context);
    } );
}

DescribeGroupOutcome WorkMailClient::DescribeGroup(const DescribeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupOutcomeCallable WorkMailClient::DescribeGroupCallable(const DescribeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeGroup(request), context);
    } );
}

DescribeInboundDmarcSettingsOutcome WorkMailClient::DescribeInboundDmarcSettings(const DescribeInboundDmarcSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInboundDmarcSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInboundDmarcSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInboundDmarcSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInboundDmarcSettingsOutcomeCallable WorkMailClient::DescribeInboundDmarcSettingsCallable(const DescribeInboundDmarcSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInboundDmarcSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInboundDmarcSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeInboundDmarcSettingsAsync(const DescribeInboundDmarcSettingsRequest& request, const DescribeInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInboundDmarcSettings(request), context);
    } );
}

DescribeMailboxExportJobOutcome WorkMailClient::DescribeMailboxExportJob(const DescribeMailboxExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMailboxExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMailboxExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMailboxExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMailboxExportJobOutcomeCallable WorkMailClient::DescribeMailboxExportJobCallable(const DescribeMailboxExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMailboxExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMailboxExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeMailboxExportJobAsync(const DescribeMailboxExportJobRequest& request, const DescribeMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMailboxExportJob(request), context);
    } );
}

DescribeOrganizationOutcome WorkMailClient::DescribeOrganization(const DescribeOrganizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationOutcomeCallable WorkMailClient::DescribeOrganizationCallable(const DescribeOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeOrganizationAsync(const DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOrganization(request), context);
    } );
}

DescribeResourceOutcome WorkMailClient::DescribeResource(const DescribeResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceOutcomeCallable WorkMailClient::DescribeResourceCallable(const DescribeResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResource(request), context);
    } );
}

DescribeUserOutcome WorkMailClient::DescribeUser(const DescribeUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcomeCallable WorkMailClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUser(request), context);
    } );
}

DisassociateDelegateFromResourceOutcome WorkMailClient::DisassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateDelegateFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateDelegateFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateDelegateFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDelegateFromResourceOutcomeCallable WorkMailClient::DisassociateDelegateFromResourceCallable(const DisassociateDelegateFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDelegateFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDelegateFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DisassociateDelegateFromResourceAsync(const DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateDelegateFromResource(request), context);
    } );
}

DisassociateMemberFromGroupOutcome WorkMailClient::DisassociateMemberFromGroup(const DisassociateMemberFromGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMemberFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMemberFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateMemberFromGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMemberFromGroupOutcomeCallable WorkMailClient::DisassociateMemberFromGroupCallable(const DisassociateMemberFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMemberFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMemberFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DisassociateMemberFromGroupAsync(const DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateMemberFromGroup(request), context);
    } );
}

GetAccessControlEffectOutcome WorkMailClient::GetAccessControlEffect(const GetAccessControlEffectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessControlEffect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessControlEffect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccessControlEffectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccessControlEffectOutcomeCallable WorkMailClient::GetAccessControlEffectCallable(const GetAccessControlEffectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessControlEffectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessControlEffect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetAccessControlEffectAsync(const GetAccessControlEffectRequest& request, const GetAccessControlEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessControlEffect(request), context);
    } );
}

GetDefaultRetentionPolicyOutcome WorkMailClient::GetDefaultRetentionPolicy(const GetDefaultRetentionPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDefaultRetentionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDefaultRetentionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDefaultRetentionPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDefaultRetentionPolicyOutcomeCallable WorkMailClient::GetDefaultRetentionPolicyCallable(const GetDefaultRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDefaultRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDefaultRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetDefaultRetentionPolicyAsync(const GetDefaultRetentionPolicyRequest& request, const GetDefaultRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDefaultRetentionPolicy(request), context);
    } );
}

GetImpersonationRoleOutcome WorkMailClient::GetImpersonationRole(const GetImpersonationRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetImpersonationRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetImpersonationRoleOutcomeCallable WorkMailClient::GetImpersonationRoleCallable(const GetImpersonationRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImpersonationRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImpersonationRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetImpersonationRoleAsync(const GetImpersonationRoleRequest& request, const GetImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImpersonationRole(request), context);
    } );
}

GetImpersonationRoleEffectOutcome WorkMailClient::GetImpersonationRoleEffect(const GetImpersonationRoleEffectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImpersonationRoleEffect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImpersonationRoleEffect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetImpersonationRoleEffectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetImpersonationRoleEffectOutcomeCallable WorkMailClient::GetImpersonationRoleEffectCallable(const GetImpersonationRoleEffectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImpersonationRoleEffectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImpersonationRoleEffect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetImpersonationRoleEffectAsync(const GetImpersonationRoleEffectRequest& request, const GetImpersonationRoleEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImpersonationRoleEffect(request), context);
    } );
}

GetMailDomainOutcome WorkMailClient::GetMailDomain(const GetMailDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMailDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMailDomainOutcomeCallable WorkMailClient::GetMailDomainCallable(const GetMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetMailDomainAsync(const GetMailDomainRequest& request, const GetMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMailDomain(request), context);
    } );
}

GetMailboxDetailsOutcome WorkMailClient::GetMailboxDetails(const GetMailboxDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMailboxDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMailboxDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMailboxDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMailboxDetailsOutcomeCallable WorkMailClient::GetMailboxDetailsCallable(const GetMailboxDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMailboxDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMailboxDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetMailboxDetailsAsync(const GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMailboxDetails(request), context);
    } );
}

GetMobileDeviceAccessEffectOutcome WorkMailClient::GetMobileDeviceAccessEffect(const GetMobileDeviceAccessEffectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMobileDeviceAccessEffect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMobileDeviceAccessEffect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMobileDeviceAccessEffectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMobileDeviceAccessEffectOutcomeCallable WorkMailClient::GetMobileDeviceAccessEffectCallable(const GetMobileDeviceAccessEffectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMobileDeviceAccessEffectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMobileDeviceAccessEffect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetMobileDeviceAccessEffectAsync(const GetMobileDeviceAccessEffectRequest& request, const GetMobileDeviceAccessEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMobileDeviceAccessEffect(request), context);
    } );
}

GetMobileDeviceAccessOverrideOutcome WorkMailClient::GetMobileDeviceAccessOverride(const GetMobileDeviceAccessOverrideRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMobileDeviceAccessOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMobileDeviceAccessOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMobileDeviceAccessOverrideOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMobileDeviceAccessOverrideOutcomeCallable WorkMailClient::GetMobileDeviceAccessOverrideCallable(const GetMobileDeviceAccessOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMobileDeviceAccessOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMobileDeviceAccessOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetMobileDeviceAccessOverrideAsync(const GetMobileDeviceAccessOverrideRequest& request, const GetMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMobileDeviceAccessOverride(request), context);
    } );
}

ListAccessControlRulesOutcome WorkMailClient::ListAccessControlRules(const ListAccessControlRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessControlRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessControlRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAccessControlRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccessControlRulesOutcomeCallable WorkMailClient::ListAccessControlRulesCallable(const ListAccessControlRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessControlRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessControlRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListAccessControlRulesAsync(const ListAccessControlRulesRequest& request, const ListAccessControlRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccessControlRules(request), context);
    } );
}

ListAliasesOutcome WorkMailClient::ListAliases(const ListAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAliasesOutcomeCallable WorkMailClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAliases(request), context);
    } );
}

ListAvailabilityConfigurationsOutcome WorkMailClient::ListAvailabilityConfigurations(const ListAvailabilityConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailabilityConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailabilityConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAvailabilityConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailabilityConfigurationsOutcomeCallable WorkMailClient::ListAvailabilityConfigurationsCallable(const ListAvailabilityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailabilityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailabilityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListAvailabilityConfigurationsAsync(const ListAvailabilityConfigurationsRequest& request, const ListAvailabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAvailabilityConfigurations(request), context);
    } );
}

ListGroupMembersOutcome WorkMailClient::ListGroupMembers(const ListGroupMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGroupMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupMembersOutcomeCallable WorkMailClient::ListGroupMembersCallable(const ListGroupMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListGroupMembersAsync(const ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroupMembers(request), context);
    } );
}

ListGroupsOutcome WorkMailClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable WorkMailClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroups(request), context);
    } );
}

ListImpersonationRolesOutcome WorkMailClient::ListImpersonationRoles(const ListImpersonationRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImpersonationRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImpersonationRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImpersonationRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImpersonationRolesOutcomeCallable WorkMailClient::ListImpersonationRolesCallable(const ListImpersonationRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImpersonationRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImpersonationRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListImpersonationRolesAsync(const ListImpersonationRolesRequest& request, const ListImpersonationRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImpersonationRoles(request), context);
    } );
}

ListMailDomainsOutcome WorkMailClient::ListMailDomains(const ListMailDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMailDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMailDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMailDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMailDomainsOutcomeCallable WorkMailClient::ListMailDomainsCallable(const ListMailDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMailDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMailDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListMailDomainsAsync(const ListMailDomainsRequest& request, const ListMailDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMailDomains(request), context);
    } );
}

ListMailboxExportJobsOutcome WorkMailClient::ListMailboxExportJobs(const ListMailboxExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMailboxExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMailboxExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMailboxExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMailboxExportJobsOutcomeCallable WorkMailClient::ListMailboxExportJobsCallable(const ListMailboxExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMailboxExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMailboxExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListMailboxExportJobsAsync(const ListMailboxExportJobsRequest& request, const ListMailboxExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMailboxExportJobs(request), context);
    } );
}

ListMailboxPermissionsOutcome WorkMailClient::ListMailboxPermissions(const ListMailboxPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMailboxPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMailboxPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMailboxPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMailboxPermissionsOutcomeCallable WorkMailClient::ListMailboxPermissionsCallable(const ListMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListMailboxPermissionsAsync(const ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMailboxPermissions(request), context);
    } );
}

ListMobileDeviceAccessOverridesOutcome WorkMailClient::ListMobileDeviceAccessOverrides(const ListMobileDeviceAccessOverridesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMobileDeviceAccessOverrides, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMobileDeviceAccessOverrides, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMobileDeviceAccessOverridesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMobileDeviceAccessOverridesOutcomeCallable WorkMailClient::ListMobileDeviceAccessOverridesCallable(const ListMobileDeviceAccessOverridesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMobileDeviceAccessOverridesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMobileDeviceAccessOverrides(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListMobileDeviceAccessOverridesAsync(const ListMobileDeviceAccessOverridesRequest& request, const ListMobileDeviceAccessOverridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMobileDeviceAccessOverrides(request), context);
    } );
}

ListMobileDeviceAccessRulesOutcome WorkMailClient::ListMobileDeviceAccessRules(const ListMobileDeviceAccessRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMobileDeviceAccessRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMobileDeviceAccessRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMobileDeviceAccessRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMobileDeviceAccessRulesOutcomeCallable WorkMailClient::ListMobileDeviceAccessRulesCallable(const ListMobileDeviceAccessRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMobileDeviceAccessRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMobileDeviceAccessRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListMobileDeviceAccessRulesAsync(const ListMobileDeviceAccessRulesRequest& request, const ListMobileDeviceAccessRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMobileDeviceAccessRules(request), context);
    } );
}

ListOrganizationsOutcome WorkMailClient::ListOrganizations(const ListOrganizationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOrganizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOrganizationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationsOutcomeCallable WorkMailClient::ListOrganizationsCallable(const ListOrganizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListOrganizationsAsync(const ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOrganizations(request), context);
    } );
}

ListResourceDelegatesOutcome WorkMailClient::ListResourceDelegates(const ListResourceDelegatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceDelegates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceDelegates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourceDelegatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceDelegatesOutcomeCallable WorkMailClient::ListResourceDelegatesCallable(const ListResourceDelegatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceDelegatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceDelegates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListResourceDelegatesAsync(const ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceDelegates(request), context);
    } );
}

ListResourcesOutcome WorkMailClient::ListResources(const ListResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcomeCallable WorkMailClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResources(request), context);
    } );
}

ListTagsForResourceOutcome WorkMailClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WorkMailClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListUsersOutcome WorkMailClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable WorkMailClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUsers(request), context);
    } );
}

PutAccessControlRuleOutcome WorkMailClient::PutAccessControlRule(const PutAccessControlRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccessControlRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccessControlRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAccessControlRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccessControlRuleOutcomeCallable WorkMailClient::PutAccessControlRuleCallable(const PutAccessControlRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccessControlRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccessControlRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::PutAccessControlRuleAsync(const PutAccessControlRuleRequest& request, const PutAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccessControlRule(request), context);
    } );
}

PutEmailMonitoringConfigurationOutcome WorkMailClient::PutEmailMonitoringConfiguration(const PutEmailMonitoringConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEmailMonitoringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEmailMonitoringConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutEmailMonitoringConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEmailMonitoringConfigurationOutcomeCallable WorkMailClient::PutEmailMonitoringConfigurationCallable(const PutEmailMonitoringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailMonitoringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailMonitoringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::PutEmailMonitoringConfigurationAsync(const PutEmailMonitoringConfigurationRequest& request, const PutEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEmailMonitoringConfiguration(request), context);
    } );
}

PutInboundDmarcSettingsOutcome WorkMailClient::PutInboundDmarcSettings(const PutInboundDmarcSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInboundDmarcSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInboundDmarcSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInboundDmarcSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInboundDmarcSettingsOutcomeCallable WorkMailClient::PutInboundDmarcSettingsCallable(const PutInboundDmarcSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInboundDmarcSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInboundDmarcSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::PutInboundDmarcSettingsAsync(const PutInboundDmarcSettingsRequest& request, const PutInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutInboundDmarcSettings(request), context);
    } );
}

PutMailboxPermissionsOutcome WorkMailClient::PutMailboxPermissions(const PutMailboxPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMailboxPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMailboxPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutMailboxPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMailboxPermissionsOutcomeCallable WorkMailClient::PutMailboxPermissionsCallable(const PutMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::PutMailboxPermissionsAsync(const PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMailboxPermissions(request), context);
    } );
}

PutMobileDeviceAccessOverrideOutcome WorkMailClient::PutMobileDeviceAccessOverride(const PutMobileDeviceAccessOverrideRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMobileDeviceAccessOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMobileDeviceAccessOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutMobileDeviceAccessOverrideOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMobileDeviceAccessOverrideOutcomeCallable WorkMailClient::PutMobileDeviceAccessOverrideCallable(const PutMobileDeviceAccessOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMobileDeviceAccessOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMobileDeviceAccessOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::PutMobileDeviceAccessOverrideAsync(const PutMobileDeviceAccessOverrideRequest& request, const PutMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMobileDeviceAccessOverride(request), context);
    } );
}

PutRetentionPolicyOutcome WorkMailClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRetentionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRetentionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRetentionPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRetentionPolicyOutcomeCallable WorkMailClient::PutRetentionPolicyCallable(const PutRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::PutRetentionPolicyAsync(const PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRetentionPolicy(request), context);
    } );
}

RegisterMailDomainOutcome WorkMailClient::RegisterMailDomain(const RegisterMailDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterMailDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterMailDomainOutcomeCallable WorkMailClient::RegisterMailDomainCallable(const RegisterMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::RegisterMailDomainAsync(const RegisterMailDomainRequest& request, const RegisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterMailDomain(request), context);
    } );
}

RegisterToWorkMailOutcome WorkMailClient::RegisterToWorkMail(const RegisterToWorkMailRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterToWorkMail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterToWorkMail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterToWorkMailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterToWorkMailOutcomeCallable WorkMailClient::RegisterToWorkMailCallable(const RegisterToWorkMailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterToWorkMailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterToWorkMail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::RegisterToWorkMailAsync(const RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterToWorkMail(request), context);
    } );
}

ResetPasswordOutcome WorkMailClient::ResetPassword(const ResetPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetPasswordOutcomeCallable WorkMailClient::ResetPasswordCallable(const ResetPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetPassword(request), context);
    } );
}

StartMailboxExportJobOutcome WorkMailClient::StartMailboxExportJob(const StartMailboxExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMailboxExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMailboxExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartMailboxExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMailboxExportJobOutcomeCallable WorkMailClient::StartMailboxExportJobCallable(const StartMailboxExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMailboxExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMailboxExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::StartMailboxExportJobAsync(const StartMailboxExportJobRequest& request, const StartMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartMailboxExportJob(request), context);
    } );
}

TagResourceOutcome WorkMailClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WorkMailClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TestAvailabilityConfigurationOutcome WorkMailClient::TestAvailabilityConfiguration(const TestAvailabilityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestAvailabilityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestAvailabilityConfigurationOutcomeCallable WorkMailClient::TestAvailabilityConfigurationCallable(const TestAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::TestAvailabilityConfigurationAsync(const TestAvailabilityConfigurationRequest& request, const TestAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestAvailabilityConfiguration(request), context);
    } );
}

UntagResourceOutcome WorkMailClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WorkMailClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAvailabilityConfigurationOutcome WorkMailClient::UpdateAvailabilityConfiguration(const UpdateAvailabilityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAvailabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAvailabilityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAvailabilityConfigurationOutcomeCallable WorkMailClient::UpdateAvailabilityConfigurationCallable(const UpdateAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateAvailabilityConfigurationAsync(const UpdateAvailabilityConfigurationRequest& request, const UpdateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAvailabilityConfiguration(request), context);
    } );
}

UpdateDefaultMailDomainOutcome WorkMailClient::UpdateDefaultMailDomain(const UpdateDefaultMailDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDefaultMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDefaultMailDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDefaultMailDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDefaultMailDomainOutcomeCallable WorkMailClient::UpdateDefaultMailDomainCallable(const UpdateDefaultMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDefaultMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDefaultMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateDefaultMailDomainAsync(const UpdateDefaultMailDomainRequest& request, const UpdateDefaultMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDefaultMailDomain(request), context);
    } );
}

UpdateImpersonationRoleOutcome WorkMailClient::UpdateImpersonationRole(const UpdateImpersonationRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateImpersonationRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateImpersonationRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateImpersonationRoleOutcomeCallable WorkMailClient::UpdateImpersonationRoleCallable(const UpdateImpersonationRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImpersonationRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImpersonationRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateImpersonationRoleAsync(const UpdateImpersonationRoleRequest& request, const UpdateImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateImpersonationRole(request), context);
    } );
}

UpdateMailboxQuotaOutcome WorkMailClient::UpdateMailboxQuota(const UpdateMailboxQuotaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMailboxQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMailboxQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMailboxQuotaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMailboxQuotaOutcomeCallable WorkMailClient::UpdateMailboxQuotaCallable(const UpdateMailboxQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMailboxQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMailboxQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateMailboxQuotaAsync(const UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMailboxQuota(request), context);
    } );
}

UpdateMobileDeviceAccessRuleOutcome WorkMailClient::UpdateMobileDeviceAccessRule(const UpdateMobileDeviceAccessRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMobileDeviceAccessRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMobileDeviceAccessRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMobileDeviceAccessRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMobileDeviceAccessRuleOutcomeCallable WorkMailClient::UpdateMobileDeviceAccessRuleCallable(const UpdateMobileDeviceAccessRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMobileDeviceAccessRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMobileDeviceAccessRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateMobileDeviceAccessRuleAsync(const UpdateMobileDeviceAccessRuleRequest& request, const UpdateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMobileDeviceAccessRule(request), context);
    } );
}

UpdatePrimaryEmailAddressOutcome WorkMailClient::UpdatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePrimaryEmailAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePrimaryEmailAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePrimaryEmailAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePrimaryEmailAddressOutcomeCallable WorkMailClient::UpdatePrimaryEmailAddressCallable(const UpdatePrimaryEmailAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePrimaryEmailAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePrimaryEmailAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdatePrimaryEmailAddressAsync(const UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePrimaryEmailAddress(request), context);
    } );
}

UpdateResourceOutcome WorkMailClient::UpdateResource(const UpdateResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceOutcomeCallable WorkMailClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResource(request), context);
    } );
}

