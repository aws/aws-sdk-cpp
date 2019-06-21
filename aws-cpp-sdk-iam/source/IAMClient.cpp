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
#include <aws/iam/model/ListInstanceProfilesRequest.h>
#include <aws/iam/model/ListInstanceProfilesForRoleRequest.h>
#include <aws/iam/model/ListMFADevicesRequest.h>
#include <aws/iam/model/ListOpenIDConnectProvidersRequest.h>
#include <aws/iam/model/ListPoliciesRequest.h>
#include <aws/iam/model/ListPoliciesGrantingServiceAccessRequest.h>
#include <aws/iam/model/ListPolicyVersionsRequest.h>
#include <aws/iam/model/ListRolePoliciesRequest.h>
#include <aws/iam/model/ListRoleTagsRequest.h>
#include <aws/iam/model/ListRolesRequest.h>
#include <aws/iam/model/ListSAMLProvidersRequest.h>
#include <aws/iam/model/ListSSHPublicKeysRequest.h>
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
#include <aws/iam/model/TagRoleRequest.h>
#include <aws/iam/model/TagUserRequest.h>
#include <aws/iam/model/UntagRoleRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::~IAMClient()
{
}

void IAMClient::init(const ClientConfiguration& config)
{
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
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

AddClientIDToOpenIDConnectProviderOutcome IAMClient::AddClientIDToOpenIDConnectProvider(const AddClientIDToOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddClientIDToOpenIDConnectProviderOutcome(NoResult());
  }
  else
  {
    return AddClientIDToOpenIDConnectProviderOutcome(outcome.GetError());
  }
}

AddClientIDToOpenIDConnectProviderOutcomeCallable IAMClient::AddClientIDToOpenIDConnectProviderCallable(const AddClientIDToOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddClientIDToOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddClientIDToOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::AddClientIDToOpenIDConnectProviderAsync(const AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddClientIDToOpenIDConnectProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::AddClientIDToOpenIDConnectProviderAsyncHelper(const AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddClientIDToOpenIDConnectProvider(request), context);
}

AddRoleToInstanceProfileOutcome IAMClient::AddRoleToInstanceProfile(const AddRoleToInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddRoleToInstanceProfileOutcome(NoResult());
  }
  else
  {
    return AddRoleToInstanceProfileOutcome(outcome.GetError());
  }
}

AddRoleToInstanceProfileOutcomeCallable IAMClient::AddRoleToInstanceProfileCallable(const AddRoleToInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRoleToInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRoleToInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::AddRoleToInstanceProfileAsync(const AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddRoleToInstanceProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::AddRoleToInstanceProfileAsyncHelper(const AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddRoleToInstanceProfile(request), context);
}

AddUserToGroupOutcome IAMClient::AddUserToGroup(const AddUserToGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddUserToGroupOutcome(NoResult());
  }
  else
  {
    return AddUserToGroupOutcome(outcome.GetError());
  }
}

AddUserToGroupOutcomeCallable IAMClient::AddUserToGroupCallable(const AddUserToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddUserToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddUserToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::AddUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddUserToGroupAsyncHelper( request, handler, context ); } );
}

void IAMClient::AddUserToGroupAsyncHelper(const AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddUserToGroup(request), context);
}

AttachGroupPolicyOutcome IAMClient::AttachGroupPolicy(const AttachGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachGroupPolicyOutcome(NoResult());
  }
  else
  {
    return AttachGroupPolicyOutcome(outcome.GetError());
  }
}

AttachGroupPolicyOutcomeCallable IAMClient::AttachGroupPolicyCallable(const AttachGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::AttachGroupPolicyAsync(const AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachGroupPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::AttachGroupPolicyAsyncHelper(const AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachGroupPolicy(request), context);
}

AttachRolePolicyOutcome IAMClient::AttachRolePolicy(const AttachRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachRolePolicyOutcome(NoResult());
  }
  else
  {
    return AttachRolePolicyOutcome(outcome.GetError());
  }
}

AttachRolePolicyOutcomeCallable IAMClient::AttachRolePolicyCallable(const AttachRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::AttachRolePolicyAsync(const AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachRolePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::AttachRolePolicyAsyncHelper(const AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachRolePolicy(request), context);
}

AttachUserPolicyOutcome IAMClient::AttachUserPolicy(const AttachUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachUserPolicyOutcome(NoResult());
  }
  else
  {
    return AttachUserPolicyOutcome(outcome.GetError());
  }
}

AttachUserPolicyOutcomeCallable IAMClient::AttachUserPolicyCallable(const AttachUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachUserPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::AttachUserPolicyAsyncHelper(const AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachUserPolicy(request), context);
}

ChangePasswordOutcome IAMClient::ChangePassword(const ChangePasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ChangePasswordOutcome(NoResult());
  }
  else
  {
    return ChangePasswordOutcome(outcome.GetError());
  }
}

ChangePasswordOutcomeCallable IAMClient::ChangePasswordCallable(const ChangePasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangePasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangePassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ChangePasswordAsync(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangePasswordAsyncHelper( request, handler, context ); } );
}

void IAMClient::ChangePasswordAsyncHelper(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangePassword(request), context);
}

CreateAccessKeyOutcome IAMClient::CreateAccessKey(const CreateAccessKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAccessKeyOutcome(CreateAccessKeyResult(outcome.GetResult()));
  }
  else
  {
    return CreateAccessKeyOutcome(outcome.GetError());
  }
}

CreateAccessKeyOutcomeCallable IAMClient::CreateAccessKeyCallable(const CreateAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateAccessKeyAsync(const CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccessKeyAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateAccessKeyAsyncHelper(const CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccessKey(request), context);
}

CreateAccountAliasOutcome IAMClient::CreateAccountAlias(const CreateAccountAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAccountAliasOutcome(NoResult());
  }
  else
  {
    return CreateAccountAliasOutcome(outcome.GetError());
  }
}

CreateAccountAliasOutcomeCallable IAMClient::CreateAccountAliasCallable(const CreateAccountAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateAccountAliasAsync(const CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccountAliasAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateAccountAliasAsyncHelper(const CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccountAlias(request), context);
}

CreateGroupOutcome IAMClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateGroupOutcome(CreateGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateGroupOutcome(outcome.GetError());
  }
}

CreateGroupOutcomeCallable IAMClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGroupAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateGroupAsyncHelper(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroup(request), context);
}

CreateInstanceProfileOutcome IAMClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInstanceProfileOutcome(CreateInstanceProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateInstanceProfileOutcome(outcome.GetError());
  }
}

CreateInstanceProfileOutcomeCallable IAMClient::CreateInstanceProfileCallable(const CreateInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateInstanceProfileAsync(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstanceProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateInstanceProfileAsyncHelper(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstanceProfile(request), context);
}

CreateLoginProfileOutcome IAMClient::CreateLoginProfile(const CreateLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLoginProfileOutcome(CreateLoginProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoginProfileOutcome(outcome.GetError());
  }
}

CreateLoginProfileOutcomeCallable IAMClient::CreateLoginProfileCallable(const CreateLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateLoginProfileAsync(const CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoginProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateLoginProfileAsyncHelper(const CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoginProfile(request), context);
}

CreateOpenIDConnectProviderOutcome IAMClient::CreateOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateOpenIDConnectProviderOutcome(CreateOpenIDConnectProviderResult(outcome.GetResult()));
  }
  else
  {
    return CreateOpenIDConnectProviderOutcome(outcome.GetError());
  }
}

CreateOpenIDConnectProviderOutcomeCallable IAMClient::CreateOpenIDConnectProviderCallable(const CreateOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateOpenIDConnectProviderAsync(const CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOpenIDConnectProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateOpenIDConnectProviderAsyncHelper(const CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOpenIDConnectProvider(request), context);
}

CreatePolicyOutcome IAMClient::CreatePolicy(const CreatePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePolicyOutcome(CreatePolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreatePolicyOutcome(outcome.GetError());
  }
}

CreatePolicyOutcomeCallable IAMClient::CreatePolicyCallable(const CreatePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreatePolicyAsyncHelper(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicy(request), context);
}

CreatePolicyVersionOutcome IAMClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePolicyVersionOutcome(CreatePolicyVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreatePolicyVersionOutcome(outcome.GetError());
  }
}

CreatePolicyVersionOutcomeCallable IAMClient::CreatePolicyVersionCallable(const CreatePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePolicyVersionAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreatePolicyVersionAsyncHelper(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicyVersion(request), context);
}

CreateRoleOutcome IAMClient::CreateRole(const CreateRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateRoleOutcome(CreateRoleResult(outcome.GetResult()));
  }
  else
  {
    return CreateRoleOutcome(outcome.GetError());
  }
}

CreateRoleOutcomeCallable IAMClient::CreateRoleCallable(const CreateRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateRoleAsyncHelper(const CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRole(request), context);
}

CreateSAMLProviderOutcome IAMClient::CreateSAMLProvider(const CreateSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSAMLProviderOutcome(CreateSAMLProviderResult(outcome.GetResult()));
  }
  else
  {
    return CreateSAMLProviderOutcome(outcome.GetError());
  }
}

CreateSAMLProviderOutcomeCallable IAMClient::CreateSAMLProviderCallable(const CreateSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateSAMLProviderAsync(const CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSAMLProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateSAMLProviderAsyncHelper(const CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSAMLProvider(request), context);
}

CreateServiceLinkedRoleOutcome IAMClient::CreateServiceLinkedRole(const CreateServiceLinkedRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.GetResult()));
  }
  else
  {
    return CreateServiceLinkedRoleOutcome(outcome.GetError());
  }
}

