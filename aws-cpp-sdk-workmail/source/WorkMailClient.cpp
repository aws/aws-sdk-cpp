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

#include <aws/workmail/WorkMailClient.h>
#include <aws/workmail/WorkMailEndpoint.h>
#include <aws/workmail/WorkMailErrorMarshaller.h>
#include <aws/workmail/model/AssociateDelegateToResourceRequest.h>
#include <aws/workmail/model/AssociateMemberToGroupRequest.h>
#include <aws/workmail/model/CancelMailboxExportJobRequest.h>
#include <aws/workmail/model/CreateAliasRequest.h>
#include <aws/workmail/model/CreateAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/CreateGroupRequest.h>
#include <aws/workmail/model/CreateMobileDeviceAccessRuleRequest.h>
#include <aws/workmail/model/CreateOrganizationRequest.h>
#include <aws/workmail/model/CreateResourceRequest.h>
#include <aws/workmail/model/CreateUserRequest.h>
#include <aws/workmail/model/DeleteAccessControlRuleRequest.h>
#include <aws/workmail/model/DeleteAliasRequest.h>
#include <aws/workmail/model/DeleteAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/DeleteEmailMonitoringConfigurationRequest.h>
#include <aws/workmail/model/DeleteGroupRequest.h>
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
#include <aws/workmail/model/GetMailDomainRequest.h>
#include <aws/workmail/model/GetMailboxDetailsRequest.h>
#include <aws/workmail/model/GetMobileDeviceAccessEffectRequest.h>
#include <aws/workmail/model/GetMobileDeviceAccessOverrideRequest.h>
#include <aws/workmail/model/ListAccessControlRulesRequest.h>
#include <aws/workmail/model/ListAliasesRequest.h>
#include <aws/workmail/model/ListAvailabilityConfigurationsRequest.h>
#include <aws/workmail/model/ListGroupMembersRequest.h>
#include <aws/workmail/model/ListGroupsRequest.h>
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

static const char* SERVICE_NAME = "workmail";
static const char* ALLOCATION_TAG = "WorkMailClient";

WorkMailClient::WorkMailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailClient::WorkMailClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailClient::WorkMailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailClient::~WorkMailClient()
{
}

void WorkMailClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkMail");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WorkMailEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WorkMailClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateDelegateToResourceOutcome WorkMailClient::AssociateDelegateToResource(const AssociateDelegateToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateDelegateToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateDelegateToResourceOutcomeCallable WorkMailClient::AssociateDelegateToResourceCallable(const AssociateDelegateToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDelegateToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDelegateToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientAssociateDelegateToResourceAsyncHelper(WorkMailClient const * const clientThis, const AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateDelegateToResource(request), context);
}

void WorkMailClient::AssociateDelegateToResourceAsync(const AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientAssociateDelegateToResourceAsyncHelper( this, request, handler, context ); } );
}

AssociateMemberToGroupOutcome WorkMailClient::AssociateMemberToGroup(const AssociateMemberToGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateMemberToGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateMemberToGroupOutcomeCallable WorkMailClient::AssociateMemberToGroupCallable(const AssociateMemberToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateMemberToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateMemberToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientAssociateMemberToGroupAsyncHelper(WorkMailClient const * const clientThis, const AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateMemberToGroup(request), context);
}

void WorkMailClient::AssociateMemberToGroupAsync(const AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientAssociateMemberToGroupAsyncHelper( this, request, handler, context ); } );
}

CancelMailboxExportJobOutcome WorkMailClient::CancelMailboxExportJob(const CancelMailboxExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelMailboxExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelMailboxExportJobOutcomeCallable WorkMailClient::CancelMailboxExportJobCallable(const CancelMailboxExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelMailboxExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelMailboxExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCancelMailboxExportJobAsyncHelper(WorkMailClient const * const clientThis, const CancelMailboxExportJobRequest& request, const CancelMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelMailboxExportJob(request), context);
}

void WorkMailClient::CancelMailboxExportJobAsync(const CancelMailboxExportJobRequest& request, const CancelMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCancelMailboxExportJobAsyncHelper( this, request, handler, context ); } );
}

CreateAliasOutcome WorkMailClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAliasOutcomeCallable WorkMailClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCreateAliasAsyncHelper(WorkMailClient const * const clientThis, const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAlias(request), context);
}

void WorkMailClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCreateAliasAsyncHelper( this, request, handler, context ); } );
}

CreateAvailabilityConfigurationOutcome WorkMailClient::CreateAvailabilityConfiguration(const CreateAvailabilityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAvailabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAvailabilityConfigurationOutcomeCallable WorkMailClient::CreateAvailabilityConfigurationCallable(const CreateAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCreateAvailabilityConfigurationAsyncHelper(WorkMailClient const * const clientThis, const CreateAvailabilityConfigurationRequest& request, const CreateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAvailabilityConfiguration(request), context);
}

void WorkMailClient::CreateAvailabilityConfigurationAsync(const CreateAvailabilityConfigurationRequest& request, const CreateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCreateAvailabilityConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateGroupOutcome WorkMailClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable WorkMailClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCreateGroupAsyncHelper(WorkMailClient const * const clientThis, const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroup(request), context);
}

void WorkMailClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCreateGroupAsyncHelper( this, request, handler, context ); } );
}

