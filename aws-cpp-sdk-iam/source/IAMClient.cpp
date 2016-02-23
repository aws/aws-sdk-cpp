/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/DeleteRolePolicyRequest.h>
#include <aws/iam/model/DeleteSAMLProviderRequest.h>
#include <aws/iam/model/DeleteSSHPublicKeyRequest.h>
#include <aws/iam/model/DeleteServerCertificateRequest.h>
#include <aws/iam/model/DeleteSigningCertificateRequest.h>
#include <aws/iam/model/DeleteUserRequest.h>
#include <aws/iam/model/DeleteUserPolicyRequest.h>
#include <aws/iam/model/DeleteVirtualMFADeviceRequest.h>
#include <aws/iam/model/DetachGroupPolicyRequest.h>
#include <aws/iam/model/DetachRolePolicyRequest.h>
#include <aws/iam/model/DetachUserPolicyRequest.h>
#include <aws/iam/model/EnableMFADeviceRequest.h>
#include <aws/iam/model/GenerateCredentialReportRequest.h>
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
#include <aws/iam/model/GetPolicyRequest.h>
#include <aws/iam/model/GetPolicyVersionRequest.h>
#include <aws/iam/model/GetRoleRequest.h>
#include <aws/iam/model/GetRolePolicyRequest.h>
#include <aws/iam/model/GetSAMLProviderRequest.h>
#include <aws/iam/model/GetSSHPublicKeyRequest.h>
#include <aws/iam/model/GetServerCertificateRequest.h>
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
#include <aws/iam/model/ListPolicyVersionsRequest.h>
#include <aws/iam/model/ListRolePoliciesRequest.h>
#include <aws/iam/model/ListRolesRequest.h>
#include <aws/iam/model/ListSAMLProvidersRequest.h>
#include <aws/iam/model/ListSSHPublicKeysRequest.h>
#include <aws/iam/model/ListServerCertificatesRequest.h>
#include <aws/iam/model/ListSigningCertificatesRequest.h>
#include <aws/iam/model/ListUserPoliciesRequest.h>
#include <aws/iam/model/ListUsersRequest.h>
#include <aws/iam/model/ListVirtualMFADevicesRequest.h>
#include <aws/iam/model/PutGroupPolicyRequest.h>
#include <aws/iam/model/PutRolePolicyRequest.h>
#include <aws/iam/model/PutUserPolicyRequest.h>
#include <aws/iam/model/RemoveClientIDFromOpenIDConnectProviderRequest.h>
#include <aws/iam/model/RemoveRoleFromInstanceProfileRequest.h>
#include <aws/iam/model/RemoveUserFromGroupRequest.h>
#include <aws/iam/model/ResyncMFADeviceRequest.h>
#include <aws/iam/model/SetDefaultPolicyVersionRequest.h>
#include <aws/iam/model/SimulateCustomPolicyRequest.h>
#include <aws/iam/model/SimulatePrincipalPolicyRequest.h>
#include <aws/iam/model/UpdateAccessKeyRequest.h>
#include <aws/iam/model/UpdateAccountPasswordPolicyRequest.h>
#include <aws/iam/model/UpdateAssumeRolePolicyRequest.h>
#include <aws/iam/model/UpdateGroupRequest.h>
#include <aws/iam/model/UpdateLoginProfileRequest.h>
#include <aws/iam/model/UpdateOpenIDConnectProviderThumbprintRequest.h>
#include <aws/iam/model/UpdateSAMLProviderRequest.h>
#include <aws/iam/model/UpdateSSHPublicKeyRequest.h>
#include <aws/iam/model/UpdateServerCertificateRequest.h>
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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << IAMEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AddClientIDToOpenIDConnectProviderOutcome IAMClient::AddClientIDToOpenIDConnectProvider(const AddClientIDToOpenIDConnectProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::AddClientIDToOpenIDConnectProvider, this, request);
}

void IAMClient::AddClientIDToOpenIDConnectProviderAsync(const AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::AddClientIDToOpenIDConnectProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::AddClientIDToOpenIDConnectProviderAsyncHelper(const AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddClientIDToOpenIDConnectProvider(request), context);
}

AddRoleToInstanceProfileOutcome IAMClient::AddRoleToInstanceProfile(const AddRoleToInstanceProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::AddRoleToInstanceProfile, this, request);
}

void IAMClient::AddRoleToInstanceProfileAsync(const AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::AddRoleToInstanceProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::AddRoleToInstanceProfileAsyncHelper(const AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddRoleToInstanceProfile(request), context);
}

AddUserToGroupOutcome IAMClient::AddUserToGroup(const AddUserToGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::AddUserToGroup, this, request);
}

void IAMClient::AddUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::AddUserToGroupAsyncHelper, this, request, handler, context);
}

void IAMClient::AddUserToGroupAsyncHelper(const AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddUserToGroup(request), context);
}