CreateServiceLinkedRoleOutcomeCallable IAMClient::CreateServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceLinkedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceLinkedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServiceLinkedRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateServiceLinkedRoleAsyncHelper(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateServiceLinkedRole(request), context);
}

CreateServiceSpecificCredentialOutcome IAMClient::CreateServiceSpecificCredential(const CreateServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateServiceSpecificCredentialOutcome(CreateServiceSpecificCredentialResult(outcome.GetResult()));
  }
  else
  {
    return CreateServiceSpecificCredentialOutcome(outcome.GetError());
  }
}

CreateServiceSpecificCredentialOutcomeCallable IAMClient::CreateServiceSpecificCredentialCallable(const CreateServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateServiceSpecificCredentialAsync(const CreateServiceSpecificCredentialRequest& request, const CreateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServiceSpecificCredentialAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateServiceSpecificCredentialAsyncHelper(const CreateServiceSpecificCredentialRequest& request, const CreateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateServiceSpecificCredential(request), context);
}

CreateUserOutcome IAMClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateUserOutcome(CreateUserResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserOutcome(outcome.GetError());
  }
}

CreateUserOutcomeCallable IAMClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

CreateVirtualMFADeviceOutcome IAMClient::CreateVirtualMFADevice(const CreateVirtualMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVirtualMFADeviceOutcome(CreateVirtualMFADeviceResult(outcome.GetResult()));
  }
  else
  {
    return CreateVirtualMFADeviceOutcome(outcome.GetError());
  }
}

CreateVirtualMFADeviceOutcomeCallable IAMClient::CreateVirtualMFADeviceCallable(const CreateVirtualMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::CreateVirtualMFADeviceAsync(const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVirtualMFADeviceAsyncHelper( request, handler, context ); } );
}

void IAMClient::CreateVirtualMFADeviceAsyncHelper(const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualMFADevice(request), context);
}

DeactivateMFADeviceOutcome IAMClient::DeactivateMFADevice(const DeactivateMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeactivateMFADeviceOutcome(NoResult());
  }
  else
  {
    return DeactivateMFADeviceOutcome(outcome.GetError());
  }
}

DeactivateMFADeviceOutcomeCallable IAMClient::DeactivateMFADeviceCallable(const DeactivateMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeactivateMFADeviceAsync(const DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeactivateMFADeviceAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeactivateMFADeviceAsyncHelper(const DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivateMFADevice(request), context);
}

DeleteAccessKeyOutcome IAMClient::DeleteAccessKey(const DeleteAccessKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAccessKeyOutcome(NoResult());
  }
  else
  {
    return DeleteAccessKeyOutcome(outcome.GetError());
  }
}

DeleteAccessKeyOutcomeCallable IAMClient::DeleteAccessKeyCallable(const DeleteAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteAccessKeyAsync(const DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccessKeyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteAccessKeyAsyncHelper(const DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccessKey(request), context);
}

DeleteAccountAliasOutcome IAMClient::DeleteAccountAlias(const DeleteAccountAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAccountAliasOutcome(NoResult());
  }
  else
  {
    return DeleteAccountAliasOutcome(outcome.GetError());
  }
}

DeleteAccountAliasOutcomeCallable IAMClient::DeleteAccountAliasCallable(const DeleteAccountAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteAccountAliasAsync(const DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccountAliasAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteAccountAliasAsyncHelper(const DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccountAlias(request), context);
}

DeleteAccountPasswordPolicyOutcome IAMClient::DeleteAccountPasswordPolicy(const DeleteAccountPasswordPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAccountPasswordPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteAccountPasswordPolicyOutcome(outcome.GetError());
  }
}

DeleteAccountPasswordPolicyOutcomeCallable IAMClient::DeleteAccountPasswordPolicyCallable(const DeleteAccountPasswordPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountPasswordPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountPasswordPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteAccountPasswordPolicyAsync(const DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccountPasswordPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteAccountPasswordPolicyAsyncHelper(const DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccountPasswordPolicy(request), context);
}

DeleteGroupOutcome IAMClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteGroupOutcome(NoResult());
  }
  else
  {
    return DeleteGroupOutcome(outcome.GetError());
  }
}

DeleteGroupOutcomeCallable IAMClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGroupAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteGroupAsyncHelper(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroup(request), context);
}

DeleteGroupPolicyOutcome IAMClient::DeleteGroupPolicy(const DeleteGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteGroupPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteGroupPolicyOutcome(outcome.GetError());
  }
}

DeleteGroupPolicyOutcomeCallable IAMClient::DeleteGroupPolicyCallable(const DeleteGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteGroupPolicyAsync(const DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGroupPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteGroupPolicyAsyncHelper(const DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroupPolicy(request), context);
}

DeleteInstanceProfileOutcome IAMClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteInstanceProfileOutcome(NoResult());
  }
  else
  {
    return DeleteInstanceProfileOutcome(outcome.GetError());
  }
}

DeleteInstanceProfileOutcomeCallable IAMClient::DeleteInstanceProfileCallable(const DeleteInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteInstanceProfileAsync(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteInstanceProfileAsyncHelper(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstanceProfile(request), context);
}

DeleteLoginProfileOutcome IAMClient::DeleteLoginProfile(const DeleteLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLoginProfileOutcome(NoResult());
  }
  else
  {
    return DeleteLoginProfileOutcome(outcome.GetError());
  }
}

DeleteLoginProfileOutcomeCallable IAMClient::DeleteLoginProfileCallable(const DeleteLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteLoginProfileAsync(const DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoginProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteLoginProfileAsyncHelper(const DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoginProfile(request), context);
}

DeleteOpenIDConnectProviderOutcome IAMClient::DeleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteOpenIDConnectProviderOutcome(NoResult());
  }
  else
  {
    return DeleteOpenIDConnectProviderOutcome(outcome.GetError());
  }
}

DeleteOpenIDConnectProviderOutcomeCallable IAMClient::DeleteOpenIDConnectProviderCallable(const DeleteOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteOpenIDConnectProviderAsync(const DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOpenIDConnectProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteOpenIDConnectProviderAsyncHelper(const DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOpenIDConnectProvider(request), context);
}

DeletePolicyOutcome IAMClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePolicyOutcome(NoResult());
  }
  else
  {
    return DeletePolicyOutcome(outcome.GetError());
  }
}

DeletePolicyOutcomeCallable IAMClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicy(request), context);
}

DeletePolicyVersionOutcome IAMClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePolicyVersionOutcome(NoResult());
  }
  else
  {
    return DeletePolicyVersionOutcome(outcome.GetError());
  }
}

DeletePolicyVersionOutcomeCallable IAMClient::DeletePolicyVersionCallable(const DeletePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePolicyVersionAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeletePolicyVersionAsyncHelper(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicyVersion(request), context);
}

DeleteRoleOutcome IAMClient::DeleteRole(const DeleteRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRoleOutcome(NoResult());
  }
  else
  {
    return DeleteRoleOutcome(outcome.GetError());
  }
}

DeleteRoleOutcomeCallable IAMClient::DeleteRoleCallable(const DeleteRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteRoleAsyncHelper(const DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRole(request), context);
}

DeleteRolePermissionsBoundaryOutcome IAMClient::DeleteRolePermissionsBoundary(const DeleteRolePermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRolePermissionsBoundaryOutcome(NoResult());
  }
  else
  {
    return DeleteRolePermissionsBoundaryOutcome(outcome.GetError());
  }
}

DeleteRolePermissionsBoundaryOutcomeCallable IAMClient::DeleteRolePermissionsBoundaryCallable(const DeleteRolePermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRolePermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRolePermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteRolePermissionsBoundaryAsync(const DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRolePermissionsBoundaryAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteRolePermissionsBoundaryAsyncHelper(const DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRolePermissionsBoundary(request), context);
}

DeleteRolePolicyOutcome IAMClient::DeleteRolePolicy(const DeleteRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRolePolicyOutcome(NoResult());
  }
  else
  {
    return DeleteRolePolicyOutcome(outcome.GetError());
  }
}

DeleteRolePolicyOutcomeCallable IAMClient::DeleteRolePolicyCallable(const DeleteRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteRolePolicyAsync(const DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRolePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteRolePolicyAsyncHelper(const DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRolePolicy(request), context);
}

DeleteSAMLProviderOutcome IAMClient::DeleteSAMLProvider(const DeleteSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSAMLProviderOutcome(NoResult());
  }
  else
  {
    return DeleteSAMLProviderOutcome(outcome.GetError());
  }
}

DeleteSAMLProviderOutcomeCallable IAMClient::DeleteSAMLProviderCallable(const DeleteSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteSAMLProviderAsync(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSAMLProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteSAMLProviderAsyncHelper(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSAMLProvider(request), context);
}

DeleteSSHPublicKeyOutcome IAMClient::DeleteSSHPublicKey(const DeleteSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSSHPublicKeyOutcome(NoResult());
  }
  else
  {
    return DeleteSSHPublicKeyOutcome(outcome.GetError());
  }
}

DeleteSSHPublicKeyOutcomeCallable IAMClient::DeleteSSHPublicKeyCallable(const DeleteSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteSSHPublicKeyAsync(const DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSSHPublicKeyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteSSHPublicKeyAsyncHelper(const DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSSHPublicKey(request), context);
}

DeleteServerCertificateOutcome IAMClient::DeleteServerCertificate(const DeleteServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteServerCertificateOutcome(NoResult());
  }
  else
  {
    return DeleteServerCertificateOutcome(outcome.GetError());
  }
}

