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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/iam/IAMClient.h>
#include <aws/iam/IAMEndpoint.h>
#include <aws/iam/IAMErrorMarshaller.h>
#include <aws/iam/model/AddClientIDToOpenIDConnectProviderRequest.h>
#include <aws/iam/model/AddRoleToInstanceProfileRequest.h>
#include <aws/iam/model/AddUserToGroupRequest.h>
#include <aws/iam/model/AttachGroupPolicyRequest.h>
#include <aws/iam/model/AttachRolePolicyRequest.h>
#include <aws/iam/model/AttachUserPolicyRequest.h>
#include <aws/iam/model/ChangePasswordRequest.h>
#include <aws/iam/model/CreateAccessKeyRequest.h>
#include <aws/iam/model/CreateAccountAliasRequest.h>
#include <aws/iam/model/CreateGroupRequest.h>
#include <aws/iam/model/CreateInstanceProfileRequest.h>
#include <aws/iam/model/CreateLoginProfileRequest.h>
#include <aws/iam/model/CreateOpenIDConnectProviderRequest.h>
#include <aws/iam/model/CreatePolicyRequest.h>
#include <aws/iam/model/CreatePolicyVersionRequest.h>
#include <aws/iam/model/CreateRoleRequest.h>
#include <aws/iam/model/CreateSAMLProviderRequest.h>
#include <aws/iam/model/CreateServiceLinkedRoleRequest.h>
#include <aws/iam/model/CreateServiceSpecificCredentialRequest.h>
#include <aws/iam/model/CreateUserRequest.h>
#include <aws/iam/model/CreateVirtualMFADeviceRequest.h>
#include <aws/iam/model/DeactivateMFADeviceRequest.h>
#include <aws/iam/model/DeleteAccessKeyRequest.h>
#include <aws/iam/model/DeleteAccountAliasRequest.h>
#include <aws/iam/model/DeleteAccountPasswordPolicyRequest.h>
#include <aws/iam/model/DeleteGroupRequest.h>
#include <aws/iam/model/DeleteGroupPolicyRequest.h>
#include <aws/iam/model/DeleteInstanceProfileRequest.h>
#include <aws/iam/model/DeleteLoginProfileRequest.h>
#include <aws/iam/model/DeleteOpenIDConnectProviderRequest.h>
#include <aws/iam/model/DeletePolicyRequest.h>
#include <aws/iam/model/DeletePolicyVersionRequest.h>
#include <aws/iam/model/DeleteRoleRequest.h>
#include <aws/iam/model/DeleteRolePermissionsBoundaryRequest.h>
#include <aws/iam/model/DeleteRolePolicyRequest.h>
#include <aws/iam/model/DeleteSAMLProviderRequest.h>
#include <aws/iam/model/DeleteSSHPublicKeyRequest.h>
#include <aws/iam/model/DeleteServerCertificateRequest.h>
#include <aws/iam/model/DeleteServiceLinkedRoleRequest.h>
#include <aws/iam/model/DeleteServiceSpecificCredentialRequest.h>
#include <aws/iam/model/DeleteSigningCertificateRequest.h>
#include <aws/iam/model/DeleteUserRequest.h>
#include <aws/iam/model/DeleteUserPermissionsBoundaryRequest.h>
#include <aws/iam/model/DeleteUserPolicyRequest.h>
#include <aws/iam/model/DeleteVirtualMFADeviceRequest.h>
#include <aws/iam/model/DetachGroupPolicyRequest.h>
#include <aws/iam/model/DetachRolePolicyRequest.h>
#include <aws/iam/model/DetachUserPolicyRequest.h>
#include <aws/iam/model/EnableMFADeviceRequest.h>
#include <aws/iam/model/GenerateCredentialReportRequest.h>
#include <aws/iam/model/GenerateOrganizationsAccessReportRequest.h>
#include <aws/iam/model/GenerateServiceLastAccessedDetailsRequest.h>
#include <aws/iam/model/GetAccessKeyLastUsedRequest.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsRequest.h>
#include <aws/iam/model/GetAccountPasswordPolicyRequest.h>
#include <aws/iam/model/GetAccountSummaryRequest.h>
#include <aws/iam/model/GetContextKeysForCustomPolicyRequest.h>
#include <aws/iam/model/GetContextKeysForPrincipalPolicyRequest.h>
#include <aws/iam/model/GetCredentialReportRequest.h>
#include <aws/iam/model/GetGroupRequest.h>
#include <aws/iam/model/GetGroupPolicyRequest.h>
#include <aws/iam/model/GetInstanceProfileRequest.h>
#include <aws/iam/model/GetLoginProfileRequest.h>
#include <aws/iam/model/GetOpenIDConnectProviderRequest.h>
#include <aws/iam/model/GetOrganizationsAccessReportRequest.h>
#include <aws/iam/model/GetPolicyRequest.h>
#include <aws/iam/model/GetPolicyVersionRequest.h>
#include <aws/iam/model/GetRoleRequest.h>
#include <aws/iam/model/GetRolePolicyRequest.h>
#include <aws/iam/model/GetSAMLProviderRequest.h>
#include <aws/iam/model/GetSSHPublicKeyRequest.h>
#include <aws/iam/model/GetServerCertificateRequest.h>
#include <aws/iam/model/GetServiceLastAccessedDetailsRequest.h>
#include <aws/iam/model/GetServiceLastAccessedDetailsWithEntitiesRequest.h>
#include <aws/iam/model/GetServiceLinkedRoleDeletionStatusRequest.h>
#include <aws/iam/model/GetUserRequest.h>
#include <aws/iam/model/GetUserPolicyRequest.h>
#include <aws/iam/model/ListAccessKeysRequest.h>
#include <aws/iam/model/ListAccountAliasesRequest.h>
#include <aws/iam/model/ListAttachedGroupPoliciesRequest.h>
#include <aws/iam/model/ListAttachedRolePoliciesRequest.h>
#include <aws/iam/model/ListAttachedUserPoliciesRequest.h>
#include <aws/iam/model/ListEntitiesForPolicyRequest.h>
#include <aws/iam/model/ListGroupPoliciesRequest.h>
#include <aws/iam/model/ListGroupsRequest.h>
#include <aws/iam/model/ListGroupsForUserRequest.h>
#include <aws/iam/model/ListInstanceProfileTagsRequest.h>
#include <aws/iam/model/ListInstanceProfilesRequest.h>
#include <aws/iam/model/ListInstanceProfilesForRoleRequest.h>
#include <aws/iam/model/ListMFADeviceTagsRequest.h>
#include <aws/iam/model/ListMFADevicesRequest.h>
#include <aws/iam/model/ListOpenIDConnectProviderTagsRequest.h>
#include <aws/iam/model/ListOpenIDConnectProvidersRequest.h>
#include <aws/iam/model/ListPoliciesRequest.h>
#include <aws/iam/model/ListPoliciesGrantingServiceAccessRequest.h>
#include <aws/iam/model/ListPolicyTagsRequest.h>
#include <aws/iam/model/ListPolicyVersionsRequest.h>
#include <aws/iam/model/ListRolePoliciesRequest.h>
#include <aws/iam/model/ListRoleTagsRequest.h>
#include <aws/iam/model/ListRolesRequest.h>
#include <aws/iam/model/ListSAMLProviderTagsRequest.h>
#include <aws/iam/model/ListSAMLProvidersRequest.h>
#include <aws/iam/model/ListSSHPublicKeysRequest.h>
#include <aws/iam/model/ListServerCertificateTagsRequest.h>
#include <aws/iam/model/ListServerCertificatesRequest.h>
#include <aws/iam/model/ListServiceSpecificCredentialsRequest.h>
#include <aws/iam/model/ListSigningCertificatesRequest.h>
#include <aws/iam/model/ListUserPoliciesRequest.h>
#include <aws/iam/model/ListUserTagsRequest.h>
#include <aws/iam/model/ListUsersRequest.h>
#include <aws/iam/model/ListVirtualMFADevicesRequest.h>
#include <aws/iam/model/PutGroupPolicyRequest.h>
#include <aws/iam/model/PutRolePermissionsBoundaryRequest.h>
#include <aws/iam/model/PutRolePolicyRequest.h>
#include <aws/iam/model/PutUserPermissionsBoundaryRequest.h>
#include <aws/iam/model/PutUserPolicyRequest.h>
#include <aws/iam/model/RemoveClientIDFromOpenIDConnectProviderRequest.h>
#include <aws/iam/model/RemoveRoleFromInstanceProfileRequest.h>
#include <aws/iam/model/RemoveUserFromGroupRequest.h>
#include <aws/iam/model/ResetServiceSpecificCredentialRequest.h>
#include <aws/iam/model/ResyncMFADeviceRequest.h>
#include <aws/iam/model/SetDefaultPolicyVersionRequest.h>
#include <aws/iam/model/SetSecurityTokenServicePreferencesRequest.h>
#include <aws/iam/model/SimulateCustomPolicyRequest.h>
#include <aws/iam/model/SimulatePrincipalPolicyRequest.h>
#include <aws/iam/model/TagInstanceProfileRequest.h>
#include <aws/iam/model/TagMFADeviceRequest.h>
#include <aws/iam/model/TagOpenIDConnectProviderRequest.h>
#include <aws/iam/model/TagPolicyRequest.h>
#include <aws/iam/model/TagRoleRequest.h>
#include <aws/iam/model/TagSAMLProviderRequest.h>
#include <aws/iam/model/TagServerCertificateRequest.h>
#include <aws/iam/model/TagUserRequest.h>
#include <aws/iam/model/UntagInstanceProfileRequest.h>
#include <aws/iam/model/UntagMFADeviceRequest.h>
#include <aws/iam/model/UntagOpenIDConnectProviderRequest.h>
#include <aws/iam/model/UntagPolicyRequest.h>
#include <aws/iam/model/UntagRoleRequest.h>
#include <aws/iam/model/UntagSAMLProviderRequest.h>
#include <aws/iam/model/UntagServerCertificateRequest.h>
#include <aws/iam/model/UntagUserRequest.h>
#include <aws/iam/model/UpdateAccessKeyRequest.h>
#include <aws/iam/model/UpdateAccountPasswordPolicyRequest.h>
#include <aws/iam/model/UpdateAssumeRolePolicyRequest.h>
#include <aws/iam/model/UpdateGroupRequest.h>
#include <aws/iam/model/UpdateLoginProfileRequest.h>
#include <aws/iam/model/UpdateOpenIDConnectProviderThumbprintRequest.h>
#include <aws/iam/model/UpdateRoleRequest.h>
#include <aws/iam/model/UpdateRoleDescriptionRequest.h>
#include <aws/iam/model/UpdateSAMLProviderRequest.h>
#include <aws/iam/model/UpdateSSHPublicKeyRequest.h>
#include <aws/iam/model/UpdateServerCertificateRequest.h>
#include <aws/iam/model/UpdateServiceSpecificCredentialRequest.h>
#include <aws/iam/model/UpdateSigningCertificateRequest.h>
#include <aws/iam/model/UpdateUserRequest.h>
#include <aws/iam/model/UploadSSHPublicKeyRequest.h>
#include <aws/iam/model/UploadServerCertificateRequest.h>
#include <aws/iam/model/UploadSigningCertificateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IAM;
using namespace Aws::IAM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "iam";
static const char* ALLOCATION_TAG = "IAMClient";