CreateMobileDeviceAccessRuleOutcome WorkMailClient::CreateMobileDeviceAccessRule(const CreateMobileDeviceAccessRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMobileDeviceAccessRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMobileDeviceAccessRuleOutcomeCallable WorkMailClient::CreateMobileDeviceAccessRuleCallable(const CreateMobileDeviceAccessRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMobileDeviceAccessRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMobileDeviceAccessRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCreateMobileDeviceAccessRuleAsyncHelper(WorkMailClient const * const clientThis, const CreateMobileDeviceAccessRuleRequest& request, const CreateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMobileDeviceAccessRule(request), context);
}

void WorkMailClient::CreateMobileDeviceAccessRuleAsync(const CreateMobileDeviceAccessRuleRequest& request, const CreateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCreateMobileDeviceAccessRuleAsyncHelper( this, request, handler, context ); } );
}

CreateOrganizationOutcome WorkMailClient::CreateOrganization(const CreateOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOrganizationOutcomeCallable WorkMailClient::CreateOrganizationCallable(const CreateOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCreateOrganizationAsyncHelper(WorkMailClient const * const clientThis, const CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOrganization(request), context);
}

void WorkMailClient::CreateOrganizationAsync(const CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCreateOrganizationAsyncHelper( this, request, handler, context ); } );
}

CreateResourceOutcome WorkMailClient::CreateResource(const CreateResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceOutcomeCallable WorkMailClient::CreateResourceCallable(const CreateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCreateResourceAsyncHelper(WorkMailClient const * const clientThis, const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateResource(request), context);
}

void WorkMailClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCreateResourceAsyncHelper( this, request, handler, context ); } );
}

CreateUserOutcome WorkMailClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable WorkMailClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientCreateUserAsyncHelper(WorkMailClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void WorkMailClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientCreateUserAsyncHelper( this, request, handler, context ); } );
}

DeleteAccessControlRuleOutcome WorkMailClient::DeleteAccessControlRule(const DeleteAccessControlRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccessControlRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessControlRuleOutcomeCallable WorkMailClient::DeleteAccessControlRuleCallable(const DeleteAccessControlRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessControlRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessControlRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteAccessControlRuleAsyncHelper(WorkMailClient const * const clientThis, const DeleteAccessControlRuleRequest& request, const DeleteAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccessControlRule(request), context);
}

void WorkMailClient::DeleteAccessControlRuleAsync(const DeleteAccessControlRuleRequest& request, const DeleteAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteAccessControlRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteAliasOutcome WorkMailClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAliasOutcomeCallable WorkMailClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteAliasAsyncHelper(WorkMailClient const * const clientThis, const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAlias(request), context);
}

void WorkMailClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteAvailabilityConfigurationOutcome WorkMailClient::DeleteAvailabilityConfiguration(const DeleteAvailabilityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAvailabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAvailabilityConfigurationOutcomeCallable WorkMailClient::DeleteAvailabilityConfigurationCallable(const DeleteAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteAvailabilityConfigurationAsyncHelper(WorkMailClient const * const clientThis, const DeleteAvailabilityConfigurationRequest& request, const DeleteAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAvailabilityConfiguration(request), context);
}

void WorkMailClient::DeleteAvailabilityConfigurationAsync(const DeleteAvailabilityConfigurationRequest& request, const DeleteAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteAvailabilityConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteEmailMonitoringConfigurationOutcome WorkMailClient::DeleteEmailMonitoringConfiguration(const DeleteEmailMonitoringConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEmailMonitoringConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailMonitoringConfigurationOutcomeCallable WorkMailClient::DeleteEmailMonitoringConfigurationCallable(const DeleteEmailMonitoringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailMonitoringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailMonitoringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteEmailMonitoringConfigurationAsyncHelper(WorkMailClient const * const clientThis, const DeleteEmailMonitoringConfigurationRequest& request, const DeleteEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEmailMonitoringConfiguration(request), context);
}

void WorkMailClient::DeleteEmailMonitoringConfigurationAsync(const DeleteEmailMonitoringConfigurationRequest& request, const DeleteEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteEmailMonitoringConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupOutcome WorkMailClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable WorkMailClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteGroupAsyncHelper(WorkMailClient const * const clientThis, const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroup(request), context);
}

void WorkMailClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteMailboxPermissionsOutcome WorkMailClient::DeleteMailboxPermissions(const DeleteMailboxPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMailboxPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMailboxPermissionsOutcomeCallable WorkMailClient::DeleteMailboxPermissionsCallable(const DeleteMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteMailboxPermissionsAsyncHelper(WorkMailClient const * const clientThis, const DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMailboxPermissions(request), context);
}

void WorkMailClient::DeleteMailboxPermissionsAsync(const DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteMailboxPermissionsAsyncHelper( this, request, handler, context ); } );
}

DeleteMobileDeviceAccessOverrideOutcome WorkMailClient::DeleteMobileDeviceAccessOverride(const DeleteMobileDeviceAccessOverrideRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMobileDeviceAccessOverrideOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMobileDeviceAccessOverrideOutcomeCallable WorkMailClient::DeleteMobileDeviceAccessOverrideCallable(const DeleteMobileDeviceAccessOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMobileDeviceAccessOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMobileDeviceAccessOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteMobileDeviceAccessOverrideAsyncHelper(WorkMailClient const * const clientThis, const DeleteMobileDeviceAccessOverrideRequest& request, const DeleteMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMobileDeviceAccessOverride(request), context);
}

void WorkMailClient::DeleteMobileDeviceAccessOverrideAsync(const DeleteMobileDeviceAccessOverrideRequest& request, const DeleteMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteMobileDeviceAccessOverrideAsyncHelper( this, request, handler, context ); } );
}

DeleteMobileDeviceAccessRuleOutcome WorkMailClient::DeleteMobileDeviceAccessRule(const DeleteMobileDeviceAccessRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMobileDeviceAccessRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMobileDeviceAccessRuleOutcomeCallable WorkMailClient::DeleteMobileDeviceAccessRuleCallable(const DeleteMobileDeviceAccessRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMobileDeviceAccessRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMobileDeviceAccessRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteMobileDeviceAccessRuleAsyncHelper(WorkMailClient const * const clientThis, const DeleteMobileDeviceAccessRuleRequest& request, const DeleteMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMobileDeviceAccessRule(request), context);
}

void WorkMailClient::DeleteMobileDeviceAccessRuleAsync(const DeleteMobileDeviceAccessRuleRequest& request, const DeleteMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteMobileDeviceAccessRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteOrganizationOutcome WorkMailClient::DeleteOrganization(const DeleteOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOrganizationOutcomeCallable WorkMailClient::DeleteOrganizationCallable(const DeleteOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteOrganizationAsyncHelper(WorkMailClient const * const clientThis, const DeleteOrganizationRequest& request, const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOrganization(request), context);
}

void WorkMailClient::DeleteOrganizationAsync(const DeleteOrganizationRequest& request, const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteOrganizationAsyncHelper( this, request, handler, context ); } );
}

DeleteResourceOutcome WorkMailClient::DeleteResource(const DeleteResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceOutcomeCallable WorkMailClient::DeleteResourceCallable(const DeleteResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteResourceAsyncHelper(WorkMailClient const * const clientThis, const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResource(request), context);
}

void WorkMailClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteResourceAsyncHelper( this, request, handler, context ); } );
}

DeleteRetentionPolicyOutcome WorkMailClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRetentionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRetentionPolicyOutcomeCallable WorkMailClient::DeleteRetentionPolicyCallable(const DeleteRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteRetentionPolicyAsyncHelper(WorkMailClient const * const clientThis, const DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRetentionPolicy(request), context);
}

void WorkMailClient::DeleteRetentionPolicyAsync(const DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteRetentionPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteUserOutcome WorkMailClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable WorkMailClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeleteUserAsyncHelper(WorkMailClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void WorkMailClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeleteUserAsyncHelper( this, request, handler, context ); } );
}