DeleteServerCertificateOutcomeCallable IAMClient::DeleteServerCertificateCallable(const DeleteServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteServerCertificateAsync(const DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServerCertificateAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteServerCertificateAsyncHelper(const DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServerCertificate(request), context);
}

DeleteServiceLinkedRoleOutcome IAMClient::DeleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteServiceLinkedRoleOutcome(DeleteServiceLinkedRoleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteServiceLinkedRoleOutcome(outcome.GetError());
  }
}

DeleteServiceLinkedRoleOutcomeCallable IAMClient::DeleteServiceLinkedRoleCallable(const DeleteServiceLinkedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceLinkedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceLinkedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteServiceLinkedRoleAsync(const DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceLinkedRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteServiceLinkedRoleAsyncHelper(const DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServiceLinkedRole(request), context);
}

DeleteServiceSpecificCredentialOutcome IAMClient::DeleteServiceSpecificCredential(const DeleteServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteServiceSpecificCredentialOutcome(NoResult());
  }
  else
  {
    return DeleteServiceSpecificCredentialOutcome(outcome.GetError());
  }
}

DeleteServiceSpecificCredentialOutcomeCallable IAMClient::DeleteServiceSpecificCredentialCallable(const DeleteServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteServiceSpecificCredentialAsync(const DeleteServiceSpecificCredentialRequest& request, const DeleteServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceSpecificCredentialAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteServiceSpecificCredentialAsyncHelper(const DeleteServiceSpecificCredentialRequest& request, const DeleteServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServiceSpecificCredential(request), context);
}

DeleteSigningCertificateOutcome IAMClient::DeleteSigningCertificate(const DeleteSigningCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSigningCertificateOutcome(NoResult());
  }
  else
  {
    return DeleteSigningCertificateOutcome(outcome.GetError());
  }
}

DeleteSigningCertificateOutcomeCallable IAMClient::DeleteSigningCertificateCallable(const DeleteSigningCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSigningCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteSigningCertificateAsync(const DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSigningCertificateAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteSigningCertificateAsyncHelper(const DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSigningCertificate(request), context);
}

DeleteUserOutcome IAMClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteUserOutcome(NoResult());
  }
  else
  {
    return DeleteUserOutcome(outcome.GetError());
  }
}

DeleteUserOutcomeCallable IAMClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DeleteUserPermissionsBoundaryOutcome IAMClient::DeleteUserPermissionsBoundary(const DeleteUserPermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteUserPermissionsBoundaryOutcome(NoResult());
  }
  else
  {
    return DeleteUserPermissionsBoundaryOutcome(outcome.GetError());
  }
}

DeleteUserPermissionsBoundaryOutcomeCallable IAMClient::DeleteUserPermissionsBoundaryCallable(const DeleteUserPermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserPermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteUserPermissionsBoundaryAsync(const DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserPermissionsBoundaryAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteUserPermissionsBoundaryAsyncHelper(const DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserPermissionsBoundary(request), context);
}

DeleteUserPolicyOutcome IAMClient::DeleteUserPolicy(const DeleteUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteUserPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteUserPolicyOutcome(outcome.GetError());
  }
}

DeleteUserPolicyOutcomeCallable IAMClient::DeleteUserPolicyCallable(const DeleteUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteUserPolicyAsync(const DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteUserPolicyAsyncHelper(const DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserPolicy(request), context);
}

DeleteVirtualMFADeviceOutcome IAMClient::DeleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVirtualMFADeviceOutcome(NoResult());
  }
  else
  {
    return DeleteVirtualMFADeviceOutcome(outcome.GetError());
  }
}

DeleteVirtualMFADeviceOutcomeCallable IAMClient::DeleteVirtualMFADeviceCallable(const DeleteVirtualMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DeleteVirtualMFADeviceAsync(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualMFADeviceAsyncHelper( request, handler, context ); } );
}

void IAMClient::DeleteVirtualMFADeviceAsyncHelper(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualMFADevice(request), context);
}

DetachGroupPolicyOutcome IAMClient::DetachGroupPolicy(const DetachGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachGroupPolicyOutcome(NoResult());
  }
  else
  {
    return DetachGroupPolicyOutcome(outcome.GetError());
  }
}

DetachGroupPolicyOutcomeCallable IAMClient::DetachGroupPolicyCallable(const DetachGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DetachGroupPolicyAsync(const DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachGroupPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DetachGroupPolicyAsyncHelper(const DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachGroupPolicy(request), context);
}

DetachRolePolicyOutcome IAMClient::DetachRolePolicy(const DetachRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachRolePolicyOutcome(NoResult());
  }
  else
  {
    return DetachRolePolicyOutcome(outcome.GetError());
  }
}

DetachRolePolicyOutcomeCallable IAMClient::DetachRolePolicyCallable(const DetachRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DetachRolePolicyAsync(const DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachRolePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DetachRolePolicyAsyncHelper(const DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachRolePolicy(request), context);
}

DetachUserPolicyOutcome IAMClient::DetachUserPolicy(const DetachUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachUserPolicyOutcome(NoResult());
  }
  else
  {
    return DetachUserPolicyOutcome(outcome.GetError());
  }
}

DetachUserPolicyOutcomeCallable IAMClient::DetachUserPolicyCallable(const DetachUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachUserPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::DetachUserPolicyAsyncHelper(const DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachUserPolicy(request), context);
}

EnableMFADeviceOutcome IAMClient::EnableMFADevice(const EnableMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableMFADeviceOutcome(NoResult());
  }
  else
  {
    return EnableMFADeviceOutcome(outcome.GetError());
  }
}

EnableMFADeviceOutcomeCallable IAMClient::EnableMFADeviceCallable(const EnableMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::EnableMFADeviceAsync(const EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableMFADeviceAsyncHelper( request, handler, context ); } );
}

void IAMClient::EnableMFADeviceAsyncHelper(const EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableMFADevice(request), context);
}

GenerateCredentialReportOutcome IAMClient::GenerateCredentialReport(const GenerateCredentialReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GenerateCredentialReportOutcome(GenerateCredentialReportResult(outcome.GetResult()));
  }
  else
  {
    return GenerateCredentialReportOutcome(outcome.GetError());
  }
}

GenerateCredentialReportOutcomeCallable IAMClient::GenerateCredentialReportCallable(const GenerateCredentialReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateCredentialReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateCredentialReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GenerateCredentialReportAsync(const GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateCredentialReportAsyncHelper( request, handler, context ); } );
}

void IAMClient::GenerateCredentialReportAsyncHelper(const GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateCredentialReport(request), context);
}

GenerateOrganizationsAccessReportOutcome IAMClient::GenerateOrganizationsAccessReport(const GenerateOrganizationsAccessReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GenerateOrganizationsAccessReportOutcome(GenerateOrganizationsAccessReportResult(outcome.GetResult()));
  }
  else
  {
    return GenerateOrganizationsAccessReportOutcome(outcome.GetError());
  }
}

GenerateOrganizationsAccessReportOutcomeCallable IAMClient::GenerateOrganizationsAccessReportCallable(const GenerateOrganizationsAccessReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateOrganizationsAccessReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateOrganizationsAccessReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GenerateOrganizationsAccessReportAsync(const GenerateOrganizationsAccessReportRequest& request, const GenerateOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateOrganizationsAccessReportAsyncHelper( request, handler, context ); } );
}

void IAMClient::GenerateOrganizationsAccessReportAsyncHelper(const GenerateOrganizationsAccessReportRequest& request, const GenerateOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateOrganizationsAccessReport(request), context);
}

GenerateServiceLastAccessedDetailsOutcome IAMClient::GenerateServiceLastAccessedDetails(const GenerateServiceLastAccessedDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GenerateServiceLastAccessedDetailsOutcome(GenerateServiceLastAccessedDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GenerateServiceLastAccessedDetailsOutcome(outcome.GetError());
  }
}

GenerateServiceLastAccessedDetailsOutcomeCallable IAMClient::GenerateServiceLastAccessedDetailsCallable(const GenerateServiceLastAccessedDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateServiceLastAccessedDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateServiceLastAccessedDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GenerateServiceLastAccessedDetailsAsync(const GenerateServiceLastAccessedDetailsRequest& request, const GenerateServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateServiceLastAccessedDetailsAsyncHelper( request, handler, context ); } );
}

void IAMClient::GenerateServiceLastAccessedDetailsAsyncHelper(const GenerateServiceLastAccessedDetailsRequest& request, const GenerateServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateServiceLastAccessedDetails(request), context);
}

GetAccessKeyLastUsedOutcome IAMClient::GetAccessKeyLastUsed(const GetAccessKeyLastUsedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetAccessKeyLastUsedOutcome(GetAccessKeyLastUsedResult(outcome.GetResult()));
  }
  else
  {
    return GetAccessKeyLastUsedOutcome(outcome.GetError());
  }
}

