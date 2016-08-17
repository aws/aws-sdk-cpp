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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/CreateAccessKeyResult.h>
#include <aws/iam/model/CreateGroupResult.h>
#include <aws/iam/model/CreateInstanceProfileResult.h>
#include <aws/iam/model/CreateLoginProfileResult.h>
#include <aws/iam/model/CreateOpenIDConnectProviderResult.h>
#include <aws/iam/model/CreatePolicyResult.h>
#include <aws/iam/model/CreatePolicyVersionResult.h>
#include <aws/iam/model/CreateRoleResult.h>
#include <aws/iam/model/CreateSAMLProviderResult.h>
#include <aws/iam/model/CreateUserResult.h>
#include <aws/iam/model/CreateVirtualMFADeviceResult.h>
#include <aws/iam/model/GenerateCredentialReportResult.h>
#include <aws/iam/model/GetAccessKeyLastUsedResult.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsResult.h>
#include <aws/iam/model/GetAccountPasswordPolicyResult.h>
#include <aws/iam/model/GetAccountSummaryResult.h>
#include <aws/iam/model/GetContextKeysForCustomPolicyResult.h>
#include <aws/iam/model/GetContextKeysForPrincipalPolicyResult.h>
#include <aws/iam/model/GetCredentialReportResult.h>
#include <aws/iam/model/GetGroupResult.h>
#include <aws/iam/model/GetGroupPolicyResult.h>
#include <aws/iam/model/GetInstanceProfileResult.h>
#include <aws/iam/model/GetLoginProfileResult.h>
#include <aws/iam/model/GetOpenIDConnectProviderResult.h>
#include <aws/iam/model/GetPolicyResult.h>
#include <aws/iam/model/GetPolicyVersionResult.h>
#include <aws/iam/model/GetRoleResult.h>
#include <aws/iam/model/GetRolePolicyResult.h>
#include <aws/iam/model/GetSAMLProviderResult.h>
#include <aws/iam/model/GetSSHPublicKeyResult.h>
#include <aws/iam/model/GetServerCertificateResult.h>
#include <aws/iam/model/GetUserResult.h>
#include <aws/iam/model/GetUserPolicyResult.h>
#include <aws/iam/model/ListAccessKeysResult.h>
#include <aws/iam/model/ListAccountAliasesResult.h>
#include <aws/iam/model/ListAttachedGroupPoliciesResult.h>
#include <aws/iam/model/ListAttachedRolePoliciesResult.h>
#include <aws/iam/model/ListAttachedUserPoliciesResult.h>
#include <aws/iam/model/ListEntitiesForPolicyResult.h>
#include <aws/iam/model/ListGroupPoliciesResult.h>
#include <aws/iam/model/ListGroupsResult.h>
#include <aws/iam/model/ListGroupsForUserResult.h>
#include <aws/iam/model/ListInstanceProfilesResult.h>
#include <aws/iam/model/ListInstanceProfilesForRoleResult.h>
#include <aws/iam/model/ListMFADevicesResult.h>
#include <aws/iam/model/ListOpenIDConnectProvidersResult.h>
#include <aws/iam/model/ListPoliciesResult.h>
#include <aws/iam/model/ListPolicyVersionsResult.h>
#include <aws/iam/model/ListRolePoliciesResult.h>
#include <aws/iam/model/ListRolesResult.h>
#include <aws/iam/model/ListSAMLProvidersResult.h>
#include <aws/iam/model/ListSSHPublicKeysResult.h>
#include <aws/iam/model/ListServerCertificatesResult.h>
#include <aws/iam/model/ListSigningCertificatesResult.h>
#include <aws/iam/model/ListUserPoliciesResult.h>
#include <aws/iam/model/ListUsersResult.h>
#include <aws/iam/model/ListVirtualMFADevicesResult.h>
#include <aws/iam/model/SimulateCustomPolicyResult.h>
#include <aws/iam/model/SimulatePrincipalPolicyResult.h>
#include <aws/iam/model/UpdateSAMLProviderResult.h>
#include <aws/iam/model/UploadSSHPublicKeyResult.h>
#include <aws/iam/model/UploadServerCertificateResult.h>
#include <aws/iam/model/UploadSigningCertificateResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace IAM
{

namespace Model
{
        class AddClientIDToOpenIDConnectProviderRequest;
        class AddRoleToInstanceProfileRequest;
        class AddUserToGroupRequest;
        class AttachGroupPolicyRequest;
        class AttachRolePolicyRequest;
        class AttachUserPolicyRequest;
        class ChangePasswordRequest;
        class CreateAccessKeyRequest;
        class CreateAccountAliasRequest;
        class CreateGroupRequest;
        class CreateInstanceProfileRequest;
        class CreateLoginProfileRequest;
        class CreateOpenIDConnectProviderRequest;
        class CreatePolicyRequest;
        class CreatePolicyVersionRequest;
        class CreateRoleRequest;
        class CreateSAMLProviderRequest;
        class CreateUserRequest;
        class CreateVirtualMFADeviceRequest;
        class DeactivateMFADeviceRequest;
        class DeleteAccessKeyRequest;
        class DeleteAccountAliasRequest;
        class DeleteAccountPasswordPolicyRequest;
        class DeleteGroupRequest;
        class DeleteGroupPolicyRequest;
        class DeleteInstanceProfileRequest;
        class DeleteLoginProfileRequest;
        class DeleteOpenIDConnectProviderRequest;
        class DeletePolicyRequest;
        class DeletePolicyVersionRequest;
        class DeleteRoleRequest;
        class DeleteRolePolicyRequest;
        class DeleteSAMLProviderRequest;
        class DeleteSSHPublicKeyRequest;
        class DeleteServerCertificateRequest;
        class DeleteSigningCertificateRequest;
        class DeleteUserRequest;
        class DeleteUserPolicyRequest;
        class DeleteVirtualMFADeviceRequest;
        class DetachGroupPolicyRequest;
        class DetachRolePolicyRequest;
        class DetachUserPolicyRequest;
        class EnableMFADeviceRequest;
        class GenerateCredentialReportRequest;
        class GetAccessKeyLastUsedRequest;
        class GetAccountAuthorizationDetailsRequest;
        class GetAccountPasswordPolicyRequest;
        class GetAccountSummaryRequest;
        class GetContextKeysForCustomPolicyRequest;
        class GetContextKeysForPrincipalPolicyRequest;
        class GetCredentialReportRequest;
        class GetGroupRequest;
        class GetGroupPolicyRequest;
        class GetInstanceProfileRequest;
        class GetLoginProfileRequest;
        class GetOpenIDConnectProviderRequest;
        class GetPolicyRequest;
        class GetPolicyVersionRequest;
        class GetRoleRequest;
        class GetRolePolicyRequest;
        class GetSAMLProviderRequest;
        class GetSSHPublicKeyRequest;
        class GetServerCertificateRequest;
        class GetUserRequest;
        class GetUserPolicyRequest;
        class ListAccessKeysRequest;
        class ListAccountAliasesRequest;
        class ListAttachedGroupPoliciesRequest;
        class ListAttachedRolePoliciesRequest;
        class ListAttachedUserPoliciesRequest;
        class ListEntitiesForPolicyRequest;
        class ListGroupPoliciesRequest;
        class ListGroupsRequest;
        class ListGroupsForUserRequest;
        class ListInstanceProfilesRequest;
        class ListInstanceProfilesForRoleRequest;
        class ListMFADevicesRequest;
        class ListOpenIDConnectProvidersRequest;
        class ListPoliciesRequest;
        class ListPolicyVersionsRequest;
        class ListRolePoliciesRequest;
        class ListRolesRequest;
        class ListSAMLProvidersRequest;
        class ListSSHPublicKeysRequest;
        class ListServerCertificatesRequest;
        class ListSigningCertificatesRequest;
        class ListUserPoliciesRequest;
        class ListUsersRequest;
        class ListVirtualMFADevicesRequest;
        class PutGroupPolicyRequest;
        class PutRolePolicyRequest;
        class PutUserPolicyRequest;
        class RemoveClientIDFromOpenIDConnectProviderRequest;
        class RemoveRoleFromInstanceProfileRequest;
        class RemoveUserFromGroupRequest;
        class ResyncMFADeviceRequest;
        class SetDefaultPolicyVersionRequest;
        class SimulateCustomPolicyRequest;
        class SimulatePrincipalPolicyRequest;
        class UpdateAccessKeyRequest;
        class UpdateAccountPasswordPolicyRequest;
        class UpdateAssumeRolePolicyRequest;
        class UpdateGroupRequest;
        class UpdateLoginProfileRequest;
        class UpdateOpenIDConnectProviderThumbprintRequest;
        class UpdateSAMLProviderRequest;
        class UpdateSSHPublicKeyRequest;
        class UpdateServerCertificateRequest;
        class UpdateSigningCertificateRequest;
        class UpdateUserRequest;
        class UploadSSHPublicKeyRequest;
        class UploadServerCertificateRequest;
        class UploadSigningCertificateRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> AddClientIDToOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> AddRoleToInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> AddUserToGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> AttachGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> AttachRolePolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> AttachUserPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> ChangePasswordOutcome;
        typedef Aws::Utils::Outcome<CreateAccessKeyResult, Aws::Client::AWSError<IAMErrors>> CreateAccessKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> CreateAccountAliasOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<IAMErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceProfileResult, Aws::Client::AWSError<IAMErrors>> CreateInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<CreateLoginProfileResult, Aws::Client::AWSError<IAMErrors>> CreateLoginProfileOutcome;
        typedef Aws::Utils::Outcome<CreateOpenIDConnectProviderResult, Aws::Client::AWSError<IAMErrors>> CreateOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyResult, Aws::Client::AWSError<IAMErrors>> CreatePolicyOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyVersionResult, Aws::Client::AWSError<IAMErrors>> CreatePolicyVersionOutcome;
        typedef Aws::Utils::Outcome<CreateRoleResult, Aws::Client::AWSError<IAMErrors>> CreateRoleOutcome;
        typedef Aws::Utils::Outcome<CreateSAMLProviderResult, Aws::Client::AWSError<IAMErrors>> CreateSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<IAMErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualMFADeviceResult, Aws::Client::AWSError<IAMErrors>> CreateVirtualMFADeviceOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeactivateMFADeviceOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteAccessKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteAccountAliasOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteAccountPasswordPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteLoginProfileOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeletePolicyVersionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteRoleOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteRolePolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteServerCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteSigningCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteUserPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DeleteVirtualMFADeviceOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DetachGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DetachRolePolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> DetachUserPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> EnableMFADeviceOutcome;
        typedef Aws::Utils::Outcome<GenerateCredentialReportResult, Aws::Client::AWSError<IAMErrors>> GenerateCredentialReportOutcome;
        typedef Aws::Utils::Outcome<GetAccessKeyLastUsedResult, Aws::Client::AWSError<IAMErrors>> GetAccessKeyLastUsedOutcome;
        typedef Aws::Utils::Outcome<GetAccountAuthorizationDetailsResult, Aws::Client::AWSError<IAMErrors>> GetAccountAuthorizationDetailsOutcome;
        typedef Aws::Utils::Outcome<GetAccountPasswordPolicyResult, Aws::Client::AWSError<IAMErrors>> GetAccountPasswordPolicyOutcome;
        typedef Aws::Utils::Outcome<GetAccountSummaryResult, Aws::Client::AWSError<IAMErrors>> GetAccountSummaryOutcome;
        typedef Aws::Utils::Outcome<GetContextKeysForCustomPolicyResult, Aws::Client::AWSError<IAMErrors>> GetContextKeysForCustomPolicyOutcome;
        typedef Aws::Utils::Outcome<GetContextKeysForPrincipalPolicyResult, Aws::Client::AWSError<IAMErrors>> GetContextKeysForPrincipalPolicyOutcome;
        typedef Aws::Utils::Outcome<GetCredentialReportResult, Aws::Client::AWSError<IAMErrors>> GetCredentialReportOutcome;
        typedef Aws::Utils::Outcome<GetGroupResult, Aws::Client::AWSError<IAMErrors>> GetGroupOutcome;
        typedef Aws::Utils::Outcome<GetGroupPolicyResult, Aws::Client::AWSError<IAMErrors>> GetGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<GetInstanceProfileResult, Aws::Client::AWSError<IAMErrors>> GetInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<GetLoginProfileResult, Aws::Client::AWSError<IAMErrors>> GetLoginProfileOutcome;
        typedef Aws::Utils::Outcome<GetOpenIDConnectProviderResult, Aws::Client::AWSError<IAMErrors>> GetOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, Aws::Client::AWSError<IAMErrors>> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<GetPolicyVersionResult, Aws::Client::AWSError<IAMErrors>> GetPolicyVersionOutcome;
        typedef Aws::Utils::Outcome<GetRoleResult, Aws::Client::AWSError<IAMErrors>> GetRoleOutcome;
        typedef Aws::Utils::Outcome<GetRolePolicyResult, Aws::Client::AWSError<IAMErrors>> GetRolePolicyOutcome;
        typedef Aws::Utils::Outcome<GetSAMLProviderResult, Aws::Client::AWSError<IAMErrors>> GetSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<GetSSHPublicKeyResult, Aws::Client::AWSError<IAMErrors>> GetSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<GetServerCertificateResult, Aws::Client::AWSError<IAMErrors>> GetServerCertificateOutcome;
        typedef Aws::Utils::Outcome<GetUserResult, Aws::Client::AWSError<IAMErrors>> GetUserOutcome;
        typedef Aws::Utils::Outcome<GetUserPolicyResult, Aws::Client::AWSError<IAMErrors>> GetUserPolicyOutcome;
        typedef Aws::Utils::Outcome<ListAccessKeysResult, Aws::Client::AWSError<IAMErrors>> ListAccessKeysOutcome;
        typedef Aws::Utils::Outcome<ListAccountAliasesResult, Aws::Client::AWSError<IAMErrors>> ListAccountAliasesOutcome;
        typedef Aws::Utils::Outcome<ListAttachedGroupPoliciesResult, Aws::Client::AWSError<IAMErrors>> ListAttachedGroupPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListAttachedRolePoliciesResult, Aws::Client::AWSError<IAMErrors>> ListAttachedRolePoliciesOutcome;
        typedef Aws::Utils::Outcome<ListAttachedUserPoliciesResult, Aws::Client::AWSError<IAMErrors>> ListAttachedUserPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListEntitiesForPolicyResult, Aws::Client::AWSError<IAMErrors>> ListEntitiesForPolicyOutcome;
        typedef Aws::Utils::Outcome<ListGroupPoliciesResult, Aws::Client::AWSError<IAMErrors>> ListGroupPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, Aws::Client::AWSError<IAMErrors>> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<ListGroupsForUserResult, Aws::Client::AWSError<IAMErrors>> ListGroupsForUserOutcome;
        typedef Aws::Utils::Outcome<ListInstanceProfilesResult, Aws::Client::AWSError<IAMErrors>> ListInstanceProfilesOutcome;
        typedef Aws::Utils::Outcome<ListInstanceProfilesForRoleResult, Aws::Client::AWSError<IAMErrors>> ListInstanceProfilesForRoleOutcome;
        typedef Aws::Utils::Outcome<ListMFADevicesResult, Aws::Client::AWSError<IAMErrors>> ListMFADevicesOutcome;
        typedef Aws::Utils::Outcome<ListOpenIDConnectProvidersResult, Aws::Client::AWSError<IAMErrors>> ListOpenIDConnectProvidersOutcome;
        typedef Aws::Utils::Outcome<ListPoliciesResult, Aws::Client::AWSError<IAMErrors>> ListPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListPolicyVersionsResult, Aws::Client::AWSError<IAMErrors>> ListPolicyVersionsOutcome;
        typedef Aws::Utils::Outcome<ListRolePoliciesResult, Aws::Client::AWSError<IAMErrors>> ListRolePoliciesOutcome;
        typedef Aws::Utils::Outcome<ListRolesResult, Aws::Client::AWSError<IAMErrors>> ListRolesOutcome;
        typedef Aws::Utils::Outcome<ListSAMLProvidersResult, Aws::Client::AWSError<IAMErrors>> ListSAMLProvidersOutcome;
        typedef Aws::Utils::Outcome<ListSSHPublicKeysResult, Aws::Client::AWSError<IAMErrors>> ListSSHPublicKeysOutcome;
        typedef Aws::Utils::Outcome<ListServerCertificatesResult, Aws::Client::AWSError<IAMErrors>> ListServerCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListSigningCertificatesResult, Aws::Client::AWSError<IAMErrors>> ListSigningCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListUserPoliciesResult, Aws::Client::AWSError<IAMErrors>> ListUserPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<IAMErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ListVirtualMFADevicesResult, Aws::Client::AWSError<IAMErrors>> ListVirtualMFADevicesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> PutGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> PutRolePolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> PutUserPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> RemoveClientIDFromOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> RemoveRoleFromInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> RemoveUserFromGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> ResyncMFADeviceOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> SetDefaultPolicyVersionOutcome;
        typedef Aws::Utils::Outcome<SimulateCustomPolicyResult, Aws::Client::AWSError<IAMErrors>> SimulateCustomPolicyOutcome;
        typedef Aws::Utils::Outcome<SimulatePrincipalPolicyResult, Aws::Client::AWSError<IAMErrors>> SimulatePrincipalPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateAccessKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateAccountPasswordPolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateAssumeRolePolicyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateLoginProfileOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateOpenIDConnectProviderThumbprintOutcome;
        typedef Aws::Utils::Outcome<UpdateSAMLProviderResult, Aws::Client::AWSError<IAMErrors>> UpdateSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateServerCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateSigningCertificateOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<IAMErrors>> UpdateUserOutcome;
        typedef Aws::Utils::Outcome<UploadSSHPublicKeyResult, Aws::Client::AWSError<IAMErrors>> UploadSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<UploadServerCertificateResult, Aws::Client::AWSError<IAMErrors>> UploadServerCertificateOutcome;
        typedef Aws::Utils::Outcome<UploadSigningCertificateResult, Aws::Client::AWSError<IAMErrors>> UploadSigningCertificateOutcome;

        typedef std::future<AddClientIDToOpenIDConnectProviderOutcome> AddClientIDToOpenIDConnectProviderOutcomeCallable;
        typedef std::future<AddRoleToInstanceProfileOutcome> AddRoleToInstanceProfileOutcomeCallable;
        typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
        typedef std::future<AttachGroupPolicyOutcome> AttachGroupPolicyOutcomeCallable;
        typedef std::future<AttachRolePolicyOutcome> AttachRolePolicyOutcomeCallable;
        typedef std::future<AttachUserPolicyOutcome> AttachUserPolicyOutcomeCallable;
        typedef std::future<ChangePasswordOutcome> ChangePasswordOutcomeCallable;
        typedef std::future<CreateAccessKeyOutcome> CreateAccessKeyOutcomeCallable;
        typedef std::future<CreateAccountAliasOutcome> CreateAccountAliasOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateInstanceProfileOutcome> CreateInstanceProfileOutcomeCallable;
        typedef std::future<CreateLoginProfileOutcome> CreateLoginProfileOutcomeCallable;
        typedef std::future<CreateOpenIDConnectProviderOutcome> CreateOpenIDConnectProviderOutcomeCallable;
        typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
        typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
        typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
        typedef std::future<CreateSAMLProviderOutcome> CreateSAMLProviderOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<CreateVirtualMFADeviceOutcome> CreateVirtualMFADeviceOutcomeCallable;
        typedef std::future<DeactivateMFADeviceOutcome> DeactivateMFADeviceOutcomeCallable;
        typedef std::future<DeleteAccessKeyOutcome> DeleteAccessKeyOutcomeCallable;
        typedef std::future<DeleteAccountAliasOutcome> DeleteAccountAliasOutcomeCallable;
        typedef std::future<DeleteAccountPasswordPolicyOutcome> DeleteAccountPasswordPolicyOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteGroupPolicyOutcome> DeleteGroupPolicyOutcomeCallable;
        typedef std::future<DeleteInstanceProfileOutcome> DeleteInstanceProfileOutcomeCallable;
        typedef std::future<DeleteLoginProfileOutcome> DeleteLoginProfileOutcomeCallable;
        typedef std::future<DeleteOpenIDConnectProviderOutcome> DeleteOpenIDConnectProviderOutcomeCallable;
        typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
        typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
        typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
        typedef std::future<DeleteRolePolicyOutcome> DeleteRolePolicyOutcomeCallable;
        typedef std::future<DeleteSAMLProviderOutcome> DeleteSAMLProviderOutcomeCallable;
        typedef std::future<DeleteSSHPublicKeyOutcome> DeleteSSHPublicKeyOutcomeCallable;
        typedef std::future<DeleteServerCertificateOutcome> DeleteServerCertificateOutcomeCallable;
        typedef std::future<DeleteSigningCertificateOutcome> DeleteSigningCertificateOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserPolicyOutcome> DeleteUserPolicyOutcomeCallable;
        typedef std::future<DeleteVirtualMFADeviceOutcome> DeleteVirtualMFADeviceOutcomeCallable;
        typedef std::future<DetachGroupPolicyOutcome> DetachGroupPolicyOutcomeCallable;
        typedef std::future<DetachRolePolicyOutcome> DetachRolePolicyOutcomeCallable;
        typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
        typedef std::future<EnableMFADeviceOutcome> EnableMFADeviceOutcomeCallable;
        typedef std::future<GenerateCredentialReportOutcome> GenerateCredentialReportOutcomeCallable;
        typedef std::future<GetAccessKeyLastUsedOutcome> GetAccessKeyLastUsedOutcomeCallable;
        typedef std::future<GetAccountAuthorizationDetailsOutcome> GetAccountAuthorizationDetailsOutcomeCallable;
        typedef std::future<GetAccountPasswordPolicyOutcome> GetAccountPasswordPolicyOutcomeCallable;
        typedef std::future<GetAccountSummaryOutcome> GetAccountSummaryOutcomeCallable;
        typedef std::future<GetContextKeysForCustomPolicyOutcome> GetContextKeysForCustomPolicyOutcomeCallable;
        typedef std::future<GetContextKeysForPrincipalPolicyOutcome> GetContextKeysForPrincipalPolicyOutcomeCallable;
        typedef std::future<GetCredentialReportOutcome> GetCredentialReportOutcomeCallable;
        typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
        typedef std::future<GetGroupPolicyOutcome> GetGroupPolicyOutcomeCallable;
        typedef std::future<GetInstanceProfileOutcome> GetInstanceProfileOutcomeCallable;
        typedef std::future<GetLoginProfileOutcome> GetLoginProfileOutcomeCallable;
        typedef std::future<GetOpenIDConnectProviderOutcome> GetOpenIDConnectProviderOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
        typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
        typedef std::future<GetRolePolicyOutcome> GetRolePolicyOutcomeCallable;
        typedef std::future<GetSAMLProviderOutcome> GetSAMLProviderOutcomeCallable;
        typedef std::future<GetSSHPublicKeyOutcome> GetSSHPublicKeyOutcomeCallable;
        typedef std::future<GetServerCertificateOutcome> GetServerCertificateOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetUserPolicyOutcome> GetUserPolicyOutcomeCallable;
        typedef std::future<ListAccessKeysOutcome> ListAccessKeysOutcomeCallable;
        typedef std::future<ListAccountAliasesOutcome> ListAccountAliasesOutcomeCallable;
        typedef std::future<ListAttachedGroupPoliciesOutcome> ListAttachedGroupPoliciesOutcomeCallable;
        typedef std::future<ListAttachedRolePoliciesOutcome> ListAttachedRolePoliciesOutcomeCallable;
        typedef std::future<ListAttachedUserPoliciesOutcome> ListAttachedUserPoliciesOutcomeCallable;
        typedef std::future<ListEntitiesForPolicyOutcome> ListEntitiesForPolicyOutcomeCallable;
        typedef std::future<ListGroupPoliciesOutcome> ListGroupPoliciesOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<ListGroupsForUserOutcome> ListGroupsForUserOutcomeCallable;
        typedef std::future<ListInstanceProfilesOutcome> ListInstanceProfilesOutcomeCallable;
        typedef std::future<ListInstanceProfilesForRoleOutcome> ListInstanceProfilesForRoleOutcomeCallable;
        typedef std::future<ListMFADevicesOutcome> ListMFADevicesOutcomeCallable;
        typedef std::future<ListOpenIDConnectProvidersOutcome> ListOpenIDConnectProvidersOutcomeCallable;
        typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
        typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
        typedef std::future<ListRolePoliciesOutcome> ListRolePoliciesOutcomeCallable;
        typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
        typedef std::future<ListSAMLProvidersOutcome> ListSAMLProvidersOutcomeCallable;
        typedef std::future<ListSSHPublicKeysOutcome> ListSSHPublicKeysOutcomeCallable;
        typedef std::future<ListServerCertificatesOutcome> ListServerCertificatesOutcomeCallable;
        typedef std::future<ListSigningCertificatesOutcome> ListSigningCertificatesOutcomeCallable;
        typedef std::future<ListUserPoliciesOutcome> ListUserPoliciesOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ListVirtualMFADevicesOutcome> ListVirtualMFADevicesOutcomeCallable;
        typedef std::future<PutGroupPolicyOutcome> PutGroupPolicyOutcomeCallable;
        typedef std::future<PutRolePolicyOutcome> PutRolePolicyOutcomeCallable;
        typedef std::future<PutUserPolicyOutcome> PutUserPolicyOutcomeCallable;
        typedef std::future<RemoveClientIDFromOpenIDConnectProviderOutcome> RemoveClientIDFromOpenIDConnectProviderOutcomeCallable;
        typedef std::future<RemoveRoleFromInstanceProfileOutcome> RemoveRoleFromInstanceProfileOutcomeCallable;
        typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
        typedef std::future<ResyncMFADeviceOutcome> ResyncMFADeviceOutcomeCallable;
        typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
        typedef std::future<SimulateCustomPolicyOutcome> SimulateCustomPolicyOutcomeCallable;
        typedef std::future<SimulatePrincipalPolicyOutcome> SimulatePrincipalPolicyOutcomeCallable;
        typedef std::future<UpdateAccessKeyOutcome> UpdateAccessKeyOutcomeCallable;
        typedef std::future<UpdateAccountPasswordPolicyOutcome> UpdateAccountPasswordPolicyOutcomeCallable;
        typedef std::future<UpdateAssumeRolePolicyOutcome> UpdateAssumeRolePolicyOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateLoginProfileOutcome> UpdateLoginProfileOutcomeCallable;
        typedef std::future<UpdateOpenIDConnectProviderThumbprintOutcome> UpdateOpenIDConnectProviderThumbprintOutcomeCallable;
        typedef std::future<UpdateSAMLProviderOutcome> UpdateSAMLProviderOutcomeCallable;
        typedef std::future<UpdateSSHPublicKeyOutcome> UpdateSSHPublicKeyOutcomeCallable;
        typedef std::future<UpdateServerCertificateOutcome> UpdateServerCertificateOutcomeCallable;
        typedef std::future<UpdateSigningCertificateOutcome> UpdateSigningCertificateOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
        typedef std::future<UploadSSHPublicKeyOutcome> UploadSSHPublicKeyOutcomeCallable;
        typedef std::future<UploadServerCertificateOutcome> UploadServerCertificateOutcomeCallable;
        typedef std::future<UploadSigningCertificateOutcome> UploadSigningCertificateOutcomeCallable;
} // namespace Model

  class IAMClient;

    typedef std::function<void(const IAMClient*, const Model::AddClientIDToOpenIDConnectProviderRequest&, const Model::AddClientIDToOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddClientIDToOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AddRoleToInstanceProfileRequest&, const Model::AddRoleToInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddRoleToInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AddUserToGroupRequest&, const Model::AddUserToGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddUserToGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AttachGroupPolicyRequest&, const Model::AttachGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AttachRolePolicyRequest&, const Model::AttachRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::AttachUserPolicyRequest&, const Model::AttachUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ChangePasswordRequest&, const Model::ChangePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangePasswordResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateAccessKeyRequest&, const Model::CreateAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateAccountAliasRequest&, const Model::CreateAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountAliasResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateInstanceProfileRequest&, const Model::CreateInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateLoginProfileRequest&, const Model::CreateLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateOpenIDConnectProviderRequest&, const Model::CreateOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreatePolicyVersionRequest&, const Model::CreatePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateRoleRequest&, const Model::CreateRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateSAMLProviderRequest&, const Model::CreateSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateVirtualMFADeviceRequest&, const Model::CreateVirtualMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeactivateMFADeviceRequest&, const Model::DeactivateMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteAccessKeyRequest&, const Model::DeleteAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteAccountAliasRequest&, const Model::DeleteAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAliasResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteAccountPasswordPolicyRequest&, const Model::DeleteAccountPasswordPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountPasswordPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteGroupPolicyRequest&, const Model::DeleteGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteInstanceProfileRequest&, const Model::DeleteInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteLoginProfileRequest&, const Model::DeleteLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteOpenIDConnectProviderRequest&, const Model::DeleteOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeletePolicyVersionRequest&, const Model::DeletePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteRoleRequest&, const Model::DeleteRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteRolePolicyRequest&, const Model::DeleteRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSAMLProviderRequest&, const Model::DeleteSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSSHPublicKeyRequest&, const Model::DeleteSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteServerCertificateRequest&, const Model::DeleteServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSigningCertificateRequest&, const Model::DeleteSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSigningCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteUserPolicyRequest&, const Model::DeleteUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteVirtualMFADeviceRequest&, const Model::DeleteVirtualMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachGroupPolicyRequest&, const Model::DetachGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachRolePolicyRequest&, const Model::DetachRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachUserPolicyRequest&, const Model::DetachUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::EnableMFADeviceRequest&, const Model::EnableMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GenerateCredentialReportRequest&, const Model::GenerateCredentialReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateCredentialReportResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccessKeyLastUsedRequest&, const Model::GetAccessKeyLastUsedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessKeyLastUsedResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccountAuthorizationDetailsRequest&, const Model::GetAccountAuthorizationDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountAuthorizationDetailsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccountPasswordPolicyRequest&, const Model::GetAccountPasswordPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountPasswordPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetAccountSummaryRequest&, const Model::GetAccountSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSummaryResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetContextKeysForCustomPolicyRequest&, const Model::GetContextKeysForCustomPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContextKeysForCustomPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetContextKeysForPrincipalPolicyRequest&, const Model::GetContextKeysForPrincipalPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContextKeysForPrincipalPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetCredentialReportRequest&, const Model::GetCredentialReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCredentialReportResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetGroupPolicyRequest&, const Model::GetGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetInstanceProfileRequest&, const Model::GetInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetLoginProfileRequest&, const Model::GetLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetOpenIDConnectProviderRequest&, const Model::GetOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetPolicyVersionRequest&, const Model::GetPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetRoleRequest&, const Model::GetRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetRolePolicyRequest&, const Model::GetRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetSAMLProviderRequest&, const Model::GetSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetSSHPublicKeyRequest&, const Model::GetSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetServerCertificateRequest&, const Model::GetServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetUserPolicyRequest&, const Model::GetUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAccessKeysRequest&, const Model::ListAccessKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessKeysResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAccountAliasesRequest&, const Model::ListAccountAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAliasesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAttachedGroupPoliciesRequest&, const Model::ListAttachedGroupPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedGroupPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAttachedRolePoliciesRequest&, const Model::ListAttachedRolePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedRolePoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListAttachedUserPoliciesRequest&, const Model::ListAttachedUserPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedUserPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListEntitiesForPolicyRequest&, const Model::ListEntitiesForPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesForPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListGroupPoliciesRequest&, const Model::ListGroupPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListGroupsForUserRequest&, const Model::ListGroupsForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsForUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListInstanceProfilesRequest&, const Model::ListInstanceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceProfilesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListInstanceProfilesForRoleRequest&, const Model::ListInstanceProfilesForRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceProfilesForRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListMFADevicesRequest&, const Model::ListMFADevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMFADevicesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListOpenIDConnectProvidersRequest&, const Model::ListOpenIDConnectProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpenIDConnectProvidersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListPolicyVersionsRequest&, const Model::ListPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListRolePoliciesRequest&, const Model::ListRolePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRolePoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListRolesRequest&, const Model::ListRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRolesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSAMLProvidersRequest&, const Model::ListSAMLProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSAMLProvidersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSSHPublicKeysRequest&, const Model::ListSSHPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSSHPublicKeysResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListServerCertificatesRequest&, const Model::ListServerCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServerCertificatesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSigningCertificatesRequest&, const Model::ListSigningCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningCertificatesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListUserPoliciesRequest&, const Model::ListUserPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListVirtualMFADevicesRequest&, const Model::ListVirtualMFADevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualMFADevicesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutGroupPolicyRequest&, const Model::PutGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutRolePolicyRequest&, const Model::PutRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutUserPolicyRequest&, const Model::PutUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveClientIDFromOpenIDConnectProviderRequest&, const Model::RemoveClientIDFromOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveRoleFromInstanceProfileRequest&, const Model::RemoveRoleFromInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRoleFromInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveUserFromGroupRequest&, const Model::RemoveUserFromGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveUserFromGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ResyncMFADeviceRequest&, const Model::ResyncMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResyncMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SetDefaultPolicyVersionRequest&, const Model::SetDefaultPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SimulateCustomPolicyRequest&, const Model::SimulateCustomPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SimulateCustomPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SimulatePrincipalPolicyRequest&, const Model::SimulatePrincipalPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SimulatePrincipalPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAccessKeyRequest&, const Model::UpdateAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAccountPasswordPolicyRequest&, const Model::UpdateAccountPasswordPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountPasswordPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAssumeRolePolicyRequest&, const Model::UpdateAssumeRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssumeRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateLoginProfileRequest&, const Model::UpdateLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateOpenIDConnectProviderThumbprintRequest&, const Model::UpdateOpenIDConnectProviderThumbprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSAMLProviderRequest&, const Model::UpdateSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSSHPublicKeyRequest&, const Model::UpdateSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateServerCertificateRequest&, const Model::UpdateServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSigningCertificateRequest&, const Model::UpdateSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSigningCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UploadSSHPublicKeyRequest&, const Model::UploadSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UploadServerCertificateRequest&, const Model::UploadServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UploadSigningCertificateRequest&, const Model::UploadSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadSigningCertificateResponseReceivedHandler;

  /**
   * <fullname>AWS Identity and Access Management</fullname> <p>AWS Identity and
   * Access Management (IAM) is a web service that you can use to manage users and
   * user permissions under your AWS account. This guide provides descriptions of IAM
   * actions that you can call programmatically. For general information about IAM,
   * see <a href="http://aws.amazon.com/iam/">AWS Identity and Access Management
   * (IAM)</a>. For the user guide for IAM, see <a
   * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/">Using IAM</a>. </p>
   * <note> <p>AWS provides SDKs that consist of libraries and sample code for
   * various programming languages and platforms (Java, Ruby, .NET, iOS, Android,
   * etc.). The SDKs provide a convenient way to create programmatic access to IAM
   * and AWS. For example, the SDKs take care of tasks such as cryptographically
   * signing requests (see below), managing errors, and retrying requests
   * automatically. For information about the AWS SDKs, including how to download and
   * install them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon
   * Web Services</a> page. </p> </note> <p>We recommend that you use the AWS SDKs to
   * make programmatic API calls to IAM. However, you can also use the IAM Query API
   * to make direct calls to the IAM web service. To learn more about the IAM Query
   * API, see <a
   * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
   * Query Requests</a> in the <i>Using IAM</i> guide. IAM supports GET and POST
   * requests for all actions. That is, the API does not require you to use GET for
   * some actions and POST for others. However, GET requests are subject to the
   * limitation size of a URL. Therefore, for operations that require larger sizes,
   * use a POST request. </p> <p> <b>Signing Requests</b> </p> <p>Requests must be
   * signed using an access key ID and a secret access key. We strongly recommend
   * that you do not use your AWS account access key ID and secret access key for
   * everyday work with IAM. You can use the access key ID and secret access key for
   * an IAM user or you can use the AWS Security Token Service to generate temporary
   * security credentials and use those to sign requests.</p> <p>To sign requests, we
   * recommend that you use <a
   * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4</a>. If you have an existing application that uses Signature Version
   * 2, you do not have to update it to use Signature Version 4. However, some
   * operations now require Signature Version 4. The documentation for operations
   * that require version 4 indicate this requirement. </p> <p> <b>Additional
   * Resources</b> </p> <p>For more information, see the following:</p> <ul> <li> <p>
   * <a
   * href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS
   * Security Credentials</a>. This topic provides general information about the
   * types of credentials used for accessing AWS. </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAMBestPractices.html">IAM
   * Best Practices</a>. This topic presents a list of suggestions for using the IAM
   * service to help secure your AWS resources. </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
   * AWS API Requests</a>. This set of topics walk you through the process of signing
   * a request using an access key ID and secret access key. </p> </li> </ul>
   */
  class AWS_IAM_API IAMClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IAMClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~IAMClient();

        /**
         * <p>Adds a new client ID (also known as audience) to the list of client IDs
         * already registered for the specified IAM OpenID Connect (OIDC) provider
         * resource.</p> <p>This action is idempotent; it does not fail or return an error
         * if you add an existing client ID to the provider.</p>
         */
        virtual Model::AddClientIDToOpenIDConnectProviderOutcome AddClientIDToOpenIDConnectProvider(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Adds a new client ID (also known as audience) to the list of client IDs
         * already registered for the specified IAM OpenID Connect (OIDC) provider
         * resource.</p> <p>This action is idempotent; it does not fail or return an error
         * if you add an existing client ID to the provider.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddClientIDToOpenIDConnectProviderOutcomeCallable AddClientIDToOpenIDConnectProviderCallable(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Adds a new client ID (also known as audience) to the list of client IDs
         * already registered for the specified IAM OpenID Connect (OIDC) provider
         * resource.</p> <p>This action is idempotent; it does not fail or return an error
         * if you add an existing client ID to the provider.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddClientIDToOpenIDConnectProviderAsync(const Model::AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified IAM role to the specified instance profile.</p> <note>
         * <p>The caller of this API must be granted the <code>PassRole</code> permission
         * on the IAM role by a permission policy.</p> </note> <p>For more information
         * about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         */
        virtual Model::AddRoleToInstanceProfileOutcome AddRoleToInstanceProfile(const Model::AddRoleToInstanceProfileRequest& request) const;

        /**
         * <p>Adds the specified IAM role to the specified instance profile.</p> <note>
         * <p>The caller of this API must be granted the <code>PassRole</code> permission
         * on the IAM role by a permission policy.</p> </note> <p>For more information
         * about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToInstanceProfileOutcomeCallable AddRoleToInstanceProfileCallable(const Model::AddRoleToInstanceProfileRequest& request) const;

        /**
         * <p>Adds the specified IAM role to the specified instance profile.</p> <note>
         * <p>The caller of this API must be granted the <code>PassRole</code> permission
         * on the IAM role by a permission policy.</p> </note> <p>For more information
         * about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToInstanceProfileAsync(const Model::AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified user to the specified group.</p>
         */
        virtual Model::AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest& request) const;

        /**
         * <p>Adds the specified user to the specified group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request) const;

        /**
         * <p>Adds the specified user to the specified group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM group.</p> <p>You
         * use this API to attach a managed policy to a group. To embed an inline policy in
         * a group, use <a>PutGroupPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::AttachGroupPolicyOutcome AttachGroupPolicy(const Model::AttachGroupPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM group.</p> <p>You
         * use this API to attach a managed policy to a group. To embed an inline policy in
         * a group, use <a>PutGroupPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachGroupPolicyOutcomeCallable AttachGroupPolicyCallable(const Model::AttachGroupPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM group.</p> <p>You
         * use this API to attach a managed policy to a group. To embed an inline policy in
         * a group, use <a>PutGroupPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachGroupPolicyAsync(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM role.</p> <p>When
         * you attach a managed policy to a role, the managed policy becomes part of the
         * role's permission (access) policy. You cannot use a managed policy as the role's
         * trust policy. The role's trust policy is created at the same time as the role,
         * using <a>CreateRole</a>. You can update a role's trust policy using
         * <a>UpdateAssumeRolePolicy</a>.</p> <p>Use this API to attach a <i>managed</i>
         * policy to a role. To embed an inline policy in a role, use <a>PutRolePolicy</a>.
         * For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::AttachRolePolicyOutcome AttachRolePolicy(const Model::AttachRolePolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM role.</p> <p>When
         * you attach a managed policy to a role, the managed policy becomes part of the
         * role's permission (access) policy. You cannot use a managed policy as the role's
         * trust policy. The role's trust policy is created at the same time as the role,
         * using <a>CreateRole</a>. You can update a role's trust policy using
         * <a>UpdateAssumeRolePolicy</a>.</p> <p>Use this API to attach a <i>managed</i>
         * policy to a role. To embed an inline policy in a role, use <a>PutRolePolicy</a>.
         * For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachRolePolicyOutcomeCallable AttachRolePolicyCallable(const Model::AttachRolePolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM role.</p> <p>When
         * you attach a managed policy to a role, the managed policy becomes part of the
         * role's permission (access) policy. You cannot use a managed policy as the role's
         * trust policy. The role's trust policy is created at the same time as the role,
         * using <a>CreateRole</a>. You can update a role's trust policy using
         * <a>UpdateAssumeRolePolicy</a>.</p> <p>Use this API to attach a <i>managed</i>
         * policy to a role. To embed an inline policy in a role, use <a>PutRolePolicy</a>.
         * For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachRolePolicyAsync(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified user.</p> <p>You use
         * this API to attach a <i>managed</i> policy to a user. To embed an inline policy
         * in a user, use <a>PutUserPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified user.</p> <p>You use
         * this API to attach a <i>managed</i> policy to a user. To embed an inline policy
         * in a user, use <a>PutUserPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified user.</p> <p>You use
         * this API to attach a <i>managed</i> policy to a user. To embed an inline policy
         * in a user, use <a>PutUserPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password of the IAM user who is calling this action. The root
         * account password is not affected by this action.</p> <p>To change the password
         * for a different user, see <a>UpdateLoginProfile</a>. For more information about
         * modifying passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::ChangePasswordOutcome ChangePassword(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password of the IAM user who is calling this action. The root
         * account password is not affected by this action.</p> <p>To change the password
         * for a different user, see <a>UpdateLoginProfile</a>. For more information about
         * modifying passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password of the IAM user who is calling this action. The root
         * account password is not affected by this action.</p> <p>To change the password
         * for a different user, see <a>UpdateLoginProfile</a>. For more information about
         * modifying passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new AWS secret access key and corresponding AWS access key ID for
         * the specified user. The default status for new keys is <code>Active</code>.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. Because this action works
         * for access keys under the AWS account, you can use this action to manage root
         * credentials even if the AWS account has no associated users.</p> <p> For
         * information about limits on the number of keys you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>To ensure
         * the security of your AWS account, the secret access key is accessible only
         * during key and user creation. You must save the key (for example, in a text
         * file) if you want to be able to access it again. If a secret key is lost, you
         * can delete the access keys for the associated user and then create new keys.</p>
         * </important>
         */
        virtual Model::CreateAccessKeyOutcome CreateAccessKey(const Model::CreateAccessKeyRequest& request) const;

        /**
         * <p> Creates a new AWS secret access key and corresponding AWS access key ID for
         * the specified user. The default status for new keys is <code>Active</code>.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. Because this action works
         * for access keys under the AWS account, you can use this action to manage root
         * credentials even if the AWS account has no associated users.</p> <p> For
         * information about limits on the number of keys you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>To ensure
         * the security of your AWS account, the secret access key is accessible only
         * during key and user creation. You must save the key (for example, in a text
         * file) if you want to be able to access it again. If a secret key is lost, you
         * can delete the access keys for the associated user and then create new keys.</p>
         * </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessKeyOutcomeCallable CreateAccessKeyCallable(const Model::CreateAccessKeyRequest& request) const;

        /**
         * <p> Creates a new AWS secret access key and corresponding AWS access key ID for
         * the specified user. The default status for new keys is <code>Active</code>.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. Because this action works
         * for access keys under the AWS account, you can use this action to manage root
         * credentials even if the AWS account has no associated users.</p> <p> For
         * information about limits on the number of keys you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>To ensure
         * the security of your AWS account, the secret access key is accessible only
         * during key and user creation. You must save the key (for example, in a text
         * file) if you want to be able to access it again. If a secret key is lost, you
         * can delete the access keys for the associated user and then create new keys.</p>
         * </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessKeyAsync(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for your AWS account. For information about using an AWS
         * account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreateAccountAliasOutcome CreateAccountAlias(const Model::CreateAccountAliasRequest& request) const;

        /**
         * <p>Creates an alias for your AWS account. For information about using an AWS
         * account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountAliasOutcomeCallable CreateAccountAliasCallable(const Model::CreateAccountAliasRequest& request) const;

        /**
         * <p>Creates an alias for your AWS account. For information about using an AWS
         * account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAliasAsync(const Model::CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new group.</p> <p> For information about the number of groups you
         * can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a new group.</p> <p> For information about the number of groups you
         * can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a new group.</p> <p> For information about the number of groups you
         * can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new instance profile. For information about instance profiles, go
         * to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p> For information about the number of instance
         * profiles you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * <p> Creates a new instance profile. For information about instance profiles, go
         * to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p> For information about the number of instance
         * profiles you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * <p> Creates a new instance profile. For information about instance profiles, go
         * to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p> For information about the number of instance
         * profiles you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceProfileAsync(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a password for the specified user, giving the user the ability to
         * access AWS services through the AWS Management Console. For more information
         * about managing passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreateLoginProfileOutcome CreateLoginProfile(const Model::CreateLoginProfileRequest& request) const;

        /**
         * <p> Creates a password for the specified user, giving the user the ability to
         * access AWS services through the AWS Management Console. For more information
         * about managing passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoginProfileOutcomeCallable CreateLoginProfileCallable(const Model::CreateLoginProfileRequest& request) const;

        /**
         * <p> Creates a password for the specified user, giving the user the ability to
         * access AWS services through the AWS Management Console. For more information
         * about managing passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoginProfileAsync(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a
         * href="http://openid.net/connect/">OpenID Connect (OIDC)</a>.</p> <p>The OIDC
         * provider that you create with this operation can be used as a principal in a
         * role's trust policy to establish a trust relationship between AWS and the OIDC
         * provider.</p> <p>When you create the IAM OIDC provider, you specify the URL of
         * the OIDC identity provider (IdP) to trust, a list of client IDs (also known as
         * audiences) that identify the application or applications that are allowed to
         * authenticate using the OIDC provider, and a list of thumbprints of the server
         * certificate(s) that the IdP uses. You get all of this information from the OIDC
         * IdP that you want to use for access to AWS.</p> <note> <p>Because trust for the
         * OIDC provider is ultimately derived from the IAM provider that this action
         * creates, it is a best practice to limit access to the
         * <a>CreateOpenIDConnectProvider</a> action to highly-privileged users.</p>
         * </note>
         */
        virtual Model::CreateOpenIDConnectProviderOutcome CreateOpenIDConnectProvider(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a
         * href="http://openid.net/connect/">OpenID Connect (OIDC)</a>.</p> <p>The OIDC
         * provider that you create with this operation can be used as a principal in a
         * role's trust policy to establish a trust relationship between AWS and the OIDC
         * provider.</p> <p>When you create the IAM OIDC provider, you specify the URL of
         * the OIDC identity provider (IdP) to trust, a list of client IDs (also known as
         * audiences) that identify the application or applications that are allowed to
         * authenticate using the OIDC provider, and a list of thumbprints of the server
         * certificate(s) that the IdP uses. You get all of this information from the OIDC
         * IdP that you want to use for access to AWS.</p> <note> <p>Because trust for the
         * OIDC provider is ultimately derived from the IAM provider that this action
         * creates, it is a best practice to limit access to the
         * <a>CreateOpenIDConnectProvider</a> action to highly-privileged users.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOpenIDConnectProviderOutcomeCallable CreateOpenIDConnectProviderCallable(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a
         * href="http://openid.net/connect/">OpenID Connect (OIDC)</a>.</p> <p>The OIDC
         * provider that you create with this operation can be used as a principal in a
         * role's trust policy to establish a trust relationship between AWS and the OIDC
         * provider.</p> <p>When you create the IAM OIDC provider, you specify the URL of
         * the OIDC identity provider (IdP) to trust, a list of client IDs (also known as
         * audiences) that identify the application or applications that are allowed to
         * authenticate using the OIDC provider, and a list of thumbprints of the server
         * certificate(s) that the IdP uses. You get all of this information from the OIDC
         * IdP that you want to use for access to AWS.</p> <note> <p>Because trust for the
         * OIDC provider is ultimately derived from the IAM provider that this action
         * creates, it is a best practice to limit access to the
         * <a>CreateOpenIDConnectProvider</a> action to highly-privileged users.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOpenIDConnectProviderAsync(const Model::CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new managed policy for your AWS account.</p> <p>This operation
         * creates a policy version with a version identifier of <code>v1</code> and sets
         * v1 as the policy's default version. For more information about policy versions,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policies in general, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates a new managed policy for your AWS account.</p> <p>This operation
         * creates a policy version with a version identifier of <code>v1</code> and sets
         * v1 as the policy's default version. For more information about policy versions,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policies in general, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates a new managed policy for your AWS account.</p> <p>This operation
         * creates a policy version with a version identifier of <code>v1</code> and sets
         * v1 as the policy's default version. For more information about policy versions,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policies in general, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified managed policy. To update a managed
         * policy, you create a new policy version. A managed policy can have up to five
         * versions. If the policy has five versions, you must delete an existing version
         * using <a>DeletePolicyVersion</a> before you create a new version.</p>
         * <p>Optionally, you can set the new version as the policy's default version. The
         * default version is the version that is in effect for the IAM users, groups, and
         * roles to which the policy is attached.</p> <p>For more information about managed
         * policy versions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified managed policy. To update a managed
         * policy, you create a new policy version. A managed policy can have up to five
         * versions. If the policy has five versions, you must delete an existing version
         * using <a>DeletePolicyVersion</a> before you create a new version.</p>
         * <p>Optionally, you can set the new version as the policy's default version. The
         * default version is the version that is in effect for the IAM users, groups, and
         * roles to which the policy is attached.</p> <p>For more information about managed
         * policy versions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified managed policy. To update a managed
         * policy, you create a new policy version. A managed policy can have up to five
         * versions. If the policy has five versions, you must delete an existing version
         * using <a>DeletePolicyVersion</a> before you create a new version.</p>
         * <p>Optionally, you can set the new version as the policy's default version. The
         * default version is the version that is in effect for the IAM users, groups, and
         * roles to which the policy is attached.</p> <p>For more information about managed
         * policy versions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new role for your AWS account. For more information about roles, go
         * to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For information about limitations on role names and the number
         * of roles you can create, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreateRoleOutcome CreateRole(const Model::CreateRoleRequest& request) const;

        /**
         * <p>Creates a new role for your AWS account. For more information about roles, go
         * to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For information about limitations on role names and the number
         * of roles you can create, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request) const;

        /**
         * <p>Creates a new role for your AWS account. For more information about roles, go
         * to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For information about limitations on role names and the number
         * of roles you can create, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM resource that describes an identity provider (IdP) that
         * supports SAML 2.0.</p> <p>The SAML provider resource that you create with this
         * operation can be used as a principal in an IAM role's trust policy to enable
         * federated users who sign-in using the SAML IdP to assume the role. You can
         * create an IAM role that supports Web-based single sign-on (SSO) to the AWS
         * Management Console or one that supports API access to AWS.</p> <p>When you
         * create the SAML provider resource, you upload an a SAML metadata document that
         * you get from your IdP and that includes the issuer's name, expiration
         * information, and keys that can be used to validate the SAML authentication
         * response (assertions) that the IdP sends. You must generate the metadata
         * document using the identity management software that is used as your
         * organization's IdP.</p> <note> <p> This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note> <p> For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling
         * SAML 2.0 Federated Users to Access the AWS Management Console</a> and <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based Federation</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreateSAMLProviderOutcome CreateSAMLProvider(const Model::CreateSAMLProviderRequest& request) const;

        /**
         * <p>Creates an IAM resource that describes an identity provider (IdP) that
         * supports SAML 2.0.</p> <p>The SAML provider resource that you create with this
         * operation can be used as a principal in an IAM role's trust policy to enable
         * federated users who sign-in using the SAML IdP to assume the role. You can
         * create an IAM role that supports Web-based single sign-on (SSO) to the AWS
         * Management Console or one that supports API access to AWS.</p> <p>When you
         * create the SAML provider resource, you upload an a SAML metadata document that
         * you get from your IdP and that includes the issuer's name, expiration
         * information, and keys that can be used to validate the SAML authentication
         * response (assertions) that the IdP sends. You must generate the metadata
         * document using the identity management software that is used as your
         * organization's IdP.</p> <note> <p> This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note> <p> For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling
         * SAML 2.0 Federated Users to Access the AWS Management Console</a> and <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based Federation</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSAMLProviderOutcomeCallable CreateSAMLProviderCallable(const Model::CreateSAMLProviderRequest& request) const;

        /**
         * <p>Creates an IAM resource that describes an identity provider (IdP) that
         * supports SAML 2.0.</p> <p>The SAML provider resource that you create with this
         * operation can be used as a principal in an IAM role's trust policy to enable
         * federated users who sign-in using the SAML IdP to assume the role. You can
         * create an IAM role that supports Web-based single sign-on (SSO) to the AWS
         * Management Console or one that supports API access to AWS.</p> <p>When you
         * create the SAML provider resource, you upload an a SAML metadata document that
         * you get from your IdP and that includes the issuer's name, expiration
         * information, and keys that can be used to validate the SAML authentication
         * response (assertions) that the IdP sends. You must generate the metadata
         * document using the identity management software that is used as your
         * organization's IdP.</p> <note> <p> This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note> <p> For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling
         * SAML 2.0 Federated Users to Access the AWS Management Console</a> and <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based Federation</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSAMLProviderAsync(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new IAM user for your AWS account.</p> <p> For information about
         * limitations on the number of IAM users you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new IAM user for your AWS account.</p> <p> For information about
         * limitations on the number of IAM users you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new IAM user for your AWS account.</p> <p> For information about
         * limitations on the number of IAM users you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new virtual MFA device for the AWS account. After creating the
         * virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user.
         * For more information about creating and working with virtual MFA devices, go to
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p> <p>For information
         * about limits on the number of MFA devices you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>The seed
         * information contained in the QR code and the Base32 string should be treated
         * like any other secret access information, such as your AWS access keys or your
         * passwords. After you provision your virtual device, you should ensure that the
         * information is destroyed following secure procedures.</p> </important>
         */
        virtual Model::CreateVirtualMFADeviceOutcome CreateVirtualMFADevice(const Model::CreateVirtualMFADeviceRequest& request) const;

        /**
         * <p>Creates a new virtual MFA device for the AWS account. After creating the
         * virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user.
         * For more information about creating and working with virtual MFA devices, go to
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p> <p>For information
         * about limits on the number of MFA devices you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>The seed
         * information contained in the QR code and the Base32 string should be treated
         * like any other secret access information, such as your AWS access keys or your
         * passwords. After you provision your virtual device, you should ensure that the
         * information is destroyed following secure procedures.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualMFADeviceOutcomeCallable CreateVirtualMFADeviceCallable(const Model::CreateVirtualMFADeviceRequest& request) const;

        /**
         * <p>Creates a new virtual MFA device for the AWS account. After creating the
         * virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user.
         * For more information about creating and working with virtual MFA devices, go to
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p> <p>For information
         * about limits on the number of MFA devices you can create, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>The seed
         * information contained in the QR code and the Base32 string should be treated
         * like any other secret access information, such as your AWS access keys or your
         * passwords. After you provision your virtual device, you should ensure that the
         * information is destroyed following secure procedures.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualMFADeviceAsync(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates the specified MFA device and removes it from association with the
         * user name for which it was originally enabled.</p> <p>For more information about
         * creating and working with virtual MFA devices, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DeactivateMFADeviceOutcome DeactivateMFADevice(const Model::DeactivateMFADeviceRequest& request) const;

        /**
         * <p>Deactivates the specified MFA device and removes it from association with the
         * user name for which it was originally enabled.</p> <p>For more information about
         * creating and working with virtual MFA devices, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateMFADeviceOutcomeCallable DeactivateMFADeviceCallable(const Model::DeactivateMFADeviceRequest& request) const;

        /**
         * <p>Deactivates the specified MFA device and removes it from association with the
         * user name for which it was originally enabled.</p> <p>For more information about
         * creating and working with virtual MFA devices, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateMFADeviceAsync(const Model::DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the access key pair associated with the specified IAM user.</p> <p>If
         * you do not specify a user name, IAM determines the user name implicitly based on
         * the AWS access key ID signing the request. Because this action works for access
         * keys under the AWS account, you can use this action to manage root credentials
         * even if the AWS account has no associated users.</p>
         */
        virtual Model::DeleteAccessKeyOutcome DeleteAccessKey(const Model::DeleteAccessKeyRequest& request) const;

        /**
         * <p>Deletes the access key pair associated with the specified IAM user.</p> <p>If
         * you do not specify a user name, IAM determines the user name implicitly based on
         * the AWS access key ID signing the request. Because this action works for access
         * keys under the AWS account, you can use this action to manage root credentials
         * even if the AWS account has no associated users.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessKeyOutcomeCallable DeleteAccessKeyCallable(const Model::DeleteAccessKeyRequest& request) const;

        /**
         * <p>Deletes the access key pair associated with the specified IAM user.</p> <p>If
         * you do not specify a user name, IAM determines the user name implicitly based on
         * the AWS access key ID signing the request. Because this action works for access
         * keys under the AWS account, you can use this action to manage root credentials
         * even if the AWS account has no associated users.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessKeyAsync(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the specified AWS account alias. For information about using an AWS
         * account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DeleteAccountAliasOutcome DeleteAccountAlias(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * <p> Deletes the specified AWS account alias. For information about using an AWS
         * account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAliasOutcomeCallable DeleteAccountAliasCallable(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * <p> Deletes the specified AWS account alias. For information about using an AWS
         * account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAliasAsync(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the password policy for the AWS account. There are no parameters.</p>
         */
        virtual Model::DeleteAccountPasswordPolicyOutcome DeleteAccountPasswordPolicy(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Deletes the password policy for the AWS account. There are no parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountPasswordPolicyOutcomeCallable DeleteAccountPasswordPolicyCallable(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Deletes the password policy for the AWS account. There are no parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountPasswordPolicyAsync(const Model::DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IAM group. The group must not contain any users or have
         * any attached policies.</p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes the specified IAM group. The group must not contain any users or have
         * any attached policies.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes the specified IAM group. The group must not contain any users or have
         * any attached policies.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * group.</p> <p>A group can also have managed policies attached to it. To detach a
         * managed policy from a group, use <a>DetachGroupPolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DeleteGroupPolicyOutcome DeleteGroupPolicy(const Model::DeleteGroupPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * group.</p> <p>A group can also have managed policies attached to it. To detach a
         * managed policy from a group, use <a>DetachGroupPolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupPolicyOutcomeCallable DeleteGroupPolicyCallable(const Model::DeleteGroupPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * group.</p> <p>A group can also have managed policies attached to it. To detach a
         * managed policy from a group, use <a>DetachGroupPolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupPolicyAsync(const Model::DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified instance profile. The instance profile must not have an
         * associated role.</p> <important> <p>Make sure you do not have any Amazon EC2
         * instances running with the instance profile you are about to delete. Deleting a
         * role or instance profile that is associated with a running instance will break
         * any applications running on the instance.</p> </important> <p>For more
         * information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         */
        virtual Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * <p>Deletes the specified instance profile. The instance profile must not have an
         * associated role.</p> <important> <p>Make sure you do not have any Amazon EC2
         * instances running with the instance profile you are about to delete. Deleting a
         * role or instance profile that is associated with a running instance will break
         * any applications running on the instance.</p> </important> <p>For more
         * information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * <p>Deletes the specified instance profile. The instance profile must not have an
         * associated role.</p> <important> <p>Make sure you do not have any Amazon EC2
         * instances running with the instance profile you are about to delete. Deleting a
         * role or instance profile that is associated with a running instance will break
         * any applications running on the instance.</p> </important> <p>For more
         * information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceProfileAsync(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the password for the specified IAM user, which terminates the user's
         * ability to access AWS services through the AWS Management Console.</p>
         * <important> <p> Deleting a user's password does not prevent a user from
         * accessing AWS through the command line interface or the API. To prevent all user
         * access you must also either make any access keys inactive or delete them. For
         * more information about making keys inactive or deleting them, see
         * <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </p> </important>
         */
        virtual Model::DeleteLoginProfileOutcome DeleteLoginProfile(const Model::DeleteLoginProfileRequest& request) const;

        /**
         * <p>Deletes the password for the specified IAM user, which terminates the user's
         * ability to access AWS services through the AWS Management Console.</p>
         * <important> <p> Deleting a user's password does not prevent a user from
         * accessing AWS through the command line interface or the API. To prevent all user
         * access you must also either make any access keys inactive or delete them. For
         * more information about making keys inactive or deleting them, see
         * <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoginProfileOutcomeCallable DeleteLoginProfileCallable(const Model::DeleteLoginProfileRequest& request) const;

        /**
         * <p>Deletes the password for the specified IAM user, which terminates the user's
         * ability to access AWS services through the AWS Management Console.</p>
         * <important> <p> Deleting a user's password does not prevent a user from
         * accessing AWS through the command line interface or the API. To prevent all user
         * access you must also either make any access keys inactive or delete them. For
         * more information about making keys inactive or deleting them, see
         * <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoginProfileAsync(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an OpenID Connect identity provider (IdP) resource object in IAM.</p>
         * <p>Deleting an IAM OIDC provider resource does not update any roles that
         * reference the provider as a principal in their trust policies. Any attempt to
         * assume a role that references a deleted provider fails.</p> <p>This action is
         * idempotent; it does not fail or return an error if you call the action for a
         * provider that does not exist.</p>
         */
        virtual Model::DeleteOpenIDConnectProviderOutcome DeleteOpenIDConnectProvider(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Deletes an OpenID Connect identity provider (IdP) resource object in IAM.</p>
         * <p>Deleting an IAM OIDC provider resource does not update any roles that
         * reference the provider as a principal in their trust policies. Any attempt to
         * assume a role that references a deleted provider fails.</p> <p>This action is
         * idempotent; it does not fail or return an error if you call the action for a
         * provider that does not exist.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOpenIDConnectProviderOutcomeCallable DeleteOpenIDConnectProviderCallable(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Deletes an OpenID Connect identity provider (IdP) resource object in IAM.</p>
         * <p>Deleting an IAM OIDC provider resource does not update any roles that
         * reference the provider as a principal in their trust policies. Any attempt to
         * assume a role that references a deleted provider fails.</p> <p>This action is
         * idempotent; it does not fail or return an error if you call the action for a
         * provider that does not exist.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOpenIDConnectProviderAsync(const Model::DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed
         * policy, you must first detach the policy from all users, groups, and roles that
         * it is attached to, and you must delete all of the policy's versions. The
         * following steps describe the process for deleting a managed policy:</p> <ul>
         * <li> <p>Detach the policy from all users, groups, and roles that the policy is
         * attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or
         * <a>DetachRolePolicy</a> APIs. To list all the users, groups, and roles that a
         * policy is attached to, use <a>ListEntitiesForPolicy</a>.</p> </li> <li>
         * <p>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list
         * the policy's versions, use <a>ListPolicyVersions</a>. You cannot use
         * <a>DeletePolicyVersion</a> to delete the version that is marked as the default
         * version. You delete the policy's default version in the next step of the
         * process.</p> </li> <li> <p>Delete the policy (this automatically deletes the
         * policy's default version) using this API.</p> </li> </ul> <p>For information
         * about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed
         * policy, you must first detach the policy from all users, groups, and roles that
         * it is attached to, and you must delete all of the policy's versions. The
         * following steps describe the process for deleting a managed policy:</p> <ul>
         * <li> <p>Detach the policy from all users, groups, and roles that the policy is
         * attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or
         * <a>DetachRolePolicy</a> APIs. To list all the users, groups, and roles that a
         * policy is attached to, use <a>ListEntitiesForPolicy</a>.</p> </li> <li>
         * <p>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list
         * the policy's versions, use <a>ListPolicyVersions</a>. You cannot use
         * <a>DeletePolicyVersion</a> to delete the version that is marked as the default
         * version. You delete the policy's default version in the next step of the
         * process.</p> </li> <li> <p>Delete the policy (this automatically deletes the
         * policy's default version) using this API.</p> </li> </ul> <p>For information
         * about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed
         * policy, you must first detach the policy from all users, groups, and roles that
         * it is attached to, and you must delete all of the policy's versions. The
         * following steps describe the process for deleting a managed policy:</p> <ul>
         * <li> <p>Detach the policy from all users, groups, and roles that the policy is
         * attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or
         * <a>DetachRolePolicy</a> APIs. To list all the users, groups, and roles that a
         * policy is attached to, use <a>ListEntitiesForPolicy</a>.</p> </li> <li>
         * <p>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list
         * the policy's versions, use <a>ListPolicyVersions</a>. You cannot use
         * <a>DeletePolicyVersion</a> to delete the version that is marked as the default
         * version. You delete the policy's default version in the next step of the
         * process.</p> </li> <li> <p>Delete the policy (this automatically deletes the
         * policy's default version) using this API.</p> </li> </ul> <p>For information
         * about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified version from the specified managed policy.</p> <p>You
         * cannot delete the default version from a policy using this API. To delete the
         * default version from a policy, use <a>DeletePolicy</a>. To find out which
         * version of a policy is marked as the default version, use
         * <a>ListPolicyVersions</a>.</p> <p>For information about versions for managed
         * policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * <p>Deletes the specified version from the specified managed policy.</p> <p>You
         * cannot delete the default version from a policy using this API. To delete the
         * default version from a policy, use <a>DeletePolicy</a>. To find out which
         * version of a policy is marked as the default version, use
         * <a>ListPolicyVersions</a>.</p> <p>For information about versions for managed
         * policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * <p>Deletes the specified version from the specified managed policy.</p> <p>You
         * cannot delete the default version from a policy using this API. To delete the
         * default version from a policy, use <a>DeletePolicy</a>. To find out which
         * version of a policy is marked as the default version, use
         * <a>ListPolicyVersions</a>.</p> <p>For information about versions for managed
         * policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified role. The role must not have any policies attached. For
         * more information about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <important> <p>Make sure you do not have any Amazon EC2
         * instances running with the role you are about to delete. Deleting a role or
         * instance profile that is associated with a running instance will break any
         * applications running on the instance.</p> </important>
         */
        virtual Model::DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest& request) const;

        /**
         * <p>Deletes the specified role. The role must not have any policies attached. For
         * more information about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <important> <p>Make sure you do not have any Amazon EC2
         * instances running with the role you are about to delete. Deleting a role or
         * instance profile that is associated with a running instance will break any
         * applications running on the instance.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request) const;

        /**
         * <p>Deletes the specified role. The role must not have any policies attached. For
         * more information about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <important> <p>Make sure you do not have any Amazon EC2
         * instances running with the role you are about to delete. Deleting a role or
         * instance profile that is associated with a running instance will break any
         * applications running on the instance.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * role.</p> <p>A role can also have managed policies attached to it. To detach a
         * managed policy from a role, use <a>DetachRolePolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DeleteRolePolicyOutcome DeleteRolePolicy(const Model::DeleteRolePolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * role.</p> <p>A role can also have managed policies attached to it. To detach a
         * managed policy from a role, use <a>DetachRolePolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRolePolicyOutcomeCallable DeleteRolePolicyCallable(const Model::DeleteRolePolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * role.</p> <p>A role can also have managed policies attached to it. To detach a
         * managed policy from a role, use <a>DetachRolePolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRolePolicyAsync(const Model::DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a SAML provider resource in IAM.</p> <p>Deleting the provider
         * resource from IAM does not update any roles that reference the SAML provider
         * resource's ARN as a principal in their trust policies. Any attempt to assume a
         * role that references a non-existent provider resource ARN fails.</p> <note> <p>
         * This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         */
        virtual Model::DeleteSAMLProviderOutcome DeleteSAMLProvider(const Model::DeleteSAMLProviderRequest& request) const;

        /**
         * <p>Deletes a SAML provider resource in IAM.</p> <p>Deleting the provider
         * resource from IAM does not update any roles that reference the SAML provider
         * resource's ARN as a principal in their trust policies. Any attempt to assume a
         * role that references a non-existent provider resource ARN fails.</p> <note> <p>
         * This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSAMLProviderOutcomeCallable DeleteSAMLProviderCallable(const Model::DeleteSAMLProviderRequest& request) const;

        /**
         * <p>Deletes a SAML provider resource in IAM.</p> <p>Deleting the provider
         * resource from IAM does not update any roles that reference the SAML provider
         * resource's ARN as a principal in their trust policies. Any attempt to assume a
         * role that references a non-existent provider resource ARN fails.</p> <note> <p>
         * This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSAMLProviderAsync(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by
         * this action is used only for authenticating the associated IAM user to an AWS
         * CodeCommit repository. For more information about using SSH keys to authenticate
         * to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         */
        virtual Model::DeleteSSHPublicKeyOutcome DeleteSSHPublicKey(const Model::DeleteSSHPublicKeyRequest& request) const;

        /**
         * <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by
         * this action is used only for authenticating the associated IAM user to an AWS
         * CodeCommit repository. For more information about using SSH keys to authenticate
         * to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSSHPublicKeyOutcomeCallable DeleteSSHPublicKeyCallable(const Model::DeleteSSHPublicKeyRequest& request) const;

        /**
         * <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by
         * this action is used only for authenticating the associated IAM user to an AWS
         * CodeCommit repository. For more information about using SSH keys to authenticate
         * to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSSHPublicKeyAsync(const Model::DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified server certificate.</p> <p>For more information about
         * working with server certificates, including a list of AWS services that can use
         * the server certificates that you manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <important> <p>
         * If you are using a server certificate with Elastic Load Balancing, deleting the
         * certificate could have implications for your application. If Elastic Load
         * Balancing doesn't detect the deletion of bound certificates, it may continue to
         * use the certificates. This could cause Elastic Load Balancing to stop accepting
         * traffic. We recommend that you remove the reference to the certificate from
         * Elastic Load Balancing before using this command to delete the certificate. For
         * more information, go to <a
         * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
         * in the <i>Elastic Load Balancing API Reference</i>.</p> </important>
         */
        virtual Model::DeleteServerCertificateOutcome DeleteServerCertificate(const Model::DeleteServerCertificateRequest& request) const;

        /**
         * <p>Deletes the specified server certificate.</p> <p>For more information about
         * working with server certificates, including a list of AWS services that can use
         * the server certificates that you manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <important> <p>
         * If you are using a server certificate with Elastic Load Balancing, deleting the
         * certificate could have implications for your application. If Elastic Load
         * Balancing doesn't detect the deletion of bound certificates, it may continue to
         * use the certificates. This could cause Elastic Load Balancing to stop accepting
         * traffic. We recommend that you remove the reference to the certificate from
         * Elastic Load Balancing before using this command to delete the certificate. For
         * more information, go to <a
         * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
         * in the <i>Elastic Load Balancing API Reference</i>.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServerCertificateOutcomeCallable DeleteServerCertificateCallable(const Model::DeleteServerCertificateRequest& request) const;

        /**
         * <p>Deletes the specified server certificate.</p> <p>For more information about
         * working with server certificates, including a list of AWS services that can use
         * the server certificates that you manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <important> <p>
         * If you are using a server certificate with Elastic Load Balancing, deleting the
         * certificate could have implications for your application. If Elastic Load
         * Balancing doesn't detect the deletion of bound certificates, it may continue to
         * use the certificates. This could cause Elastic Load Balancing to stop accepting
         * traffic. We recommend that you remove the reference to the certificate from
         * Elastic Load Balancing before using this command to delete the certificate. For
         * more information, go to <a
         * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
         * in the <i>Elastic Load Balancing API Reference</i>.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServerCertificateAsync(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a signing certificate associated with the specified IAM user.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. Because this action works
         * for access keys under the AWS account, you can use this action to manage root
         * credentials even if the AWS account has no associated IAM users.</p>
         */
        virtual Model::DeleteSigningCertificateOutcome DeleteSigningCertificate(const Model::DeleteSigningCertificateRequest& request) const;

        /**
         * <p>Deletes a signing certificate associated with the specified IAM user.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. Because this action works
         * for access keys under the AWS account, you can use this action to manage root
         * credentials even if the AWS account has no associated IAM users.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSigningCertificateOutcomeCallable DeleteSigningCertificateCallable(const Model::DeleteSigningCertificateRequest& request) const;

        /**
         * <p>Deletes a signing certificate associated with the specified IAM user.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. Because this action works
         * for access keys under the AWS account, you can use this action to manage root
         * credentials even if the AWS account has no associated IAM users.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSigningCertificateAsync(const Model::DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IAM user. The user must not belong to any groups or
         * have any access keys, signing certificates, or attached policies.</p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the specified IAM user. The user must not belong to any groups or
         * have any access keys, signing certificates, or attached policies.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the specified IAM user. The user must not belong to any groups or
         * have any access keys, signing certificates, or attached policies.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * user.</p> <p>A user can also have managed policies attached to it. To detach a
         * managed policy from a user, use <a>DetachUserPolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DeleteUserPolicyOutcome DeleteUserPolicy(const Model::DeleteUserPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * user.</p> <p>A user can also have managed policies attached to it. To detach a
         * managed policy from a user, use <a>DetachUserPolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPolicyOutcomeCallable DeleteUserPolicyCallable(const Model::DeleteUserPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * user.</p> <p>A user can also have managed policies attached to it. To detach a
         * managed policy from a user, use <a>DetachUserPolicy</a>. For more information
         * about policies, refer to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPolicyAsync(const Model::DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a virtual MFA device.</p> <note> <p> You must deactivate a user's
         * virtual MFA device before you can delete it. For information about deactivating
         * MFA devices, see <a>DeactivateMFADevice</a>. </p> </note>
         */
        virtual Model::DeleteVirtualMFADeviceOutcome DeleteVirtualMFADevice(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /**
         * <p>Deletes a virtual MFA device.</p> <note> <p> You must deactivate a user's
         * virtual MFA device before you can delete it. For information about deactivating
         * MFA devices, see <a>DeactivateMFADevice</a>. </p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualMFADeviceOutcomeCallable DeleteVirtualMFADeviceCallable(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /**
         * <p>Deletes a virtual MFA device.</p> <note> <p> You must deactivate a user's
         * virtual MFA device before you can delete it. For information about deactivating
         * MFA devices, see <a>DeactivateMFADevice</a>. </p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualMFADeviceAsync(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified IAM group.</p> <p>A
         * group can also have inline policies embedded with it. To delete an inline
         * policy, use the <a>DeleteGroupPolicy</a> API. For information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DetachGroupPolicyOutcome DetachGroupPolicy(const Model::DetachGroupPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified IAM group.</p> <p>A
         * group can also have inline policies embedded with it. To delete an inline
         * policy, use the <a>DeleteGroupPolicy</a> API. For information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachGroupPolicyOutcomeCallable DetachGroupPolicyCallable(const Model::DetachGroupPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified IAM group.</p> <p>A
         * group can also have inline policies embedded with it. To delete an inline
         * policy, use the <a>DeleteGroupPolicy</a> API. For information about policies,
         * see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachGroupPolicyAsync(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified role.</p> <p>A role
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteRolePolicy</a> API. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DetachRolePolicyOutcome DetachRolePolicy(const Model::DetachRolePolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified role.</p> <p>A role
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteRolePolicy</a> API. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachRolePolicyOutcomeCallable DetachRolePolicyCallable(const Model::DetachRolePolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified role.</p> <p>A role
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteRolePolicy</a> API. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachRolePolicyAsync(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified user.</p> <p>A user
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteUserPolicy</a> API. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified user.</p> <p>A user
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteUserPolicy</a> API. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified user.</p> <p>A user
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteUserPolicy</a> API. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified MFA device and associates it with the specified IAM
         * user. When enabled, the MFA device is required for every subsequent login by the
         * IAM user associated with the device.</p>
         */
        virtual Model::EnableMFADeviceOutcome EnableMFADevice(const Model::EnableMFADeviceRequest& request) const;

        /**
         * <p>Enables the specified MFA device and associates it with the specified IAM
         * user. When enabled, the MFA device is required for every subsequent login by the
         * IAM user associated with the device.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableMFADeviceOutcomeCallable EnableMFADeviceCallable(const Model::EnableMFADeviceRequest& request) const;

        /**
         * <p>Enables the specified MFA device and associates it with the specified IAM
         * user. When enabled, the MFA device is required for every subsequent login by the
         * IAM user associated with the device.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMFADeviceAsync(const Model::EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Generates a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GenerateCredentialReportOutcome GenerateCredentialReport(const Model::GenerateCredentialReportRequest& request) const;

        /**
         * <p> Generates a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateCredentialReportOutcomeCallable GenerateCredentialReportCallable(const Model::GenerateCredentialReportRequest& request) const;

        /**
         * <p> Generates a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateCredentialReportAsync(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about when the specified access key was last used. The
         * information includes the date and time of last use, along with the AWS service
         * and region that were specified in the last request made with that key.</p>
         */
        virtual Model::GetAccessKeyLastUsedOutcome GetAccessKeyLastUsed(const Model::GetAccessKeyLastUsedRequest& request) const;

        /**
         * <p>Retrieves information about when the specified access key was last used. The
         * information includes the date and time of last use, along with the AWS service
         * and region that were specified in the last request made with that key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessKeyLastUsedOutcomeCallable GetAccessKeyLastUsedCallable(const Model::GetAccessKeyLastUsedRequest& request) const;

        /**
         * <p>Retrieves information about when the specified access key was last used. The
         * information includes the date and time of last use, along with the AWS service
         * and region that were specified in the last request made with that key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessKeyLastUsedAsync(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all IAM users, groups, roles, and policies in
         * your AWS account, including their relationships to one another. Use this API to
         * obtain a snapshot of the configuration of IAM permissions (users, groups, roles,
         * and policies) in your account.</p> <p>You can optionally filter the results
         * using the <code>Filter</code> parameter. You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         */
        virtual Model::GetAccountAuthorizationDetailsOutcome GetAccountAuthorizationDetails(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /**
         * <p>Retrieves information about all IAM users, groups, roles, and policies in
         * your AWS account, including their relationships to one another. Use this API to
         * obtain a snapshot of the configuration of IAM permissions (users, groups, roles,
         * and policies) in your account.</p> <p>You can optionally filter the results
         * using the <code>Filter</code> parameter. You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountAuthorizationDetailsOutcomeCallable GetAccountAuthorizationDetailsCallable(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /**
         * <p>Retrieves information about all IAM users, groups, roles, and policies in
         * your AWS account, including their relationships to one another. Use this API to
         * obtain a snapshot of the configuration of IAM permissions (users, groups, roles,
         * and policies) in your account.</p> <p>You can optionally filter the results
         * using the <code>Filter</code> parameter. You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAuthorizationDetailsAsync(const Model::GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the password policy for the AWS account. For more information about
         * using a password policy, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a>.</p>
         */
        virtual Model::GetAccountPasswordPolicyOutcome GetAccountPasswordPolicy(const Model::GetAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Retrieves the password policy for the AWS account. For more information about
         * using a password policy, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountPasswordPolicyOutcomeCallable GetAccountPasswordPolicyCallable(const Model::GetAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Retrieves the password policy for the AWS account. For more information about
         * using a password policy, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountPasswordPolicyAsync(const Model::GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about IAM entity usage and IAM quotas in the AWS
         * account.</p> <p> For information about limitations on IAM entities, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetAccountSummaryOutcome GetAccountSummary(const Model::GetAccountSummaryRequest& request) const;

        /**
         * <p>Retrieves information about IAM entity usage and IAM quotas in the AWS
         * account.</p> <p> For information about limitations on IAM entities, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSummaryOutcomeCallable GetAccountSummaryCallable(const Model::GetAccountSummaryRequest& request) const;

        /**
         * <p>Retrieves information about IAM entity usage and IAM quotas in the AWS
         * account.</p> <p> For information about limitations on IAM entities, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSummaryAsync(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all of the context keys referenced in the input policies. The
         * policies are supplied as a list of one or more strings. To get the context keys
         * from policies associated with an IAM user, group, or role, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request, and can be evaluated by testing against a value specified in
         * an IAM policy. Use GetContextKeysForCustomPolicy to understand what key names
         * and values you must supply when you call <a>SimulateCustomPolicy</a>. Note that
         * all parameters are shown in unencoded form here for clarity, but must be URL
         * encoded to be included as a part of a real HTML request.</p>
         */
        virtual Model::GetContextKeysForCustomPolicyOutcome GetContextKeysForCustomPolicy(const Model::GetContextKeysForCustomPolicyRequest& request) const;

        /**
         * <p>Gets a list of all of the context keys referenced in the input policies. The
         * policies are supplied as a list of one or more strings. To get the context keys
         * from policies associated with an IAM user, group, or role, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request, and can be evaluated by testing against a value specified in
         * an IAM policy. Use GetContextKeysForCustomPolicy to understand what key names
         * and values you must supply when you call <a>SimulateCustomPolicy</a>. Note that
         * all parameters are shown in unencoded form here for clarity, but must be URL
         * encoded to be included as a part of a real HTML request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContextKeysForCustomPolicyOutcomeCallable GetContextKeysForCustomPolicyCallable(const Model::GetContextKeysForCustomPolicyRequest& request) const;

        /**
         * <p>Gets a list of all of the context keys referenced in the input policies. The
         * policies are supplied as a list of one or more strings. To get the context keys
         * from policies associated with an IAM user, group, or role, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request, and can be evaluated by testing against a value specified in
         * an IAM policy. Use GetContextKeysForCustomPolicy to understand what key names
         * and values you must supply when you call <a>SimulateCustomPolicy</a>. Note that
         * all parameters are shown in unencoded form here for clarity, but must be URL
         * encoded to be included as a part of a real HTML request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContextKeysForCustomPolicyAsync(const Model::GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all of the context keys referenced in all of the IAM policies
         * attached to the specified IAM entity. The entity can be an IAM user, group, or
         * role. If you specify a user, then the request also includes all of the policies
         * attached to groups that the user is a member of.</p> <p>You can optionally
         * include a list of one or more additional policies, specified as strings. If you
         * want to include <i>only</i> a list of policies by string, use
         * <a>GetContextKeysForCustomPolicy</a> instead.</p> <p> <b>Note:</b> This API
         * discloses information about the permissions granted to other users. If you do
         * not want users to see other user's permissions, then consider allowing them to
         * use <a>GetContextKeysForCustomPolicy</a> instead.</p> <p>Context keys are
         * variables maintained by AWS and its services that provide details about the
         * context of an API query request, and can be evaluated by testing against a value
         * in an IAM policy. Use <a>GetContextKeysForPrincipalPolicy</a> to understand what
         * key names and values you must supply when you call
         * <a>SimulatePrincipalPolicy</a>.</p>
         */
        virtual Model::GetContextKeysForPrincipalPolicyOutcome GetContextKeysForPrincipalPolicy(const Model::GetContextKeysForPrincipalPolicyRequest& request) const;

        /**
         * <p>Gets a list of all of the context keys referenced in all of the IAM policies
         * attached to the specified IAM entity. The entity can be an IAM user, group, or
         * role. If you specify a user, then the request also includes all of the policies
         * attached to groups that the user is a member of.</p> <p>You can optionally
         * include a list of one or more additional policies, specified as strings. If you
         * want to include <i>only</i> a list of policies by string, use
         * <a>GetContextKeysForCustomPolicy</a> instead.</p> <p> <b>Note:</b> This API
         * discloses information about the permissions granted to other users. If you do
         * not want users to see other user's permissions, then consider allowing them to
         * use <a>GetContextKeysForCustomPolicy</a> instead.</p> <p>Context keys are
         * variables maintained by AWS and its services that provide details about the
         * context of an API query request, and can be evaluated by testing against a value
         * in an IAM policy. Use <a>GetContextKeysForPrincipalPolicy</a> to understand what
         * key names and values you must supply when you call
         * <a>SimulatePrincipalPolicy</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContextKeysForPrincipalPolicyOutcomeCallable GetContextKeysForPrincipalPolicyCallable(const Model::GetContextKeysForPrincipalPolicyRequest& request) const;

        /**
         * <p>Gets a list of all of the context keys referenced in all of the IAM policies
         * attached to the specified IAM entity. The entity can be an IAM user, group, or
         * role. If you specify a user, then the request also includes all of the policies
         * attached to groups that the user is a member of.</p> <p>You can optionally
         * include a list of one or more additional policies, specified as strings. If you
         * want to include <i>only</i> a list of policies by string, use
         * <a>GetContextKeysForCustomPolicy</a> instead.</p> <p> <b>Note:</b> This API
         * discloses information about the permissions granted to other users. If you do
         * not want users to see other user's permissions, then consider allowing them to
         * use <a>GetContextKeysForCustomPolicy</a> instead.</p> <p>Context keys are
         * variables maintained by AWS and its services that provide details about the
         * context of an API query request, and can be evaluated by testing against a value
         * in an IAM policy. Use <a>GetContextKeysForPrincipalPolicy</a> to understand what
         * key names and values you must supply when you call
         * <a>SimulatePrincipalPolicy</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContextKeysForPrincipalPolicyAsync(const Model::GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetCredentialReportOutcome GetCredentialReport(const Model::GetCredentialReportRequest& request) const;

        /**
         * <p> Retrieves a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCredentialReportOutcomeCallable GetCredentialReportCallable(const Model::GetCredentialReportRequest& request) const;

        /**
         * <p> Retrieves a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCredentialReportAsync(const Model::GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of IAM users that are in the specified IAM group. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * <p> Returns a list of IAM users that are in the specified IAM group. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * <p> Returns a list of IAM users that are in the specified IAM group. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM group.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM group can also
         * have managed policies attached to it. To retrieve a managed policy document that
         * is attached to a group, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetGroupPolicyOutcome GetGroupPolicy(const Model::GetGroupPolicyRequest& request) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM group.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM group can also
         * have managed policies attached to it. To retrieve a managed policy document that
         * is attached to a group, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupPolicyOutcomeCallable GetGroupPolicyCallable(const Model::GetGroupPolicyRequest& request) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM group.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM group can also
         * have managed policies attached to it. To retrieve a managed policy document that
         * is attached to a group, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupPolicyAsync(const Model::GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves information about the specified instance profile, including the
         * instance profile's path, GUID, ARN, and role. For more information about
         * instance profiles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetInstanceProfileOutcome GetInstanceProfile(const Model::GetInstanceProfileRequest& request) const;

        /**
         * <p> Retrieves information about the specified instance profile, including the
         * instance profile's path, GUID, ARN, and role. For more information about
         * instance profiles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceProfileOutcomeCallable GetInstanceProfileCallable(const Model::GetInstanceProfileRequest& request) const;

        /**
         * <p> Retrieves information about the specified instance profile, including the
         * instance profile's path, GUID, ARN, and role. For more information about
         * instance profiles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceProfileAsync(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the user name and password-creation date for the specified IAM
         * user. If the user has not been assigned a password, the action returns a 404
         * (<code>NoSuchEntity</code>) error.</p>
         */
        virtual Model::GetLoginProfileOutcome GetLoginProfile(const Model::GetLoginProfileRequest& request) const;

        /**
         * <p>Retrieves the user name and password-creation date for the specified IAM
         * user. If the user has not been assigned a password, the action returns a 404
         * (<code>NoSuchEntity</code>) error.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoginProfileOutcomeCallable GetLoginProfileCallable(const Model::GetLoginProfileRequest& request) const;

        /**
         * <p>Retrieves the user name and password-creation date for the specified IAM
         * user. If the user has not been assigned a password, the action returns a 404
         * (<code>NoSuchEntity</code>) error.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoginProfileAsync(const Model::GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified OpenID Connect (OIDC) provider
         * resource object in IAM.</p>
         */
        virtual Model::GetOpenIDConnectProviderOutcome GetOpenIDConnectProvider(const Model::GetOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Returns information about the specified OpenID Connect (OIDC) provider
         * resource object in IAM.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpenIDConnectProviderOutcomeCallable GetOpenIDConnectProviderCallable(const Model::GetOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Returns information about the specified OpenID Connect (OIDC) provider
         * resource object in IAM.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpenIDConnectProviderAsync(const Model::GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified managed policy, including the
         * policy's default version and the total number of IAM users, groups, and roles to
         * which the policy is attached. To retrieve the list of the specific users,
         * groups, and roles that the policy is attached to, use the
         * <a>ListEntitiesForPolicy</a> API. This API returns metadata about the policy. To
         * retrieve the actual policy document for a specific version of the policy, use
         * <a>GetPolicyVersion</a>.</p> <p>This API retrieves information about managed
         * policies. To retrieve information about an inline policy that is embedded with
         * an IAM user, group, or role, use the <a>GetUserPolicy</a>,
         * <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API.</p> <p>For more information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Retrieves information about the specified managed policy, including the
         * policy's default version and the total number of IAM users, groups, and roles to
         * which the policy is attached. To retrieve the list of the specific users,
         * groups, and roles that the policy is attached to, use the
         * <a>ListEntitiesForPolicy</a> API. This API returns metadata about the policy. To
         * retrieve the actual policy document for a specific version of the policy, use
         * <a>GetPolicyVersion</a>.</p> <p>This API retrieves information about managed
         * policies. To retrieve information about an inline policy that is embedded with
         * an IAM user, group, or role, use the <a>GetUserPolicy</a>,
         * <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API.</p> <p>For more information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Retrieves information about the specified managed policy, including the
         * policy's default version and the total number of IAM users, groups, and roles to
         * which the policy is attached. To retrieve the list of the specific users,
         * groups, and roles that the policy is attached to, use the
         * <a>ListEntitiesForPolicy</a> API. This API returns metadata about the policy. To
         * retrieve the actual policy document for a specific version of the policy, use
         * <a>GetPolicyVersion</a>.</p> <p>This API retrieves information about managed
         * policies. To retrieve information about an inline policy that is embedded with
         * an IAM user, group, or role, use the <a>GetUserPolicy</a>,
         * <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API.</p> <p>For more information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified version of the specified managed
         * policy, including the policy document.</p> <note> <p>Policies returned by this
         * API are URL-encoded compliant with <a
         * href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You can use a URL
         * decoding method to convert the policy back to plain JSON text. For example, if
         * you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>To list the available
         * versions for a policy, use <a>ListPolicyVersions</a>.</p> <p>This API retrieves
         * information about managed policies. To retrieve information about an inline
         * policy that is embedded in a user, group, or role, use the <a>GetUserPolicy</a>,
         * <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API.</p> <p>For more information
         * about the types of policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policy versions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest& request) const;

        /**
         * <p>Retrieves information about the specified version of the specified managed
         * policy, including the policy document.</p> <note> <p>Policies returned by this
         * API are URL-encoded compliant with <a
         * href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You can use a URL
         * decoding method to convert the policy back to plain JSON text. For example, if
         * you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>To list the available
         * versions for a policy, use <a>ListPolicyVersions</a>.</p> <p>This API retrieves
         * information about managed policies. To retrieve information about an inline
         * policy that is embedded in a user, group, or role, use the <a>GetUserPolicy</a>,
         * <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API.</p> <p>For more information
         * about the types of policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policy versions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;

        /**
         * <p>Retrieves information about the specified version of the specified managed
         * policy, including the policy document.</p> <note> <p>Policies returned by this
         * API are URL-encoded compliant with <a
         * href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You can use a URL
         * decoding method to convert the policy back to plain JSON text. For example, if
         * you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>To list the available
         * versions for a policy, use <a>ListPolicyVersions</a>.</p> <p>This API retrieves
         * information about managed policies. To retrieve information about an inline
         * policy that is embedded in a user, group, or role, use the <a>GetUserPolicy</a>,
         * <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a> API.</p> <p>For more information
         * about the types of policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policy versions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified role, including the role's path,
         * GUID, ARN, and the role's trust policy that grants permission to assume the
         * role. For more information about roles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note>
         */
        virtual Model::GetRoleOutcome GetRole(const Model::GetRoleRequest& request) const;

        /**
         * <p>Retrieves information about the specified role, including the role's path,
         * GUID, ARN, and the role's trust policy that grants permission to assume the
         * role. For more information about roles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoleOutcomeCallable GetRoleCallable(const Model::GetRoleRequest& request) const;

        /**
         * <p>Retrieves information about the specified role, including the role's path,
         * GUID, ARN, and the role's trust policy that grants permission to assume the
         * role. For more information about roles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoleAsync(const Model::GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded with the
         * specified IAM role.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM role can also have
         * managed policies attached to it. To retrieve a managed policy document that is
         * attached to a role, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about roles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p>
         */
        virtual Model::GetRolePolicyOutcome GetRolePolicy(const Model::GetRolePolicyRequest& request) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded with the
         * specified IAM role.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM role can also have
         * managed policies attached to it. To retrieve a managed policy document that is
         * attached to a role, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about roles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRolePolicyOutcomeCallable GetRolePolicyCallable(const Model::GetRolePolicyRequest& request) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded with the
         * specified IAM role.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM role can also have
         * managed policies attached to it. To retrieve a managed policy document that is
         * attached to a role, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about roles, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRolePolicyAsync(const Model::GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the SAML provider metadocument that was uploaded when the IAM SAML
         * provider resource object was created or updated.</p> <note> <p>This operation
         * requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         */
        virtual Model::GetSAMLProviderOutcome GetSAMLProvider(const Model::GetSAMLProviderRequest& request) const;

        /**
         * <p>Returns the SAML provider metadocument that was uploaded when the IAM SAML
         * provider resource object was created or updated.</p> <note> <p>This operation
         * requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSAMLProviderOutcomeCallable GetSAMLProviderCallable(const Model::GetSAMLProviderRequest& request) const;

        /**
         * <p>Returns the SAML provider metadocument that was uploaded when the IAM SAML
         * provider resource object was created or updated.</p> <note> <p>This operation
         * requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSAMLProviderAsync(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified SSH public key, including metadata about the key.</p>
         * <p>The SSH public key retrieved by this action is used only for authenticating
         * the associated IAM user to an AWS CodeCommit repository. For more information
         * about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         */
        virtual Model::GetSSHPublicKeyOutcome GetSSHPublicKey(const Model::GetSSHPublicKeyRequest& request) const;

        /**
         * <p>Retrieves the specified SSH public key, including metadata about the key.</p>
         * <p>The SSH public key retrieved by this action is used only for authenticating
         * the associated IAM user to an AWS CodeCommit repository. For more information
         * about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSSHPublicKeyOutcomeCallable GetSSHPublicKeyCallable(const Model::GetSSHPublicKeyRequest& request) const;

        /**
         * <p>Retrieves the specified SSH public key, including metadata about the key.</p>
         * <p>The SSH public key retrieved by this action is used only for authenticating
         * the associated IAM user to an AWS CodeCommit repository. For more information
         * about using SSH keys to authenticate to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSSHPublicKeyAsync(const Model::GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified server certificate stored in
         * IAM.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetServerCertificateOutcome GetServerCertificate(const Model::GetServerCertificateRequest& request) const;

        /**
         * <p>Retrieves information about the specified server certificate stored in
         * IAM.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServerCertificateOutcomeCallable GetServerCertificateCallable(const Model::GetServerCertificateRequest& request) const;

        /**
         * <p>Retrieves information about the specified server certificate stored in
         * IAM.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServerCertificateAsync(const Model::GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified IAM user, including the user's
         * creation date, path, unique ID, and ARN.</p> <p>If you do not specify a user
         * name, IAM determines the user name implicitly based on the AWS access key ID
         * used to sign the request to this API.</p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves information about the specified IAM user, including the user's
         * creation date, path, unique ID, and ARN.</p> <p>If you do not specify a user
         * name, IAM determines the user name implicitly based on the AWS access key ID
         * used to sign the request to this API.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves information about the specified IAM user, including the user's
         * creation date, path, unique ID, and ARN.</p> <p>If you do not specify a user
         * name, IAM determines the user name implicitly based on the AWS access key ID
         * used to sign the request to this API.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM user.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM user can also have
         * managed policies attached to it. To retrieve a managed policy document that is
         * attached to a user, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::GetUserPolicyOutcome GetUserPolicy(const Model::GetUserPolicyRequest& request) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM user.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM user can also have
         * managed policies attached to it. To retrieve a managed policy document that is
         * attached to a user, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserPolicyOutcomeCallable GetUserPolicyCallable(const Model::GetUserPolicyRequest& request) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM user.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note> <p>An IAM user can also have
         * managed policies attached to it. To retrieve a managed policy document that is
         * attached to a user, use <a>GetPolicy</a> to determine the policy's default
         * version, then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserPolicyAsync(const Model::GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the access key IDs associated with the specified
         * IAM user. If there are none, the action returns an empty list.</p> <p>Although
         * each user is limited to a small number of keys, you can still paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         * <p>If the <code>UserName</code> field is not specified, the UserName is
         * determined implicitly based on the AWS access key ID used to sign the request.
         * Because this action works for access keys under the AWS account, you can use
         * this action to manage root credentials even if the AWS account has no associated
         * users.</p> <note> <p>To ensure the security of your AWS account, the secret
         * access key is accessible only during key and user creation.</p> </note>
         */
        virtual Model::ListAccessKeysOutcome ListAccessKeys(const Model::ListAccessKeysRequest& request) const;

        /**
         * <p>Returns information about the access key IDs associated with the specified
         * IAM user. If there are none, the action returns an empty list.</p> <p>Although
         * each user is limited to a small number of keys, you can still paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         * <p>If the <code>UserName</code> field is not specified, the UserName is
         * determined implicitly based on the AWS access key ID used to sign the request.
         * Because this action works for access keys under the AWS account, you can use
         * this action to manage root credentials even if the AWS account has no associated
         * users.</p> <note> <p>To ensure the security of your AWS account, the secret
         * access key is accessible only during key and user creation.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessKeysOutcomeCallable ListAccessKeysCallable(const Model::ListAccessKeysRequest& request) const;

        /**
         * <p>Returns information about the access key IDs associated with the specified
         * IAM user. If there are none, the action returns an empty list.</p> <p>Although
         * each user is limited to a small number of keys, you can still paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         * <p>If the <code>UserName</code> field is not specified, the UserName is
         * determined implicitly based on the AWS access key ID used to sign the request.
         * Because this action works for access keys under the AWS account, you can use
         * this action to manage root credentials even if the AWS account has no associated
         * users.</p> <note> <p>To ensure the security of your AWS account, the secret
         * access key is accessible only during key and user creation.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the account alias associated with the AWS account (Note: you can have
         * only one). For information about using an AWS account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::ListAccountAliasesOutcome ListAccountAliases(const Model::ListAccountAliasesRequest& request) const;

        /**
         * <p>Lists the account alias associated with the AWS account (Note: you can have
         * only one). For information about using an AWS account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAliasesOutcomeCallable ListAccountAliasesCallable(const Model::ListAccountAliasesRequest& request) const;

        /**
         * <p>Lists the account alias associated with the AWS account (Note: you can have
         * only one). For information about using an AWS account alias, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAliasesAsync(const Model::ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM group.</p>
         * <p>An IAM group can also have inline policies embedded with it. To list the
         * inline policies for a group, use the <a>ListGroupPolicies</a> API. For
         * information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         */
        virtual Model::ListAttachedGroupPoliciesOutcome ListAttachedGroupPolicies(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM group.</p>
         * <p>An IAM group can also have inline policies embedded with it. To list the
         * inline policies for a group, use the <a>ListGroupPolicies</a> API. For
         * information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedGroupPoliciesOutcomeCallable ListAttachedGroupPoliciesCallable(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM group.</p>
         * <p>An IAM group can also have inline policies embedded with it. To list the
         * inline policies for a group, use the <a>ListGroupPolicies</a> API. For
         * information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedGroupPoliciesAsync(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM role.</p>
         * <p>An IAM role can also have inline policies embedded with it. To list the
         * inline policies for a role, use the <a>ListRolePolicies</a> API. For information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified role (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         */
        virtual Model::ListAttachedRolePoliciesOutcome ListAttachedRolePolicies(const Model::ListAttachedRolePoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM role.</p>
         * <p>An IAM role can also have inline policies embedded with it. To list the
         * inline policies for a role, use the <a>ListRolePolicies</a> API. For information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified role (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedRolePoliciesOutcomeCallable ListAttachedRolePoliciesCallable(const Model::ListAttachedRolePoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM role.</p>
         * <p>An IAM role can also have inline policies embedded with it. To list the
         * inline policies for a role, use the <a>ListRolePolicies</a> API. For information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified role (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedRolePoliciesAsync(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM user.</p>
         * <p>An IAM user can also have inline policies embedded with it. To list the
         * inline policies for a user, use the <a>ListUserPolicies</a> API. For information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         */
        virtual Model::ListAttachedUserPoliciesOutcome ListAttachedUserPolicies(const Model::ListAttachedUserPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM user.</p>
         * <p>An IAM user can also have inline policies embedded with it. To list the
         * inline policies for a user, use the <a>ListUserPolicies</a> API. For information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedUserPoliciesOutcomeCallable ListAttachedUserPoliciesCallable(const Model::ListAttachedUserPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM user.</p>
         * <p>An IAM user can also have inline policies embedded with it. To list the
         * inline policies for a user, use the <a>ListUserPolicies</a> API. For information
         * about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the action returns an empty list.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedUserPoliciesAsync(const Model::ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all IAM users, groups, and roles that the specified managed policy is
         * attached to.</p> <p>You can use the optional <code>EntityFilter</code> parameter
         * to limit the results to a particular type of entity (users, groups, or roles).
         * For example, to list only the roles that are attached to the specified policy,
         * set <code>EntityFilter</code> to <code>Role</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         */
        virtual Model::ListEntitiesForPolicyOutcome ListEntitiesForPolicy(const Model::ListEntitiesForPolicyRequest& request) const;

        /**
         * <p>Lists all IAM users, groups, and roles that the specified managed policy is
         * attached to.</p> <p>You can use the optional <code>EntityFilter</code> parameter
         * to limit the results to a particular type of entity (users, groups, or roles).
         * For example, to list only the roles that are attached to the specified policy,
         * set <code>EntityFilter</code> to <code>Role</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesForPolicyOutcomeCallable ListEntitiesForPolicyCallable(const Model::ListEntitiesForPolicyRequest& request) const;

        /**
         * <p>Lists all IAM users, groups, and roles that the specified managed policy is
         * attached to.</p> <p>You can use the optional <code>EntityFilter</code> parameter
         * to limit the results to a particular type of entity (users, groups, or roles).
         * For example, to list only the roles that are attached to the specified policy,
         * set <code>EntityFilter</code> to <code>Role</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesForPolicyAsync(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * group.</p> <p>An IAM group can also have managed policies attached to it. To
         * list the managed policies that are attached to a group, use
         * <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified group,
         * the action returns an empty list.</p>
         */
        virtual Model::ListGroupPoliciesOutcome ListGroupPolicies(const Model::ListGroupPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * group.</p> <p>An IAM group can also have managed policies attached to it. To
         * list the managed policies that are attached to a group, use
         * <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified group,
         * the action returns an empty list.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupPoliciesOutcomeCallable ListGroupPoliciesCallable(const Model::ListGroupPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * group.</p> <p>An IAM group can also have managed policies attached to it. To
         * list the managed policies that are attached to a group, use
         * <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified group,
         * the action returns an empty list.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupPoliciesAsync(const Model::ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM groups that have the specified path prefix.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists the IAM groups that have the specified path prefix.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists the IAM groups that have the specified path prefix.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM groups that the specified IAM user belongs to.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         */
        virtual Model::ListGroupsForUserOutcome ListGroupsForUser(const Model::ListGroupsForUserRequest& request) const;

        /**
         * <p>Lists the IAM groups that the specified IAM user belongs to.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsForUserOutcomeCallable ListGroupsForUserCallable(const Model::ListGroupsForUserRequest& request) const;

        /**
         * <p>Lists the IAM groups that the specified IAM user belongs to.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance profiles that have the specified path prefix. If there are
         * none, the action returns an empty list. For more information about instance
         * profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         */
        virtual Model::ListInstanceProfilesOutcome ListInstanceProfiles(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified path prefix. If there are
         * none, the action returns an empty list. For more information about instance
         * profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfilesOutcomeCallable ListInstanceProfilesCallable(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified path prefix. If there are
         * none, the action returns an empty list. For more information about instance
         * profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesAsync(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance profiles that have the specified associated IAM role. If
         * there are none, the action returns an empty list. For more information about
         * instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         */
        virtual Model::ListInstanceProfilesForRoleOutcome ListInstanceProfilesForRole(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified associated IAM role. If
         * there are none, the action returns an empty list. For more information about
         * instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfilesForRoleOutcomeCallable ListInstanceProfilesForRoleCallable(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified associated IAM role. If
         * there are none, the action returns an empty list. For more information about
         * instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesForRoleAsync(const Model::ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the MFA devices for an IAM user. If the request includes a IAM user
         * name, then this action lists all the MFA devices associated with the specified
         * user. If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request for this API.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         */
        virtual Model::ListMFADevicesOutcome ListMFADevices(const Model::ListMFADevicesRequest& request) const;

        /**
         * <p>Lists the MFA devices for an IAM user. If the request includes a IAM user
         * name, then this action lists all the MFA devices associated with the specified
         * user. If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request for this API.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMFADevicesOutcomeCallable ListMFADevicesCallable(const Model::ListMFADevicesRequest& request) const;

        /**
         * <p>Lists the MFA devices for an IAM user. If the request includes a IAM user
         * name, then this action lists all the MFA devices associated with the specified
         * user. If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request for this API.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMFADevicesAsync(const Model::ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the IAM OpenID Connect (OIDC) provider resource
         * objects defined in the AWS account.</p>
         */
        virtual Model::ListOpenIDConnectProvidersOutcome ListOpenIDConnectProviders(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /**
         * <p>Lists information about the IAM OpenID Connect (OIDC) provider resource
         * objects defined in the AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpenIDConnectProvidersOutcomeCallable ListOpenIDConnectProvidersCallable(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /**
         * <p>Lists information about the IAM OpenID Connect (OIDC) provider resource
         * objects defined in the AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOpenIDConnectProvidersAsync(const Model::ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the managed policies that are available in your AWS account,
         * including your own customer-defined managed policies and all AWS managed
         * policies.</p> <p>You can filter the list of policies that is returned using the
         * optional <code>OnlyAttached</code>, <code>Scope</code>, and
         * <code>PathPrefix</code> parameters. For example, to list only the customer
         * managed policies in your AWS account, set <code>Scope</code> to
         * <code>Local</code>. To list only AWS managed policies, set <code>Scope</code> to
         * <code>AWS</code>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p> <p>For more
         * information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Lists all the managed policies that are available in your AWS account,
         * including your own customer-defined managed policies and all AWS managed
         * policies.</p> <p>You can filter the list of policies that is returned using the
         * optional <code>OnlyAttached</code>, <code>Scope</code>, and
         * <code>PathPrefix</code> parameters. For example, to list only the customer
         * managed policies in your AWS account, set <code>Scope</code> to
         * <code>Local</code>. To list only AWS managed policies, set <code>Scope</code> to
         * <code>AWS</code>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p> <p>For more
         * information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Lists all the managed policies that are available in your AWS account,
         * including your own customer-defined managed policies and all AWS managed
         * policies.</p> <p>You can filter the list of policies that is returned using the
         * optional <code>OnlyAttached</code>, <code>Scope</code>, and
         * <code>PathPrefix</code> parameters. For example, to list only the customer
         * managed policies in your AWS account, set <code>Scope</code> to
         * <code>Local</code>. To list only AWS managed policies, set <code>Scope</code> to
         * <code>AWS</code>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p> <p>For more
         * information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the versions of the specified managed policy,
         * including the version that is currently set as the policy's default version.</p>
         * <p>For more information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists information about the versions of the specified managed policy,
         * including the version that is currently set as the policy's default version.</p>
         * <p>For more information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists information about the versions of the specified managed policy,
         * including the version that is currently set as the policy's default version.</p>
         * <p>For more information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * role.</p> <p>An IAM role can also have managed policies attached to it. To list
         * the managed policies that are attached to a role, use
         * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified role,
         * the action returns an empty list.</p>
         */
        virtual Model::ListRolePoliciesOutcome ListRolePolicies(const Model::ListRolePoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * role.</p> <p>An IAM role can also have managed policies attached to it. To list
         * the managed policies that are attached to a role, use
         * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified role,
         * the action returns an empty list.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRolePoliciesOutcomeCallable ListRolePoliciesCallable(const Model::ListRolePoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * role.</p> <p>An IAM role can also have managed policies attached to it. To list
         * the managed policies that are attached to a role, use
         * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified role,
         * the action returns an empty list.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRolePoliciesAsync(const Model::ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM roles that have the specified path prefix. If there are none,
         * the action returns an empty list. For more information about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         */
        virtual Model::ListRolesOutcome ListRoles(const Model::ListRolesRequest& request) const;

        /**
         * <p>Lists the IAM roles that have the specified path prefix. If there are none,
         * the action returns an empty list. For more information about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRolesOutcomeCallable ListRolesCallable(const Model::ListRolesRequest& request) const;

        /**
         * <p>Lists the IAM roles that have the specified path prefix. If there are none,
         * the action returns an empty list. For more information about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRolesAsync(const Model::ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SAML provider resource objects defined in IAM in the account.</p>
         * <note> <p> This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         */
        virtual Model::ListSAMLProvidersOutcome ListSAMLProviders(const Model::ListSAMLProvidersRequest& request) const;

        /**
         * <p>Lists the SAML provider resource objects defined in IAM in the account.</p>
         * <note> <p> This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSAMLProvidersOutcomeCallable ListSAMLProvidersCallable(const Model::ListSAMLProvidersRequest& request) const;

        /**
         * <p>Lists the SAML provider resource objects defined in IAM in the account.</p>
         * <note> <p> This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSAMLProvidersAsync(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the SSH public keys associated with the specified
         * IAM user. If there are none, the action returns an empty list.</p> <p>The SSH
         * public keys returned by this action are used only for authenticating the IAM
         * user to an AWS CodeCommit repository. For more information about using SSH keys
         * to authenticate to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p> <p>Although each user is limited to a small number of keys, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p>
         */
        virtual Model::ListSSHPublicKeysOutcome ListSSHPublicKeys(const Model::ListSSHPublicKeysRequest& request) const;

        /**
         * <p>Returns information about the SSH public keys associated with the specified
         * IAM user. If there are none, the action returns an empty list.</p> <p>The SSH
         * public keys returned by this action are used only for authenticating the IAM
         * user to an AWS CodeCommit repository. For more information about using SSH keys
         * to authenticate to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p> <p>Although each user is limited to a small number of keys, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSSHPublicKeysOutcomeCallable ListSSHPublicKeysCallable(const Model::ListSSHPublicKeysRequest& request) const;

        /**
         * <p>Returns information about the SSH public keys associated with the specified
         * IAM user. If there are none, the action returns an empty list.</p> <p>The SSH
         * public keys returned by this action are used only for authenticating the IAM
         * user to an AWS CodeCommit repository. For more information about using SSH keys
         * to authenticate to an AWS CodeCommit repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p> <p>Although each user is limited to a small number of keys, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSSHPublicKeysAsync(const Model::ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the server certificates stored in IAM that have the specified path
         * prefix. If none exist, the action returns an empty list.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::ListServerCertificatesOutcome ListServerCertificates(const Model::ListServerCertificatesRequest& request) const;

        /**
         * <p>Lists the server certificates stored in IAM that have the specified path
         * prefix. If none exist, the action returns an empty list.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServerCertificatesOutcomeCallable ListServerCertificatesCallable(const Model::ListServerCertificatesRequest& request) const;

        /**
         * <p>Lists the server certificates stored in IAM that have the specified path
         * prefix. If none exist, the action returns an empty list.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServerCertificatesAsync(const Model::ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the signing certificates associated with the
         * specified IAM user. If there are none, the action returns an empty list.</p>
         * <p>Although each user is limited to a small number of signing certificates, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p> <p>If the <code>UserName</code> field is not
         * specified, the user name is determined implicitly based on the AWS access key ID
         * used to sign the request for this API. Because this action works for access keys
         * under the AWS account, you can use this action to manage root credentials even
         * if the AWS account has no associated users.</p>
         */
        virtual Model::ListSigningCertificatesOutcome ListSigningCertificates(const Model::ListSigningCertificatesRequest& request) const;

        /**
         * <p>Returns information about the signing certificates associated with the
         * specified IAM user. If there are none, the action returns an empty list.</p>
         * <p>Although each user is limited to a small number of signing certificates, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p> <p>If the <code>UserName</code> field is not
         * specified, the user name is determined implicitly based on the AWS access key ID
         * used to sign the request for this API. Because this action works for access keys
         * under the AWS account, you can use this action to manage root credentials even
         * if the AWS account has no associated users.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSigningCertificatesOutcomeCallable ListSigningCertificatesCallable(const Model::ListSigningCertificatesRequest& request) const;

        /**
         * <p>Returns information about the signing certificates associated with the
         * specified IAM user. If there are none, the action returns an empty list.</p>
         * <p>Although each user is limited to a small number of signing certificates, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p> <p>If the <code>UserName</code> field is not
         * specified, the user name is determined implicitly based on the AWS access key ID
         * used to sign the request for this API. Because this action works for access keys
         * under the AWS account, you can use this action to manage root credentials even
         * if the AWS account has no associated users.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSigningCertificatesAsync(const Model::ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies embedded in the specified IAM
         * user.</p> <p>An IAM user can also have managed policies attached to it. To list
         * the managed policies that are attached to a user, use
         * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified user,
         * the action returns an empty list.</p>
         */
        virtual Model::ListUserPoliciesOutcome ListUserPolicies(const Model::ListUserPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies embedded in the specified IAM
         * user.</p> <p>An IAM user can also have managed policies attached to it. To list
         * the managed policies that are attached to a user, use
         * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified user,
         * the action returns an empty list.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoliciesOutcomeCallable ListUserPoliciesCallable(const Model::ListUserPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies embedded in the specified IAM
         * user.</p> <p>An IAM user can also have managed policies attached to it. To list
         * the managed policies that are attached to a user, use
         * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified user,
         * the action returns an empty list.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoliciesAsync(const Model::ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM users that have the specified path prefix. If no path prefix is
         * specified, the action returns all users in the AWS account. If there are none,
         * the action returns an empty list.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the IAM users that have the specified path prefix. If no path prefix is
         * specified, the action returns all users in the AWS account. If there are none,
         * the action returns an empty list.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the IAM users that have the specified path prefix. If no path prefix is
         * specified, the action returns all users in the AWS account. If there are none,
         * the action returns an empty list.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the virtual MFA devices defined in the AWS account by assignment
         * status. If you do not specify an assignment status, the action returns a list of
         * all virtual MFA devices. Assignment status can be <code>Assigned</code>,
         * <code>Unassigned</code>, or <code>Any</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         */
        virtual Model::ListVirtualMFADevicesOutcome ListVirtualMFADevices(const Model::ListVirtualMFADevicesRequest& request) const;

        /**
         * <p>Lists the virtual MFA devices defined in the AWS account by assignment
         * status. If you do not specify an assignment status, the action returns a list of
         * all virtual MFA devices. Assignment status can be <code>Assigned</code>,
         * <code>Unassigned</code>, or <code>Any</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualMFADevicesOutcomeCallable ListVirtualMFADevicesCallable(const Model::ListVirtualMFADevicesRequest& request) const;

        /**
         * <p>Lists the virtual MFA devices defined in the AWS account by assignment
         * status. If you do not specify an assignment status, the action returns a list of
         * all virtual MFA devices. Assignment status can be <code>Assigned</code>,
         * <code>Unassigned</code>, or <code>Any</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualMFADevicesAsync(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM group.</p> <p>A user can also have managed policies attached to it. To
         * attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a
         * new managed policy, use <a>CreatePolicy</a>. For information about policies, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a group, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutGroupPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         */
        virtual Model::PutGroupPolicyOutcome PutGroupPolicy(const Model::PutGroupPolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM group.</p> <p>A user can also have managed policies attached to it. To
         * attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a
         * new managed policy, use <a>CreatePolicy</a>. For information about policies, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a group, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutGroupPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutGroupPolicyOutcomeCallable PutGroupPolicyCallable(const Model::PutGroupPolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM group.</p> <p>A user can also have managed policies attached to it. To
         * attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a
         * new managed policy, use <a>CreatePolicy</a>. For information about policies, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a group, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutGroupPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutGroupPolicyAsync(const Model::PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM role.</p> <p>When you embed an inline policy in a role, the inline policy is
         * used as part of the role's access (permissions) policy. The role's trust policy
         * is created at the same time as the role, using <a>CreateRole</a>. You can update
         * a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information
         * about IAM roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p> <p>A role can
         * also have a managed policy attached to it. To attach a managed policy to a role,
         * use <a>AttachRolePolicy</a>. To create a new managed policy, use
         * <a>CreatePolicy</a>. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed
         * with a role, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutRolePolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         */
        virtual Model::PutRolePolicyOutcome PutRolePolicy(const Model::PutRolePolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM role.</p> <p>When you embed an inline policy in a role, the inline policy is
         * used as part of the role's access (permissions) policy. The role's trust policy
         * is created at the same time as the role, using <a>CreateRole</a>. You can update
         * a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information
         * about IAM roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p> <p>A role can
         * also have a managed policy attached to it. To attach a managed policy to a role,
         * use <a>AttachRolePolicy</a>. To create a new managed policy, use
         * <a>CreatePolicy</a>. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed
         * with a role, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutRolePolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRolePolicyOutcomeCallable PutRolePolicyCallable(const Model::PutRolePolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM role.</p> <p>When you embed an inline policy in a role, the inline policy is
         * used as part of the role's access (permissions) policy. The role's trust policy
         * is created at the same time as the role, using <a>CreateRole</a>. You can update
         * a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information
         * about IAM roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p> <p>A role can
         * also have a managed policy attached to it. To attach a managed policy to a role,
         * use <a>AttachRolePolicy</a>. To create a new managed policy, use
         * <a>CreatePolicy</a>. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed
         * with a role, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutRolePolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRolePolicyAsync(const Model::PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM user.</p> <p>An IAM user can also have a managed policy attached to it. To
         * attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new
         * managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a user, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutUserPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         */
        virtual Model::PutUserPolicyOutcome PutUserPolicy(const Model::PutUserPolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM user.</p> <p>An IAM user can also have a managed policy attached to it. To
         * attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new
         * managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a user, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutUserPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUserPolicyOutcomeCallable PutUserPolicyCallable(const Model::PutUserPolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM user.</p> <p>An IAM user can also have a managed policy attached to it. To
         * attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new
         * managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a user, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutUserPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUserPolicyAsync(const Model::PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified client ID (also known as audience) from the list of
         * client IDs registered for the specified IAM OpenID Connect (OIDC) provider
         * resource object.</p> <p>This action is idempotent; it does not fail or return an
         * error if you try to remove a client ID that does not exist.</p>
         */
        virtual Model::RemoveClientIDFromOpenIDConnectProviderOutcome RemoveClientIDFromOpenIDConnectProvider(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Removes the specified client ID (also known as audience) from the list of
         * client IDs registered for the specified IAM OpenID Connect (OIDC) provider
         * resource object.</p> <p>This action is idempotent; it does not fail or return an
         * error if you try to remove a client ID that does not exist.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveClientIDFromOpenIDConnectProviderOutcomeCallable RemoveClientIDFromOpenIDConnectProviderCallable(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Removes the specified client ID (also known as audience) from the list of
         * client IDs registered for the specified IAM OpenID Connect (OIDC) provider
         * resource object.</p> <p>This action is idempotent; it does not fail or return an
         * error if you try to remove a client ID that does not exist.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveClientIDFromOpenIDConnectProviderAsync(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified IAM role from the specified EC2 instance profile.</p>
         * <important> <p>Make sure you do not have any Amazon EC2 instances running with
         * the role you are about to remove from the instance profile. Removing a role from
         * an instance profile that is associated with a running instance break any
         * applications running on the instance.</p> </important> <p> For more information
         * about IAM roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         */
        virtual Model::RemoveRoleFromInstanceProfileOutcome RemoveRoleFromInstanceProfile(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /**
         * <p>Removes the specified IAM role from the specified EC2 instance profile.</p>
         * <important> <p>Make sure you do not have any Amazon EC2 instances running with
         * the role you are about to remove from the instance profile. Removing a role from
         * an instance profile that is associated with a running instance break any
         * applications running on the instance.</p> </important> <p> For more information
         * about IAM roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromInstanceProfileOutcomeCallable RemoveRoleFromInstanceProfileCallable(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /**
         * <p>Removes the specified IAM role from the specified EC2 instance profile.</p>
         * <important> <p>Make sure you do not have any Amazon EC2 instances running with
         * the role you are about to remove from the instance profile. Removing a role from
         * an instance profile that is associated with a running instance break any
         * applications running on the instance.</p> </important> <p> For more information
         * about IAM roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromInstanceProfileAsync(const Model::RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified user from the specified group.</p>
         */
        virtual Model::RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest& request) const;

        /**
         * <p>Removes the specified user from the specified group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request) const;

        /**
         * <p>Removes the specified user from the specified group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Synchronizes the specified MFA device with its IAM resource object on the AWS
         * servers.</p> <p>For more information about creating and working with virtual MFA
         * devices, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::ResyncMFADeviceOutcome ResyncMFADevice(const Model::ResyncMFADeviceRequest& request) const;

        /**
         * <p>Synchronizes the specified MFA device with its IAM resource object on the AWS
         * servers.</p> <p>For more information about creating and working with virtual MFA
         * devices, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResyncMFADeviceOutcomeCallable ResyncMFADeviceCallable(const Model::ResyncMFADeviceRequest& request) const;

        /**
         * <p>Synchronizes the specified MFA device with its IAM resource object on the AWS
         * servers.</p> <p>For more information about creating and working with virtual MFA
         * devices, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResyncMFADeviceAsync(const Model::ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version.</p> <p>This action affects all users, groups, and roles
         * that the policy is attached to. To list the users, groups, and roles that the
         * policy is attached to, use the <a>ListEntitiesForPolicy</a> API.</p> <p>For
         * information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version.</p> <p>This action affects all users, groups, and roles
         * that the policy is attached to. To list the users, groups, and roles that the
         * policy is attached to, use the <a>ListEntitiesForPolicy</a> API.</p> <p>For
         * information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version.</p> <p>This action affects all users, groups, and roles
         * that the policy is attached to. To list the users, groups, and roles that the
         * policy is attached to, use the <a>ListEntitiesForPolicy</a> API.</p> <p>For
         * information about managed policies, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate how a set of IAM policies and optionally a resource-based policy
         * works with a list of API actions and AWS resources to determine the policies'
         * effective permissions. The policies are provided as strings.</p> <p>The
         * simulation does not perform the API actions; it only checks the authorization to
         * determine if the simulated policies allow or deny the actions.</p> <p>If you
         * want to simulate existing policies attached to an IAM user, group, or role, use
         * <a>SimulatePrincipalPolicy</a> instead.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request. You can use the <code>Condition</code> element of an IAM
         * policy to evaluate context keys. To get the list of context keys that the
         * policies require for correct simulation, use
         * <a>GetContextKeysForCustomPolicy</a>.</p> <p>If the output is long, you can use
         * <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p>
         */
        virtual Model::SimulateCustomPolicyOutcome SimulateCustomPolicy(const Model::SimulateCustomPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies and optionally a resource-based policy
         * works with a list of API actions and AWS resources to determine the policies'
         * effective permissions. The policies are provided as strings.</p> <p>The
         * simulation does not perform the API actions; it only checks the authorization to
         * determine if the simulated policies allow or deny the actions.</p> <p>If you
         * want to simulate existing policies attached to an IAM user, group, or role, use
         * <a>SimulatePrincipalPolicy</a> instead.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request. You can use the <code>Condition</code> element of an IAM
         * policy to evaluate context keys. To get the list of context keys that the
         * policies require for correct simulation, use
         * <a>GetContextKeysForCustomPolicy</a>.</p> <p>If the output is long, you can use
         * <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SimulateCustomPolicyOutcomeCallable SimulateCustomPolicyCallable(const Model::SimulateCustomPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies and optionally a resource-based policy
         * works with a list of API actions and AWS resources to determine the policies'
         * effective permissions. The policies are provided as strings.</p> <p>The
         * simulation does not perform the API actions; it only checks the authorization to
         * determine if the simulated policies allow or deny the actions.</p> <p>If you
         * want to simulate existing policies attached to an IAM user, group, or role, use
         * <a>SimulatePrincipalPolicy</a> instead.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request. You can use the <code>Condition</code> element of an IAM
         * policy to evaluate context keys. To get the list of context keys that the
         * policies require for correct simulation, use
         * <a>GetContextKeysForCustomPolicy</a>.</p> <p>If the output is long, you can use
         * <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SimulateCustomPolicyAsync(const Model::SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate how a set of IAM policies attached to an IAM entity works with a
         * list of API actions and AWS resources to determine the policies' effective
         * permissions. The entity can be an IAM user, group, or role. If you specify a
         * user, then the simulation also includes all of the policies that are attached to
         * groups that the user belongs to .</p> <p>You can optionally include a list of
         * one or more additional policies specified as strings to include in the
         * simulation. If you want to simulate only policies specified as strings, use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>You can also optionally include one
         * resource-based policy to be evaluated with each of the resources included in the
         * simulation.</p> <p>The simulation does not perform the API actions, it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the actions.</p> <p> <b>Note:</b> This API discloses information about the
         * permissions granted to other users. If you do not want users to see other user's
         * permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
         * instead.</p> <p>Context keys are variables maintained by AWS and its services
         * that provide details about the context of an API query request. You can use the
         * <code>Condition</code> element of an IAM policy to evaluate context keys. To get
         * the list of context keys that the policies require for correct simulation, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>If the output is long, you can
         * use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p>
         */
        virtual Model::SimulatePrincipalPolicyOutcome SimulatePrincipalPolicy(const Model::SimulatePrincipalPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies attached to an IAM entity works with a
         * list of API actions and AWS resources to determine the policies' effective
         * permissions. The entity can be an IAM user, group, or role. If you specify a
         * user, then the simulation also includes all of the policies that are attached to
         * groups that the user belongs to .</p> <p>You can optionally include a list of
         * one or more additional policies specified as strings to include in the
         * simulation. If you want to simulate only policies specified as strings, use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>You can also optionally include one
         * resource-based policy to be evaluated with each of the resources included in the
         * simulation.</p> <p>The simulation does not perform the API actions, it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the actions.</p> <p> <b>Note:</b> This API discloses information about the
         * permissions granted to other users. If you do not want users to see other user's
         * permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
         * instead.</p> <p>Context keys are variables maintained by AWS and its services
         * that provide details about the context of an API query request. You can use the
         * <code>Condition</code> element of an IAM policy to evaluate context keys. To get
         * the list of context keys that the policies require for correct simulation, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>If the output is long, you can
         * use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SimulatePrincipalPolicyOutcomeCallable SimulatePrincipalPolicyCallable(const Model::SimulatePrincipalPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies attached to an IAM entity works with a
         * list of API actions and AWS resources to determine the policies' effective
         * permissions. The entity can be an IAM user, group, or role. If you specify a
         * user, then the simulation also includes all of the policies that are attached to
         * groups that the user belongs to .</p> <p>You can optionally include a list of
         * one or more additional policies specified as strings to include in the
         * simulation. If you want to simulate only policies specified as strings, use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>You can also optionally include one
         * resource-based policy to be evaluated with each of the resources included in the
         * simulation.</p> <p>The simulation does not perform the API actions, it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the actions.</p> <p> <b>Note:</b> This API discloses information about the
         * permissions granted to other users. If you do not want users to see other user's
         * permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
         * instead.</p> <p>Context keys are variables maintained by AWS and its services
         * that provide details about the context of an API query request. You can use the
         * <code>Condition</code> element of an IAM policy to evaluate context keys. To get
         * the list of context keys that the policies require for correct simulation, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>If the output is long, you can
         * use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SimulatePrincipalPolicyAsync(const Model::SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of the specified access key from Active to Inactive, or
         * vice versa. This action can be used to disable a user's key as part of a key
         * rotation work flow.</p> <p>If the <code>UserName</code> field is not specified,
         * the UserName is determined implicitly based on the AWS access key ID used to
         * sign the request. Because this action works for access keys under the AWS
         * account, you can use this action to manage root credentials even if the AWS
         * account has no associated users.</p> <p>For information about rotating keys, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing
         * Keys and Certificates</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::UpdateAccessKeyOutcome UpdateAccessKey(const Model::UpdateAccessKeyRequest& request) const;

        /**
         * <p>Changes the status of the specified access key from Active to Inactive, or
         * vice versa. This action can be used to disable a user's key as part of a key
         * rotation work flow.</p> <p>If the <code>UserName</code> field is not specified,
         * the UserName is determined implicitly based on the AWS access key ID used to
         * sign the request. Because this action works for access keys under the AWS
         * account, you can use this action to manage root credentials even if the AWS
         * account has no associated users.</p> <p>For information about rotating keys, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing
         * Keys and Certificates</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessKeyOutcomeCallable UpdateAccessKeyCallable(const Model::UpdateAccessKeyRequest& request) const;

        /**
         * <p>Changes the status of the specified access key from Active to Inactive, or
         * vice versa. This action can be used to disable a user's key as part of a key
         * rotation work flow.</p> <p>If the <code>UserName</code> field is not specified,
         * the UserName is determined implicitly based on the AWS access key ID used to
         * sign the request. Because this action works for access keys under the AWS
         * account, you can use this action to manage root credentials even if the AWS
         * account has no associated users.</p> <p>For information about rotating keys, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing
         * Keys and Certificates</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessKeyAsync(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the password policy settings for the AWS account.</p> <note> <p>This
         * action does not support partial updates. No parameters are required, but if you
         * do not specify a parameter, that parameter's value reverts to its default value.
         * See the <b>Request Parameters</b> section for each parameter's default
         * value.</p> </note> <p> For more information about using a password policy, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::UpdateAccountPasswordPolicyOutcome UpdateAccountPasswordPolicy(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Updates the password policy settings for the AWS account.</p> <note> <p>This
         * action does not support partial updates. No parameters are required, but if you
         * do not specify a parameter, that parameter's value reverts to its default value.
         * See the <b>Request Parameters</b> section for each parameter's default
         * value.</p> </note> <p> For more information about using a password policy, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountPasswordPolicyOutcomeCallable UpdateAccountPasswordPolicyCallable(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Updates the password policy settings for the AWS account.</p> <note> <p>This
         * action does not support partial updates. No parameters are required, but if you
         * do not specify a parameter, that parameter's value reverts to its default value.
         * See the <b>Request Parameters</b> section for each parameter's default
         * value.</p> </note> <p> For more information about using a password policy, see
         * <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountPasswordPolicyAsync(const Model::UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the policy that grants an IAM entity permission to assume a role.
         * This is typically referred to as the "role trust policy". For more information
         * about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p>
         */
        virtual Model::UpdateAssumeRolePolicyOutcome UpdateAssumeRolePolicy(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /**
         * <p>Updates the policy that grants an IAM entity permission to assume a role.
         * This is typically referred to as the "role trust policy". For more information
         * about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssumeRolePolicyOutcomeCallable UpdateAssumeRolePolicyCallable(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /**
         * <p>Updates the policy that grants an IAM entity permission to assume a role.
         * This is typically referred to as the "role trust policy". For more information
         * about roles, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssumeRolePolicyAsync(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM group.</p> <important>
         * <p> You should understand the implications of changing a group's path or name.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming
         * Users and Groups</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p>To
         * change an IAM group name the requester must have appropriate permissions on both
         * the source object and the target object. For example, to change "Managers" to
         * "MGRs", the entity making the request must have permission on both "Managers"
         * and "MGRs", or must have permission on all (*). For more information about
         * permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM group.</p> <important>
         * <p> You should understand the implications of changing a group's path or name.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming
         * Users and Groups</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p>To
         * change an IAM group name the requester must have appropriate permissions on both
         * the source object and the target object. For example, to change "Managers" to
         * "MGRs", the entity making the request must have permission on both "Managers"
         * and "MGRs", or must have permission on all (*). For more information about
         * permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM group.</p> <important>
         * <p> You should understand the implications of changing a group's path or name.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming
         * Users and Groups</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p>To
         * change an IAM group name the requester must have appropriate permissions on both
         * the source object and the target object. For example, to change "Managers" to
         * "MGRs", the entity making the request must have permission on both "Managers"
         * and "MGRs", or must have permission on all (*). For more information about
         * permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password for the specified IAM user.</p> <p>IAM users can change
         * their own passwords by calling <a>ChangePassword</a>. For more information about
         * modifying passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         */
        virtual Model::UpdateLoginProfileOutcome UpdateLoginProfile(const Model::UpdateLoginProfileRequest& request) const;

        /**
         * <p>Changes the password for the specified IAM user.</p> <p>IAM users can change
         * their own passwords by calling <a>ChangePassword</a>. For more information about
         * modifying passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoginProfileOutcomeCallable UpdateLoginProfileCallable(const Model::UpdateLoginProfileRequest& request) const;

        /**
         * <p>Changes the password for the specified IAM user.</p> <p>IAM users can change
         * their own passwords by calling <a>ChangePassword</a>. For more information about
         * modifying passwords, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoginProfileAsync(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the existing list of server certificate thumbprints associated with
         * an OpenID Connect (OIDC) provider resource object with a new list of
         * thumbprints.</p> <p>The list that you pass with this action completely replaces
         * the existing list of thumbprints. (The lists are not merged.)</p> <p>Typically,
         * you need to update a thumbprint only when the identity provider's certificate
         * changes, which occurs rarely. However, if the provider's certificate <i>does</i>
         * change, any attempt to assume an IAM role that specifies the OIDC provider as a
         * principal fails until the certificate thumbprint is updated.</p> <note>
         * <p>Because trust for the OIDC provider is ultimately derived from the provider's
         * certificate and is validated by the thumbprint, it is a best practice to limit
         * access to the <code>UpdateOpenIDConnectProviderThumbprint</code> action to
         * highly-privileged users.</p> </note>
         */
        virtual Model::UpdateOpenIDConnectProviderThumbprintOutcome UpdateOpenIDConnectProviderThumbprint(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /**
         * <p>Replaces the existing list of server certificate thumbprints associated with
         * an OpenID Connect (OIDC) provider resource object with a new list of
         * thumbprints.</p> <p>The list that you pass with this action completely replaces
         * the existing list of thumbprints. (The lists are not merged.)</p> <p>Typically,
         * you need to update a thumbprint only when the identity provider's certificate
         * changes, which occurs rarely. However, if the provider's certificate <i>does</i>
         * change, any attempt to assume an IAM role that specifies the OIDC provider as a
         * principal fails until the certificate thumbprint is updated.</p> <note>
         * <p>Because trust for the OIDC provider is ultimately derived from the provider's
         * certificate and is validated by the thumbprint, it is a best practice to limit
         * access to the <code>UpdateOpenIDConnectProviderThumbprint</code> action to
         * highly-privileged users.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOpenIDConnectProviderThumbprintOutcomeCallable UpdateOpenIDConnectProviderThumbprintCallable(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /**
         * <p>Replaces the existing list of server certificate thumbprints associated with
         * an OpenID Connect (OIDC) provider resource object with a new list of
         * thumbprints.</p> <p>The list that you pass with this action completely replaces
         * the existing list of thumbprints. (The lists are not merged.)</p> <p>Typically,
         * you need to update a thumbprint only when the identity provider's certificate
         * changes, which occurs rarely. However, if the provider's certificate <i>does</i>
         * change, any attempt to assume an IAM role that specifies the OIDC provider as a
         * principal fails until the certificate thumbprint is updated.</p> <note>
         * <p>Because trust for the OIDC provider is ultimately derived from the provider's
         * certificate and is validated by the thumbprint, it is a best practice to limit
         * access to the <code>UpdateOpenIDConnectProviderThumbprint</code> action to
         * highly-privileged users.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOpenIDConnectProviderThumbprintAsync(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the metadata document for an existing SAML provider resource
         * object.</p> <note> <p>This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         */
        virtual Model::UpdateSAMLProviderOutcome UpdateSAMLProvider(const Model::UpdateSAMLProviderRequest& request) const;

        /**
         * <p>Updates the metadata document for an existing SAML provider resource
         * object.</p> <note> <p>This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSAMLProviderOutcomeCallable UpdateSAMLProviderCallable(const Model::UpdateSAMLProviderRequest& request) const;

        /**
         * <p>Updates the metadata document for an existing SAML provider resource
         * object.</p> <note> <p>This operation requires <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSAMLProviderAsync(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the status of an IAM user's SSH public key to active or inactive. SSH
         * public keys that are inactive cannot be used for authentication. This action can
         * be used to disable a user's SSH public key as part of a key rotation work
         * flow.</p> <p>The SSH public key affected by this action is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         */
        virtual Model::UpdateSSHPublicKeyOutcome UpdateSSHPublicKey(const Model::UpdateSSHPublicKeyRequest& request) const;

        /**
         * <p>Sets the status of an IAM user's SSH public key to active or inactive. SSH
         * public keys that are inactive cannot be used for authentication. This action can
         * be used to disable a user's SSH public key as part of a key rotation work
         * flow.</p> <p>The SSH public key affected by this action is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSSHPublicKeyOutcomeCallable UpdateSSHPublicKeyCallable(const Model::UpdateSSHPublicKeyRequest& request) const;

        /**
         * <p>Sets the status of an IAM user's SSH public key to active or inactive. SSH
         * public keys that are inactive cannot be used for authentication. This action can
         * be used to disable a user's SSH public key as part of a key rotation work
         * flow.</p> <p>The SSH public key affected by this action is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSSHPublicKeyAsync(const Model::UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified server certificate stored
         * in IAM.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <important>
         * <p>You should understand the implications of changing a server certificate's
         * path or name. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
         * a Server Certificate</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>To change a server certificate name the requester must have appropriate
         * permissions on both the source object and the target object. For example, to
         * change the name from "ProductionCert" to "ProdCert", the entity making the
         * request must have permission on "ProductionCert" and "ProdCert", or must have
         * permission on all (*). For more information about permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a> in the <i>IAM User Guide</i>.</p> </note>
         */
        virtual Model::UpdateServerCertificateOutcome UpdateServerCertificate(const Model::UpdateServerCertificateRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified server certificate stored
         * in IAM.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <important>
         * <p>You should understand the implications of changing a server certificate's
         * path or name. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
         * a Server Certificate</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>To change a server certificate name the requester must have appropriate
         * permissions on both the source object and the target object. For example, to
         * change the name from "ProductionCert" to "ProdCert", the entity making the
         * request must have permission on "ProductionCert" and "ProdCert", or must have
         * permission on all (*). For more information about permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServerCertificateOutcomeCallable UpdateServerCertificateCallable(const Model::UpdateServerCertificateRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified server certificate stored
         * in IAM.</p> <p>For more information about working with server certificates,
         * including a list of AWS services that can use the server certificates that you
         * manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <important>
         * <p>You should understand the implications of changing a server certificate's
         * path or name. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
         * a Server Certificate</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>To change a server certificate name the requester must have appropriate
         * permissions on both the source object and the target object. For example, to
         * change the name from "ProductionCert" to "ProdCert", the entity making the
         * request must have permission on "ProductionCert" and "ProdCert", or must have
         * permission on all (*). For more information about permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServerCertificateAsync(const Model::UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of the specified user signing certificate from active to
         * disabled, or vice versa. This action can be used to disable an IAM user's
         * signing certificate as part of a certificate rotation work flow.</p> <p>If the
         * <code>UserName</code> field is not specified, the UserName is determined
         * implicitly based on the AWS access key ID used to sign the request. Because this
         * action works for access keys under the AWS account, you can use this action to
         * manage root credentials even if the AWS account has no associated users.</p>
         */
        virtual Model::UpdateSigningCertificateOutcome UpdateSigningCertificate(const Model::UpdateSigningCertificateRequest& request) const;

        /**
         * <p>Changes the status of the specified user signing certificate from active to
         * disabled, or vice versa. This action can be used to disable an IAM user's
         * signing certificate as part of a certificate rotation work flow.</p> <p>If the
         * <code>UserName</code> field is not specified, the UserName is determined
         * implicitly based on the AWS access key ID used to sign the request. Because this
         * action works for access keys under the AWS account, you can use this action to
         * manage root credentials even if the AWS account has no associated users.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSigningCertificateOutcomeCallable UpdateSigningCertificateCallable(const Model::UpdateSigningCertificateRequest& request) const;

        /**
         * <p>Changes the status of the specified user signing certificate from active to
         * disabled, or vice versa. This action can be used to disable an IAM user's
         * signing certificate as part of a certificate rotation work flow.</p> <p>If the
         * <code>UserName</code> field is not specified, the UserName is determined
         * implicitly based on the AWS access key ID used to sign the request. Because this
         * action works for access keys under the AWS account, you can use this action to
         * manage root credentials even if the AWS account has no associated users.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSigningCertificateAsync(const Model::UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM user.</p> <important>
         * <p> You should understand the implications of changing an IAM user's path or
         * name. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming
         * an IAM User</a> and <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming
         * an IAM Group</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p> To
         * change a user name the requester must have appropriate permissions on both the
         * source object and the target object. For example, to change Bob to Robert, the
         * entity making the request must have permission on Bob and Robert, or must have
         * permission on all (*). For more information about permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM user.</p> <important>
         * <p> You should understand the implications of changing an IAM user's path or
         * name. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming
         * an IAM User</a> and <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming
         * an IAM Group</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p> To
         * change a user name the requester must have appropriate permissions on both the
         * source object and the target object. For example, to change Bob to Robert, the
         * entity making the request must have permission on Bob and Robert, or must have
         * permission on all (*). For more information about permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM user.</p> <important>
         * <p> You should understand the implications of changing an IAM user's path or
         * name. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming
         * an IAM User</a> and <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming
         * an IAM Group</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p> To
         * change a user name the requester must have appropriate permissions on both the
         * source object and the target object. For example, to change Bob to Robert, the
         * entity making the request must have permission on Bob and Robert, or must have
         * permission on all (*). For more information about permissions, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an SSH public key and associates it with the specified IAM user.</p>
         * <p>The SSH public key uploaded by this action can be used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         */
        virtual Model::UploadSSHPublicKeyOutcome UploadSSHPublicKey(const Model::UploadSSHPublicKeyRequest& request) const;

        /**
         * <p>Uploads an SSH public key and associates it with the specified IAM user.</p>
         * <p>The SSH public key uploaded by this action can be used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadSSHPublicKeyOutcomeCallable UploadSSHPublicKeyCallable(const Model::UploadSSHPublicKeyRequest& request) const;

        /**
         * <p>Uploads an SSH public key and associates it with the specified IAM user.</p>
         * <p>The SSH public key uploaded by this action can be used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadSSHPublicKeyAsync(const Model::UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a server certificate entity for the AWS account. The server
         * certificate entity includes a public key certificate, a private key, and an
         * optional certificate chain, which should all be PEM-encoded.</p> <p>For more
         * information about working with server certificates, including a list of AWS
         * services that can use the server certificates that you manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about the number of server certificates you can upload, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html">Limitations
         * on IAM Entities and Objects</a> in the <i>IAM User Guide</i>.</p> <note>
         * <p>Because the body of the public key certificate, private key, and the
         * certificate chain can be large, you should use POST rather than GET when calling
         * <code>UploadServerCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling
         * the API by Making HTTP Query Requests</a> in the <i>IAM User Guide</i>.</p>
         * </note>
         */
        virtual Model::UploadServerCertificateOutcome UploadServerCertificate(const Model::UploadServerCertificateRequest& request) const;

        /**
         * <p>Uploads a server certificate entity for the AWS account. The server
         * certificate entity includes a public key certificate, a private key, and an
         * optional certificate chain, which should all be PEM-encoded.</p> <p>For more
         * information about working with server certificates, including a list of AWS
         * services that can use the server certificates that you manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about the number of server certificates you can upload, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html">Limitations
         * on IAM Entities and Objects</a> in the <i>IAM User Guide</i>.</p> <note>
         * <p>Because the body of the public key certificate, private key, and the
         * certificate chain can be large, you should use POST rather than GET when calling
         * <code>UploadServerCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling
         * the API by Making HTTP Query Requests</a> in the <i>IAM User Guide</i>.</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadServerCertificateOutcomeCallable UploadServerCertificateCallable(const Model::UploadServerCertificateRequest& request) const;

        /**
         * <p>Uploads a server certificate entity for the AWS account. The server
         * certificate entity includes a public key certificate, a private key, and an
         * optional certificate chain, which should all be PEM-encoded.</p> <p>For more
         * information about working with server certificates, including a list of AWS
         * services that can use the server certificates that you manage with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about the number of server certificates you can upload, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html">Limitations
         * on IAM Entities and Objects</a> in the <i>IAM User Guide</i>.</p> <note>
         * <p>Because the body of the public key certificate, private key, and the
         * certificate chain can be large, you should use POST rather than GET when calling
         * <code>UploadServerCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling
         * the API by Making HTTP Query Requests</a> in the <i>IAM User Guide</i>.</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadServerCertificateAsync(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an X.509 signing certificate and associates it with the specified IAM
         * user. Some AWS services use X.509 signing certificates to validate requests that
         * are signed with a corresponding private key. When you upload the certificate,
         * its default status is <code>Active</code>.</p> <p>If the <code>UserName</code>
         * field is not specified, the IAM user name is determined implicitly based on the
         * AWS access key ID used to sign the request. Because this action works for access
         * keys under the AWS account, you can use this action to manage root credentials
         * even if the AWS account has no associated users.</p> <note> <p>Because the body
         * of a X.509 certificate can be large, you should use POST rather than GET when
         * calling <code>UploadSigningCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         */
        virtual Model::UploadSigningCertificateOutcome UploadSigningCertificate(const Model::UploadSigningCertificateRequest& request) const;

        /**
         * <p>Uploads an X.509 signing certificate and associates it with the specified IAM
         * user. Some AWS services use X.509 signing certificates to validate requests that
         * are signed with a corresponding private key. When you upload the certificate,
         * its default status is <code>Active</code>.</p> <p>If the <code>UserName</code>
         * field is not specified, the IAM user name is determined implicitly based on the
         * AWS access key ID used to sign the request. Because this action works for access
         * keys under the AWS account, you can use this action to manage root credentials
         * even if the AWS account has no associated users.</p> <note> <p>Because the body
         * of a X.509 certificate can be large, you should use POST rather than GET when
         * calling <code>UploadSigningCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadSigningCertificateOutcomeCallable UploadSigningCertificateCallable(const Model::UploadSigningCertificateRequest& request) const;

        /**
         * <p>Uploads an X.509 signing certificate and associates it with the specified IAM
         * user. Some AWS services use X.509 signing certificates to validate requests that
         * are signed with a corresponding private key. When you upload the certificate,
         * its default status is <code>Active</code>.</p> <p>If the <code>UserName</code>
         * field is not specified, the IAM user name is determined implicitly based on the
         * AWS access key ID used to sign the request. Because this action works for access
         * keys under the AWS account, you can use this action to manage root credentials
         * even if the AWS account has no associated users.</p> <note> <p>Because the body
         * of a X.509 certificate can be large, you should use POST rather than GET when
         * calling <code>UploadSigningCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadSigningCertificateAsync(const Model::UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddClientIDToOpenIDConnectProviderAsyncHelper(const Model::AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddRoleToInstanceProfileAsyncHelper(const Model::AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddUserToGroupAsyncHelper(const Model::AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachGroupPolicyAsyncHelper(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachRolePolicyAsyncHelper(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachUserPolicyAsyncHelper(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangePasswordAsyncHelper(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccessKeyAsyncHelper(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountAliasAsyncHelper(const Model::CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceProfileAsyncHelper(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoginProfileAsyncHelper(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOpenIDConnectProviderAsyncHelper(const Model::CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyAsyncHelper(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyVersionAsyncHelper(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoleAsyncHelper(const Model::CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSAMLProviderAsyncHelper(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualMFADeviceAsyncHelper(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeactivateMFADeviceAsyncHelper(const Model::DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessKeyAsyncHelper(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountAliasAsyncHelper(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountPasswordPolicyAsyncHelper(const Model::DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupPolicyAsyncHelper(const Model::DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceProfileAsyncHelper(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoginProfileAsyncHelper(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOpenIDConnectProviderAsyncHelper(const Model::DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyVersionAsyncHelper(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoleAsyncHelper(const Model::DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRolePolicyAsyncHelper(const Model::DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSAMLProviderAsyncHelper(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSSHPublicKeyAsyncHelper(const Model::DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServerCertificateAsyncHelper(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSigningCertificateAsyncHelper(const Model::DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPolicyAsyncHelper(const Model::DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualMFADeviceAsyncHelper(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachGroupPolicyAsyncHelper(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachRolePolicyAsyncHelper(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachUserPolicyAsyncHelper(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableMFADeviceAsyncHelper(const Model::EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateCredentialReportAsyncHelper(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessKeyLastUsedAsyncHelper(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountAuthorizationDetailsAsyncHelper(const Model::GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountPasswordPolicyAsyncHelper(const Model::GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSummaryAsyncHelper(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContextKeysForCustomPolicyAsyncHelper(const Model::GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContextKeysForPrincipalPolicyAsyncHelper(const Model::GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCredentialReportAsyncHelper(const Model::GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupAsyncHelper(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupPolicyAsyncHelper(const Model::GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceProfileAsyncHelper(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoginProfileAsyncHelper(const Model::GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOpenIDConnectProviderAsyncHelper(const Model::GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyVersionAsyncHelper(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoleAsyncHelper(const Model::GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRolePolicyAsyncHelper(const Model::GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSAMLProviderAsyncHelper(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSSHPublicKeyAsyncHelper(const Model::GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServerCertificateAsyncHelper(const Model::GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserPolicyAsyncHelper(const Model::GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessKeysAsyncHelper(const Model::ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountAliasesAsyncHelper(const Model::ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedGroupPoliciesAsyncHelper(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedRolePoliciesAsyncHelper(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedUserPoliciesAsyncHelper(const Model::ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitiesForPolicyAsyncHelper(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupPoliciesAsyncHelper(const Model::ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsForUserAsyncHelper(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceProfilesAsyncHelper(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceProfilesForRoleAsyncHelper(const Model::ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMFADevicesAsyncHelper(const Model::ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOpenIDConnectProvidersAsyncHelper(const Model::ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesAsyncHelper(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPolicyVersionsAsyncHelper(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRolePoliciesAsyncHelper(const Model::ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRolesAsyncHelper(const Model::ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSAMLProvidersAsyncHelper(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSSHPublicKeysAsyncHelper(const Model::ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServerCertificatesAsyncHelper(const Model::ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSigningCertificatesAsyncHelper(const Model::ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoliciesAsyncHelper(const Model::ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualMFADevicesAsyncHelper(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutGroupPolicyAsyncHelper(const Model::PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRolePolicyAsyncHelper(const Model::PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutUserPolicyAsyncHelper(const Model::PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveClientIDFromOpenIDConnectProviderAsyncHelper(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveRoleFromInstanceProfileAsyncHelper(const Model::RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveUserFromGroupAsyncHelper(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResyncMFADeviceAsyncHelper(const Model::ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultPolicyVersionAsyncHelper(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SimulateCustomPolicyAsyncHelper(const Model::SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SimulatePrincipalPolicyAsyncHelper(const Model::SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccessKeyAsyncHelper(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountPasswordPolicyAsyncHelper(const Model::UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssumeRolePolicyAsyncHelper(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLoginProfileAsyncHelper(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOpenIDConnectProviderThumbprintAsyncHelper(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSAMLProviderAsyncHelper(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSSHPublicKeyAsyncHelper(const Model::UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServerCertificateAsyncHelper(const Model::UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSigningCertificateAsyncHelper(const Model::UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadSSHPublicKeyAsyncHelper(const Model::UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadServerCertificateAsyncHelper(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadSigningCertificateAsyncHelper(const Model::UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace IAM
} // namespace Aws