IAMClient::IAMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::~IAMClient()
{
}

void IAMClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IAM");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IAMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IAMClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String IAMClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << IAMEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddClientIDToOpenIDConnectProviderOutcome IAMClient::AddClientIDToOpenIDConnectProvider(const AddClientIDToOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddClientIDToOpenIDConnectProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddClientIDToOpenIDConnectProviderOutcomeCallable IAMClient::AddClientIDToOpenIDConnectProviderCallable(const AddClientIDToOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddClientIDToOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddClientIDToOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientAddClientIDToOpenIDConnectProviderAsyncHelper(IAMClient const * const clientThis, const AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddClientIDToOpenIDConnectProvider(request), context);
}

void IAMClient::AddClientIDToOpenIDConnectProviderAsync(const AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientAddClientIDToOpenIDConnectProviderAsyncHelper( this, request, handler, context ); } );
}

AddRoleToInstanceProfileOutcome IAMClient::AddRoleToInstanceProfile(const AddRoleToInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddRoleToInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddRoleToInstanceProfileOutcomeCallable IAMClient::AddRoleToInstanceProfileCallable(const AddRoleToInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientAddRoleToInstanceProfileAsyncHelper(IAMClient const * const clientThis, const AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddRoleToInstanceProfile(request), context);
}

void IAMClient::AddRoleToInstanceProfileAsync(const AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientAddRoleToInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

AddUserToGroupOutcome IAMClient::AddUserToGroup(const AddUserToGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddUserToGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddUserToGroupOutcomeCallable IAMClient::AddUserToGroupCallable(const AddUserToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddUserToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddUserToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientAddUserToGroupAsyncHelper(IAMClient const * const clientThis, const AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddUserToGroup(request), context);
}

void IAMClient::AddUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientAddUserToGroupAsyncHelper( this, request, handler, context ); } );
}

AttachGroupPolicyOutcome IAMClient::AttachGroupPolicy(const AttachGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AttachGroupPolicyOutcomeCallable IAMClient::AttachGroupPolicyCallable(const AttachGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientAttachGroupPolicyAsyncHelper(IAMClient const * const clientThis, const AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachGroupPolicy(request), context);
}

void IAMClient::AttachGroupPolicyAsync(const AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientAttachGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

AttachRolePolicyOutcome IAMClient::AttachRolePolicy(const AttachRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachRolePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AttachRolePolicyOutcomeCallable IAMClient::AttachRolePolicyCallable(const AttachRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientAttachRolePolicyAsyncHelper(IAMClient const * const clientThis, const AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachRolePolicy(request), context);
}

void IAMClient::AttachRolePolicyAsync(const AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientAttachRolePolicyAsyncHelper( this, request, handler, context ); } );
}

AttachUserPolicyOutcome IAMClient::AttachUserPolicy(const AttachUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachUserPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AttachUserPolicyOutcomeCallable IAMClient::AttachUserPolicyCallable(const AttachUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientAttachUserPolicyAsyncHelper(IAMClient const * const clientThis, const AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachUserPolicy(request), context);
}

void IAMClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientAttachUserPolicyAsyncHelper( this, request, handler, context ); } );
}

ChangePasswordOutcome IAMClient::ChangePassword(const ChangePasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ChangePasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangePasswordOutcomeCallable IAMClient::ChangePasswordCallable(const ChangePasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangePasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangePassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientChangePasswordAsyncHelper(IAMClient const * const clientThis, const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ChangePassword(request), context);
}

void IAMClient::ChangePasswordAsync(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientChangePasswordAsyncHelper( this, request, handler, context ); } );
}

CreateAccessKeyOutcome IAMClient::CreateAccessKey(const CreateAccessKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAccessKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateAccessKeyOutcomeCallable IAMClient::CreateAccessKeyCallable(const CreateAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateAccessKeyAsyncHelper(IAMClient const * const clientThis, const CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccessKey(request), context);
}

void IAMClient::CreateAccessKeyAsync(const CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateAccessKeyAsyncHelper( this, request, handler, context ); } );
}

CreateAccountAliasOutcome IAMClient::CreateAccountAlias(const CreateAccountAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAccountAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateAccountAliasOutcomeCallable IAMClient::CreateAccountAliasCallable(const CreateAccountAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateAccountAliasAsyncHelper(IAMClient const * const clientThis, const CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccountAlias(request), context);
}

void IAMClient::CreateAccountAliasAsync(const CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateAccountAliasAsyncHelper( this, request, handler, context ); } );
}

CreateGroupOutcome IAMClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateGroupOutcomeCallable IAMClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateGroupAsyncHelper(IAMClient const * const clientThis, const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroup(request), context);
}

void IAMClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateGroupAsyncHelper( this, request, handler, context ); } );
}

CreateInstanceProfileOutcome IAMClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateInstanceProfileOutcomeCallable IAMClient::CreateInstanceProfileCallable(const CreateInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateInstanceProfileAsyncHelper(IAMClient const * const clientThis, const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstanceProfile(request), context);
}

void IAMClient::CreateInstanceProfileAsync(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

CreateLoginProfileOutcome IAMClient::CreateLoginProfile(const CreateLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLoginProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoginProfileOutcomeCallable IAMClient::CreateLoginProfileCallable(const CreateLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateLoginProfileAsyncHelper(IAMClient const * const clientThis, const CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLoginProfile(request), context);
}

void IAMClient::CreateLoginProfileAsync(const CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateLoginProfileAsyncHelper( this, request, handler, context ); } );
}

CreateOpenIDConnectProviderOutcome IAMClient::CreateOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOpenIDConnectProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateOpenIDConnectProviderOutcomeCallable IAMClient::CreateOpenIDConnectProviderCallable(const CreateOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateOpenIDConnectProviderAsyncHelper(IAMClient const * const clientThis, const CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOpenIDConnectProvider(request), context);
}

void IAMClient::CreateOpenIDConnectProviderAsync(const CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateOpenIDConnectProviderAsyncHelper( this, request, handler, context ); } );
}

CreatePolicyOutcome IAMClient::CreatePolicy(const CreatePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreatePolicyOutcomeCallable IAMClient::CreatePolicyCallable(const CreatePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreatePolicyAsyncHelper(IAMClient const * const clientThis, const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePolicy(request), context);
}

void IAMClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreatePolicyAsyncHelper( this, request, handler, context ); } );
}

CreatePolicyVersionOutcome IAMClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreatePolicyVersionOutcomeCallable IAMClient::CreatePolicyVersionCallable(const CreatePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreatePolicyVersionAsyncHelper(IAMClient const * const clientThis, const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePolicyVersion(request), context);
}

void IAMClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreatePolicyVersionAsyncHelper( this, request, handler, context ); } );
}

CreateRoleOutcome IAMClient::CreateRole(const CreateRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateRoleOutcomeCallable IAMClient::CreateRoleCallable(const CreateRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateRoleAsyncHelper(IAMClient const * const clientThis, const CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRole(request), context);
}

void IAMClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateRoleAsyncHelper( this, request, handler, context ); } );
}

CreateSAMLProviderOutcome IAMClient::CreateSAMLProvider(const CreateSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSAMLProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateSAMLProviderOutcomeCallable IAMClient::CreateSAMLProviderCallable(const CreateSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateSAMLProviderAsyncHelper(IAMClient const * const clientThis, const CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSAMLProvider(request), context);
}

void IAMClient::CreateSAMLProviderAsync(const CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateSAMLProviderAsyncHelper( this, request, handler, context ); } );
}

CreateServiceLinkedRoleOutcome IAMClient::CreateServiceLinkedRole(const CreateServiceLinkedRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceLinkedRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateServiceLinkedRoleOutcomeCallable IAMClient::CreateServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceLinkedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceLinkedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateServiceLinkedRoleAsyncHelper(IAMClient const * const clientThis, const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateServiceLinkedRole(request), context);
}

void IAMClient::CreateServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateServiceLinkedRoleAsyncHelper( this, request, handler, context ); } );
}

CreateServiceSpecificCredentialOutcome IAMClient::CreateServiceSpecificCredential(const CreateServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceSpecificCredentialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateServiceSpecificCredentialOutcomeCallable IAMClient::CreateServiceSpecificCredentialCallable(const CreateServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateServiceSpecificCredentialAsyncHelper(IAMClient const * const clientThis, const CreateServiceSpecificCredentialRequest& request, const CreateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateServiceSpecificCredential(request), context);
}

void IAMClient::CreateServiceSpecificCredentialAsync(const CreateServiceSpecificCredentialRequest& request, const CreateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateServiceSpecificCredentialAsyncHelper( this, request, handler, context ); } );
}

CreateUserOutcome IAMClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateUserOutcomeCallable IAMClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateUserAsyncHelper(IAMClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void IAMClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateUserAsyncHelper( this, request, handler, context ); } );
}

CreateVirtualMFADeviceOutcome IAMClient::CreateVirtualMFADevice(const CreateVirtualMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVirtualMFADeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateVirtualMFADeviceOutcomeCallable IAMClient::CreateVirtualMFADeviceCallable(const CreateVirtualMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientCreateVirtualMFADeviceAsyncHelper(IAMClient const * const clientThis, const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVirtualMFADevice(request), context);
}

void IAMClient::CreateVirtualMFADeviceAsync(const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientCreateVirtualMFADeviceAsyncHelper( this, request, handler, context ); } );
}

DeactivateMFADeviceOutcome IAMClient::DeactivateMFADevice(const DeactivateMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeactivateMFADeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeactivateMFADeviceOutcomeCallable IAMClient::DeactivateMFADeviceCallable(const DeactivateMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeactivateMFADeviceAsyncHelper(IAMClient const * const clientThis, const DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeactivateMFADevice(request), context);
}

void IAMClient::DeactivateMFADeviceAsync(const DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeactivateMFADeviceAsyncHelper( this, request, handler, context ); } );
}