GetAccessKeyLastUsedOutcomeCallable IAMClient::GetAccessKeyLastUsedCallable(const GetAccessKeyLastUsedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessKeyLastUsedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessKeyLastUsed(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetAccessKeyLastUsedAsync(const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessKeyLastUsedAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetAccessKeyLastUsedAsyncHelper(const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessKeyLastUsed(request), context);
}

GetAccountAuthorizationDetailsOutcome IAMClient::GetAccountAuthorizationDetails(const GetAccountAuthorizationDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetAccountAuthorizationDetailsOutcome(GetAccountAuthorizationDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountAuthorizationDetailsOutcome(outcome.GetError());
  }
}

GetAccountAuthorizationDetailsOutcomeCallable IAMClient::GetAccountAuthorizationDetailsCallable(const GetAccountAuthorizationDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountAuthorizationDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountAuthorizationDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetAccountAuthorizationDetailsAsync(const GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountAuthorizationDetailsAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetAccountAuthorizationDetailsAsyncHelper(const GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountAuthorizationDetails(request), context);
}

GetAccountPasswordPolicyOutcome IAMClient::GetAccountPasswordPolicy(const GetAccountPasswordPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetAccountPasswordPolicyOutcome(GetAccountPasswordPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountPasswordPolicyOutcome(outcome.GetError());
  }
}

GetAccountPasswordPolicyOutcomeCallable IAMClient::GetAccountPasswordPolicyCallable(const GetAccountPasswordPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountPasswordPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountPasswordPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetAccountPasswordPolicyAsync(const GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountPasswordPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetAccountPasswordPolicyAsyncHelper(const GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountPasswordPolicy(request), context);
}

GetAccountSummaryOutcome IAMClient::GetAccountSummary(const GetAccountSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetAccountSummaryOutcome(GetAccountSummaryResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountSummaryOutcome(outcome.GetError());
  }
}

GetAccountSummaryOutcomeCallable IAMClient::GetAccountSummaryCallable(const GetAccountSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetAccountSummaryAsync(const GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountSummaryAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetAccountSummaryAsyncHelper(const GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountSummary(request), context);
}

GetContextKeysForCustomPolicyOutcome IAMClient::GetContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetContextKeysForCustomPolicyOutcome(GetContextKeysForCustomPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetContextKeysForCustomPolicyOutcome(outcome.GetError());
  }
}

GetContextKeysForCustomPolicyOutcomeCallable IAMClient::GetContextKeysForCustomPolicyCallable(const GetContextKeysForCustomPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContextKeysForCustomPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContextKeysForCustomPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetContextKeysForCustomPolicyAsync(const GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContextKeysForCustomPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetContextKeysForCustomPolicyAsyncHelper(const GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContextKeysForCustomPolicy(request), context);
}

GetContextKeysForPrincipalPolicyOutcome IAMClient::GetContextKeysForPrincipalPolicy(const GetContextKeysForPrincipalPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetContextKeysForPrincipalPolicyOutcome(GetContextKeysForPrincipalPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetContextKeysForPrincipalPolicyOutcome(outcome.GetError());
  }
}

GetContextKeysForPrincipalPolicyOutcomeCallable IAMClient::GetContextKeysForPrincipalPolicyCallable(const GetContextKeysForPrincipalPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContextKeysForPrincipalPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContextKeysForPrincipalPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetContextKeysForPrincipalPolicyAsync(const GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContextKeysForPrincipalPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetContextKeysForPrincipalPolicyAsyncHelper(const GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContextKeysForPrincipalPolicy(request), context);
}

GetCredentialReportOutcome IAMClient::GetCredentialReport(const GetCredentialReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetCredentialReportOutcome(GetCredentialReportResult(outcome.GetResult()));
  }
  else
  {
    return GetCredentialReportOutcome(outcome.GetError());
  }
}

GetCredentialReportOutcomeCallable IAMClient::GetCredentialReportCallable(const GetCredentialReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCredentialReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCredentialReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetCredentialReportAsync(const GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCredentialReportAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetCredentialReportAsyncHelper(const GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCredentialReport(request), context);
}

GetGroupOutcome IAMClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetGroupOutcome(GetGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupOutcome(outcome.GetError());
  }
}

GetGroupOutcomeCallable IAMClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetGroupAsyncHelper(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroup(request), context);
}

GetGroupPolicyOutcome IAMClient::GetGroupPolicy(const GetGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetGroupPolicyOutcome(GetGroupPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupPolicyOutcome(outcome.GetError());
  }
}

GetGroupPolicyOutcomeCallable IAMClient::GetGroupPolicyCallable(const GetGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetGroupPolicyAsync(const GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetGroupPolicyAsyncHelper(const GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroupPolicy(request), context);
}

GetInstanceProfileOutcome IAMClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetInstanceProfileOutcome(GetInstanceProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceProfileOutcome(outcome.GetError());
  }
}

GetInstanceProfileOutcomeCallable IAMClient::GetInstanceProfileCallable(const GetInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetInstanceProfileAsync(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetInstanceProfileAsyncHelper(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceProfile(request), context);
}

GetLoginProfileOutcome IAMClient::GetLoginProfile(const GetLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetLoginProfileOutcome(GetLoginProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetLoginProfileOutcome(outcome.GetError());
  }
}

GetLoginProfileOutcomeCallable IAMClient::GetLoginProfileCallable(const GetLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetLoginProfileAsync(const GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLoginProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetLoginProfileAsyncHelper(const GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoginProfile(request), context);
}

GetOpenIDConnectProviderOutcome IAMClient::GetOpenIDConnectProvider(const GetOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetOpenIDConnectProviderOutcome(GetOpenIDConnectProviderResult(outcome.GetResult()));
  }
  else
  {
    return GetOpenIDConnectProviderOutcome(outcome.GetError());
  }
}

GetOpenIDConnectProviderOutcomeCallable IAMClient::GetOpenIDConnectProviderCallable(const GetOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetOpenIDConnectProviderAsync(const GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOpenIDConnectProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetOpenIDConnectProviderAsyncHelper(const GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOpenIDConnectProvider(request), context);
}

GetOrganizationsAccessReportOutcome IAMClient::GetOrganizationsAccessReport(const GetOrganizationsAccessReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetOrganizationsAccessReportOutcome(GetOrganizationsAccessReportResult(outcome.GetResult()));
  }
  else
  {
    return GetOrganizationsAccessReportOutcome(outcome.GetError());
  }
}

GetOrganizationsAccessReportOutcomeCallable IAMClient::GetOrganizationsAccessReportCallable(const GetOrganizationsAccessReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationsAccessReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationsAccessReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetOrganizationsAccessReportAsync(const GetOrganizationsAccessReportRequest& request, const GetOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOrganizationsAccessReportAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetOrganizationsAccessReportAsyncHelper(const GetOrganizationsAccessReportRequest& request, const GetOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOrganizationsAccessReport(request), context);
}

GetPolicyOutcome IAMClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPolicyOutcome(GetPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetPolicyOutcome(outcome.GetError());
  }
}

GetPolicyOutcomeCallable IAMClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetPolicyAsyncHelper(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicy(request), context);
}

GetPolicyVersionOutcome IAMClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPolicyVersionOutcome(GetPolicyVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetPolicyVersionOutcome(outcome.GetError());
  }
}

GetPolicyVersionOutcomeCallable IAMClient::GetPolicyVersionCallable(const GetPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPolicyVersionAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetPolicyVersionAsyncHelper(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicyVersion(request), context);
}

GetRoleOutcome IAMClient::GetRole(const GetRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetRoleOutcome(GetRoleResult(outcome.GetResult()));
  }
  else
  {
    return GetRoleOutcome(outcome.GetError());
  }
}

GetRoleOutcomeCallable IAMClient::GetRoleCallable(const GetRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetRoleAsync(const GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetRoleAsyncHelper(const GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRole(request), context);
}

GetRolePolicyOutcome IAMClient::GetRolePolicy(const GetRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetRolePolicyOutcome(GetRolePolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetRolePolicyOutcome(outcome.GetError());
  }
}

GetRolePolicyOutcomeCallable IAMClient::GetRolePolicyCallable(const GetRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetRolePolicyAsync(const GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRolePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetRolePolicyAsyncHelper(const GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRolePolicy(request), context);
}

GetSAMLProviderOutcome IAMClient::GetSAMLProvider(const GetSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSAMLProviderOutcome(GetSAMLProviderResult(outcome.GetResult()));
  }
  else
  {
    return GetSAMLProviderOutcome(outcome.GetError());
  }
}

GetSAMLProviderOutcomeCallable IAMClient::GetSAMLProviderCallable(const GetSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetSAMLProviderAsync(const GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSAMLProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetSAMLProviderAsyncHelper(const GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSAMLProvider(request), context);
}

GetSSHPublicKeyOutcome IAMClient::GetSSHPublicKey(const GetSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSSHPublicKeyOutcome(GetSSHPublicKeyResult(outcome.GetResult()));
  }
  else
  {
    return GetSSHPublicKeyOutcome(outcome.GetError());
  }
}

GetSSHPublicKeyOutcomeCallable IAMClient::GetSSHPublicKeyCallable(const GetSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetSSHPublicKeyAsync(const GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSSHPublicKeyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetSSHPublicKeyAsyncHelper(const GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSSHPublicKey(request), context);
}

GetServerCertificateOutcome IAMClient::GetServerCertificate(const GetServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetServerCertificateOutcome(GetServerCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GetServerCertificateOutcome(outcome.GetError());
  }
}

GetServerCertificateOutcomeCallable IAMClient::GetServerCertificateCallable(const GetServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetServerCertificateAsync(const GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServerCertificateAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetServerCertificateAsyncHelper(const GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServerCertificate(request), context);
}

GetServiceLastAccessedDetailsOutcome IAMClient::GetServiceLastAccessedDetails(const GetServiceLastAccessedDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetServiceLastAccessedDetailsOutcome(GetServiceLastAccessedDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceLastAccessedDetailsOutcome(outcome.GetError());
  }
}

GetServiceLastAccessedDetailsOutcomeCallable IAMClient::GetServiceLastAccessedDetailsCallable(const GetServiceLastAccessedDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceLastAccessedDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceLastAccessedDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetServiceLastAccessedDetailsAsync(const GetServiceLastAccessedDetailsRequest& request, const GetServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceLastAccessedDetailsAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetServiceLastAccessedDetailsAsyncHelper(const GetServiceLastAccessedDetailsRequest& request, const GetServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceLastAccessedDetails(request), context);
}

GetServiceLastAccessedDetailsWithEntitiesOutcome IAMClient::GetServiceLastAccessedDetailsWithEntities(const GetServiceLastAccessedDetailsWithEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetServiceLastAccessedDetailsWithEntitiesOutcome(GetServiceLastAccessedDetailsWithEntitiesResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceLastAccessedDetailsWithEntitiesOutcome(outcome.GetError());
  }
}

GetServiceLastAccessedDetailsWithEntitiesOutcomeCallable IAMClient::GetServiceLastAccessedDetailsWithEntitiesCallable(const GetServiceLastAccessedDetailsWithEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceLastAccessedDetailsWithEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceLastAccessedDetailsWithEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetServiceLastAccessedDetailsWithEntitiesAsync(const GetServiceLastAccessedDetailsWithEntitiesRequest& request, const GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceLastAccessedDetailsWithEntitiesAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetServiceLastAccessedDetailsWithEntitiesAsyncHelper(const GetServiceLastAccessedDetailsWithEntitiesRequest& request, const GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceLastAccessedDetailsWithEntities(request), context);
}

GetServiceLinkedRoleDeletionStatusOutcome IAMClient::GetServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetServiceLinkedRoleDeletionStatusOutcome(GetServiceLinkedRoleDeletionStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceLinkedRoleDeletionStatusOutcome(outcome.GetError());
  }
}

GetServiceLinkedRoleDeletionStatusOutcomeCallable IAMClient::GetServiceLinkedRoleDeletionStatusCallable(const GetServiceLinkedRoleDeletionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceLinkedRoleDeletionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceLinkedRoleDeletionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetServiceLinkedRoleDeletionStatusAsync(const GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceLinkedRoleDeletionStatusAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetServiceLinkedRoleDeletionStatusAsyncHelper(const GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceLinkedRoleDeletionStatus(request), context);
}

GetUserOutcome IAMClient::GetUser(const GetUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetUserOutcome(GetUserResult(outcome.GetResult()));
  }
  else
  {
    return GetUserOutcome(outcome.GetError());
  }
}

GetUserOutcomeCallable IAMClient::GetUserCallable(const GetUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetUserAsync(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetUserAsyncHelper(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUser(request), context);
}

GetUserPolicyOutcome IAMClient::GetUserPolicy(const GetUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetUserPolicyOutcome(GetUserPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetUserPolicyOutcome(outcome.GetError());
  }
}

GetUserPolicyOutcomeCallable IAMClient::GetUserPolicyCallable(const GetUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::GetUserPolicyAsync(const GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::GetUserPolicyAsyncHelper(const GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserPolicy(request), context);
}

ListAccessKeysOutcome IAMClient::ListAccessKeys(const ListAccessKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAccessKeysOutcome(ListAccessKeysResult(outcome.GetResult()));
  }
  else
  {
    return ListAccessKeysOutcome(outcome.GetError());
  }
}

ListAccessKeysOutcomeCallable IAMClient::ListAccessKeysCallable(const ListAccessKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListAccessKeysAsync(const ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccessKeysAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListAccessKeysAsyncHelper(const ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccessKeys(request), context);
}

ListAccountAliasesOutcome IAMClient::ListAccountAliases(const ListAccountAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAccountAliasesOutcome(ListAccountAliasesResult(outcome.GetResult()));
  }
  else
  {
    return ListAccountAliasesOutcome(outcome.GetError());
  }
}

ListAccountAliasesOutcomeCallable IAMClient::ListAccountAliasesCallable(const ListAccountAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListAccountAliasesAsync(const ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountAliasesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListAccountAliasesAsyncHelper(const ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountAliases(request), context);
}

ListAttachedGroupPoliciesOutcome IAMClient::ListAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAttachedGroupPoliciesOutcome(ListAttachedGroupPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListAttachedGroupPoliciesOutcome(outcome.GetError());
  }
}

ListAttachedGroupPoliciesOutcomeCallable IAMClient::ListAttachedGroupPoliciesCallable(const ListAttachedGroupPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedGroupPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedGroupPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListAttachedGroupPoliciesAsync(const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttachedGroupPoliciesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListAttachedGroupPoliciesAsyncHelper(const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedGroupPolicies(request), context);
}

ListAttachedRolePoliciesOutcome IAMClient::ListAttachedRolePolicies(const ListAttachedRolePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAttachedRolePoliciesOutcome(ListAttachedRolePoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListAttachedRolePoliciesOutcome(outcome.GetError());
  }
}

ListAttachedRolePoliciesOutcomeCallable IAMClient::ListAttachedRolePoliciesCallable(const ListAttachedRolePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedRolePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedRolePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListAttachedRolePoliciesAsync(const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttachedRolePoliciesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListAttachedRolePoliciesAsyncHelper(const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedRolePolicies(request), context);
}

ListAttachedUserPoliciesOutcome IAMClient::ListAttachedUserPolicies(const ListAttachedUserPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAttachedUserPoliciesOutcome(ListAttachedUserPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListAttachedUserPoliciesOutcome(outcome.GetError());
  }
}

ListAttachedUserPoliciesOutcomeCallable IAMClient::ListAttachedUserPoliciesCallable(const ListAttachedUserPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedUserPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedUserPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListAttachedUserPoliciesAsync(const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttachedUserPoliciesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListAttachedUserPoliciesAsyncHelper(const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedUserPolicies(request), context);
}

ListEntitiesForPolicyOutcome IAMClient::ListEntitiesForPolicy(const ListEntitiesForPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListEntitiesForPolicyOutcome(ListEntitiesForPolicyResult(outcome.GetResult()));
  }
  else
  {
    return ListEntitiesForPolicyOutcome(outcome.GetError());
  }
}

ListEntitiesForPolicyOutcomeCallable IAMClient::ListEntitiesForPolicyCallable(const ListEntitiesForPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesForPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitiesForPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListEntitiesForPolicyAsync(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEntitiesForPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListEntitiesForPolicyAsyncHelper(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntitiesForPolicy(request), context);
}

ListGroupPoliciesOutcome IAMClient::ListGroupPolicies(const ListGroupPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListGroupPoliciesOutcome(ListGroupPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupPoliciesOutcome(outcome.GetError());
  }
}

ListGroupPoliciesOutcomeCallable IAMClient::ListGroupPoliciesCallable(const ListGroupPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListGroupPoliciesAsync(const ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupPoliciesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListGroupPoliciesAsyncHelper(const ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupPolicies(request), context);
}

ListGroupsOutcome IAMClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListGroupsOutcome(ListGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupsOutcome(outcome.GetError());
  }
}

ListGroupsOutcomeCallable IAMClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupsAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListGroupsAsyncHelper(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroups(request), context);
}

ListGroupsForUserOutcome IAMClient::ListGroupsForUser(const ListGroupsForUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListGroupsForUserOutcome(ListGroupsForUserResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupsForUserOutcome(outcome.GetError());
  }
}

ListGroupsForUserOutcomeCallable IAMClient::ListGroupsForUserCallable(const ListGroupsForUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsForUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupsForUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupsForUserAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListGroupsForUserAsyncHelper(const ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupsForUser(request), context);
}

ListInstanceProfilesOutcome IAMClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListInstanceProfilesOutcome(ListInstanceProfilesResult(outcome.GetResult()));
  }
  else
  {
    return ListInstanceProfilesOutcome(outcome.GetError());
  }
}

ListInstanceProfilesOutcomeCallable IAMClient::ListInstanceProfilesCallable(const ListInstanceProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListInstanceProfilesAsync(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceProfilesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListInstanceProfilesAsyncHelper(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceProfiles(request), context);
}

ListInstanceProfilesForRoleOutcome IAMClient::ListInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListInstanceProfilesForRoleOutcome(ListInstanceProfilesForRoleResult(outcome.GetResult()));
  }
  else
  {
    return ListInstanceProfilesForRoleOutcome(outcome.GetError());
  }
}

ListInstanceProfilesForRoleOutcomeCallable IAMClient::ListInstanceProfilesForRoleCallable(const ListInstanceProfilesForRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceProfilesForRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceProfilesForRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListInstanceProfilesForRoleAsync(const ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceProfilesForRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListInstanceProfilesForRoleAsyncHelper(const ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceProfilesForRole(request), context);
}

ListMFADevicesOutcome IAMClient::ListMFADevices(const ListMFADevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListMFADevicesOutcome(ListMFADevicesResult(outcome.GetResult()));
  }
  else
  {
    return ListMFADevicesOutcome(outcome.GetError());
  }
}

ListMFADevicesOutcomeCallable IAMClient::ListMFADevicesCallable(const ListMFADevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMFADevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMFADevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListMFADevicesAsync(const ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMFADevicesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListMFADevicesAsyncHelper(const ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMFADevices(request), context);
}

ListOpenIDConnectProvidersOutcome IAMClient::ListOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListOpenIDConnectProvidersOutcome(ListOpenIDConnectProvidersResult(outcome.GetResult()));
  }
  else
  {
    return ListOpenIDConnectProvidersOutcome(outcome.GetError());
  }
}

ListOpenIDConnectProvidersOutcomeCallable IAMClient::ListOpenIDConnectProvidersCallable(const ListOpenIDConnectProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOpenIDConnectProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOpenIDConnectProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListOpenIDConnectProvidersAsync(const ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOpenIDConnectProvidersAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListOpenIDConnectProvidersAsyncHelper(const ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOpenIDConnectProviders(request), context);
}

ListPoliciesOutcome IAMClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPoliciesOutcome(ListPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListPoliciesOutcome(outcome.GetError());
  }
}

ListPoliciesOutcomeCallable IAMClient::ListPoliciesCallable(const ListPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPoliciesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListPoliciesAsyncHelper(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicies(request), context);
}

ListPoliciesGrantingServiceAccessOutcome IAMClient::ListPoliciesGrantingServiceAccess(const ListPoliciesGrantingServiceAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPoliciesGrantingServiceAccessOutcome(ListPoliciesGrantingServiceAccessResult(outcome.GetResult()));
  }
  else
  {
    return ListPoliciesGrantingServiceAccessOutcome(outcome.GetError());
  }
}

ListPoliciesGrantingServiceAccessOutcomeCallable IAMClient::ListPoliciesGrantingServiceAccessCallable(const ListPoliciesGrantingServiceAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesGrantingServiceAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPoliciesGrantingServiceAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListPoliciesGrantingServiceAccessAsync(const ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPoliciesGrantingServiceAccessAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListPoliciesGrantingServiceAccessAsyncHelper(const ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPoliciesGrantingServiceAccess(request), context);
}

ListPolicyVersionsOutcome IAMClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPolicyVersionsOutcome(ListPolicyVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListPolicyVersionsOutcome(outcome.GetError());
  }
}

ListPolicyVersionsOutcomeCallable IAMClient::ListPolicyVersionsCallable(const ListPolicyVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPolicyVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicyVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPolicyVersionsAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListPolicyVersionsAsyncHelper(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicyVersions(request), context);
}

ListRolePoliciesOutcome IAMClient::ListRolePolicies(const ListRolePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRolePoliciesOutcome(ListRolePoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListRolePoliciesOutcome(outcome.GetError());
  }
}

ListRolePoliciesOutcomeCallable IAMClient::ListRolePoliciesCallable(const ListRolePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRolePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRolePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListRolePoliciesAsync(const ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRolePoliciesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListRolePoliciesAsyncHelper(const ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRolePolicies(request), context);
}

ListRoleTagsOutcome IAMClient::ListRoleTags(const ListRoleTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRoleTagsOutcome(ListRoleTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListRoleTagsOutcome(outcome.GetError());
  }
}

ListRoleTagsOutcomeCallable IAMClient::ListRoleTagsCallable(const ListRoleTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoleTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoleTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListRoleTagsAsync(const ListRoleTagsRequest& request, const ListRoleTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoleTagsAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListRoleTagsAsyncHelper(const ListRoleTagsRequest& request, const ListRoleTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoleTags(request), context);
}

ListRolesOutcome IAMClient::ListRoles(const ListRolesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRolesOutcome(ListRolesResult(outcome.GetResult()));
  }
  else
  {
    return ListRolesOutcome(outcome.GetError());
  }
}

ListRolesOutcomeCallable IAMClient::ListRolesCallable(const ListRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListRolesAsync(const ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRolesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListRolesAsyncHelper(const ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoles(request), context);
}

ListSAMLProvidersOutcome IAMClient::ListSAMLProviders(const ListSAMLProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSAMLProvidersOutcome(ListSAMLProvidersResult(outcome.GetResult()));
  }
  else
  {
    return ListSAMLProvidersOutcome(outcome.GetError());
  }
}

ListSAMLProvidersOutcomeCallable IAMClient::ListSAMLProvidersCallable(const ListSAMLProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSAMLProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSAMLProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListSAMLProvidersAsync(const ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSAMLProvidersAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListSAMLProvidersAsyncHelper(const ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSAMLProviders(request), context);
}

ListSSHPublicKeysOutcome IAMClient::ListSSHPublicKeys(const ListSSHPublicKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSSHPublicKeysOutcome(ListSSHPublicKeysResult(outcome.GetResult()));
  }
  else
  {
    return ListSSHPublicKeysOutcome(outcome.GetError());
  }
}

ListSSHPublicKeysOutcomeCallable IAMClient::ListSSHPublicKeysCallable(const ListSSHPublicKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSSHPublicKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSSHPublicKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListSSHPublicKeysAsync(const ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSSHPublicKeysAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListSSHPublicKeysAsyncHelper(const ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSSHPublicKeys(request), context);
}

ListServerCertificatesOutcome IAMClient::ListServerCertificates(const ListServerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListServerCertificatesOutcome(ListServerCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return ListServerCertificatesOutcome(outcome.GetError());
  }
}

ListServerCertificatesOutcomeCallable IAMClient::ListServerCertificatesCallable(const ListServerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListServerCertificatesAsync(const ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServerCertificatesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListServerCertificatesAsyncHelper(const ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServerCertificates(request), context);
}

ListServiceSpecificCredentialsOutcome IAMClient::ListServiceSpecificCredentials(const ListServiceSpecificCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListServiceSpecificCredentialsOutcome(ListServiceSpecificCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return ListServiceSpecificCredentialsOutcome(outcome.GetError());
  }
}

ListServiceSpecificCredentialsOutcomeCallable IAMClient::ListServiceSpecificCredentialsCallable(const ListServiceSpecificCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceSpecificCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceSpecificCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListServiceSpecificCredentialsAsync(const ListServiceSpecificCredentialsRequest& request, const ListServiceSpecificCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServiceSpecificCredentialsAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListServiceSpecificCredentialsAsyncHelper(const ListServiceSpecificCredentialsRequest& request, const ListServiceSpecificCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServiceSpecificCredentials(request), context);
}

ListSigningCertificatesOutcome IAMClient::ListSigningCertificates(const ListSigningCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSigningCertificatesOutcome(ListSigningCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return ListSigningCertificatesOutcome(outcome.GetError());
  }
}

ListSigningCertificatesOutcomeCallable IAMClient::ListSigningCertificatesCallable(const ListSigningCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListSigningCertificatesAsync(const ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSigningCertificatesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListSigningCertificatesAsyncHelper(const ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningCertificates(request), context);
}

ListUserPoliciesOutcome IAMClient::ListUserPolicies(const ListUserPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListUserPoliciesOutcome(ListUserPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListUserPoliciesOutcome(outcome.GetError());
  }
}

ListUserPoliciesOutcomeCallable IAMClient::ListUserPoliciesCallable(const ListUserPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListUserPoliciesAsync(const ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserPoliciesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListUserPoliciesAsyncHelper(const ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserPolicies(request), context);
}

ListUserTagsOutcome IAMClient::ListUserTags(const ListUserTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListUserTagsOutcome(ListUserTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListUserTagsOutcome(outcome.GetError());
  }
}

ListUserTagsOutcomeCallable IAMClient::ListUserTagsCallable(const ListUserTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListUserTagsAsync(const ListUserTagsRequest& request, const ListUserTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserTagsAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListUserTagsAsyncHelper(const ListUserTagsRequest& request, const ListUserTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserTags(request), context);
}

ListUsersOutcome IAMClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListUsersOutcome(ListUsersResult(outcome.GetResult()));
  }
  else
  {
    return ListUsersOutcome(outcome.GetError());
  }
}

ListUsersOutcomeCallable IAMClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

ListVirtualMFADevicesOutcome IAMClient::ListVirtualMFADevices(const ListVirtualMFADevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListVirtualMFADevicesOutcome(ListVirtualMFADevicesResult(outcome.GetResult()));
  }
  else
  {
    return ListVirtualMFADevicesOutcome(outcome.GetError());
  }
}

ListVirtualMFADevicesOutcomeCallable IAMClient::ListVirtualMFADevicesCallable(const ListVirtualMFADevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualMFADevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualMFADevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ListVirtualMFADevicesAsync(const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVirtualMFADevicesAsyncHelper( request, handler, context ); } );
}

void IAMClient::ListVirtualMFADevicesAsyncHelper(const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualMFADevices(request), context);
}

PutGroupPolicyOutcome IAMClient::PutGroupPolicy(const PutGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutGroupPolicyOutcome(NoResult());
  }
  else
  {
    return PutGroupPolicyOutcome(outcome.GetError());
  }
}

PutGroupPolicyOutcomeCallable IAMClient::PutGroupPolicyCallable(const PutGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::PutGroupPolicyAsync(const PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutGroupPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::PutGroupPolicyAsyncHelper(const PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutGroupPolicy(request), context);
}

PutRolePermissionsBoundaryOutcome IAMClient::PutRolePermissionsBoundary(const PutRolePermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutRolePermissionsBoundaryOutcome(NoResult());
  }
  else
  {
    return PutRolePermissionsBoundaryOutcome(outcome.GetError());
  }
}

PutRolePermissionsBoundaryOutcomeCallable IAMClient::PutRolePermissionsBoundaryCallable(const PutRolePermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRolePermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRolePermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::PutRolePermissionsBoundaryAsync(const PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRolePermissionsBoundaryAsyncHelper( request, handler, context ); } );
}

void IAMClient::PutRolePermissionsBoundaryAsyncHelper(const PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRolePermissionsBoundary(request), context);
}

PutRolePolicyOutcome IAMClient::PutRolePolicy(const PutRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutRolePolicyOutcome(NoResult());
  }
  else
  {
    return PutRolePolicyOutcome(outcome.GetError());
  }
}

PutRolePolicyOutcomeCallable IAMClient::PutRolePolicyCallable(const PutRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::PutRolePolicyAsync(const PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRolePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::PutRolePolicyAsyncHelper(const PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRolePolicy(request), context);
}

PutUserPermissionsBoundaryOutcome IAMClient::PutUserPermissionsBoundary(const PutUserPermissionsBoundaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutUserPermissionsBoundaryOutcome(NoResult());
  }
  else
  {
    return PutUserPermissionsBoundaryOutcome(outcome.GetError());
  }
}

PutUserPermissionsBoundaryOutcomeCallable IAMClient::PutUserPermissionsBoundaryCallable(const PutUserPermissionsBoundaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutUserPermissionsBoundaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutUserPermissionsBoundary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::PutUserPermissionsBoundaryAsync(const PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutUserPermissionsBoundaryAsyncHelper( request, handler, context ); } );
}

void IAMClient::PutUserPermissionsBoundaryAsyncHelper(const PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutUserPermissionsBoundary(request), context);
}