AttachGroupPolicyOutcome IAMClient::AttachGroupPolicy(const AttachGroupPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::AttachGroupPolicy, this, request);
}

void IAMClient::AttachGroupPolicyAsync(const AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::AttachGroupPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::AttachGroupPolicyAsyncHelper(const AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachGroupPolicy(request), context);
}

AttachRolePolicyOutcome IAMClient::AttachRolePolicy(const AttachRolePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::AttachRolePolicy, this, request);
}

void IAMClient::AttachRolePolicyAsync(const AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::AttachRolePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::AttachRolePolicyAsyncHelper(const AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachRolePolicy(request), context);
}

AttachUserPolicyOutcome IAMClient::AttachUserPolicy(const AttachUserPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::AttachUserPolicy, this, request);
}

void IAMClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::AttachUserPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::AttachUserPolicyAsyncHelper(const AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachUserPolicy(request), context);
}

ChangePasswordOutcome IAMClient::ChangePassword(const ChangePasswordRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ChangePassword, this, request);
}

void IAMClient::ChangePasswordAsync(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ChangePasswordAsyncHelper, this, request, handler, context);
}

void IAMClient::ChangePasswordAsyncHelper(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangePassword(request), context);
}

CreateAccessKeyOutcome IAMClient::CreateAccessKey(const CreateAccessKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateAccessKey, this, request);
}

void IAMClient::CreateAccessKeyAsync(const CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateAccessKeyAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateAccessKeyAsyncHelper(const CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccessKey(request), context);
}

CreateAccountAliasOutcome IAMClient::CreateAccountAlias(const CreateAccountAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateAccountAlias, this, request);
}

void IAMClient::CreateAccountAliasAsync(const CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateAccountAliasAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateAccountAliasAsyncHelper(const CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccountAlias(request), context);
}

CreateGroupOutcome IAMClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateGroup, this, request);
}

void IAMClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateGroupAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateGroupAsyncHelper(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroup(request), context);
}

CreateInstanceProfileOutcome IAMClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateInstanceProfile, this, request);
}

void IAMClient::CreateInstanceProfileAsync(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateInstanceProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateInstanceProfileAsyncHelper(const CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstanceProfile(request), context);
}

CreateLoginProfileOutcome IAMClient::CreateLoginProfile(const CreateLoginProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateLoginProfile, this, request);
}

void IAMClient::CreateLoginProfileAsync(const CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateLoginProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateLoginProfileAsyncHelper(const CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoginProfile(request), context);
}

CreateOpenIDConnectProviderOutcome IAMClient::CreateOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateOpenIDConnectProvider, this, request);
}

void IAMClient::CreateOpenIDConnectProviderAsync(const CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateOpenIDConnectProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateOpenIDConnectProviderAsyncHelper(const CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOpenIDConnectProvider(request), context);
}

CreatePolicyOutcome IAMClient::CreatePolicy(const CreatePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreatePolicy, this, request);
}

void IAMClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreatePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::CreatePolicyAsyncHelper(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicy(request), context);
}

CreatePolicyVersionOutcome IAMClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreatePolicyVersion, this, request);
}

void IAMClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreatePolicyVersionAsyncHelper, this, request, handler, context);
}

void IAMClient::CreatePolicyVersionAsyncHelper(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicyVersion(request), context);
}

CreateRoleOutcome IAMClient::CreateRole(const CreateRoleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateRole, this, request);
}

void IAMClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateRoleAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateRoleAsyncHelper(const CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRole(request), context);
}

CreateSAMLProviderOutcome IAMClient::CreateSAMLProvider(const CreateSAMLProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateSAMLProvider, this, request);
}

void IAMClient::CreateSAMLProviderAsync(const CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateSAMLProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateSAMLProviderAsyncHelper(const CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSAMLProvider(request), context);
}

CreateUserOutcome IAMClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateUser, this, request);
}

void IAMClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateUserAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

CreateVirtualMFADeviceOutcome IAMClient::CreateVirtualMFADevice(const CreateVirtualMFADeviceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::CreateVirtualMFADevice, this, request);
}

void IAMClient::CreateVirtualMFADeviceAsync(const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::CreateVirtualMFADeviceAsyncHelper, this, request, handler, context);
}

void IAMClient::CreateVirtualMFADeviceAsyncHelper(const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualMFADevice(request), context);
}

DeactivateMFADeviceOutcome IAMClient::DeactivateMFADevice(const DeactivateMFADeviceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeactivateMFADevice, this, request);
}

void IAMClient::DeactivateMFADeviceAsync(const DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeactivateMFADeviceAsyncHelper, this, request, handler, context);
}

void IAMClient::DeactivateMFADeviceAsyncHelper(const DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivateMFADevice(request), context);
}

DeleteAccessKeyOutcome IAMClient::DeleteAccessKey(const DeleteAccessKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteAccessKey, this, request);
}