DeregisterFromWorkMailOutcome WorkMailClient::DeregisterFromWorkMail(const DeregisterFromWorkMailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterFromWorkMailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterFromWorkMailOutcomeCallable WorkMailClient::DeregisterFromWorkMailCallable(const DeregisterFromWorkMailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterFromWorkMailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterFromWorkMail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeregisterFromWorkMailAsyncHelper(WorkMailClient const * const clientThis, const DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterFromWorkMail(request), context);
}

void WorkMailClient::DeregisterFromWorkMailAsync(const DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeregisterFromWorkMailAsyncHelper( this, request, handler, context ); } );
}

DeregisterMailDomainOutcome WorkMailClient::DeregisterMailDomain(const DeregisterMailDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterMailDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterMailDomainOutcomeCallable WorkMailClient::DeregisterMailDomainCallable(const DeregisterMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDeregisterMailDomainAsyncHelper(WorkMailClient const * const clientThis, const DeregisterMailDomainRequest& request, const DeregisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterMailDomain(request), context);
}

void WorkMailClient::DeregisterMailDomainAsync(const DeregisterMailDomainRequest& request, const DeregisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDeregisterMailDomainAsyncHelper( this, request, handler, context ); } );
}

DescribeEmailMonitoringConfigurationOutcome WorkMailClient::DescribeEmailMonitoringConfiguration(const DescribeEmailMonitoringConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEmailMonitoringConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEmailMonitoringConfigurationOutcomeCallable WorkMailClient::DescribeEmailMonitoringConfigurationCallable(const DescribeEmailMonitoringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEmailMonitoringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEmailMonitoringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDescribeEmailMonitoringConfigurationAsyncHelper(WorkMailClient const * const clientThis, const DescribeEmailMonitoringConfigurationRequest& request, const DescribeEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEmailMonitoringConfiguration(request), context);
}

void WorkMailClient::DescribeEmailMonitoringConfigurationAsync(const DescribeEmailMonitoringConfigurationRequest& request, const DescribeEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDescribeEmailMonitoringConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeGroupOutcome WorkMailClient::DescribeGroup(const DescribeGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupOutcomeCallable WorkMailClient::DescribeGroupCallable(const DescribeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDescribeGroupAsyncHelper(WorkMailClient const * const clientThis, const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGroup(request), context);
}

void WorkMailClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDescribeGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeInboundDmarcSettingsOutcome WorkMailClient::DescribeInboundDmarcSettings(const DescribeInboundDmarcSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInboundDmarcSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInboundDmarcSettingsOutcomeCallable WorkMailClient::DescribeInboundDmarcSettingsCallable(const DescribeInboundDmarcSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInboundDmarcSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInboundDmarcSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDescribeInboundDmarcSettingsAsyncHelper(WorkMailClient const * const clientThis, const DescribeInboundDmarcSettingsRequest& request, const DescribeInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInboundDmarcSettings(request), context);
}

void WorkMailClient::DescribeInboundDmarcSettingsAsync(const DescribeInboundDmarcSettingsRequest& request, const DescribeInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDescribeInboundDmarcSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeMailboxExportJobOutcome WorkMailClient::DescribeMailboxExportJob(const DescribeMailboxExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMailboxExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMailboxExportJobOutcomeCallable WorkMailClient::DescribeMailboxExportJobCallable(const DescribeMailboxExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMailboxExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMailboxExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDescribeMailboxExportJobAsyncHelper(WorkMailClient const * const clientThis, const DescribeMailboxExportJobRequest& request, const DescribeMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMailboxExportJob(request), context);
}

void WorkMailClient::DescribeMailboxExportJobAsync(const DescribeMailboxExportJobRequest& request, const DescribeMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDescribeMailboxExportJobAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationOutcome WorkMailClient::DescribeOrganization(const DescribeOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationOutcomeCallable WorkMailClient::DescribeOrganizationCallable(const DescribeOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDescribeOrganizationAsyncHelper(WorkMailClient const * const clientThis, const DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganization(request), context);
}

void WorkMailClient::DescribeOrganizationAsync(const DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDescribeOrganizationAsyncHelper( this, request, handler, context ); } );
}

DescribeResourceOutcome WorkMailClient::DescribeResource(const DescribeResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceOutcomeCallable WorkMailClient::DescribeResourceCallable(const DescribeResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDescribeResourceAsyncHelper(WorkMailClient const * const clientThis, const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeResource(request), context);
}

void WorkMailClient::DescribeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDescribeResourceAsyncHelper( this, request, handler, context ); } );
}

DescribeUserOutcome WorkMailClient::DescribeUser(const DescribeUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcomeCallable WorkMailClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDescribeUserAsyncHelper(WorkMailClient const * const clientThis, const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUser(request), context);
}

void WorkMailClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDescribeUserAsyncHelper( this, request, handler, context ); } );
}

DisassociateDelegateFromResourceOutcome WorkMailClient::DisassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateDelegateFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDelegateFromResourceOutcomeCallable WorkMailClient::DisassociateDelegateFromResourceCallable(const DisassociateDelegateFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDelegateFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDelegateFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDisassociateDelegateFromResourceAsyncHelper(WorkMailClient const * const clientThis, const DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateDelegateFromResource(request), context);
}

void WorkMailClient::DisassociateDelegateFromResourceAsync(const DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDisassociateDelegateFromResourceAsyncHelper( this, request, handler, context ); } );
}