PutUserPolicyOutcome IAMClient::PutUserPolicy(const PutUserPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutUserPolicyOutcome(NoResult());
  }
  else
  {
    return PutUserPolicyOutcome(outcome.GetError());
  }
}

PutUserPolicyOutcomeCallable IAMClient::PutUserPolicyCallable(const PutUserPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutUserPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutUserPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::PutUserPolicyAsync(const PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutUserPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::PutUserPolicyAsyncHelper(const PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutUserPolicy(request), context);
}

RemoveClientIDFromOpenIDConnectProviderOutcome IAMClient::RemoveClientIDFromOpenIDConnectProvider(const RemoveClientIDFromOpenIDConnectProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveClientIDFromOpenIDConnectProviderOutcome(NoResult());
  }
  else
  {
    return RemoveClientIDFromOpenIDConnectProviderOutcome(outcome.GetError());
  }
}

RemoveClientIDFromOpenIDConnectProviderOutcomeCallable IAMClient::RemoveClientIDFromOpenIDConnectProviderCallable(const RemoveClientIDFromOpenIDConnectProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveClientIDFromOpenIDConnectProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveClientIDFromOpenIDConnectProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::RemoveClientIDFromOpenIDConnectProviderAsync(const RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveClientIDFromOpenIDConnectProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::RemoveClientIDFromOpenIDConnectProviderAsyncHelper(const RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveClientIDFromOpenIDConnectProvider(request), context);
}

RemoveRoleFromInstanceProfileOutcome IAMClient::RemoveRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveRoleFromInstanceProfileOutcome(NoResult());
  }
  else
  {
    return RemoveRoleFromInstanceProfileOutcome(outcome.GetError());
  }
}