void IAMClient::DeleteAccessKeyAsync(const DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteAccessKeyAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteAccessKeyAsyncHelper(const DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccessKey(request), context);
}

DeleteAccountAliasOutcome IAMClient::DeleteAccountAlias(const DeleteAccountAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteAccountAlias, this, request);
}

void IAMClient::DeleteAccountAliasAsync(const DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteAccountAliasAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteAccountAliasAsyncHelper(const DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccountAlias(request), context);
}

DeleteAccountPasswordPolicyOutcome IAMClient::DeleteAccountPasswordPolicy(const DeleteAccountPasswordPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteAccountPasswordPolicy, this, request);
}

void IAMClient::DeleteAccountPasswordPolicyAsync(const DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteAccountPasswordPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteAccountPasswordPolicyAsyncHelper(const DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccountPasswordPolicy(request), context);
}

DeleteGroupOutcome IAMClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteGroup, this, request);
}

void IAMClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteGroupAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteGroupAsyncHelper(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroup(request), context);
}

DeleteGroupPolicyOutcome IAMClient::DeleteGroupPolicy(const DeleteGroupPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteGroupPolicy, this, request);
}

void IAMClient::DeleteGroupPolicyAsync(const DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteGroupPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteGroupPolicyAsyncHelper(const DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroupPolicy(request), context);
}

DeleteInstanceProfileOutcome IAMClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteInstanceProfile, this, request);
}

void IAMClient::DeleteInstanceProfileAsync(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteInstanceProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteInstanceProfileAsyncHelper(const DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstanceProfile(request), context);
}

DeleteLoginProfileOutcome IAMClient::DeleteLoginProfile(const DeleteLoginProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteLoginProfile, this, request);
}

void IAMClient::DeleteLoginProfileAsync(const DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteLoginProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteLoginProfileAsyncHelper(const DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoginProfile(request), context);
}

DeleteOpenIDConnectProviderOutcome IAMClient::DeleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteOpenIDConnectProvider, this, request);
}

void IAMClient::DeleteOpenIDConnectProviderAsync(const DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteOpenIDConnectProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteOpenIDConnectProviderAsyncHelper(const DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOpenIDConnectProvider(request), context);
}

DeletePolicyOutcome IAMClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeletePolicy, this, request);
}

void IAMClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeletePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicy(request), context);
}

DeletePolicyVersionOutcome IAMClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeletePolicyVersion, this, request);
}

void IAMClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeletePolicyVersionAsyncHelper, this, request, handler, context);
}

void IAMClient::DeletePolicyVersionAsyncHelper(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicyVersion(request), context);
}

DeleteRoleOutcome IAMClient::DeleteRole(const DeleteRoleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteRole, this, request);
}

void IAMClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteRoleAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteRoleAsyncHelper(const DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRole(request), context);
}

DeleteRolePolicyOutcome IAMClient::DeleteRolePolicy(const DeleteRolePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteRolePolicy, this, request);
}

void IAMClient::DeleteRolePolicyAsync(const DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteRolePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteRolePolicyAsyncHelper(const DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRolePolicy(request), context);
}

DeleteSAMLProviderOutcome IAMClient::DeleteSAMLProvider(const DeleteSAMLProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteSAMLProvider, this, request);
}

void IAMClient::DeleteSAMLProviderAsync(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteSAMLProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteSAMLProviderAsyncHelper(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSAMLProvider(request), context);
}

DeleteSSHPublicKeyOutcome IAMClient::DeleteSSHPublicKey(const DeleteSSHPublicKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteSSHPublicKey, this, request);
}

void IAMClient::DeleteSSHPublicKeyAsync(const DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteSSHPublicKeyAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteSSHPublicKeyAsyncHelper(const DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSSHPublicKey(request), context);
}

DeleteServerCertificateOutcome IAMClient::DeleteServerCertificate(const DeleteServerCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteServerCertificate, this, request);
}

void IAMClient::DeleteServerCertificateAsync(const DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteServerCertificateAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteServerCertificateAsyncHelper(const DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServerCertificate(request), context);
}

DeleteSigningCertificateOutcome IAMClient::DeleteSigningCertificate(const DeleteSigningCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteSigningCertificate, this, request);
}

void IAMClient::DeleteSigningCertificateAsync(const DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteSigningCertificateAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteSigningCertificateAsyncHelper(const DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSigningCertificate(request), context);
}

DeleteUserOutcome IAMClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteUser, this, request);
}

void IAMClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteUserAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DeleteUserPolicyOutcome IAMClient::DeleteUserPolicy(const DeleteUserPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteUserPolicy, this, request);
}

void IAMClient::DeleteUserPolicyAsync(const DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteUserPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteUserPolicyAsyncHelper(const DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserPolicy(request), context);
}

DeleteVirtualMFADeviceOutcome IAMClient::DeleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DeleteVirtualMFADevice, this, request);
}