DeleteAccessKeyOutcome IAMClient::DeleteAccessKey(const DeleteAccessKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccessKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAccessKeyOutcomeCallable IAMClient::DeleteAccessKeyCallable(const DeleteAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteAccessKeyAsyncHelper(IAMClient const * const clientThis, const DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccessKey(request), context);
}

void IAMClient::DeleteAccessKeyAsync(const DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteAccessKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteAccountAliasOutcome IAMClient::DeleteAccountAlias(const DeleteAccountAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccountAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAccountAliasOutcomeCallable IAMClient::DeleteAccountAliasCallable(const DeleteAccountAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteAccountAliasAsyncHelper(IAMClient const * const clientThis, const DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccountAlias(request), context);
}

void IAMClient::DeleteAccountAliasAsync(const DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteAccountAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteAccountPasswordPolicyOutcome IAMClient::DeleteAccountPasswordPolicy(const DeleteAccountPasswordPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccountPasswordPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAccountPasswordPolicyOutcomeCallable IAMClient::DeleteAccountPasswordPolicyCallable(const DeleteAccountPasswordPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountPasswordPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountPasswordPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteAccountPasswordPolicyAsyncHelper(IAMClient const * const clientThis, const DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccountPasswordPolicy(request), context);
}

void IAMClient::DeleteAccountPasswordPolicyAsync(const DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteAccountPasswordPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupOutcome IAMClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGroupOutcomeCallable IAMClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteGroupAsyncHelper(IAMClient const * const clientThis, const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroup(request), context);
}

void IAMClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupPolicyOutcome IAMClient::DeleteGroupPolicy(const DeleteGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteGroupPolicyOutcomeCallable IAMClient::DeleteGroupPolicyCallable(const DeleteGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteGroupPolicyAsyncHelper(IAMClient const * const clientThis, const DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroupPolicy(request), context);
}

void IAMClient::DeleteGroupPolicyAsync(const DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteInstanceProfileOutcome IAMClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInstanceProfileOutcomeCallable IAMClient::DeleteInstanceProfileCallable(const DeleteInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteInstanceProfileAsyncHelper(IAMClient const * const clientThis, const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInstanceProfile(request), context);
}

void IAMClient::DeleteInstanceProfileAsync(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteLoginProfileOutcome IAMClient::DeleteLoginProfile(const DeleteLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoginProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoginProfileOutcomeCallable IAMClient::DeleteLoginProfileCallable(const DeleteLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteLoginProfileAsyncHelper(IAMClient const * const clientThis, const DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoginProfile(request), context);
}

void IAMClient::DeleteLoginProfileAsync(const DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteLoginProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteOpenIDConnectProviderOutcome IAMClient::DeleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOpenIDConnectProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteOpenIDConnectProviderOutcomeCallable IAMClient::DeleteOpenIDConnectProviderCallable(const DeleteOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteOpenIDConnectProviderAsyncHelper(IAMClient const * const clientThis, const DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOpenIDConnectProvider(request), context);
}

void IAMClient::DeleteOpenIDConnectProviderAsync(const DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteOpenIDConnectProviderAsyncHelper( this, request, handler, context ); } );
}

DeletePolicyOutcome IAMClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeletePolicyOutcomeCallable IAMClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeletePolicyAsyncHelper(IAMClient const * const clientThis, const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePolicy(request), context);
}

void IAMClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeletePolicyAsyncHelper( this, request, handler, context ); } );
}

DeletePolicyVersionOutcome IAMClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeletePolicyVersionOutcomeCallable IAMClient::DeletePolicyVersionCallable(const DeletePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeletePolicyVersionAsyncHelper(IAMClient const * const clientThis, const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePolicyVersion(request), context);
}

void IAMClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeletePolicyVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteRoleOutcome IAMClient::DeleteRole(const DeleteRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRoleOutcomeCallable IAMClient::DeleteRoleCallable(const DeleteRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteRoleAsyncHelper(IAMClient const * const clientThis, const DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRole(request), context);
}

void IAMClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteRoleAsyncHelper( this, request, handler, context ); } );
}

DeleteRolePermissionsBoundaryOutcome IAMClient::DeleteRolePermissionsBoundary(const DeleteRolePermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRolePermissionsBoundaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRolePermissionsBoundaryOutcomeCallable IAMClient::DeleteRolePermissionsBoundaryCallable(const DeleteRolePermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRolePermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRolePermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteRolePermissionsBoundaryAsyncHelper(IAMClient const * const clientThis, const DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRolePermissionsBoundary(request), context);
}

void IAMClient::DeleteRolePermissionsBoundaryAsync(const DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteRolePermissionsBoundaryAsyncHelper( this, request, handler, context ); } );
}

DeleteRolePolicyOutcome IAMClient::DeleteRolePolicy(const DeleteRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRolePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRolePolicyOutcomeCallable IAMClient::DeleteRolePolicyCallable(const DeleteRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteRolePolicyAsyncHelper(IAMClient const * const clientThis, const DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRolePolicy(request), context);
}

void IAMClient::DeleteRolePolicyAsync(const DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteRolePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteSAMLProviderOutcome IAMClient::DeleteSAMLProvider(const DeleteSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSAMLProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSAMLProviderOutcomeCallable IAMClient::DeleteSAMLProviderCallable(const DeleteSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteSAMLProviderAsyncHelper(IAMClient const * const clientThis, const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSAMLProvider(request), context);
}

void IAMClient::DeleteSAMLProviderAsync(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteSAMLProviderAsyncHelper( this, request, handler, context ); } );
}

DeleteSSHPublicKeyOutcome IAMClient::DeleteSSHPublicKey(const DeleteSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSSHPublicKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSSHPublicKeyOutcomeCallable IAMClient::DeleteSSHPublicKeyCallable(const DeleteSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteSSHPublicKeyAsyncHelper(IAMClient const * const clientThis, const DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSSHPublicKey(request), context);
}

void IAMClient::DeleteSSHPublicKeyAsync(const DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteSSHPublicKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteServerCertificateOutcome IAMClient::DeleteServerCertificate(const DeleteServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServerCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteServerCertificateOutcomeCallable IAMClient::DeleteServerCertificateCallable(const DeleteServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteServerCertificateAsyncHelper(IAMClient const * const clientThis, const DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteServerCertificate(request), context);
}

void IAMClient::DeleteServerCertificateAsync(const DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteServerCertificateAsyncHelper( this, request, handler, context ); } );
}

DeleteServiceLinkedRoleOutcome IAMClient::DeleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceLinkedRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteServiceLinkedRoleOutcomeCallable IAMClient::DeleteServiceLinkedRoleCallable(const DeleteServiceLinkedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceLinkedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceLinkedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteServiceLinkedRoleAsyncHelper(IAMClient const * const clientThis, const DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteServiceLinkedRole(request), context);
}

void IAMClient::DeleteServiceLinkedRoleAsync(const DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteServiceLinkedRoleAsyncHelper( this, request, handler, context ); } );
}

DeleteServiceSpecificCredentialOutcome IAMClient::DeleteServiceSpecificCredential(const DeleteServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceSpecificCredentialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteServiceSpecificCredentialOutcomeCallable IAMClient::DeleteServiceSpecificCredentialCallable(const DeleteServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteServiceSpecificCredentialAsyncHelper(IAMClient const * const clientThis, const DeleteServiceSpecificCredentialRequest& request, const DeleteServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteServiceSpecificCredential(request), context);
}

void IAMClient::DeleteServiceSpecificCredentialAsync(const DeleteServiceSpecificCredentialRequest& request, const DeleteServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteServiceSpecificCredentialAsyncHelper( this, request, handler, context ); } );
}

DeleteSigningCertificateOutcome IAMClient::DeleteSigningCertificate(const DeleteSigningCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSigningCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSigningCertificateOutcomeCallable IAMClient::DeleteSigningCertificateCallable(const DeleteSigningCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSigningCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteSigningCertificateAsyncHelper(IAMClient const * const clientThis, const DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSigningCertificate(request), context);
}

void IAMClient::DeleteSigningCertificateAsync(const DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteSigningCertificateAsyncHelper( this, request, handler, context ); } );
}

DeleteUserOutcome IAMClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUserOutcomeCallable IAMClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteUserAsyncHelper(IAMClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void IAMClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteUserAsyncHelper( this, request, handler, context ); } );
}

DeleteUserPermissionsBoundaryOutcome IAMClient::DeleteUserPermissionsBoundary(const DeleteUserPermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserPermissionsBoundaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUserPermissionsBoundaryOutcomeCallable IAMClient::DeleteUserPermissionsBoundaryCallable(const DeleteUserPermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserPermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteUserPermissionsBoundaryAsyncHelper(IAMClient const * const clientThis, const DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserPermissionsBoundary(request), context);
}

void IAMClient::DeleteUserPermissionsBoundaryAsync(const DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteUserPermissionsBoundaryAsyncHelper( this, request, handler, context ); } );
}

DeleteUserPolicyOutcome IAMClient::DeleteUserPolicy(const DeleteUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUserPolicyOutcomeCallable IAMClient::DeleteUserPolicyCallable(const DeleteUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteUserPolicyAsyncHelper(IAMClient const * const clientThis, const DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserPolicy(request), context);
}

void IAMClient::DeleteUserPolicyAsync(const DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteUserPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteVirtualMFADeviceOutcome IAMClient::DeleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVirtualMFADeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVirtualMFADeviceOutcomeCallable IAMClient::DeleteVirtualMFADeviceCallable(const DeleteVirtualMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDeleteVirtualMFADeviceAsyncHelper(IAMClient const * const clientThis, const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVirtualMFADevice(request), context);
}

void IAMClient::DeleteVirtualMFADeviceAsync(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDeleteVirtualMFADeviceAsyncHelper( this, request, handler, context ); } );
}

DetachGroupPolicyOutcome IAMClient::DetachGroupPolicy(const DetachGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetachGroupPolicyOutcomeCallable IAMClient::DetachGroupPolicyCallable(const DetachGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDetachGroupPolicyAsyncHelper(IAMClient const * const clientThis, const DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachGroupPolicy(request), context);
}

void IAMClient::DetachGroupPolicyAsync(const DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDetachGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

DetachRolePolicyOutcome IAMClient::DetachRolePolicy(const DetachRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachRolePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetachRolePolicyOutcomeCallable IAMClient::DetachRolePolicyCallable(const DetachRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDetachRolePolicyAsyncHelper(IAMClient const * const clientThis, const DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachRolePolicy(request), context);
}

void IAMClient::DetachRolePolicyAsync(const DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDetachRolePolicyAsyncHelper( this, request, handler, context ); } );
}

DetachUserPolicyOutcome IAMClient::DetachUserPolicy(const DetachUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachUserPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DetachUserPolicyOutcomeCallable IAMClient::DetachUserPolicyCallable(const DetachUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientDetachUserPolicyAsyncHelper(IAMClient const * const clientThis, const DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachUserPolicy(request), context);
}

void IAMClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientDetachUserPolicyAsyncHelper( this, request, handler, context ); } );
}

EnableMFADeviceOutcome IAMClient::EnableMFADevice(const EnableMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableMFADeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableMFADeviceOutcomeCallable IAMClient::EnableMFADeviceCallable(const EnableMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientEnableMFADeviceAsyncHelper(IAMClient const * const clientThis, const EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableMFADevice(request), context);
}

void IAMClient::EnableMFADeviceAsync(const EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientEnableMFADeviceAsyncHelper( this, request, handler, context ); } );
}

GenerateCredentialReportOutcome IAMClient::GenerateCredentialReport(const GenerateCredentialReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateCredentialReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GenerateCredentialReportOutcomeCallable IAMClient::GenerateCredentialReportCallable(const GenerateCredentialReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateCredentialReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateCredentialReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGenerateCredentialReportAsyncHelper(IAMClient const * const clientThis, const GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateCredentialReport(request), context);
}

void IAMClient::GenerateCredentialReportAsync(const GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGenerateCredentialReportAsyncHelper( this, request, handler, context ); } );
}

GenerateOrganizationsAccessReportOutcome IAMClient::GenerateOrganizationsAccessReport(const GenerateOrganizationsAccessReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateOrganizationsAccessReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GenerateOrganizationsAccessReportOutcomeCallable IAMClient::GenerateOrganizationsAccessReportCallable(const GenerateOrganizationsAccessReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateOrganizationsAccessReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateOrganizationsAccessReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGenerateOrganizationsAccessReportAsyncHelper(IAMClient const * const clientThis, const GenerateOrganizationsAccessReportRequest& request, const GenerateOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateOrganizationsAccessReport(request), context);
}

void IAMClient::GenerateOrganizationsAccessReportAsync(const GenerateOrganizationsAccessReportRequest& request, const GenerateOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGenerateOrganizationsAccessReportAsyncHelper( this, request, handler, context ); } );
}