RemoveRoleFromInstanceProfileOutcomeCallable IAMClient::RemoveRoleFromInstanceProfileCallable(const RemoveRoleFromInstanceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRoleFromInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRoleFromInstanceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::RemoveRoleFromInstanceProfileAsync(const RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveRoleFromInstanceProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::RemoveRoleFromInstanceProfileAsyncHelper(const RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveRoleFromInstanceProfile(request), context);
}

RemoveUserFromGroupOutcome IAMClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveUserFromGroupOutcome(NoResult());
  }
  else
  {
    return RemoveUserFromGroupOutcome(outcome.GetError());
  }
}

RemoveUserFromGroupOutcomeCallable IAMClient::RemoveUserFromGroupCallable(const RemoveUserFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveUserFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveUserFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveUserFromGroupAsyncHelper( request, handler, context ); } );
}

void IAMClient::RemoveUserFromGroupAsyncHelper(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveUserFromGroup(request), context);
}

ResetServiceSpecificCredentialOutcome IAMClient::ResetServiceSpecificCredential(const ResetServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResetServiceSpecificCredentialOutcome(ResetServiceSpecificCredentialResult(outcome.GetResult()));
  }
  else
  {
    return ResetServiceSpecificCredentialOutcome(outcome.GetError());
  }
}