DisassociateMemberFromGroupOutcome WorkMailClient::DisassociateMemberFromGroup(const DisassociateMemberFromGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateMemberFromGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMemberFromGroupOutcomeCallable WorkMailClient::DisassociateMemberFromGroupCallable(const DisassociateMemberFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMemberFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMemberFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientDisassociateMemberFromGroupAsyncHelper(WorkMailClient const * const clientThis, const DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateMemberFromGroup(request), context);
}

void WorkMailClient::DisassociateMemberFromGroupAsync(const DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientDisassociateMemberFromGroupAsyncHelper( this, request, handler, context ); } );
}

GetAccessControlEffectOutcome WorkMailClient::GetAccessControlEffect(const GetAccessControlEffectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccessControlEffectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccessControlEffectOutcomeCallable WorkMailClient::GetAccessControlEffectCallable(const GetAccessControlEffectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessControlEffectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessControlEffect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientGetAccessControlEffectAsyncHelper(WorkMailClient const * const clientThis, const GetAccessControlEffectRequest& request, const GetAccessControlEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccessControlEffect(request), context);
}

void WorkMailClient::GetAccessControlEffectAsync(const GetAccessControlEffectRequest& request, const GetAccessControlEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientGetAccessControlEffectAsyncHelper( this, request, handler, context ); } );
}

GetDefaultRetentionPolicyOutcome WorkMailClient::GetDefaultRetentionPolicy(const GetDefaultRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDefaultRetentionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDefaultRetentionPolicyOutcomeCallable WorkMailClient::GetDefaultRetentionPolicyCallable(const GetDefaultRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDefaultRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDefaultRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientGetDefaultRetentionPolicyAsyncHelper(WorkMailClient const * const clientThis, const GetDefaultRetentionPolicyRequest& request, const GetDefaultRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDefaultRetentionPolicy(request), context);
}

void WorkMailClient::GetDefaultRetentionPolicyAsync(const GetDefaultRetentionPolicyRequest& request, const GetDefaultRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientGetDefaultRetentionPolicyAsyncHelper( this, request, handler, context ); } );
}

GetMailDomainOutcome WorkMailClient::GetMailDomain(const GetMailDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMailDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMailDomainOutcomeCallable WorkMailClient::GetMailDomainCallable(const GetMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientGetMailDomainAsyncHelper(WorkMailClient const * const clientThis, const GetMailDomainRequest& request, const GetMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMailDomain(request), context);
}

void WorkMailClient::GetMailDomainAsync(const GetMailDomainRequest& request, const GetMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientGetMailDomainAsyncHelper( this, request, handler, context ); } );
}