GenerateServiceLastAccessedDetailsOutcome IAMClient::GenerateServiceLastAccessedDetails(const GenerateServiceLastAccessedDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateServiceLastAccessedDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GenerateServiceLastAccessedDetailsOutcomeCallable IAMClient::GenerateServiceLastAccessedDetailsCallable(const GenerateServiceLastAccessedDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateServiceLastAccessedDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateServiceLastAccessedDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGenerateServiceLastAccessedDetailsAsyncHelper(IAMClient const * const clientThis, const GenerateServiceLastAccessedDetailsRequest& request, const GenerateServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateServiceLastAccessedDetails(request), context);
}

void IAMClient::GenerateServiceLastAccessedDetailsAsync(const GenerateServiceLastAccessedDetailsRequest& request, const GenerateServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGenerateServiceLastAccessedDetailsAsyncHelper( this, request, handler, context ); } );
}

GetAccessKeyLastUsedOutcome IAMClient::GetAccessKeyLastUsed(const GetAccessKeyLastUsedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccessKeyLastUsedOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetAccessKeyLastUsedOutcomeCallable IAMClient::GetAccessKeyLastUsedCallable(const GetAccessKeyLastUsedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessKeyLastUsedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessKeyLastUsed(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetAccessKeyLastUsedAsyncHelper(IAMClient const * const clientThis, const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccessKeyLastUsed(request), context);
}

void IAMClient::GetAccessKeyLastUsedAsync(const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetAccessKeyLastUsedAsyncHelper( this, request, handler, context ); } );
}

GetAccountAuthorizationDetailsOutcome IAMClient::GetAccountAuthorizationDetails(const GetAccountAuthorizationDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccountAuthorizationDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetAccountAuthorizationDetailsOutcomeCallable IAMClient::GetAccountAuthorizationDetailsCallable(const GetAccountAuthorizationDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountAuthorizationDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountAuthorizationDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetAccountAuthorizationDetailsAsyncHelper(IAMClient const * const clientThis, const GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountAuthorizationDetails(request), context);
}

void IAMClient::GetAccountAuthorizationDetailsAsync(const GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetAccountAuthorizationDetailsAsyncHelper( this, request, handler, context ); } );
}

GetAccountPasswordPolicyOutcome IAMClient::GetAccountPasswordPolicy(const GetAccountPasswordPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccountPasswordPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetAccountPasswordPolicyOutcomeCallable IAMClient::GetAccountPasswordPolicyCallable(const GetAccountPasswordPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountPasswordPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountPasswordPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetAccountPasswordPolicyAsyncHelper(IAMClient const * const clientThis, const GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountPasswordPolicy(request), context);
}

void IAMClient::GetAccountPasswordPolicyAsync(const GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetAccountPasswordPolicyAsyncHelper( this, request, handler, context ); } );
}

GetAccountSummaryOutcome IAMClient::GetAccountSummary(const GetAccountSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccountSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetAccountSummaryOutcomeCallable IAMClient::GetAccountSummaryCallable(const GetAccountSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetAccountSummaryAsyncHelper(IAMClient const * const clientThis, const GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountSummary(request), context);
}

void IAMClient::GetAccountSummaryAsync(const GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetAccountSummaryAsyncHelper( this, request, handler, context ); } );
}

GetContextKeysForCustomPolicyOutcome IAMClient::GetContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetContextKeysForCustomPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetContextKeysForCustomPolicyOutcomeCallable IAMClient::GetContextKeysForCustomPolicyCallable(const GetContextKeysForCustomPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContextKeysForCustomPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContextKeysForCustomPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetContextKeysForCustomPolicyAsyncHelper(IAMClient const * const clientThis, const GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContextKeysForCustomPolicy(request), context);
}

void IAMClient::GetContextKeysForCustomPolicyAsync(const GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetContextKeysForCustomPolicyAsyncHelper( this, request, handler, context ); } );
}

GetContextKeysForPrincipalPolicyOutcome IAMClient::GetContextKeysForPrincipalPolicy(const GetContextKeysForPrincipalPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetContextKeysForPrincipalPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetContextKeysForPrincipalPolicyOutcomeCallable IAMClient::GetContextKeysForPrincipalPolicyCallable(const GetContextKeysForPrincipalPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContextKeysForPrincipalPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContextKeysForPrincipalPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetContextKeysForPrincipalPolicyAsyncHelper(IAMClient const * const clientThis, const GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContextKeysForPrincipalPolicy(request), context);
}

void IAMClient::GetContextKeysForPrincipalPolicyAsync(const GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetContextKeysForPrincipalPolicyAsyncHelper( this, request, handler, context ); } );
}

GetCredentialReportOutcome IAMClient::GetCredentialReport(const GetCredentialReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCredentialReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetCredentialReportOutcomeCallable IAMClient::GetCredentialReportCallable(const GetCredentialReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCredentialReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCredentialReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetCredentialReportAsyncHelper(IAMClient const * const clientThis, const GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCredentialReport(request), context);
}

void IAMClient::GetCredentialReportAsync(const GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetCredentialReportAsyncHelper( this, request, handler, context ); } );
}

GetGroupOutcome IAMClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetGroupOutcomeCallable IAMClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetGroupAsyncHelper(IAMClient const * const clientThis, const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroup(request), context);
}

void IAMClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetGroupAsyncHelper( this, request, handler, context ); } );
}

GetGroupPolicyOutcome IAMClient::GetGroupPolicy(const GetGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetGroupPolicyOutcomeCallable IAMClient::GetGroupPolicyCallable(const GetGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetGroupPolicyAsyncHelper(IAMClient const * const clientThis, const GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroupPolicy(request), context);
}

void IAMClient::GetGroupPolicyAsync(const GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

GetInstanceProfileOutcome IAMClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetInstanceProfileOutcomeCallable IAMClient::GetInstanceProfileCallable(const GetInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetInstanceProfileAsyncHelper(IAMClient const * const clientThis, const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceProfile(request), context);
}

void IAMClient::GetInstanceProfileAsync(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

GetLoginProfileOutcome IAMClient::GetLoginProfile(const GetLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLoginProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetLoginProfileOutcomeCallable IAMClient::GetLoginProfileCallable(const GetLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetLoginProfileAsyncHelper(IAMClient const * const clientThis, const GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoginProfile(request), context);
}

void IAMClient::GetLoginProfileAsync(const GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetLoginProfileAsyncHelper( this, request, handler, context ); } );
}

GetOpenIDConnectProviderOutcome IAMClient::GetOpenIDConnectProvider(const GetOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOpenIDConnectProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetOpenIDConnectProviderOutcomeCallable IAMClient::GetOpenIDConnectProviderCallable(const GetOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetOpenIDConnectProviderAsyncHelper(IAMClient const * const clientThis, const GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOpenIDConnectProvider(request), context);
}

void IAMClient::GetOpenIDConnectProviderAsync(const GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetOpenIDConnectProviderAsyncHelper( this, request, handler, context ); } );
}

GetOrganizationsAccessReportOutcome IAMClient::GetOrganizationsAccessReport(const GetOrganizationsAccessReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOrganizationsAccessReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetOrganizationsAccessReportOutcomeCallable IAMClient::GetOrganizationsAccessReportCallable(const GetOrganizationsAccessReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationsAccessReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationsAccessReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetOrganizationsAccessReportAsyncHelper(IAMClient const * const clientThis, const GetOrganizationsAccessReportRequest& request, const GetOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOrganizationsAccessReport(request), context);
}

void IAMClient::GetOrganizationsAccessReportAsync(const GetOrganizationsAccessReportRequest& request, const GetOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetOrganizationsAccessReportAsyncHelper( this, request, handler, context ); } );
}

GetPolicyOutcome IAMClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetPolicyOutcomeCallable IAMClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetPolicyAsyncHelper(IAMClient const * const clientThis, const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPolicy(request), context);
}

void IAMClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetPolicyAsyncHelper( this, request, handler, context ); } );
}

GetPolicyVersionOutcome IAMClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetPolicyVersionOutcomeCallable IAMClient::GetPolicyVersionCallable(const GetPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetPolicyVersionAsyncHelper(IAMClient const * const clientThis, const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPolicyVersion(request), context);
}

void IAMClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetPolicyVersionAsyncHelper( this, request, handler, context ); } );
}

GetRoleOutcome IAMClient::GetRole(const GetRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetRoleOutcomeCallable IAMClient::GetRoleCallable(const GetRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetRoleAsyncHelper(IAMClient const * const clientThis, const GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRole(request), context);
}

void IAMClient::GetRoleAsync(const GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetRoleAsyncHelper( this, request, handler, context ); } );
}

GetRolePolicyOutcome IAMClient::GetRolePolicy(const GetRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRolePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetRolePolicyOutcomeCallable IAMClient::GetRolePolicyCallable(const GetRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetRolePolicyAsyncHelper(IAMClient const * const clientThis, const GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRolePolicy(request), context);
}

void IAMClient::GetRolePolicyAsync(const GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetRolePolicyAsyncHelper( this, request, handler, context ); } );
}

GetSAMLProviderOutcome IAMClient::GetSAMLProvider(const GetSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSAMLProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetSAMLProviderOutcomeCallable IAMClient::GetSAMLProviderCallable(const GetSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetSAMLProviderAsyncHelper(IAMClient const * const clientThis, const GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSAMLProvider(request), context);
}

void IAMClient::GetSAMLProviderAsync(const GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetSAMLProviderAsyncHelper( this, request, handler, context ); } );
}

GetSSHPublicKeyOutcome IAMClient::GetSSHPublicKey(const GetSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSSHPublicKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetSSHPublicKeyOutcomeCallable IAMClient::GetSSHPublicKeyCallable(const GetSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetSSHPublicKeyAsyncHelper(IAMClient const * const clientThis, const GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSSHPublicKey(request), context);
}

void IAMClient::GetSSHPublicKeyAsync(const GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetSSHPublicKeyAsyncHelper( this, request, handler, context ); } );
}

GetServerCertificateOutcome IAMClient::GetServerCertificate(const GetServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServerCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetServerCertificateOutcomeCallable IAMClient::GetServerCertificateCallable(const GetServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetServerCertificateAsyncHelper(IAMClient const * const clientThis, const GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServerCertificate(request), context);
}

void IAMClient::GetServerCertificateAsync(const GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetServerCertificateAsyncHelper( this, request, handler, context ); } );
}

GetServiceLastAccessedDetailsOutcome IAMClient::GetServiceLastAccessedDetails(const GetServiceLastAccessedDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceLastAccessedDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetServiceLastAccessedDetailsOutcomeCallable IAMClient::GetServiceLastAccessedDetailsCallable(const GetServiceLastAccessedDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceLastAccessedDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceLastAccessedDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetServiceLastAccessedDetailsAsyncHelper(IAMClient const * const clientThis, const GetServiceLastAccessedDetailsRequest& request, const GetServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServiceLastAccessedDetails(request), context);
}

void IAMClient::GetServiceLastAccessedDetailsAsync(const GetServiceLastAccessedDetailsRequest& request, const GetServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetServiceLastAccessedDetailsAsyncHelper( this, request, handler, context ); } );
}