void IAMClient::DeleteVirtualMFADeviceAsync(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DeleteVirtualMFADeviceAsyncHelper, this, request, handler, context);
}

void IAMClient::DeleteVirtualMFADeviceAsyncHelper(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualMFADevice(request), context);
}

DetachGroupPolicyOutcome IAMClient::DetachGroupPolicy(const DetachGroupPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DetachGroupPolicy, this, request);
}

void IAMClient::DetachGroupPolicyAsync(const DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DetachGroupPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DetachGroupPolicyAsyncHelper(const DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachGroupPolicy(request), context);
}

DetachRolePolicyOutcome IAMClient::DetachRolePolicy(const DetachRolePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DetachRolePolicy, this, request);
}

void IAMClient::DetachRolePolicyAsync(const DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DetachRolePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DetachRolePolicyAsyncHelper(const DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachRolePolicy(request), context);
}

DetachUserPolicyOutcome IAMClient::DetachUserPolicy(const DetachUserPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::DetachUserPolicy, this, request);
}

void IAMClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::DetachUserPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::DetachUserPolicyAsyncHelper(const DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachUserPolicy(request), context);
}

EnableMFADeviceOutcome IAMClient::EnableMFADevice(const EnableMFADeviceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::EnableMFADevice, this, request);
}

void IAMClient::EnableMFADeviceAsync(const EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::EnableMFADeviceAsyncHelper, this, request, handler, context);
}

void IAMClient::EnableMFADeviceAsyncHelper(const EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableMFADevice(request), context);
}

GenerateCredentialReportOutcome IAMClient::GenerateCredentialReport(const GenerateCredentialReportRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GenerateCredentialReport, this, request);
}

void IAMClient::GenerateCredentialReportAsync(const GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GenerateCredentialReportAsyncHelper, this, request, handler, context);
}

void IAMClient::GenerateCredentialReportAsyncHelper(const GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateCredentialReport(request), context);
}

GetAccessKeyLastUsedOutcome IAMClient::GetAccessKeyLastUsed(const GetAccessKeyLastUsedRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetAccessKeyLastUsed, this, request);
}

void IAMClient::GetAccessKeyLastUsedAsync(const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetAccessKeyLastUsedAsyncHelper, this, request, handler, context);
}

void IAMClient::GetAccessKeyLastUsedAsyncHelper(const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessKeyLastUsed(request), context);
}

GetAccountAuthorizationDetailsOutcome IAMClient::GetAccountAuthorizationDetails(const GetAccountAuthorizationDetailsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetAccountAuthorizationDetails, this, request);
}

void IAMClient::GetAccountAuthorizationDetailsAsync(const GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetAccountAuthorizationDetailsAsyncHelper, this, request, handler, context);
}

void IAMClient::GetAccountAuthorizationDetailsAsyncHelper(const GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountAuthorizationDetails(request), context);
}

GetAccountPasswordPolicyOutcome IAMClient::GetAccountPasswordPolicy(const GetAccountPasswordPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetAccountPasswordPolicy, this, request);
}

void IAMClient::GetAccountPasswordPolicyAsync(const GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetAccountPasswordPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetAccountPasswordPolicyAsyncHelper(const GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountPasswordPolicy(request), context);
}

GetAccountSummaryOutcome IAMClient::GetAccountSummary(const GetAccountSummaryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetAccountSummary, this, request);
}

void IAMClient::GetAccountSummaryAsync(const GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetAccountSummaryAsyncHelper, this, request, handler, context);
}

void IAMClient::GetAccountSummaryAsyncHelper(const GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountSummary(request), context);
}

GetContextKeysForCustomPolicyOutcome IAMClient::GetContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetContextKeysForCustomPolicy, this, request);
}

void IAMClient::GetContextKeysForCustomPolicyAsync(const GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetContextKeysForCustomPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetContextKeysForCustomPolicyAsyncHelper(const GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContextKeysForCustomPolicy(request), context);
}

GetContextKeysForPrincipalPolicyOutcome IAMClient::GetContextKeysForPrincipalPolicy(const GetContextKeysForPrincipalPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetContextKeysForPrincipalPolicy, this, request);
}

void IAMClient::GetContextKeysForPrincipalPolicyAsync(const GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetContextKeysForPrincipalPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetContextKeysForPrincipalPolicyAsyncHelper(const GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContextKeysForPrincipalPolicy(request), context);
}

GetCredentialReportOutcome IAMClient::GetCredentialReport(const GetCredentialReportRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetCredentialReport, this, request);
}

void IAMClient::GetCredentialReportAsync(const GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetCredentialReportAsyncHelper, this, request, handler, context);
}

void IAMClient::GetCredentialReportAsyncHelper(const GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCredentialReport(request), context);
}

GetGroupOutcome IAMClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetGroup, this, request);
}

void IAMClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetGroupAsyncHelper, this, request, handler, context);
}