GetMailboxDetailsOutcome WorkMailClient::GetMailboxDetails(const GetMailboxDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMailboxDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMailboxDetailsOutcomeCallable WorkMailClient::GetMailboxDetailsCallable(const GetMailboxDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMailboxDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMailboxDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientGetMailboxDetailsAsyncHelper(WorkMailClient const * const clientThis, const GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMailboxDetails(request), context);
}

void WorkMailClient::GetMailboxDetailsAsync(const GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientGetMailboxDetailsAsyncHelper( this, request, handler, context ); } );
}

GetMobileDeviceAccessEffectOutcome WorkMailClient::GetMobileDeviceAccessEffect(const GetMobileDeviceAccessEffectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMobileDeviceAccessEffectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMobileDeviceAccessEffectOutcomeCallable WorkMailClient::GetMobileDeviceAccessEffectCallable(const GetMobileDeviceAccessEffectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMobileDeviceAccessEffectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMobileDeviceAccessEffect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientGetMobileDeviceAccessEffectAsyncHelper(WorkMailClient const * const clientThis, const GetMobileDeviceAccessEffectRequest& request, const GetMobileDeviceAccessEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMobileDeviceAccessEffect(request), context);
}

void WorkMailClient::GetMobileDeviceAccessEffectAsync(const GetMobileDeviceAccessEffectRequest& request, const GetMobileDeviceAccessEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientGetMobileDeviceAccessEffectAsyncHelper( this, request, handler, context ); } );
}

GetMobileDeviceAccessOverrideOutcome WorkMailClient::GetMobileDeviceAccessOverride(const GetMobileDeviceAccessOverrideRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMobileDeviceAccessOverrideOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMobileDeviceAccessOverrideOutcomeCallable WorkMailClient::GetMobileDeviceAccessOverrideCallable(const GetMobileDeviceAccessOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMobileDeviceAccessOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMobileDeviceAccessOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientGetMobileDeviceAccessOverrideAsyncHelper(WorkMailClient const * const clientThis, const GetMobileDeviceAccessOverrideRequest& request, const GetMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMobileDeviceAccessOverride(request), context);
}

void WorkMailClient::GetMobileDeviceAccessOverrideAsync(const GetMobileDeviceAccessOverrideRequest& request, const GetMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientGetMobileDeviceAccessOverrideAsyncHelper( this, request, handler, context ); } );
}

ListAccessControlRulesOutcome WorkMailClient::ListAccessControlRules(const ListAccessControlRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccessControlRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccessControlRulesOutcomeCallable WorkMailClient::ListAccessControlRulesCallable(const ListAccessControlRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessControlRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessControlRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListAccessControlRulesAsyncHelper(WorkMailClient const * const clientThis, const ListAccessControlRulesRequest& request, const ListAccessControlRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccessControlRules(request), context);
}

void WorkMailClient::ListAccessControlRulesAsync(const ListAccessControlRulesRequest& request, const ListAccessControlRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListAccessControlRulesAsyncHelper( this, request, handler, context ); } );
}

ListAliasesOutcome WorkMailClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAliasesOutcomeCallable WorkMailClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListAliasesAsyncHelper(WorkMailClient const * const clientThis, const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAliases(request), context);
}

void WorkMailClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListAliasesAsyncHelper( this, request, handler, context ); } );
}

ListAvailabilityConfigurationsOutcome WorkMailClient::ListAvailabilityConfigurations(const ListAvailabilityConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailabilityConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailabilityConfigurationsOutcomeCallable WorkMailClient::ListAvailabilityConfigurationsCallable(const ListAvailabilityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailabilityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailabilityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListAvailabilityConfigurationsAsyncHelper(WorkMailClient const * const clientThis, const ListAvailabilityConfigurationsRequest& request, const ListAvailabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAvailabilityConfigurations(request), context);
}

void WorkMailClient::ListAvailabilityConfigurationsAsync(const ListAvailabilityConfigurationsRequest& request, const ListAvailabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListAvailabilityConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListGroupMembersOutcome WorkMailClient::ListGroupMembers(const ListGroupMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupMembersOutcomeCallable WorkMailClient::ListGroupMembersCallable(const ListGroupMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListGroupMembersAsyncHelper(WorkMailClient const * const clientThis, const ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupMembers(request), context);
}

void WorkMailClient::ListGroupMembersAsync(const ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListGroupMembersAsyncHelper( this, request, handler, context ); } );
}

ListGroupsOutcome WorkMailClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable WorkMailClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListGroupsAsyncHelper(WorkMailClient const * const clientThis, const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroups(request), context);
}

void WorkMailClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListGroupsAsyncHelper( this, request, handler, context ); } );
}

ListMailDomainsOutcome WorkMailClient::ListMailDomains(const ListMailDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMailDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMailDomainsOutcomeCallable WorkMailClient::ListMailDomainsCallable(const ListMailDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMailDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMailDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListMailDomainsAsyncHelper(WorkMailClient const * const clientThis, const ListMailDomainsRequest& request, const ListMailDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMailDomains(request), context);
}

void WorkMailClient::ListMailDomainsAsync(const ListMailDomainsRequest& request, const ListMailDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListMailDomainsAsyncHelper( this, request, handler, context ); } );
}