GetServiceLastAccessedDetailsWithEntitiesOutcome IAMClient::GetServiceLastAccessedDetailsWithEntities(const GetServiceLastAccessedDetailsWithEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceLastAccessedDetailsWithEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetServiceLastAccessedDetailsWithEntitiesOutcomeCallable IAMClient::GetServiceLastAccessedDetailsWithEntitiesCallable(const GetServiceLastAccessedDetailsWithEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceLastAccessedDetailsWithEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceLastAccessedDetailsWithEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetServiceLastAccessedDetailsWithEntitiesAsyncHelper(IAMClient const * const clientThis, const GetServiceLastAccessedDetailsWithEntitiesRequest& request, const GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServiceLastAccessedDetailsWithEntities(request), context);
}

void IAMClient::GetServiceLastAccessedDetailsWithEntitiesAsync(const GetServiceLastAccessedDetailsWithEntitiesRequest& request, const GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetServiceLastAccessedDetailsWithEntitiesAsyncHelper( this, request, handler, context ); } );
}

GetServiceLinkedRoleDeletionStatusOutcome IAMClient::GetServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceLinkedRoleDeletionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetServiceLinkedRoleDeletionStatusOutcomeCallable IAMClient::GetServiceLinkedRoleDeletionStatusCallable(const GetServiceLinkedRoleDeletionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceLinkedRoleDeletionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceLinkedRoleDeletionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetServiceLinkedRoleDeletionStatusAsyncHelper(IAMClient const * const clientThis, const GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServiceLinkedRoleDeletionStatus(request), context);
}

void IAMClient::GetServiceLinkedRoleDeletionStatusAsync(const GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetServiceLinkedRoleDeletionStatusAsyncHelper( this, request, handler, context ); } );
}

GetUserOutcome IAMClient::GetUser(const GetUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetUserOutcomeCallable IAMClient::GetUserCallable(const GetUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetUserAsyncHelper(IAMClient const * const clientThis, const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUser(request), context);
}

void IAMClient::GetUserAsync(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetUserAsyncHelper( this, request, handler, context ); } );
}

GetUserPolicyOutcome IAMClient::GetUserPolicy(const GetUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUserPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetUserPolicyOutcomeCallable IAMClient::GetUserPolicyCallable(const GetUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientGetUserPolicyAsyncHelper(IAMClient const * const clientThis, const GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUserPolicy(request), context);
}

void IAMClient::GetUserPolicyAsync(const GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientGetUserPolicyAsyncHelper( this, request, handler, context ); } );
}

ListAccessKeysOutcome IAMClient::ListAccessKeys(const ListAccessKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccessKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListAccessKeysOutcomeCallable IAMClient::ListAccessKeysCallable(const ListAccessKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListAccessKeysAsyncHelper(IAMClient const * const clientThis, const ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccessKeys(request), context);
}

void IAMClient::ListAccessKeysAsync(const ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListAccessKeysAsyncHelper( this, request, handler, context ); } );
}

ListAccountAliasesOutcome IAMClient::ListAccountAliases(const ListAccountAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListAccountAliasesOutcomeCallable IAMClient::ListAccountAliasesCallable(const ListAccountAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListAccountAliasesAsyncHelper(IAMClient const * const clientThis, const ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountAliases(request), context);
}

void IAMClient::ListAccountAliasesAsync(const ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListAccountAliasesAsyncHelper( this, request, handler, context ); } );
}

ListAttachedGroupPoliciesOutcome IAMClient::ListAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAttachedGroupPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListAttachedGroupPoliciesOutcomeCallable IAMClient::ListAttachedGroupPoliciesCallable(const ListAttachedGroupPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedGroupPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedGroupPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListAttachedGroupPoliciesAsyncHelper(IAMClient const * const clientThis, const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAttachedGroupPolicies(request), context);
}

void IAMClient::ListAttachedGroupPoliciesAsync(const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListAttachedGroupPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListAttachedRolePoliciesOutcome IAMClient::ListAttachedRolePolicies(const ListAttachedRolePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAttachedRolePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListAttachedRolePoliciesOutcomeCallable IAMClient::ListAttachedRolePoliciesCallable(const ListAttachedRolePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedRolePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedRolePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListAttachedRolePoliciesAsyncHelper(IAMClient const * const clientThis, const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAttachedRolePolicies(request), context);
}

void IAMClient::ListAttachedRolePoliciesAsync(const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListAttachedRolePoliciesAsyncHelper( this, request, handler, context ); } );
}

ListAttachedUserPoliciesOutcome IAMClient::ListAttachedUserPolicies(const ListAttachedUserPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAttachedUserPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListAttachedUserPoliciesOutcomeCallable IAMClient::ListAttachedUserPoliciesCallable(const ListAttachedUserPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedUserPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedUserPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListAttachedUserPoliciesAsyncHelper(IAMClient const * const clientThis, const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAttachedUserPolicies(request), context);
}

void IAMClient::ListAttachedUserPoliciesAsync(const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListAttachedUserPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListEntitiesForPolicyOutcome IAMClient::ListEntitiesForPolicy(const ListEntitiesForPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntitiesForPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListEntitiesForPolicyOutcomeCallable IAMClient::ListEntitiesForPolicyCallable(const ListEntitiesForPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesForPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitiesForPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListEntitiesForPolicyAsyncHelper(IAMClient const * const clientThis, const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEntitiesForPolicy(request), context);
}

void IAMClient::ListEntitiesForPolicyAsync(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListEntitiesForPolicyAsyncHelper( this, request, handler, context ); } );
}

ListGroupPoliciesOutcome IAMClient::ListGroupPolicies(const ListGroupPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListGroupPoliciesOutcomeCallable IAMClient::ListGroupPoliciesCallable(const ListGroupPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListGroupPoliciesAsyncHelper(IAMClient const * const clientThis, const ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupPolicies(request), context);
}

void IAMClient::ListGroupPoliciesAsync(const ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListGroupPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListGroupsOutcome IAMClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListGroupsOutcomeCallable IAMClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListGroupsAsyncHelper(IAMClient const * const clientThis, const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroups(request), context);
}

void IAMClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListGroupsAsyncHelper( this, request, handler, context ); } );
}

ListGroupsForUserOutcome IAMClient::ListGroupsForUser(const ListGroupsForUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupsForUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListGroupsForUserOutcomeCallable IAMClient::ListGroupsForUserCallable(const ListGroupsForUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsForUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupsForUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListGroupsForUserAsyncHelper(IAMClient const * const clientThis, const ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupsForUser(request), context);
}

void IAMClient::ListGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListGroupsForUserAsyncHelper( this, request, handler, context ); } );
}

ListInstanceProfileTagsOutcome IAMClient::ListInstanceProfileTags(const ListInstanceProfileTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstanceProfileTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListInstanceProfileTagsOutcomeCallable IAMClient::ListInstanceProfileTagsCallable(const ListInstanceProfileTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceProfileTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceProfileTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListInstanceProfileTagsAsyncHelper(IAMClient const * const clientThis, const ListInstanceProfileTagsRequest& request, const ListInstanceProfileTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceProfileTags(request), context);
}

void IAMClient::ListInstanceProfileTagsAsync(const ListInstanceProfileTagsRequest& request, const ListInstanceProfileTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListInstanceProfileTagsAsyncHelper( this, request, handler, context ); } );
}

ListInstanceProfilesOutcome IAMClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstanceProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListInstanceProfilesOutcomeCallable IAMClient::ListInstanceProfilesCallable(const ListInstanceProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListInstanceProfilesAsyncHelper(IAMClient const * const clientThis, const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceProfiles(request), context);
}

void IAMClient::ListInstanceProfilesAsync(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListInstanceProfilesAsyncHelper( this, request, handler, context ); } );
}

ListInstanceProfilesForRoleOutcome IAMClient::ListInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstanceProfilesForRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListInstanceProfilesForRoleOutcomeCallable IAMClient::ListInstanceProfilesForRoleCallable(const ListInstanceProfilesForRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceProfilesForRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceProfilesForRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListInstanceProfilesForRoleAsyncHelper(IAMClient const * const clientThis, const ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceProfilesForRole(request), context);
}

void IAMClient::ListInstanceProfilesForRoleAsync(const ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListInstanceProfilesForRoleAsyncHelper( this, request, handler, context ); } );
}

ListMFADeviceTagsOutcome IAMClient::ListMFADeviceTags(const ListMFADeviceTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMFADeviceTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListMFADeviceTagsOutcomeCallable IAMClient::ListMFADeviceTagsCallable(const ListMFADeviceTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMFADeviceTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMFADeviceTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListMFADeviceTagsAsyncHelper(IAMClient const * const clientThis, const ListMFADeviceTagsRequest& request, const ListMFADeviceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMFADeviceTags(request), context);
}

void IAMClient::ListMFADeviceTagsAsync(const ListMFADeviceTagsRequest& request, const ListMFADeviceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListMFADeviceTagsAsyncHelper( this, request, handler, context ); } );
}

ListMFADevicesOutcome IAMClient::ListMFADevices(const ListMFADevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMFADevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListMFADevicesOutcomeCallable IAMClient::ListMFADevicesCallable(const ListMFADevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMFADevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMFADevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListMFADevicesAsyncHelper(IAMClient const * const clientThis, const ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMFADevices(request), context);
}

void IAMClient::ListMFADevicesAsync(const ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListMFADevicesAsyncHelper( this, request, handler, context ); } );
}

ListOpenIDConnectProviderTagsOutcome IAMClient::ListOpenIDConnectProviderTags(const ListOpenIDConnectProviderTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOpenIDConnectProviderTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListOpenIDConnectProviderTagsOutcomeCallable IAMClient::ListOpenIDConnectProviderTagsCallable(const ListOpenIDConnectProviderTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpenIDConnectProviderTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpenIDConnectProviderTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListOpenIDConnectProviderTagsAsyncHelper(IAMClient const * const clientThis, const ListOpenIDConnectProviderTagsRequest& request, const ListOpenIDConnectProviderTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOpenIDConnectProviderTags(request), context);
}

void IAMClient::ListOpenIDConnectProviderTagsAsync(const ListOpenIDConnectProviderTagsRequest& request, const ListOpenIDConnectProviderTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListOpenIDConnectProviderTagsAsyncHelper( this, request, handler, context ); } );
}

ListOpenIDConnectProvidersOutcome IAMClient::ListOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOpenIDConnectProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListOpenIDConnectProvidersOutcomeCallable IAMClient::ListOpenIDConnectProvidersCallable(const ListOpenIDConnectProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpenIDConnectProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpenIDConnectProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListOpenIDConnectProvidersAsyncHelper(IAMClient const * const clientThis, const ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOpenIDConnectProviders(request), context);
}

void IAMClient::ListOpenIDConnectProvidersAsync(const ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListOpenIDConnectProvidersAsyncHelper( this, request, handler, context ); } );
}