void IAMClient::GetGroupAsyncHelper(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroup(request), context);
}

GetGroupPolicyOutcome IAMClient::GetGroupPolicy(const GetGroupPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetGroupPolicy, this, request);
}

void IAMClient::GetGroupPolicyAsync(const GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetGroupPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetGroupPolicyAsyncHelper(const GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroupPolicy(request), context);
}

GetInstanceProfileOutcome IAMClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetInstanceProfile, this, request);
}

void IAMClient::GetInstanceProfileAsync(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetInstanceProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::GetInstanceProfileAsyncHelper(const GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceProfile(request), context);
}

GetLoginProfileOutcome IAMClient::GetLoginProfile(const GetLoginProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetLoginProfile, this, request);
}

void IAMClient::GetLoginProfileAsync(const GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetLoginProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::GetLoginProfileAsyncHelper(const GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoginProfile(request), context);
}

GetOpenIDConnectProviderOutcome IAMClient::GetOpenIDConnectProvider(const GetOpenIDConnectProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetOpenIDConnectProvider, this, request);
}

void IAMClient::GetOpenIDConnectProviderAsync(const GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetOpenIDConnectProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::GetOpenIDConnectProviderAsyncHelper(const GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOpenIDConnectProvider(request), context);
}

GetPolicyOutcome IAMClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetPolicy, this, request);
}

void IAMClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetPolicyAsyncHelper(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicy(request), context);
}

GetPolicyVersionOutcome IAMClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetPolicyVersion, this, request);
}

void IAMClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetPolicyVersionAsyncHelper, this, request, handler, context);
}

void IAMClient::GetPolicyVersionAsyncHelper(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicyVersion(request), context);
}

GetRoleOutcome IAMClient::GetRole(const GetRoleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetRole, this, request);
}

void IAMClient::GetRoleAsync(const GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetRoleAsyncHelper, this, request, handler, context);
}

void IAMClient::GetRoleAsyncHelper(const GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRole(request), context);
}

GetRolePolicyOutcome IAMClient::GetRolePolicy(const GetRolePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetRolePolicy, this, request);
}

void IAMClient::GetRolePolicyAsync(const GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetRolePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetRolePolicyAsyncHelper(const GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRolePolicy(request), context);
}

GetSAMLProviderOutcome IAMClient::GetSAMLProvider(const GetSAMLProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetSAMLProvider, this, request);
}

void IAMClient::GetSAMLProviderAsync(const GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetSAMLProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::GetSAMLProviderAsyncHelper(const GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSAMLProvider(request), context);
}

GetSSHPublicKeyOutcome IAMClient::GetSSHPublicKey(const GetSSHPublicKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetSSHPublicKey, this, request);
}

void IAMClient::GetSSHPublicKeyAsync(const GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetSSHPublicKeyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetSSHPublicKeyAsyncHelper(const GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSSHPublicKey(request), context);
}

GetServerCertificateOutcome IAMClient::GetServerCertificate(const GetServerCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetServerCertificate, this, request);
}

void IAMClient::GetServerCertificateAsync(const GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetServerCertificateAsyncHelper, this, request, handler, context);
}

void IAMClient::GetServerCertificateAsyncHelper(const GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServerCertificate(request), context);
}

GetUserOutcome IAMClient::GetUser(const GetUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetUser, this, request);
}

void IAMClient::GetUserAsync(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetUserAsyncHelper, this, request, handler, context);
}

void IAMClient::GetUserAsyncHelper(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUser(request), context);
}

GetUserPolicyOutcome IAMClient::GetUserPolicy(const GetUserPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::GetUserPolicy, this, request);
}

void IAMClient::GetUserPolicyAsync(const GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::GetUserPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::GetUserPolicyAsyncHelper(const GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserPolicy(request), context);
}

ListAccessKeysOutcome IAMClient::ListAccessKeys(const ListAccessKeysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListAccessKeys, this, request);
}

void IAMClient::ListAccessKeysAsync(const ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListAccessKeysAsyncHelper, this, request, handler, context);
}

void IAMClient::ListAccessKeysAsyncHelper(const ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccessKeys(request), context);
}

ListAccountAliasesOutcome IAMClient::ListAccountAliases(const ListAccountAliasesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListAccountAliases, this, request);
}

void IAMClient::ListAccountAliasesAsync(const ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListAccountAliasesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListAccountAliasesAsyncHelper(const ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountAliases(request), context);
}

ListAttachedGroupPoliciesOutcome IAMClient::ListAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListAttachedGroupPolicies, this, request);
}

void IAMClient::ListAttachedGroupPoliciesAsync(const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListAttachedGroupPoliciesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListAttachedGroupPoliciesAsyncHelper(const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedGroupPolicies(request), context);
}

ListAttachedRolePoliciesOutcome IAMClient::ListAttachedRolePolicies(const ListAttachedRolePoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListAttachedRolePolicies, this, request);
}