ListMailboxExportJobsOutcome WorkMailClient::ListMailboxExportJobs(const ListMailboxExportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMailboxExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMailboxExportJobsOutcomeCallable WorkMailClient::ListMailboxExportJobsCallable(const ListMailboxExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMailboxExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMailboxExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListMailboxExportJobsAsyncHelper(WorkMailClient const * const clientThis, const ListMailboxExportJobsRequest& request, const ListMailboxExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMailboxExportJobs(request), context);
}

void WorkMailClient::ListMailboxExportJobsAsync(const ListMailboxExportJobsRequest& request, const ListMailboxExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListMailboxExportJobsAsyncHelper( this, request, handler, context ); } );
}

ListMailboxPermissionsOutcome WorkMailClient::ListMailboxPermissions(const ListMailboxPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMailboxPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMailboxPermissionsOutcomeCallable WorkMailClient::ListMailboxPermissionsCallable(const ListMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListMailboxPermissionsAsyncHelper(WorkMailClient const * const clientThis, const ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMailboxPermissions(request), context);
}

void WorkMailClient::ListMailboxPermissionsAsync(const ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListMailboxPermissionsAsyncHelper( this, request, handler, context ); } );
}

ListMobileDeviceAccessOverridesOutcome WorkMailClient::ListMobileDeviceAccessOverrides(const ListMobileDeviceAccessOverridesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMobileDeviceAccessOverridesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMobileDeviceAccessOverridesOutcomeCallable WorkMailClient::ListMobileDeviceAccessOverridesCallable(const ListMobileDeviceAccessOverridesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMobileDeviceAccessOverridesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMobileDeviceAccessOverrides(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListMobileDeviceAccessOverridesAsyncHelper(WorkMailClient const * const clientThis, const ListMobileDeviceAccessOverridesRequest& request, const ListMobileDeviceAccessOverridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMobileDeviceAccessOverrides(request), context);
}

void WorkMailClient::ListMobileDeviceAccessOverridesAsync(const ListMobileDeviceAccessOverridesRequest& request, const ListMobileDeviceAccessOverridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListMobileDeviceAccessOverridesAsyncHelper( this, request, handler, context ); } );
}

ListMobileDeviceAccessRulesOutcome WorkMailClient::ListMobileDeviceAccessRules(const ListMobileDeviceAccessRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMobileDeviceAccessRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMobileDeviceAccessRulesOutcomeCallable WorkMailClient::ListMobileDeviceAccessRulesCallable(const ListMobileDeviceAccessRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMobileDeviceAccessRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMobileDeviceAccessRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListMobileDeviceAccessRulesAsyncHelper(WorkMailClient const * const clientThis, const ListMobileDeviceAccessRulesRequest& request, const ListMobileDeviceAccessRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMobileDeviceAccessRules(request), context);
}

void WorkMailClient::ListMobileDeviceAccessRulesAsync(const ListMobileDeviceAccessRulesRequest& request, const ListMobileDeviceAccessRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListMobileDeviceAccessRulesAsyncHelper( this, request, handler, context ); } );
}

ListOrganizationsOutcome WorkMailClient::ListOrganizations(const ListOrganizationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOrganizationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationsOutcomeCallable WorkMailClient::ListOrganizationsCallable(const ListOrganizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListOrganizationsAsyncHelper(WorkMailClient const * const clientThis, const ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizations(request), context);
}

void WorkMailClient::ListOrganizationsAsync(const ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListOrganizationsAsyncHelper( this, request, handler, context ); } );
}

ListResourceDelegatesOutcome WorkMailClient::ListResourceDelegates(const ListResourceDelegatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourceDelegatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceDelegatesOutcomeCallable WorkMailClient::ListResourceDelegatesCallable(const ListResourceDelegatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceDelegatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceDelegates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListResourceDelegatesAsyncHelper(WorkMailClient const * const clientThis, const ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceDelegates(request), context);
}

void WorkMailClient::ListResourceDelegatesAsync(const ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListResourceDelegatesAsyncHelper( this, request, handler, context ); } );
}

ListResourcesOutcome WorkMailClient::ListResources(const ListResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcomeCallable WorkMailClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListResourcesAsyncHelper(WorkMailClient const * const clientThis, const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResources(request), context);
}

void WorkMailClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListResourcesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome WorkMailClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WorkMailClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListTagsForResourceAsyncHelper(WorkMailClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void WorkMailClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListUsersOutcome WorkMailClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable WorkMailClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientListUsersAsyncHelper(WorkMailClient const * const clientThis, const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsers(request), context);
}

void WorkMailClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientListUsersAsyncHelper( this, request, handler, context ); } );
}

PutAccessControlRuleOutcome WorkMailClient::PutAccessControlRule(const PutAccessControlRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAccessControlRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccessControlRuleOutcomeCallable WorkMailClient::PutAccessControlRuleCallable(const PutAccessControlRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccessControlRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccessControlRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientPutAccessControlRuleAsyncHelper(WorkMailClient const * const clientThis, const PutAccessControlRuleRequest& request, const PutAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccessControlRule(request), context);
}

void WorkMailClient::PutAccessControlRuleAsync(const PutAccessControlRuleRequest& request, const PutAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientPutAccessControlRuleAsyncHelper( this, request, handler, context ); } );
}

