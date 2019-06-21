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

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
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
#include <aws/iam/model/CreateServiceLinkedRoleResult.h>
#include <aws/iam/model/CreateServiceSpecificCredentialResult.h>
#include <aws/iam/model/CreateUserResult.h>
#include <aws/iam/model/CreateVirtualMFADeviceResult.h>
#include <aws/iam/model/DeleteServiceLinkedRoleResult.h>
#include <aws/iam/model/GenerateCredentialReportResult.h>
#include <aws/iam/model/GenerateOrganizationsAccessReportResult.h>
#include <aws/iam/model/GenerateServiceLastAccessedDetailsResult.h>
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
#include <aws/iam/model/GetOrganizationsAccessReportResult.h>
#include <aws/iam/model/GetPolicyResult.h>
#include <aws/iam/model/GetPolicyVersionResult.h>
#include <aws/iam/model/GetRoleResult.h>
#include <aws/iam/model/GetRolePolicyResult.h>
#include <aws/iam/model/GetSAMLProviderResult.h>
#include <aws/iam/model/GetSSHPublicKeyResult.h>
#include <aws/iam/model/GetServerCertificateResult.h>
#include <aws/iam/model/GetServiceLastAccessedDetailsResult.h>
#include <aws/iam/model/GetServiceLastAccessedDetailsWithEntitiesResult.h>
#include <aws/iam/model/GetServiceLinkedRoleDeletionStatusResult.h>
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
#include <aws/iam/model/ListPoliciesGrantingServiceAccessResult.h>
#include <aws/iam/model/ListPolicyVersionsResult.h>
#include <aws/iam/model/ListRolePoliciesResult.h>
#include <aws/iam/model/ListRoleTagsResult.h>
#include <aws/iam/model/ListRolesResult.h>
#include <aws/iam/model/ListSAMLProvidersResult.h>
#include <aws/iam/model/ListSSHPublicKeysResult.h>
#include <aws/iam/model/ListServerCertificatesResult.h>
#include <aws/iam/model/ListServiceSpecificCredentialsResult.h>
#include <aws/iam/model/ListSigningCertificatesResult.h>
#include <aws/iam/model/ListUserPoliciesResult.h>
#include <aws/iam/model/ListUserTagsResult.h>
#include <aws/iam/model/ListUsersResult.h>
#include <aws/iam/model/ListVirtualMFADevicesResult.h>
#include <aws/iam/model/ResetServiceSpecificCredentialResult.h>
#include <aws/iam/model/SimulateCustomPolicyResult.h>
#include <aws/iam/model/SimulatePrincipalPolicyResult.h>
#include <aws/iam/model/UpdateRoleResult.h>
#include <aws/iam/model/UpdateRoleDescriptionResult.h>
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
        class CreateServiceLinkedRoleRequest;
        class CreateServiceSpecificCredentialRequest;
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
        class DeleteRolePermissionsBoundaryRequest;
        class DeleteRolePolicyRequest;
        class DeleteSAMLProviderRequest;
        class DeleteSSHPublicKeyRequest;
        class DeleteServerCertificateRequest;
        class DeleteServiceLinkedRoleRequest;
        class DeleteServiceSpecificCredentialRequest;
        class DeleteSigningCertificateRequest;
        class DeleteUserRequest;
        class DeleteUserPermissionsBoundaryRequest;
        class DeleteUserPolicyRequest;
        class DeleteVirtualMFADeviceRequest;
        class DetachGroupPolicyRequest;
        class DetachRolePolicyRequest;
        class DetachUserPolicyRequest;
        class EnableMFADeviceRequest;
        class GenerateCredentialReportRequest;
        class GenerateOrganizationsAccessReportRequest;
        class GenerateServiceLastAccessedDetailsRequest;
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
        class GetOrganizationsAccessReportRequest;
        class GetPolicyRequest;
        class GetPolicyVersionRequest;
        class GetRoleRequest;
        class GetRolePolicyRequest;
        class GetSAMLProviderRequest;
        class GetSSHPublicKeyRequest;
        class GetServerCertificateRequest;
        class GetServiceLastAccessedDetailsRequest;
        class GetServiceLastAccessedDetailsWithEntitiesRequest;
        class GetServiceLinkedRoleDeletionStatusRequest;
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
        class ListPoliciesGrantingServiceAccessRequest;
        class ListPolicyVersionsRequest;
        class ListRolePoliciesRequest;
        class ListRoleTagsRequest;
        class ListRolesRequest;
        class ListSAMLProvidersRequest;
        class ListSSHPublicKeysRequest;
        class ListServerCertificatesRequest;
        class ListServiceSpecificCredentialsRequest;
        class ListSigningCertificatesRequest;
        class ListUserPoliciesRequest;
        class ListUserTagsRequest;
        class ListUsersRequest;
        class ListVirtualMFADevicesRequest;
        class PutGroupPolicyRequest;
        class PutRolePermissionsBoundaryRequest;
        class PutRolePolicyRequest;
        class PutUserPermissionsBoundaryRequest;
        class PutUserPolicyRequest;
        class RemoveClientIDFromOpenIDConnectProviderRequest;
        class RemoveRoleFromInstanceProfileRequest;
        class RemoveUserFromGroupRequest;
        class ResetServiceSpecificCredentialRequest;
        class ResyncMFADeviceRequest;
        class SetDefaultPolicyVersionRequest;
        class SetSecurityTokenServicePreferencesRequest;
        class SimulateCustomPolicyRequest;
        class SimulatePrincipalPolicyRequest;
        class TagRoleRequest;
        class TagUserRequest;
        class UntagRoleRequest;
        class UntagUserRequest;
        class UpdateAccessKeyRequest;
        class UpdateAccountPasswordPolicyRequest;
        class UpdateAssumeRolePolicyRequest;
        class UpdateGroupRequest;
        class UpdateLoginProfileRequest;
        class UpdateOpenIDConnectProviderThumbprintRequest;
        class UpdateRoleRequest;
        class UpdateRoleDescriptionRequest;
        class UpdateSAMLProviderRequest;
        class UpdateSSHPublicKeyRequest;
        class UpdateServerCertificateRequest;
        class UpdateServiceSpecificCredentialRequest;
        class UpdateSigningCertificateRequest;
        class UpdateUserRequest;
        class UploadSSHPublicKeyRequest;
        class UploadServerCertificateRequest;
        class UploadSigningCertificateRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> AddClientIDToOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> AddRoleToInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> AddUserToGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> AttachGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> AttachRolePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> AttachUserPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> ChangePasswordOutcome;
        typedef Aws::Utils::Outcome<CreateAccessKeyResult, Aws::Client::AWSError<IAMErrors>> CreateAccessKeyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> CreateAccountAliasOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<IAMErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceProfileResult, Aws::Client::AWSError<IAMErrors>> CreateInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<CreateLoginProfileResult, Aws::Client::AWSError<IAMErrors>> CreateLoginProfileOutcome;
        typedef Aws::Utils::Outcome<CreateOpenIDConnectProviderResult, Aws::Client::AWSError<IAMErrors>> CreateOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyResult, Aws::Client::AWSError<IAMErrors>> CreatePolicyOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyVersionResult, Aws::Client::AWSError<IAMErrors>> CreatePolicyVersionOutcome;
        typedef Aws::Utils::Outcome<CreateRoleResult, Aws::Client::AWSError<IAMErrors>> CreateRoleOutcome;
        typedef Aws::Utils::Outcome<CreateSAMLProviderResult, Aws::Client::AWSError<IAMErrors>> CreateSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<CreateServiceLinkedRoleResult, Aws::Client::AWSError<IAMErrors>> CreateServiceLinkedRoleOutcome;
        typedef Aws::Utils::Outcome<CreateServiceSpecificCredentialResult, Aws::Client::AWSError<IAMErrors>> CreateServiceSpecificCredentialOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<IAMErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualMFADeviceResult, Aws::Client::AWSError<IAMErrors>> CreateVirtualMFADeviceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeactivateMFADeviceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteAccessKeyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteAccountAliasOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteAccountPasswordPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteLoginProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeletePolicyVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteRoleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteRolePermissionsBoundaryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteRolePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteServerCertificateOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceLinkedRoleResult, Aws::Client::AWSError<IAMErrors>> DeleteServiceLinkedRoleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteServiceSpecificCredentialOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteSigningCertificateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteUserPermissionsBoundaryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteUserPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DeleteVirtualMFADeviceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DetachGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DetachRolePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> DetachUserPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> EnableMFADeviceOutcome;
        typedef Aws::Utils::Outcome<GenerateCredentialReportResult, Aws::Client::AWSError<IAMErrors>> GenerateCredentialReportOutcome;
        typedef Aws::Utils::Outcome<GenerateOrganizationsAccessReportResult, Aws::Client::AWSError<IAMErrors>> GenerateOrganizationsAccessReportOutcome;
        typedef Aws::Utils::Outcome<GenerateServiceLastAccessedDetailsResult, Aws::Client::AWSError<IAMErrors>> GenerateServiceLastAccessedDetailsOutcome;
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
        typedef Aws::Utils::Outcome<GetOrganizationsAccessReportResult, Aws::Client::AWSError<IAMErrors>> GetOrganizationsAccessReportOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, Aws::Client::AWSError<IAMErrors>> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<GetPolicyVersionResult, Aws::Client::AWSError<IAMErrors>> GetPolicyVersionOutcome;
        typedef Aws::Utils::Outcome<GetRoleResult, Aws::Client::AWSError<IAMErrors>> GetRoleOutcome;
        typedef Aws::Utils::Outcome<GetRolePolicyResult, Aws::Client::AWSError<IAMErrors>> GetRolePolicyOutcome;
        typedef Aws::Utils::Outcome<GetSAMLProviderResult, Aws::Client::AWSError<IAMErrors>> GetSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<GetSSHPublicKeyResult, Aws::Client::AWSError<IAMErrors>> GetSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<GetServerCertificateResult, Aws::Client::AWSError<IAMErrors>> GetServerCertificateOutcome;
        typedef Aws::Utils::Outcome<GetServiceLastAccessedDetailsResult, Aws::Client::AWSError<IAMErrors>> GetServiceLastAccessedDetailsOutcome;
        typedef Aws::Utils::Outcome<GetServiceLastAccessedDetailsWithEntitiesResult, Aws::Client::AWSError<IAMErrors>> GetServiceLastAccessedDetailsWithEntitiesOutcome;
        typedef Aws::Utils::Outcome<GetServiceLinkedRoleDeletionStatusResult, Aws::Client::AWSError<IAMErrors>> GetServiceLinkedRoleDeletionStatusOutcome;
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
        typedef Aws::Utils::Outcome<ListPoliciesGrantingServiceAccessResult, Aws::Client::AWSError<IAMErrors>> ListPoliciesGrantingServiceAccessOutcome;
        typedef Aws::Utils::Outcome<ListPolicyVersionsResult, Aws::Client::AWSError<IAMErrors>> ListPolicyVersionsOutcome;
        typedef Aws::Utils::Outcome<ListRolePoliciesResult, Aws::Client::AWSError<IAMErrors>> ListRolePoliciesOutcome;
        typedef Aws::Utils::Outcome<ListRoleTagsResult, Aws::Client::AWSError<IAMErrors>> ListRoleTagsOutcome;
        typedef Aws::Utils::Outcome<ListRolesResult, Aws::Client::AWSError<IAMErrors>> ListRolesOutcome;
        typedef Aws::Utils::Outcome<ListSAMLProvidersResult, Aws::Client::AWSError<IAMErrors>> ListSAMLProvidersOutcome;
        typedef Aws::Utils::Outcome<ListSSHPublicKeysResult, Aws::Client::AWSError<IAMErrors>> ListSSHPublicKeysOutcome;
        typedef Aws::Utils::Outcome<ListServerCertificatesResult, Aws::Client::AWSError<IAMErrors>> ListServerCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListServiceSpecificCredentialsResult, Aws::Client::AWSError<IAMErrors>> ListServiceSpecificCredentialsOutcome;
        typedef Aws::Utils::Outcome<ListSigningCertificatesResult, Aws::Client::AWSError<IAMErrors>> ListSigningCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListUserPoliciesResult, Aws::Client::AWSError<IAMErrors>> ListUserPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListUserTagsResult, Aws::Client::AWSError<IAMErrors>> ListUserTagsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<IAMErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ListVirtualMFADevicesResult, Aws::Client::AWSError<IAMErrors>> ListVirtualMFADevicesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> PutGroupPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> PutRolePermissionsBoundaryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> PutRolePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> PutUserPermissionsBoundaryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> PutUserPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> RemoveClientIDFromOpenIDConnectProviderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> RemoveRoleFromInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> RemoveUserFromGroupOutcome;
        typedef Aws::Utils::Outcome<ResetServiceSpecificCredentialResult, Aws::Client::AWSError<IAMErrors>> ResetServiceSpecificCredentialOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> ResyncMFADeviceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> SetDefaultPolicyVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> SetSecurityTokenServicePreferencesOutcome;
        typedef Aws::Utils::Outcome<SimulateCustomPolicyResult, Aws::Client::AWSError<IAMErrors>> SimulateCustomPolicyOutcome;
        typedef Aws::Utils::Outcome<SimulatePrincipalPolicyResult, Aws::Client::AWSError<IAMErrors>> SimulatePrincipalPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> TagRoleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> TagUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UntagRoleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UntagUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateAccessKeyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateAccountPasswordPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateAssumeRolePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateLoginProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateOpenIDConnectProviderThumbprintOutcome;
        typedef Aws::Utils::Outcome<UpdateRoleResult, Aws::Client::AWSError<IAMErrors>> UpdateRoleOutcome;
        typedef Aws::Utils::Outcome<UpdateRoleDescriptionResult, Aws::Client::AWSError<IAMErrors>> UpdateRoleDescriptionOutcome;
        typedef Aws::Utils::Outcome<UpdateSAMLProviderResult, Aws::Client::AWSError<IAMErrors>> UpdateSAMLProviderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateServerCertificateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateServiceSpecificCredentialOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateSigningCertificateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IAMErrors>> UpdateUserOutcome;
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
        typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
        typedef std::future<CreateServiceSpecificCredentialOutcome> CreateServiceSpecificCredentialOutcomeCallable;
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
        typedef std::future<DeleteRolePermissionsBoundaryOutcome> DeleteRolePermissionsBoundaryOutcomeCallable;
        typedef std::future<DeleteRolePolicyOutcome> DeleteRolePolicyOutcomeCallable;
        typedef std::future<DeleteSAMLProviderOutcome> DeleteSAMLProviderOutcomeCallable;
        typedef std::future<DeleteSSHPublicKeyOutcome> DeleteSSHPublicKeyOutcomeCallable;
        typedef std::future<DeleteServerCertificateOutcome> DeleteServerCertificateOutcomeCallable;
        typedef std::future<DeleteServiceLinkedRoleOutcome> DeleteServiceLinkedRoleOutcomeCallable;
        typedef std::future<DeleteServiceSpecificCredentialOutcome> DeleteServiceSpecificCredentialOutcomeCallable;
        typedef std::future<DeleteSigningCertificateOutcome> DeleteSigningCertificateOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserPermissionsBoundaryOutcome> DeleteUserPermissionsBoundaryOutcomeCallable;
        typedef std::future<DeleteUserPolicyOutcome> DeleteUserPolicyOutcomeCallable;
        typedef std::future<DeleteVirtualMFADeviceOutcome> DeleteVirtualMFADeviceOutcomeCallable;
        typedef std::future<DetachGroupPolicyOutcome> DetachGroupPolicyOutcomeCallable;
        typedef std::future<DetachRolePolicyOutcome> DetachRolePolicyOutcomeCallable;
        typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
        typedef std::future<EnableMFADeviceOutcome> EnableMFADeviceOutcomeCallable;
        typedef std::future<GenerateCredentialReportOutcome> GenerateCredentialReportOutcomeCallable;
        typedef std::future<GenerateOrganizationsAccessReportOutcome> GenerateOrganizationsAccessReportOutcomeCallable;
        typedef std::future<GenerateServiceLastAccessedDetailsOutcome> GenerateServiceLastAccessedDetailsOutcomeCallable;
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
        typedef std::future<GetOrganizationsAccessReportOutcome> GetOrganizationsAccessReportOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
        typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
        typedef std::future<GetRolePolicyOutcome> GetRolePolicyOutcomeCallable;
        typedef std::future<GetSAMLProviderOutcome> GetSAMLProviderOutcomeCallable;
        typedef std::future<GetSSHPublicKeyOutcome> GetSSHPublicKeyOutcomeCallable;
        typedef std::future<GetServerCertificateOutcome> GetServerCertificateOutcomeCallable;
        typedef std::future<GetServiceLastAccessedDetailsOutcome> GetServiceLastAccessedDetailsOutcomeCallable;
        typedef std::future<GetServiceLastAccessedDetailsWithEntitiesOutcome> GetServiceLastAccessedDetailsWithEntitiesOutcomeCallable;
        typedef std::future<GetServiceLinkedRoleDeletionStatusOutcome> GetServiceLinkedRoleDeletionStatusOutcomeCallable;
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
        typedef std::future<ListPoliciesGrantingServiceAccessOutcome> ListPoliciesGrantingServiceAccessOutcomeCallable;
        typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
        typedef std::future<ListRolePoliciesOutcome> ListRolePoliciesOutcomeCallable;
        typedef std::future<ListRoleTagsOutcome> ListRoleTagsOutcomeCallable;
        typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
        typedef std::future<ListSAMLProvidersOutcome> ListSAMLProvidersOutcomeCallable;
        typedef std::future<ListSSHPublicKeysOutcome> ListSSHPublicKeysOutcomeCallable;
        typedef std::future<ListServerCertificatesOutcome> ListServerCertificatesOutcomeCallable;
        typedef std::future<ListServiceSpecificCredentialsOutcome> ListServiceSpecificCredentialsOutcomeCallable;
        typedef std::future<ListSigningCertificatesOutcome> ListSigningCertificatesOutcomeCallable;
        typedef std::future<ListUserPoliciesOutcome> ListUserPoliciesOutcomeCallable;
        typedef std::future<ListUserTagsOutcome> ListUserTagsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ListVirtualMFADevicesOutcome> ListVirtualMFADevicesOutcomeCallable;
        typedef std::future<PutGroupPolicyOutcome> PutGroupPolicyOutcomeCallable;
        typedef std::future<PutRolePermissionsBoundaryOutcome> PutRolePermissionsBoundaryOutcomeCallable;
        typedef std::future<PutRolePolicyOutcome> PutRolePolicyOutcomeCallable;
        typedef std::future<PutUserPermissionsBoundaryOutcome> PutUserPermissionsBoundaryOutcomeCallable;
        typedef std::future<PutUserPolicyOutcome> PutUserPolicyOutcomeCallable;
        typedef std::future<RemoveClientIDFromOpenIDConnectProviderOutcome> RemoveClientIDFromOpenIDConnectProviderOutcomeCallable;
        typedef std::future<RemoveRoleFromInstanceProfileOutcome> RemoveRoleFromInstanceProfileOutcomeCallable;
        typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
        typedef std::future<ResetServiceSpecificCredentialOutcome> ResetServiceSpecificCredentialOutcomeCallable;
        typedef std::future<ResyncMFADeviceOutcome> ResyncMFADeviceOutcomeCallable;
        typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
        typedef std::future<SetSecurityTokenServicePreferencesOutcome> SetSecurityTokenServicePreferencesOutcomeCallable;
        typedef std::future<SimulateCustomPolicyOutcome> SimulateCustomPolicyOutcomeCallable;
        typedef std::future<SimulatePrincipalPolicyOutcome> SimulatePrincipalPolicyOutcomeCallable;
        typedef std::future<TagRoleOutcome> TagRoleOutcomeCallable;
        typedef std::future<TagUserOutcome> TagUserOutcomeCallable;
        typedef std::future<UntagRoleOutcome> UntagRoleOutcomeCallable;
        typedef std::future<UntagUserOutcome> UntagUserOutcomeCallable;
        typedef std::future<UpdateAccessKeyOutcome> UpdateAccessKeyOutcomeCallable;
        typedef std::future<UpdateAccountPasswordPolicyOutcome> UpdateAccountPasswordPolicyOutcomeCallable;
        typedef std::future<UpdateAssumeRolePolicyOutcome> UpdateAssumeRolePolicyOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateLoginProfileOutcome> UpdateLoginProfileOutcomeCallable;
        typedef std::future<UpdateOpenIDConnectProviderThumbprintOutcome> UpdateOpenIDConnectProviderThumbprintOutcomeCallable;
        typedef std::future<UpdateRoleOutcome> UpdateRoleOutcomeCallable;
        typedef std::future<UpdateRoleDescriptionOutcome> UpdateRoleDescriptionOutcomeCallable;
        typedef std::future<UpdateSAMLProviderOutcome> UpdateSAMLProviderOutcomeCallable;
        typedef std::future<UpdateSSHPublicKeyOutcome> UpdateSSHPublicKeyOutcomeCallable;
        typedef std::future<UpdateServerCertificateOutcome> UpdateServerCertificateOutcomeCallable;
        typedef std::future<UpdateServiceSpecificCredentialOutcome> UpdateServiceSpecificCredentialOutcomeCallable;
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
    typedef std::function<void(const IAMClient*, const Model::CreateServiceLinkedRoleRequest&, const Model::CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceLinkedRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::CreateServiceSpecificCredentialRequest&, const Model::CreateServiceSpecificCredentialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceSpecificCredentialResponseReceivedHandler;
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
    typedef std::function<void(const IAMClient*, const Model::DeleteRolePermissionsBoundaryRequest&, const Model::DeleteRolePermissionsBoundaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRolePermissionsBoundaryResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteRolePolicyRequest&, const Model::DeleteRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSAMLProviderRequest&, const Model::DeleteSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSSHPublicKeyRequest&, const Model::DeleteSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteServerCertificateRequest&, const Model::DeleteServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteServiceLinkedRoleRequest&, const Model::DeleteServiceLinkedRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceLinkedRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteServiceSpecificCredentialRequest&, const Model::DeleteServiceSpecificCredentialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceSpecificCredentialResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteSigningCertificateRequest&, const Model::DeleteSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSigningCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteUserPermissionsBoundaryRequest&, const Model::DeleteUserPermissionsBoundaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPermissionsBoundaryResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteUserPolicyRequest&, const Model::DeleteUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DeleteVirtualMFADeviceRequest&, const Model::DeleteVirtualMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachGroupPolicyRequest&, const Model::DetachGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachRolePolicyRequest&, const Model::DetachRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::DetachUserPolicyRequest&, const Model::DetachUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::EnableMFADeviceRequest&, const Model::EnableMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GenerateCredentialReportRequest&, const Model::GenerateCredentialReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateCredentialReportResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GenerateOrganizationsAccessReportRequest&, const Model::GenerateOrganizationsAccessReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateOrganizationsAccessReportResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GenerateServiceLastAccessedDetailsRequest&, const Model::GenerateServiceLastAccessedDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateServiceLastAccessedDetailsResponseReceivedHandler;
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
    typedef std::function<void(const IAMClient*, const Model::GetOrganizationsAccessReportRequest&, const Model::GetOrganizationsAccessReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrganizationsAccessReportResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetPolicyVersionRequest&, const Model::GetPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetRoleRequest&, const Model::GetRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetRolePolicyRequest&, const Model::GetRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetSAMLProviderRequest&, const Model::GetSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetSSHPublicKeyRequest&, const Model::GetSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetServerCertificateRequest&, const Model::GetServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetServiceLastAccessedDetailsRequest&, const Model::GetServiceLastAccessedDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceLastAccessedDetailsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetServiceLastAccessedDetailsWithEntitiesRequest&, const Model::GetServiceLastAccessedDetailsWithEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::GetServiceLinkedRoleDeletionStatusRequest&, const Model::GetServiceLinkedRoleDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceLinkedRoleDeletionStatusResponseReceivedHandler;
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
    typedef std::function<void(const IAMClient*, const Model::ListPoliciesGrantingServiceAccessRequest&, const Model::ListPoliciesGrantingServiceAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesGrantingServiceAccessResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListPolicyVersionsRequest&, const Model::ListPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListRolePoliciesRequest&, const Model::ListRolePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRolePoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListRoleTagsRequest&, const Model::ListRoleTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoleTagsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListRolesRequest&, const Model::ListRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRolesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSAMLProvidersRequest&, const Model::ListSAMLProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSAMLProvidersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSSHPublicKeysRequest&, const Model::ListSSHPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSSHPublicKeysResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListServerCertificatesRequest&, const Model::ListServerCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServerCertificatesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListServiceSpecificCredentialsRequest&, const Model::ListServiceSpecificCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceSpecificCredentialsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListSigningCertificatesRequest&, const Model::ListSigningCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningCertificatesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListUserPoliciesRequest&, const Model::ListUserPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoliciesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListUserTagsRequest&, const Model::ListUserTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserTagsResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ListVirtualMFADevicesRequest&, const Model::ListVirtualMFADevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualMFADevicesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutGroupPolicyRequest&, const Model::PutGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutRolePermissionsBoundaryRequest&, const Model::PutRolePermissionsBoundaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRolePermissionsBoundaryResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutRolePolicyRequest&, const Model::PutRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutUserPermissionsBoundaryRequest&, const Model::PutUserPermissionsBoundaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUserPermissionsBoundaryResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::PutUserPolicyRequest&, const Model::PutUserPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUserPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveClientIDFromOpenIDConnectProviderRequest&, const Model::RemoveClientIDFromOpenIDConnectProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveRoleFromInstanceProfileRequest&, const Model::RemoveRoleFromInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRoleFromInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::RemoveUserFromGroupRequest&, const Model::RemoveUserFromGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveUserFromGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ResetServiceSpecificCredentialRequest&, const Model::ResetServiceSpecificCredentialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetServiceSpecificCredentialResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::ResyncMFADeviceRequest&, const Model::ResyncMFADeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResyncMFADeviceResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SetDefaultPolicyVersionRequest&, const Model::SetDefaultPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SetSecurityTokenServicePreferencesRequest&, const Model::SetSecurityTokenServicePreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSecurityTokenServicePreferencesResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SimulateCustomPolicyRequest&, const Model::SimulateCustomPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SimulateCustomPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::SimulatePrincipalPolicyRequest&, const Model::SimulatePrincipalPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SimulatePrincipalPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::TagRoleRequest&, const Model::TagRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::TagUserRequest&, const Model::TagUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UntagRoleRequest&, const Model::UntagRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UntagUserRequest&, const Model::UntagUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagUserResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAccessKeyRequest&, const Model::UpdateAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAccountPasswordPolicyRequest&, const Model::UpdateAccountPasswordPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountPasswordPolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateAssumeRolePolicyRequest&, const Model::UpdateAssumeRolePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssumeRolePolicyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateLoginProfileRequest&, const Model::UpdateLoginProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoginProfileResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateOpenIDConnectProviderThumbprintRequest&, const Model::UpdateOpenIDConnectProviderThumbprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateRoleRequest&, const Model::UpdateRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoleResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateRoleDescriptionRequest&, const Model::UpdateRoleDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoleDescriptionResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSAMLProviderRequest&, const Model::UpdateSAMLProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSAMLProviderResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateSSHPublicKeyRequest&, const Model::UpdateSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateServerCertificateRequest&, const Model::UpdateServerCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServerCertificateResponseReceivedHandler;
    typedef std::function<void(const IAMClient*, const Model::UpdateServiceSpecificCredentialRequest&, const Model::UpdateServiceSpecificCredentialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSpecificCredentialResponseReceivedHandler;
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
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Using IAM</a>. </p>
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
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
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
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4</a>. If you have an existing application that uses Signature Version
   * 2, you do not have to update it to use Signature Version 4. However, some
   * operations now require Signature Version 4. The documentation for operations
   * that require version 4 indicate this requirement. </p> <p> <b>Additional
   * Resources</b> </p> <p>For more information, see the following:</p> <ul> <li> <p>
   * <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS
   * Security Credentials</a>. This topic provides general information about the
   * types of credentials used for accessing AWS. </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAMBestPractices.html">IAM
   * Best Practices</a>. This topic presents a list of suggestions for using the IAM
   * service to help secure your AWS resources. </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
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
        IAMClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IAMClient();

        inline virtual const char* GetServiceClientName() const override { return "IAM"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds a new client ID (also known as audience) to the list of client IDs
         * already registered for the specified IAM OpenID Connect (OIDC) provider
         * resource.</p> <p>This operation is idempotent; it does not fail or return an
         * error if you add an existing client ID to the provider.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddClientIDToOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::AddClientIDToOpenIDConnectProviderOutcome AddClientIDToOpenIDConnectProvider(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Adds a new client ID (also known as audience) to the list of client IDs
         * already registered for the specified IAM OpenID Connect (OIDC) provider
         * resource.</p> <p>This operation is idempotent; it does not fail or return an
         * error if you add an existing client ID to the provider.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddClientIDToOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddClientIDToOpenIDConnectProviderOutcomeCallable AddClientIDToOpenIDConnectProviderCallable(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Adds a new client ID (also known as audience) to the list of client IDs
         * already registered for the specified IAM OpenID Connect (OIDC) provider
         * resource.</p> <p>This operation is idempotent; it does not fail or return an
         * error if you add an existing client ID to the provider.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddClientIDToOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddClientIDToOpenIDConnectProviderAsync(const Model::AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified IAM role to the specified instance profile. An instance
         * profile can contain only one role, and this limit cannot be increased. You can
         * remove the existing role and then add a different role to an instance profile.
         * You must then wait for the change to appear across all of AWS because of <a
         * href="https://en.wikipedia.org/wiki/Eventual_consistency">eventual
         * consistency</a>. To force the change, you must <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DisassociateIamInstanceProfile.html">disassociate
         * the instance profile</a> and then <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_AssociateIamInstanceProfile.html">associate
         * the instance profile</a>, or you can stop your instance and then restart it.</p>
         * <note> <p>The caller of this API must be granted the <code>PassRole</code>
         * permission on the IAM role by a permissions policy.</p> </note> <p>For more
         * information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddRoleToInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToInstanceProfileOutcome AddRoleToInstanceProfile(const Model::AddRoleToInstanceProfileRequest& request) const;

        /**
         * <p>Adds the specified IAM role to the specified instance profile. An instance
         * profile can contain only one role, and this limit cannot be increased. You can
         * remove the existing role and then add a different role to an instance profile.
         * You must then wait for the change to appear across all of AWS because of <a
         * href="https://en.wikipedia.org/wiki/Eventual_consistency">eventual
         * consistency</a>. To force the change, you must <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DisassociateIamInstanceProfile.html">disassociate
         * the instance profile</a> and then <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_AssociateIamInstanceProfile.html">associate
         * the instance profile</a>, or you can stop your instance and then restart it.</p>
         * <note> <p>The caller of this API must be granted the <code>PassRole</code>
         * permission on the IAM role by a permissions policy.</p> </note> <p>For more
         * information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddRoleToInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToInstanceProfileOutcomeCallable AddRoleToInstanceProfileCallable(const Model::AddRoleToInstanceProfileRequest& request) const;

        /**
         * <p>Adds the specified IAM role to the specified instance profile. An instance
         * profile can contain only one role, and this limit cannot be increased. You can
         * remove the existing role and then add a different role to an instance profile.
         * You must then wait for the change to appear across all of AWS because of <a
         * href="https://en.wikipedia.org/wiki/Eventual_consistency">eventual
         * consistency</a>. To force the change, you must <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DisassociateIamInstanceProfile.html">disassociate
         * the instance profile</a> and then <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_AssociateIamInstanceProfile.html">associate
         * the instance profile</a>, or you can stop your instance and then restart it.</p>
         * <note> <p>The caller of this API must be granted the <code>PassRole</code>
         * permission on the IAM role by a permissions policy.</p> </note> <p>For more
         * information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddRoleToInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToInstanceProfileAsync(const Model::AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified user to the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddUserToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest& request) const;

        /**
         * <p>Adds the specified user to the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddUserToGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request) const;

        /**
         * <p>Adds the specified user to the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddUserToGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM group.</p> <p>You
         * use this API to attach a managed policy to a group. To embed an inline policy in
         * a group, use <a>PutGroupPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachGroupPolicyOutcome AttachGroupPolicy(const Model::AttachGroupPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM group.</p> <p>You
         * use this API to attach a managed policy to a group. To embed an inline policy in
         * a group, use <a>PutGroupPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachGroupPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachGroupPolicyOutcomeCallable AttachGroupPolicyCallable(const Model::AttachGroupPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM group.</p> <p>You
         * use this API to attach a managed policy to a group. To embed an inline policy in
         * a group, use <a>PutGroupPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachGroupPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachGroupPolicyAsync(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM role. When you
         * attach a managed policy to a role, the managed policy becomes part of the role's
         * permission (access) policy.</p> <note> <p>You cannot use a managed policy as the
         * role's trust policy. The role's trust policy is created at the same time as the
         * role, using <a>CreateRole</a>. You can update a role's trust policy using
         * <a>UpdateAssumeRolePolicy</a>.</p> </note> <p>Use this API to attach a
         * <i>managed</i> policy to a role. To embed an inline policy in a role, use
         * <a>PutRolePolicy</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachRolePolicyOutcome AttachRolePolicy(const Model::AttachRolePolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM role. When you
         * attach a managed policy to a role, the managed policy becomes part of the role's
         * permission (access) policy.</p> <note> <p>You cannot use a managed policy as the
         * role's trust policy. The role's trust policy is created at the same time as the
         * role, using <a>CreateRole</a>. You can update a role's trust policy using
         * <a>UpdateAssumeRolePolicy</a>.</p> </note> <p>Use this API to attach a
         * <i>managed</i> policy to a role. To embed an inline policy in a role, use
         * <a>PutRolePolicy</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachRolePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachRolePolicyOutcomeCallable AttachRolePolicyCallable(const Model::AttachRolePolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM role. When you
         * attach a managed policy to a role, the managed policy becomes part of the role's
         * permission (access) policy.</p> <note> <p>You cannot use a managed policy as the
         * role's trust policy. The role's trust policy is created at the same time as the
         * role, using <a>CreateRole</a>. You can update a role's trust policy using
         * <a>UpdateAssumeRolePolicy</a>.</p> </note> <p>Use this API to attach a
         * <i>managed</i> policy to a role. To embed an inline policy in a role, use
         * <a>PutRolePolicy</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachRolePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachRolePolicyAsync(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified user.</p> <p>You use
         * this API to attach a <i>managed</i> policy to a user. To embed an inline policy
         * in a user, use <a>PutUserPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified user.</p> <p>You use
         * this API to attach a <i>managed</i> policy to a user. To embed an inline policy
         * in a user, use <a>PutUserPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachUserPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request) const;

        /**
         * <p>Attaches the specified managed policy to the specified user.</p> <p>You use
         * this API to attach a <i>managed</i> policy to a user. To embed an inline policy
         * in a user, use <a>PutUserPolicy</a>.</p> <p>For more information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachUserPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password of the IAM user who is calling this operation. The AWS
         * account root user password is not affected by this operation.</p> <p>To change
         * the password for a different user, see <a>UpdateLoginProfile</a>. For more
         * information about modifying passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ChangePassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangePasswordOutcome ChangePassword(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password of the IAM user who is calling this operation. The AWS
         * account root user password is not affected by this operation.</p> <p>To change
         * the password for a different user, see <a>UpdateLoginProfile</a>. For more
         * information about modifying passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ChangePassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password of the IAM user who is calling this operation. The AWS
         * account root user password is not affected by this operation.</p> <p>To change
         * the password for a different user, see <a>UpdateLoginProfile</a>. For more
         * information about modifying passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ChangePassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new AWS secret access key and corresponding AWS access key ID for
         * the specified user. The default status for new keys is <code>Active</code>.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. This operation works for
         * access keys under the AWS account. Consequently, you can use this operation to
         * manage AWS account root user credentials. This is true even if the AWS account
         * has no associated users.</p> <p> For information about limits on the number of
         * keys you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>To ensure
         * the security of your AWS account, the secret access key is accessible only
         * during key and user creation. You must save the key (for example, in a text
         * file) if you want to be able to access it again. If a secret key is lost, you
         * can delete the access keys for the associated user and then create new keys.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessKeyOutcome CreateAccessKey(const Model::CreateAccessKeyRequest& request) const;

        /**
         * <p> Creates a new AWS secret access key and corresponding AWS access key ID for
         * the specified user. The default status for new keys is <code>Active</code>.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. This operation works for
         * access keys under the AWS account. Consequently, you can use this operation to
         * manage AWS account root user credentials. This is true even if the AWS account
         * has no associated users.</p> <p> For information about limits on the number of
         * keys you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>To ensure
         * the security of your AWS account, the secret access key is accessible only
         * during key and user creation. You must save the key (for example, in a text
         * file) if you want to be able to access it again. If a secret key is lost, you
         * can delete the access keys for the associated user and then create new keys.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccessKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessKeyOutcomeCallable CreateAccessKeyCallable(const Model::CreateAccessKeyRequest& request) const;

        /**
         * <p> Creates a new AWS secret access key and corresponding AWS access key ID for
         * the specified user. The default status for new keys is <code>Active</code>.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. This operation works for
         * access keys under the AWS account. Consequently, you can use this operation to
         * manage AWS account root user credentials. This is true even if the AWS account
         * has no associated users.</p> <p> For information about limits on the number of
         * keys you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>To ensure
         * the security of your AWS account, the secret access key is accessible only
         * during key and user creation. You must save the key (for example, in a text
         * file) if you want to be able to access it again. If a secret key is lost, you
         * can delete the access keys for the associated user and then create new keys.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccessKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessKeyAsync(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for your AWS account. For information about using an AWS
         * account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountAliasOutcome CreateAccountAlias(const Model::CreateAccountAliasRequest& request) const;

        /**
         * <p>Creates an alias for your AWS account. For information about using an AWS
         * account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccountAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountAliasOutcomeCallable CreateAccountAliasCallable(const Model::CreateAccountAliasRequest& request) const;

        /**
         * <p>Creates an alias for your AWS account. For information about using an AWS
         * account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccountAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAliasAsync(const Model::CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new group.</p> <p> For information about the number of groups you
         * can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a new group.</p> <p> For information about the number of groups you
         * can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateGroup">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a new group.</p> <p> For information about the number of groups you
         * can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateGroup">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new instance profile. For information about instance profiles, go
         * to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p> For information about the number of instance
         * profiles you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * <p> Creates a new instance profile. For information about instance profiles, go
         * to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p> For information about the number of instance
         * profiles you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * <p> Creates a new instance profile. For information about instance profiles, go
         * to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p> For information about the number of instance
         * profiles you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceProfileAsync(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a password for the specified user, giving the user the ability to
         * access AWS services through the AWS Management Console. For more information
         * about managing passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoginProfileOutcome CreateLoginProfile(const Model::CreateLoginProfileRequest& request) const;

        /**
         * <p> Creates a password for the specified user, giving the user the ability to
         * access AWS services through the AWS Management Console. For more information
         * about managing passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateLoginProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoginProfileOutcomeCallable CreateLoginProfileCallable(const Model::CreateLoginProfileRequest& request) const;

        /**
         * <p> Creates a password for the specified user, giving the user the ability to
         * access AWS services through the AWS Management Console. For more information
         * about managing passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateLoginProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoginProfileAsync(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a
         * href="http://openid.net/connect/">OpenID Connect (OIDC)</a>.</p> <p>The OIDC
         * provider that you create with this operation can be used as a principal in a
         * role's trust policy. Such a policy establishes a trust relationship between AWS
         * and the OIDC provider.</p> <p>When you create the IAM OIDC provider, you specify
         * the following:</p> <ul> <li> <p>The URL of the OIDC identity provider (IdP) to
         * trust</p> </li> <li> <p>A list of client IDs (also known as audiences) that
         * identify the application or applications that are allowed to authenticate using
         * the OIDC provider</p> </li> <li> <p>A list of thumbprints of the server
         * certificate(s) that the IdP uses</p> </li> </ul> <p>You get all of this
         * information from the OIDC IdP that you want to use to access AWS.</p> <note>
         * <p>The trust for the OIDC provider is derived from the IAM provider that this
         * operation creates. Therefore, it is best to limit access to the
         * <a>CreateOpenIDConnectProvider</a> operation to highly privileged users.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpenIDConnectProviderOutcome CreateOpenIDConnectProvider(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a
         * href="http://openid.net/connect/">OpenID Connect (OIDC)</a>.</p> <p>The OIDC
         * provider that you create with this operation can be used as a principal in a
         * role's trust policy. Such a policy establishes a trust relationship between AWS
         * and the OIDC provider.</p> <p>When you create the IAM OIDC provider, you specify
         * the following:</p> <ul> <li> <p>The URL of the OIDC identity provider (IdP) to
         * trust</p> </li> <li> <p>A list of client IDs (also known as audiences) that
         * identify the application or applications that are allowed to authenticate using
         * the OIDC provider</p> </li> <li> <p>A list of thumbprints of the server
         * certificate(s) that the IdP uses</p> </li> </ul> <p>You get all of this
         * information from the OIDC IdP that you want to use to access AWS.</p> <note>
         * <p>The trust for the OIDC provider is derived from the IAM provider that this
         * operation creates. Therefore, it is best to limit access to the
         * <a>CreateOpenIDConnectProvider</a> operation to highly privileged users.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOpenIDConnectProviderOutcomeCallable CreateOpenIDConnectProviderCallable(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a
         * href="http://openid.net/connect/">OpenID Connect (OIDC)</a>.</p> <p>The OIDC
         * provider that you create with this operation can be used as a principal in a
         * role's trust policy. Such a policy establishes a trust relationship between AWS
         * and the OIDC provider.</p> <p>When you create the IAM OIDC provider, you specify
         * the following:</p> <ul> <li> <p>The URL of the OIDC identity provider (IdP) to
         * trust</p> </li> <li> <p>A list of client IDs (also known as audiences) that
         * identify the application or applications that are allowed to authenticate using
         * the OIDC provider</p> </li> <li> <p>A list of thumbprints of the server
         * certificate(s) that the IdP uses</p> </li> </ul> <p>You get all of this
         * information from the OIDC IdP that you want to use to access AWS.</p> <note>
         * <p>The trust for the OIDC provider is derived from the IAM provider that this
         * operation creates. Therefore, it is best to limit access to the
         * <a>CreateOpenIDConnectProvider</a> operation to highly privileged users.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOpenIDConnectProviderAsync(const Model::CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new managed policy for your AWS account.</p> <p>This operation
         * creates a policy version with a version identifier of <code>v1</code> and sets
         * v1 as the policy's default version. For more information about policy versions,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policies in general, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates a new managed policy for your AWS account.</p> <p>This operation
         * creates a policy version with a version identifier of <code>v1</code> and sets
         * v1 as the policy's default version. For more information about policy versions,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policies in general, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates a new managed policy for your AWS account.</p> <p>This operation
         * creates a policy version with a version identifier of <code>v1</code> and sets
         * v1 as the policy's default version. For more information about policy versions,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policies in general, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicyVersion">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicyVersion">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new role for your AWS account. For more information about roles, go
         * to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">IAM
         * Roles</a>. For information about limitations on role names and the number of
         * roles you can create, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateRole">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateRoleOutcome CreateRole(const Model::CreateRoleRequest& request) const;

        /**
         * <p>Creates a new role for your AWS account. For more information about roles, go
         * to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">IAM
         * Roles</a>. For information about limitations on role names and the number of
         * roles you can create, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateRole">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request) const;

        /**
         * <p>Creates a new role for your AWS account. For more information about roles, go
         * to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">IAM
         * Roles</a>. For information about limitations on role names and the number of
         * roles you can create, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateRole">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM resource that describes an identity provider (IdP) that
         * supports SAML 2.0.</p> <p>The SAML provider resource that you create with this
         * operation can be used as a principal in an IAM role's trust policy. Such a
         * policy can enable federated users who sign in using the SAML IdP to assume the
         * role. You can create an IAM role that supports Web-based single sign-on (SSO) to
         * the AWS Management Console or one that supports API access to AWS.</p> <p>When
         * you create the SAML provider resource, you upload a SAML metadata document that
         * you get from your IdP. That document includes the issuer's name, expiration
         * information, and keys that can be used to validate the SAML authentication
         * response (assertions) that the IdP sends. You must generate the metadata
         * document using the identity management software that is used as your
         * organization's IdP.</p> <note> <p> This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note> <p> For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling
         * SAML 2.0 Federated Users to Access the AWS Management Console</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based Federation</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSAMLProviderOutcome CreateSAMLProvider(const Model::CreateSAMLProviderRequest& request) const;

        /**
         * <p>Creates an IAM resource that describes an identity provider (IdP) that
         * supports SAML 2.0.</p> <p>The SAML provider resource that you create with this
         * operation can be used as a principal in an IAM role's trust policy. Such a
         * policy can enable federated users who sign in using the SAML IdP to assume the
         * role. You can create an IAM role that supports Web-based single sign-on (SSO) to
         * the AWS Management Console or one that supports API access to AWS.</p> <p>When
         * you create the SAML provider resource, you upload a SAML metadata document that
         * you get from your IdP. That document includes the issuer's name, expiration
         * information, and keys that can be used to validate the SAML authentication
         * response (assertions) that the IdP sends. You must generate the metadata
         * document using the identity management software that is used as your
         * organization's IdP.</p> <note> <p> This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note> <p> For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling
         * SAML 2.0 Federated Users to Access the AWS Management Console</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based Federation</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateSAMLProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSAMLProviderOutcomeCallable CreateSAMLProviderCallable(const Model::CreateSAMLProviderRequest& request) const;

        /**
         * <p>Creates an IAM resource that describes an identity provider (IdP) that
         * supports SAML 2.0.</p> <p>The SAML provider resource that you create with this
         * operation can be used as a principal in an IAM role's trust policy. Such a
         * policy can enable federated users who sign in using the SAML IdP to assume the
         * role. You can create an IAM role that supports Web-based single sign-on (SSO) to
         * the AWS Management Console or one that supports API access to AWS.</p> <p>When
         * you create the SAML provider resource, you upload a SAML metadata document that
         * you get from your IdP. That document includes the issuer's name, expiration
         * information, and keys that can be used to validate the SAML authentication
         * response (assertions) that the IdP sends. You must generate the metadata
         * document using the identity management software that is used as your
         * organization's IdP.</p> <note> <p> This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note> <p> For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling
         * SAML 2.0 Federated Users to Access the AWS Management Console</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based Federation</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateSAMLProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSAMLProviderAsync(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM role that is linked to a specific AWS service. The service
         * controls the attached policies and when the role can be deleted. This helps
         * ensure that the service is not broken by an unexpectedly changed or deleted
         * role, which could put your AWS resources into an unknown state. Allowing the
         * service to control the role helps improve service stability and proper cleanup
         * when a service and its role are no longer needed. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">Using
         * Service-Linked Roles</a> in the <i>IAM User Guide</i>. </p> <p>To attach a
         * policy to this service-linked role, you must make the request using the AWS
         * service that depends on this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceLinkedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceLinkedRoleOutcome CreateServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest& request) const;

        /**
         * <p>Creates an IAM role that is linked to a specific AWS service. The service
         * controls the attached policies and when the role can be deleted. This helps
         * ensure that the service is not broken by an unexpectedly changed or deleted
         * role, which could put your AWS resources into an unknown state. Allowing the
         * service to control the role helps improve service stability and proper cleanup
         * when a service and its role are no longer needed. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">Using
         * Service-Linked Roles</a> in the <i>IAM User Guide</i>. </p> <p>To attach a
         * policy to this service-linked role, you must make the request using the AWS
         * service that depends on this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceLinkedRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceLinkedRoleOutcomeCallable CreateServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;

        /**
         * <p>Creates an IAM role that is linked to a specific AWS service. The service
         * controls the attached policies and when the role can be deleted. This helps
         * ensure that the service is not broken by an unexpectedly changed or deleted
         * role, which could put your AWS resources into an unknown state. Allowing the
         * service to control the role helps improve service stability and proper cleanup
         * when a service and its role are no longer needed. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">Using
         * Service-Linked Roles</a> in the <i>IAM User Guide</i>. </p> <p>To attach a
         * policy to this service-linked role, you must make the request using the AWS
         * service that depends on this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceLinkedRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a set of credentials consisting of a user name and password that
         * can be used to access the service specified in the request. These credentials
         * are generated by IAM, and can be used only for the specified service. </p>
         * <p>You can have a maximum of two sets of service-specific credentials for each
         * supported service per user.</p> <p>The only supported service at this time is
         * AWS CodeCommit.</p> <p>You can reset the password to a new service-generated
         * value by calling <a>ResetServiceSpecificCredential</a>.</p> <p>For more
         * information about service-specific credentials, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_ssh-keys.html">Using
         * IAM with AWS CodeCommit: Git Credentials, SSH Keys, and AWS Access Keys</a> in
         * the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceSpecificCredentialOutcome CreateServiceSpecificCredential(const Model::CreateServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Generates a set of credentials consisting of a user name and password that
         * can be used to access the service specified in the request. These credentials
         * are generated by IAM, and can be used only for the specified service. </p>
         * <p>You can have a maximum of two sets of service-specific credentials for each
         * supported service per user.</p> <p>The only supported service at this time is
         * AWS CodeCommit.</p> <p>You can reset the password to a new service-generated
         * value by calling <a>ResetServiceSpecificCredential</a>.</p> <p>For more
         * information about service-specific credentials, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_ssh-keys.html">Using
         * IAM with AWS CodeCommit: Git Credentials, SSH Keys, and AWS Access Keys</a> in
         * the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceSpecificCredentialOutcomeCallable CreateServiceSpecificCredentialCallable(const Model::CreateServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Generates a set of credentials consisting of a user name and password that
         * can be used to access the service specified in the request. These credentials
         * are generated by IAM, and can be used only for the specified service. </p>
         * <p>You can have a maximum of two sets of service-specific credentials for each
         * supported service per user.</p> <p>The only supported service at this time is
         * AWS CodeCommit.</p> <p>You can reset the password to a new service-generated
         * value by calling <a>ResetServiceSpecificCredential</a>.</p> <p>For more
         * information about service-specific credentials, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_ssh-keys.html">Using
         * IAM with AWS CodeCommit: Git Credentials, SSH Keys, and AWS Access Keys</a> in
         * the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceSpecificCredentialAsync(const Model::CreateServiceSpecificCredentialRequest& request, const CreateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new IAM user for your AWS account.</p> <p> For information about
         * limitations on the number of IAM users you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new IAM user for your AWS account.</p> <p> For information about
         * limitations on the number of IAM users you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new IAM user for your AWS account.</p> <p> For information about
         * limitations on the number of IAM users you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new virtual MFA device for the AWS account. After creating the
         * virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user.
         * For more information about creating and working with virtual MFA devices, go to
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p> <p>For information
         * about limits on the number of MFA devices you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>The seed
         * information contained in the QR code and the Base32 string should be treated
         * like any other secret access information. In other words, protect the seed
         * information as you would your AWS access keys or your passwords. After you
         * provision your virtual device, you should ensure that the information is
         * destroyed following secure procedures.</p> </important><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateVirtualMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualMFADeviceOutcome CreateVirtualMFADevice(const Model::CreateVirtualMFADeviceRequest& request) const;

        /**
         * <p>Creates a new virtual MFA device for the AWS account. After creating the
         * virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user.
         * For more information about creating and working with virtual MFA devices, go to
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p> <p>For information
         * about limits on the number of MFA devices you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>The seed
         * information contained in the QR code and the Base32 string should be treated
         * like any other secret access information. In other words, protect the seed
         * information as you would your AWS access keys or your passwords. After you
         * provision your virtual device, you should ensure that the information is
         * destroyed following secure procedures.</p> </important><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateVirtualMFADevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualMFADeviceOutcomeCallable CreateVirtualMFADeviceCallable(const Model::CreateVirtualMFADeviceRequest& request) const;

        /**
         * <p>Creates a new virtual MFA device for the AWS account. After creating the
         * virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to an IAM user.
         * For more information about creating and working with virtual MFA devices, go to
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p> <p>For information
         * about limits on the number of MFA devices you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on Entities</a> in the <i>IAM User Guide</i>.</p> <important> <p>The seed
         * information contained in the QR code and the Base32 string should be treated
         * like any other secret access information. In other words, protect the seed
         * information as you would your AWS access keys or your passwords. After you
         * provision your virtual device, you should ensure that the information is
         * destroyed following secure procedures.</p> </important><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateVirtualMFADevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualMFADeviceAsync(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates the specified MFA device and removes it from association with the
         * user name for which it was originally enabled.</p> <p>For more information about
         * creating and working with virtual MFA devices, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Enabling
         * a Virtual Multi-factor Authentication (MFA) Device</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeactivateMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateMFADeviceOutcome DeactivateMFADevice(const Model::DeactivateMFADeviceRequest& request) const;

        /**
         * <p>Deactivates the specified MFA device and removes it from association with the
         * user name for which it was originally enabled.</p> <p>For more information about
         * creating and working with virtual MFA devices, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Enabling
         * a Virtual Multi-factor Authentication (MFA) Device</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeactivateMFADevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateMFADeviceOutcomeCallable DeactivateMFADeviceCallable(const Model::DeactivateMFADeviceRequest& request) const;

        /**
         * <p>Deactivates the specified MFA device and removes it from association with the
         * user name for which it was originally enabled.</p> <p>For more information about
         * creating and working with virtual MFA devices, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Enabling
         * a Virtual Multi-factor Authentication (MFA) Device</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeactivateMFADevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateMFADeviceAsync(const Model::DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the access key pair associated with the specified IAM user.</p> <p>If
         * you do not specify a user name, IAM determines the user name implicitly based on
         * the AWS access key ID signing the request. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessKeyOutcome DeleteAccessKey(const Model::DeleteAccessKeyRequest& request) const;

        /**
         * <p>Deletes the access key pair associated with the specified IAM user.</p> <p>If
         * you do not specify a user name, IAM determines the user name implicitly based on
         * the AWS access key ID signing the request. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccessKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessKeyOutcomeCallable DeleteAccessKeyCallable(const Model::DeleteAccessKeyRequest& request) const;

        /**
         * <p>Deletes the access key pair associated with the specified IAM user.</p> <p>If
         * you do not specify a user name, IAM determines the user name implicitly based on
         * the AWS access key ID signing the request. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccessKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessKeyAsync(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the specified AWS account alias. For information about using an AWS
         * account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAliasOutcome DeleteAccountAlias(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * <p> Deletes the specified AWS account alias. For information about using an AWS
         * account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAliasOutcomeCallable DeleteAccountAliasCallable(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * <p> Deletes the specified AWS account alias. For information about using an AWS
         * account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAliasAsync(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the password policy for the AWS account. There are no
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountPasswordPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountPasswordPolicyOutcome DeleteAccountPasswordPolicy(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Deletes the password policy for the AWS account. There are no
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountPasswordPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountPasswordPolicyOutcomeCallable DeleteAccountPasswordPolicyCallable(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Deletes the password policy for the AWS account. There are no
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountPasswordPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountPasswordPolicyAsync(const Model::DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IAM group. The group must not contain any users or have
         * any attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes the specified IAM group. The group must not contain any users or have
         * any attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroup">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes the specified IAM group. The group must not contain any users or have
         * any attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroup">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * group.</p> <p>A group can also have managed policies attached to it. To detach a
         * managed policy from a group, use <a>DetachGroupPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupPolicyOutcome DeleteGroupPolicy(const Model::DeleteGroupPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * group.</p> <p>A group can also have managed policies attached to it. To detach a
         * managed policy from a group, use <a>DetachGroupPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroupPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupPolicyOutcomeCallable DeleteGroupPolicyCallable(const Model::DeleteGroupPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * group.</p> <p>A group can also have managed policies attached to it. To detach a
         * managed policy from a group, use <a>DetachGroupPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroupPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupPolicyAsync(const Model::DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified instance profile. The instance profile must not have an
         * associated role.</p> <important> <p>Make sure that you do not have any Amazon
         * EC2 instances running with the instance profile you are about to delete.
         * Deleting a role or instance profile that is associated with a running instance
         * will break any applications running on the instance.</p> </important> <p>For
         * more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * <p>Deletes the specified instance profile. The instance profile must not have an
         * associated role.</p> <important> <p>Make sure that you do not have any Amazon
         * EC2 instances running with the instance profile you are about to delete.
         * Deleting a role or instance profile that is associated with a running instance
         * will break any applications running on the instance.</p> </important> <p>For
         * more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * <p>Deletes the specified instance profile. The instance profile must not have an
         * associated role.</p> <important> <p>Make sure that you do not have any Amazon
         * EC2 instances running with the instance profile you are about to delete.
         * Deleting a role or instance profile that is associated with a running instance
         * will break any applications running on the instance.</p> </important> <p>For
         * more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceProfileAsync(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the password for the specified IAM user, which terminates the user's
         * ability to access AWS services through the AWS Management Console.</p>
         * <important> <p> Deleting a user's password does not prevent a user from
         * accessing AWS through the command line interface or the API. To prevent all user
         * access, you must also either make any access keys inactive or delete them. For
         * more information about making keys inactive or deleting them, see
         * <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoginProfileOutcome DeleteLoginProfile(const Model::DeleteLoginProfileRequest& request) const;

        /**
         * <p>Deletes the password for the specified IAM user, which terminates the user's
         * ability to access AWS services through the AWS Management Console.</p>
         * <important> <p> Deleting a user's password does not prevent a user from
         * accessing AWS through the command line interface or the API. To prevent all user
         * access, you must also either make any access keys inactive or delete them. For
         * more information about making keys inactive or deleting them, see
         * <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteLoginProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoginProfileOutcomeCallable DeleteLoginProfileCallable(const Model::DeleteLoginProfileRequest& request) const;

        /**
         * <p>Deletes the password for the specified IAM user, which terminates the user's
         * ability to access AWS services through the AWS Management Console.</p>
         * <important> <p> Deleting a user's password does not prevent a user from
         * accessing AWS through the command line interface or the API. To prevent all user
         * access, you must also either make any access keys inactive or delete them. For
         * more information about making keys inactive or deleting them, see
         * <a>UpdateAccessKey</a> and <a>DeleteAccessKey</a>. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteLoginProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoginProfileAsync(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an OpenID Connect identity provider (IdP) resource object in IAM.</p>
         * <p>Deleting an IAM OIDC provider resource does not update any roles that
         * reference the provider as a principal in their trust policies. Any attempt to
         * assume a role that references a deleted provider fails.</p> <p>This operation is
         * idempotent; it does not fail or return an error if you call the operation for a
         * provider that does not exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOpenIDConnectProviderOutcome DeleteOpenIDConnectProvider(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Deletes an OpenID Connect identity provider (IdP) resource object in IAM.</p>
         * <p>Deleting an IAM OIDC provider resource does not update any roles that
         * reference the provider as a principal in their trust policies. Any attempt to
         * assume a role that references a deleted provider fails.</p> <p>This operation is
         * idempotent; it does not fail or return an error if you call the operation for a
         * provider that does not exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOpenIDConnectProviderOutcomeCallable DeleteOpenIDConnectProviderCallable(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Deletes an OpenID Connect identity provider (IdP) resource object in IAM.</p>
         * <p>Deleting an IAM OIDC provider resource does not update any roles that
         * reference the provider as a principal in their trust policies. Any attempt to
         * assume a role that references a deleted provider fails.</p> <p>This operation is
         * idempotent; it does not fail or return an error if you call the operation for a
         * provider that does not exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOpenIDConnectProviderAsync(const Model::DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed
         * policy, you must first detach the policy from all users, groups, and roles that
         * it is attached to. In addition, you must delete all the policy's versions. The
         * following steps describe the process for deleting a managed policy:</p> <ul>
         * <li> <p>Detach the policy from all users, groups, and roles that the policy is
         * attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or
         * <a>DetachRolePolicy</a> API operations. To list all the users, groups, and roles
         * that a policy is attached to, use <a>ListEntitiesForPolicy</a>.</p> </li> <li>
         * <p>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list
         * the policy's versions, use <a>ListPolicyVersions</a>. You cannot use
         * <a>DeletePolicyVersion</a> to delete the version that is marked as the default
         * version. You delete the policy's default version in the next step of the
         * process.</p> </li> <li> <p>Delete the policy (this automatically deletes the
         * policy's default version) using this API.</p> </li> </ul> <p>For information
         * about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed
         * policy, you must first detach the policy from all users, groups, and roles that
         * it is attached to. In addition, you must delete all the policy's versions. The
         * following steps describe the process for deleting a managed policy:</p> <ul>
         * <li> <p>Detach the policy from all users, groups, and roles that the policy is
         * attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or
         * <a>DetachRolePolicy</a> API operations. To list all the users, groups, and roles
         * that a policy is attached to, use <a>ListEntitiesForPolicy</a>.</p> </li> <li>
         * <p>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list
         * the policy's versions, use <a>ListPolicyVersions</a>. You cannot use
         * <a>DeletePolicyVersion</a> to delete the version that is marked as the default
         * version. You delete the policy's default version in the next step of the
         * process.</p> </li> <li> <p>Delete the policy (this automatically deletes the
         * policy's default version) using this API.</p> </li> </ul> <p>For information
         * about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed
         * policy, you must first detach the policy from all users, groups, and roles that
         * it is attached to. In addition, you must delete all the policy's versions. The
         * following steps describe the process for deleting a managed policy:</p> <ul>
         * <li> <p>Detach the policy from all users, groups, and roles that the policy is
         * attached to, using the <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or
         * <a>DetachRolePolicy</a> API operations. To list all the users, groups, and roles
         * that a policy is attached to, use <a>ListEntitiesForPolicy</a>.</p> </li> <li>
         * <p>Delete all versions of the policy using <a>DeletePolicyVersion</a>. To list
         * the policy's versions, use <a>ListPolicyVersions</a>. You cannot use
         * <a>DeletePolicyVersion</a> to delete the version that is marked as the default
         * version. You delete the policy's default version in the next step of the
         * process.</p> </li> <li> <p>Delete the policy (this automatically deletes the
         * policy's default version) using this API.</p> </li> </ul> <p>For information
         * about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * <p>Deletes the specified version from the specified managed policy.</p> <p>You
         * cannot delete the default version from a policy using this API. To delete the
         * default version from a policy, use <a>DeletePolicy</a>. To find out which
         * version of a policy is marked as the default version, use
         * <a>ListPolicyVersions</a>.</p> <p>For information about versions for managed
         * policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicyVersion">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified role. The role must not have any policies attached. For
         * more information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <important> <p>Make sure that you do not have any Amazon EC2
         * instances running with the role you are about to delete. Deleting a role or
         * instance profile that is associated with a running instance will break any
         * applications running on the instance.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRole">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest& request) const;

        /**
         * <p>Deletes the specified role. The role must not have any policies attached. For
         * more information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <important> <p>Make sure that you do not have any Amazon EC2
         * instances running with the role you are about to delete. Deleting a role or
         * instance profile that is associated with a running instance will break any
         * applications running on the instance.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRole">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request) const;

        /**
         * <p>Deletes the specified role. The role must not have any policies attached. For
         * more information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <important> <p>Make sure that you do not have any Amazon EC2
         * instances running with the role you are about to delete. Deleting a role or
         * instance profile that is associated with a running instance will break any
         * applications running on the instance.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRole">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM role. </p> <important>
         * <p>Deleting the permissions boundary for a role might increase its permissions.
         * For example, it might allow anyone who assumes the role to perform all the
         * actions granted in its permissions policies. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRolePermissionsBoundaryOutcome DeleteRolePermissionsBoundary(const Model::DeleteRolePermissionsBoundaryRequest& request) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM role. </p> <important>
         * <p>Deleting the permissions boundary for a role might increase its permissions.
         * For example, it might allow anyone who assumes the role to perform all the
         * actions granted in its permissions policies. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRolePermissionsBoundaryOutcomeCallable DeleteRolePermissionsBoundaryCallable(const Model::DeleteRolePermissionsBoundaryRequest& request) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM role. </p> <important>
         * <p>Deleting the permissions boundary for a role might increase its permissions.
         * For example, it might allow anyone who assumes the role to perform all the
         * actions granted in its permissions policies. </p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRolePermissionsBoundaryAsync(const Model::DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * role.</p> <p>A role can also have managed policies attached to it. To detach a
         * managed policy from a role, use <a>DetachRolePolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRolePolicyOutcome DeleteRolePolicy(const Model::DeleteRolePolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * role.</p> <p>A role can also have managed policies attached to it. To detach a
         * managed policy from a role, use <a>DetachRolePolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRolePolicyOutcomeCallable DeleteRolePolicyCallable(const Model::DeleteRolePolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * role.</p> <p>A role can also have managed policies attached to it. To detach a
         * managed policy from a role, use <a>DetachRolePolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSAMLProviderOutcome DeleteSAMLProvider(const Model::DeleteSAMLProviderRequest& request) const;

        /**
         * <p>Deletes a SAML provider resource in IAM.</p> <p>Deleting the provider
         * resource from IAM does not update any roles that reference the SAML provider
         * resource's ARN as a principal in their trust policies. Any attempt to assume a
         * role that references a non-existent provider resource ARN fails.</p> <note> <p>
         * This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSAMLProvider">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSAMLProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSAMLProviderAsync(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by
         * this operation is used only for authenticating the associated IAM user to an AWS
         * CodeCommit repository. For more information about using SSH keys to authenticate
         * to an AWS CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSSHPublicKeyOutcome DeleteSSHPublicKey(const Model::DeleteSSHPublicKeyRequest& request) const;

        /**
         * <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by
         * this operation is used only for authenticating the associated IAM user to an AWS
         * CodeCommit repository. For more information about using SSH keys to authenticate
         * to an AWS CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSSHPublicKeyOutcomeCallable DeleteSSHPublicKeyCallable(const Model::DeleteSSHPublicKeyRequest& request) const;

        /**
         * <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by
         * this operation is used only for authenticating the associated IAM user to an AWS
         * CodeCommit repository. For more information about using SSH keys to authenticate
         * to an AWS CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSSHPublicKeyAsync(const Model::DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified server certificate.</p> <p>For more information about
         * working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p> <important> <p> If you are using a server certificate with
         * Elastic Load Balancing, deleting the certificate could have implications for
         * your application. If Elastic Load Balancing doesn't detect the deletion of bound
         * certificates, it may continue to use the certificates. This could cause Elastic
         * Load Balancing to stop accepting traffic. We recommend that you remove the
         * reference to the certificate from Elastic Load Balancing before using this
         * command to delete the certificate. For more information, go to <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
         * in the <i>Elastic Load Balancing API Reference</i>.</p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerCertificateOutcome DeleteServerCertificate(const Model::DeleteServerCertificateRequest& request) const;

        /**
         * <p>Deletes the specified server certificate.</p> <p>For more information about
         * working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p> <important> <p> If you are using a server certificate with
         * Elastic Load Balancing, deleting the certificate could have implications for
         * your application. If Elastic Load Balancing doesn't detect the deletion of bound
         * certificates, it may continue to use the certificates. This could cause Elastic
         * Load Balancing to stop accepting traffic. We recommend that you remove the
         * reference to the certificate from Elastic Load Balancing before using this
         * command to delete the certificate. For more information, go to <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
         * in the <i>Elastic Load Balancing API Reference</i>.</p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServerCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServerCertificateOutcomeCallable DeleteServerCertificateCallable(const Model::DeleteServerCertificateRequest& request) const;

        /**
         * <p>Deletes the specified server certificate.</p> <p>For more information about
         * working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p> <important> <p> If you are using a server certificate with
         * Elastic Load Balancing, deleting the certificate could have implications for
         * your application. If Elastic Load Balancing doesn't detect the deletion of bound
         * certificates, it may continue to use the certificates. This could cause Elastic
         * Load Balancing to stop accepting traffic. We recommend that you remove the
         * reference to the certificate from Elastic Load Balancing before using this
         * command to delete the certificate. For more information, go to <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
         * in the <i>Elastic Load Balancing API Reference</i>.</p> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServerCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServerCertificateAsync(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits a service-linked role deletion request and returns a
         * <code>DeletionTaskId</code>, which you can use to check the status of the
         * deletion. Before you call this operation, confirm that the role has no active
         * sessions and that any resources used by the role in the linked service are
         * deleted. If you call this operation more than once for the same service-linked
         * role and an earlier deletion task is not complete, then the
         * <code>DeletionTaskId</code> of the earlier request is returned.</p> <p>If you
         * submit a deletion request for a service-linked role whose linked service is
         * still accessing a resource, then the deletion task fails. If it fails, the
         * <a>GetServiceLinkedRoleDeletionStatus</a> API operation returns the reason for
         * the failure, usually including the resources that must be deleted. To delete the
         * service-linked role, you must first remove those resources from the linked
         * service and then submit the deletion request again. Resources are specific to
         * the service that is linked to the role. For more information about removing
         * resources from a service, see the <a href="http://docs.aws.amazon.com/">AWS
         * documentation</a> for your service.</p> <p>For more information about
         * service-linked roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Roles
         * Terms and Concepts: AWS Service-Linked Role</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceLinkedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceLinkedRoleOutcome DeleteServiceLinkedRole(const Model::DeleteServiceLinkedRoleRequest& request) const;

        /**
         * <p>Submits a service-linked role deletion request and returns a
         * <code>DeletionTaskId</code>, which you can use to check the status of the
         * deletion. Before you call this operation, confirm that the role has no active
         * sessions and that any resources used by the role in the linked service are
         * deleted. If you call this operation more than once for the same service-linked
         * role and an earlier deletion task is not complete, then the
         * <code>DeletionTaskId</code> of the earlier request is returned.</p> <p>If you
         * submit a deletion request for a service-linked role whose linked service is
         * still accessing a resource, then the deletion task fails. If it fails, the
         * <a>GetServiceLinkedRoleDeletionStatus</a> API operation returns the reason for
         * the failure, usually including the resources that must be deleted. To delete the
         * service-linked role, you must first remove those resources from the linked
         * service and then submit the deletion request again. Resources are specific to
         * the service that is linked to the role. For more information about removing
         * resources from a service, see the <a href="http://docs.aws.amazon.com/">AWS
         * documentation</a> for your service.</p> <p>For more information about
         * service-linked roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Roles
         * Terms and Concepts: AWS Service-Linked Role</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceLinkedRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceLinkedRoleOutcomeCallable DeleteServiceLinkedRoleCallable(const Model::DeleteServiceLinkedRoleRequest& request) const;

        /**
         * <p>Submits a service-linked role deletion request and returns a
         * <code>DeletionTaskId</code>, which you can use to check the status of the
         * deletion. Before you call this operation, confirm that the role has no active
         * sessions and that any resources used by the role in the linked service are
         * deleted. If you call this operation more than once for the same service-linked
         * role and an earlier deletion task is not complete, then the
         * <code>DeletionTaskId</code> of the earlier request is returned.</p> <p>If you
         * submit a deletion request for a service-linked role whose linked service is
         * still accessing a resource, then the deletion task fails. If it fails, the
         * <a>GetServiceLinkedRoleDeletionStatus</a> API operation returns the reason for
         * the failure, usually including the resources that must be deleted. To delete the
         * service-linked role, you must first remove those resources from the linked
         * service and then submit the deletion request again. Resources are specific to
         * the service that is linked to the role. For more information about removing
         * resources from a service, see the <a href="http://docs.aws.amazon.com/">AWS
         * documentation</a> for your service.</p> <p>For more information about
         * service-linked roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Roles
         * Terms and Concepts: AWS Service-Linked Role</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceLinkedRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceLinkedRoleAsync(const Model::DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified service-specific credential.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceSpecificCredentialOutcome DeleteServiceSpecificCredential(const Model::DeleteServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Deletes the specified service-specific credential.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceSpecificCredentialOutcomeCallable DeleteServiceSpecificCredentialCallable(const Model::DeleteServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Deletes the specified service-specific credential.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceSpecificCredentialAsync(const Model::DeleteServiceSpecificCredentialRequest& request, const DeleteServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a signing certificate associated with the specified IAM user.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. This operation works for
         * access keys under the AWS account. Consequently, you can use this operation to
         * manage AWS account root user credentials even if the AWS account has no
         * associated IAM users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSigningCertificateOutcome DeleteSigningCertificate(const Model::DeleteSigningCertificateRequest& request) const;

        /**
         * <p>Deletes a signing certificate associated with the specified IAM user.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. This operation works for
         * access keys under the AWS account. Consequently, you can use this operation to
         * manage AWS account root user credentials even if the AWS account has no
         * associated IAM users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSigningCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSigningCertificateOutcomeCallable DeleteSigningCertificateCallable(const Model::DeleteSigningCertificateRequest& request) const;

        /**
         * <p>Deletes a signing certificate associated with the specified IAM user.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the AWS access key ID signing the request. This operation works for
         * access keys under the AWS account. Consequently, you can use this operation to
         * manage AWS account root user credentials even if the AWS account has no
         * associated IAM users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSigningCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSigningCertificateAsync(const Model::DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IAM user. Unlike the AWS Management Console, when you
         * delete a user programmatically, you must delete the items attached to the user
         * manually, or the deletion fails. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_deleting_cli">Deleting
         * an IAM User</a>. Before attempting to delete a user, remove the following
         * items:</p> <ul> <li> <p>Password (<a>DeleteLoginProfile</a>)</p> </li> <li>
         * <p>Access keys (<a>DeleteAccessKey</a>)</p> </li> <li> <p>Signing certificate
         * (<a>DeleteSigningCertificate</a>)</p> </li> <li> <p>SSH public key
         * (<a>DeleteSSHPublicKey</a>)</p> </li> <li> <p>Git credentials
         * (<a>DeleteServiceSpecificCredential</a>)</p> </li> <li> <p>Multi-factor
         * authentication (MFA) device (<a>DeactivateMFADevice</a>,
         * <a>DeleteVirtualMFADevice</a>)</p> </li> <li> <p>Inline policies
         * (<a>DeleteUserPolicy</a>)</p> </li> <li> <p>Attached managed policies
         * (<a>DetachUserPolicy</a>)</p> </li> <li> <p>Group memberships
         * (<a>RemoveUserFromGroup</a>)</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the specified IAM user. Unlike the AWS Management Console, when you
         * delete a user programmatically, you must delete the items attached to the user
         * manually, or the deletion fails. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_deleting_cli">Deleting
         * an IAM User</a>. Before attempting to delete a user, remove the following
         * items:</p> <ul> <li> <p>Password (<a>DeleteLoginProfile</a>)</p> </li> <li>
         * <p>Access keys (<a>DeleteAccessKey</a>)</p> </li> <li> <p>Signing certificate
         * (<a>DeleteSigningCertificate</a>)</p> </li> <li> <p>SSH public key
         * (<a>DeleteSSHPublicKey</a>)</p> </li> <li> <p>Git credentials
         * (<a>DeleteServiceSpecificCredential</a>)</p> </li> <li> <p>Multi-factor
         * authentication (MFA) device (<a>DeactivateMFADevice</a>,
         * <a>DeleteVirtualMFADevice</a>)</p> </li> <li> <p>Inline policies
         * (<a>DeleteUserPolicy</a>)</p> </li> <li> <p>Attached managed policies
         * (<a>DetachUserPolicy</a>)</p> </li> <li> <p>Group memberships
         * (<a>RemoveUserFromGroup</a>)</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the specified IAM user. Unlike the AWS Management Console, when you
         * delete a user programmatically, you must delete the items attached to the user
         * manually, or the deletion fails. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_deleting_cli">Deleting
         * an IAM User</a>. Before attempting to delete a user, remove the following
         * items:</p> <ul> <li> <p>Password (<a>DeleteLoginProfile</a>)</p> </li> <li>
         * <p>Access keys (<a>DeleteAccessKey</a>)</p> </li> <li> <p>Signing certificate
         * (<a>DeleteSigningCertificate</a>)</p> </li> <li> <p>SSH public key
         * (<a>DeleteSSHPublicKey</a>)</p> </li> <li> <p>Git credentials
         * (<a>DeleteServiceSpecificCredential</a>)</p> </li> <li> <p>Multi-factor
         * authentication (MFA) device (<a>DeactivateMFADevice</a>,
         * <a>DeleteVirtualMFADevice</a>)</p> </li> <li> <p>Inline policies
         * (<a>DeleteUserPolicy</a>)</p> </li> <li> <p>Attached managed policies
         * (<a>DetachUserPolicy</a>)</p> </li> <li> <p>Group memberships
         * (<a>RemoveUserFromGroup</a>)</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM user.</p> <important>
         * <p>Deleting the permissions boundary for a user might increase its permissions
         * by allowing the user to perform all the actions granted in its permissions
         * policies. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPermissionsBoundaryOutcome DeleteUserPermissionsBoundary(const Model::DeleteUserPermissionsBoundaryRequest& request) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM user.</p> <important>
         * <p>Deleting the permissions boundary for a user might increase its permissions
         * by allowing the user to perform all the actions granted in its permissions
         * policies. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPermissionsBoundaryOutcomeCallable DeleteUserPermissionsBoundaryCallable(const Model::DeleteUserPermissionsBoundaryRequest& request) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM user.</p> <important>
         * <p>Deleting the permissions boundary for a user might increase its permissions
         * by allowing the user to perform all the actions granted in its permissions
         * policies. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPermissionsBoundaryAsync(const Model::DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * user.</p> <p>A user can also have managed policies attached to it. To detach a
         * managed policy from a user, use <a>DetachUserPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPolicyOutcome DeleteUserPolicy(const Model::DeleteUserPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * user.</p> <p>A user can also have managed policies attached to it. To detach a
         * managed policy from a user, use <a>DetachUserPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPolicyOutcomeCallable DeleteUserPolicyCallable(const Model::DeleteUserPolicyRequest& request) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * user.</p> <p>A user can also have managed policies attached to it. To detach a
         * managed policy from a user, use <a>DetachUserPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPolicyAsync(const Model::DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a virtual MFA device.</p> <note> <p> You must deactivate a user's
         * virtual MFA device before you can delete it. For information about deactivating
         * MFA devices, see <a>DeactivateMFADevice</a>. </p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteVirtualMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualMFADeviceOutcome DeleteVirtualMFADevice(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /**
         * <p>Deletes a virtual MFA device.</p> <note> <p> You must deactivate a user's
         * virtual MFA device before you can delete it. For information about deactivating
         * MFA devices, see <a>DeactivateMFADevice</a>. </p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteVirtualMFADevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualMFADeviceOutcomeCallable DeleteVirtualMFADeviceCallable(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /**
         * <p>Deletes a virtual MFA device.</p> <note> <p> You must deactivate a user's
         * virtual MFA device before you can delete it. For information about deactivating
         * MFA devices, see <a>DeactivateMFADevice</a>. </p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteVirtualMFADevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualMFADeviceAsync(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified IAM group.</p> <p>A
         * group can also have inline policies embedded with it. To delete an inline
         * policy, use the <a>DeleteGroupPolicy</a> API. For information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachGroupPolicyOutcome DetachGroupPolicy(const Model::DetachGroupPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified IAM group.</p> <p>A
         * group can also have inline policies embedded with it. To delete an inline
         * policy, use the <a>DeleteGroupPolicy</a> API. For information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachGroupPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachGroupPolicyOutcomeCallable DetachGroupPolicyCallable(const Model::DetachGroupPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified IAM group.</p> <p>A
         * group can also have inline policies embedded with it. To delete an inline
         * policy, use the <a>DeleteGroupPolicy</a> API. For information about policies,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachGroupPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachGroupPolicyAsync(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified role.</p> <p>A role
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteRolePolicy</a> API. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachRolePolicyOutcome DetachRolePolicy(const Model::DetachRolePolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified role.</p> <p>A role
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteRolePolicy</a> API. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachRolePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachRolePolicyOutcomeCallable DetachRolePolicyCallable(const Model::DetachRolePolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified role.</p> <p>A role
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteRolePolicy</a> API. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachRolePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachRolePolicyAsync(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified user.</p> <p>A user
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteUserPolicy</a> API. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified user.</p> <p>A user
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteUserPolicy</a> API. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachUserPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request) const;

        /**
         * <p>Removes the specified managed policy from the specified user.</p> <p>A user
         * can also have inline policies embedded with it. To delete an inline policy, use
         * the <a>DeleteUserPolicy</a> API. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachUserPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified MFA device and associates it with the specified IAM
         * user. When enabled, the MFA device is required for every subsequent login by the
         * IAM user associated with the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/EnableMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMFADeviceOutcome EnableMFADevice(const Model::EnableMFADeviceRequest& request) const;

        /**
         * <p>Enables the specified MFA device and associates it with the specified IAM
         * user. When enabled, the MFA device is required for every subsequent login by the
         * IAM user associated with the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/EnableMFADevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableMFADeviceOutcomeCallable EnableMFADeviceCallable(const Model::EnableMFADeviceRequest& request) const;

        /**
         * <p>Enables the specified MFA device and associates it with the specified IAM
         * user. When enabled, the MFA device is required for every subsequent login by the
         * IAM user associated with the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/EnableMFADevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMFADeviceAsync(const Model::EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Generates a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateCredentialReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateCredentialReportOutcome GenerateCredentialReport(const Model::GenerateCredentialReportRequest& request) const;

        /**
         * <p> Generates a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateCredentialReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateCredentialReportOutcomeCallable GenerateCredentialReportCallable(const Model::GenerateCredentialReportRequest& request) const;

        /**
         * <p> Generates a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateCredentialReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateCredentialReportAsync(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a report for service last accessed data for AWS Organizations. You
         * can generate a report for any entities (organization root, organizational unit,
         * or account) or policies in your organization.</p> <p>To call this operation, you
         * must be signed in using your AWS Organizations master account credentials. You
         * can use your long-term IAM user or root user credentials, or temporary
         * credentials from assuming an IAM role. SCPs must be enabled for your
         * organization root. You must have the required IAM and AWS Organizations
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <p>You can generate a service last accessed data report for
         * entities by specifying only the entity's path. This data includes a list of
         * services that are allowed by any service control policies (SCPs) that apply to
         * the entity.</p> <p>You can generate a service last accessed data report for a
         * policy by specifying an entity's path and an optional AWS Organizations policy
         * ID. This data includes a list of services that are allowed by the specified
         * SCP.</p> <p>For each service in both report types, the data includes the most
         * recent account activity that the policy allows to account principals in the
         * entity or the entity's children. For important information about the data,
         * reporting period, permissions required, troubleshooting, and supported Regions
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <important> <p>The data includes all attempts to access AWS, not
         * just the successful ones. This includes all attempts that were made using the
         * AWS Management Console, the AWS API through any of the SDKs, or any of the
         * command line tools. An unexpected entry in the service last accessed data does
         * not mean that an account has been compromised, because the request might have
         * been denied. Refer to your CloudTrail logs as the authoritative source for
         * information about all API calls and whether they were successful or denied
         * access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM Events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> </important>
         * <p>This operation returns a <code>JobId</code>. Use this parameter in the <code>
         * <a>GetOrganizationsAccessReport</a> </code> operation to check the status of the
         * report generation. To check the status of this request, use the
         * <code>JobId</code> parameter in the <code> <a>GetOrganizationsAccessReport</a>
         * </code> operation and test the <code>JobStatus</code> response parameter. When
         * the job is complete, you can retrieve the report.</p> <p>To generate a service
         * last accessed data report for entities, specify an entity path without
         * specifying the optional AWS Organizations policy ID. The type of entity that you
         * specify determines the data returned in the report.</p> <ul> <li> <p>
         * <b>Root</b> – When you specify the organizations root as the entity, the
         * resulting report lists all of the services allowed by SCPs that are attached to
         * your root. For each service, the report includes data for all accounts in your
         * organization except the master account, because the master account is not
         * limited by SCPs.</p> </li> <li> <p> <b>OU</b> – When you specify an
         * organizational unit (OU) as the entity, the resulting report lists all of the
         * services allowed by SCPs that are attached to the OU and its parents. For each
         * service, the report includes data for all accounts in the OU or its children.
         * This data excludes the master account, because the master account is not limited
         * by SCPs.</p> </li> <li> <p> <b>Master account</b> – When you specify the master
         * account, the resulting report lists all AWS services, because the master account
         * is not limited by SCPs. For each service, the report includes data for only the
         * master account.</p> </li> <li> <p> <b>Account</b> – When you specify another
         * account as the entity, the resulting report lists all of the services allowed by
         * SCPs that are attached to the account and its parents. For each service, the
         * report includes data for only the specified account.</p> </li> </ul> <p>To
         * generate a service last accessed data report for policies, specify an entity
         * path and the optional AWS Organizations policy ID. The type of entity that you
         * specify determines the data returned for each service.</p> <ul> <li> <p>
         * <b>Root</b> – When you specify the root entity and a policy ID, the resulting
         * report lists all of the services that are allowed by the specified SCP. For each
         * service, the report includes data for all accounts in your organization to which
         * the SCP applies. This data excludes the master account, because the master
         * account is not limited by SCPs. If the SCP is not attached to any entities in
         * the organization, then the report will return a list of services with no
         * data.</p> </li> <li> <p> <b>OU</b> – When you specify an OU entity and a policy
         * ID, the resulting report lists all of the services that are allowed by the
         * specified SCP. For each service, the report includes data for all accounts in
         * the OU or its children to which the SCP applies. This means that other accounts
         * outside the OU that are affected by the SCP might not be included in the data.
         * This data excludes the master account, because the master account is not limited
         * by SCPs. If the SCP is not attached to the OU or one of its children, the report
         * will return a list of services with no data.</p> </li> <li> <p> <b>Master
         * account</b> – When you specify the master account, the resulting report lists
         * all AWS services, because the master account is not limited by SCPs. If you
         * specify a policy ID in the CLI or API, the policy is ignored. For each service,
         * the report includes data for only the master account.</p> </li> <li> <p>
         * <b>Account</b> – When you specify another account entity and a policy ID, the
         * resulting report lists all of the services that are allowed by the specified
         * SCP. For each service, the report includes data for only the specified account.
         * This means that other accounts in the organization that are affected by the SCP
         * might not be included in the data. If the SCP is not attached to the account,
         * the report will return a list of services with no data.</p> </li> </ul> <note>
         * <p>Service last accessed data does not use other policy types when determining
         * whether a principal could access a service. These other policy types include
         * identity-based policies, resource-based policies, access control lists, IAM
         * permissions boundaries, and STS assume role policies. It only applies SCP logic.
         * For more about the evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For more information
         * about service last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Policy Scope by Viewing User Activity</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateOrganizationsAccessReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateOrganizationsAccessReportOutcome GenerateOrganizationsAccessReport(const Model::GenerateOrganizationsAccessReportRequest& request) const;

        /**
         * <p>Generates a report for service last accessed data for AWS Organizations. You
         * can generate a report for any entities (organization root, organizational unit,
         * or account) or policies in your organization.</p> <p>To call this operation, you
         * must be signed in using your AWS Organizations master account credentials. You
         * can use your long-term IAM user or root user credentials, or temporary
         * credentials from assuming an IAM role. SCPs must be enabled for your
         * organization root. You must have the required IAM and AWS Organizations
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <p>You can generate a service last accessed data report for
         * entities by specifying only the entity's path. This data includes a list of
         * services that are allowed by any service control policies (SCPs) that apply to
         * the entity.</p> <p>You can generate a service last accessed data report for a
         * policy by specifying an entity's path and an optional AWS Organizations policy
         * ID. This data includes a list of services that are allowed by the specified
         * SCP.</p> <p>For each service in both report types, the data includes the most
         * recent account activity that the policy allows to account principals in the
         * entity or the entity's children. For important information about the data,
         * reporting period, permissions required, troubleshooting, and supported Regions
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <important> <p>The data includes all attempts to access AWS, not
         * just the successful ones. This includes all attempts that were made using the
         * AWS Management Console, the AWS API through any of the SDKs, or any of the
         * command line tools. An unexpected entry in the service last accessed data does
         * not mean that an account has been compromised, because the request might have
         * been denied. Refer to your CloudTrail logs as the authoritative source for
         * information about all API calls and whether they were successful or denied
         * access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM Events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> </important>
         * <p>This operation returns a <code>JobId</code>. Use this parameter in the <code>
         * <a>GetOrganizationsAccessReport</a> </code> operation to check the status of the
         * report generation. To check the status of this request, use the
         * <code>JobId</code> parameter in the <code> <a>GetOrganizationsAccessReport</a>
         * </code> operation and test the <code>JobStatus</code> response parameter. When
         * the job is complete, you can retrieve the report.</p> <p>To generate a service
         * last accessed data report for entities, specify an entity path without
         * specifying the optional AWS Organizations policy ID. The type of entity that you
         * specify determines the data returned in the report.</p> <ul> <li> <p>
         * <b>Root</b> – When you specify the organizations root as the entity, the
         * resulting report lists all of the services allowed by SCPs that are attached to
         * your root. For each service, the report includes data for all accounts in your
         * organization except the master account, because the master account is not
         * limited by SCPs.</p> </li> <li> <p> <b>OU</b> – When you specify an
         * organizational unit (OU) as the entity, the resulting report lists all of the
         * services allowed by SCPs that are attached to the OU and its parents. For each
         * service, the report includes data for all accounts in the OU or its children.
         * This data excludes the master account, because the master account is not limited
         * by SCPs.</p> </li> <li> <p> <b>Master account</b> – When you specify the master
         * account, the resulting report lists all AWS services, because the master account
         * is not limited by SCPs. For each service, the report includes data for only the
         * master account.</p> </li> <li> <p> <b>Account</b> – When you specify another
         * account as the entity, the resulting report lists all of the services allowed by
         * SCPs that are attached to the account and its parents. For each service, the
         * report includes data for only the specified account.</p> </li> </ul> <p>To
         * generate a service last accessed data report for policies, specify an entity
         * path and the optional AWS Organizations policy ID. The type of entity that you
         * specify determines the data returned for each service.</p> <ul> <li> <p>
         * <b>Root</b> – When you specify the root entity and a policy ID, the resulting
         * report lists all of the services that are allowed by the specified SCP. For each
         * service, the report includes data for all accounts in your organization to which
         * the SCP applies. This data excludes the master account, because the master
         * account is not limited by SCPs. If the SCP is not attached to any entities in
         * the organization, then the report will return a list of services with no
         * data.</p> </li> <li> <p> <b>OU</b> – When you specify an OU entity and a policy
         * ID, the resulting report lists all of the services that are allowed by the
         * specified SCP. For each service, the report includes data for all accounts in
         * the OU or its children to which the SCP applies. This means that other accounts
         * outside the OU that are affected by the SCP might not be included in the data.
         * This data excludes the master account, because the master account is not limited
         * by SCPs. If the SCP is not attached to the OU or one of its children, the report
         * will return a list of services with no data.</p> </li> <li> <p> <b>Master
         * account</b> – When you specify the master account, the resulting report lists
         * all AWS services, because the master account is not limited by SCPs. If you
         * specify a policy ID in the CLI or API, the policy is ignored. For each service,
         * the report includes data for only the master account.</p> </li> <li> <p>
         * <b>Account</b> – When you specify another account entity and a policy ID, the
         * resulting report lists all of the services that are allowed by the specified
         * SCP. For each service, the report includes data for only the specified account.
         * This means that other accounts in the organization that are affected by the SCP
         * might not be included in the data. If the SCP is not attached to the account,
         * the report will return a list of services with no data.</p> </li> </ul> <note>
         * <p>Service last accessed data does not use other policy types when determining
         * whether a principal could access a service. These other policy types include
         * identity-based policies, resource-based policies, access control lists, IAM
         * permissions boundaries, and STS assume role policies. It only applies SCP logic.
         * For more about the evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For more information
         * about service last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Policy Scope by Viewing User Activity</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateOrganizationsAccessReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateOrganizationsAccessReportOutcomeCallable GenerateOrganizationsAccessReportCallable(const Model::GenerateOrganizationsAccessReportRequest& request) const;

        /**
         * <p>Generates a report for service last accessed data for AWS Organizations. You
         * can generate a report for any entities (organization root, organizational unit,
         * or account) or policies in your organization.</p> <p>To call this operation, you
         * must be signed in using your AWS Organizations master account credentials. You
         * can use your long-term IAM user or root user credentials, or temporary
         * credentials from assuming an IAM role. SCPs must be enabled for your
         * organization root. You must have the required IAM and AWS Organizations
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <p>You can generate a service last accessed data report for
         * entities by specifying only the entity's path. This data includes a list of
         * services that are allowed by any service control policies (SCPs) that apply to
         * the entity.</p> <p>You can generate a service last accessed data report for a
         * policy by specifying an entity's path and an optional AWS Organizations policy
         * ID. This data includes a list of services that are allowed by the specified
         * SCP.</p> <p>For each service in both report types, the data includes the most
         * recent account activity that the policy allows to account principals in the
         * entity or the entity's children. For important information about the data,
         * reporting period, permissions required, troubleshooting, and supported Regions
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <important> <p>The data includes all attempts to access AWS, not
         * just the successful ones. This includes all attempts that were made using the
         * AWS Management Console, the AWS API through any of the SDKs, or any of the
         * command line tools. An unexpected entry in the service last accessed data does
         * not mean that an account has been compromised, because the request might have
         * been denied. Refer to your CloudTrail logs as the authoritative source for
         * information about all API calls and whether they were successful or denied
         * access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM Events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> </important>
         * <p>This operation returns a <code>JobId</code>. Use this parameter in the <code>
         * <a>GetOrganizationsAccessReport</a> </code> operation to check the status of the
         * report generation. To check the status of this request, use the
         * <code>JobId</code> parameter in the <code> <a>GetOrganizationsAccessReport</a>
         * </code> operation and test the <code>JobStatus</code> response parameter. When
         * the job is complete, you can retrieve the report.</p> <p>To generate a service
         * last accessed data report for entities, specify an entity path without
         * specifying the optional AWS Organizations policy ID. The type of entity that you
         * specify determines the data returned in the report.</p> <ul> <li> <p>
         * <b>Root</b> – When you specify the organizations root as the entity, the
         * resulting report lists all of the services allowed by SCPs that are attached to
         * your root. For each service, the report includes data for all accounts in your
         * organization except the master account, because the master account is not
         * limited by SCPs.</p> </li> <li> <p> <b>OU</b> – When you specify an
         * organizational unit (OU) as the entity, the resulting report lists all of the
         * services allowed by SCPs that are attached to the OU and its parents. For each
         * service, the report includes data for all accounts in the OU or its children.
         * This data excludes the master account, because the master account is not limited
         * by SCPs.</p> </li> <li> <p> <b>Master account</b> – When you specify the master
         * account, the resulting report lists all AWS services, because the master account
         * is not limited by SCPs. For each service, the report includes data for only the
         * master account.</p> </li> <li> <p> <b>Account</b> – When you specify another
         * account as the entity, the resulting report lists all of the services allowed by
         * SCPs that are attached to the account and its parents. For each service, the
         * report includes data for only the specified account.</p> </li> </ul> <p>To
         * generate a service last accessed data report for policies, specify an entity
         * path and the optional AWS Organizations policy ID. The type of entity that you
         * specify determines the data returned for each service.</p> <ul> <li> <p>
         * <b>Root</b> – When you specify the root entity and a policy ID, the resulting
         * report lists all of the services that are allowed by the specified SCP. For each
         * service, the report includes data for all accounts in your organization to which
         * the SCP applies. This data excludes the master account, because the master
         * account is not limited by SCPs. If the SCP is not attached to any entities in
         * the organization, then the report will return a list of services with no
         * data.</p> </li> <li> <p> <b>OU</b> – When you specify an OU entity and a policy
         * ID, the resulting report lists all of the services that are allowed by the
         * specified SCP. For each service, the report includes data for all accounts in
         * the OU or its children to which the SCP applies. This means that other accounts
         * outside the OU that are affected by the SCP might not be included in the data.
         * This data excludes the master account, because the master account is not limited
         * by SCPs. If the SCP is not attached to the OU or one of its children, the report
         * will return a list of services with no data.</p> </li> <li> <p> <b>Master
         * account</b> – When you specify the master account, the resulting report lists
         * all AWS services, because the master account is not limited by SCPs. If you
         * specify a policy ID in the CLI or API, the policy is ignored. For each service,
         * the report includes data for only the master account.</p> </li> <li> <p>
         * <b>Account</b> – When you specify another account entity and a policy ID, the
         * resulting report lists all of the services that are allowed by the specified
         * SCP. For each service, the report includes data for only the specified account.
         * This means that other accounts in the organization that are affected by the SCP
         * might not be included in the data. If the SCP is not attached to the account,
         * the report will return a list of services with no data.</p> </li> </ul> <note>
         * <p>Service last accessed data does not use other policy types when determining
         * whether a principal could access a service. These other policy types include
         * identity-based policies, resource-based policies, access control lists, IAM
         * permissions boundaries, and STS assume role policies. It only applies SCP logic.
         * For more about the evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For more information
         * about service last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Policy Scope by Viewing User Activity</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateOrganizationsAccessReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateOrganizationsAccessReportAsync(const Model::GenerateOrganizationsAccessReportRequest& request, const GenerateOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a report that includes details about when an IAM resource (user,
         * group, role, or policy) was last used in an attempt to access AWS services.
         * Recent activity usually appears within four hours. IAM reports activity for the
         * last 365 days, or less if your Region began supporting this feature within the
         * last year. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
         * Where Data Is Tracked</a>.</p> <important> <p>The service last accessed data
         * includes all attempts to access an AWS API, not just the successful ones. This
         * includes all attempts that were made using the AWS Management Console, the AWS
         * API through any of the SDKs, or any of the command line tools. An unexpected
         * entry in the service last accessed data does not mean that your account has been
         * compromised, because the request might have been denied. Refer to your
         * CloudTrail logs as the authoritative source for information about all API calls
         * and whether they were successful or denied access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM Events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> </important>
         * <p>The <code>GenerateServiceLastAccessedDetails</code> operation returns a
         * <code>JobId</code>. Use this parameter in the following operations to retrieve
         * the following details from your report: </p> <ul> <li> <p>
         * <a>GetServiceLastAccessedDetails</a> – Use this operation for users, groups,
         * roles, or policies to list every AWS service that the resource could access
         * using permissions policies. For each service, the response includes information
         * about the most recent access attempt. </p> </li> <li> <p>
         * <a>GetServiceLastAccessedDetailsWithEntities</a> – Use this operation for groups
         * and policies to list information about the associated entities (users or roles)
         * that attempted to access a specific AWS service. </p> </li> </ul> <p>To check
         * the status of the <code>GenerateServiceLastAccessedDetails</code> request, use
         * the <code>JobId</code> parameter in the same operations and test the
         * <code>JobStatus</code> response parameter.</p> <p>For additional information
         * about the permissions policies that allow an identity (user, group, or role) to
         * access specific services, use the <a>ListPoliciesGrantingServiceAccess</a>
         * operation.</p> <note> <p>Service last accessed data does not use other policy
         * types when determining whether a resource could access a service. These other
         * policy types include resource-based policies, access control lists, AWS
         * Organizations policies, IAM permissions boundaries, and AWS STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For more information
         * about service last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Policy Scope by Viewing User Activity</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateServiceLastAccessedDetailsOutcome GenerateServiceLastAccessedDetails(const Model::GenerateServiceLastAccessedDetailsRequest& request) const;

        /**
         * <p>Generates a report that includes details about when an IAM resource (user,
         * group, role, or policy) was last used in an attempt to access AWS services.
         * Recent activity usually appears within four hours. IAM reports activity for the
         * last 365 days, or less if your Region began supporting this feature within the
         * last year. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
         * Where Data Is Tracked</a>.</p> <important> <p>The service last accessed data
         * includes all attempts to access an AWS API, not just the successful ones. This
         * includes all attempts that were made using the AWS Management Console, the AWS
         * API through any of the SDKs, or any of the command line tools. An unexpected
         * entry in the service last accessed data does not mean that your account has been
         * compromised, because the request might have been denied. Refer to your
         * CloudTrail logs as the authoritative source for information about all API calls
         * and whether they were successful or denied access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM Events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> </important>
         * <p>The <code>GenerateServiceLastAccessedDetails</code> operation returns a
         * <code>JobId</code>. Use this parameter in the following operations to retrieve
         * the following details from your report: </p> <ul> <li> <p>
         * <a>GetServiceLastAccessedDetails</a> – Use this operation for users, groups,
         * roles, or policies to list every AWS service that the resource could access
         * using permissions policies. For each service, the response includes information
         * about the most recent access attempt. </p> </li> <li> <p>
         * <a>GetServiceLastAccessedDetailsWithEntities</a> – Use this operation for groups
         * and policies to list information about the associated entities (users or roles)
         * that attempted to access a specific AWS service. </p> </li> </ul> <p>To check
         * the status of the <code>GenerateServiceLastAccessedDetails</code> request, use
         * the <code>JobId</code> parameter in the same operations and test the
         * <code>JobStatus</code> response parameter.</p> <p>For additional information
         * about the permissions policies that allow an identity (user, group, or role) to
         * access specific services, use the <a>ListPoliciesGrantingServiceAccess</a>
         * operation.</p> <note> <p>Service last accessed data does not use other policy
         * types when determining whether a resource could access a service. These other
         * policy types include resource-based policies, access control lists, AWS
         * Organizations policies, IAM permissions boundaries, and AWS STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For more information
         * about service last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Policy Scope by Viewing User Activity</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateServiceLastAccessedDetailsOutcomeCallable GenerateServiceLastAccessedDetailsCallable(const Model::GenerateServiceLastAccessedDetailsRequest& request) const;

        /**
         * <p>Generates a report that includes details about when an IAM resource (user,
         * group, role, or policy) was last used in an attempt to access AWS services.
         * Recent activity usually appears within four hours. IAM reports activity for the
         * last 365 days, or less if your Region began supporting this feature within the
         * last year. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
         * Where Data Is Tracked</a>.</p> <important> <p>The service last accessed data
         * includes all attempts to access an AWS API, not just the successful ones. This
         * includes all attempts that were made using the AWS Management Console, the AWS
         * API through any of the SDKs, or any of the command line tools. An unexpected
         * entry in the service last accessed data does not mean that your account has been
         * compromised, because the request might have been denied. Refer to your
         * CloudTrail logs as the authoritative source for information about all API calls
         * and whether they were successful or denied access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM Events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> </important>
         * <p>The <code>GenerateServiceLastAccessedDetails</code> operation returns a
         * <code>JobId</code>. Use this parameter in the following operations to retrieve
         * the following details from your report: </p> <ul> <li> <p>
         * <a>GetServiceLastAccessedDetails</a> – Use this operation for users, groups,
         * roles, or policies to list every AWS service that the resource could access
         * using permissions policies. For each service, the response includes information
         * about the most recent access attempt. </p> </li> <li> <p>
         * <a>GetServiceLastAccessedDetailsWithEntities</a> – Use this operation for groups
         * and policies to list information about the associated entities (users or roles)
         * that attempted to access a specific AWS service. </p> </li> </ul> <p>To check
         * the status of the <code>GenerateServiceLastAccessedDetails</code> request, use
         * the <code>JobId</code> parameter in the same operations and test the
         * <code>JobStatus</code> response parameter.</p> <p>For additional information
         * about the permissions policies that allow an identity (user, group, or role) to
         * access specific services, use the <a>ListPoliciesGrantingServiceAccess</a>
         * operation.</p> <note> <p>Service last accessed data does not use other policy
         * types when determining whether a resource could access a service. These other
         * policy types include resource-based policies, access control lists, AWS
         * Organizations policies, IAM permissions boundaries, and AWS STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For more information
         * about service last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * Policy Scope by Viewing User Activity</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateServiceLastAccessedDetailsAsync(const Model::GenerateServiceLastAccessedDetailsRequest& request, const GenerateServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about when the specified access key was last used. The
         * information includes the date and time of last use, along with the AWS service
         * and Region that were specified in the last request made with that
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccessKeyLastUsed">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessKeyLastUsedOutcome GetAccessKeyLastUsed(const Model::GetAccessKeyLastUsedRequest& request) const;

        /**
         * <p>Retrieves information about when the specified access key was last used. The
         * information includes the date and time of last use, along with the AWS service
         * and Region that were specified in the last request made with that
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccessKeyLastUsed">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessKeyLastUsedOutcomeCallable GetAccessKeyLastUsedCallable(const Model::GetAccessKeyLastUsedRequest& request) const;

        /**
         * <p>Retrieves information about when the specified access key was last used. The
         * information includes the date and time of last use, along with the AWS service
         * and Region that were specified in the last request made with that
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccessKeyLastUsed">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessKeyLastUsedAsync(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all IAM users, groups, roles, and policies in
         * your AWS account, including their relationships to one another. Use this API to
         * obtain a snapshot of the configuration of IAM permissions (users, groups, roles,
         * and policies) in your account.</p> <note> <p>Policies returned by this API are
         * URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
         * 3986</a>. You can use a URL decoding method to convert the policy back to plain
         * JSON text. For example, if you use Java, you can use the <code>decode</code>
         * method of the <code>java.net.URLDecoder</code> utility class in the Java SDK.
         * Other languages and SDKs provide similar functionality.</p> </note> <p>You can
         * optionally filter the results using the <code>Filter</code> parameter. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountAuthorizationDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountAuthorizationDetailsOutcome GetAccountAuthorizationDetails(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /**
         * <p>Retrieves information about all IAM users, groups, roles, and policies in
         * your AWS account, including their relationships to one another. Use this API to
         * obtain a snapshot of the configuration of IAM permissions (users, groups, roles,
         * and policies) in your account.</p> <note> <p>Policies returned by this API are
         * URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
         * 3986</a>. You can use a URL decoding method to convert the policy back to plain
         * JSON text. For example, if you use Java, you can use the <code>decode</code>
         * method of the <code>java.net.URLDecoder</code> utility class in the Java SDK.
         * Other languages and SDKs provide similar functionality.</p> </note> <p>You can
         * optionally filter the results using the <code>Filter</code> parameter. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountAuthorizationDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountAuthorizationDetailsOutcomeCallable GetAccountAuthorizationDetailsCallable(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /**
         * <p>Retrieves information about all IAM users, groups, roles, and policies in
         * your AWS account, including their relationships to one another. Use this API to
         * obtain a snapshot of the configuration of IAM permissions (users, groups, roles,
         * and policies) in your account.</p> <note> <p>Policies returned by this API are
         * URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
         * 3986</a>. You can use a URL decoding method to convert the policy back to plain
         * JSON text. For example, if you use Java, you can use the <code>decode</code>
         * method of the <code>java.net.URLDecoder</code> utility class in the Java SDK.
         * Other languages and SDKs provide similar functionality.</p> </note> <p>You can
         * optionally filter the results using the <code>Filter</code> parameter. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountAuthorizationDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAuthorizationDetailsAsync(const Model::GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the password policy for the AWS account. For more information about
         * using a password policy, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountPasswordPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountPasswordPolicyOutcome GetAccountPasswordPolicy(const Model::GetAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Retrieves the password policy for the AWS account. For more information about
         * using a password policy, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountPasswordPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountPasswordPolicyOutcomeCallable GetAccountPasswordPolicyCallable(const Model::GetAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Retrieves the password policy for the AWS account. For more information about
         * using a password policy, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountPasswordPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountPasswordPolicyAsync(const Model::GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about IAM entity usage and IAM quotas in the AWS
         * account.</p> <p> For information about limitations on IAM entities, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSummaryOutcome GetAccountSummary(const Model::GetAccountSummaryRequest& request) const;

        /**
         * <p>Retrieves information about IAM entity usage and IAM quotas in the AWS
         * account.</p> <p> For information about limitations on IAM entities, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSummaryOutcomeCallable GetAccountSummaryCallable(const Model::GetAccountSummaryRequest& request) const;

        /**
         * <p>Retrieves information about IAM entity usage and IAM quotas in the AWS
         * account.</p> <p> For information about limitations on IAM entities, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountSummary">AWS
         * API Reference</a></p>
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
         * API query request. Context keys can be evaluated by testing against a value
         * specified in an IAM policy. Use <code>GetContextKeysForCustomPolicy</code> to
         * understand what key names and values you must supply when you call
         * <a>SimulateCustomPolicy</a>. Note that all parameters are shown in unencoded
         * form here for clarity but must be URL encoded to be included as a part of a real
         * HTML request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForCustomPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContextKeysForCustomPolicyOutcome GetContextKeysForCustomPolicy(const Model::GetContextKeysForCustomPolicyRequest& request) const;

        /**
         * <p>Gets a list of all of the context keys referenced in the input policies. The
         * policies are supplied as a list of one or more strings. To get the context keys
         * from policies associated with an IAM user, group, or role, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request. Context keys can be evaluated by testing against a value
         * specified in an IAM policy. Use <code>GetContextKeysForCustomPolicy</code> to
         * understand what key names and values you must supply when you call
         * <a>SimulateCustomPolicy</a>. Note that all parameters are shown in unencoded
         * form here for clarity but must be URL encoded to be included as a part of a real
         * HTML request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForCustomPolicy">AWS
         * API Reference</a></p>
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
         * API query request. Context keys can be evaluated by testing against a value
         * specified in an IAM policy. Use <code>GetContextKeysForCustomPolicy</code> to
         * understand what key names and values you must supply when you call
         * <a>SimulateCustomPolicy</a>. Note that all parameters are shown in unencoded
         * form here for clarity but must be URL encoded to be included as a part of a real
         * HTML request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForCustomPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContextKeysForCustomPolicyAsync(const Model::GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all of the context keys referenced in all the IAM policies
         * that are attached to the specified IAM entity. The entity can be an IAM user,
         * group, or role. If you specify a user, then the request also includes all of the
         * policies attached to groups that the user is a member of.</p> <p>You can
         * optionally include a list of one or more additional policies, specified as
         * strings. If you want to include <i>only</i> a list of policies by string, use
         * <a>GetContextKeysForCustomPolicy</a> instead.</p> <p> <b>Note:</b> This API
         * discloses information about the permissions granted to other users. If you do
         * not want users to see other user's permissions, then consider allowing them to
         * use <a>GetContextKeysForCustomPolicy</a> instead.</p> <p>Context keys are
         * variables maintained by AWS and its services that provide details about the
         * context of an API query request. Context keys can be evaluated by testing
         * against a value in an IAM policy. Use <a>GetContextKeysForPrincipalPolicy</a> to
         * understand what key names and values you must supply when you call
         * <a>SimulatePrincipalPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForPrincipalPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContextKeysForPrincipalPolicyOutcome GetContextKeysForPrincipalPolicy(const Model::GetContextKeysForPrincipalPolicyRequest& request) const;

        /**
         * <p>Gets a list of all of the context keys referenced in all the IAM policies
         * that are attached to the specified IAM entity. The entity can be an IAM user,
         * group, or role. If you specify a user, then the request also includes all of the
         * policies attached to groups that the user is a member of.</p> <p>You can
         * optionally include a list of one or more additional policies, specified as
         * strings. If you want to include <i>only</i> a list of policies by string, use
         * <a>GetContextKeysForCustomPolicy</a> instead.</p> <p> <b>Note:</b> This API
         * discloses information about the permissions granted to other users. If you do
         * not want users to see other user's permissions, then consider allowing them to
         * use <a>GetContextKeysForCustomPolicy</a> instead.</p> <p>Context keys are
         * variables maintained by AWS and its services that provide details about the
         * context of an API query request. Context keys can be evaluated by testing
         * against a value in an IAM policy. Use <a>GetContextKeysForPrincipalPolicy</a> to
         * understand what key names and values you must supply when you call
         * <a>SimulatePrincipalPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForPrincipalPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContextKeysForPrincipalPolicyOutcomeCallable GetContextKeysForPrincipalPolicyCallable(const Model::GetContextKeysForPrincipalPolicyRequest& request) const;

        /**
         * <p>Gets a list of all of the context keys referenced in all the IAM policies
         * that are attached to the specified IAM entity. The entity can be an IAM user,
         * group, or role. If you specify a user, then the request also includes all of the
         * policies attached to groups that the user is a member of.</p> <p>You can
         * optionally include a list of one or more additional policies, specified as
         * strings. If you want to include <i>only</i> a list of policies by string, use
         * <a>GetContextKeysForCustomPolicy</a> instead.</p> <p> <b>Note:</b> This API
         * discloses information about the permissions granted to other users. If you do
         * not want users to see other user's permissions, then consider allowing them to
         * use <a>GetContextKeysForCustomPolicy</a> instead.</p> <p>Context keys are
         * variables maintained by AWS and its services that provide details about the
         * context of an API query request. Context keys can be evaluated by testing
         * against a value in an IAM policy. Use <a>GetContextKeysForPrincipalPolicy</a> to
         * understand what key names and values you must supply when you call
         * <a>SimulatePrincipalPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForPrincipalPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContextKeysForPrincipalPolicyAsync(const Model::GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetCredentialReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialReportOutcome GetCredentialReport(const Model::GetCredentialReportRequest& request) const;

        /**
         * <p> Retrieves a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetCredentialReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCredentialReportOutcomeCallable GetCredentialReportCallable(const Model::GetCredentialReportRequest& request) const;

        /**
         * <p> Retrieves a credential report for the AWS account. For more information
         * about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * Credential Reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetCredentialReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCredentialReportAsync(const Model::GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of IAM users that are in the specified IAM group. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * <p> Returns a list of IAM users that are in the specified IAM group. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroup">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * <p> Returns a list of IAM users that are in the specified IAM group. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroup">AWS API
         * Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroupPolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroupPolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroupPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupPolicyAsync(const Model::GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves information about the specified instance profile, including the
         * instance profile's path, GUID, ARN, and role. For more information about
         * instance profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceProfileOutcome GetInstanceProfile(const Model::GetInstanceProfileRequest& request) const;

        /**
         * <p> Retrieves information about the specified instance profile, including the
         * instance profile's path, GUID, ARN, and role. For more information about
         * instance profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceProfileOutcomeCallable GetInstanceProfileCallable(const Model::GetInstanceProfileRequest& request) const;

        /**
         * <p> Retrieves information about the specified instance profile, including the
         * instance profile's path, GUID, ARN, and role. For more information about
         * instance profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceProfileAsync(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the user name and password-creation date for the specified IAM
         * user. If the user has not been assigned a password, the operation returns a 404
         * (<code>NoSuchEntity</code>) error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoginProfileOutcome GetLoginProfile(const Model::GetLoginProfileRequest& request) const;

        /**
         * <p>Retrieves the user name and password-creation date for the specified IAM
         * user. If the user has not been assigned a password, the operation returns a 404
         * (<code>NoSuchEntity</code>) error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetLoginProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoginProfileOutcomeCallable GetLoginProfileCallable(const Model::GetLoginProfileRequest& request) const;

        /**
         * <p>Retrieves the user name and password-creation date for the specified IAM
         * user. If the user has not been assigned a password, the operation returns a 404
         * (<code>NoSuchEntity</code>) error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetLoginProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoginProfileAsync(const Model::GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified OpenID Connect (OIDC) provider
         * resource object in IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpenIDConnectProviderOutcome GetOpenIDConnectProvider(const Model::GetOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Returns information about the specified OpenID Connect (OIDC) provider
         * resource object in IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpenIDConnectProviderOutcomeCallable GetOpenIDConnectProviderCallable(const Model::GetOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Returns information about the specified OpenID Connect (OIDC) provider
         * resource object in IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpenIDConnectProviderAsync(const Model::GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the service last accessed data report for AWS Organizations that
         * was previously generated using the <code>
         * <a>GenerateOrganizationsAccessReport</a> </code> operation. This operation
         * retrieves the status of your report job and the report contents.</p>
         * <p>Depending on the parameters that you passed when you generated the report,
         * the data returned could include different information. For details, see
         * <a>GenerateOrganizationsAccessReport</a>.</p> <p>To call this operation, you
         * must be signed in to the master account in your organization. SCPs must be
         * enabled for your organization root. You must have permissions to perform this
         * operation. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <p>For each service that principals in an account (root users,
         * IAM users, or IAM roles) could access using SCPs, the operation returns details
         * about the most recent access attempt. If there was no attempt, the service is
         * listed without details about the most recent attempt to access the service. If
         * the operation fails, it returns the reason that it failed.</p> <p>By default,
         * the list is sorted by service namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOrganizationsAccessReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationsAccessReportOutcome GetOrganizationsAccessReport(const Model::GetOrganizationsAccessReportRequest& request) const;

        /**
         * <p>Retrieves the service last accessed data report for AWS Organizations that
         * was previously generated using the <code>
         * <a>GenerateOrganizationsAccessReport</a> </code> operation. This operation
         * retrieves the status of your report job and the report contents.</p>
         * <p>Depending on the parameters that you passed when you generated the report,
         * the data returned could include different information. For details, see
         * <a>GenerateOrganizationsAccessReport</a>.</p> <p>To call this operation, you
         * must be signed in to the master account in your organization. SCPs must be
         * enabled for your organization root. You must have permissions to perform this
         * operation. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <p>For each service that principals in an account (root users,
         * IAM users, or IAM roles) could access using SCPs, the operation returns details
         * about the most recent access attempt. If there was no attempt, the service is
         * listed without details about the most recent attempt to access the service. If
         * the operation fails, it returns the reason that it failed.</p> <p>By default,
         * the list is sorted by service namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOrganizationsAccessReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOrganizationsAccessReportOutcomeCallable GetOrganizationsAccessReportCallable(const Model::GetOrganizationsAccessReportRequest& request) const;

        /**
         * <p>Retrieves the service last accessed data report for AWS Organizations that
         * was previously generated using the <code>
         * <a>GenerateOrganizationsAccessReport</a> </code> operation. This operation
         * retrieves the status of your report job and the report contents.</p>
         * <p>Depending on the parameters that you passed when you generated the report,
         * the data returned could include different information. For details, see
         * <a>GenerateOrganizationsAccessReport</a>.</p> <p>To call this operation, you
         * must be signed in to the master account in your organization. SCPs must be
         * enabled for your organization root. You must have permissions to perform this
         * operation. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * Permissions Using Service Last Accessed Data</a> in the <i>IAM User
         * Guide</i>.</p> <p>For each service that principals in an account (root users,
         * IAM users, or IAM roles) could access using SCPs, the operation returns details
         * about the most recent access attempt. If there was no attempt, the service is
         * listed without details about the most recent attempt to access the service. If
         * the operation fails, it returns the reason that it failed.</p> <p>By default,
         * the list is sorted by service namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOrganizationsAccessReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOrganizationsAccessReportAsync(const Model::GetOrganizationsAccessReportRequest& request, const GetOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicy">AWS API
         * Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicy">AWS API
         * Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicy">AWS API
         * Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policy versions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicyVersion">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policy versions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicyVersion">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policy versions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for Managed Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified role, including the role's path,
         * GUID, ARN, and the role's trust policy that grants permission to assume the
         * role. For more information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRole">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRoleOutcome GetRole(const Model::GetRoleRequest& request) const;

        /**
         * <p>Retrieves information about the specified role, including the role's path,
         * GUID, ARN, and the role's trust policy that grants permission to assume the
         * role. For more information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRole">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoleOutcomeCallable GetRoleCallable(const Model::GetRoleRequest& request) const;

        /**
         * <p>Retrieves information about the specified role, including the role's path,
         * GUID, ARN, and the role's trust policy that grants permission to assume the
         * role. For more information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <note> <p>Policies returned by this API are URL-encoded
         * compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You
         * can use a URL decoding method to convert the policy back to plain JSON text. For
         * example, if you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRole">AWS API
         * Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRolePolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRolePolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRolePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRolePolicyAsync(const Model::GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the SAML provider metadocument that was uploaded when the IAM SAML
         * provider resource object was created or updated.</p> <note> <p>This operation
         * requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSAMLProviderOutcome GetSAMLProvider(const Model::GetSAMLProviderRequest& request) const;

        /**
         * <p>Returns the SAML provider metadocument that was uploaded when the IAM SAML
         * provider resource object was created or updated.</p> <note> <p>This operation
         * requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSAMLProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSAMLProviderOutcomeCallable GetSAMLProviderCallable(const Model::GetSAMLProviderRequest& request) const;

        /**
         * <p>Returns the SAML provider metadocument that was uploaded when the IAM SAML
         * provider resource object was created or updated.</p> <note> <p>This operation
         * requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSAMLProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSAMLProviderAsync(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified SSH public key, including metadata about the key.</p>
         * <p>The SSH public key retrieved by this operation is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSSHPublicKeyOutcome GetSSHPublicKey(const Model::GetSSHPublicKeyRequest& request) const;

        /**
         * <p>Retrieves the specified SSH public key, including metadata about the key.</p>
         * <p>The SSH public key retrieved by this operation is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSSHPublicKeyOutcomeCallable GetSSHPublicKeyCallable(const Model::GetSSHPublicKeyRequest& request) const;

        /**
         * <p>Retrieves the specified SSH public key, including metadata about the key.</p>
         * <p>The SSH public key retrieved by this operation is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSSHPublicKeyAsync(const Model::GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified server certificate stored in
         * IAM.</p> <p>For more information about working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of AWS services that can use the server certificates that you manage with
         * IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerCertificateOutcome GetServerCertificate(const Model::GetServerCertificateRequest& request) const;

        /**
         * <p>Retrieves information about the specified server certificate stored in
         * IAM.</p> <p>For more information about working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of AWS services that can use the server certificates that you manage with
         * IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServerCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServerCertificateOutcomeCallable GetServerCertificateCallable(const Model::GetServerCertificateRequest& request) const;

        /**
         * <p>Retrieves information about the specified server certificate stored in
         * IAM.</p> <p>For more information about working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of AWS services that can use the server certificates that you manage with
         * IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServerCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServerCertificateAsync(const Model::GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a service last accessed report that was created using the
         * <code>GenerateServiceLastAccessedDetails</code> operation. You can use the
         * <code>JobId</code> parameter in <code>GetServiceLastAccessedDetails</code> to
         * retrieve the status of your report job. When the report is complete, you can
         * retrieve the generated report. The report includes a list of AWS services that
         * the resource (user, group, role, or managed policy) can access.</p> <note>
         * <p>Service last accessed data does not use other policy types when determining
         * whether a resource could access a service. These other policy types include
         * resource-based policies, access control lists, AWS Organizations policies, IAM
         * permissions boundaries, and AWS STS assume role policies. It only applies
         * permissions policy logic. For more about the evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For each service that
         * the resource could access using permissions policies, the operation returns
         * details about the most recent access attempt. If there was no attempt, the
         * service is listed without details about the most recent attempt to access the
         * service. If the operation fails, the <code>GetServiceLastAccessedDetails</code>
         * operation returns the reason that it failed.</p> <p>The
         * <code>GetServiceLastAccessedDetails</code> operation returns a list of services.
         * This list includes the number of entities that have attempted to access the
         * service and the date and time of the last attempt. It also returns the ARN of
         * the following entity, depending on the resource ARN that you used to generate
         * the report:</p> <ul> <li> <p> <b>User</b> – Returns the user ARN that you used
         * to generate the report</p> </li> <li> <p> <b>Group</b> – Returns the ARN of the
         * group member (user) that last attempted to access the service</p> </li> <li> <p>
         * <b>Role</b> – Returns the role ARN that you used to generate the report</p>
         * </li> <li> <p> <b>Policy</b> – Returns the ARN of the user or role that last
         * used the policy to attempt to access the service</p> </li> </ul> <p>By default,
         * the list is sorted by service namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceLastAccessedDetailsOutcome GetServiceLastAccessedDetails(const Model::GetServiceLastAccessedDetailsRequest& request) const;

        /**
         * <p>Retrieves a service last accessed report that was created using the
         * <code>GenerateServiceLastAccessedDetails</code> operation. You can use the
         * <code>JobId</code> parameter in <code>GetServiceLastAccessedDetails</code> to
         * retrieve the status of your report job. When the report is complete, you can
         * retrieve the generated report. The report includes a list of AWS services that
         * the resource (user, group, role, or managed policy) can access.</p> <note>
         * <p>Service last accessed data does not use other policy types when determining
         * whether a resource could access a service. These other policy types include
         * resource-based policies, access control lists, AWS Organizations policies, IAM
         * permissions boundaries, and AWS STS assume role policies. It only applies
         * permissions policy logic. For more about the evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For each service that
         * the resource could access using permissions policies, the operation returns
         * details about the most recent access attempt. If there was no attempt, the
         * service is listed without details about the most recent attempt to access the
         * service. If the operation fails, the <code>GetServiceLastAccessedDetails</code>
         * operation returns the reason that it failed.</p> <p>The
         * <code>GetServiceLastAccessedDetails</code> operation returns a list of services.
         * This list includes the number of entities that have attempted to access the
         * service and the date and time of the last attempt. It also returns the ARN of
         * the following entity, depending on the resource ARN that you used to generate
         * the report:</p> <ul> <li> <p> <b>User</b> – Returns the user ARN that you used
         * to generate the report</p> </li> <li> <p> <b>Group</b> – Returns the ARN of the
         * group member (user) that last attempted to access the service</p> </li> <li> <p>
         * <b>Role</b> – Returns the role ARN that you used to generate the report</p>
         * </li> <li> <p> <b>Policy</b> – Returns the ARN of the user or role that last
         * used the policy to attempt to access the service</p> </li> </ul> <p>By default,
         * the list is sorted by service namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceLastAccessedDetailsOutcomeCallable GetServiceLastAccessedDetailsCallable(const Model::GetServiceLastAccessedDetailsRequest& request) const;

        /**
         * <p>Retrieves a service last accessed report that was created using the
         * <code>GenerateServiceLastAccessedDetails</code> operation. You can use the
         * <code>JobId</code> parameter in <code>GetServiceLastAccessedDetails</code> to
         * retrieve the status of your report job. When the report is complete, you can
         * retrieve the generated report. The report includes a list of AWS services that
         * the resource (user, group, role, or managed policy) can access.</p> <note>
         * <p>Service last accessed data does not use other policy types when determining
         * whether a resource could access a service. These other policy types include
         * resource-based policies, access control lists, AWS Organizations policies, IAM
         * permissions boundaries, and AWS STS assume role policies. It only applies
         * permissions policy logic. For more about the evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>For each service that
         * the resource could access using permissions policies, the operation returns
         * details about the most recent access attempt. If there was no attempt, the
         * service is listed without details about the most recent attempt to access the
         * service. If the operation fails, the <code>GetServiceLastAccessedDetails</code>
         * operation returns the reason that it failed.</p> <p>The
         * <code>GetServiceLastAccessedDetails</code> operation returns a list of services.
         * This list includes the number of entities that have attempted to access the
         * service and the date and time of the last attempt. It also returns the ARN of
         * the following entity, depending on the resource ARN that you used to generate
         * the report:</p> <ul> <li> <p> <b>User</b> – Returns the user ARN that you used
         * to generate the report</p> </li> <li> <p> <b>Group</b> – Returns the ARN of the
         * group member (user) that last attempted to access the service</p> </li> <li> <p>
         * <b>Role</b> – Returns the role ARN that you used to generate the report</p>
         * </li> <li> <p> <b>Policy</b> – Returns the ARN of the user or role that last
         * used the policy to attempt to access the service</p> </li> </ul> <p>By default,
         * the list is sorted by service namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceLastAccessedDetailsAsync(const Model::GetServiceLastAccessedDetailsRequest& request, const GetServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>After you generate a group or policy report using the
         * <code>GenerateServiceLastAccessedDetails</code> operation, you can use the
         * <code>JobId</code> parameter in
         * <code>GetServiceLastAccessedDetailsWithEntities</code>. This operation retrieves
         * the status of your report job and a list of entities that could have used group
         * or policy permissions to access the specified service.</p> <ul> <li> <p>
         * <b>Group</b> – For a group report, this operation returns a list of users in the
         * group that could have used the group’s policies in an attempt to access the
         * service.</p> </li> <li> <p> <b>Policy</b> – For a policy report, this operation
         * returns a list of entities (users or roles) that could have used the policy in
         * an attempt to access the service.</p> </li> </ul> <p>You can also use this
         * operation for user or role reports to retrieve details about those entities.</p>
         * <p>If the operation fails, the
         * <code>GetServiceLastAccessedDetailsWithEntities</code> operation returns the
         * reason that it failed.</p> <p>By default, the list of associated entities is
         * sorted by date, with the most recent access listed first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetailsWithEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceLastAccessedDetailsWithEntitiesOutcome GetServiceLastAccessedDetailsWithEntities(const Model::GetServiceLastAccessedDetailsWithEntitiesRequest& request) const;

        /**
         * <p>After you generate a group or policy report using the
         * <code>GenerateServiceLastAccessedDetails</code> operation, you can use the
         * <code>JobId</code> parameter in
         * <code>GetServiceLastAccessedDetailsWithEntities</code>. This operation retrieves
         * the status of your report job and a list of entities that could have used group
         * or policy permissions to access the specified service.</p> <ul> <li> <p>
         * <b>Group</b> – For a group report, this operation returns a list of users in the
         * group that could have used the group’s policies in an attempt to access the
         * service.</p> </li> <li> <p> <b>Policy</b> – For a policy report, this operation
         * returns a list of entities (users or roles) that could have used the policy in
         * an attempt to access the service.</p> </li> </ul> <p>You can also use this
         * operation for user or role reports to retrieve details about those entities.</p>
         * <p>If the operation fails, the
         * <code>GetServiceLastAccessedDetailsWithEntities</code> operation returns the
         * reason that it failed.</p> <p>By default, the list of associated entities is
         * sorted by date, with the most recent access listed first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetailsWithEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceLastAccessedDetailsWithEntitiesOutcomeCallable GetServiceLastAccessedDetailsWithEntitiesCallable(const Model::GetServiceLastAccessedDetailsWithEntitiesRequest& request) const;

        /**
         * <p>After you generate a group or policy report using the
         * <code>GenerateServiceLastAccessedDetails</code> operation, you can use the
         * <code>JobId</code> parameter in
         * <code>GetServiceLastAccessedDetailsWithEntities</code>. This operation retrieves
         * the status of your report job and a list of entities that could have used group
         * or policy permissions to access the specified service.</p> <ul> <li> <p>
         * <b>Group</b> – For a group report, this operation returns a list of users in the
         * group that could have used the group’s policies in an attempt to access the
         * service.</p> </li> <li> <p> <b>Policy</b> – For a policy report, this operation
         * returns a list of entities (users or roles) that could have used the policy in
         * an attempt to access the service.</p> </li> </ul> <p>You can also use this
         * operation for user or role reports to retrieve details about those entities.</p>
         * <p>If the operation fails, the
         * <code>GetServiceLastAccessedDetailsWithEntities</code> operation returns the
         * reason that it failed.</p> <p>By default, the list of associated entities is
         * sorted by date, with the most recent access listed first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetailsWithEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceLastAccessedDetailsWithEntitiesAsync(const Model::GetServiceLastAccessedDetailsWithEntitiesRequest& request, const GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status of your service-linked role deletion. After you use the
         * <a>DeleteServiceLinkedRole</a> API operation to submit a service-linked role for
         * deletion, you can use the <code>DeletionTaskId</code> parameter in
         * <code>GetServiceLinkedRoleDeletionStatus</code> to check the status of the
         * deletion. If the deletion fails, this operation returns the reason that it
         * failed, if that information is returned by the service.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLinkedRoleDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceLinkedRoleDeletionStatusOutcome GetServiceLinkedRoleDeletionStatus(const Model::GetServiceLinkedRoleDeletionStatusRequest& request) const;

        /**
         * <p>Retrieves the status of your service-linked role deletion. After you use the
         * <a>DeleteServiceLinkedRole</a> API operation to submit a service-linked role for
         * deletion, you can use the <code>DeletionTaskId</code> parameter in
         * <code>GetServiceLinkedRoleDeletionStatus</code> to check the status of the
         * deletion. If the deletion fails, this operation returns the reason that it
         * failed, if that information is returned by the service.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLinkedRoleDeletionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceLinkedRoleDeletionStatusOutcomeCallable GetServiceLinkedRoleDeletionStatusCallable(const Model::GetServiceLinkedRoleDeletionStatusRequest& request) const;

        /**
         * <p>Retrieves the status of your service-linked role deletion. After you use the
         * <a>DeleteServiceLinkedRole</a> API operation to submit a service-linked role for
         * deletion, you can use the <code>DeletionTaskId</code> parameter in
         * <code>GetServiceLinkedRoleDeletionStatus</code> to check the status of the
         * deletion. If the deletion fails, this operation returns the reason that it
         * failed, if that information is returned by the service.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLinkedRoleDeletionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceLinkedRoleDeletionStatusAsync(const Model::GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified IAM user, including the user's
         * creation date, path, unique ID, and ARN.</p> <p>If you do not specify a user
         * name, IAM determines the user name implicitly based on the AWS access key ID
         * used to sign the request to this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUser">AWS API
         * Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves information about the specified IAM user, including the user's
         * creation date, path, unique ID, and ARN.</p> <p>If you do not specify a user
         * name, IAM determines the user name implicitly based on the AWS access key ID
         * used to sign the request to this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves information about the specified IAM user, including the user's
         * creation date, path, unique ID, and ARN.</p> <p>If you do not specify a user
         * name, IAM determines the user name implicitly based on the AWS access key ID
         * used to sign the request to this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUser">AWS API
         * Reference</a></p>
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
         * version. Then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUserPolicy">AWS
         * API Reference</a></p>
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
         * version. Then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUserPolicy">AWS
         * API Reference</a></p>
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
         * version. Then use <a>GetPolicyVersion</a> to retrieve the policy document.</p>
         * <p>For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUserPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserPolicyAsync(const Model::GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the access key IDs associated with the specified
         * IAM user. If there is none, the operation returns an empty list.</p> <p>Although
         * each user is limited to a small number of keys, you can still paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         * <p>If the <code>UserName</code> field is not specified, the user name is
         * determined implicitly based on the AWS access key ID used to sign the request.
         * This operation works for access keys under the AWS account. Consequently, you
         * can use this operation to manage AWS account root user credentials even if the
         * AWS account has no associated users.</p> <note> <p>To ensure the security of
         * your AWS account, the secret access key is accessible only during key and user
         * creation.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccessKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessKeysOutcome ListAccessKeys(const Model::ListAccessKeysRequest& request) const;

        /**
         * <p>Returns information about the access key IDs associated with the specified
         * IAM user. If there is none, the operation returns an empty list.</p> <p>Although
         * each user is limited to a small number of keys, you can still paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         * <p>If the <code>UserName</code> field is not specified, the user name is
         * determined implicitly based on the AWS access key ID used to sign the request.
         * This operation works for access keys under the AWS account. Consequently, you
         * can use this operation to manage AWS account root user credentials even if the
         * AWS account has no associated users.</p> <note> <p>To ensure the security of
         * your AWS account, the secret access key is accessible only during key and user
         * creation.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccessKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessKeysOutcomeCallable ListAccessKeysCallable(const Model::ListAccessKeysRequest& request) const;

        /**
         * <p>Returns information about the access key IDs associated with the specified
         * IAM user. If there is none, the operation returns an empty list.</p> <p>Although
         * each user is limited to a small number of keys, you can still paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         * <p>If the <code>UserName</code> field is not specified, the user name is
         * determined implicitly based on the AWS access key ID used to sign the request.
         * This operation works for access keys under the AWS account. Consequently, you
         * can use this operation to manage AWS account root user credentials even if the
         * AWS account has no associated users.</p> <note> <p>To ensure the security of
         * your AWS account, the secret access key is accessible only during key and user
         * creation.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccessKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the account alias associated with the AWS account (Note: you can have
         * only one). For information about using an AWS account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccountAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAliasesOutcome ListAccountAliases(const Model::ListAccountAliasesRequest& request) const;

        /**
         * <p>Lists the account alias associated with the AWS account (Note: you can have
         * only one). For information about using an AWS account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccountAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAliasesOutcomeCallable ListAccountAliasesCallable(const Model::ListAccountAliasesRequest& request) const;

        /**
         * <p>Lists the account alias associated with the AWS account (Note: you can have
         * only one). For information about using an AWS account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an Alias for Your AWS Account ID</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccountAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAliasesAsync(const Model::ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM group.</p>
         * <p>An IAM group can also have inline policies embedded with it. To list the
         * inline policies for a group, use the <a>ListGroupPolicies</a> API. For
         * information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedGroupPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedGroupPoliciesOutcome ListAttachedGroupPolicies(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM group.</p>
         * <p>An IAM group can also have inline policies embedded with it. To list the
         * inline policies for a group, use the <a>ListGroupPolicies</a> API. For
         * information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedGroupPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedGroupPoliciesOutcomeCallable ListAttachedGroupPoliciesCallable(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM group.</p>
         * <p>An IAM group can also have inline policies embedded with it. To list the
         * inline policies for a group, use the <a>ListGroupPolicies</a> API. For
         * information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedGroupPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedGroupPoliciesAsync(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM role.</p>
         * <p>An IAM role can also have inline policies embedded with it. To list the
         * inline policies for a role, use the <a>ListRolePolicies</a> API. For information
         * about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified role (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedRolePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedRolePoliciesOutcome ListAttachedRolePolicies(const Model::ListAttachedRolePoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM role.</p>
         * <p>An IAM role can also have inline policies embedded with it. To list the
         * inline policies for a role, use the <a>ListRolePolicies</a> API. For information
         * about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified role (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedRolePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedRolePoliciesOutcomeCallable ListAttachedRolePoliciesCallable(const Model::ListAttachedRolePoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM role.</p>
         * <p>An IAM role can also have inline policies embedded with it. To list the
         * inline policies for a role, use the <a>ListRolePolicies</a> API. For information
         * about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified role (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedRolePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedRolePoliciesAsync(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM user.</p>
         * <p>An IAM user can also have inline policies embedded with it. To list the
         * inline policies for a user, use the <a>ListUserPolicies</a> API. For information
         * about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedUserPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedUserPoliciesOutcome ListAttachedUserPolicies(const Model::ListAttachedUserPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM user.</p>
         * <p>An IAM user can also have inline policies embedded with it. To list the
         * inline policies for a user, use the <a>ListUserPolicies</a> API. For information
         * about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedUserPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedUserPoliciesOutcomeCallable ListAttachedUserPoliciesCallable(const Model::ListAttachedUserPoliciesRequest& request) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM user.</p>
         * <p>An IAM user can also have inline policies embedded with it. To list the
         * inline policies for a user, use the <a>ListUserPolicies</a> API. For information
         * about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedUserPolicies">AWS
         * API Reference</a></p>
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
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListEntitiesForPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesForPolicyOutcome ListEntitiesForPolicy(const Model::ListEntitiesForPolicyRequest& request) const;

        /**
         * <p>Lists all IAM users, groups, and roles that the specified managed policy is
         * attached to.</p> <p>You can use the optional <code>EntityFilter</code> parameter
         * to limit the results to a particular type of entity (users, groups, or roles).
         * For example, to list only the roles that are attached to the specified policy,
         * set <code>EntityFilter</code> to <code>Role</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListEntitiesForPolicy">AWS
         * API Reference</a></p>
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
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListEntitiesForPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesForPolicyAsync(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * group.</p> <p>An IAM group can also have managed policies attached to it. To
         * list the managed policies that are attached to a group, use
         * <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified group,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupPoliciesOutcome ListGroupPolicies(const Model::ListGroupPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * group.</p> <p>An IAM group can also have managed policies attached to it. To
         * list the managed policies that are attached to a group, use
         * <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified group,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupPoliciesOutcomeCallable ListGroupPoliciesCallable(const Model::ListGroupPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * group.</p> <p>An IAM group can also have managed policies attached to it. To
         * list the managed policies that are attached to a group, use
         * <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified group,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupPoliciesAsync(const Model::ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM groups that have the specified path prefix.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroups">AWS API
         * Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists the IAM groups that have the specified path prefix.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroups">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists the IAM groups that have the specified path prefix.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroups">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM groups that the specified IAM user belongs to.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsForUserOutcome ListGroupsForUser(const Model::ListGroupsForUserRequest& request) const;

        /**
         * <p>Lists the IAM groups that the specified IAM user belongs to.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupsForUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsForUserOutcomeCallable ListGroupsForUserCallable(const Model::ListGroupsForUserRequest& request) const;

        /**
         * <p>Lists the IAM groups that the specified IAM user belongs to.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupsForUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance profiles that have the specified path prefix. If there are
         * none, the operation returns an empty list. For more information about instance
         * profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfilesOutcome ListInstanceProfiles(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified path prefix. If there are
         * none, the operation returns an empty list. For more information about instance
         * profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfilesOutcomeCallable ListInstanceProfilesCallable(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified path prefix. If there are
         * none, the operation returns an empty list. For more information about instance
         * profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesAsync(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance profiles that have the specified associated IAM role. If
         * there are none, the operation returns an empty list. For more information about
         * instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfilesForRole">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfilesForRoleOutcome ListInstanceProfilesForRole(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified associated IAM role. If
         * there are none, the operation returns an empty list. For more information about
         * instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfilesForRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfilesForRoleOutcomeCallable ListInstanceProfilesForRoleCallable(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /**
         * <p>Lists the instance profiles that have the specified associated IAM role. If
         * there are none, the operation returns an empty list. For more information about
         * instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfilesForRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesForRoleAsync(const Model::ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the MFA devices for an IAM user. If the request includes a IAM user
         * name, then this operation lists all the MFA devices associated with the
         * specified user. If you do not specify a user name, IAM determines the user name
         * implicitly based on the AWS access key ID signing the request for this API.</p>
         * <p>You can paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListMFADevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMFADevicesOutcome ListMFADevices(const Model::ListMFADevicesRequest& request) const;

        /**
         * <p>Lists the MFA devices for an IAM user. If the request includes a IAM user
         * name, then this operation lists all the MFA devices associated with the
         * specified user. If you do not specify a user name, IAM determines the user name
         * implicitly based on the AWS access key ID signing the request for this API.</p>
         * <p>You can paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListMFADevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMFADevicesOutcomeCallable ListMFADevicesCallable(const Model::ListMFADevicesRequest& request) const;

        /**
         * <p>Lists the MFA devices for an IAM user. If the request includes a IAM user
         * name, then this operation lists all the MFA devices associated with the
         * specified user. If you do not specify a user name, IAM determines the user name
         * implicitly based on the AWS access key ID signing the request for this API.</p>
         * <p>You can paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListMFADevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMFADevicesAsync(const Model::ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the IAM OpenID Connect (OIDC) provider resource
         * objects defined in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListOpenIDConnectProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpenIDConnectProvidersOutcome ListOpenIDConnectProviders(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /**
         * <p>Lists information about the IAM OpenID Connect (OIDC) provider resource
         * objects defined in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListOpenIDConnectProviders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpenIDConnectProvidersOutcomeCallable ListOpenIDConnectProvidersCallable(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /**
         * <p>Lists information about the IAM OpenID Connect (OIDC) provider resource
         * objects defined in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListOpenIDConnectProviders">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicies">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicies">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of policies that the IAM identity (user, group, or role) can
         * use to access each specified service.</p> <note> <p>This operation does not use
         * other policy types when determining whether a resource could access a service.
         * These other policy types include resource-based policies, access control lists,
         * AWS Organizations policies, IAM permissions boundaries, and AWS STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>The list of policies
         * returned by the operation depends on the ARN of the identity that you
         * provide.</p> <ul> <li> <p> <b>User</b> – The list of policies includes the
         * managed and inline policies that are attached to the user directly. The list
         * also includes any additional managed and inline policies that are attached to
         * the group to which the user belongs. </p> </li> <li> <p> <b>Group</b> – The list
         * of policies includes only the managed and inline policies that are attached to
         * the group directly. Policies that are attached to the group’s user are not
         * included.</p> </li> <li> <p> <b>Role</b> – The list of policies includes only
         * the managed and inline policies that are attached to the role.</p> </li> </ul>
         * <p>For each managed policy, this operation returns the ARN and policy name. For
         * each inline policy, it returns the policy name and the entity to which it is
         * attached. Inline policies do not have an ARN. For more information about these
         * policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>Policies
         * that are attached to users and roles as permissions boundaries are not returned.
         * To view which managed policy is currently used to set the permissions boundary
         * for a user or role, use the <a>GetUser</a> or <a>GetRole</a>
         * operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPoliciesGrantingServiceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesGrantingServiceAccessOutcome ListPoliciesGrantingServiceAccess(const Model::ListPoliciesGrantingServiceAccessRequest& request) const;

        /**
         * <p>Retrieves a list of policies that the IAM identity (user, group, or role) can
         * use to access each specified service.</p> <note> <p>This operation does not use
         * other policy types when determining whether a resource could access a service.
         * These other policy types include resource-based policies, access control lists,
         * AWS Organizations policies, IAM permissions boundaries, and AWS STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>The list of policies
         * returned by the operation depends on the ARN of the identity that you
         * provide.</p> <ul> <li> <p> <b>User</b> – The list of policies includes the
         * managed and inline policies that are attached to the user directly. The list
         * also includes any additional managed and inline policies that are attached to
         * the group to which the user belongs. </p> </li> <li> <p> <b>Group</b> – The list
         * of policies includes only the managed and inline policies that are attached to
         * the group directly. Policies that are attached to the group’s user are not
         * included.</p> </li> <li> <p> <b>Role</b> – The list of policies includes only
         * the managed and inline policies that are attached to the role.</p> </li> </ul>
         * <p>For each managed policy, this operation returns the ARN and policy name. For
         * each inline policy, it returns the policy name and the entity to which it is
         * attached. Inline policies do not have an ARN. For more information about these
         * policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>Policies
         * that are attached to users and roles as permissions boundaries are not returned.
         * To view which managed policy is currently used to set the permissions boundary
         * for a user or role, use the <a>GetUser</a> or <a>GetRole</a>
         * operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPoliciesGrantingServiceAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesGrantingServiceAccessOutcomeCallable ListPoliciesGrantingServiceAccessCallable(const Model::ListPoliciesGrantingServiceAccessRequest& request) const;

        /**
         * <p>Retrieves a list of policies that the IAM identity (user, group, or role) can
         * use to access each specified service.</p> <note> <p>This operation does not use
         * other policy types when determining whether a resource could access a service.
         * These other policy types include resource-based policies, access control lists,
         * AWS Organizations policies, IAM permissions boundaries, and AWS STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * Policies</a> in the <i>IAM User Guide</i>.</p> </note> <p>The list of policies
         * returned by the operation depends on the ARN of the identity that you
         * provide.</p> <ul> <li> <p> <b>User</b> – The list of policies includes the
         * managed and inline policies that are attached to the user directly. The list
         * also includes any additional managed and inline policies that are attached to
         * the group to which the user belongs. </p> </li> <li> <p> <b>Group</b> – The list
         * of policies includes only the managed and inline policies that are attached to
         * the group directly. Policies that are attached to the group’s user are not
         * included.</p> </li> <li> <p> <b>Role</b> – The list of policies includes only
         * the managed and inline policies that are attached to the role.</p> </li> </ul>
         * <p>For each managed policy, this operation returns the ARN and policy name. For
         * each inline policy, it returns the policy name and the entity to which it is
         * attached. Inline policies do not have an ARN. For more information about these
         * policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>Policies
         * that are attached to users and roles as permissions boundaries are not returned.
         * To view which managed policy is currently used to set the permissions boundary
         * for a user or role, use the <a>GetUser</a> or <a>GetRole</a>
         * operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPoliciesGrantingServiceAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesGrantingServiceAccessAsync(const Model::ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the versions of the specified managed policy,
         * including the version that is currently set as the policy's default version.</p>
         * <p>For more information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists information about the versions of the specified managed policy,
         * including the version that is currently set as the policy's default version.</p>
         * <p>For more information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicyVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists information about the versions of the specified managed policy,
         * including the version that is currently set as the policy's default version.</p>
         * <p>For more information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicyVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * role.</p> <p>An IAM role can also have managed policies attached to it. To list
         * the managed policies that are attached to a role, use
         * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified role,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRolePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRolePoliciesOutcome ListRolePolicies(const Model::ListRolePoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * role.</p> <p>An IAM role can also have managed policies attached to it. To list
         * the managed policies that are attached to a role, use
         * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified role,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRolePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRolePoliciesOutcomeCallable ListRolePoliciesCallable(const Model::ListRolePoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * role.</p> <p>An IAM role can also have managed policies attached to it. To list
         * the managed policies that are attached to a role, use
         * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified role,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRolePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRolePoliciesAsync(const Model::ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified role. The returned list of
         * tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoleTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoleTagsOutcome ListRoleTags(const Model::ListRoleTagsRequest& request) const;

        /**
         * <p>Lists the tags that are attached to the specified role. The returned list of
         * tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoleTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoleTagsOutcomeCallable ListRoleTagsCallable(const Model::ListRoleTagsRequest& request) const;

        /**
         * <p>Lists the tags that are attached to the specified role. The returned list of
         * tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoleTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoleTagsAsync(const Model::ListRoleTagsRequest& request, const ListRoleTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM roles that have the specified path prefix. If there are none,
         * the operation returns an empty list. For more information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoles">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRolesOutcome ListRoles(const Model::ListRolesRequest& request) const;

        /**
         * <p>Lists the IAM roles that have the specified path prefix. If there are none,
         * the operation returns an empty list. For more information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoles">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRolesOutcomeCallable ListRolesCallable(const Model::ListRolesRequest& request) const;

        /**
         * <p>Lists the IAM roles that have the specified path prefix. If there are none,
         * the operation returns an empty list. For more information about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoles">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRolesAsync(const Model::ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SAML provider resource objects defined in IAM in the account.</p>
         * <note> <p> This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSAMLProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSAMLProvidersOutcome ListSAMLProviders(const Model::ListSAMLProvidersRequest& request) const;

        /**
         * <p>Lists the SAML provider resource objects defined in IAM in the account.</p>
         * <note> <p> This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSAMLProviders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSAMLProvidersOutcomeCallable ListSAMLProvidersCallable(const Model::ListSAMLProvidersRequest& request) const;

        /**
         * <p>Lists the SAML provider resource objects defined in IAM in the account.</p>
         * <note> <p> This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSAMLProviders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSAMLProvidersAsync(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the SSH public keys associated with the specified
         * IAM user. If none exists, the operation returns an empty list.</p> <p>The SSH
         * public keys returned by this operation are used only for authenticating the IAM
         * user to an AWS CodeCommit repository. For more information about using SSH keys
         * to authenticate to an AWS CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p> <p>Although each user is limited to a small number of keys, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSSHPublicKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSSHPublicKeysOutcome ListSSHPublicKeys(const Model::ListSSHPublicKeysRequest& request) const;

        /**
         * <p>Returns information about the SSH public keys associated with the specified
         * IAM user. If none exists, the operation returns an empty list.</p> <p>The SSH
         * public keys returned by this operation are used only for authenticating the IAM
         * user to an AWS CodeCommit repository. For more information about using SSH keys
         * to authenticate to an AWS CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p> <p>Although each user is limited to a small number of keys, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSSHPublicKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSSHPublicKeysOutcomeCallable ListSSHPublicKeysCallable(const Model::ListSSHPublicKeysRequest& request) const;

        /**
         * <p>Returns information about the SSH public keys associated with the specified
         * IAM user. If none exists, the operation returns an empty list.</p> <p>The SSH
         * public keys returned by this operation are used only for authenticating the IAM
         * user to an AWS CodeCommit repository. For more information about using SSH keys
         * to authenticate to an AWS CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p> <p>Although each user is limited to a small number of keys, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSSHPublicKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSSHPublicKeysAsync(const Model::ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the server certificates stored in IAM that have the specified path
         * prefix. If none exist, the operation returns an empty list.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p> <p>For more information about working with server certificates,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServerCertificatesOutcome ListServerCertificates(const Model::ListServerCertificatesRequest& request) const;

        /**
         * <p>Lists the server certificates stored in IAM that have the specified path
         * prefix. If none exist, the operation returns an empty list.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p> <p>For more information about working with server certificates,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServerCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServerCertificatesOutcomeCallable ListServerCertificatesCallable(const Model::ListServerCertificatesRequest& request) const;

        /**
         * <p>Lists the server certificates stored in IAM that have the specified path
         * prefix. If none exist, the operation returns an empty list.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p> <p>For more information about working with server certificates,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServerCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServerCertificatesAsync(const Model::ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the service-specific credentials associated with
         * the specified IAM user. If none exists, the operation returns an empty list. The
         * service-specific credentials returned by this operation are used only for
         * authenticating the IAM user to a specific service. For more information about
         * using service-specific credentials to authenticate to an AWS service, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-gc.html">Set
         * Up service-specific credentials</a> in the AWS CodeCommit User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServiceSpecificCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceSpecificCredentialsOutcome ListServiceSpecificCredentials(const Model::ListServiceSpecificCredentialsRequest& request) const;

        /**
         * <p>Returns information about the service-specific credentials associated with
         * the specified IAM user. If none exists, the operation returns an empty list. The
         * service-specific credentials returned by this operation are used only for
         * authenticating the IAM user to a specific service. For more information about
         * using service-specific credentials to authenticate to an AWS service, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-gc.html">Set
         * Up service-specific credentials</a> in the AWS CodeCommit User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServiceSpecificCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceSpecificCredentialsOutcomeCallable ListServiceSpecificCredentialsCallable(const Model::ListServiceSpecificCredentialsRequest& request) const;

        /**
         * <p>Returns information about the service-specific credentials associated with
         * the specified IAM user. If none exists, the operation returns an empty list. The
         * service-specific credentials returned by this operation are used only for
         * authenticating the IAM user to a specific service. For more information about
         * using service-specific credentials to authenticate to an AWS service, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-gc.html">Set
         * Up service-specific credentials</a> in the AWS CodeCommit User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServiceSpecificCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceSpecificCredentialsAsync(const Model::ListServiceSpecificCredentialsRequest& request, const ListServiceSpecificCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the signing certificates associated with the
         * specified IAM user. If none exists, the operation returns an empty list.</p>
         * <p>Although each user is limited to a small number of signing certificates, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p> <p>If the <code>UserName</code> field is not
         * specified, the user name is determined implicitly based on the AWS access key ID
         * used to sign the request for this API. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSigningCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningCertificatesOutcome ListSigningCertificates(const Model::ListSigningCertificatesRequest& request) const;

        /**
         * <p>Returns information about the signing certificates associated with the
         * specified IAM user. If none exists, the operation returns an empty list.</p>
         * <p>Although each user is limited to a small number of signing certificates, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p> <p>If the <code>UserName</code> field is not
         * specified, the user name is determined implicitly based on the AWS access key ID
         * used to sign the request for this API. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSigningCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSigningCertificatesOutcomeCallable ListSigningCertificatesCallable(const Model::ListSigningCertificatesRequest& request) const;

        /**
         * <p>Returns information about the signing certificates associated with the
         * specified IAM user. If none exists, the operation returns an empty list.</p>
         * <p>Although each user is limited to a small number of signing certificates, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p> <p>If the <code>UserName</code> field is not
         * specified, the user name is determined implicitly based on the AWS access key ID
         * used to sign the request for this API. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSigningCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSigningCertificatesAsync(const Model::ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies embedded in the specified IAM
         * user.</p> <p>An IAM user can also have managed policies attached to it. To list
         * the managed policies that are attached to a user, use
         * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified user,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserPoliciesOutcome ListUserPolicies(const Model::ListUserPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies embedded in the specified IAM
         * user.</p> <p>An IAM user can also have managed policies attached to it. To list
         * the managed policies that are attached to a user, use
         * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified user,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoliciesOutcomeCallable ListUserPoliciesCallable(const Model::ListUserPoliciesRequest& request) const;

        /**
         * <p>Lists the names of the inline policies embedded in the specified IAM
         * user.</p> <p>An IAM user can also have managed policies attached to it. To list
         * the managed policies that are attached to a user, use
         * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified user,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoliciesAsync(const Model::ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified user. The returned list of
         * tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserTagsOutcome ListUserTags(const Model::ListUserTagsRequest& request) const;

        /**
         * <p>Lists the tags that are attached to the specified user. The returned list of
         * tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserTagsOutcomeCallable ListUserTagsCallable(const Model::ListUserTagsRequest& request) const;

        /**
         * <p>Lists the tags that are attached to the specified user. The returned list of
         * tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserTagsAsync(const Model::ListUserTagsRequest& request, const ListUserTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM users that have the specified path prefix. If no path prefix is
         * specified, the operation returns all users in the AWS account. If there are
         * none, the operation returns an empty list.</p> <p>You can paginate the results
         * using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the IAM users that have the specified path prefix. If no path prefix is
         * specified, the operation returns all users in the AWS account. If there are
         * none, the operation returns an empty list.</p> <p>You can paginate the results
         * using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUsers">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the IAM users that have the specified path prefix. If no path prefix is
         * specified, the operation returns all users in the AWS account. If there are
         * none, the operation returns an empty list.</p> <p>You can paginate the results
         * using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUsers">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the virtual MFA devices defined in the AWS account by assignment
         * status. If you do not specify an assignment status, the operation returns a list
         * of all virtual MFA devices. Assignment status can be <code>Assigned</code>,
         * <code>Unassigned</code>, or <code>Any</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListVirtualMFADevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualMFADevicesOutcome ListVirtualMFADevices(const Model::ListVirtualMFADevicesRequest& request) const;

        /**
         * <p>Lists the virtual MFA devices defined in the AWS account by assignment
         * status. If you do not specify an assignment status, the operation returns a list
         * of all virtual MFA devices. Assignment status can be <code>Assigned</code>,
         * <code>Unassigned</code>, or <code>Any</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListVirtualMFADevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualMFADevicesOutcomeCallable ListVirtualMFADevicesCallable(const Model::ListVirtualMFADevicesRequest& request) const;

        /**
         * <p>Lists the virtual MFA devices defined in the AWS account by assignment
         * status. If you do not specify an assignment status, the operation returns a list
         * of all virtual MFA devices. Assignment status can be <code>Assigned</code>,
         * <code>Unassigned</code>, or <code>Any</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListVirtualMFADevices">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a group, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutGroupPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGroupPolicyOutcome PutGroupPolicy(const Model::PutGroupPolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM group.</p> <p>A user can also have managed policies attached to it. To
         * attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a
         * new managed policy, use <a>CreatePolicy</a>. For information about policies, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a group, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutGroupPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutGroupPolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a group, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutGroupPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutGroupPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutGroupPolicyAsync(const Model::PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM role's permissions
         * boundary. You can use an AWS managed policy or a customer managed policy to set
         * the boundary for a role. Use the boundary to control the maximum permissions
         * that the role can have. Setting a permissions boundary is an advanced feature
         * that can affect the permissions for the role.</p> <p>You cannot set the boundary
         * for a service-linked role. </p> <important> <p>Policies used as permissions
         * boundaries do not provide permissions. You must also attach a permissions policy
         * to the role. To learn how the effective permissions for a role are evaluated,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON Policy Evaluation Logic</a> in the IAM User Guide. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRolePermissionsBoundaryOutcome PutRolePermissionsBoundary(const Model::PutRolePermissionsBoundaryRequest& request) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM role's permissions
         * boundary. You can use an AWS managed policy or a customer managed policy to set
         * the boundary for a role. Use the boundary to control the maximum permissions
         * that the role can have. Setting a permissions boundary is an advanced feature
         * that can affect the permissions for the role.</p> <p>You cannot set the boundary
         * for a service-linked role. </p> <important> <p>Policies used as permissions
         * boundaries do not provide permissions. You must also attach a permissions policy
         * to the role. To learn how the effective permissions for a role are evaluated,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON Policy Evaluation Logic</a> in the IAM User Guide. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRolePermissionsBoundaryOutcomeCallable PutRolePermissionsBoundaryCallable(const Model::PutRolePermissionsBoundaryRequest& request) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM role's permissions
         * boundary. You can use an AWS managed policy or a customer managed policy to set
         * the boundary for a role. Use the boundary to control the maximum permissions
         * that the role can have. Setting a permissions boundary is an advanced feature
         * that can affect the permissions for the role.</p> <p>You cannot set the boundary
         * for a service-linked role. </p> <important> <p>Policies used as permissions
         * boundaries do not provide permissions. You must also attach a permissions policy
         * to the role. To learn how the effective permissions for a role are evaluated,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON Policy Evaluation Logic</a> in the IAM User Guide. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRolePermissionsBoundaryAsync(const Model::PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM role.</p> <p>When you embed an inline policy in a role, the inline policy is
         * used as part of the role's access (permissions) policy. The role's trust policy
         * is created at the same time as the role, using <a>CreateRole</a>. You can update
         * a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information
         * about IAM roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p> <p>A role can
         * also have a managed policy attached to it. To attach a managed policy to a role,
         * use <a>AttachRolePolicy</a>. To create a new managed policy, use
         * <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed
         * with a role, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutRolePolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRolePolicyOutcome PutRolePolicy(const Model::PutRolePolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM role.</p> <p>When you embed an inline policy in a role, the inline policy is
         * used as part of the role's access (permissions) policy. The role's trust policy
         * is created at the same time as the role, using <a>CreateRole</a>. You can update
         * a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information
         * about IAM roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p> <p>A role can
         * also have a managed policy attached to it. To attach a managed policy to a role,
         * use <a>AttachRolePolicy</a>. To create a new managed policy, use
         * <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed
         * with a role, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutRolePolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePolicy">AWS
         * API Reference</a></p>
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p> <p>A role can
         * also have a managed policy attached to it. To attach a managed policy to a role,
         * use <a>AttachRolePolicy</a>. To create a new managed policy, use
         * <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed
         * with a role, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutRolePolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRolePolicyAsync(const Model::PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM user's permissions
         * boundary. You can use an AWS managed policy or a customer managed policy to set
         * the boundary for a user. Use the boundary to control the maximum permissions
         * that the user can have. Setting a permissions boundary is an advanced feature
         * that can affect the permissions for the user.</p> <important> <p>Policies that
         * are used as permissions boundaries do not provide permissions. You must also
         * attach a permissions policy to the user. To learn how the effective permissions
         * for a user are evaluated, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON Policy Evaluation Logic</a> in the IAM User Guide. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUserPermissionsBoundaryOutcome PutUserPermissionsBoundary(const Model::PutUserPermissionsBoundaryRequest& request) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM user's permissions
         * boundary. You can use an AWS managed policy or a customer managed policy to set
         * the boundary for a user. Use the boundary to control the maximum permissions
         * that the user can have. Setting a permissions boundary is an advanced feature
         * that can affect the permissions for the user.</p> <important> <p>Policies that
         * are used as permissions boundaries do not provide permissions. You must also
         * attach a permissions policy to the user. To learn how the effective permissions
         * for a user are evaluated, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON Policy Evaluation Logic</a> in the IAM User Guide. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUserPermissionsBoundaryOutcomeCallable PutUserPermissionsBoundaryCallable(const Model::PutUserPermissionsBoundaryRequest& request) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM user's permissions
         * boundary. You can use an AWS managed policy or a customer managed policy to set
         * the boundary for a user. Use the boundary to control the maximum permissions
         * that the user can have. Setting a permissions boundary is an advanced feature
         * that can affect the permissions for the user.</p> <important> <p>Policies that
         * are used as permissions boundaries do not provide permissions. You must also
         * attach a permissions policy to the user. To learn how the effective permissions
         * for a user are evaluated, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON Policy Evaluation Logic</a> in the IAM User Guide. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPermissionsBoundary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUserPermissionsBoundaryAsync(const Model::PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM user.</p> <p>An IAM user can also have a managed policy attached to it. To
         * attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new
         * managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a user, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutUserPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUserPolicyOutcome PutUserPolicy(const Model::PutUserPolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM user.</p> <p>An IAM user can also have a managed policy attached to it. To
         * attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new
         * managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a user, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutUserPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUserPolicyOutcomeCallable PutUserPolicyCallable(const Model::PutUserPolicyRequest& request) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM user.</p> <p>An IAM user can also have a managed policy attached to it. To
         * attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new
         * managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about limits on the number of inline policies that you can embed in
         * a user, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/LimitationsOnEntities.html">Limitations
         * on IAM Entities</a> in the <i>IAM User Guide</i>.</p> <note> <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutUserPolicy</code>. For general information about using the Query API
         * with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUserPolicyAsync(const Model::PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified client ID (also known as audience) from the list of
         * client IDs registered for the specified IAM OpenID Connect (OIDC) provider
         * resource object.</p> <p>This operation is idempotent; it does not fail or return
         * an error if you try to remove a client ID that does not exist.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveClientIDFromOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveClientIDFromOpenIDConnectProviderOutcome RemoveClientIDFromOpenIDConnectProvider(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Removes the specified client ID (also known as audience) from the list of
         * client IDs registered for the specified IAM OpenID Connect (OIDC) provider
         * resource object.</p> <p>This operation is idempotent; it does not fail or return
         * an error if you try to remove a client ID that does not exist.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveClientIDFromOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveClientIDFromOpenIDConnectProviderOutcomeCallable RemoveClientIDFromOpenIDConnectProviderCallable(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /**
         * <p>Removes the specified client ID (also known as audience) from the list of
         * client IDs registered for the specified IAM OpenID Connect (OIDC) provider
         * resource object.</p> <p>This operation is idempotent; it does not fail or return
         * an error if you try to remove a client ID that does not exist.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveClientIDFromOpenIDConnectProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveClientIDFromOpenIDConnectProviderAsync(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified IAM role from the specified EC2 instance profile.</p>
         * <important> <p>Make sure that you do not have any Amazon EC2 instances running
         * with the role you are about to remove from the instance profile. Removing a role
         * from an instance profile that is associated with a running instance might break
         * any applications running on the instance.</p> </important> <p> For more
         * information about IAM roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveRoleFromInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromInstanceProfileOutcome RemoveRoleFromInstanceProfile(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /**
         * <p>Removes the specified IAM role from the specified EC2 instance profile.</p>
         * <important> <p>Make sure that you do not have any Amazon EC2 instances running
         * with the role you are about to remove from the instance profile. Removing a role
         * from an instance profile that is associated with a running instance might break
         * any applications running on the instance.</p> </important> <p> For more
         * information about IAM roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveRoleFromInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromInstanceProfileOutcomeCallable RemoveRoleFromInstanceProfileCallable(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /**
         * <p>Removes the specified IAM role from the specified EC2 instance profile.</p>
         * <important> <p>Make sure that you do not have any Amazon EC2 instances running
         * with the role you are about to remove from the instance profile. Removing a role
         * from an instance profile that is associated with a running instance might break
         * any applications running on the instance.</p> </important> <p> For more
         * information about IAM roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with Roles</a>. For more information about instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * Instance Profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveRoleFromInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromInstanceProfileAsync(const Model::RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified user from the specified group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveUserFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest& request) const;

        /**
         * <p>Removes the specified user from the specified group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveUserFromGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request) const;

        /**
         * <p>Removes the specified user from the specified group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveUserFromGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the password for a service-specific credential. The new password is
         * AWS generated and cryptographically strong. It cannot be configured by the user.
         * Resetting the password immediately invalidates the previous password associated
         * with this user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResetServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetServiceSpecificCredentialOutcome ResetServiceSpecificCredential(const Model::ResetServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Resets the password for a service-specific credential. The new password is
         * AWS generated and cryptographically strong. It cannot be configured by the user.
         * Resetting the password immediately invalidates the previous password associated
         * with this user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResetServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetServiceSpecificCredentialOutcomeCallable ResetServiceSpecificCredentialCallable(const Model::ResetServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Resets the password for a service-specific credential. The new password is
         * AWS generated and cryptographically strong. It cannot be configured by the user.
         * Resetting the password immediately invalidates the previous password associated
         * with this user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResetServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetServiceSpecificCredentialAsync(const Model::ResetServiceSpecificCredentialRequest& request, const ResetServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Synchronizes the specified MFA device with its IAM resource object on the AWS
         * servers.</p> <p>For more information about creating and working with virtual MFA
         * devices, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResyncMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ResyncMFADeviceOutcome ResyncMFADevice(const Model::ResyncMFADeviceRequest& request) const;

        /**
         * <p>Synchronizes the specified MFA device with its IAM resource object on the AWS
         * servers.</p> <p>For more information about creating and working with virtual MFA
         * devices, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResyncMFADevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResyncMFADeviceOutcomeCallable ResyncMFADeviceCallable(const Model::ResyncMFADeviceRequest& request) const;

        /**
         * <p>Synchronizes the specified MFA device with its IAM resource object on the AWS
         * servers.</p> <p>For more information about creating and working with virtual MFA
         * devices, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a Virtual MFA Device</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResyncMFADevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResyncMFADeviceAsync(const Model::ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version.</p> <p>This operation affects all users, groups, and roles
         * that the policy is attached to. To list the users, groups, and roles that the
         * policy is attached to, use the <a>ListEntitiesForPolicy</a> API.</p> <p>For
         * information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version.</p> <p>This operation affects all users, groups, and roles
         * that the policy is attached to. To list the users, groups, and roles that the
         * policy is attached to, use the <a>ListEntitiesForPolicy</a> API.</p> <p>For
         * information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version.</p> <p>This operation affects all users, groups, and roles
         * that the policy is attached to. To list the users, groups, and roles that the
         * policy is attached to, use the <a>ListEntitiesForPolicy</a> API.</p> <p>For
         * information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * Policies and Inline Policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the global endpoint token as the token version
         * used for the AWS account.</p> <p>By default, AWS Security Token Service (STS) is
         * available as a global service, and all STS requests go to a single endpoint at
         * <code>https://sts.amazonaws.com</code>. AWS recommends using Regional STS
         * endpoints to reduce latency, build in redundancy, and increase session token
         * availability. For information about Regional endpoints for STS, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">AWS
         * Regions and Endpoints</a> in the <i>AWS General Reference</i>.</p> <p>If you
         * make an STS call to the global endpoint, the resulting session tokens might be
         * valid in some Regions but not others. It depends on the version that is set in
         * this operation. Version 1 tokens are valid only in AWS Regions that are
         * available by default. These tokens do not work in manually enabled Regions, such
         * as Asia Pacific (Hong Kong). Version 2 tokens are valid in all Regions. However,
         * version 2 tokens are longer and might affect systems where you temporarily store
         * tokens. For information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
         * <p>To view the current session token version, see the
         * <code>GlobalEndpointTokenVersion</code> entry in the response of the
         * <a>GetAccountSummary</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetSecurityTokenServicePreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSecurityTokenServicePreferencesOutcome SetSecurityTokenServicePreferences(const Model::SetSecurityTokenServicePreferencesRequest& request) const;

        /**
         * <p>Sets the specified version of the global endpoint token as the token version
         * used for the AWS account.</p> <p>By default, AWS Security Token Service (STS) is
         * available as a global service, and all STS requests go to a single endpoint at
         * <code>https://sts.amazonaws.com</code>. AWS recommends using Regional STS
         * endpoints to reduce latency, build in redundancy, and increase session token
         * availability. For information about Regional endpoints for STS, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">AWS
         * Regions and Endpoints</a> in the <i>AWS General Reference</i>.</p> <p>If you
         * make an STS call to the global endpoint, the resulting session tokens might be
         * valid in some Regions but not others. It depends on the version that is set in
         * this operation. Version 1 tokens are valid only in AWS Regions that are
         * available by default. These tokens do not work in manually enabled Regions, such
         * as Asia Pacific (Hong Kong). Version 2 tokens are valid in all Regions. However,
         * version 2 tokens are longer and might affect systems where you temporarily store
         * tokens. For information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
         * <p>To view the current session token version, see the
         * <code>GlobalEndpointTokenVersion</code> entry in the response of the
         * <a>GetAccountSummary</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetSecurityTokenServicePreferences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSecurityTokenServicePreferencesOutcomeCallable SetSecurityTokenServicePreferencesCallable(const Model::SetSecurityTokenServicePreferencesRequest& request) const;

        /**
         * <p>Sets the specified version of the global endpoint token as the token version
         * used for the AWS account.</p> <p>By default, AWS Security Token Service (STS) is
         * available as a global service, and all STS requests go to a single endpoint at
         * <code>https://sts.amazonaws.com</code>. AWS recommends using Regional STS
         * endpoints to reduce latency, build in redundancy, and increase session token
         * availability. For information about Regional endpoints for STS, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">AWS
         * Regions and Endpoints</a> in the <i>AWS General Reference</i>.</p> <p>If you
         * make an STS call to the global endpoint, the resulting session tokens might be
         * valid in some Regions but not others. It depends on the version that is set in
         * this operation. Version 1 tokens are valid only in AWS Regions that are
         * available by default. These tokens do not work in manually enabled Regions, such
         * as Asia Pacific (Hong Kong). Version 2 tokens are valid in all Regions. However,
         * version 2 tokens are longer and might affect systems where you temporarily store
         * tokens. For information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating STS in an AWS Region</a> in the <i>IAM User Guide</i>.</p>
         * <p>To view the current session token version, see the
         * <code>GlobalEndpointTokenVersion</code> entry in the response of the
         * <a>GetAccountSummary</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetSecurityTokenServicePreferences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSecurityTokenServicePreferencesAsync(const Model::SetSecurityTokenServicePreferencesRequest& request, const SetSecurityTokenServicePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate how a set of IAM policies and optionally a resource-based policy
         * works with a list of API operations and AWS resources to determine the policies'
         * effective permissions. The policies are provided as strings.</p> <p>The
         * simulation does not perform the API operations; it only checks the authorization
         * to determine if the simulated policies allow or deny the operations.</p> <p>If
         * you want to simulate existing policies attached to an IAM user, group, or role,
         * use <a>SimulatePrincipalPolicy</a> instead.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request. You can use the <code>Condition</code> element of an IAM
         * policy to evaluate context keys. To get the list of context keys that the
         * policies require for correct simulation, use
         * <a>GetContextKeysForCustomPolicy</a>.</p> <p>If the output is long, you can use
         * <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulateCustomPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SimulateCustomPolicyOutcome SimulateCustomPolicy(const Model::SimulateCustomPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies and optionally a resource-based policy
         * works with a list of API operations and AWS resources to determine the policies'
         * effective permissions. The policies are provided as strings.</p> <p>The
         * simulation does not perform the API operations; it only checks the authorization
         * to determine if the simulated policies allow or deny the operations.</p> <p>If
         * you want to simulate existing policies attached to an IAM user, group, or role,
         * use <a>SimulatePrincipalPolicy</a> instead.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request. You can use the <code>Condition</code> element of an IAM
         * policy to evaluate context keys. To get the list of context keys that the
         * policies require for correct simulation, use
         * <a>GetContextKeysForCustomPolicy</a>.</p> <p>If the output is long, you can use
         * <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulateCustomPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SimulateCustomPolicyOutcomeCallable SimulateCustomPolicyCallable(const Model::SimulateCustomPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies and optionally a resource-based policy
         * works with a list of API operations and AWS resources to determine the policies'
         * effective permissions. The policies are provided as strings.</p> <p>The
         * simulation does not perform the API operations; it only checks the authorization
         * to determine if the simulated policies allow or deny the operations.</p> <p>If
         * you want to simulate existing policies attached to an IAM user, group, or role,
         * use <a>SimulatePrincipalPolicy</a> instead.</p> <p>Context keys are variables
         * maintained by AWS and its services that provide details about the context of an
         * API query request. You can use the <code>Condition</code> element of an IAM
         * policy to evaluate context keys. To get the list of context keys that the
         * policies require for correct simulation, use
         * <a>GetContextKeysForCustomPolicy</a>.</p> <p>If the output is long, you can use
         * <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulateCustomPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SimulateCustomPolicyAsync(const Model::SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate how a set of IAM policies attached to an IAM entity works with a
         * list of API operations and AWS resources to determine the policies' effective
         * permissions. The entity can be an IAM user, group, or role. If you specify a
         * user, then the simulation also includes all of the policies that are attached to
         * groups that the user belongs to.</p> <p>You can optionally include a list of one
         * or more additional policies specified as strings to include in the simulation.
         * If you want to simulate only policies specified as strings, use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>You can also optionally include one
         * resource-based policy to be evaluated with each of the resources included in the
         * simulation.</p> <p>The simulation does not perform the API operations; it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the operations.</p> <p> <b>Note:</b> This API discloses information about the
         * permissions granted to other users. If you do not want users to see other user's
         * permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
         * instead.</p> <p>Context keys are variables maintained by AWS and its services
         * that provide details about the context of an API query request. You can use the
         * <code>Condition</code> element of an IAM policy to evaluate context keys. To get
         * the list of context keys that the policies require for correct simulation, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>If the output is long, you can
         * use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulatePrincipalPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SimulatePrincipalPolicyOutcome SimulatePrincipalPolicy(const Model::SimulatePrincipalPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies attached to an IAM entity works with a
         * list of API operations and AWS resources to determine the policies' effective
         * permissions. The entity can be an IAM user, group, or role. If you specify a
         * user, then the simulation also includes all of the policies that are attached to
         * groups that the user belongs to.</p> <p>You can optionally include a list of one
         * or more additional policies specified as strings to include in the simulation.
         * If you want to simulate only policies specified as strings, use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>You can also optionally include one
         * resource-based policy to be evaluated with each of the resources included in the
         * simulation.</p> <p>The simulation does not perform the API operations; it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the operations.</p> <p> <b>Note:</b> This API discloses information about the
         * permissions granted to other users. If you do not want users to see other user's
         * permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
         * instead.</p> <p>Context keys are variables maintained by AWS and its services
         * that provide details about the context of an API query request. You can use the
         * <code>Condition</code> element of an IAM policy to evaluate context keys. To get
         * the list of context keys that the policies require for correct simulation, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>If the output is long, you can
         * use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulatePrincipalPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SimulatePrincipalPolicyOutcomeCallable SimulatePrincipalPolicyCallable(const Model::SimulatePrincipalPolicyRequest& request) const;

        /**
         * <p>Simulate how a set of IAM policies attached to an IAM entity works with a
         * list of API operations and AWS resources to determine the policies' effective
         * permissions. The entity can be an IAM user, group, or role. If you specify a
         * user, then the simulation also includes all of the policies that are attached to
         * groups that the user belongs to.</p> <p>You can optionally include a list of one
         * or more additional policies specified as strings to include in the simulation.
         * If you want to simulate only policies specified as strings, use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>You can also optionally include one
         * resource-based policy to be evaluated with each of the resources included in the
         * simulation.</p> <p>The simulation does not perform the API operations; it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the operations.</p> <p> <b>Note:</b> This API discloses information about the
         * permissions granted to other users. If you do not want users to see other user's
         * permissions, then consider allowing them to use <a>SimulateCustomPolicy</a>
         * instead.</p> <p>Context keys are variables maintained by AWS and its services
         * that provide details about the context of an API query request. You can use the
         * <code>Condition</code> element of an IAM policy to evaluate context keys. To get
         * the list of context keys that the policies require for correct simulation, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>If the output is long, you can
         * use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulatePrincipalPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SimulatePrincipalPolicyAsync(const Model::SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM role. The role can be a regular role or a
         * service-linked role. If a tag with the same key name already exists, then that
         * tag is overwritten with the new value.</p> <p>A tag consists of a key name and
         * an associated value. By assigning tags to your resources, you can do the
         * following:</p> <ul> <li> <p> <b>Administrative grouping and discovery</b> -
         * Attach tags to resources to aid in organization and search. For example, you
         * could search for all resources with the key name <i>Project</i> and the value
         * <i>MyImportantProject</i>. Or search for all resources with the key name <i>Cost
         * Center</i> and the value <i>41200</i>. </p> </li> <li> <p> <b>Access control</b>
         * - Reference tags in IAM user-based and resource-based policies. You can use tags
         * to restrict access to only an IAM user or role that has a specified tag
         * attached. You can also restrict access to only those resources that have a
         * certain tag attached. For examples of policies that show how to use tags to
         * control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * Access Using IAM Tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which AWS resources.</p> </li> </ul> <note> <ul> <li> <p>Make sure that
         * you have no invalid tags and that you do not exceed the allowed number of tags
         * per role. In either case, the entire request fails and <i>no</i> tags are added
         * to the role.</p> </li> <li> <p>AWS always interprets the tag <code>Value</code>
         * as a single string. If you need to store an array, you can store comma-separated
         * values in the string. However, you must interpret the value in your code.</p>
         * </li> </ul> </note> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagRole">AWS API
         * Reference</a></p>
         */
        virtual Model::TagRoleOutcome TagRole(const Model::TagRoleRequest& request) const;

        /**
         * <p>Adds one or more tags to an IAM role. The role can be a regular role or a
         * service-linked role. If a tag with the same key name already exists, then that
         * tag is overwritten with the new value.</p> <p>A tag consists of a key name and
         * an associated value. By assigning tags to your resources, you can do the
         * following:</p> <ul> <li> <p> <b>Administrative grouping and discovery</b> -
         * Attach tags to resources to aid in organization and search. For example, you
         * could search for all resources with the key name <i>Project</i> and the value
         * <i>MyImportantProject</i>. Or search for all resources with the key name <i>Cost
         * Center</i> and the value <i>41200</i>. </p> </li> <li> <p> <b>Access control</b>
         * - Reference tags in IAM user-based and resource-based policies. You can use tags
         * to restrict access to only an IAM user or role that has a specified tag
         * attached. You can also restrict access to only those resources that have a
         * certain tag attached. For examples of policies that show how to use tags to
         * control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * Access Using IAM Tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which AWS resources.</p> </li> </ul> <note> <ul> <li> <p>Make sure that
         * you have no invalid tags and that you do not exceed the allowed number of tags
         * per role. In either case, the entire request fails and <i>no</i> tags are added
         * to the role.</p> </li> <li> <p>AWS always interprets the tag <code>Value</code>
         * as a single string. If you need to store an array, you can store comma-separated
         * values in the string. However, you must interpret the value in your code.</p>
         * </li> </ul> </note> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagRole">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagRoleOutcomeCallable TagRoleCallable(const Model::TagRoleRequest& request) const;

        /**
         * <p>Adds one or more tags to an IAM role. The role can be a regular role or a
         * service-linked role. If a tag with the same key name already exists, then that
         * tag is overwritten with the new value.</p> <p>A tag consists of a key name and
         * an associated value. By assigning tags to your resources, you can do the
         * following:</p> <ul> <li> <p> <b>Administrative grouping and discovery</b> -
         * Attach tags to resources to aid in organization and search. For example, you
         * could search for all resources with the key name <i>Project</i> and the value
         * <i>MyImportantProject</i>. Or search for all resources with the key name <i>Cost
         * Center</i> and the value <i>41200</i>. </p> </li> <li> <p> <b>Access control</b>
         * - Reference tags in IAM user-based and resource-based policies. You can use tags
         * to restrict access to only an IAM user or role that has a specified tag
         * attached. You can also restrict access to only those resources that have a
         * certain tag attached. For examples of policies that show how to use tags to
         * control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * Access Using IAM Tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which AWS resources.</p> </li> </ul> <note> <ul> <li> <p>Make sure that
         * you have no invalid tags and that you do not exceed the allowed number of tags
         * per role. In either case, the entire request fails and <i>no</i> tags are added
         * to the role.</p> </li> <li> <p>AWS always interprets the tag <code>Value</code>
         * as a single string. If you need to store an array, you can store comma-separated
         * values in the string. However, you must interpret the value in your code.</p>
         * </li> </ul> </note> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagRole">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagRoleAsync(const Model::TagRoleRequest& request, const TagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM user. If a tag with the same key name already
         * exists, then that tag is overwritten with the new value.</p> <p>A tag consists
         * of a key name and an associated value. By assigning tags to your resources, you
         * can do the following:</p> <ul> <li> <p> <b>Administrative grouping and
         * discovery</b> - Attach tags to resources to aid in organization and search. For
         * example, you could search for all resources with the key name <i>Project</i> and
         * the value <i>MyImportantProject</i>. Or search for all resources with the key
         * name <i>Cost Center</i> and the value <i>41200</i>. </p> </li> <li> <p>
         * <b>Access control</b> - Reference tags in IAM user-based and resource-based
         * policies. You can use tags to restrict access to only an IAM requesting user or
         * to a role that has a specified tag attached. You can also restrict access to
         * only those resources that have a certain tag attached. For examples of policies
         * that show how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * Access Using IAM Tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which AWS resources.</p> </li> </ul> <note> <ul> <li> <p>Make sure that
         * you have no invalid tags and that you do not exceed the allowed number of tags
         * per role. In either case, the entire request fails and <i>no</i> tags are added
         * to the role.</p> </li> <li> <p>AWS always interprets the tag <code>Value</code>
         * as a single string. If you need to store an array, you can store comma-separated
         * values in the string. However, you must interpret the value in your code.</p>
         * </li> </ul> </note> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagUser">AWS API
         * Reference</a></p>
         */
        virtual Model::TagUserOutcome TagUser(const Model::TagUserRequest& request) const;

        /**
         * <p>Adds one or more tags to an IAM user. If a tag with the same key name already
         * exists, then that tag is overwritten with the new value.</p> <p>A tag consists
         * of a key name and an associated value. By assigning tags to your resources, you
         * can do the following:</p> <ul> <li> <p> <b>Administrative grouping and
         * discovery</b> - Attach tags to resources to aid in organization and search. For
         * example, you could search for all resources with the key name <i>Project</i> and
         * the value <i>MyImportantProject</i>. Or search for all resources with the key
         * name <i>Cost Center</i> and the value <i>41200</i>. </p> </li> <li> <p>
         * <b>Access control</b> - Reference tags in IAM user-based and resource-based
         * policies. You can use tags to restrict access to only an IAM requesting user or
         * to a role that has a specified tag attached. You can also restrict access to
         * only those resources that have a certain tag attached. For examples of policies
         * that show how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * Access Using IAM Tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which AWS resources.</p> </li> </ul> <note> <ul> <li> <p>Make sure that
         * you have no invalid tags and that you do not exceed the allowed number of tags
         * per role. In either case, the entire request fails and <i>no</i> tags are added
         * to the role.</p> </li> <li> <p>AWS always interprets the tag <code>Value</code>
         * as a single string. If you need to store an array, you can store comma-separated
         * values in the string. However, you must interpret the value in your code.</p>
         * </li> </ul> </note> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagUserOutcomeCallable TagUserCallable(const Model::TagUserRequest& request) const;

        /**
         * <p>Adds one or more tags to an IAM user. If a tag with the same key name already
         * exists, then that tag is overwritten with the new value.</p> <p>A tag consists
         * of a key name and an associated value. By assigning tags to your resources, you
         * can do the following:</p> <ul> <li> <p> <b>Administrative grouping and
         * discovery</b> - Attach tags to resources to aid in organization and search. For
         * example, you could search for all resources with the key name <i>Project</i> and
         * the value <i>MyImportantProject</i>. Or search for all resources with the key
         * name <i>Cost Center</i> and the value <i>41200</i>. </p> </li> <li> <p>
         * <b>Access control</b> - Reference tags in IAM user-based and resource-based
         * policies. You can use tags to restrict access to only an IAM requesting user or
         * to a role that has a specified tag attached. You can also restrict access to
         * only those resources that have a certain tag attached. For examples of policies
         * that show how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * Access Using IAM Tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which AWS resources.</p> </li> </ul> <note> <ul> <li> <p>Make sure that
         * you have no invalid tags and that you do not exceed the allowed number of tags
         * per role. In either case, the entire request fails and <i>no</i> tags are added
         * to the role.</p> </li> <li> <p>AWS always interprets the tag <code>Value</code>
         * as a single string. If you need to store an array, you can store comma-separated
         * values in the string. However, you must interpret the value in your code.</p>
         * </li> </ul> </note> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagUserAsync(const Model::TagUserRequest& request, const TagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the role. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagRole">AWS API
         * Reference</a></p>
         */
        virtual Model::UntagRoleOutcome UntagRole(const Model::UntagRoleRequest& request) const;

        /**
         * <p>Removes the specified tags from the role. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagRole">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagRoleOutcomeCallable UntagRoleCallable(const Model::UntagRoleRequest& request) const;

        /**
         * <p>Removes the specified tags from the role. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagRole">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagRoleAsync(const Model::UntagRoleRequest& request, const UntagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the user. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagUser">AWS API
         * Reference</a></p>
         */
        virtual Model::UntagUserOutcome UntagUser(const Model::UntagUserRequest& request) const;

        /**
         * <p>Removes the specified tags from the user. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagUserOutcomeCallable UntagUserCallable(const Model::UntagUserRequest& request) const;

        /**
         * <p>Removes the specified tags from the user. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagUserAsync(const Model::UntagUserRequest& request, const UntagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of the specified access key from Active to Inactive, or
         * vice versa. This operation can be used to disable a user's key as part of a key
         * rotation workflow.</p> <p>If the <code>UserName</code> is not specified, the
         * user name is determined implicitly based on the AWS access key ID used to sign
         * the request. This operation works for access keys under the AWS account.
         * Consequently, you can use this operation to manage AWS account root user
         * credentials even if the AWS account has no associated users.</p> <p>For
         * information about rotating keys, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing
         * Keys and Certificates</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessKeyOutcome UpdateAccessKey(const Model::UpdateAccessKeyRequest& request) const;

        /**
         * <p>Changes the status of the specified access key from Active to Inactive, or
         * vice versa. This operation can be used to disable a user's key as part of a key
         * rotation workflow.</p> <p>If the <code>UserName</code> is not specified, the
         * user name is determined implicitly based on the AWS access key ID used to sign
         * the request. This operation works for access keys under the AWS account.
         * Consequently, you can use this operation to manage AWS account root user
         * credentials even if the AWS account has no associated users.</p> <p>For
         * information about rotating keys, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing
         * Keys and Certificates</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccessKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessKeyOutcomeCallable UpdateAccessKeyCallable(const Model::UpdateAccessKeyRequest& request) const;

        /**
         * <p>Changes the status of the specified access key from Active to Inactive, or
         * vice versa. This operation can be used to disable a user's key as part of a key
         * rotation workflow.</p> <p>If the <code>UserName</code> is not specified, the
         * user name is determined implicitly based on the AWS access key ID used to sign
         * the request. This operation works for access keys under the AWS account.
         * Consequently, you can use this operation to manage AWS account root user
         * credentials even if the AWS account has no associated users.</p> <p>For
         * information about rotating keys, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing
         * Keys and Certificates</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccessKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessKeyAsync(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the password policy settings for the AWS account.</p> <note> <ul>
         * <li> <p>This operation does not support partial updates. No parameters are
         * required, but if you do not specify a parameter, that parameter's value reverts
         * to its default value. See the <b>Request Parameters</b> section for each
         * parameter's default value. Also note that some parameters do not allow the
         * default parameter to be explicitly set. Instead, to invoke the default value, do
         * not include that parameter when you invoke the operation.</p> </li> </ul>
         * </note> <p> For more information about using a password policy, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccountPasswordPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountPasswordPolicyOutcome UpdateAccountPasswordPolicy(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Updates the password policy settings for the AWS account.</p> <note> <ul>
         * <li> <p>This operation does not support partial updates. No parameters are
         * required, but if you do not specify a parameter, that parameter's value reverts
         * to its default value. See the <b>Request Parameters</b> section for each
         * parameter's default value. Also note that some parameters do not allow the
         * default parameter to be explicitly set. Instead, to invoke the default value, do
         * not include that parameter when you invoke the operation.</p> </li> </ul>
         * </note> <p> For more information about using a password policy, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccountPasswordPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountPasswordPolicyOutcomeCallable UpdateAccountPasswordPolicyCallable(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /**
         * <p>Updates the password policy settings for the AWS account.</p> <note> <ul>
         * <li> <p>This operation does not support partial updates. No parameters are
         * required, but if you do not specify a parameter, that parameter's value reverts
         * to its default value. See the <b>Request Parameters</b> section for each
         * parameter's default value. Also note that some parameters do not allow the
         * default parameter to be explicitly set. Instead, to invoke the default value, do
         * not include that parameter when you invoke the operation.</p> </li> </ul>
         * </note> <p> For more information about using a password policy, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM Password Policy</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccountPasswordPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountPasswordPolicyAsync(const Model::UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the policy that grants an IAM entity permission to assume a role.
         * This is typically referred to as the "role trust policy". For more information
         * about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAssumeRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssumeRolePolicyOutcome UpdateAssumeRolePolicy(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /**
         * <p>Updates the policy that grants an IAM entity permission to assume a role.
         * This is typically referred to as the "role trust policy". For more information
         * about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAssumeRolePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssumeRolePolicyOutcomeCallable UpdateAssumeRolePolicyCallable(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /**
         * <p>Updates the policy that grants an IAM entity permission to assume a role.
         * This is typically referred to as the "role trust policy". For more information
         * about roles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * Roles to Delegate Permissions and Federate Identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAssumeRolePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssumeRolePolicyAsync(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM group.</p> <important>
         * <p> You should understand the implications of changing a group's path or name.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming
         * Users and Groups</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>The person making the request (the principal), must have permission to change
         * the role group with the old name and the new name. For example, to change the
         * group named <code>Managers</code> to <code>MGRs</code>, the principal must have
         * a policy that allows them to update both groups. If the principal has permission
         * to update the <code>Managers</code> group, but not the <code>MGRs</code> group,
         * then the update fails. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM group.</p> <important>
         * <p> You should understand the implications of changing a group's path or name.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming
         * Users and Groups</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>The person making the request (the principal), must have permission to change
         * the role group with the old name and the new name. For example, to change the
         * group named <code>Managers</code> to <code>MGRs</code>, the principal must have
         * a policy that allows them to update both groups. If the principal has permission
         * to update the <code>Managers</code> group, but not the <code>MGRs</code> group,
         * then the update fails. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateGroup">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM group.</p> <important>
         * <p> You should understand the implications of changing a group's path or name.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming
         * Users and Groups</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>The person making the request (the principal), must have permission to change
         * the role group with the old name and the new name. For example, to change the
         * group named <code>Managers</code> to <code>MGRs</code>, the principal must have
         * a policy that allows them to update both groups. If the principal has permission
         * to update the <code>Managers</code> group, but not the <code>MGRs</code> group,
         * then the update fails. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateGroup">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password for the specified IAM user.</p> <p>IAM users can change
         * their own passwords by calling <a>ChangePassword</a>. For more information about
         * modifying passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoginProfileOutcome UpdateLoginProfile(const Model::UpdateLoginProfileRequest& request) const;

        /**
         * <p>Changes the password for the specified IAM user.</p> <p>IAM users can change
         * their own passwords by calling <a>ChangePassword</a>. For more information about
         * modifying passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateLoginProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoginProfileOutcomeCallable UpdateLoginProfileCallable(const Model::UpdateLoginProfileRequest& request) const;

        /**
         * <p>Changes the password for the specified IAM user.</p> <p>IAM users can change
         * their own passwords by calling <a>ChangePassword</a>. For more information about
         * modifying passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * Passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateLoginProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoginProfileAsync(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the existing list of server certificate thumbprints associated with
         * an OpenID Connect (OIDC) provider resource object with a new list of
         * thumbprints.</p> <p>The list that you pass with this operation completely
         * replaces the existing list of thumbprints. (The lists are not merged.)</p>
         * <p>Typically, you need to update a thumbprint only when the identity provider's
         * certificate changes, which occurs rarely. However, if the provider's certificate
         * <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC
         * provider as a principal fails until the certificate thumbprint is updated.</p>
         * <note> <p>Trust for the OIDC provider is derived from the provider's certificate
         * and is validated by the thumbprint. Therefore, it is best to limit access to the
         * <code>UpdateOpenIDConnectProviderThumbprint</code> operation to highly
         * privileged users.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateOpenIDConnectProviderThumbprint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpenIDConnectProviderThumbprintOutcome UpdateOpenIDConnectProviderThumbprint(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /**
         * <p>Replaces the existing list of server certificate thumbprints associated with
         * an OpenID Connect (OIDC) provider resource object with a new list of
         * thumbprints.</p> <p>The list that you pass with this operation completely
         * replaces the existing list of thumbprints. (The lists are not merged.)</p>
         * <p>Typically, you need to update a thumbprint only when the identity provider's
         * certificate changes, which occurs rarely. However, if the provider's certificate
         * <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC
         * provider as a principal fails until the certificate thumbprint is updated.</p>
         * <note> <p>Trust for the OIDC provider is derived from the provider's certificate
         * and is validated by the thumbprint. Therefore, it is best to limit access to the
         * <code>UpdateOpenIDConnectProviderThumbprint</code> operation to highly
         * privileged users.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateOpenIDConnectProviderThumbprint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOpenIDConnectProviderThumbprintOutcomeCallable UpdateOpenIDConnectProviderThumbprintCallable(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /**
         * <p>Replaces the existing list of server certificate thumbprints associated with
         * an OpenID Connect (OIDC) provider resource object with a new list of
         * thumbprints.</p> <p>The list that you pass with this operation completely
         * replaces the existing list of thumbprints. (The lists are not merged.)</p>
         * <p>Typically, you need to update a thumbprint only when the identity provider's
         * certificate changes, which occurs rarely. However, if the provider's certificate
         * <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC
         * provider as a principal fails until the certificate thumbprint is updated.</p>
         * <note> <p>Trust for the OIDC provider is derived from the provider's certificate
         * and is validated by the thumbprint. Therefore, it is best to limit access to the
         * <code>UpdateOpenIDConnectProviderThumbprint</code> operation to highly
         * privileged users.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateOpenIDConnectProviderThumbprint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOpenIDConnectProviderThumbprintAsync(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description or maximum session duration setting of a
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRole">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRoleOutcome UpdateRole(const Model::UpdateRoleRequest& request) const;

        /**
         * <p>Updates the description or maximum session duration setting of a
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRole">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoleOutcomeCallable UpdateRoleCallable(const Model::UpdateRoleRequest& request) const;

        /**
         * <p>Updates the description or maximum session duration setting of a
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRole">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoleAsync(const Model::UpdateRoleRequest& request, const UpdateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use <a>UpdateRole</a> instead.</p> <p>Modifies only the description of a
         * role. This operation performs the same function as the <code>Description</code>
         * parameter in the <code>UpdateRole</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRoleDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoleDescriptionOutcome UpdateRoleDescription(const Model::UpdateRoleDescriptionRequest& request) const;

        /**
         * <p>Use <a>UpdateRole</a> instead.</p> <p>Modifies only the description of a
         * role. This operation performs the same function as the <code>Description</code>
         * parameter in the <code>UpdateRole</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRoleDescription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoleDescriptionOutcomeCallable UpdateRoleDescriptionCallable(const Model::UpdateRoleDescriptionRequest& request) const;

        /**
         * <p>Use <a>UpdateRole</a> instead.</p> <p>Modifies only the description of a
         * role. This operation performs the same function as the <code>Description</code>
         * parameter in the <code>UpdateRole</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRoleDescription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoleDescriptionAsync(const Model::UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the metadata document for an existing SAML provider resource
         * object.</p> <note> <p>This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSAMLProviderOutcome UpdateSAMLProvider(const Model::UpdateSAMLProviderRequest& request) const;

        /**
         * <p>Updates the metadata document for an existing SAML provider resource
         * object.</p> <note> <p>This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSAMLProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSAMLProviderOutcomeCallable UpdateSAMLProviderCallable(const Model::UpdateSAMLProviderRequest& request) const;

        /**
         * <p>Updates the metadata document for an existing SAML provider resource
         * object.</p> <note> <p>This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSAMLProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSAMLProviderAsync(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the status of an IAM user's SSH public key to active or inactive. SSH
         * public keys that are inactive cannot be used for authentication. This operation
         * can be used to disable a user's SSH public key as part of a key rotation work
         * flow.</p> <p>The SSH public key affected by this operation is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSSHPublicKeyOutcome UpdateSSHPublicKey(const Model::UpdateSSHPublicKeyRequest& request) const;

        /**
         * <p>Sets the status of an IAM user's SSH public key to active or inactive. SSH
         * public keys that are inactive cannot be used for authentication. This operation
         * can be used to disable a user's SSH public key as part of a key rotation work
         * flow.</p> <p>The SSH public key affected by this operation is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSSHPublicKeyOutcomeCallable UpdateSSHPublicKeyCallable(const Model::UpdateSSHPublicKeyRequest& request) const;

        /**
         * <p>Sets the status of an IAM user's SSH public key to active or inactive. SSH
         * public keys that are inactive cannot be used for authentication. This operation
         * can be used to disable a user's SSH public key as part of a key rotation work
         * flow.</p> <p>The SSH public key affected by this operation is used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSSHPublicKeyAsync(const Model::UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified server certificate stored
         * in IAM.</p> <p>For more information about working with server certificates, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p> <important> <p>You should understand the implications of
         * changing a server certificate's path or name. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
         * a Server Certificate</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>The person making the request (the principal), must have permission to change
         * the server certificate with the old name and the new name. For example, to
         * change the certificate named <code>ProductionCert</code> to
         * <code>ProdCert</code>, the principal must have a policy that allows them to
         * update both certificates. If the principal has permission to update the
         * <code>ProductionCert</code> group, but not the <code>ProdCert</code>
         * certificate, then the update fails. For more information about permissions, see
         * <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerCertificateOutcome UpdateServerCertificate(const Model::UpdateServerCertificateRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified server certificate stored
         * in IAM.</p> <p>For more information about working with server certificates, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p> <important> <p>You should understand the implications of
         * changing a server certificate's path or name. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
         * a Server Certificate</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>The person making the request (the principal), must have permission to change
         * the server certificate with the old name and the new name. For example, to
         * change the certificate named <code>ProductionCert</code> to
         * <code>ProdCert</code>, the principal must have a policy that allows them to
         * update both certificates. If the principal has permission to update the
         * <code>ProductionCert</code> group, but not the <code>ProdCert</code>
         * certificate, then the update fails. For more information about permissions, see
         * <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServerCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServerCertificateOutcomeCallable UpdateServerCertificateCallable(const Model::UpdateServerCertificateRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified server certificate stored
         * in IAM.</p> <p>For more information about working with server certificates, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of AWS services that can use the server certificates that you
         * manage with IAM.</p> <important> <p>You should understand the implications of
         * changing a server certificate's path or name. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
         * a Server Certificate</a> in the <i>IAM User Guide</i>.</p> </important> <note>
         * <p>The person making the request (the principal), must have permission to change
         * the server certificate with the old name and the new name. For example, to
         * change the certificate named <code>ProductionCert</code> to
         * <code>ProdCert</code>, the principal must have a policy that allows them to
         * update both certificates. If the principal has permission to update the
         * <code>ProductionCert</code> group, but not the <code>ProdCert</code>
         * certificate, then the update fails. For more information about permissions, see
         * <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * Management</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServerCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServerCertificateAsync(const Model::UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the status of a service-specific credential to <code>Active</code> or
         * <code>Inactive</code>. Service-specific credentials that are inactive cannot be
         * used for authentication to the service. This operation can be used to disable a
         * user's service-specific credential as part of a credential rotation work
         * flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSpecificCredentialOutcome UpdateServiceSpecificCredential(const Model::UpdateServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Sets the status of a service-specific credential to <code>Active</code> or
         * <code>Inactive</code>. Service-specific credentials that are inactive cannot be
         * used for authentication to the service. This operation can be used to disable a
         * user's service-specific credential as part of a credential rotation work
         * flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceSpecificCredentialOutcomeCallable UpdateServiceSpecificCredentialCallable(const Model::UpdateServiceSpecificCredentialRequest& request) const;

        /**
         * <p>Sets the status of a service-specific credential to <code>Active</code> or
         * <code>Inactive</code>. Service-specific credentials that are inactive cannot be
         * used for authentication to the service. This operation can be used to disable a
         * user's service-specific credential as part of a credential rotation work
         * flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServiceSpecificCredential">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceSpecificCredentialAsync(const Model::UpdateServiceSpecificCredentialRequest& request, const UpdateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of the specified user signing certificate from active to
         * disabled, or vice versa. This operation can be used to disable an IAM user's
         * signing certificate as part of a certificate rotation work flow.</p> <p>If the
         * <code>UserName</code> field is not specified, the user name is determined
         * implicitly based on the AWS access key ID used to sign the request. This
         * operation works for access keys under the AWS account. Consequently, you can use
         * this operation to manage AWS account root user credentials even if the AWS
         * account has no associated users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSigningCertificateOutcome UpdateSigningCertificate(const Model::UpdateSigningCertificateRequest& request) const;

        /**
         * <p>Changes the status of the specified user signing certificate from active to
         * disabled, or vice versa. This operation can be used to disable an IAM user's
         * signing certificate as part of a certificate rotation work flow.</p> <p>If the
         * <code>UserName</code> field is not specified, the user name is determined
         * implicitly based on the AWS access key ID used to sign the request. This
         * operation works for access keys under the AWS account. Consequently, you can use
         * this operation to manage AWS account root user credentials even if the AWS
         * account has no associated users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSigningCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSigningCertificateOutcomeCallable UpdateSigningCertificateCallable(const Model::UpdateSigningCertificateRequest& request) const;

        /**
         * <p>Changes the status of the specified user signing certificate from active to
         * disabled, or vice versa. This operation can be used to disable an IAM user's
         * signing certificate as part of a certificate rotation work flow.</p> <p>If the
         * <code>UserName</code> field is not specified, the user name is determined
         * implicitly based on the AWS access key ID used to sign the request. This
         * operation works for access keys under the AWS account. Consequently, you can use
         * this operation to manage AWS account root user credentials even if the AWS
         * account has no associated users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSigningCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSigningCertificateAsync(const Model::UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM user.</p> <important>
         * <p> You should understand the implications of changing an IAM user's path or
         * name. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming
         * an IAM User</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming
         * an IAM Group</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p> To
         * change a user name, the requester must have appropriate permissions on both the
         * source object and the target object. For example, to change Bob to Robert, the
         * entity making the request must have permission on Bob and Robert, or must have
         * permission on all (*). For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM user.</p> <important>
         * <p> You should understand the implications of changing an IAM user's path or
         * name. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming
         * an IAM User</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming
         * an IAM Group</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p> To
         * change a user name, the requester must have appropriate permissions on both the
         * source object and the target object. For example, to change Bob to Robert, the
         * entity making the request must have permission on Bob and Robert, or must have
         * permission on all (*). For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM user.</p> <important>
         * <p> You should understand the implications of changing an IAM user's path or
         * name. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming
         * an IAM User</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming
         * an IAM Group</a> in the <i>IAM User Guide</i>.</p> </important> <note> <p> To
         * change a user name, the requester must have appropriate permissions on both the
         * source object and the target object. For example, to change Bob to Robert, the
         * entity making the request must have permission on Bob and Robert, or must have
         * permission on all (*). For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and Policies</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an SSH public key and associates it with the specified IAM user.</p>
         * <p>The SSH public key uploaded by this operation can be used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadSSHPublicKeyOutcome UploadSSHPublicKey(const Model::UploadSSHPublicKeyRequest& request) const;

        /**
         * <p>Uploads an SSH public key and associates it with the specified IAM user.</p>
         * <p>The SSH public key uploaded by this operation can be used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadSSHPublicKeyOutcomeCallable UploadSSHPublicKeyCallable(const Model::UploadSSHPublicKeyRequest& request) const;

        /**
         * <p>Uploads an SSH public key and associates it with the specified IAM user.</p>
         * <p>The SSH public key uploaded by this operation can be used only for
         * authenticating the associated IAM user to an AWS CodeCommit repository. For more
         * information about using SSH keys to authenticate to an AWS CodeCommit
         * repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up AWS CodeCommit for SSH Connections</a> in the <i>AWS CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadSSHPublicKeyAsync(const Model::UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a server certificate entity for the AWS account. The server
         * certificate entity includes a public key certificate, a private key, and an
         * optional certificate chain, which should all be PEM-encoded.</p> <p>We recommend
         * that you use <a href="https://docs.aws.amazon.com/acm/">AWS Certificate
         * Manager</a> to provision, manage, and deploy your server certificates. With ACM
         * you can request a certificate, deploy it to AWS resources, and let ACM handle
         * certificate renewals for you. Certificates provided by ACM are free. For more
         * information about using ACM, see the <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager
         * User Guide</a>.</p> <p>For more information about working with server
         * certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of AWS services that can use the server certificates that you manage with
         * IAM.</p> <p>For information about the number of server certificates you can
         * upload, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html">Limitations
         * on IAM Entities and Objects</a> in the <i>IAM User Guide</i>.</p> <note>
         * <p>Because the body of the public key certificate, private key, and the
         * certificate chain can be large, you should use POST rather than GET when calling
         * <code>UploadServerCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling
         * the API by Making HTTP Query Requests</a> in the <i>IAM User Guide</i>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadServerCertificateOutcome UploadServerCertificate(const Model::UploadServerCertificateRequest& request) const;

        /**
         * <p>Uploads a server certificate entity for the AWS account. The server
         * certificate entity includes a public key certificate, a private key, and an
         * optional certificate chain, which should all be PEM-encoded.</p> <p>We recommend
         * that you use <a href="https://docs.aws.amazon.com/acm/">AWS Certificate
         * Manager</a> to provision, manage, and deploy your server certificates. With ACM
         * you can request a certificate, deploy it to AWS resources, and let ACM handle
         * certificate renewals for you. Certificates provided by ACM are free. For more
         * information about using ACM, see the <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager
         * User Guide</a>.</p> <p>For more information about working with server
         * certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of AWS services that can use the server certificates that you manage with
         * IAM.</p> <p>For information about the number of server certificates you can
         * upload, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html">Limitations
         * on IAM Entities and Objects</a> in the <i>IAM User Guide</i>.</p> <note>
         * <p>Because the body of the public key certificate, private key, and the
         * certificate chain can be large, you should use POST rather than GET when calling
         * <code>UploadServerCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling
         * the API by Making HTTP Query Requests</a> in the <i>IAM User Guide</i>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadServerCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadServerCertificateOutcomeCallable UploadServerCertificateCallable(const Model::UploadServerCertificateRequest& request) const;

        /**
         * <p>Uploads a server certificate entity for the AWS account. The server
         * certificate entity includes a public key certificate, a private key, and an
         * optional certificate chain, which should all be PEM-encoded.</p> <p>We recommend
         * that you use <a href="https://docs.aws.amazon.com/acm/">AWS Certificate
         * Manager</a> to provision, manage, and deploy your server certificates. With ACM
         * you can request a certificate, deploy it to AWS resources, and let ACM handle
         * certificate renewals for you. Certificates provided by ACM are free. For more
         * information about using ACM, see the <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager
         * User Guide</a>.</p> <p>For more information about working with server
         * certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with Server Certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of AWS services that can use the server certificates that you manage with
         * IAM.</p> <p>For information about the number of server certificates you can
         * upload, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-limits.html">Limitations
         * on IAM Entities and Objects</a> in the <i>IAM User Guide</i>.</p> <note>
         * <p>Because the body of the public key certificate, private key, and the
         * certificate chain can be large, you should use POST rather than GET when calling
         * <code>UploadServerCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling
         * the API by Making HTTP Query Requests</a> in the <i>IAM User Guide</i>.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadServerCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadServerCertificateAsync(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an X.509 signing certificate and associates it with the specified IAM
         * user. Some AWS services use X.509 signing certificates to validate requests that
         * are signed with a corresponding private key. When you upload the certificate,
         * its default status is <code>Active</code>.</p> <p>If the <code>UserName</code>
         * is not specified, the IAM user name is determined implicitly based on the AWS
         * access key ID used to sign the request. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p> <note> <p>Because the body of an X.509 certificate can be large, you
         * should use POST rather than GET when calling
         * <code>UploadSigningCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadSigningCertificateOutcome UploadSigningCertificate(const Model::UploadSigningCertificateRequest& request) const;

        /**
         * <p>Uploads an X.509 signing certificate and associates it with the specified IAM
         * user. Some AWS services use X.509 signing certificates to validate requests that
         * are signed with a corresponding private key. When you upload the certificate,
         * its default status is <code>Active</code>.</p> <p>If the <code>UserName</code>
         * is not specified, the IAM user name is determined implicitly based on the AWS
         * access key ID used to sign the request. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p> <note> <p>Because the body of an X.509 certificate can be large, you
         * should use POST rather than GET when calling
         * <code>UploadSigningCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSigningCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadSigningCertificateOutcomeCallable UploadSigningCertificateCallable(const Model::UploadSigningCertificateRequest& request) const;

        /**
         * <p>Uploads an X.509 signing certificate and associates it with the specified IAM
         * user. Some AWS services use X.509 signing certificates to validate requests that
         * are signed with a corresponding private key. When you upload the certificate,
         * its default status is <code>Active</code>.</p> <p>If the <code>UserName</code>
         * is not specified, the IAM user name is determined implicitly based on the AWS
         * access key ID used to sign the request. This operation works for access keys
         * under the AWS account. Consequently, you can use this operation to manage AWS
         * account root user credentials even if the AWS account has no associated
         * users.</p> <note> <p>Because the body of an X.509 certificate can be large, you
         * should use POST rather than GET when calling
         * <code>UploadSigningCertificate</code>. For information about setting up
         * signatures and authorization through the API, go to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * AWS API Requests</a> in the <i>AWS General Reference</i>. For general
         * information about using the Query API with IAM, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * Query Requests</a> in the <i>IAM User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSigningCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadSigningCertificateAsync(const Model::UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
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
        void CreateServiceLinkedRoleAsyncHelper(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceSpecificCredentialAsyncHelper(const Model::CreateServiceSpecificCredentialRequest& request, const CreateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void DeleteRolePermissionsBoundaryAsyncHelper(const Model::DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRolePolicyAsyncHelper(const Model::DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSAMLProviderAsyncHelper(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSSHPublicKeyAsyncHelper(const Model::DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServerCertificateAsyncHelper(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceLinkedRoleAsyncHelper(const Model::DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceSpecificCredentialAsyncHelper(const Model::DeleteServiceSpecificCredentialRequest& request, const DeleteServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSigningCertificateAsyncHelper(const Model::DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPermissionsBoundaryAsyncHelper(const Model::DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPolicyAsyncHelper(const Model::DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualMFADeviceAsyncHelper(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachGroupPolicyAsyncHelper(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachRolePolicyAsyncHelper(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachUserPolicyAsyncHelper(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableMFADeviceAsyncHelper(const Model::EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateCredentialReportAsyncHelper(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateOrganizationsAccessReportAsyncHelper(const Model::GenerateOrganizationsAccessReportRequest& request, const GenerateOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateServiceLastAccessedDetailsAsyncHelper(const Model::GenerateServiceLastAccessedDetailsRequest& request, const GenerateServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void GetOrganizationsAccessReportAsyncHelper(const Model::GetOrganizationsAccessReportRequest& request, const GetOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyVersionAsyncHelper(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoleAsyncHelper(const Model::GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRolePolicyAsyncHelper(const Model::GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSAMLProviderAsyncHelper(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSSHPublicKeyAsyncHelper(const Model::GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServerCertificateAsyncHelper(const Model::GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceLastAccessedDetailsAsyncHelper(const Model::GetServiceLastAccessedDetailsRequest& request, const GetServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceLastAccessedDetailsWithEntitiesAsyncHelper(const Model::GetServiceLastAccessedDetailsWithEntitiesRequest& request, const GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceLinkedRoleDeletionStatusAsyncHelper(const Model::GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void ListPoliciesGrantingServiceAccessAsyncHelper(const Model::ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPolicyVersionsAsyncHelper(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRolePoliciesAsyncHelper(const Model::ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoleTagsAsyncHelper(const Model::ListRoleTagsRequest& request, const ListRoleTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRolesAsyncHelper(const Model::ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSAMLProvidersAsyncHelper(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSSHPublicKeysAsyncHelper(const Model::ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServerCertificatesAsyncHelper(const Model::ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServiceSpecificCredentialsAsyncHelper(const Model::ListServiceSpecificCredentialsRequest& request, const ListServiceSpecificCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSigningCertificatesAsyncHelper(const Model::ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoliciesAsyncHelper(const Model::ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserTagsAsyncHelper(const Model::ListUserTagsRequest& request, const ListUserTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualMFADevicesAsyncHelper(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutGroupPolicyAsyncHelper(const Model::PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRolePermissionsBoundaryAsyncHelper(const Model::PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRolePolicyAsyncHelper(const Model::PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutUserPermissionsBoundaryAsyncHelper(const Model::PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutUserPolicyAsyncHelper(const Model::PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveClientIDFromOpenIDConnectProviderAsyncHelper(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveRoleFromInstanceProfileAsyncHelper(const Model::RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveUserFromGroupAsyncHelper(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetServiceSpecificCredentialAsyncHelper(const Model::ResetServiceSpecificCredentialRequest& request, const ResetServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResyncMFADeviceAsyncHelper(const Model::ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultPolicyVersionAsyncHelper(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSecurityTokenServicePreferencesAsyncHelper(const Model::SetSecurityTokenServicePreferencesRequest& request, const SetSecurityTokenServicePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SimulateCustomPolicyAsyncHelper(const Model::SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SimulatePrincipalPolicyAsyncHelper(const Model::SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagRoleAsyncHelper(const Model::TagRoleRequest& request, const TagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagUserAsyncHelper(const Model::TagUserRequest& request, const TagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagRoleAsyncHelper(const Model::UntagRoleRequest& request, const UntagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagUserAsyncHelper(const Model::UntagUserRequest& request, const UntagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccessKeyAsyncHelper(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountPasswordPolicyAsyncHelper(const Model::UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssumeRolePolicyAsyncHelper(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLoginProfileAsyncHelper(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOpenIDConnectProviderThumbprintAsyncHelper(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoleAsyncHelper(const Model::UpdateRoleRequest& request, const UpdateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoleDescriptionAsyncHelper(const Model::UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSAMLProviderAsyncHelper(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSSHPublicKeyAsyncHelper(const Model::UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServerCertificateAsyncHelper(const Model::UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceSpecificCredentialAsyncHelper(const Model::UpdateServiceSpecificCredentialRequest& request, const UpdateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSigningCertificateAsyncHelper(const Model::UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadSSHPublicKeyAsyncHelper(const Model::UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadServerCertificateAsyncHelper(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadSigningCertificateAsyncHelper(const Model::UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IAM
} // namespace Aws