ResetServiceSpecificCredentialOutcomeCallable IAMClient::ResetServiceSpecificCredentialCallable(const ResetServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ResetServiceSpecificCredentialAsync(const ResetServiceSpecificCredentialRequest& request, const ResetServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetServiceSpecificCredentialAsyncHelper( request, handler, context ); } );
}

void IAMClient::ResetServiceSpecificCredentialAsyncHelper(const ResetServiceSpecificCredentialRequest& request, const ResetServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetServiceSpecificCredential(request), context);
}

ResyncMFADeviceOutcome IAMClient::ResyncMFADevice(const ResyncMFADeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResyncMFADeviceOutcome(NoResult());
  }
  else
  {
    return ResyncMFADeviceOutcome(outcome.GetError());
  }
}

ResyncMFADeviceOutcomeCallable IAMClient::ResyncMFADeviceCallable(const ResyncMFADeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResyncMFADeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResyncMFADevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::ResyncMFADeviceAsync(const ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResyncMFADeviceAsyncHelper( request, handler, context ); } );
}

void IAMClient::ResyncMFADeviceAsyncHelper(const ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResyncMFADevice(request), context);
}

SetDefaultPolicyVersionOutcome IAMClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetDefaultPolicyVersionOutcome(NoResult());
  }
  else
  {
    return SetDefaultPolicyVersionOutcome(outcome.GetError());
  }
}

SetDefaultPolicyVersionOutcomeCallable IAMClient::SetDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetDefaultPolicyVersionAsyncHelper( request, handler, context ); } );
}

void IAMClient::SetDefaultPolicyVersionAsyncHelper(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDefaultPolicyVersion(request), context);
}

SetSecurityTokenServicePreferencesOutcome IAMClient::SetSecurityTokenServicePreferences(const SetSecurityTokenServicePreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetSecurityTokenServicePreferencesOutcome(NoResult());
  }
  else
  {
    return SetSecurityTokenServicePreferencesOutcome(outcome.GetError());
  }
}

SetSecurityTokenServicePreferencesOutcomeCallable IAMClient::SetSecurityTokenServicePreferencesCallable(const SetSecurityTokenServicePreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSecurityTokenServicePreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSecurityTokenServicePreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::SetSecurityTokenServicePreferencesAsync(const SetSecurityTokenServicePreferencesRequest& request, const SetSecurityTokenServicePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetSecurityTokenServicePreferencesAsyncHelper( request, handler, context ); } );
}

void IAMClient::SetSecurityTokenServicePreferencesAsyncHelper(const SetSecurityTokenServicePreferencesRequest& request, const SetSecurityTokenServicePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetSecurityTokenServicePreferences(request), context);
}

SimulateCustomPolicyOutcome IAMClient::SimulateCustomPolicy(const SimulateCustomPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SimulateCustomPolicyOutcome(SimulateCustomPolicyResult(outcome.GetResult()));
  }
  else
  {
    return SimulateCustomPolicyOutcome(outcome.GetError());
  }
}

SimulateCustomPolicyOutcomeCallable IAMClient::SimulateCustomPolicyCallable(const SimulateCustomPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SimulateCustomPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SimulateCustomPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::SimulateCustomPolicyAsync(const SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SimulateCustomPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::SimulateCustomPolicyAsyncHelper(const SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SimulateCustomPolicy(request), context);
}

SimulatePrincipalPolicyOutcome IAMClient::SimulatePrincipalPolicy(const SimulatePrincipalPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SimulatePrincipalPolicyOutcome(SimulatePrincipalPolicyResult(outcome.GetResult()));
  }
  else
  {
    return SimulatePrincipalPolicyOutcome(outcome.GetError());
  }
}

SimulatePrincipalPolicyOutcomeCallable IAMClient::SimulatePrincipalPolicyCallable(const SimulatePrincipalPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SimulatePrincipalPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SimulatePrincipalPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::SimulatePrincipalPolicyAsync(const SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SimulatePrincipalPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::SimulatePrincipalPolicyAsyncHelper(const SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SimulatePrincipalPolicy(request), context);
}

TagRoleOutcome IAMClient::TagRole(const TagRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagRoleOutcome(NoResult());
  }
  else
  {
    return TagRoleOutcome(outcome.GetError());
  }
}

TagRoleOutcomeCallable IAMClient::TagRoleCallable(const TagRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::TagRoleAsync(const TagRoleRequest& request, const TagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::TagRoleAsyncHelper(const TagRoleRequest& request, const TagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagRole(request), context);
}

TagUserOutcome IAMClient::TagUser(const TagUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagUserOutcome(NoResult());
  }
  else
  {
    return TagUserOutcome(outcome.GetError());
  }
}

TagUserOutcomeCallable IAMClient::TagUserCallable(const TagUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::TagUserAsync(const TagUserRequest& request, const TagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagUserAsyncHelper( request, handler, context ); } );
}

void IAMClient::TagUserAsyncHelper(const TagUserRequest& request, const TagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagUser(request), context);
}

UntagRoleOutcome IAMClient::UntagRole(const UntagRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagRoleOutcome(NoResult());
  }
  else
  {
    return UntagRoleOutcome(outcome.GetError());
  }
}

UntagRoleOutcomeCallable IAMClient::UntagRoleCallable(const UntagRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UntagRoleAsync(const UntagRoleRequest& request, const UntagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::UntagRoleAsyncHelper(const UntagRoleRequest& request, const UntagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagRole(request), context);
}

UntagUserOutcome IAMClient::UntagUser(const UntagUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagUserOutcome(NoResult());
  }
  else
  {
    return UntagUserOutcome(outcome.GetError());
  }
}

UntagUserOutcomeCallable IAMClient::UntagUserCallable(const UntagUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UntagUserAsync(const UntagUserRequest& request, const UntagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagUserAsyncHelper( request, handler, context ); } );
}

void IAMClient::UntagUserAsyncHelper(const UntagUserRequest& request, const UntagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagUser(request), context);
}