ListPoliciesOutcome IAMClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPoliciesOutcomeCallable IAMClient::ListPoliciesCallable(const ListPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListPoliciesAsyncHelper(IAMClient const * const clientThis, const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPolicies(request), context);
}

void IAMClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListPoliciesGrantingServiceAccessOutcome IAMClient::ListPoliciesGrantingServiceAccess(const ListPoliciesGrantingServiceAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPoliciesGrantingServiceAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPoliciesGrantingServiceAccessOutcomeCallable IAMClient::ListPoliciesGrantingServiceAccessCallable(const ListPoliciesGrantingServiceAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesGrantingServiceAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPoliciesGrantingServiceAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListPoliciesGrantingServiceAccessAsyncHelper(IAMClient const * const clientThis, const ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPoliciesGrantingServiceAccess(request), context);
}

void IAMClient::ListPoliciesGrantingServiceAccessAsync(const ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListPoliciesGrantingServiceAccessAsyncHelper( this, request, handler, context ); } );
}

ListPolicyTagsOutcome IAMClient::ListPolicyTags(const ListPolicyTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPolicyTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPolicyTagsOutcomeCallable IAMClient::ListPolicyTagsCallable(const ListPolicyTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPolicyTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicyTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListPolicyTagsAsyncHelper(IAMClient const * const clientThis, const ListPolicyTagsRequest& request, const ListPolicyTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPolicyTags(request), context);
}

void IAMClient::ListPolicyTagsAsync(const ListPolicyTagsRequest& request, const ListPolicyTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListPolicyTagsAsyncHelper( this, request, handler, context ); } );
}

ListPolicyVersionsOutcome IAMClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPolicyVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPolicyVersionsOutcomeCallable IAMClient::ListPolicyVersionsCallable(const ListPolicyVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPolicyVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicyVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListPolicyVersionsAsyncHelper(IAMClient const * const clientThis, const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPolicyVersions(request), context);
}

void IAMClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListPolicyVersionsAsyncHelper( this, request, handler, context ); } );
}

ListRolePoliciesOutcome IAMClient::ListRolePolicies(const ListRolePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRolePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListRolePoliciesOutcomeCallable IAMClient::ListRolePoliciesCallable(const ListRolePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRolePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRolePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListRolePoliciesAsyncHelper(IAMClient const * const clientThis, const ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRolePolicies(request), context);
}

void IAMClient::ListRolePoliciesAsync(const ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListRolePoliciesAsyncHelper( this, request, handler, context ); } );
}

ListRoleTagsOutcome IAMClient::ListRoleTags(const ListRoleTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRoleTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListRoleTagsOutcomeCallable IAMClient::ListRoleTagsCallable(const ListRoleTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoleTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoleTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListRoleTagsAsyncHelper(IAMClient const * const clientThis, const ListRoleTagsRequest& request, const ListRoleTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRoleTags(request), context);
}

void IAMClient::ListRoleTagsAsync(const ListRoleTagsRequest& request, const ListRoleTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListRoleTagsAsyncHelper( this, request, handler, context ); } );
}

ListRolesOutcome IAMClient::ListRoles(const ListRolesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRolesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListRolesOutcomeCallable IAMClient::ListRolesCallable(const ListRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListRolesAsyncHelper(IAMClient const * const clientThis, const ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRoles(request), context);
}

void IAMClient::ListRolesAsync(const ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListRolesAsyncHelper( this, request, handler, context ); } );
}

ListSAMLProviderTagsOutcome IAMClient::ListSAMLProviderTags(const ListSAMLProviderTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSAMLProviderTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListSAMLProviderTagsOutcomeCallable IAMClient::ListSAMLProviderTagsCallable(const ListSAMLProviderTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSAMLProviderTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSAMLProviderTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListSAMLProviderTagsAsyncHelper(IAMClient const * const clientThis, const ListSAMLProviderTagsRequest& request, const ListSAMLProviderTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSAMLProviderTags(request), context);
}

void IAMClient::ListSAMLProviderTagsAsync(const ListSAMLProviderTagsRequest& request, const ListSAMLProviderTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListSAMLProviderTagsAsyncHelper( this, request, handler, context ); } );
}

ListSAMLProvidersOutcome IAMClient::ListSAMLProviders(const ListSAMLProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSAMLProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListSAMLProvidersOutcomeCallable IAMClient::ListSAMLProvidersCallable(const ListSAMLProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSAMLProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSAMLProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListSAMLProvidersAsyncHelper(IAMClient const * const clientThis, const ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSAMLProviders(request), context);
}

void IAMClient::ListSAMLProvidersAsync(const ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListSAMLProvidersAsyncHelper( this, request, handler, context ); } );
}

ListSSHPublicKeysOutcome IAMClient::ListSSHPublicKeys(const ListSSHPublicKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSSHPublicKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListSSHPublicKeysOutcomeCallable IAMClient::ListSSHPublicKeysCallable(const ListSSHPublicKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSSHPublicKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSSHPublicKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListSSHPublicKeysAsyncHelper(IAMClient const * const clientThis, const ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSSHPublicKeys(request), context);
}

void IAMClient::ListSSHPublicKeysAsync(const ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListSSHPublicKeysAsyncHelper( this, request, handler, context ); } );
}

ListServerCertificateTagsOutcome IAMClient::ListServerCertificateTags(const ListServerCertificateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServerCertificateTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListServerCertificateTagsOutcomeCallable IAMClient::ListServerCertificateTagsCallable(const ListServerCertificateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServerCertificateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServerCertificateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListServerCertificateTagsAsyncHelper(IAMClient const * const clientThis, const ListServerCertificateTagsRequest& request, const ListServerCertificateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServerCertificateTags(request), context);
}

void IAMClient::ListServerCertificateTagsAsync(const ListServerCertificateTagsRequest& request, const ListServerCertificateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListServerCertificateTagsAsyncHelper( this, request, handler, context ); } );
}

ListServerCertificatesOutcome IAMClient::ListServerCertificates(const ListServerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServerCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListServerCertificatesOutcomeCallable IAMClient::ListServerCertificatesCallable(const ListServerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListServerCertificatesAsyncHelper(IAMClient const * const clientThis, const ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServerCertificates(request), context);
}

void IAMClient::ListServerCertificatesAsync(const ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListServerCertificatesAsyncHelper( this, request, handler, context ); } );
}

ListServiceSpecificCredentialsOutcome IAMClient::ListServiceSpecificCredentials(const ListServiceSpecificCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceSpecificCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListServiceSpecificCredentialsOutcomeCallable IAMClient::ListServiceSpecificCredentialsCallable(const ListServiceSpecificCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceSpecificCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceSpecificCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListServiceSpecificCredentialsAsyncHelper(IAMClient const * const clientThis, const ListServiceSpecificCredentialsRequest& request, const ListServiceSpecificCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServiceSpecificCredentials(request), context);
}

void IAMClient::ListServiceSpecificCredentialsAsync(const ListServiceSpecificCredentialsRequest& request, const ListServiceSpecificCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListServiceSpecificCredentialsAsyncHelper( this, request, handler, context ); } );
}

ListSigningCertificatesOutcome IAMClient::ListSigningCertificates(const ListSigningCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSigningCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListSigningCertificatesOutcomeCallable IAMClient::ListSigningCertificatesCallable(const ListSigningCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListSigningCertificatesAsyncHelper(IAMClient const * const clientThis, const ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSigningCertificates(request), context);
}

void IAMClient::ListSigningCertificatesAsync(const ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListSigningCertificatesAsyncHelper( this, request, handler, context ); } );
}

ListUserPoliciesOutcome IAMClient::ListUserPolicies(const ListUserPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUserPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListUserPoliciesOutcomeCallable IAMClient::ListUserPoliciesCallable(const ListUserPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListUserPoliciesAsyncHelper(IAMClient const * const clientThis, const ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUserPolicies(request), context);
}

void IAMClient::ListUserPoliciesAsync(const ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListUserPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListUserTagsOutcome IAMClient::ListUserTags(const ListUserTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUserTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListUserTagsOutcomeCallable IAMClient::ListUserTagsCallable(const ListUserTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListUserTagsAsyncHelper(IAMClient const * const clientThis, const ListUserTagsRequest& request, const ListUserTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUserTags(request), context);
}

void IAMClient::ListUserTagsAsync(const ListUserTagsRequest& request, const ListUserTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListUserTagsAsyncHelper( this, request, handler, context ); } );
}

ListUsersOutcome IAMClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListUsersOutcomeCallable IAMClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListUsersAsyncHelper(IAMClient const * const clientThis, const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsers(request), context);
}

void IAMClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListUsersAsyncHelper( this, request, handler, context ); } );
}

ListVirtualMFADevicesOutcome IAMClient::ListVirtualMFADevices(const ListVirtualMFADevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVirtualMFADevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListVirtualMFADevicesOutcomeCallable IAMClient::ListVirtualMFADevicesCallable(const ListVirtualMFADevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualMFADevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualMFADevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientListVirtualMFADevicesAsyncHelper(IAMClient const * const clientThis, const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVirtualMFADevices(request), context);
}

void IAMClient::ListVirtualMFADevicesAsync(const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientListVirtualMFADevicesAsyncHelper( this, request, handler, context ); } );
}

PutGroupPolicyOutcome IAMClient::PutGroupPolicy(const PutGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutGroupPolicyOutcomeCallable IAMClient::PutGroupPolicyCallable(const PutGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientPutGroupPolicyAsyncHelper(IAMClient const * const clientThis, const PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutGroupPolicy(request), context);
}

void IAMClient::PutGroupPolicyAsync(const PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientPutGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

PutRolePermissionsBoundaryOutcome IAMClient::PutRolePermissionsBoundary(const PutRolePermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRolePermissionsBoundaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutRolePermissionsBoundaryOutcomeCallable IAMClient::PutRolePermissionsBoundaryCallable(const PutRolePermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRolePermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRolePermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientPutRolePermissionsBoundaryAsyncHelper(IAMClient const * const clientThis, const PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRolePermissionsBoundary(request), context);
}

void IAMClient::PutRolePermissionsBoundaryAsync(const PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientPutRolePermissionsBoundaryAsyncHelper( this, request, handler, context ); } );
}

PutRolePolicyOutcome IAMClient::PutRolePolicy(const PutRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRolePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutRolePolicyOutcomeCallable IAMClient::PutRolePolicyCallable(const PutRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientPutRolePolicyAsyncHelper(IAMClient const * const clientThis, const PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRolePolicy(request), context);
}

void IAMClient::PutRolePolicyAsync(const PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientPutRolePolicyAsyncHelper( this, request, handler, context ); } );
}

PutUserPermissionsBoundaryOutcome IAMClient::PutUserPermissionsBoundary(const PutUserPermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutUserPermissionsBoundaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutUserPermissionsBoundaryOutcomeCallable IAMClient::PutUserPermissionsBoundaryCallable(const PutUserPermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutUserPermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutUserPermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientPutUserPermissionsBoundaryAsyncHelper(IAMClient const * const clientThis, const PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutUserPermissionsBoundary(request), context);
}

void IAMClient::PutUserPermissionsBoundaryAsync(const PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientPutUserPermissionsBoundaryAsyncHelper( this, request, handler, context ); } );
}

