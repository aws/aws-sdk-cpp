/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/UpdateAccessKeyRequest.h>
#include <aws/iam/model/UpdateAccountPasswordPolicyRequest.h>
#include <aws/iam/model/UpdateAssumeRolePolicyRequest.h>
#include <aws/iam/model/UpdateGroupRequest.h>
#include <aws/iam/model/UpdateLoginProfileRequest.h>
#include <aws/iam/model/UpdateOpenIDConnectProviderThumbprintRequest.h>
#include <aws/iam/model/UpdateSAMLProviderRequest.h>
#include <aws/iam/model/UpdateServerCertificateRequest.h>
#include <aws/iam/model/UpdateSigningCertificateRequest.h>
#include <aws/iam/model/UpdateUserRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG), "iam.amazonaws.com"),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG), "iam.amazonaws.com"),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IAMClient::IAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG), "iam.amazonaws.com"),
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

  if(config.endpointOverride.empty())
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

void IAMClient::AddClientIDToOpenIDConnectProviderAsync(const AddClientIDToOpenIDConnectProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::AddClientIDToOpenIDConnectProviderAsyncHelper, this, request);
}

void IAMClient::AddClientIDToOpenIDConnectProviderAsyncHelper(const AddClientIDToOpenIDConnectProviderRequest& request) const
{
  m_onAddClientIDToOpenIDConnectProviderOutcomeReceived(this, request, AddClientIDToOpenIDConnectProvider(request));
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

void IAMClient::AddRoleToInstanceProfileAsync(const AddRoleToInstanceProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::AddRoleToInstanceProfileAsyncHelper, this, request);
}

void IAMClient::AddRoleToInstanceProfileAsyncHelper(const AddRoleToInstanceProfileRequest& request) const
{
  m_onAddRoleToInstanceProfileOutcomeReceived(this, request, AddRoleToInstanceProfile(request));
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

void IAMClient::AddUserToGroupAsync(const AddUserToGroupRequest& request) const
{
  m_executor->Submit(&IAMClient::AddUserToGroupAsyncHelper, this, request);
}

void IAMClient::AddUserToGroupAsyncHelper(const AddUserToGroupRequest& request) const
{
  m_onAddUserToGroupOutcomeReceived(this, request, AddUserToGroup(request));
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

void IAMClient::AttachGroupPolicyAsync(const AttachGroupPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::AttachGroupPolicyAsyncHelper, this, request);
}

void IAMClient::AttachGroupPolicyAsyncHelper(const AttachGroupPolicyRequest& request) const
{
  m_onAttachGroupPolicyOutcomeReceived(this, request, AttachGroupPolicy(request));
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

void IAMClient::AttachRolePolicyAsync(const AttachRolePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::AttachRolePolicyAsyncHelper, this, request);
}

void IAMClient::AttachRolePolicyAsyncHelper(const AttachRolePolicyRequest& request) const
{
  m_onAttachRolePolicyOutcomeReceived(this, request, AttachRolePolicy(request));
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

void IAMClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::AttachUserPolicyAsyncHelper, this, request);
}