UpdateAccessKeyOutcome IAMClient::UpdateAccessKey(const UpdateAccessKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAccessKeyOutcome(NoResult());
  }
  else
  {
    return UpdateAccessKeyOutcome(outcome.GetError());
  }
}

UpdateAccessKeyOutcomeCallable IAMClient::UpdateAccessKeyCallable(const UpdateAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateAccessKeyAsync(const UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAccessKeyAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateAccessKeyAsyncHelper(const UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccessKey(request), context);
}

UpdateAccountPasswordPolicyOutcome IAMClient::UpdateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAccountPasswordPolicyOutcome(NoResult());
  }
  else
  {
    return UpdateAccountPasswordPolicyOutcome(outcome.GetError());
  }
}

UpdateAccountPasswordPolicyOutcomeCallable IAMClient::UpdateAccountPasswordPolicyCallable(const UpdateAccountPasswordPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountPasswordPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountPasswordPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateAccountPasswordPolicyAsync(const UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAccountPasswordPolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateAccountPasswordPolicyAsyncHelper(const UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccountPasswordPolicy(request), context);
}

UpdateAssumeRolePolicyOutcome IAMClient::UpdateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAssumeRolePolicyOutcome(NoResult());
  }
  else
  {
    return UpdateAssumeRolePolicyOutcome(outcome.GetError());
  }
}

UpdateAssumeRolePolicyOutcomeCallable IAMClient::UpdateAssumeRolePolicyCallable(const UpdateAssumeRolePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssumeRolePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssumeRolePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateAssumeRolePolicyAsync(const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssumeRolePolicyAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateAssumeRolePolicyAsyncHelper(const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssumeRolePolicy(request), context);
}

UpdateGroupOutcome IAMClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateGroupOutcome(NoResult());
  }
  else
  {
    return UpdateGroupOutcome(outcome.GetError());
  }
}

UpdateGroupOutcomeCallable IAMClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGroupAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateGroupAsyncHelper(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGroup(request), context);
}

UpdateLoginProfileOutcome IAMClient::UpdateLoginProfile(const UpdateLoginProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateLoginProfileOutcome(NoResult());
  }
  else
  {
    return UpdateLoginProfileOutcome(outcome.GetError());
  }
}

UpdateLoginProfileOutcomeCallable IAMClient::UpdateLoginProfileCallable(const UpdateLoginProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoginProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoginProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateLoginProfileAsync(const UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLoginProfileAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateLoginProfileAsyncHelper(const UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLoginProfile(request), context);
}

UpdateOpenIDConnectProviderThumbprintOutcome IAMClient::UpdateOpenIDConnectProviderThumbprint(const UpdateOpenIDConnectProviderThumbprintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateOpenIDConnectProviderThumbprintOutcome(NoResult());
  }
  else
  {
    return UpdateOpenIDConnectProviderThumbprintOutcome(outcome.GetError());
  }
}

UpdateOpenIDConnectProviderThumbprintOutcomeCallable IAMClient::UpdateOpenIDConnectProviderThumbprintCallable(const UpdateOpenIDConnectProviderThumbprintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOpenIDConnectProviderThumbprintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOpenIDConnectProviderThumbprint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateOpenIDConnectProviderThumbprintAsync(const UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateOpenIDConnectProviderThumbprintAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateOpenIDConnectProviderThumbprintAsyncHelper(const UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateOpenIDConnectProviderThumbprint(request), context);
}

UpdateRoleOutcome IAMClient::UpdateRole(const UpdateRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateRoleOutcome(UpdateRoleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRoleOutcome(outcome.GetError());
  }
}

UpdateRoleOutcomeCallable IAMClient::UpdateRoleCallable(const UpdateRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateRoleAsync(const UpdateRoleRequest& request, const UpdateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoleAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateRoleAsyncHelper(const UpdateRoleRequest& request, const UpdateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRole(request), context);
}

UpdateRoleDescriptionOutcome IAMClient::UpdateRoleDescription(const UpdateRoleDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateRoleDescriptionOutcome(UpdateRoleDescriptionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRoleDescriptionOutcome(outcome.GetError());
  }
}

UpdateRoleDescriptionOutcomeCallable IAMClient::UpdateRoleDescriptionCallable(const UpdateRoleDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoleDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoleDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateRoleDescriptionAsync(const UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoleDescriptionAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateRoleDescriptionAsyncHelper(const UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoleDescription(request), context);
}

UpdateSAMLProviderOutcome IAMClient::UpdateSAMLProvider(const UpdateSAMLProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateSAMLProviderOutcome(UpdateSAMLProviderResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSAMLProviderOutcome(outcome.GetError());
  }
}

UpdateSAMLProviderOutcomeCallable IAMClient::UpdateSAMLProviderCallable(const UpdateSAMLProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSAMLProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSAMLProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateSAMLProviderAsync(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSAMLProviderAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateSAMLProviderAsyncHelper(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSAMLProvider(request), context);
}

UpdateSSHPublicKeyOutcome IAMClient::UpdateSSHPublicKey(const UpdateSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateSSHPublicKeyOutcome(NoResult());
  }
  else
  {
    return UpdateSSHPublicKeyOutcome(outcome.GetError());
  }
}

UpdateSSHPublicKeyOutcomeCallable IAMClient::UpdateSSHPublicKeyCallable(const UpdateSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateSSHPublicKeyAsync(const UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSSHPublicKeyAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateSSHPublicKeyAsyncHelper(const UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSSHPublicKey(request), context);
}

UpdateServerCertificateOutcome IAMClient::UpdateServerCertificate(const UpdateServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateServerCertificateOutcome(NoResult());
  }
  else
  {
    return UpdateServerCertificateOutcome(outcome.GetError());
  }
}

UpdateServerCertificateOutcomeCallable IAMClient::UpdateServerCertificateCallable(const UpdateServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateServerCertificateAsync(const UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServerCertificateAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateServerCertificateAsyncHelper(const UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServerCertificate(request), context);
}

UpdateServiceSpecificCredentialOutcome IAMClient::UpdateServiceSpecificCredential(const UpdateServiceSpecificCredentialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateServiceSpecificCredentialOutcome(NoResult());
  }
  else
  {
    return UpdateServiceSpecificCredentialOutcome(outcome.GetError());
  }
}

UpdateServiceSpecificCredentialOutcomeCallable IAMClient::UpdateServiceSpecificCredentialCallable(const UpdateServiceSpecificCredentialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSpecificCredentialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSpecificCredential(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateServiceSpecificCredentialAsync(const UpdateServiceSpecificCredentialRequest& request, const UpdateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceSpecificCredentialAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateServiceSpecificCredentialAsyncHelper(const UpdateServiceSpecificCredentialRequest& request, const UpdateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServiceSpecificCredential(request), context);
}

UpdateSigningCertificateOutcome IAMClient::UpdateSigningCertificate(const UpdateSigningCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateSigningCertificateOutcome(NoResult());
  }
  else
  {
    return UpdateSigningCertificateOutcome(outcome.GetError());
  }
}

UpdateSigningCertificateOutcomeCallable IAMClient::UpdateSigningCertificateCallable(const UpdateSigningCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSigningCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateSigningCertificateAsync(const UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSigningCertificateAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateSigningCertificateAsyncHelper(const UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSigningCertificate(request), context);
}

UpdateUserOutcome IAMClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateUserOutcome(NoResult());
  }
  else
  {
    return UpdateUserOutcome(outcome.GetError());
  }
}

UpdateUserOutcomeCallable IAMClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAsyncHelper( request, handler, context ); } );
}

void IAMClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

UploadSSHPublicKeyOutcome IAMClient::UploadSSHPublicKey(const UploadSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UploadSSHPublicKeyOutcome(UploadSSHPublicKeyResult(outcome.GetResult()));
  }
  else
  {
    return UploadSSHPublicKeyOutcome(outcome.GetError());
  }
}

UploadSSHPublicKeyOutcomeCallable IAMClient::UploadSSHPublicKeyCallable(const UploadSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UploadSSHPublicKeyAsync(const UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UploadSSHPublicKeyAsyncHelper( request, handler, context ); } );
}

void IAMClient::UploadSSHPublicKeyAsyncHelper(const UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadSSHPublicKey(request), context);
}

UploadServerCertificateOutcome IAMClient::UploadServerCertificate(const UploadServerCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UploadServerCertificateOutcome(UploadServerCertificateResult(outcome.GetResult()));
  }
  else
  {
    return UploadServerCertificateOutcome(outcome.GetError());
  }
}

UploadServerCertificateOutcomeCallable IAMClient::UploadServerCertificateCallable(const UploadServerCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadServerCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadServerCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UploadServerCertificateAsync(const UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UploadServerCertificateAsyncHelper( request, handler, context ); } );
}

void IAMClient::UploadServerCertificateAsyncHelper(const UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadServerCertificate(request), context);
}

UploadSigningCertificateOutcome IAMClient::UploadSigningCertificate(const UploadSigningCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UploadSigningCertificateOutcome(UploadSigningCertificateResult(outcome.GetResult()));
  }
  else
  {
    return UploadSigningCertificateOutcome(outcome.GetError());
  }
}

UploadSigningCertificateOutcomeCallable IAMClient::UploadSigningCertificateCallable(const UploadSigningCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadSigningCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IAMClient::UploadSigningCertificateAsync(const UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UploadSigningCertificateAsyncHelper( request, handler, context ); } );
}

void IAMClient::UploadSigningCertificateAsyncHelper(const UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadSigningCertificate(request), context);
}