PutUserPolicyOutcome IAMClient::PutUserPolicy(const PutUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutUserPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutUserPolicyOutcomeCallable IAMClient::PutUserPolicyCallable(const PutUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientPutUserPolicyAsyncHelper(IAMClient const * const clientThis, const PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutUserPolicy(request), context);
}

void IAMClient::PutUserPolicyAsync(const PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientPutUserPolicyAsyncHelper( this, request, handler, context ); } );
}

RemoveClientIDFromOpenIDConnectProviderOutcome IAMClient::RemoveClientIDFromOpenIDConnectProvider(const RemoveClientIDFromOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveClientIDFromOpenIDConnectProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveClientIDFromOpenIDConnectProviderOutcomeCallable IAMClient::RemoveClientIDFromOpenIDConnectProviderCallable(const RemoveClientIDFromOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveClientIDFromOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveClientIDFromOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientRemoveClientIDFromOpenIDConnectProviderAsyncHelper(IAMClient const * const clientThis, const RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveClientIDFromOpenIDConnectProvider(request), context);
}

void IAMClient::RemoveClientIDFromOpenIDConnectProviderAsync(const RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientRemoveClientIDFromOpenIDConnectProviderAsyncHelper( this, request, handler, context ); } );
}

RemoveRoleFromInstanceProfileOutcome IAMClient::RemoveRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveRoleFromInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveRoleFromInstanceProfileOutcomeCallable IAMClient::RemoveRoleFromInstanceProfileCallable(const RemoveRoleFromInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientRemoveRoleFromInstanceProfileAsyncHelper(IAMClient const * const clientThis, const RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveRoleFromInstanceProfile(request), context);
}

void IAMClient::RemoveRoleFromInstanceProfileAsync(const RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientRemoveRoleFromInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

RemoveUserFromGroupOutcome IAMClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveUserFromGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveUserFromGroupOutcomeCallable IAMClient::RemoveUserFromGroupCallable(const RemoveUserFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveUserFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveUserFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientRemoveUserFromGroupAsyncHelper(IAMClient const * const clientThis, const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveUserFromGroup(request), context);
}

void IAMClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientRemoveUserFromGroupAsyncHelper( this, request, handler, context ); } );
}

ResetServiceSpecificCredentialOutcome IAMClient::ResetServiceSpecificCredential(const ResetServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetServiceSpecificCredentialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResetServiceSpecificCredentialOutcomeCallable IAMClient::ResetServiceSpecificCredentialCallable(const ResetServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientResetServiceSpecificCredentialAsyncHelper(IAMClient const * const clientThis, const ResetServiceSpecificCredentialRequest& request, const ResetServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetServiceSpecificCredential(request), context);
}

void IAMClient::ResetServiceSpecificCredentialAsync(const ResetServiceSpecificCredentialRequest& request, const ResetServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientResetServiceSpecificCredentialAsyncHelper( this, request, handler, context ); } );
}

ResyncMFADeviceOutcome IAMClient::ResyncMFADevice(const ResyncMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResyncMFADeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ResyncMFADeviceOutcomeCallable IAMClient::ResyncMFADeviceCallable(const ResyncMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResyncMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResyncMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientResyncMFADeviceAsyncHelper(IAMClient const * const clientThis, const ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResyncMFADevice(request), context);
}

void IAMClient::ResyncMFADeviceAsync(const ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientResyncMFADeviceAsyncHelper( this, request, handler, context ); } );
}

SetDefaultPolicyVersionOutcome IAMClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetDefaultPolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetDefaultPolicyVersionOutcomeCallable IAMClient::SetDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientSetDefaultPolicyVersionAsyncHelper(IAMClient const * const clientThis, const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetDefaultPolicyVersion(request), context);
}

void IAMClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientSetDefaultPolicyVersionAsyncHelper( this, request, handler, context ); } );
}

SetSecurityTokenServicePreferencesOutcome IAMClient::SetSecurityTokenServicePreferences(const SetSecurityTokenServicePreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetSecurityTokenServicePreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetSecurityTokenServicePreferencesOutcomeCallable IAMClient::SetSecurityTokenServicePreferencesCallable(const SetSecurityTokenServicePreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSecurityTokenServicePreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSecurityTokenServicePreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientSetSecurityTokenServicePreferencesAsyncHelper(IAMClient const * const clientThis, const SetSecurityTokenServicePreferencesRequest& request, const SetSecurityTokenServicePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetSecurityTokenServicePreferences(request), context);
}

void IAMClient::SetSecurityTokenServicePreferencesAsync(const SetSecurityTokenServicePreferencesRequest& request, const SetSecurityTokenServicePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientSetSecurityTokenServicePreferencesAsyncHelper( this, request, handler, context ); } );
}

SimulateCustomPolicyOutcome IAMClient::SimulateCustomPolicy(const SimulateCustomPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SimulateCustomPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SimulateCustomPolicyOutcomeCallable IAMClient::SimulateCustomPolicyCallable(const SimulateCustomPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SimulateCustomPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SimulateCustomPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientSimulateCustomPolicyAsyncHelper(IAMClient const * const clientThis, const SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SimulateCustomPolicy(request), context);
}

void IAMClient::SimulateCustomPolicyAsync(const SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientSimulateCustomPolicyAsyncHelper( this, request, handler, context ); } );
}

SimulatePrincipalPolicyOutcome IAMClient::SimulatePrincipalPolicy(const SimulatePrincipalPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SimulatePrincipalPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SimulatePrincipalPolicyOutcomeCallable IAMClient::SimulatePrincipalPolicyCallable(const SimulatePrincipalPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SimulatePrincipalPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SimulatePrincipalPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientSimulatePrincipalPolicyAsyncHelper(IAMClient const * const clientThis, const SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SimulatePrincipalPolicy(request), context);
}

void IAMClient::SimulatePrincipalPolicyAsync(const SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientSimulatePrincipalPolicyAsyncHelper( this, request, handler, context ); } );
}

TagInstanceProfileOutcome IAMClient::TagInstanceProfile(const TagInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagInstanceProfileOutcomeCallable IAMClient::TagInstanceProfileCallable(const TagInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagInstanceProfileAsyncHelper(IAMClient const * const clientThis, const TagInstanceProfileRequest& request, const TagInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagInstanceProfile(request), context);
}

void IAMClient::TagInstanceProfileAsync(const TagInstanceProfileRequest& request, const TagInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

TagMFADeviceOutcome IAMClient::TagMFADevice(const TagMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagMFADeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagMFADeviceOutcomeCallable IAMClient::TagMFADeviceCallable(const TagMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagMFADeviceAsyncHelper(IAMClient const * const clientThis, const TagMFADeviceRequest& request, const TagMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagMFADevice(request), context);
}

void IAMClient::TagMFADeviceAsync(const TagMFADeviceRequest& request, const TagMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagMFADeviceAsyncHelper( this, request, handler, context ); } );
}

TagOpenIDConnectProviderOutcome IAMClient::TagOpenIDConnectProvider(const TagOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagOpenIDConnectProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagOpenIDConnectProviderOutcomeCallable IAMClient::TagOpenIDConnectProviderCallable(const TagOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagOpenIDConnectProviderAsyncHelper(IAMClient const * const clientThis, const TagOpenIDConnectProviderRequest& request, const TagOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagOpenIDConnectProvider(request), context);
}

void IAMClient::TagOpenIDConnectProviderAsync(const TagOpenIDConnectProviderRequest& request, const TagOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagOpenIDConnectProviderAsyncHelper( this, request, handler, context ); } );
}

TagPolicyOutcome IAMClient::TagPolicy(const TagPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagPolicyOutcomeCallable IAMClient::TagPolicyCallable(const TagPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagPolicyAsyncHelper(IAMClient const * const clientThis, const TagPolicyRequest& request, const TagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagPolicy(request), context);
}

void IAMClient::TagPolicyAsync(const TagPolicyRequest& request, const TagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagPolicyAsyncHelper( this, request, handler, context ); } );
}

TagRoleOutcome IAMClient::TagRole(const TagRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagRoleOutcomeCallable IAMClient::TagRoleCallable(const TagRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagRoleAsyncHelper(IAMClient const * const clientThis, const TagRoleRequest& request, const TagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagRole(request), context);
}

void IAMClient::TagRoleAsync(const TagRoleRequest& request, const TagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagRoleAsyncHelper( this, request, handler, context ); } );
}

TagSAMLProviderOutcome IAMClient::TagSAMLProvider(const TagSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagSAMLProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagSAMLProviderOutcomeCallable IAMClient::TagSAMLProviderCallable(const TagSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagSAMLProviderAsyncHelper(IAMClient const * const clientThis, const TagSAMLProviderRequest& request, const TagSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagSAMLProvider(request), context);
}

void IAMClient::TagSAMLProviderAsync(const TagSAMLProviderRequest& request, const TagSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagSAMLProviderAsyncHelper( this, request, handler, context ); } );
}

TagServerCertificateOutcome IAMClient::TagServerCertificate(const TagServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagServerCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagServerCertificateOutcomeCallable IAMClient::TagServerCertificateCallable(const TagServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagServerCertificateAsyncHelper(IAMClient const * const clientThis, const TagServerCertificateRequest& request, const TagServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagServerCertificate(request), context);
}

void IAMClient::TagServerCertificateAsync(const TagServerCertificateRequest& request, const TagServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagServerCertificateAsyncHelper( this, request, handler, context ); } );
}

TagUserOutcome IAMClient::TagUser(const TagUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagUserOutcomeCallable IAMClient::TagUserCallable(const TagUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientTagUserAsyncHelper(IAMClient const * const clientThis, const TagUserRequest& request, const TagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagUser(request), context);
}

void IAMClient::TagUserAsync(const TagUserRequest& request, const TagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientTagUserAsyncHelper( this, request, handler, context ); } );
}

UntagInstanceProfileOutcome IAMClient::UntagInstanceProfile(const UntagInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagInstanceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagInstanceProfileOutcomeCallable IAMClient::UntagInstanceProfileCallable(const UntagInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagInstanceProfileAsyncHelper(IAMClient const * const clientThis, const UntagInstanceProfileRequest& request, const UntagInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagInstanceProfile(request), context);
}

void IAMClient::UntagInstanceProfileAsync(const UntagInstanceProfileRequest& request, const UntagInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagInstanceProfileAsyncHelper( this, request, handler, context ); } );
}

UntagMFADeviceOutcome IAMClient::UntagMFADevice(const UntagMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagMFADeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagMFADeviceOutcomeCallable IAMClient::UntagMFADeviceCallable(const UntagMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagMFADeviceAsyncHelper(IAMClient const * const clientThis, const UntagMFADeviceRequest& request, const UntagMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagMFADevice(request), context);
}

void IAMClient::UntagMFADeviceAsync(const UntagMFADeviceRequest& request, const UntagMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagMFADeviceAsyncHelper( this, request, handler, context ); } );
}