PutEmailMonitoringConfigurationOutcome WorkMailClient::PutEmailMonitoringConfiguration(const PutEmailMonitoringConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutEmailMonitoringConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEmailMonitoringConfigurationOutcomeCallable WorkMailClient::PutEmailMonitoringConfigurationCallable(const PutEmailMonitoringConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailMonitoringConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailMonitoringConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientPutEmailMonitoringConfigurationAsyncHelper(WorkMailClient const * const clientThis, const PutEmailMonitoringConfigurationRequest& request, const PutEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailMonitoringConfiguration(request), context);
}

void WorkMailClient::PutEmailMonitoringConfigurationAsync(const PutEmailMonitoringConfigurationRequest& request, const PutEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientPutEmailMonitoringConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutInboundDmarcSettingsOutcome WorkMailClient::PutInboundDmarcSettings(const PutInboundDmarcSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutInboundDmarcSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInboundDmarcSettingsOutcomeCallable WorkMailClient::PutInboundDmarcSettingsCallable(const PutInboundDmarcSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInboundDmarcSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInboundDmarcSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientPutInboundDmarcSettingsAsyncHelper(WorkMailClient const * const clientThis, const PutInboundDmarcSettingsRequest& request, const PutInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutInboundDmarcSettings(request), context);
}

void WorkMailClient::PutInboundDmarcSettingsAsync(const PutInboundDmarcSettingsRequest& request, const PutInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientPutInboundDmarcSettingsAsyncHelper( this, request, handler, context ); } );
}

PutMailboxPermissionsOutcome WorkMailClient::PutMailboxPermissions(const PutMailboxPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMailboxPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMailboxPermissionsOutcomeCallable WorkMailClient::PutMailboxPermissionsCallable(const PutMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientPutMailboxPermissionsAsyncHelper(WorkMailClient const * const clientThis, const PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMailboxPermissions(request), context);
}

void WorkMailClient::PutMailboxPermissionsAsync(const PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientPutMailboxPermissionsAsyncHelper( this, request, handler, context ); } );
}

PutMobileDeviceAccessOverrideOutcome WorkMailClient::PutMobileDeviceAccessOverride(const PutMobileDeviceAccessOverrideRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMobileDeviceAccessOverrideOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMobileDeviceAccessOverrideOutcomeCallable WorkMailClient::PutMobileDeviceAccessOverrideCallable(const PutMobileDeviceAccessOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMobileDeviceAccessOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMobileDeviceAccessOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientPutMobileDeviceAccessOverrideAsyncHelper(WorkMailClient const * const clientThis, const PutMobileDeviceAccessOverrideRequest& request, const PutMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMobileDeviceAccessOverride(request), context);
}

void WorkMailClient::PutMobileDeviceAccessOverrideAsync(const PutMobileDeviceAccessOverrideRequest& request, const PutMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientPutMobileDeviceAccessOverrideAsyncHelper( this, request, handler, context ); } );
}

PutRetentionPolicyOutcome WorkMailClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRetentionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRetentionPolicyOutcomeCallable WorkMailClient::PutRetentionPolicyCallable(const PutRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientPutRetentionPolicyAsyncHelper(WorkMailClient const * const clientThis, const PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRetentionPolicy(request), context);
}

void WorkMailClient::PutRetentionPolicyAsync(const PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientPutRetentionPolicyAsyncHelper( this, request, handler, context ); } );
}

RegisterMailDomainOutcome WorkMailClient::RegisterMailDomain(const RegisterMailDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterMailDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterMailDomainOutcomeCallable WorkMailClient::RegisterMailDomainCallable(const RegisterMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientRegisterMailDomainAsyncHelper(WorkMailClient const * const clientThis, const RegisterMailDomainRequest& request, const RegisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterMailDomain(request), context);
}

void WorkMailClient::RegisterMailDomainAsync(const RegisterMailDomainRequest& request, const RegisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientRegisterMailDomainAsyncHelper( this, request, handler, context ); } );
}

RegisterToWorkMailOutcome WorkMailClient::RegisterToWorkMail(const RegisterToWorkMailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterToWorkMailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterToWorkMailOutcomeCallable WorkMailClient::RegisterToWorkMailCallable(const RegisterToWorkMailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterToWorkMailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterToWorkMail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientRegisterToWorkMailAsyncHelper(WorkMailClient const * const clientThis, const RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterToWorkMail(request), context);
}

void WorkMailClient::RegisterToWorkMailAsync(const RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientRegisterToWorkMailAsyncHelper( this, request, handler, context ); } );
}

ResetPasswordOutcome WorkMailClient::ResetPassword(const ResetPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetPasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetPasswordOutcomeCallable WorkMailClient::ResetPasswordCallable(const ResetPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientResetPasswordAsyncHelper(WorkMailClient const * const clientThis, const ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetPassword(request), context);
}

void WorkMailClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientResetPasswordAsyncHelper( this, request, handler, context ); } );
}