void IAMClient::ListAttachedRolePoliciesAsync(const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListAttachedRolePoliciesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListAttachedRolePoliciesAsyncHelper(const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedRolePolicies(request), context);
}

ListAttachedUserPoliciesOutcome IAMClient::ListAttachedUserPolicies(const ListAttachedUserPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListAttachedUserPolicies, this, request);
}

void IAMClient::ListAttachedUserPoliciesAsync(const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListAttachedUserPoliciesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListAttachedUserPoliciesAsyncHelper(const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedUserPolicies(request), context);
}

ListEntitiesForPolicyOutcome IAMClient::ListEntitiesForPolicy(const ListEntitiesForPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListEntitiesForPolicy, this, request);
}

void IAMClient::ListEntitiesForPolicyAsync(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListEntitiesForPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::ListEntitiesForPolicyAsyncHelper(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntitiesForPolicy(request), context);
}

ListGroupPoliciesOutcome IAMClient::ListGroupPolicies(const ListGroupPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListGroupPolicies, this, request);
}

void IAMClient::ListGroupPoliciesAsync(const ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListGroupPoliciesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListGroupPoliciesAsyncHelper(const ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupPolicies(request), context);
}

ListGroupsOutcome IAMClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListGroups, this, request);
}

void IAMClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListGroupsAsyncHelper, this, request, handler, context);
}

void IAMClient::ListGroupsAsyncHelper(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroups(request), context);
}

ListGroupsForUserOutcome IAMClient::ListGroupsForUser(const ListGroupsForUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListGroupsForUser, this, request);
}

void IAMClient::ListGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListGroupsForUserAsyncHelper, this, request, handler, context);
}

void IAMClient::ListGroupsForUserAsyncHelper(const ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupsForUser(request), context);
}

ListInstanceProfilesOutcome IAMClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListInstanceProfiles, this, request);
}

void IAMClient::ListInstanceProfilesAsync(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListInstanceProfilesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListInstanceProfilesAsyncHelper(const ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceProfiles(request), context);
}

ListInstanceProfilesForRoleOutcome IAMClient::ListInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListInstanceProfilesForRole, this, request);
}

void IAMClient::ListInstanceProfilesForRoleAsync(const ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListInstanceProfilesForRoleAsyncHelper, this, request, handler, context);
}

void IAMClient::ListInstanceProfilesForRoleAsyncHelper(const ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceProfilesForRole(request), context);
}

ListMFADevicesOutcome IAMClient::ListMFADevices(const ListMFADevicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListMFADevices, this, request);
}

void IAMClient::ListMFADevicesAsync(const ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListMFADevicesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListMFADevicesAsyncHelper(const ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMFADevices(request), context);
}

ListOpenIDConnectProvidersOutcome IAMClient::ListOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListOpenIDConnectProviders, this, request);
}

void IAMClient::ListOpenIDConnectProvidersAsync(const ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListOpenIDConnectProvidersAsyncHelper, this, request, handler, context);
}

void IAMClient::ListOpenIDConnectProvidersAsyncHelper(const ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOpenIDConnectProviders(request), context);
}

ListPoliciesOutcome IAMClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListPolicies, this, request);
}

void IAMClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListPoliciesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListPoliciesAsyncHelper(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicies(request), context);
}

ListPolicyVersionsOutcome IAMClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListPolicyVersions, this, request);
}

void IAMClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListPolicyVersionsAsyncHelper, this, request, handler, context);
}

void IAMClient::ListPolicyVersionsAsyncHelper(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicyVersions(request), context);
}

ListRolePoliciesOutcome IAMClient::ListRolePolicies(const ListRolePoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListRolePolicies, this, request);
}

void IAMClient::ListRolePoliciesAsync(const ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListRolePoliciesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListRolePoliciesAsyncHelper(const ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRolePolicies(request), context);
}

ListRolesOutcome IAMClient::ListRoles(const ListRolesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListRoles, this, request);
}

void IAMClient::ListRolesAsync(const ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListRolesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListRolesAsyncHelper(const ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoles(request), context);
}

ListSAMLProvidersOutcome IAMClient::ListSAMLProviders(const ListSAMLProvidersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListSAMLProviders, this, request);
}

void IAMClient::ListSAMLProvidersAsync(const ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListSAMLProvidersAsyncHelper, this, request, handler, context);
}

void IAMClient::ListSAMLProvidersAsyncHelper(const ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSAMLProviders(request), context);
}

ListSSHPublicKeysOutcome IAMClient::ListSSHPublicKeys(const ListSSHPublicKeysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListSSHPublicKeys, this, request);
}

void IAMClient::ListSSHPublicKeysAsync(const ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListSSHPublicKeysAsyncHelper, this, request, handler, context);
}

void IAMClient::ListSSHPublicKeysAsyncHelper(const ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSSHPublicKeys(request), context);
}