UntagOpenIDConnectProviderOutcome IAMClient::UntagOpenIDConnectProvider(const UntagOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagOpenIDConnectProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagOpenIDConnectProviderOutcomeCallable IAMClient::UntagOpenIDConnectProviderCallable(const UntagOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagOpenIDConnectProviderAsyncHelper(IAMClient const * const clientThis, const UntagOpenIDConnectProviderRequest& request, const UntagOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagOpenIDConnectProvider(request), context);
}

void IAMClient::UntagOpenIDConnectProviderAsync(const UntagOpenIDConnectProviderRequest& request, const UntagOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagOpenIDConnectProviderAsyncHelper( this, request, handler, context ); } );
}

UntagPolicyOutcome IAMClient::UntagPolicy(const UntagPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagPolicyOutcomeCallable IAMClient::UntagPolicyCallable(const UntagPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagPolicyAsyncHelper(IAMClient const * const clientThis, const UntagPolicyRequest& request, const UntagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagPolicy(request), context);
}

void IAMClient::UntagPolicyAsync(const UntagPolicyRequest& request, const UntagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagPolicyAsyncHelper( this, request, handler, context ); } );
}

UntagRoleOutcome IAMClient::UntagRole(const UntagRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagRoleOutcomeCallable IAMClient::UntagRoleCallable(const UntagRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagRoleAsyncHelper(IAMClient const * const clientThis, const UntagRoleRequest& request, const UntagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagRole(request), context);
}

void IAMClient::UntagRoleAsync(const UntagRoleRequest& request, const UntagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagRoleAsyncHelper( this, request, handler, context ); } );
}

UntagSAMLProviderOutcome IAMClient::UntagSAMLProvider(const UntagSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagSAMLProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagSAMLProviderOutcomeCallable IAMClient::UntagSAMLProviderCallable(const UntagSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagSAMLProviderAsyncHelper(IAMClient const * const clientThis, const UntagSAMLProviderRequest& request, const UntagSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagSAMLProvider(request), context);
}

void IAMClient::UntagSAMLProviderAsync(const UntagSAMLProviderRequest& request, const UntagSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagSAMLProviderAsyncHelper( this, request, handler, context ); } );
}

UntagServerCertificateOutcome IAMClient::UntagServerCertificate(const UntagServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagServerCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagServerCertificateOutcomeCallable IAMClient::UntagServerCertificateCallable(const UntagServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagServerCertificateAsyncHelper(IAMClient const * const clientThis, const UntagServerCertificateRequest& request, const UntagServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagServerCertificate(request), context);
}

void IAMClient::UntagServerCertificateAsync(const UntagServerCertificateRequest& request, const UntagServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagServerCertificateAsyncHelper( this, request, handler, context ); } );
}

UntagUserOutcome IAMClient::UntagUser(const UntagUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagUserOutcomeCallable IAMClient::UntagUserCallable(const UntagUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUntagUserAsyncHelper(IAMClient const * const clientThis, const UntagUserRequest& request, const UntagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagUser(request), context);
}

void IAMClient::UntagUserAsync(const UntagUserRequest& request, const UntagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUntagUserAsyncHelper( this, request, handler, context ); } );
}

UpdateAccessKeyOutcome IAMClient::UpdateAccessKey(const UpdateAccessKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAccessKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateAccessKeyOutcomeCallable IAMClient::UpdateAccessKeyCallable(const UpdateAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateAccessKeyAsyncHelper(IAMClient const * const clientThis, const UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccessKey(request), context);
}

void IAMClient::UpdateAccessKeyAsync(const UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateAccessKeyAsyncHelper( this, request, handler, context ); } );
}

UpdateAccountPasswordPolicyOutcome IAMClient::UpdateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAccountPasswordPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateAccountPasswordPolicyOutcomeCallable IAMClient::UpdateAccountPasswordPolicyCallable(const UpdateAccountPasswordPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountPasswordPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountPasswordPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateAccountPasswordPolicyAsyncHelper(IAMClient const * const clientThis, const UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccountPasswordPolicy(request), context);
}

void IAMClient::UpdateAccountPasswordPolicyAsync(const UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateAccountPasswordPolicyAsyncHelper( this, request, handler, context ); } );
}

UpdateAssumeRolePolicyOutcome IAMClient::UpdateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAssumeRolePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateAssumeRolePolicyOutcomeCallable IAMClient::UpdateAssumeRolePolicyCallable(const UpdateAssumeRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssumeRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssumeRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateAssumeRolePolicyAsyncHelper(IAMClient const * const clientThis, const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssumeRolePolicy(request), context);
}

void IAMClient::UpdateAssumeRolePolicyAsync(const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateAssumeRolePolicyAsyncHelper( this, request, handler, context ); } );
}

UpdateGroupOutcome IAMClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateGroupOutcomeCallable IAMClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateGroupAsyncHelper(IAMClient const * const clientThis, const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGroup(request), context);
}

void IAMClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateLoginProfileOutcome IAMClient::UpdateLoginProfile(const UpdateLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLoginProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateLoginProfileOutcomeCallable IAMClient::UpdateLoginProfileCallable(const UpdateLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateLoginProfileAsyncHelper(IAMClient const * const clientThis, const UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLoginProfile(request), context);
}

void IAMClient::UpdateLoginProfileAsync(const UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateLoginProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateOpenIDConnectProviderThumbprintOutcome IAMClient::UpdateOpenIDConnectProviderThumbprint(const UpdateOpenIDConnectProviderThumbprintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateOpenIDConnectProviderThumbprintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateOpenIDConnectProviderThumbprintOutcomeCallable IAMClient::UpdateOpenIDConnectProviderThumbprintCallable(const UpdateOpenIDConnectProviderThumbprintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOpenIDConnectProviderThumbprintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOpenIDConnectProviderThumbprint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateOpenIDConnectProviderThumbprintAsyncHelper(IAMClient const * const clientThis, const UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOpenIDConnectProviderThumbprint(request), context);
}

void IAMClient::UpdateOpenIDConnectProviderThumbprintAsync(const UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateOpenIDConnectProviderThumbprintAsyncHelper( this, request, handler, context ); } );
}

UpdateRoleOutcome IAMClient::UpdateRole(const UpdateRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRoleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateRoleOutcomeCallable IAMClient::UpdateRoleCallable(const UpdateRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateRoleAsyncHelper(IAMClient const * const clientThis, const UpdateRoleRequest& request, const UpdateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRole(request), context);
}

void IAMClient::UpdateRoleAsync(const UpdateRoleRequest& request, const UpdateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateRoleAsyncHelper( this, request, handler, context ); } );
}

UpdateRoleDescriptionOutcome IAMClient::UpdateRoleDescription(const UpdateRoleDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRoleDescriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateRoleDescriptionOutcomeCallable IAMClient::UpdateRoleDescriptionCallable(const UpdateRoleDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoleDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoleDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateRoleDescriptionAsyncHelper(IAMClient const * const clientThis, const UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRoleDescription(request), context);
}

void IAMClient::UpdateRoleDescriptionAsync(const UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateRoleDescriptionAsyncHelper( this, request, handler, context ); } );
}

UpdateSAMLProviderOutcome IAMClient::UpdateSAMLProvider(const UpdateSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSAMLProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateSAMLProviderOutcomeCallable IAMClient::UpdateSAMLProviderCallable(const UpdateSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateSAMLProviderAsyncHelper(IAMClient const * const clientThis, const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSAMLProvider(request), context);
}

void IAMClient::UpdateSAMLProviderAsync(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateSAMLProviderAsyncHelper( this, request, handler, context ); } );
}

UpdateSSHPublicKeyOutcome IAMClient::UpdateSSHPublicKey(const UpdateSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSSHPublicKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateSSHPublicKeyOutcomeCallable IAMClient::UpdateSSHPublicKeyCallable(const UpdateSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateSSHPublicKeyAsyncHelper(IAMClient const * const clientThis, const UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSSHPublicKey(request), context);
}

void IAMClient::UpdateSSHPublicKeyAsync(const UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateSSHPublicKeyAsyncHelper( this, request, handler, context ); } );
}

UpdateServerCertificateOutcome IAMClient::UpdateServerCertificate(const UpdateServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServerCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateServerCertificateOutcomeCallable IAMClient::UpdateServerCertificateCallable(const UpdateServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateServerCertificateAsyncHelper(IAMClient const * const clientThis, const UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServerCertificate(request), context);
}

void IAMClient::UpdateServerCertificateAsync(const UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateServerCertificateAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceSpecificCredentialOutcome IAMClient::UpdateServiceSpecificCredential(const UpdateServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceSpecificCredentialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateServiceSpecificCredentialOutcomeCallable IAMClient::UpdateServiceSpecificCredentialCallable(const UpdateServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateServiceSpecificCredentialAsyncHelper(IAMClient const * const clientThis, const UpdateServiceSpecificCredentialRequest& request, const UpdateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServiceSpecificCredential(request), context);
}

void IAMClient::UpdateServiceSpecificCredentialAsync(const UpdateServiceSpecificCredentialRequest& request, const UpdateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateServiceSpecificCredentialAsyncHelper( this, request, handler, context ); } );
}

UpdateSigningCertificateOutcome IAMClient::UpdateSigningCertificate(const UpdateSigningCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSigningCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateSigningCertificateOutcomeCallable IAMClient::UpdateSigningCertificateCallable(const UpdateSigningCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSigningCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateSigningCertificateAsyncHelper(IAMClient const * const clientThis, const UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSigningCertificate(request), context);
}

void IAMClient::UpdateSigningCertificateAsync(const UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateSigningCertificateAsyncHelper( this, request, handler, context ); } );
}

UpdateUserOutcome IAMClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateUserOutcomeCallable IAMClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUpdateUserAsyncHelper(IAMClient const * const clientThis, const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUser(request), context);
}

void IAMClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUpdateUserAsyncHelper( this, request, handler, context ); } );
}

UploadSSHPublicKeyOutcome IAMClient::UploadSSHPublicKey(const UploadSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UploadSSHPublicKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UploadSSHPublicKeyOutcomeCallable IAMClient::UploadSSHPublicKeyCallable(const UploadSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUploadSSHPublicKeyAsyncHelper(IAMClient const * const clientThis, const UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UploadSSHPublicKey(request), context);
}

void IAMClient::UploadSSHPublicKeyAsync(const UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUploadSSHPublicKeyAsyncHelper( this, request, handler, context ); } );
}

UploadServerCertificateOutcome IAMClient::UploadServerCertificate(const UploadServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UploadServerCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UploadServerCertificateOutcomeCallable IAMClient::UploadServerCertificateCallable(const UploadServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUploadServerCertificateAsyncHelper(IAMClient const * const clientThis, const UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UploadServerCertificate(request), context);
}

void IAMClient::UploadServerCertificateAsync(const UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUploadServerCertificateAsyncHelper( this, request, handler, context ); } );
}

UploadSigningCertificateOutcome IAMClient::UploadSigningCertificate(const UploadSigningCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UploadSigningCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UploadSigningCertificateOutcomeCallable IAMClient::UploadSigningCertificateCallable(const UploadSigningCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadSigningCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClientUploadSigningCertificateAsyncHelper(IAMClient const * const clientThis, const UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UploadSigningCertificate(request), context);
}

void IAMClient::UploadSigningCertificateAsync(const UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IAMClientUploadSigningCertificateAsyncHelper( this, request, handler, context ); } );
}