StartMailboxExportJobOutcome WorkMailClient::StartMailboxExportJob(const StartMailboxExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMailboxExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMailboxExportJobOutcomeCallable WorkMailClient::StartMailboxExportJobCallable(const StartMailboxExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMailboxExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMailboxExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientStartMailboxExportJobAsyncHelper(WorkMailClient const * const clientThis, const StartMailboxExportJobRequest& request, const StartMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMailboxExportJob(request), context);
}

void WorkMailClient::StartMailboxExportJobAsync(const StartMailboxExportJobRequest& request, const StartMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientStartMailboxExportJobAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome WorkMailClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WorkMailClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientTagResourceAsyncHelper(WorkMailClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void WorkMailClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestAvailabilityConfigurationOutcome WorkMailClient::TestAvailabilityConfiguration(const TestAvailabilityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestAvailabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestAvailabilityConfigurationOutcomeCallable WorkMailClient::TestAvailabilityConfigurationCallable(const TestAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientTestAvailabilityConfigurationAsyncHelper(WorkMailClient const * const clientThis, const TestAvailabilityConfigurationRequest& request, const TestAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestAvailabilityConfiguration(request), context);
}

void WorkMailClient::TestAvailabilityConfigurationAsync(const TestAvailabilityConfigurationRequest& request, const TestAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientTestAvailabilityConfigurationAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome WorkMailClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WorkMailClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientUntagResourceAsyncHelper(WorkMailClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void WorkMailClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAvailabilityConfigurationOutcome WorkMailClient::UpdateAvailabilityConfiguration(const UpdateAvailabilityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAvailabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAvailabilityConfigurationOutcomeCallable WorkMailClient::UpdateAvailabilityConfigurationCallable(const UpdateAvailabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAvailabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAvailabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientUpdateAvailabilityConfigurationAsyncHelper(WorkMailClient const * const clientThis, const UpdateAvailabilityConfigurationRequest& request, const UpdateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAvailabilityConfiguration(request), context);
}

void WorkMailClient::UpdateAvailabilityConfigurationAsync(const UpdateAvailabilityConfigurationRequest& request, const UpdateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientUpdateAvailabilityConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateDefaultMailDomainOutcome WorkMailClient::UpdateDefaultMailDomain(const UpdateDefaultMailDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDefaultMailDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDefaultMailDomainOutcomeCallable WorkMailClient::UpdateDefaultMailDomainCallable(const UpdateDefaultMailDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDefaultMailDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDefaultMailDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientUpdateDefaultMailDomainAsyncHelper(WorkMailClient const * const clientThis, const UpdateDefaultMailDomainRequest& request, const UpdateDefaultMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDefaultMailDomain(request), context);
}

void WorkMailClient::UpdateDefaultMailDomainAsync(const UpdateDefaultMailDomainRequest& request, const UpdateDefaultMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientUpdateDefaultMailDomainAsyncHelper( this, request, handler, context ); } );
}

UpdateMailboxQuotaOutcome WorkMailClient::UpdateMailboxQuota(const UpdateMailboxQuotaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMailboxQuotaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMailboxQuotaOutcomeCallable WorkMailClient::UpdateMailboxQuotaCallable(const UpdateMailboxQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMailboxQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMailboxQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientUpdateMailboxQuotaAsyncHelper(WorkMailClient const * const clientThis, const UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMailboxQuota(request), context);
}

void WorkMailClient::UpdateMailboxQuotaAsync(const UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientUpdateMailboxQuotaAsyncHelper( this, request, handler, context ); } );
}

UpdateMobileDeviceAccessRuleOutcome WorkMailClient::UpdateMobileDeviceAccessRule(const UpdateMobileDeviceAccessRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMobileDeviceAccessRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMobileDeviceAccessRuleOutcomeCallable WorkMailClient::UpdateMobileDeviceAccessRuleCallable(const UpdateMobileDeviceAccessRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMobileDeviceAccessRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMobileDeviceAccessRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientUpdateMobileDeviceAccessRuleAsyncHelper(WorkMailClient const * const clientThis, const UpdateMobileDeviceAccessRuleRequest& request, const UpdateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMobileDeviceAccessRule(request), context);
}

void WorkMailClient::UpdateMobileDeviceAccessRuleAsync(const UpdateMobileDeviceAccessRuleRequest& request, const UpdateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientUpdateMobileDeviceAccessRuleAsyncHelper( this, request, handler, context ); } );
}

UpdatePrimaryEmailAddressOutcome WorkMailClient::UpdatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePrimaryEmailAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePrimaryEmailAddressOutcomeCallable WorkMailClient::UpdatePrimaryEmailAddressCallable(const UpdatePrimaryEmailAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePrimaryEmailAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePrimaryEmailAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientUpdatePrimaryEmailAddressAsyncHelper(WorkMailClient const * const clientThis, const UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePrimaryEmailAddress(request), context);
}

void WorkMailClient::UpdatePrimaryEmailAddressAsync(const UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientUpdatePrimaryEmailAddressAsyncHelper( this, request, handler, context ); } );
}

UpdateResourceOutcome WorkMailClient::UpdateResource(const UpdateResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceOutcomeCallable WorkMailClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClientUpdateResourceAsyncHelper(WorkMailClient const * const clientThis, const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResource(request), context);
}

void WorkMailClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkMailClientUpdateResourceAsyncHelper( this, request, handler, context ); } );
}