ListServerCertificatesOutcome IAMClient::ListServerCertificates(const ListServerCertificatesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListServerCertificates, this, request);
}

void IAMClient::ListServerCertificatesAsync(const ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListServerCertificatesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListServerCertificatesAsyncHelper(const ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServerCertificates(request), context);
}

ListSigningCertificatesOutcome IAMClient::ListSigningCertificates(const ListSigningCertificatesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListSigningCertificates, this, request);
}

void IAMClient::ListSigningCertificatesAsync(const ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListSigningCertificatesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListSigningCertificatesAsyncHelper(const ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningCertificates(request), context);
}

ListUserPoliciesOutcome IAMClient::ListUserPolicies(const ListUserPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListUserPolicies, this, request);
}

void IAMClient::ListUserPoliciesAsync(const ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListUserPoliciesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListUserPoliciesAsyncHelper(const ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserPolicies(request), context);
}

ListUsersOutcome IAMClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListUsers, this, request);
}

void IAMClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListUsersAsyncHelper, this, request, handler, context);
}

void IAMClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

ListVirtualMFADevicesOutcome IAMClient::ListVirtualMFADevices(const ListVirtualMFADevicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ListVirtualMFADevices, this, request);
}

void IAMClient::ListVirtualMFADevicesAsync(const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ListVirtualMFADevicesAsyncHelper, this, request, handler, context);
}

void IAMClient::ListVirtualMFADevicesAsyncHelper(const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualMFADevices(request), context);
}

PutGroupPolicyOutcome IAMClient::PutGroupPolicy(const PutGroupPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::PutGroupPolicy, this, request);
}

void IAMClient::PutGroupPolicyAsync(const PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::PutGroupPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::PutGroupPolicyAsyncHelper(const PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutGroupPolicy(request), context);
}

PutRolePolicyOutcome IAMClient::PutRolePolicy(const PutRolePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::PutRolePolicy, this, request);
}

void IAMClient::PutRolePolicyAsync(const PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::PutRolePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::PutRolePolicyAsyncHelper(const PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRolePolicy(request), context);
}

PutUserPolicyOutcome IAMClient::PutUserPolicy(const PutUserPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::PutUserPolicy, this, request);
}

void IAMClient::PutUserPolicyAsync(const PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::PutUserPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::PutUserPolicyAsyncHelper(const PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutUserPolicy(request), context);
}

RemoveClientIDFromOpenIDConnectProviderOutcome IAMClient::RemoveClientIDFromOpenIDConnectProvider(const RemoveClientIDFromOpenIDConnectProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::RemoveClientIDFromOpenIDConnectProvider, this, request);
}

void IAMClient::RemoveClientIDFromOpenIDConnectProviderAsync(const RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::RemoveClientIDFromOpenIDConnectProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::RemoveClientIDFromOpenIDConnectProviderAsyncHelper(const RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveClientIDFromOpenIDConnectProvider(request), context);
}

RemoveRoleFromInstanceProfileOutcome IAMClient::RemoveRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::RemoveRoleFromInstanceProfile, this, request);
}

void IAMClient::RemoveRoleFromInstanceProfileAsync(const RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::RemoveRoleFromInstanceProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::RemoveRoleFromInstanceProfileAsyncHelper(const RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveRoleFromInstanceProfile(request), context);
}

RemoveUserFromGroupOutcome IAMClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::RemoveUserFromGroup, this, request);
}

void IAMClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::RemoveUserFromGroupAsyncHelper, this, request, handler, context);
}

void IAMClient::RemoveUserFromGroupAsyncHelper(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveUserFromGroup(request), context);
}

ResyncMFADeviceOutcome IAMClient::ResyncMFADevice(const ResyncMFADeviceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::ResyncMFADevice, this, request);
}

void IAMClient::ResyncMFADeviceAsync(const ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::ResyncMFADeviceAsyncHelper, this, request, handler, context);
}

void IAMClient::ResyncMFADeviceAsyncHelper(const ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResyncMFADevice(request), context);
}

SetDefaultPolicyVersionOutcome IAMClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::SetDefaultPolicyVersion, this, request);
}

void IAMClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::SetDefaultPolicyVersionAsyncHelper, this, request, handler, context);
}

void IAMClient::SetDefaultPolicyVersionAsyncHelper(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDefaultPolicyVersion(request), context);
}

SimulateCustomPolicyOutcome IAMClient::SimulateCustomPolicy(const SimulateCustomPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::SimulateCustomPolicy, this, request);
}

void IAMClient::SimulateCustomPolicyAsync(const SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::SimulateCustomPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::SimulateCustomPolicyAsyncHelper(const SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SimulateCustomPolicy(request), context);
}

SimulatePrincipalPolicyOutcome IAMClient::SimulatePrincipalPolicy(const SimulatePrincipalPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::SimulatePrincipalPolicy, this, request);
}