void IAMClient::AttachUserPolicyAsyncHelper(const AttachUserPolicyRequest& request) const
{
  m_onAttachUserPolicyOutcomeReceived(this, request, AttachUserPolicy(request));
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

void IAMClient::ChangePasswordAsync(const ChangePasswordRequest& request) const
{
  m_executor->Submit(&IAMClient::ChangePasswordAsyncHelper, this, request);
}

void IAMClient::ChangePasswordAsyncHelper(const ChangePasswordRequest& request) const
{
  m_onChangePasswordOutcomeReceived(this, request, ChangePassword(request));
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

void IAMClient::CreateAccessKeyAsync(const CreateAccessKeyRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateAccessKeyAsyncHelper, this, request);
}

void IAMClient::CreateAccessKeyAsyncHelper(const CreateAccessKeyRequest& request) const
{
  m_onCreateAccessKeyOutcomeReceived(this, request, CreateAccessKey(request));
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

void IAMClient::CreateAccountAliasAsync(const CreateAccountAliasRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateAccountAliasAsyncHelper, this, request);
}

void IAMClient::CreateAccountAliasAsyncHelper(const CreateAccountAliasRequest& request) const
{
  m_onCreateAccountAliasOutcomeReceived(this, request, CreateAccountAlias(request));
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

void IAMClient::CreateGroupAsync(const CreateGroupRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateGroupAsyncHelper, this, request);
}

void IAMClient::CreateGroupAsyncHelper(const CreateGroupRequest& request) const
{
  m_onCreateGroupOutcomeReceived(this, request, CreateGroup(request));
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

void IAMClient::CreateInstanceProfileAsync(const CreateInstanceProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateInstanceProfileAsyncHelper, this, request);
}

void IAMClient::CreateInstanceProfileAsyncHelper(const CreateInstanceProfileRequest& request) const
{
  m_onCreateInstanceProfileOutcomeReceived(this, request, CreateInstanceProfile(request));
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

void IAMClient::CreateLoginProfileAsync(const CreateLoginProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateLoginProfileAsyncHelper, this, request);
}

void IAMClient::CreateLoginProfileAsyncHelper(const CreateLoginProfileRequest& request) const
{
  m_onCreateLoginProfileOutcomeReceived(this, request, CreateLoginProfile(request));
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

void IAMClient::CreateOpenIDConnectProviderAsync(const CreateOpenIDConnectProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateOpenIDConnectProviderAsyncHelper, this, request);
}

void IAMClient::CreateOpenIDConnectProviderAsyncHelper(const CreateOpenIDConnectProviderRequest& request) const
{
  m_onCreateOpenIDConnectProviderOutcomeReceived(this, request, CreateOpenIDConnectProvider(request));
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

void IAMClient::CreatePolicyAsync(const CreatePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::CreatePolicyAsyncHelper, this, request);
}

void IAMClient::CreatePolicyAsyncHelper(const CreatePolicyRequest& request) const
{
  m_onCreatePolicyOutcomeReceived(this, request, CreatePolicy(request));
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

void IAMClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request) const
{
  m_executor->Submit(&IAMClient::CreatePolicyVersionAsyncHelper, this, request);
}

void IAMClient::CreatePolicyVersionAsyncHelper(const CreatePolicyVersionRequest& request) const
{
  m_onCreatePolicyVersionOutcomeReceived(this, request, CreatePolicyVersion(request));
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

void IAMClient::CreateRoleAsync(const CreateRoleRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateRoleAsyncHelper, this, request);
}

void IAMClient::CreateRoleAsyncHelper(const CreateRoleRequest& request) const
{
  m_onCreateRoleOutcomeReceived(this, request, CreateRole(request));
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

void IAMClient::CreateSAMLProviderAsync(const CreateSAMLProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateSAMLProviderAsyncHelper, this, request);
}

void IAMClient::CreateSAMLProviderAsyncHelper(const CreateSAMLProviderRequest& request) const
{
  m_onCreateSAMLProviderOutcomeReceived(this, request, CreateSAMLProvider(request));
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

void IAMClient::CreateUserAsync(const CreateUserRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateUserAsyncHelper, this, request);
}

void IAMClient::CreateUserAsyncHelper(const CreateUserRequest& request) const
{
  m_onCreateUserOutcomeReceived(this, request, CreateUser(request));
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

void IAMClient::CreateVirtualMFADeviceAsync(const CreateVirtualMFADeviceRequest& request) const
{
  m_executor->Submit(&IAMClient::CreateVirtualMFADeviceAsyncHelper, this, request);
}

void IAMClient::CreateVirtualMFADeviceAsyncHelper(const CreateVirtualMFADeviceRequest& request) const
{
  m_onCreateVirtualMFADeviceOutcomeReceived(this, request, CreateVirtualMFADevice(request));
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

void IAMClient::DeactivateMFADeviceAsync(const DeactivateMFADeviceRequest& request) const
{
  m_executor->Submit(&IAMClient::DeactivateMFADeviceAsyncHelper, this, request);
}

void IAMClient::DeactivateMFADeviceAsyncHelper(const DeactivateMFADeviceRequest& request) const
{
  m_onDeactivateMFADeviceOutcomeReceived(this, request, DeactivateMFADevice(request));
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

void IAMClient::DeleteAccessKeyAsync(const DeleteAccessKeyRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteAccessKeyAsyncHelper, this, request);
}

void IAMClient::DeleteAccessKeyAsyncHelper(const DeleteAccessKeyRequest& request) const
{
  m_onDeleteAccessKeyOutcomeReceived(this, request, DeleteAccessKey(request));
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

void IAMClient::DeleteAccountAliasAsync(const DeleteAccountAliasRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteAccountAliasAsyncHelper, this, request);
}

void IAMClient::DeleteAccountAliasAsyncHelper(const DeleteAccountAliasRequest& request) const
{
  m_onDeleteAccountAliasOutcomeReceived(this, request, DeleteAccountAlias(request));
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

void IAMClient::DeleteAccountPasswordPolicyAsync(const DeleteAccountPasswordPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteAccountPasswordPolicyAsyncHelper, this, request);
}

void IAMClient::DeleteAccountPasswordPolicyAsyncHelper(const DeleteAccountPasswordPolicyRequest& request) const
{
  m_onDeleteAccountPasswordPolicyOutcomeReceived(this, request, DeleteAccountPasswordPolicy(request));
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

void IAMClient::DeleteGroupAsync(const DeleteGroupRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteGroupAsyncHelper, this, request);
}

void IAMClient::DeleteGroupAsyncHelper(const DeleteGroupRequest& request) const
{
  m_onDeleteGroupOutcomeReceived(this, request, DeleteGroup(request));
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

void IAMClient::DeleteGroupPolicyAsync(const DeleteGroupPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteGroupPolicyAsyncHelper, this, request);
}

void IAMClient::DeleteGroupPolicyAsyncHelper(const DeleteGroupPolicyRequest& request) const
{
  m_onDeleteGroupPolicyOutcomeReceived(this, request, DeleteGroupPolicy(request));
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

void IAMClient::DeleteInstanceProfileAsync(const DeleteInstanceProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteInstanceProfileAsyncHelper, this, request);
}

void IAMClient::DeleteInstanceProfileAsyncHelper(const DeleteInstanceProfileRequest& request) const
{
  m_onDeleteInstanceProfileOutcomeReceived(this, request, DeleteInstanceProfile(request));
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

void IAMClient::DeleteLoginProfileAsync(const DeleteLoginProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteLoginProfileAsyncHelper, this, request);
}

void IAMClient::DeleteLoginProfileAsyncHelper(const DeleteLoginProfileRequest& request) const
{
  m_onDeleteLoginProfileOutcomeReceived(this, request, DeleteLoginProfile(request));
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

void IAMClient::DeleteOpenIDConnectProviderAsync(const DeleteOpenIDConnectProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteOpenIDConnectProviderAsyncHelper, this, request);
}

void IAMClient::DeleteOpenIDConnectProviderAsyncHelper(const DeleteOpenIDConnectProviderRequest& request) const
{
  m_onDeleteOpenIDConnectProviderOutcomeReceived(this, request, DeleteOpenIDConnectProvider(request));
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

void IAMClient::DeletePolicyAsync(const DeletePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DeletePolicyAsyncHelper, this, request);
}

void IAMClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request) const
{
  m_onDeletePolicyOutcomeReceived(this, request, DeletePolicy(request));
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

void IAMClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request) const
{
  m_executor->Submit(&IAMClient::DeletePolicyVersionAsyncHelper, this, request);
}

void IAMClient::DeletePolicyVersionAsyncHelper(const DeletePolicyVersionRequest& request) const
{
  m_onDeletePolicyVersionOutcomeReceived(this, request, DeletePolicyVersion(request));
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

void IAMClient::DeleteRoleAsync(const DeleteRoleRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteRoleAsyncHelper, this, request);
}

void IAMClient::DeleteRoleAsyncHelper(const DeleteRoleRequest& request) const
{
  m_onDeleteRoleOutcomeReceived(this, request, DeleteRole(request));
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

void IAMClient::DeleteRolePolicyAsync(const DeleteRolePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteRolePolicyAsyncHelper, this, request);
}

void IAMClient::DeleteRolePolicyAsyncHelper(const DeleteRolePolicyRequest& request) const
{
  m_onDeleteRolePolicyOutcomeReceived(this, request, DeleteRolePolicy(request));
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

void IAMClient::DeleteSAMLProviderAsync(const DeleteSAMLProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteSAMLProviderAsyncHelper, this, request);
}

void IAMClient::DeleteSAMLProviderAsyncHelper(const DeleteSAMLProviderRequest& request) const
{
  m_onDeleteSAMLProviderOutcomeReceived(this, request, DeleteSAMLProvider(request));
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

void IAMClient::DeleteServerCertificateAsync(const DeleteServerCertificateRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteServerCertificateAsyncHelper, this, request);
}

void IAMClient::DeleteServerCertificateAsyncHelper(const DeleteServerCertificateRequest& request) const
{
  m_onDeleteServerCertificateOutcomeReceived(this, request, DeleteServerCertificate(request));
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

void IAMClient::DeleteSigningCertificateAsync(const DeleteSigningCertificateRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteSigningCertificateAsyncHelper, this, request);
}

void IAMClient::DeleteSigningCertificateAsyncHelper(const DeleteSigningCertificateRequest& request) const
{
  m_onDeleteSigningCertificateOutcomeReceived(this, request, DeleteSigningCertificate(request));
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

void IAMClient::DeleteUserAsync(const DeleteUserRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteUserAsyncHelper, this, request);
}

void IAMClient::DeleteUserAsyncHelper(const DeleteUserRequest& request) const
{
  m_onDeleteUserOutcomeReceived(this, request, DeleteUser(request));
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

void IAMClient::DeleteUserPolicyAsync(const DeleteUserPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteUserPolicyAsyncHelper, this, request);
}

void IAMClient::DeleteUserPolicyAsyncHelper(const DeleteUserPolicyRequest& request) const
{
  m_onDeleteUserPolicyOutcomeReceived(this, request, DeleteUserPolicy(request));
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

void IAMClient::DeleteVirtualMFADeviceAsync(const DeleteVirtualMFADeviceRequest& request) const
{
  m_executor->Submit(&IAMClient::DeleteVirtualMFADeviceAsyncHelper, this, request);
}

void IAMClient::DeleteVirtualMFADeviceAsyncHelper(const DeleteVirtualMFADeviceRequest& request) const
{
  m_onDeleteVirtualMFADeviceOutcomeReceived(this, request, DeleteVirtualMFADevice(request));
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

void IAMClient::DetachGroupPolicyAsync(const DetachGroupPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DetachGroupPolicyAsyncHelper, this, request);
}

void IAMClient::DetachGroupPolicyAsyncHelper(const DetachGroupPolicyRequest& request) const
{
  m_onDetachGroupPolicyOutcomeReceived(this, request, DetachGroupPolicy(request));
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

void IAMClient::DetachRolePolicyAsync(const DetachRolePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DetachRolePolicyAsyncHelper, this, request);
}

void IAMClient::DetachRolePolicyAsyncHelper(const DetachRolePolicyRequest& request) const
{
  m_onDetachRolePolicyOutcomeReceived(this, request, DetachRolePolicy(request));
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

void IAMClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::DetachUserPolicyAsyncHelper, this, request);
}

void IAMClient::DetachUserPolicyAsyncHelper(const DetachUserPolicyRequest& request) const
{
  m_onDetachUserPolicyOutcomeReceived(this, request, DetachUserPolicy(request));
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

void IAMClient::EnableMFADeviceAsync(const EnableMFADeviceRequest& request) const
{
  m_executor->Submit(&IAMClient::EnableMFADeviceAsyncHelper, this, request);
}

void IAMClient::EnableMFADeviceAsyncHelper(const EnableMFADeviceRequest& request) const
{
  m_onEnableMFADeviceOutcomeReceived(this, request, EnableMFADevice(request));
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

void IAMClient::GenerateCredentialReportAsync(const GenerateCredentialReportRequest& request) const
{
  m_executor->Submit(&IAMClient::GenerateCredentialReportAsyncHelper, this, request);
}

void IAMClient::GenerateCredentialReportAsyncHelper(const GenerateCredentialReportRequest& request) const
{
  m_onGenerateCredentialReportOutcomeReceived(this, request, GenerateCredentialReport(request));
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

void IAMClient::GetAccessKeyLastUsedAsync(const GetAccessKeyLastUsedRequest& request) const
{
  m_executor->Submit(&IAMClient::GetAccessKeyLastUsedAsyncHelper, this, request);
}

void IAMClient::GetAccessKeyLastUsedAsyncHelper(const GetAccessKeyLastUsedRequest& request) const
{
  m_onGetAccessKeyLastUsedOutcomeReceived(this, request, GetAccessKeyLastUsed(request));
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

void IAMClient::GetAccountAuthorizationDetailsAsync(const GetAccountAuthorizationDetailsRequest& request) const
{
  m_executor->Submit(&IAMClient::GetAccountAuthorizationDetailsAsyncHelper, this, request);
}

void IAMClient::GetAccountAuthorizationDetailsAsyncHelper(const GetAccountAuthorizationDetailsRequest& request) const
{
  m_onGetAccountAuthorizationDetailsOutcomeReceived(this, request, GetAccountAuthorizationDetails(request));
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

void IAMClient::GetAccountPasswordPolicyAsync(const GetAccountPasswordPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::GetAccountPasswordPolicyAsyncHelper, this, request);
}

void IAMClient::GetAccountPasswordPolicyAsyncHelper(const GetAccountPasswordPolicyRequest& request) const
{
  m_onGetAccountPasswordPolicyOutcomeReceived(this, request, GetAccountPasswordPolicy(request));
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

void IAMClient::GetAccountSummaryAsync(const GetAccountSummaryRequest& request) const
{
  m_executor->Submit(&IAMClient::GetAccountSummaryAsyncHelper, this, request);
}

void IAMClient::GetAccountSummaryAsyncHelper(const GetAccountSummaryRequest& request) const
{
  m_onGetAccountSummaryOutcomeReceived(this, request, GetAccountSummary(request));
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

void IAMClient::GetCredentialReportAsync(const GetCredentialReportRequest& request) const
{
  m_executor->Submit(&IAMClient::GetCredentialReportAsyncHelper, this, request);
}

void IAMClient::GetCredentialReportAsyncHelper(const GetCredentialReportRequest& request) const
{
  m_onGetCredentialReportOutcomeReceived(this, request, GetCredentialReport(request));
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

void IAMClient::GetGroupAsync(const GetGroupRequest& request) const
{
  m_executor->Submit(&IAMClient::GetGroupAsyncHelper, this, request);
}

void IAMClient::GetGroupAsyncHelper(const GetGroupRequest& request) const
{
  m_onGetGroupOutcomeReceived(this, request, GetGroup(request));
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

void IAMClient::GetGroupPolicyAsync(const GetGroupPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::GetGroupPolicyAsyncHelper, this, request);
}

void IAMClient::GetGroupPolicyAsyncHelper(const GetGroupPolicyRequest& request) const
{
  m_onGetGroupPolicyOutcomeReceived(this, request, GetGroupPolicy(request));
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

void IAMClient::GetInstanceProfileAsync(const GetInstanceProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::GetInstanceProfileAsyncHelper, this, request);
}

void IAMClient::GetInstanceProfileAsyncHelper(const GetInstanceProfileRequest& request) const
{
  m_onGetInstanceProfileOutcomeReceived(this, request, GetInstanceProfile(request));
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

void IAMClient::GetLoginProfileAsync(const GetLoginProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::GetLoginProfileAsyncHelper, this, request);
}

void IAMClient::GetLoginProfileAsyncHelper(const GetLoginProfileRequest& request) const
{
  m_onGetLoginProfileOutcomeReceived(this, request, GetLoginProfile(request));
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

void IAMClient::GetOpenIDConnectProviderAsync(const GetOpenIDConnectProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::GetOpenIDConnectProviderAsyncHelper, this, request);
}

void IAMClient::GetOpenIDConnectProviderAsyncHelper(const GetOpenIDConnectProviderRequest& request) const
{
  m_onGetOpenIDConnectProviderOutcomeReceived(this, request, GetOpenIDConnectProvider(request));
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

void IAMClient::GetPolicyAsync(const GetPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::GetPolicyAsyncHelper, this, request);
}

void IAMClient::GetPolicyAsyncHelper(const GetPolicyRequest& request) const
{
  m_onGetPolicyOutcomeReceived(this, request, GetPolicy(request));
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

void IAMClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request) const
{
  m_executor->Submit(&IAMClient::GetPolicyVersionAsyncHelper, this, request);
}

void IAMClient::GetPolicyVersionAsyncHelper(const GetPolicyVersionRequest& request) const
{
  m_onGetPolicyVersionOutcomeReceived(this, request, GetPolicyVersion(request));
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

void IAMClient::GetRoleAsync(const GetRoleRequest& request) const
{
  m_executor->Submit(&IAMClient::GetRoleAsyncHelper, this, request);
}

void IAMClient::GetRoleAsyncHelper(const GetRoleRequest& request) const
{
  m_onGetRoleOutcomeReceived(this, request, GetRole(request));
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

void IAMClient::GetRolePolicyAsync(const GetRolePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::GetRolePolicyAsyncHelper, this, request);
}

void IAMClient::GetRolePolicyAsyncHelper(const GetRolePolicyRequest& request) const
{
  m_onGetRolePolicyOutcomeReceived(this, request, GetRolePolicy(request));
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

void IAMClient::GetSAMLProviderAsync(const GetSAMLProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::GetSAMLProviderAsyncHelper, this, request);
}

void IAMClient::GetSAMLProviderAsyncHelper(const GetSAMLProviderRequest& request) const
{
  m_onGetSAMLProviderOutcomeReceived(this, request, GetSAMLProvider(request));
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

void IAMClient::GetServerCertificateAsync(const GetServerCertificateRequest& request) const
{
  m_executor->Submit(&IAMClient::GetServerCertificateAsyncHelper, this, request);
}

void IAMClient::GetServerCertificateAsyncHelper(const GetServerCertificateRequest& request) const
{
  m_onGetServerCertificateOutcomeReceived(this, request, GetServerCertificate(request));
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

void IAMClient::GetUserAsync(const GetUserRequest& request) const
{
  m_executor->Submit(&IAMClient::GetUserAsyncHelper, this, request);
}

void IAMClient::GetUserAsyncHelper(const GetUserRequest& request) const
{
  m_onGetUserOutcomeReceived(this, request, GetUser(request));
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

void IAMClient::GetUserPolicyAsync(const GetUserPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::GetUserPolicyAsyncHelper, this, request);
}

void IAMClient::GetUserPolicyAsyncHelper(const GetUserPolicyRequest& request) const
{
  m_onGetUserPolicyOutcomeReceived(this, request, GetUserPolicy(request));
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

void IAMClient::ListAccessKeysAsync(const ListAccessKeysRequest& request) const
{
  m_executor->Submit(&IAMClient::ListAccessKeysAsyncHelper, this, request);
}

void IAMClient::ListAccessKeysAsyncHelper(const ListAccessKeysRequest& request) const
{
  m_onListAccessKeysOutcomeReceived(this, request, ListAccessKeys(request));
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

void IAMClient::ListAccountAliasesAsync(const ListAccountAliasesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListAccountAliasesAsyncHelper, this, request);
}

void IAMClient::ListAccountAliasesAsyncHelper(const ListAccountAliasesRequest& request) const
{
  m_onListAccountAliasesOutcomeReceived(this, request, ListAccountAliases(request));
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

void IAMClient::ListAttachedGroupPoliciesAsync(const ListAttachedGroupPoliciesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListAttachedGroupPoliciesAsyncHelper, this, request);
}

void IAMClient::ListAttachedGroupPoliciesAsyncHelper(const ListAttachedGroupPoliciesRequest& request) const
{
  m_onListAttachedGroupPoliciesOutcomeReceived(this, request, ListAttachedGroupPolicies(request));
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

void IAMClient::ListAttachedRolePoliciesAsync(const ListAttachedRolePoliciesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListAttachedRolePoliciesAsyncHelper, this, request);
}

void IAMClient::ListAttachedRolePoliciesAsyncHelper(const ListAttachedRolePoliciesRequest& request) const
{
  m_onListAttachedRolePoliciesOutcomeReceived(this, request, ListAttachedRolePolicies(request));
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

void IAMClient::ListAttachedUserPoliciesAsync(const ListAttachedUserPoliciesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListAttachedUserPoliciesAsyncHelper, this, request);
}

void IAMClient::ListAttachedUserPoliciesAsyncHelper(const ListAttachedUserPoliciesRequest& request) const
{
  m_onListAttachedUserPoliciesOutcomeReceived(this, request, ListAttachedUserPolicies(request));
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

void IAMClient::ListEntitiesForPolicyAsync(const ListEntitiesForPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::ListEntitiesForPolicyAsyncHelper, this, request);
}

void IAMClient::ListEntitiesForPolicyAsyncHelper(const ListEntitiesForPolicyRequest& request) const
{
  m_onListEntitiesForPolicyOutcomeReceived(this, request, ListEntitiesForPolicy(request));
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

void IAMClient::ListGroupPoliciesAsync(const ListGroupPoliciesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListGroupPoliciesAsyncHelper, this, request);
}

void IAMClient::ListGroupPoliciesAsyncHelper(const ListGroupPoliciesRequest& request) const
{
  m_onListGroupPoliciesOutcomeReceived(this, request, ListGroupPolicies(request));
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

void IAMClient::ListGroupsAsync(const ListGroupsRequest& request) const
{
  m_executor->Submit(&IAMClient::ListGroupsAsyncHelper, this, request);
}

void IAMClient::ListGroupsAsyncHelper(const ListGroupsRequest& request) const
{
  m_onListGroupsOutcomeReceived(this, request, ListGroups(request));
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

void IAMClient::ListGroupsForUserAsync(const ListGroupsForUserRequest& request) const
{
  m_executor->Submit(&IAMClient::ListGroupsForUserAsyncHelper, this, request);
}

void IAMClient::ListGroupsForUserAsyncHelper(const ListGroupsForUserRequest& request) const
{
  m_onListGroupsForUserOutcomeReceived(this, request, ListGroupsForUser(request));
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

void IAMClient::ListInstanceProfilesAsync(const ListInstanceProfilesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListInstanceProfilesAsyncHelper, this, request);
}

void IAMClient::ListInstanceProfilesAsyncHelper(const ListInstanceProfilesRequest& request) const
{
  m_onListInstanceProfilesOutcomeReceived(this, request, ListInstanceProfiles(request));
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

void IAMClient::ListInstanceProfilesForRoleAsync(const ListInstanceProfilesForRoleRequest& request) const
{
  m_executor->Submit(&IAMClient::ListInstanceProfilesForRoleAsyncHelper, this, request);
}

void IAMClient::ListInstanceProfilesForRoleAsyncHelper(const ListInstanceProfilesForRoleRequest& request) const
{
  m_onListInstanceProfilesForRoleOutcomeReceived(this, request, ListInstanceProfilesForRole(request));
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

void IAMClient::ListMFADevicesAsync(const ListMFADevicesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListMFADevicesAsyncHelper, this, request);
}

void IAMClient::ListMFADevicesAsyncHelper(const ListMFADevicesRequest& request) const
{
  m_onListMFADevicesOutcomeReceived(this, request, ListMFADevices(request));
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

void IAMClient::ListOpenIDConnectProvidersAsync(const ListOpenIDConnectProvidersRequest& request) const
{
  m_executor->Submit(&IAMClient::ListOpenIDConnectProvidersAsyncHelper, this, request);
}

void IAMClient::ListOpenIDConnectProvidersAsyncHelper(const ListOpenIDConnectProvidersRequest& request) const
{
  m_onListOpenIDConnectProvidersOutcomeReceived(this, request, ListOpenIDConnectProviders(request));
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

void IAMClient::ListPoliciesAsync(const ListPoliciesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListPoliciesAsyncHelper, this, request);
}

void IAMClient::ListPoliciesAsyncHelper(const ListPoliciesRequest& request) const
{
  m_onListPoliciesOutcomeReceived(this, request, ListPolicies(request));
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

void IAMClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request) const
{
  m_executor->Submit(&IAMClient::ListPolicyVersionsAsyncHelper, this, request);
}

void IAMClient::ListPolicyVersionsAsyncHelper(const ListPolicyVersionsRequest& request) const
{
  m_onListPolicyVersionsOutcomeReceived(this, request, ListPolicyVersions(request));
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

void IAMClient::ListRolePoliciesAsync(const ListRolePoliciesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListRolePoliciesAsyncHelper, this, request);
}

void IAMClient::ListRolePoliciesAsyncHelper(const ListRolePoliciesRequest& request) const
{
  m_onListRolePoliciesOutcomeReceived(this, request, ListRolePolicies(request));
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

void IAMClient::ListRolesAsync(const ListRolesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListRolesAsyncHelper, this, request);
}

void IAMClient::ListRolesAsyncHelper(const ListRolesRequest& request) const
{
  m_onListRolesOutcomeReceived(this, request, ListRoles(request));
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

void IAMClient::ListSAMLProvidersAsync(const ListSAMLProvidersRequest& request) const
{
  m_executor->Submit(&IAMClient::ListSAMLProvidersAsyncHelper, this, request);
}

void IAMClient::ListSAMLProvidersAsyncHelper(const ListSAMLProvidersRequest& request) const
{
  m_onListSAMLProvidersOutcomeReceived(this, request, ListSAMLProviders(request));
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

void IAMClient::ListServerCertificatesAsync(const ListServerCertificatesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListServerCertificatesAsyncHelper, this, request);
}

void IAMClient::ListServerCertificatesAsyncHelper(const ListServerCertificatesRequest& request) const
{
  m_onListServerCertificatesOutcomeReceived(this, request, ListServerCertificates(request));
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

void IAMClient::ListSigningCertificatesAsync(const ListSigningCertificatesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListSigningCertificatesAsyncHelper, this, request);
}

void IAMClient::ListSigningCertificatesAsyncHelper(const ListSigningCertificatesRequest& request) const
{
  m_onListSigningCertificatesOutcomeReceived(this, request, ListSigningCertificates(request));
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

void IAMClient::ListUserPoliciesAsync(const ListUserPoliciesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListUserPoliciesAsyncHelper, this, request);
}

void IAMClient::ListUserPoliciesAsyncHelper(const ListUserPoliciesRequest& request) const
{
  m_onListUserPoliciesOutcomeReceived(this, request, ListUserPolicies(request));
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

void IAMClient::ListUsersAsync(const ListUsersRequest& request) const
{
  m_executor->Submit(&IAMClient::ListUsersAsyncHelper, this, request);
}

void IAMClient::ListUsersAsyncHelper(const ListUsersRequest& request) const
{
  m_onListUsersOutcomeReceived(this, request, ListUsers(request));
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

void IAMClient::ListVirtualMFADevicesAsync(const ListVirtualMFADevicesRequest& request) const
{
  m_executor->Submit(&IAMClient::ListVirtualMFADevicesAsyncHelper, this, request);
}

void IAMClient::ListVirtualMFADevicesAsyncHelper(const ListVirtualMFADevicesRequest& request) const
{
  m_onListVirtualMFADevicesOutcomeReceived(this, request, ListVirtualMFADevices(request));
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

void IAMClient::PutGroupPolicyAsync(const PutGroupPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::PutGroupPolicyAsyncHelper, this, request);
}

void IAMClient::PutGroupPolicyAsyncHelper(const PutGroupPolicyRequest& request) const
{
  m_onPutGroupPolicyOutcomeReceived(this, request, PutGroupPolicy(request));
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

void IAMClient::PutRolePolicyAsync(const PutRolePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::PutRolePolicyAsyncHelper, this, request);
}

void IAMClient::PutRolePolicyAsyncHelper(const PutRolePolicyRequest& request) const
{
  m_onPutRolePolicyOutcomeReceived(this, request, PutRolePolicy(request));
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

void IAMClient::PutUserPolicyAsync(const PutUserPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::PutUserPolicyAsyncHelper, this, request);
}

void IAMClient::PutUserPolicyAsyncHelper(const PutUserPolicyRequest& request) const
{
  m_onPutUserPolicyOutcomeReceived(this, request, PutUserPolicy(request));
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

void IAMClient::RemoveClientIDFromOpenIDConnectProviderAsync(const RemoveClientIDFromOpenIDConnectProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::RemoveClientIDFromOpenIDConnectProviderAsyncHelper, this, request);
}

void IAMClient::RemoveClientIDFromOpenIDConnectProviderAsyncHelper(const RemoveClientIDFromOpenIDConnectProviderRequest& request) const
{
  m_onRemoveClientIDFromOpenIDConnectProviderOutcomeReceived(this, request, RemoveClientIDFromOpenIDConnectProvider(request));
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

void IAMClient::RemoveRoleFromInstanceProfileAsync(const RemoveRoleFromInstanceProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::RemoveRoleFromInstanceProfileAsyncHelper, this, request);
}

void IAMClient::RemoveRoleFromInstanceProfileAsyncHelper(const RemoveRoleFromInstanceProfileRequest& request) const
{
  m_onRemoveRoleFromInstanceProfileOutcomeReceived(this, request, RemoveRoleFromInstanceProfile(request));
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

void IAMClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request) const
{
  m_executor->Submit(&IAMClient::RemoveUserFromGroupAsyncHelper, this, request);
}

void IAMClient::RemoveUserFromGroupAsyncHelper(const RemoveUserFromGroupRequest& request) const
{
  m_onRemoveUserFromGroupOutcomeReceived(this, request, RemoveUserFromGroup(request));
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

void IAMClient::ResyncMFADeviceAsync(const ResyncMFADeviceRequest& request) const
{
  m_executor->Submit(&IAMClient::ResyncMFADeviceAsyncHelper, this, request);
}

void IAMClient::ResyncMFADeviceAsyncHelper(const ResyncMFADeviceRequest& request) const
{
  m_onResyncMFADeviceOutcomeReceived(this, request, ResyncMFADevice(request));
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

void IAMClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request) const
{
  m_executor->Submit(&IAMClient::SetDefaultPolicyVersionAsyncHelper, this, request);
}

void IAMClient::SetDefaultPolicyVersionAsyncHelper(const SetDefaultPolicyVersionRequest& request) const
{
  m_onSetDefaultPolicyVersionOutcomeReceived(this, request, SetDefaultPolicyVersion(request));
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

void IAMClient::UpdateAccessKeyAsync(const UpdateAccessKeyRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateAccessKeyAsyncHelper, this, request);
}

void IAMClient::UpdateAccessKeyAsyncHelper(const UpdateAccessKeyRequest& request) const
{
  m_onUpdateAccessKeyOutcomeReceived(this, request, UpdateAccessKey(request));
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

void IAMClient::UpdateAccountPasswordPolicyAsync(const UpdateAccountPasswordPolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateAccountPasswordPolicyAsyncHelper, this, request);
}

void IAMClient::UpdateAccountPasswordPolicyAsyncHelper(const UpdateAccountPasswordPolicyRequest& request) const
{
  m_onUpdateAccountPasswordPolicyOutcomeReceived(this, request, UpdateAccountPasswordPolicy(request));
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

void IAMClient::UpdateAssumeRolePolicyAsync(const UpdateAssumeRolePolicyRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateAssumeRolePolicyAsyncHelper, this, request);
}

void IAMClient::UpdateAssumeRolePolicyAsyncHelper(const UpdateAssumeRolePolicyRequest& request) const
{
  m_onUpdateAssumeRolePolicyOutcomeReceived(this, request, UpdateAssumeRolePolicy(request));
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

void IAMClient::UpdateGroupAsync(const UpdateGroupRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateGroupAsyncHelper, this, request);
}

void IAMClient::UpdateGroupAsyncHelper(const UpdateGroupRequest& request) const
{
  m_onUpdateGroupOutcomeReceived(this, request, UpdateGroup(request));
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

void IAMClient::UpdateLoginProfileAsync(const UpdateLoginProfileRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateLoginProfileAsyncHelper, this, request);
}

void IAMClient::UpdateLoginProfileAsyncHelper(const UpdateLoginProfileRequest& request) const
{
  m_onUpdateLoginProfileOutcomeReceived(this, request, UpdateLoginProfile(request));
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

void IAMClient::UpdateOpenIDConnectProviderThumbprintAsync(const UpdateOpenIDConnectProviderThumbprintRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateOpenIDConnectProviderThumbprintAsyncHelper, this, request);
}

void IAMClient::UpdateOpenIDConnectProviderThumbprintAsyncHelper(const UpdateOpenIDConnectProviderThumbprintRequest& request) const
{
  m_onUpdateOpenIDConnectProviderThumbprintOutcomeReceived(this, request, UpdateOpenIDConnectProviderThumbprint(request));
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

void IAMClient::UpdateSAMLProviderAsync(const UpdateSAMLProviderRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateSAMLProviderAsyncHelper, this, request);
}

void IAMClient::UpdateSAMLProviderAsyncHelper(const UpdateSAMLProviderRequest& request) const
{
  m_onUpdateSAMLProviderOutcomeReceived(this, request, UpdateSAMLProvider(request));
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

void IAMClient::UpdateServerCertificateAsync(const UpdateServerCertificateRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateServerCertificateAsyncHelper, this, request);
}

void IAMClient::UpdateServerCertificateAsyncHelper(const UpdateServerCertificateRequest& request) const
{
  m_onUpdateServerCertificateOutcomeReceived(this, request, UpdateServerCertificate(request));
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

void IAMClient::UpdateSigningCertificateAsync(const UpdateSigningCertificateRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateSigningCertificateAsyncHelper, this, request);
}

void IAMClient::UpdateSigningCertificateAsyncHelper(const UpdateSigningCertificateRequest& request) const
{
  m_onUpdateSigningCertificateOutcomeReceived(this, request, UpdateSigningCertificate(request));
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

void IAMClient::UpdateUserAsync(const UpdateUserRequest& request) const
{
  m_executor->Submit(&IAMClient::UpdateUserAsyncHelper, this, request);
}

void IAMClient::UpdateUserAsyncHelper(const UpdateUserRequest& request) const
{
  m_onUpdateUserOutcomeReceived(this, request, UpdateUser(request));
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

void IAMClient::UploadServerCertificateAsync(const UploadServerCertificateRequest& request) const
{
  m_executor->Submit(&IAMClient::UploadServerCertificateAsyncHelper, this, request);
}

void IAMClient::UploadServerCertificateAsyncHelper(const UploadServerCertificateRequest& request) const
{
  m_onUploadServerCertificateOutcomeReceived(this, request, UploadServerCertificate(request));
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

void IAMClient::UploadSigningCertificateAsync(const UploadSigningCertificateRequest& request) const
{
  m_executor->Submit(&IAMClient::UploadSigningCertificateAsyncHelper, this, request);
}

void IAMClient::UploadSigningCertificateAsyncHelper(const UploadSigningCertificateRequest& request) const
{
  m_onUploadSigningCertificateOutcomeReceived(this, request, UploadSigningCertificate(request));
}