void IAMClient::SimulatePrincipalPolicyAsync(const SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::SimulatePrincipalPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::SimulatePrincipalPolicyAsyncHelper(const SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SimulatePrincipalPolicy(request), context);
}

UpdateAccessKeyOutcome IAMClient::UpdateAccessKey(const UpdateAccessKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateAccessKey, this, request);
}

void IAMClient::UpdateAccessKeyAsync(const UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateAccessKeyAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateAccessKeyAsyncHelper(const UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccessKey(request), context);
}

UpdateAccountPasswordPolicyOutcome IAMClient::UpdateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateAccountPasswordPolicy, this, request);
}

void IAMClient::UpdateAccountPasswordPolicyAsync(const UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateAccountPasswordPolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateAccountPasswordPolicyAsyncHelper(const UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccountPasswordPolicy(request), context);
}

UpdateAssumeRolePolicyOutcome IAMClient::UpdateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateAssumeRolePolicy, this, request);
}

void IAMClient::UpdateAssumeRolePolicyAsync(const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateAssumeRolePolicyAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateAssumeRolePolicyAsyncHelper(const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssumeRolePolicy(request), context);
}

UpdateGroupOutcome IAMClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateGroup, this, request);
}

void IAMClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateGroupAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateGroupAsyncHelper(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGroup(request), context);
}

UpdateLoginProfileOutcome IAMClient::UpdateLoginProfile(const UpdateLoginProfileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateLoginProfile, this, request);
}

void IAMClient::UpdateLoginProfileAsync(const UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateLoginProfileAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateLoginProfileAsyncHelper(const UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLoginProfile(request), context);
}

UpdateOpenIDConnectProviderThumbprintOutcome IAMClient::UpdateOpenIDConnectProviderThumbprint(const UpdateOpenIDConnectProviderThumbprintRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateOpenIDConnectProviderThumbprint, this, request);
}

void IAMClient::UpdateOpenIDConnectProviderThumbprintAsync(const UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateOpenIDConnectProviderThumbprintAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateOpenIDConnectProviderThumbprintAsyncHelper(const UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateOpenIDConnectProviderThumbprint(request), context);
}

UpdateSAMLProviderOutcome IAMClient::UpdateSAMLProvider(const UpdateSAMLProviderRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateSAMLProvider, this, request);
}

void IAMClient::UpdateSAMLProviderAsync(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateSAMLProviderAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateSAMLProviderAsyncHelper(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSAMLProvider(request), context);
}

UpdateSSHPublicKeyOutcome IAMClient::UpdateSSHPublicKey(const UpdateSSHPublicKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateSSHPublicKey, this, request);
}

void IAMClient::UpdateSSHPublicKeyAsync(const UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateSSHPublicKeyAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateSSHPublicKeyAsyncHelper(const UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSSHPublicKey(request), context);
}

UpdateServerCertificateOutcome IAMClient::UpdateServerCertificate(const UpdateServerCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateServerCertificate, this, request);
}

void IAMClient::UpdateServerCertificateAsync(const UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateServerCertificateAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateServerCertificateAsyncHelper(const UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServerCertificate(request), context);
}

UpdateSigningCertificateOutcome IAMClient::UpdateSigningCertificate(const UpdateSigningCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateSigningCertificate, this, request);
}

void IAMClient::UpdateSigningCertificateAsync(const UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateSigningCertificateAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateSigningCertificateAsyncHelper(const UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSigningCertificate(request), context);
}

UpdateUserOutcome IAMClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UpdateUser, this, request);
}

void IAMClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UpdateUserAsyncHelper, this, request, handler, context);
}

void IAMClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

UploadSSHPublicKeyOutcome IAMClient::UploadSSHPublicKey(const UploadSSHPublicKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UploadSSHPublicKey, this, request);
}

void IAMClient::UploadSSHPublicKeyAsync(const UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UploadSSHPublicKeyAsyncHelper, this, request, handler, context);
}

void IAMClient::UploadSSHPublicKeyAsyncHelper(const UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadSSHPublicKey(request), context);
}

UploadServerCertificateOutcome IAMClient::UploadServerCertificate(const UploadServerCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UploadServerCertificate, this, request);
}

void IAMClient::UploadServerCertificateAsync(const UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UploadServerCertificateAsyncHelper, this, request, handler, context);
}

void IAMClient::UploadServerCertificateAsyncHelper(const UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadServerCertificate(request), context);
}

UploadSigningCertificateOutcome IAMClient::UploadSigningCertificate(const UploadSigningCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IAMClient::UploadSigningCertificate, this, request);
}

void IAMClient::UploadSigningCertificateAsync(const UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IAMClient::UploadSigningCertificateAsyncHelper, this, request, handler, context);
}

void IAMClient::UploadSigningCertificateAsyncHelper(const UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadSigningCertificate(request), context);
}

