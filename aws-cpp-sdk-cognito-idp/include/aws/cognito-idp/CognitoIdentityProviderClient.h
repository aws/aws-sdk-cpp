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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-idp/model/AddCustomAttributesResult.h>
#include <aws/cognito-idp/model/AdminConfirmSignUpResult.h>
#include <aws/cognito-idp/model/AdminCreateUserResult.h>
#include <aws/cognito-idp/model/AdminDeleteUserAttributesResult.h>
#include <aws/cognito-idp/model/AdminDisableProviderForUserResult.h>
#include <aws/cognito-idp/model/AdminDisableUserResult.h>
#include <aws/cognito-idp/model/AdminEnableUserResult.h>
#include <aws/cognito-idp/model/AdminGetDeviceResult.h>
#include <aws/cognito-idp/model/AdminGetUserResult.h>
#include <aws/cognito-idp/model/AdminInitiateAuthResult.h>
#include <aws/cognito-idp/model/AdminLinkProviderForUserResult.h>
#include <aws/cognito-idp/model/AdminListDevicesResult.h>
#include <aws/cognito-idp/model/AdminListGroupsForUserResult.h>
#include <aws/cognito-idp/model/AdminListUserAuthEventsResult.h>
#include <aws/cognito-idp/model/AdminResetUserPasswordResult.h>
#include <aws/cognito-idp/model/AdminRespondToAuthChallengeResult.h>
#include <aws/cognito-idp/model/AdminSetUserMFAPreferenceResult.h>
#include <aws/cognito-idp/model/AdminSetUserPasswordResult.h>
#include <aws/cognito-idp/model/AdminSetUserSettingsResult.h>
#include <aws/cognito-idp/model/AdminUpdateAuthEventFeedbackResult.h>
#include <aws/cognito-idp/model/AdminUpdateDeviceStatusResult.h>
#include <aws/cognito-idp/model/AdminUpdateUserAttributesResult.h>
#include <aws/cognito-idp/model/AdminUserGlobalSignOutResult.h>
#include <aws/cognito-idp/model/AssociateSoftwareTokenResult.h>
#include <aws/cognito-idp/model/ChangePasswordResult.h>
#include <aws/cognito-idp/model/ConfirmDeviceResult.h>
#include <aws/cognito-idp/model/ConfirmForgotPasswordResult.h>
#include <aws/cognito-idp/model/ConfirmSignUpResult.h>
#include <aws/cognito-idp/model/CreateGroupResult.h>
#include <aws/cognito-idp/model/CreateIdentityProviderResult.h>
#include <aws/cognito-idp/model/CreateResourceServerResult.h>
#include <aws/cognito-idp/model/CreateUserImportJobResult.h>
#include <aws/cognito-idp/model/CreateUserPoolResult.h>
#include <aws/cognito-idp/model/CreateUserPoolClientResult.h>
#include <aws/cognito-idp/model/CreateUserPoolDomainResult.h>
#include <aws/cognito-idp/model/DeleteUserAttributesResult.h>
#include <aws/cognito-idp/model/DeleteUserPoolDomainResult.h>
#include <aws/cognito-idp/model/DescribeIdentityProviderResult.h>
#include <aws/cognito-idp/model/DescribeResourceServerResult.h>
#include <aws/cognito-idp/model/DescribeRiskConfigurationResult.h>
#include <aws/cognito-idp/model/DescribeUserImportJobResult.h>
#include <aws/cognito-idp/model/DescribeUserPoolResult.h>
#include <aws/cognito-idp/model/DescribeUserPoolClientResult.h>
#include <aws/cognito-idp/model/DescribeUserPoolDomainResult.h>
#include <aws/cognito-idp/model/ForgotPasswordResult.h>
#include <aws/cognito-idp/model/GetCSVHeaderResult.h>
#include <aws/cognito-idp/model/GetDeviceResult.h>
#include <aws/cognito-idp/model/GetGroupResult.h>
#include <aws/cognito-idp/model/GetIdentityProviderByIdentifierResult.h>
#include <aws/cognito-idp/model/GetSigningCertificateResult.h>
#include <aws/cognito-idp/model/GetUICustomizationResult.h>
#include <aws/cognito-idp/model/GetUserResult.h>
#include <aws/cognito-idp/model/GetUserAttributeVerificationCodeResult.h>
#include <aws/cognito-idp/model/GetUserPoolMfaConfigResult.h>
#include <aws/cognito-idp/model/GlobalSignOutResult.h>
#include <aws/cognito-idp/model/InitiateAuthResult.h>
#include <aws/cognito-idp/model/ListDevicesResult.h>
#include <aws/cognito-idp/model/ListGroupsResult.h>
#include <aws/cognito-idp/model/ListIdentityProvidersResult.h>
#include <aws/cognito-idp/model/ListResourceServersResult.h>
#include <aws/cognito-idp/model/ListTagsForResourceResult.h>
#include <aws/cognito-idp/model/ListUserImportJobsResult.h>
#include <aws/cognito-idp/model/ListUserPoolClientsResult.h>
#include <aws/cognito-idp/model/ListUserPoolsResult.h>
#include <aws/cognito-idp/model/ListUsersResult.h>
#include <aws/cognito-idp/model/ListUsersInGroupResult.h>
#include <aws/cognito-idp/model/ResendConfirmationCodeResult.h>
#include <aws/cognito-idp/model/RespondToAuthChallengeResult.h>
#include <aws/cognito-idp/model/SetRiskConfigurationResult.h>
#include <aws/cognito-idp/model/SetUICustomizationResult.h>
#include <aws/cognito-idp/model/SetUserMFAPreferenceResult.h>
#include <aws/cognito-idp/model/SetUserPoolMfaConfigResult.h>
#include <aws/cognito-idp/model/SetUserSettingsResult.h>
#include <aws/cognito-idp/model/SignUpResult.h>
#include <aws/cognito-idp/model/StartUserImportJobResult.h>
#include <aws/cognito-idp/model/StopUserImportJobResult.h>
#include <aws/cognito-idp/model/TagResourceResult.h>
#include <aws/cognito-idp/model/UntagResourceResult.h>
#include <aws/cognito-idp/model/UpdateAuthEventFeedbackResult.h>
#include <aws/cognito-idp/model/UpdateDeviceStatusResult.h>
#include <aws/cognito-idp/model/UpdateGroupResult.h>
#include <aws/cognito-idp/model/UpdateIdentityProviderResult.h>
#include <aws/cognito-idp/model/UpdateResourceServerResult.h>
#include <aws/cognito-idp/model/UpdateUserAttributesResult.h>
#include <aws/cognito-idp/model/UpdateUserPoolResult.h>
#include <aws/cognito-idp/model/UpdateUserPoolClientResult.h>
#include <aws/cognito-idp/model/UpdateUserPoolDomainResult.h>
#include <aws/cognito-idp/model/VerifySoftwareTokenResult.h>
#include <aws/cognito-idp/model/VerifyUserAttributeResult.h>
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

namespace CognitoIdentityProvider
{

namespace Model
{
        class AddCustomAttributesRequest;
        class AdminAddUserToGroupRequest;
        class AdminConfirmSignUpRequest;
        class AdminCreateUserRequest;
        class AdminDeleteUserRequest;
        class AdminDeleteUserAttributesRequest;
        class AdminDisableProviderForUserRequest;
        class AdminDisableUserRequest;
        class AdminEnableUserRequest;
        class AdminForgetDeviceRequest;
        class AdminGetDeviceRequest;
        class AdminGetUserRequest;
        class AdminInitiateAuthRequest;
        class AdminLinkProviderForUserRequest;
        class AdminListDevicesRequest;
        class AdminListGroupsForUserRequest;
        class AdminListUserAuthEventsRequest;
        class AdminRemoveUserFromGroupRequest;
        class AdminResetUserPasswordRequest;
        class AdminRespondToAuthChallengeRequest;
        class AdminSetUserMFAPreferenceRequest;
        class AdminSetUserPasswordRequest;
        class AdminSetUserSettingsRequest;
        class AdminUpdateAuthEventFeedbackRequest;
        class AdminUpdateDeviceStatusRequest;
        class AdminUpdateUserAttributesRequest;
        class AdminUserGlobalSignOutRequest;
        class AssociateSoftwareTokenRequest;
        class ChangePasswordRequest;
        class ConfirmDeviceRequest;
        class ConfirmForgotPasswordRequest;
        class ConfirmSignUpRequest;
        class CreateGroupRequest;
        class CreateIdentityProviderRequest;
        class CreateResourceServerRequest;
        class CreateUserImportJobRequest;
        class CreateUserPoolRequest;
        class CreateUserPoolClientRequest;
        class CreateUserPoolDomainRequest;
        class DeleteGroupRequest;
        class DeleteIdentityProviderRequest;
        class DeleteResourceServerRequest;
        class DeleteUserRequest;
        class DeleteUserAttributesRequest;
        class DeleteUserPoolRequest;
        class DeleteUserPoolClientRequest;
        class DeleteUserPoolDomainRequest;
        class DescribeIdentityProviderRequest;
        class DescribeResourceServerRequest;
        class DescribeRiskConfigurationRequest;
        class DescribeUserImportJobRequest;
        class DescribeUserPoolRequest;
        class DescribeUserPoolClientRequest;
        class DescribeUserPoolDomainRequest;
        class ForgetDeviceRequest;
        class ForgotPasswordRequest;
        class GetCSVHeaderRequest;
        class GetDeviceRequest;
        class GetGroupRequest;
        class GetIdentityProviderByIdentifierRequest;
        class GetSigningCertificateRequest;
        class GetUICustomizationRequest;
        class GetUserRequest;
        class GetUserAttributeVerificationCodeRequest;
        class GetUserPoolMfaConfigRequest;
        class GlobalSignOutRequest;
        class InitiateAuthRequest;
        class ListDevicesRequest;
        class ListGroupsRequest;
        class ListIdentityProvidersRequest;
        class ListResourceServersRequest;
        class ListTagsForResourceRequest;
        class ListUserImportJobsRequest;
        class ListUserPoolClientsRequest;
        class ListUserPoolsRequest;
        class ListUsersRequest;
        class ListUsersInGroupRequest;
        class ResendConfirmationCodeRequest;
        class RespondToAuthChallengeRequest;
        class SetRiskConfigurationRequest;
        class SetUICustomizationRequest;
        class SetUserMFAPreferenceRequest;
        class SetUserPoolMfaConfigRequest;
        class SetUserSettingsRequest;
        class SignUpRequest;
        class StartUserImportJobRequest;
        class StopUserImportJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAuthEventFeedbackRequest;
        class UpdateDeviceStatusRequest;
        class UpdateGroupRequest;
        class UpdateIdentityProviderRequest;
        class UpdateResourceServerRequest;
        class UpdateUserAttributesRequest;
        class UpdateUserPoolRequest;
        class UpdateUserPoolClientRequest;
        class UpdateUserPoolDomainRequest;
        class VerifySoftwareTokenRequest;
        class VerifyUserAttributeRequest;

        typedef Aws::Utils::Outcome<AddCustomAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AddCustomAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminAddUserToGroupOutcome;
        typedef Aws::Utils::Outcome<AdminConfirmSignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminConfirmSignUpOutcome;
        typedef Aws::Utils::Outcome<AdminCreateUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminCreateUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDeleteUserOutcome;
        typedef Aws::Utils::Outcome<AdminDeleteUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDeleteUserAttributesOutcome;
        typedef Aws::Utils::Outcome<AdminDisableProviderForUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDisableProviderForUserOutcome;
        typedef Aws::Utils::Outcome<AdminDisableUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDisableUserOutcome;
        typedef Aws::Utils::Outcome<AdminEnableUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminEnableUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminForgetDeviceOutcome;
        typedef Aws::Utils::Outcome<AdminGetDeviceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminGetDeviceOutcome;
        typedef Aws::Utils::Outcome<AdminGetUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminGetUserOutcome;
        typedef Aws::Utils::Outcome<AdminInitiateAuthResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminInitiateAuthOutcome;
        typedef Aws::Utils::Outcome<AdminLinkProviderForUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminLinkProviderForUserOutcome;
        typedef Aws::Utils::Outcome<AdminListDevicesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminListDevicesOutcome;
        typedef Aws::Utils::Outcome<AdminListGroupsForUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminListGroupsForUserOutcome;
        typedef Aws::Utils::Outcome<AdminListUserAuthEventsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminListUserAuthEventsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminRemoveUserFromGroupOutcome;
        typedef Aws::Utils::Outcome<AdminResetUserPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminResetUserPasswordOutcome;
        typedef Aws::Utils::Outcome<AdminRespondToAuthChallengeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminRespondToAuthChallengeOutcome;
        typedef Aws::Utils::Outcome<AdminSetUserMFAPreferenceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminSetUserMFAPreferenceOutcome;
        typedef Aws::Utils::Outcome<AdminSetUserPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminSetUserPasswordOutcome;
        typedef Aws::Utils::Outcome<AdminSetUserSettingsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminSetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<AdminUpdateAuthEventFeedbackResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUpdateAuthEventFeedbackOutcome;
        typedef Aws::Utils::Outcome<AdminUpdateDeviceStatusResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUpdateDeviceStatusOutcome;
        typedef Aws::Utils::Outcome<AdminUpdateUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUpdateUserAttributesOutcome;
        typedef Aws::Utils::Outcome<AdminUserGlobalSignOutResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUserGlobalSignOutOutcome;
        typedef Aws::Utils::Outcome<AssociateSoftwareTokenResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AssociateSoftwareTokenOutcome;
        typedef Aws::Utils::Outcome<ChangePasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ChangePasswordOutcome;
        typedef Aws::Utils::Outcome<ConfirmDeviceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmDeviceOutcome;
        typedef Aws::Utils::Outcome<ConfirmForgotPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmForgotPasswordOutcome;
        typedef Aws::Utils::Outcome<ConfirmSignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmSignUpOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateIdentityProviderResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<CreateResourceServerResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateResourceServerOutcome;
        typedef Aws::Utils::Outcome<CreateUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserImportJobOutcome;
        typedef Aws::Utils::Outcome<CreateUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserPoolOutcome;
        typedef Aws::Utils::Outcome<CreateUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<CreateUserPoolDomainResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserPoolDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteResourceServerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DeleteUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserPoolOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<DeleteUserPoolDomainResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserPoolDomainOutcome;
        typedef Aws::Utils::Outcome<DescribeIdentityProviderResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<DescribeResourceServerResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeResourceServerOutcome;
        typedef Aws::Utils::Outcome<DescribeRiskConfigurationResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeRiskConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserImportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserPoolOutcome;
        typedef Aws::Utils::Outcome<DescribeUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<DescribeUserPoolDomainResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserPoolDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ForgetDeviceOutcome;
        typedef Aws::Utils::Outcome<ForgotPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ForgotPasswordOutcome;
        typedef Aws::Utils::Outcome<GetCSVHeaderResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetCSVHeaderOutcome;
        typedef Aws::Utils::Outcome<GetDeviceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetDeviceOutcome;
        typedef Aws::Utils::Outcome<GetGroupResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetGroupOutcome;
        typedef Aws::Utils::Outcome<GetIdentityProviderByIdentifierResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetIdentityProviderByIdentifierOutcome;
        typedef Aws::Utils::Outcome<GetSigningCertificateResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetSigningCertificateOutcome;
        typedef Aws::Utils::Outcome<GetUICustomizationResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUICustomizationOutcome;
        typedef Aws::Utils::Outcome<GetUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUserOutcome;
        typedef Aws::Utils::Outcome<GetUserAttributeVerificationCodeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUserAttributeVerificationCodeOutcome;
        typedef Aws::Utils::Outcome<GetUserPoolMfaConfigResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUserPoolMfaConfigOutcome;
        typedef Aws::Utils::Outcome<GlobalSignOutResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GlobalSignOutOutcome;
        typedef Aws::Utils::Outcome<InitiateAuthResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> InitiateAuthOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<ListIdentityProvidersResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListIdentityProvidersOutcome;
        typedef Aws::Utils::Outcome<ListResourceServersResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListResourceServersOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListUserImportJobsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserImportJobsOutcome;
        typedef Aws::Utils::Outcome<ListUserPoolClientsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserPoolClientsOutcome;
        typedef Aws::Utils::Outcome<ListUserPoolsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserPoolsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ListUsersInGroupResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUsersInGroupOutcome;
        typedef Aws::Utils::Outcome<ResendConfirmationCodeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ResendConfirmationCodeOutcome;
        typedef Aws::Utils::Outcome<RespondToAuthChallengeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> RespondToAuthChallengeOutcome;
        typedef Aws::Utils::Outcome<SetRiskConfigurationResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SetRiskConfigurationOutcome;
        typedef Aws::Utils::Outcome<SetUICustomizationResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SetUICustomizationOutcome;
        typedef Aws::Utils::Outcome<SetUserMFAPreferenceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SetUserMFAPreferenceOutcome;
        typedef Aws::Utils::Outcome<SetUserPoolMfaConfigResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SetUserPoolMfaConfigOutcome;
        typedef Aws::Utils::Outcome<SetUserSettingsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<SignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SignUpOutcome;
        typedef Aws::Utils::Outcome<StartUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> StartUserImportJobOutcome;
        typedef Aws::Utils::Outcome<StopUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> StopUserImportJobOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAuthEventFeedbackResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateAuthEventFeedbackOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceStatusResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateDeviceStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateIdentityProviderResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceServerResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateResourceServerOutcome;
        typedef Aws::Utils::Outcome<UpdateUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserPoolOutcome;
        typedef Aws::Utils::Outcome<UpdateUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<UpdateUserPoolDomainResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserPoolDomainOutcome;
        typedef Aws::Utils::Outcome<VerifySoftwareTokenResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> VerifySoftwareTokenOutcome;
        typedef Aws::Utils::Outcome<VerifyUserAttributeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> VerifyUserAttributeOutcome;

        typedef std::future<AddCustomAttributesOutcome> AddCustomAttributesOutcomeCallable;
        typedef std::future<AdminAddUserToGroupOutcome> AdminAddUserToGroupOutcomeCallable;
        typedef std::future<AdminConfirmSignUpOutcome> AdminConfirmSignUpOutcomeCallable;
        typedef std::future<AdminCreateUserOutcome> AdminCreateUserOutcomeCallable;
        typedef std::future<AdminDeleteUserOutcome> AdminDeleteUserOutcomeCallable;
        typedef std::future<AdminDeleteUserAttributesOutcome> AdminDeleteUserAttributesOutcomeCallable;
        typedef std::future<AdminDisableProviderForUserOutcome> AdminDisableProviderForUserOutcomeCallable;
        typedef std::future<AdminDisableUserOutcome> AdminDisableUserOutcomeCallable;
        typedef std::future<AdminEnableUserOutcome> AdminEnableUserOutcomeCallable;
        typedef std::future<AdminForgetDeviceOutcome> AdminForgetDeviceOutcomeCallable;
        typedef std::future<AdminGetDeviceOutcome> AdminGetDeviceOutcomeCallable;
        typedef std::future<AdminGetUserOutcome> AdminGetUserOutcomeCallable;
        typedef std::future<AdminInitiateAuthOutcome> AdminInitiateAuthOutcomeCallable;
        typedef std::future<AdminLinkProviderForUserOutcome> AdminLinkProviderForUserOutcomeCallable;
        typedef std::future<AdminListDevicesOutcome> AdminListDevicesOutcomeCallable;
        typedef std::future<AdminListGroupsForUserOutcome> AdminListGroupsForUserOutcomeCallable;
        typedef std::future<AdminListUserAuthEventsOutcome> AdminListUserAuthEventsOutcomeCallable;
        typedef std::future<AdminRemoveUserFromGroupOutcome> AdminRemoveUserFromGroupOutcomeCallable;
        typedef std::future<AdminResetUserPasswordOutcome> AdminResetUserPasswordOutcomeCallable;
        typedef std::future<AdminRespondToAuthChallengeOutcome> AdminRespondToAuthChallengeOutcomeCallable;
        typedef std::future<AdminSetUserMFAPreferenceOutcome> AdminSetUserMFAPreferenceOutcomeCallable;
        typedef std::future<AdminSetUserPasswordOutcome> AdminSetUserPasswordOutcomeCallable;
        typedef std::future<AdminSetUserSettingsOutcome> AdminSetUserSettingsOutcomeCallable;
        typedef std::future<AdminUpdateAuthEventFeedbackOutcome> AdminUpdateAuthEventFeedbackOutcomeCallable;
        typedef std::future<AdminUpdateDeviceStatusOutcome> AdminUpdateDeviceStatusOutcomeCallable;
        typedef std::future<AdminUpdateUserAttributesOutcome> AdminUpdateUserAttributesOutcomeCallable;
        typedef std::future<AdminUserGlobalSignOutOutcome> AdminUserGlobalSignOutOutcomeCallable;
        typedef std::future<AssociateSoftwareTokenOutcome> AssociateSoftwareTokenOutcomeCallable;
        typedef std::future<ChangePasswordOutcome> ChangePasswordOutcomeCallable;
        typedef std::future<ConfirmDeviceOutcome> ConfirmDeviceOutcomeCallable;
        typedef std::future<ConfirmForgotPasswordOutcome> ConfirmForgotPasswordOutcomeCallable;
        typedef std::future<ConfirmSignUpOutcome> ConfirmSignUpOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateIdentityProviderOutcome> CreateIdentityProviderOutcomeCallable;
        typedef std::future<CreateResourceServerOutcome> CreateResourceServerOutcomeCallable;
        typedef std::future<CreateUserImportJobOutcome> CreateUserImportJobOutcomeCallable;
        typedef std::future<CreateUserPoolOutcome> CreateUserPoolOutcomeCallable;
        typedef std::future<CreateUserPoolClientOutcome> CreateUserPoolClientOutcomeCallable;
        typedef std::future<CreateUserPoolDomainOutcome> CreateUserPoolDomainOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteIdentityProviderOutcome> DeleteIdentityProviderOutcomeCallable;
        typedef std::future<DeleteResourceServerOutcome> DeleteResourceServerOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserAttributesOutcome> DeleteUserAttributesOutcomeCallable;
        typedef std::future<DeleteUserPoolOutcome> DeleteUserPoolOutcomeCallable;
        typedef std::future<DeleteUserPoolClientOutcome> DeleteUserPoolClientOutcomeCallable;
        typedef std::future<DeleteUserPoolDomainOutcome> DeleteUserPoolDomainOutcomeCallable;
        typedef std::future<DescribeIdentityProviderOutcome> DescribeIdentityProviderOutcomeCallable;
        typedef std::future<DescribeResourceServerOutcome> DescribeResourceServerOutcomeCallable;
        typedef std::future<DescribeRiskConfigurationOutcome> DescribeRiskConfigurationOutcomeCallable;
        typedef std::future<DescribeUserImportJobOutcome> DescribeUserImportJobOutcomeCallable;
        typedef std::future<DescribeUserPoolOutcome> DescribeUserPoolOutcomeCallable;
        typedef std::future<DescribeUserPoolClientOutcome> DescribeUserPoolClientOutcomeCallable;
        typedef std::future<DescribeUserPoolDomainOutcome> DescribeUserPoolDomainOutcomeCallable;
        typedef std::future<ForgetDeviceOutcome> ForgetDeviceOutcomeCallable;
        typedef std::future<ForgotPasswordOutcome> ForgotPasswordOutcomeCallable;
        typedef std::future<GetCSVHeaderOutcome> GetCSVHeaderOutcomeCallable;
        typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
        typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
        typedef std::future<GetIdentityProviderByIdentifierOutcome> GetIdentityProviderByIdentifierOutcomeCallable;
        typedef std::future<GetSigningCertificateOutcome> GetSigningCertificateOutcomeCallable;
        typedef std::future<GetUICustomizationOutcome> GetUICustomizationOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetUserAttributeVerificationCodeOutcome> GetUserAttributeVerificationCodeOutcomeCallable;
        typedef std::future<GetUserPoolMfaConfigOutcome> GetUserPoolMfaConfigOutcomeCallable;
        typedef std::future<GlobalSignOutOutcome> GlobalSignOutOutcomeCallable;
        typedef std::future<InitiateAuthOutcome> InitiateAuthOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<ListIdentityProvidersOutcome> ListIdentityProvidersOutcomeCallable;
        typedef std::future<ListResourceServersOutcome> ListResourceServersOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListUserImportJobsOutcome> ListUserImportJobsOutcomeCallable;
        typedef std::future<ListUserPoolClientsOutcome> ListUserPoolClientsOutcomeCallable;
        typedef std::future<ListUserPoolsOutcome> ListUserPoolsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ListUsersInGroupOutcome> ListUsersInGroupOutcomeCallable;
        typedef std::future<ResendConfirmationCodeOutcome> ResendConfirmationCodeOutcomeCallable;
        typedef std::future<RespondToAuthChallengeOutcome> RespondToAuthChallengeOutcomeCallable;
        typedef std::future<SetRiskConfigurationOutcome> SetRiskConfigurationOutcomeCallable;
        typedef std::future<SetUICustomizationOutcome> SetUICustomizationOutcomeCallable;
        typedef std::future<SetUserMFAPreferenceOutcome> SetUserMFAPreferenceOutcomeCallable;
        typedef std::future<SetUserPoolMfaConfigOutcome> SetUserPoolMfaConfigOutcomeCallable;
        typedef std::future<SetUserSettingsOutcome> SetUserSettingsOutcomeCallable;
        typedef std::future<SignUpOutcome> SignUpOutcomeCallable;
        typedef std::future<StartUserImportJobOutcome> StartUserImportJobOutcomeCallable;
        typedef std::future<StopUserImportJobOutcome> StopUserImportJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAuthEventFeedbackOutcome> UpdateAuthEventFeedbackOutcomeCallable;
        typedef std::future<UpdateDeviceStatusOutcome> UpdateDeviceStatusOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateIdentityProviderOutcome> UpdateIdentityProviderOutcomeCallable;
        typedef std::future<UpdateResourceServerOutcome> UpdateResourceServerOutcomeCallable;
        typedef std::future<UpdateUserAttributesOutcome> UpdateUserAttributesOutcomeCallable;
        typedef std::future<UpdateUserPoolOutcome> UpdateUserPoolOutcomeCallable;
        typedef std::future<UpdateUserPoolClientOutcome> UpdateUserPoolClientOutcomeCallable;
        typedef std::future<UpdateUserPoolDomainOutcome> UpdateUserPoolDomainOutcomeCallable;
        typedef std::future<VerifySoftwareTokenOutcome> VerifySoftwareTokenOutcomeCallable;
        typedef std::future<VerifyUserAttributeOutcome> VerifyUserAttributeOutcomeCallable;
} // namespace Model

  class CognitoIdentityProviderClient;

    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AddCustomAttributesRequest&, const Model::AddCustomAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCustomAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminAddUserToGroupRequest&, const Model::AdminAddUserToGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminAddUserToGroupResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminConfirmSignUpRequest&, const Model::AdminConfirmSignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminConfirmSignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminCreateUserRequest&, const Model::AdminCreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminCreateUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDeleteUserRequest&, const Model::AdminDeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDeleteUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDeleteUserAttributesRequest&, const Model::AdminDeleteUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDeleteUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDisableProviderForUserRequest&, const Model::AdminDisableProviderForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDisableProviderForUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDisableUserRequest&, const Model::AdminDisableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDisableUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminEnableUserRequest&, const Model::AdminEnableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminEnableUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminForgetDeviceRequest&, const Model::AdminForgetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminForgetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminGetDeviceRequest&, const Model::AdminGetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminGetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminGetUserRequest&, const Model::AdminGetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminGetUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminInitiateAuthRequest&, const Model::AdminInitiateAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminInitiateAuthResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminLinkProviderForUserRequest&, const Model::AdminLinkProviderForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminLinkProviderForUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminListDevicesRequest&, const Model::AdminListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminListDevicesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminListGroupsForUserRequest&, const Model::AdminListGroupsForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminListGroupsForUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminListUserAuthEventsRequest&, const Model::AdminListUserAuthEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminListUserAuthEventsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminRemoveUserFromGroupRequest&, const Model::AdminRemoveUserFromGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminRemoveUserFromGroupResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminResetUserPasswordRequest&, const Model::AdminResetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminResetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminRespondToAuthChallengeRequest&, const Model::AdminRespondToAuthChallengeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminRespondToAuthChallengeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminSetUserMFAPreferenceRequest&, const Model::AdminSetUserMFAPreferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminSetUserMFAPreferenceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminSetUserPasswordRequest&, const Model::AdminSetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminSetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminSetUserSettingsRequest&, const Model::AdminSetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminSetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUpdateAuthEventFeedbackRequest&, const Model::AdminUpdateAuthEventFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUpdateAuthEventFeedbackResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUpdateDeviceStatusRequest&, const Model::AdminUpdateDeviceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUpdateDeviceStatusResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUpdateUserAttributesRequest&, const Model::AdminUpdateUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUpdateUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUserGlobalSignOutRequest&, const Model::AdminUserGlobalSignOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUserGlobalSignOutResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AssociateSoftwareTokenRequest&, const Model::AssociateSoftwareTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSoftwareTokenResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ChangePasswordRequest&, const Model::ChangePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangePasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmDeviceRequest&, const Model::ConfirmDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmForgotPasswordRequest&, const Model::ConfirmForgotPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmForgotPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmSignUpRequest&, const Model::ConfirmSignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmSignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateIdentityProviderRequest&, const Model::CreateIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateResourceServerRequest&, const Model::CreateResourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceServerResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserImportJobRequest&, const Model::CreateUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserPoolRequest&, const Model::CreateUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserPoolClientRequest&, const Model::CreateUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserPoolDomainRequest&, const Model::CreateUserPoolDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserPoolDomainResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteIdentityProviderRequest&, const Model::DeleteIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteResourceServerRequest&, const Model::DeleteResourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceServerResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserAttributesRequest&, const Model::DeleteUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserPoolRequest&, const Model::DeleteUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserPoolClientRequest&, const Model::DeleteUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserPoolDomainRequest&, const Model::DeleteUserPoolDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPoolDomainResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeIdentityProviderRequest&, const Model::DescribeIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeResourceServerRequest&, const Model::DescribeResourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceServerResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeRiskConfigurationRequest&, const Model::DescribeRiskConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRiskConfigurationResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserImportJobRequest&, const Model::DescribeUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserPoolRequest&, const Model::DescribeUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserPoolClientRequest&, const Model::DescribeUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserPoolDomainRequest&, const Model::DescribeUserPoolDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserPoolDomainResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ForgetDeviceRequest&, const Model::ForgetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ForgetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ForgotPasswordRequest&, const Model::ForgotPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ForgotPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetCSVHeaderRequest&, const Model::GetCSVHeaderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCSVHeaderResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetIdentityProviderByIdentifierRequest&, const Model::GetIdentityProviderByIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityProviderByIdentifierResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetSigningCertificateRequest&, const Model::GetSigningCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSigningCertificateResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUICustomizationRequest&, const Model::GetUICustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUICustomizationResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUserAttributeVerificationCodeRequest&, const Model::GetUserAttributeVerificationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserAttributeVerificationCodeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUserPoolMfaConfigRequest&, const Model::GetUserPoolMfaConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserPoolMfaConfigResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GlobalSignOutRequest&, const Model::GlobalSignOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GlobalSignOutResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::InitiateAuthRequest&, const Model::InitiateAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateAuthResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListIdentityProvidersRequest&, const Model::ListIdentityProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityProvidersResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListResourceServersRequest&, const Model::ListResourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceServersResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserImportJobsRequest&, const Model::ListUserImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserImportJobsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserPoolClientsRequest&, const Model::ListUserPoolClientsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoolClientsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserPoolsRequest&, const Model::ListUserPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoolsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUsersInGroupRequest&, const Model::ListUsersInGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersInGroupResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ResendConfirmationCodeRequest&, const Model::ResendConfirmationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendConfirmationCodeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::RespondToAuthChallengeRequest&, const Model::RespondToAuthChallengeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RespondToAuthChallengeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetRiskConfigurationRequest&, const Model::SetRiskConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetRiskConfigurationResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetUICustomizationRequest&, const Model::SetUICustomizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetUICustomizationResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetUserMFAPreferenceRequest&, const Model::SetUserMFAPreferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetUserMFAPreferenceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetUserPoolMfaConfigRequest&, const Model::SetUserPoolMfaConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetUserPoolMfaConfigResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetUserSettingsRequest&, const Model::SetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SignUpRequest&, const Model::SignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::StartUserImportJobRequest&, const Model::StartUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::StopUserImportJobRequest&, const Model::StopUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateAuthEventFeedbackRequest&, const Model::UpdateAuthEventFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAuthEventFeedbackResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateDeviceStatusRequest&, const Model::UpdateDeviceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceStatusResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateIdentityProviderRequest&, const Model::UpdateIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateResourceServerRequest&, const Model::UpdateResourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceServerResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserAttributesRequest&, const Model::UpdateUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserPoolRequest&, const Model::UpdateUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserPoolClientRequest&, const Model::UpdateUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserPoolDomainRequest&, const Model::UpdateUserPoolDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPoolDomainResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::VerifySoftwareTokenRequest&, const Model::VerifySoftwareTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifySoftwareTokenResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::VerifyUserAttributeRequest&, const Model::VerifyUserAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyUserAttributeResponseReceivedHandler;

  /**
   * <p>Using the Amazon Cognito User Pools API, you can create a user pool to manage
   * directories and users. You can authenticate a user to obtain tokens related to
   * user identity and access policies.</p> <p>This API reference provides
   * information about user pools in Amazon Cognito User Pools.</p> <p>For more
   * information, see the Amazon Cognito Documentation.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CognitoIdentityProviderClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityProviderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CognitoIdentityProviderClient();

        inline virtual const char* GetServiceClientName() const override { return "Cognito Identity Provider"; }


        /**
         * <p>Adds additional user attributes to the user pool schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddCustomAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCustomAttributesOutcome AddCustomAttributes(const Model::AddCustomAttributesRequest& request) const;

        /**
         * <p>Adds additional user attributes to the user pool schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddCustomAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddCustomAttributesOutcomeCallable AddCustomAttributesCallable(const Model::AddCustomAttributesRequest& request) const;

        /**
         * <p>Adds additional user attributes to the user pool schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddCustomAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddCustomAttributesAsync(const Model::AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified user to the specified group.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminAddUserToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminAddUserToGroupOutcome AdminAddUserToGroup(const Model::AdminAddUserToGroupRequest& request) const;

        /**
         * <p>Adds the specified user to the specified group.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminAddUserToGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminAddUserToGroupOutcomeCallable AdminAddUserToGroupCallable(const Model::AdminAddUserToGroupRequest& request) const;

        /**
         * <p>Adds the specified user to the specified group.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminAddUserToGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminAddUserToGroupAsync(const Model::AdminAddUserToGroupRequest& request, const AdminAddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms user registration as an admin without using a confirmation code.
         * Works on any user.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminConfirmSignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminConfirmSignUpOutcome AdminConfirmSignUp(const Model::AdminConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms user registration as an admin without using a confirmation code.
         * Works on any user.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminConfirmSignUp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminConfirmSignUpOutcomeCallable AdminConfirmSignUpCallable(const Model::AdminConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms user registration as an admin without using a confirmation code.
         * Works on any user.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminConfirmSignUp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminConfirmSignUpAsync(const Model::AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user in the specified user pool.</p> <p>If
         * <code>MessageAction</code> is not set, the default is to send a welcome message
         * via email or phone (SMS).</p> <note> <p>This message is based on a template that
         * you configured in your call to or . This template includes your custom sign-up
         * instructions and placeholders for user name and temporary password.</p> </note>
         * <p>Alternatively, you can call AdminCreateUser with “SUPPRESS” for the
         * <code>MessageAction</code> parameter, and Amazon Cognito will not send any
         * email. </p> <p>In either case, the user will be in the
         * <code>FORCE_CHANGE_PASSWORD</code> state until they sign in and change their
         * password.</p> <p>AdminCreateUser requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminCreateUserOutcome AdminCreateUser(const Model::AdminCreateUserRequest& request) const;

        /**
         * <p>Creates a new user in the specified user pool.</p> <p>If
         * <code>MessageAction</code> is not set, the default is to send a welcome message
         * via email or phone (SMS).</p> <note> <p>This message is based on a template that
         * you configured in your call to or . This template includes your custom sign-up
         * instructions and placeholders for user name and temporary password.</p> </note>
         * <p>Alternatively, you can call AdminCreateUser with “SUPPRESS” for the
         * <code>MessageAction</code> parameter, and Amazon Cognito will not send any
         * email. </p> <p>In either case, the user will be in the
         * <code>FORCE_CHANGE_PASSWORD</code> state until they sign in and change their
         * password.</p> <p>AdminCreateUser requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminCreateUserOutcomeCallable AdminCreateUserCallable(const Model::AdminCreateUserRequest& request) const;

        /**
         * <p>Creates a new user in the specified user pool.</p> <p>If
         * <code>MessageAction</code> is not set, the default is to send a welcome message
         * via email or phone (SMS).</p> <note> <p>This message is based on a template that
         * you configured in your call to or . This template includes your custom sign-up
         * instructions and placeholders for user name and temporary password.</p> </note>
         * <p>Alternatively, you can call AdminCreateUser with “SUPPRESS” for the
         * <code>MessageAction</code> parameter, and Amazon Cognito will not send any
         * email. </p> <p>In either case, the user will be in the
         * <code>FORCE_CHANGE_PASSWORD</code> state until they sign in and change their
         * password.</p> <p>AdminCreateUser requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminCreateUserAsync(const Model::AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user as an administrator. Works on any user.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDeleteUserOutcome AdminDeleteUser(const Model::AdminDeleteUserRequest& request) const;

        /**
         * <p>Deletes a user as an administrator. Works on any user.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDeleteUserOutcomeCallable AdminDeleteUserCallable(const Model::AdminDeleteUserRequest& request) const;

        /**
         * <p>Deletes a user as an administrator. Works on any user.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDeleteUserAsync(const Model::AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p> <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDeleteUserAttributesOutcome AdminDeleteUserAttributes(const Model::AdminDeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p> <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUserAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDeleteUserAttributesOutcomeCallable AdminDeleteUserAttributesCallable(const Model::AdminDeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p> <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUserAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDeleteUserAttributesAsync(const Model::AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the user from signing in with the specified external (SAML or
         * social) identity provider. If the user to disable is a Cognito User Pools native
         * username + password user, they are not permitted to use their password to
         * sign-in. If the user to disable is a linked external IdP user, any link between
         * that user and an existing user is removed. The next time the external user (no
         * longer attached to the previously linked <code>DestinationUser</code>) signs in,
         * they must create a new user account. See .</p> <p>This action is enabled only
         * for admin access and requires developer credentials.</p> <p>The
         * <code>ProviderName</code> must match the value specified when creating an IdP
         * for the pool. </p> <p>To disable a native username + password user, the
         * <code>ProviderName</code> value must be <code>Cognito</code> and the
         * <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code>, with
         * the <code>ProviderAttributeValue</code> being the name that is used in the user
         * pool for the user.</p> <p>The <code>ProviderAttributeName</code> must always be
         * <code>Cognito_Subject</code> for social identity providers. The
         * <code>ProviderAttributeValue</code> must always be the exact subject that was
         * used when the user was originally linked as a source user.</p> <p>For de-linking
         * a SAML identity, there are two scenarios. If the linked identity has not yet
         * been used to sign-in, the <code>ProviderAttributeName</code> and
         * <code>ProviderAttributeValue</code> must be the same values that were used for
         * the <code>SourceUser</code> when the identities were originally linked in the
         * call. (If the linking was done with <code>ProviderAttributeName</code> set to
         * <code>Cognito_Subject</code>, the same applies here). However, if the user has
         * already signed in, the <code>ProviderAttributeName</code> must be
         * <code>Cognito_Subject</code> and <code>ProviderAttributeValue</code> must be the
         * subject of the SAML assertion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableProviderForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDisableProviderForUserOutcome AdminDisableProviderForUser(const Model::AdminDisableProviderForUserRequest& request) const;

        /**
         * <p>Disables the user from signing in with the specified external (SAML or
         * social) identity provider. If the user to disable is a Cognito User Pools native
         * username + password user, they are not permitted to use their password to
         * sign-in. If the user to disable is a linked external IdP user, any link between
         * that user and an existing user is removed. The next time the external user (no
         * longer attached to the previously linked <code>DestinationUser</code>) signs in,
         * they must create a new user account. See .</p> <p>This action is enabled only
         * for admin access and requires developer credentials.</p> <p>The
         * <code>ProviderName</code> must match the value specified when creating an IdP
         * for the pool. </p> <p>To disable a native username + password user, the
         * <code>ProviderName</code> value must be <code>Cognito</code> and the
         * <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code>, with
         * the <code>ProviderAttributeValue</code> being the name that is used in the user
         * pool for the user.</p> <p>The <code>ProviderAttributeName</code> must always be
         * <code>Cognito_Subject</code> for social identity providers. The
         * <code>ProviderAttributeValue</code> must always be the exact subject that was
         * used when the user was originally linked as a source user.</p> <p>For de-linking
         * a SAML identity, there are two scenarios. If the linked identity has not yet
         * been used to sign-in, the <code>ProviderAttributeName</code> and
         * <code>ProviderAttributeValue</code> must be the same values that were used for
         * the <code>SourceUser</code> when the identities were originally linked in the
         * call. (If the linking was done with <code>ProviderAttributeName</code> set to
         * <code>Cognito_Subject</code>, the same applies here). However, if the user has
         * already signed in, the <code>ProviderAttributeName</code> must be
         * <code>Cognito_Subject</code> and <code>ProviderAttributeValue</code> must be the
         * subject of the SAML assertion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableProviderForUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDisableProviderForUserOutcomeCallable AdminDisableProviderForUserCallable(const Model::AdminDisableProviderForUserRequest& request) const;

        /**
         * <p>Disables the user from signing in with the specified external (SAML or
         * social) identity provider. If the user to disable is a Cognito User Pools native
         * username + password user, they are not permitted to use their password to
         * sign-in. If the user to disable is a linked external IdP user, any link between
         * that user and an existing user is removed. The next time the external user (no
         * longer attached to the previously linked <code>DestinationUser</code>) signs in,
         * they must create a new user account. See .</p> <p>This action is enabled only
         * for admin access and requires developer credentials.</p> <p>The
         * <code>ProviderName</code> must match the value specified when creating an IdP
         * for the pool. </p> <p>To disable a native username + password user, the
         * <code>ProviderName</code> value must be <code>Cognito</code> and the
         * <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code>, with
         * the <code>ProviderAttributeValue</code> being the name that is used in the user
         * pool for the user.</p> <p>The <code>ProviderAttributeName</code> must always be
         * <code>Cognito_Subject</code> for social identity providers. The
         * <code>ProviderAttributeValue</code> must always be the exact subject that was
         * used when the user was originally linked as a source user.</p> <p>For de-linking
         * a SAML identity, there are two scenarios. If the linked identity has not yet
         * been used to sign-in, the <code>ProviderAttributeName</code> and
         * <code>ProviderAttributeValue</code> must be the same values that were used for
         * the <code>SourceUser</code> when the identities were originally linked in the
         * call. (If the linking was done with <code>ProviderAttributeName</code> set to
         * <code>Cognito_Subject</code>, the same applies here). However, if the user has
         * already signed in, the <code>ProviderAttributeName</code> must be
         * <code>Cognito_Subject</code> and <code>ProviderAttributeValue</code> must be the
         * subject of the SAML assertion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableProviderForUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDisableProviderForUserAsync(const Model::AdminDisableProviderForUserRequest& request, const AdminDisableProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified user as an administrator. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDisableUserOutcome AdminDisableUser(const Model::AdminDisableUserRequest& request) const;

        /**
         * <p>Disables the specified user as an administrator. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDisableUserOutcomeCallable AdminDisableUserCallable(const Model::AdminDisableUserRequest& request) const;

        /**
         * <p>Disables the specified user as an administrator. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDisableUserAsync(const Model::AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified user as an administrator. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminEnableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminEnableUserOutcome AdminEnableUser(const Model::AdminEnableUserRequest& request) const;

        /**
         * <p>Enables the specified user as an administrator. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminEnableUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminEnableUserOutcomeCallable AdminEnableUserCallable(const Model::AdminEnableUserRequest& request) const;

        /**
         * <p>Enables the specified user as an administrator. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminEnableUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminEnableUserAsync(const Model::AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forgets the device, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminForgetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminForgetDeviceOutcome AdminForgetDevice(const Model::AdminForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the device, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminForgetDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminForgetDeviceOutcomeCallable AdminForgetDeviceCallable(const Model::AdminForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the device, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminForgetDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminForgetDeviceAsync(const Model::AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the device, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminGetDeviceOutcome AdminGetDevice(const Model::AdminGetDeviceRequest& request) const;

        /**
         * <p>Gets the device, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminGetDeviceOutcomeCallable AdminGetDeviceCallable(const Model::AdminGetDeviceRequest& request) const;

        /**
         * <p>Gets the device, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminGetDeviceAsync(const Model::AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminGetUserOutcome AdminGetUser(const Model::AdminGetUserRequest& request) const;

        /**
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminGetUserOutcomeCallable AdminGetUserCallable(const Model::AdminGetUserRequest& request) const;

        /**
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminGetUserAsync(const Model::AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the authentication flow, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminInitiateAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminInitiateAuthOutcome AdminInitiateAuth(const Model::AdminInitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminInitiateAuth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminInitiateAuthOutcomeCallable AdminInitiateAuthCallable(const Model::AdminInitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminInitiateAuth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminInitiateAuthAsync(const Model::AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Links an existing user account in a user pool (<code>DestinationUser</code>)
         * to an identity from an external identity provider (<code>SourceUser</code>)
         * based on a specified attribute name and value from the external identity
         * provider. This allows you to create a link from the existing user account to an
         * external federated user identity that has not yet been used to sign in, so that
         * the federated user identity can be used to sign in as the existing user account.
         * </p> <p> For example, if there is an existing user with a username and password,
         * this API links that user to a federated user identity, so that when the
         * federated user identity is used, the user signs in as the existing user account.
         * </p> <important> <p>Because this API allows a user with an external federated
         * identity to sign in as an existing user in the user pool, it is critical that it
         * only be used with external identity providers and provider attributes that have
         * been trusted by the application owner.</p> </important> <p>See also .</p>
         * <p>This action is enabled only for admin access and requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminLinkProviderForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminLinkProviderForUserOutcome AdminLinkProviderForUser(const Model::AdminLinkProviderForUserRequest& request) const;

        /**
         * <p>Links an existing user account in a user pool (<code>DestinationUser</code>)
         * to an identity from an external identity provider (<code>SourceUser</code>)
         * based on a specified attribute name and value from the external identity
         * provider. This allows you to create a link from the existing user account to an
         * external federated user identity that has not yet been used to sign in, so that
         * the federated user identity can be used to sign in as the existing user account.
         * </p> <p> For example, if there is an existing user with a username and password,
         * this API links that user to a federated user identity, so that when the
         * federated user identity is used, the user signs in as the existing user account.
         * </p> <important> <p>Because this API allows a user with an external federated
         * identity to sign in as an existing user in the user pool, it is critical that it
         * only be used with external identity providers and provider attributes that have
         * been trusted by the application owner.</p> </important> <p>See also .</p>
         * <p>This action is enabled only for admin access and requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminLinkProviderForUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminLinkProviderForUserOutcomeCallable AdminLinkProviderForUserCallable(const Model::AdminLinkProviderForUserRequest& request) const;

        /**
         * <p>Links an existing user account in a user pool (<code>DestinationUser</code>)
         * to an identity from an external identity provider (<code>SourceUser</code>)
         * based on a specified attribute name and value from the external identity
         * provider. This allows you to create a link from the existing user account to an
         * external federated user identity that has not yet been used to sign in, so that
         * the federated user identity can be used to sign in as the existing user account.
         * </p> <p> For example, if there is an existing user with a username and password,
         * this API links that user to a federated user identity, so that when the
         * federated user identity is used, the user signs in as the existing user account.
         * </p> <important> <p>Because this API allows a user with an external federated
         * identity to sign in as an existing user in the user pool, it is critical that it
         * only be used with external identity providers and provider attributes that have
         * been trusted by the application owner.</p> </important> <p>See also .</p>
         * <p>This action is enabled only for admin access and requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminLinkProviderForUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminLinkProviderForUserAsync(const Model::AdminLinkProviderForUserRequest& request, const AdminLinkProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists devices, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListDevicesOutcome AdminListDevices(const Model::AdminListDevicesRequest& request) const;

        /**
         * <p>Lists devices, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminListDevicesOutcomeCallable AdminListDevicesCallable(const Model::AdminListDevicesRequest& request) const;

        /**
         * <p>Lists devices, as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminListDevicesAsync(const Model::AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the groups that the user belongs to.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListGroupsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListGroupsForUserOutcome AdminListGroupsForUser(const Model::AdminListGroupsForUserRequest& request) const;

        /**
         * <p>Lists the groups that the user belongs to.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListGroupsForUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminListGroupsForUserOutcomeCallable AdminListGroupsForUserCallable(const Model::AdminListGroupsForUserRequest& request) const;

        /**
         * <p>Lists the groups that the user belongs to.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListGroupsForUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminListGroupsForUserAsync(const Model::AdminListGroupsForUserRequest& request, const AdminListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists a history of user activity and any risks detected as part of Amazon
         * Cognito advanced security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListUserAuthEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListUserAuthEventsOutcome AdminListUserAuthEvents(const Model::AdminListUserAuthEventsRequest& request) const;

        /**
         * <p>Lists a history of user activity and any risks detected as part of Amazon
         * Cognito advanced security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListUserAuthEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminListUserAuthEventsOutcomeCallable AdminListUserAuthEventsCallable(const Model::AdminListUserAuthEventsRequest& request) const;

        /**
         * <p>Lists a history of user activity and any risks detected as part of Amazon
         * Cognito advanced security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListUserAuthEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminListUserAuthEventsAsync(const Model::AdminListUserAuthEventsRequest& request, const AdminListUserAuthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified user from the specified group.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRemoveUserFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminRemoveUserFromGroupOutcome AdminRemoveUserFromGroup(const Model::AdminRemoveUserFromGroupRequest& request) const;

        /**
         * <p>Removes the specified user from the specified group.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRemoveUserFromGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminRemoveUserFromGroupOutcomeCallable AdminRemoveUserFromGroupCallable(const Model::AdminRemoveUserFromGroupRequest& request) const;

        /**
         * <p>Removes the specified user from the specified group.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRemoveUserFromGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminRemoveUserFromGroupAsync(const Model::AdminRemoveUserFromGroupRequest& request, const AdminRemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the specified user's password in a user pool as an administrator.
         * Works on any user.</p> <p>When a developer calls this API, the current password
         * is invalidated, so it must be changed. If a user tries to sign in after the API
         * is called, the app will get a PasswordResetRequiredException exception back and
         * should direct the user down the flow to reset the password, which is the same as
         * the forgot password flow. In addition, if the user pool has phone verification
         * selected and a verified phone number exists for the user, or if email
         * verification is selected and a verified email exists for the user, calling this
         * API will also result in sending a message to the end user with the code to
         * change their password.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminResetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminResetUserPasswordOutcome AdminResetUserPassword(const Model::AdminResetUserPasswordRequest& request) const;

        /**
         * <p>Resets the specified user's password in a user pool as an administrator.
         * Works on any user.</p> <p>When a developer calls this API, the current password
         * is invalidated, so it must be changed. If a user tries to sign in after the API
         * is called, the app will get a PasswordResetRequiredException exception back and
         * should direct the user down the flow to reset the password, which is the same as
         * the forgot password flow. In addition, if the user pool has phone verification
         * selected and a verified phone number exists for the user, or if email
         * verification is selected and a verified email exists for the user, calling this
         * API will also result in sending a message to the end user with the code to
         * change their password.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminResetUserPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminResetUserPasswordOutcomeCallable AdminResetUserPasswordCallable(const Model::AdminResetUserPasswordRequest& request) const;

        /**
         * <p>Resets the specified user's password in a user pool as an administrator.
         * Works on any user.</p> <p>When a developer calls this API, the current password
         * is invalidated, so it must be changed. If a user tries to sign in after the API
         * is called, the app will get a PasswordResetRequiredException exception back and
         * should direct the user down the flow to reset the password, which is the same as
         * the forgot password flow. In addition, if the user pool has phone verification
         * selected and a verified phone number exists for the user, or if email
         * verification is selected and a verified email exists for the user, calling this
         * API will also result in sending a message to the end user with the code to
         * change their password.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminResetUserPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminResetUserPasswordAsync(const Model::AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Responds to an authentication challenge, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminRespondToAuthChallengeOutcome AdminRespondToAuthChallenge(const Model::AdminRespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to an authentication challenge, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallenge">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminRespondToAuthChallengeOutcomeCallable AdminRespondToAuthChallengeCallable(const Model::AdminRespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to an authentication challenge, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallenge">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminRespondToAuthChallengeAsync(const Model::AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the user's multi-factor authentication (MFA) preference.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserMFAPreference">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserMFAPreferenceOutcome AdminSetUserMFAPreference(const Model::AdminSetUserMFAPreferenceRequest& request) const;

        /**
         * <p>Sets the user's multi-factor authentication (MFA) preference.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserMFAPreference">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminSetUserMFAPreferenceOutcomeCallable AdminSetUserMFAPreferenceCallable(const Model::AdminSetUserMFAPreferenceRequest& request) const;

        /**
         * <p>Sets the user's multi-factor authentication (MFA) preference.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserMFAPreference">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminSetUserMFAPreferenceAsync(const Model::AdminSetUserMFAPreferenceRequest& request, const AdminSetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::AdminSetUserPasswordOutcome AdminSetUserPassword(const Model::AdminSetUserPasswordRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminSetUserPasswordOutcomeCallable AdminSetUserPasswordCallable(const Model::AdminSetUserPasswordRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminSetUserPasswordAsync(const Model::AdminSetUserPasswordRequest& request, const AdminSetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets all the user settings for a specified user name. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserSettingsOutcome AdminSetUserSettings(const Model::AdminSetUserSettingsRequest& request) const;

        /**
         * <p>Sets all the user settings for a specified user name. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminSetUserSettingsOutcomeCallable AdminSetUserSettingsCallable(const Model::AdminSetUserSettingsRequest& request) const;

        /**
         * <p>Sets all the user settings for a specified user name. Works on any user.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminSetUserSettingsAsync(const Model::AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides feedback for an authentication event as to whether it was from a
         * valid user. This feedback is used for improving the risk evaluation decision for
         * the user pool as part of Amazon Cognito advanced security.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateAuthEventFeedbackOutcome AdminUpdateAuthEventFeedback(const Model::AdminUpdateAuthEventFeedbackRequest& request) const;

        /**
         * <p>Provides feedback for an authentication event as to whether it was from a
         * valid user. This feedback is used for improving the risk evaluation decision for
         * the user pool as part of Amazon Cognito advanced security.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateAuthEventFeedbackOutcomeCallable AdminUpdateAuthEventFeedbackCallable(const Model::AdminUpdateAuthEventFeedbackRequest& request) const;

        /**
         * <p>Provides feedback for an authentication event as to whether it was from a
         * valid user. This feedback is used for improving the risk evaluation decision for
         * the user pool as part of Amazon Cognito advanced security.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateAuthEventFeedbackAsync(const Model::AdminUpdateAuthEventFeedbackRequest& request, const AdminUpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device status as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateDeviceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateDeviceStatusOutcome AdminUpdateDeviceStatus(const Model::AdminUpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateDeviceStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateDeviceStatusOutcomeCallable AdminUpdateDeviceStatusCallable(const Model::AdminUpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status as an administrator.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateDeviceStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateDeviceStatusAsync(const Model::AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user's attributes, including developer attributes, as
         * an administrator. Works on any user.</p> <p>For custom attributes, you must
         * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>In
         * addition to updating user attributes, this API can also be used to mark phone
         * and email as verified.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateUserAttributesOutcome AdminUpdateUserAttributes(const Model::AdminUpdateUserAttributesRequest& request) const;

        /**
         * <p>Updates the specified user's attributes, including developer attributes, as
         * an administrator. Works on any user.</p> <p>For custom attributes, you must
         * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>In
         * addition to updating user attributes, this API can also be used to mark phone
         * and email as verified.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateUserAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateUserAttributesOutcomeCallable AdminUpdateUserAttributesCallable(const Model::AdminUpdateUserAttributesRequest& request) const;

        /**
         * <p>Updates the specified user's attributes, including developer attributes, as
         * an administrator. Works on any user.</p> <p>For custom attributes, you must
         * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>In
         * addition to updating user attributes, this API can also be used to mark phone
         * and email as verified.</p> <p>Requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateUserAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateUserAttributesAsync(const Model::AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signs out users from all devices, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUserGlobalSignOut">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUserGlobalSignOutOutcome AdminUserGlobalSignOut(const Model::AdminUserGlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUserGlobalSignOut">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUserGlobalSignOutOutcomeCallable AdminUserGlobalSignOutCallable(const Model::AdminUserGlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices, as an administrator.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUserGlobalSignOut">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUserGlobalSignOutAsync(const Model::AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique generated shared secret key code for the user account. The
         * request takes an access token or a session string, but not both.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AssociateSoftwareToken">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSoftwareTokenOutcome AssociateSoftwareToken(const Model::AssociateSoftwareTokenRequest& request) const;

        /**
         * <p>Returns a unique generated shared secret key code for the user account. The
         * request takes an access token or a session string, but not both.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AssociateSoftwareToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSoftwareTokenOutcomeCallable AssociateSoftwareTokenCallable(const Model::AssociateSoftwareTokenRequest& request) const;

        /**
         * <p>Returns a unique generated shared secret key code for the user account. The
         * request takes an access token or a session string, but not both.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AssociateSoftwareToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSoftwareTokenAsync(const Model::AssociateSoftwareTokenRequest& request, const AssociateSoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password for a specified user in a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ChangePassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangePasswordOutcome ChangePassword(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password for a specified user in a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ChangePassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password for a specified user in a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ChangePassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms tracking of the device. This API call is the call that begins device
         * tracking.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmDeviceOutcome ConfirmDevice(const Model::ConfirmDeviceRequest& request) const;

        /**
         * <p>Confirms tracking of the device. This API call is the call that begins device
         * tracking.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmDeviceOutcomeCallable ConfirmDeviceCallable(const Model::ConfirmDeviceRequest& request) const;

        /**
         * <p>Confirms tracking of the device. This API call is the call that begins device
         * tracking.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmDeviceAsync(const Model::ConfirmDeviceRequest& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to enter a confirmation code to reset a forgotten
         * password.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmForgotPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmForgotPasswordOutcome ConfirmForgotPassword(const Model::ConfirmForgotPasswordRequest& request) const;

        /**
         * <p>Allows a user to enter a confirmation code to reset a forgotten
         * password.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmForgotPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmForgotPasswordOutcomeCallable ConfirmForgotPasswordCallable(const Model::ConfirmForgotPasswordRequest& request) const;

        /**
         * <p>Allows a user to enter a confirmation code to reset a forgotten
         * password.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmForgotPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmForgotPasswordAsync(const Model::ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms registration of a user and handles the existing alias from a
         * previous user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmSignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmSignUpOutcome ConfirmSignUp(const Model::ConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms registration of a user and handles the existing alias from a
         * previous user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmSignUp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmSignUpOutcomeCallable ConfirmSignUpCallable(const Model::ConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms registration of a user and handles the existing alias from a
         * previous user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmSignUp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmSignUpAsync(const Model::ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new group in the specified user pool.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a new group in the specified user pool.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a new group in the specified user pool.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an identity provider for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityProviderOutcome CreateIdentityProvider(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * <p>Creates an identity provider for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateIdentityProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIdentityProviderOutcomeCallable CreateIdentityProviderCallable(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * <p>Creates an identity provider for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateIdentityProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIdentityProviderAsync(const Model::CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new OAuth2.0 resource server and defines custom scopes in
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceServerOutcome CreateResourceServer(const Model::CreateResourceServerRequest& request) const;

        /**
         * <p>Creates a new OAuth2.0 resource server and defines custom scopes in
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateResourceServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceServerOutcomeCallable CreateResourceServerCallable(const Model::CreateResourceServerRequest& request) const;

        /**
         * <p>Creates a new OAuth2.0 resource server and defines custom scopes in
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateResourceServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceServerAsync(const Model::CreateResourceServerRequest& request, const CreateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserImportJobOutcome CreateUserImportJob(const Model::CreateUserImportJobRequest& request) const;

        /**
         * <p>Creates the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserImportJobOutcomeCallable CreateUserImportJobCallable(const Model::CreateUserImportJobRequest& request) const;

        /**
         * <p>Creates the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserImportJobAsync(const Model::CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Cognito user pool and sets the password policy for the
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolOutcome CreateUserPool(const Model::CreateUserPoolRequest& request) const;

        /**
         * <p>Creates a new Amazon Cognito user pool and sets the password policy for the
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolOutcomeCallable CreateUserPoolCallable(const Model::CreateUserPoolRequest& request) const;

        /**
         * <p>Creates a new Amazon Cognito user pool and sets the password policy for the
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolAsync(const Model::CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the user pool client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolClientOutcome CreateUserPoolClient(const Model::CreateUserPoolClientRequest& request) const;

        /**
         * <p>Creates the user pool client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolClientOutcomeCallable CreateUserPoolClientCallable(const Model::CreateUserPoolClientRequest& request) const;

        /**
         * <p>Creates the user pool client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolClientAsync(const Model::CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolDomainOutcome CreateUserPoolDomain(const Model::CreateUserPoolDomainRequest& request) const;

        /**
         * <p>Creates a new domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolDomainOutcomeCallable CreateUserPoolDomainCallable(const Model::CreateUserPoolDomainRequest& request) const;

        /**
         * <p>Creates a new domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolDomainAsync(const Model::CreateUserPoolDomainRequest& request, const CreateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a group. Currently only groups with no members can be deleted.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a group. Currently only groups with no members can be deleted.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a group. Currently only groups with no members can be deleted.</p>
         * <p>Requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an identity provider for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityProviderOutcome DeleteIdentityProvider(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * <p>Deletes an identity provider for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityProviderOutcomeCallable DeleteIdentityProviderCallable(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * <p>Deletes an identity provider for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityProviderAsync(const Model::DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceServerOutcome DeleteResourceServer(const Model::DeleteResourceServerRequest& request) const;

        /**
         * <p>Deletes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteResourceServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceServerOutcomeCallable DeleteResourceServerCallable(const Model::DeleteResourceServerRequest& request) const;

        /**
         * <p>Deletes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteResourceServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceServerAsync(const Model::DeleteResourceServerRequest& request, const DeleteResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to delete himself or herself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Allows a user to delete himself or herself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Allows a user to delete himself or herself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the attributes for a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserAttributesOutcome DeleteUserAttributes(const Model::DeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the attributes for a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserAttributesOutcomeCallable DeleteUserAttributesCallable(const Model::DeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the attributes for a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAttributesAsync(const Model::DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Cognito user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolOutcome DeleteUserPool(const Model::DeleteUserPoolRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Cognito user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolOutcomeCallable DeleteUserPoolCallable(const Model::DeleteUserPoolRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Cognito user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPoolAsync(const Model::DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the developer to delete the user pool client.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolClientOutcome DeleteUserPoolClient(const Model::DeleteUserPoolClientRequest& request) const;

        /**
         * <p>Allows the developer to delete the user pool client.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolClientOutcomeCallable DeleteUserPoolClientCallable(const Model::DeleteUserPoolClientRequest& request) const;

        /**
         * <p>Allows the developer to delete the user pool client.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPoolClientAsync(const Model::DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolDomainOutcome DeleteUserPoolDomain(const Model::DeleteUserPoolDomainRequest& request) const;

        /**
         * <p>Deletes a domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolDomainOutcomeCallable DeleteUserPoolDomainCallable(const Model::DeleteUserPoolDomainRequest& request) const;

        /**
         * <p>Deletes a domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPoolDomainAsync(const Model::DeleteUserPoolDomainRequest& request, const DeleteUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific identity provider.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityProviderOutcome DescribeIdentityProvider(const Model::DescribeIdentityProviderRequest& request) const;

        /**
         * <p>Gets information about a specific identity provider.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeIdentityProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityProviderOutcomeCallable DescribeIdentityProviderCallable(const Model::DescribeIdentityProviderRequest& request) const;

        /**
         * <p>Gets information about a specific identity provider.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeIdentityProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityProviderAsync(const Model::DescribeIdentityProviderRequest& request, const DescribeIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceServerOutcome DescribeResourceServer(const Model::DescribeResourceServerRequest& request) const;

        /**
         * <p>Describes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeResourceServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceServerOutcomeCallable DescribeResourceServerCallable(const Model::DescribeResourceServerRequest& request) const;

        /**
         * <p>Describes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeResourceServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceServerAsync(const Model::DescribeResourceServerRequest& request, const DescribeResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the risk configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeRiskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRiskConfigurationOutcome DescribeRiskConfiguration(const Model::DescribeRiskConfigurationRequest& request) const;

        /**
         * <p>Describes the risk configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeRiskConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRiskConfigurationOutcomeCallable DescribeRiskConfigurationCallable(const Model::DescribeRiskConfigurationRequest& request) const;

        /**
         * <p>Describes the risk configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeRiskConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRiskConfigurationAsync(const Model::DescribeRiskConfigurationRequest& request, const DescribeRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserImportJobOutcome DescribeUserImportJob(const Model::DescribeUserImportJobRequest& request) const;

        /**
         * <p>Describes the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserImportJobOutcomeCallable DescribeUserImportJobCallable(const Model::DescribeUserImportJobRequest& request) const;

        /**
         * <p>Describes the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserImportJobAsync(const Model::DescribeUserImportJobRequest& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration information and metadata of the specified user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserPoolOutcome DescribeUserPool(const Model::DescribeUserPoolRequest& request) const;

        /**
         * <p>Returns the configuration information and metadata of the specified user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolOutcomeCallable DescribeUserPoolCallable(const Model::DescribeUserPoolRequest& request) const;

        /**
         * <p>Returns the configuration information and metadata of the specified user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserPoolAsync(const Model::DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Client method for returning the configuration information and metadata of the
         * specified user pool app client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserPoolClientOutcome DescribeUserPoolClient(const Model::DescribeUserPoolClientRequest& request) const;

        /**
         * <p>Client method for returning the configuration information and metadata of the
         * specified user pool app client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolClientOutcomeCallable DescribeUserPoolClientCallable(const Model::DescribeUserPoolClientRequest& request) const;

        /**
         * <p>Client method for returning the configuration information and metadata of the
         * specified user pool app client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserPoolClientAsync(const Model::DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserPoolDomainOutcome DescribeUserPoolDomain(const Model::DescribeUserPoolDomainRequest& request) const;

        /**
         * <p>Gets information about a domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolDomainOutcomeCallable DescribeUserPoolDomainCallable(const Model::DescribeUserPoolDomainRequest& request) const;

        /**
         * <p>Gets information about a domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserPoolDomainAsync(const Model::DescribeUserPoolDomainRequest& request, const DescribeUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forgets the specified device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgetDeviceOutcome ForgetDevice(const Model::ForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the specified device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgetDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgetDeviceOutcomeCallable ForgetDeviceCallable(const Model::ForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the specified device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgetDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgetDeviceAsync(const Model::ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Calling this API causes a message to be sent to the end user with a
         * confirmation code that is required to change the user's password. For the
         * <code>Username</code> parameter, you can use the username or user alias. If a
         * verified phone number exists for the user, the confirmation code is sent to the
         * phone number. Otherwise, if a verified email exists, the confirmation code is
         * sent to the email. If neither a verified phone number nor a verified email
         * exists, <code>InvalidParameterException</code> is thrown. To use the
         * confirmation code for resetting the password, call .</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgotPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgotPasswordOutcome ForgotPassword(const Model::ForgotPasswordRequest& request) const;

        /**
         * <p>Calling this API causes a message to be sent to the end user with a
         * confirmation code that is required to change the user's password. For the
         * <code>Username</code> parameter, you can use the username or user alias. If a
         * verified phone number exists for the user, the confirmation code is sent to the
         * phone number. Otherwise, if a verified email exists, the confirmation code is
         * sent to the email. If neither a verified phone number nor a verified email
         * exists, <code>InvalidParameterException</code> is thrown. To use the
         * confirmation code for resetting the password, call .</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgotPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgotPasswordOutcomeCallable ForgotPasswordCallable(const Model::ForgotPasswordRequest& request) const;

        /**
         * <p>Calling this API causes a message to be sent to the end user with a
         * confirmation code that is required to change the user's password. For the
         * <code>Username</code> parameter, you can use the username or user alias. If a
         * verified phone number exists for the user, the confirmation code is sent to the
         * phone number. Otherwise, if a verified email exists, the confirmation code is
         * sent to the email. If neither a verified phone number nor a verified email
         * exists, <code>InvalidParameterException</code> is thrown. To use the
         * confirmation code for resetting the password, call .</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgotPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgotPasswordAsync(const Model::ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the header information for the .csv file to be used as input for the
         * user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetCSVHeader">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCSVHeaderOutcome GetCSVHeader(const Model::GetCSVHeaderRequest& request) const;

        /**
         * <p>Gets the header information for the .csv file to be used as input for the
         * user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetCSVHeader">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCSVHeaderOutcomeCallable GetCSVHeaderCallable(const Model::GetCSVHeaderRequest& request) const;

        /**
         * <p>Gets the header information for the .csv file to be used as input for the
         * user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetCSVHeader">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCSVHeaderAsync(const Model::GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a group.</p> <p>Requires developer credentials.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * <p>Gets a group.</p> <p>Requires developer credentials.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * <p>Gets a group.</p> <p>Requires developer credentials.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetIdentityProviderByIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityProviderByIdentifierOutcome GetIdentityProviderByIdentifier(const Model::GetIdentityProviderByIdentifierRequest& request) const;

        /**
         * <p>Gets the specified identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetIdentityProviderByIdentifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityProviderByIdentifierOutcomeCallable GetIdentityProviderByIdentifierCallable(const Model::GetIdentityProviderByIdentifierRequest& request) const;

        /**
         * <p>Gets the specified identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetIdentityProviderByIdentifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityProviderByIdentifierAsync(const Model::GetIdentityProviderByIdentifierRequest& request, const GetIdentityProviderByIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This method takes a user pool ID, and returns the signing
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSigningCertificateOutcome GetSigningCertificate(const Model::GetSigningCertificateRequest& request) const;

        /**
         * <p>This method takes a user pool ID, and returns the signing
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetSigningCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSigningCertificateOutcomeCallable GetSigningCertificateCallable(const Model::GetSigningCertificateRequest& request) const;

        /**
         * <p>This method takes a user pool ID, and returns the signing
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetSigningCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSigningCertificateAsync(const Model::GetSigningCertificateRequest& request, const GetSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the UI Customization information for a particular app client's app UI,
         * if there is something set. If nothing is set for the particular client, but
         * there is an existing pool level customization (app <code>clientId</code> will be
         * <code>ALL</code>), then that is returned. If nothing is present, then an empty
         * shape is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUICustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUICustomizationOutcome GetUICustomization(const Model::GetUICustomizationRequest& request) const;

        /**
         * <p>Gets the UI Customization information for a particular app client's app UI,
         * if there is something set. If nothing is set for the particular client, but
         * there is an existing pool level customization (app <code>clientId</code> will be
         * <code>ALL</code>), then that is returned. If nothing is present, then an empty
         * shape is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUICustomization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUICustomizationOutcomeCallable GetUICustomizationCallable(const Model::GetUICustomizationRequest& request) const;

        /**
         * <p>Gets the UI Customization information for a particular app client's app UI,
         * if there is something set. If nothing is set for the particular client, but
         * there is an existing pool level customization (app <code>clientId</code> will be
         * <code>ALL</code>), then that is returned. If nothing is present, then an empty
         * shape is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUICustomization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUICustomizationAsync(const Model::GetUICustomizationRequest& request, const GetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the user attributes and metadata for a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * <p>Gets the user attributes and metadata for a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * <p>Gets the user attributes and metadata for a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the user attribute verification code for the specified attribute
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAttributeVerificationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserAttributeVerificationCodeOutcome GetUserAttributeVerificationCode(const Model::GetUserAttributeVerificationCodeRequest& request) const;

        /**
         * <p>Gets the user attribute verification code for the specified attribute
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAttributeVerificationCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserAttributeVerificationCodeOutcomeCallable GetUserAttributeVerificationCodeCallable(const Model::GetUserAttributeVerificationCodeRequest& request) const;

        /**
         * <p>Gets the user attribute verification code for the specified attribute
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAttributeVerificationCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAttributeVerificationCodeAsync(const Model::GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the user pool multi-factor authentication (MFA)
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserPoolMfaConfigOutcome GetUserPoolMfaConfig(const Model::GetUserPoolMfaConfigRequest& request) const;

        /**
         * <p>Gets the user pool multi-factor authentication (MFA)
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserPoolMfaConfigOutcomeCallable GetUserPoolMfaConfigCallable(const Model::GetUserPoolMfaConfigRequest& request) const;

        /**
         * <p>Gets the user pool multi-factor authentication (MFA)
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserPoolMfaConfigAsync(const Model::GetUserPoolMfaConfigRequest& request, const GetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signs out users from all devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GlobalSignOut">AWS
         * API Reference</a></p>
         */
        virtual Model::GlobalSignOutOutcome GlobalSignOut(const Model::GlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GlobalSignOut">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GlobalSignOutOutcomeCallable GlobalSignOutCallable(const Model::GlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GlobalSignOut">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GlobalSignOutAsync(const Model::GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the authentication flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateAuthOutcome InitiateAuth(const Model::InitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateAuthOutcomeCallable InitiateAuthCallable(const Model::InitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateAuthAsync(const Model::InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Lists the devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Lists the devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the groups associated with a user pool.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists the groups associated with a user pool.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Lists the groups associated with a user pool.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about all identity providers for a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * <p>Lists information about all identity providers for a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListIdentityProviders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityProvidersOutcomeCallable ListIdentityProvidersCallable(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * <p>Lists information about all identity providers for a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListIdentityProviders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityProvidersAsync(const Model::ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource servers for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListResourceServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceServersOutcome ListResourceServers(const Model::ListResourceServersRequest& request) const;

        /**
         * <p>Lists the resource servers for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListResourceServers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceServersOutcomeCallable ListResourceServersCallable(const Model::ListResourceServersRequest& request) const;

        /**
         * <p>Lists the resource servers for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListResourceServers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceServersAsync(const Model::ListResourceServersRequest& request, const ListResourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are assigned to an Amazon Cognito user pool.</p> <p>A tag
         * is a label that you can apply to user pools to categorize and manage them in
         * different ways, such as by purpose, owner, environment, or other criteria.</p>
         * <p>You can use this action up to 10 times per second, per account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that are assigned to an Amazon Cognito user pool.</p> <p>A tag
         * is a label that you can apply to user pools to categorize and manage them in
         * different ways, such as by purpose, owner, environment, or other criteria.</p>
         * <p>You can use this action up to 10 times per second, per account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that are assigned to an Amazon Cognito user pool.</p> <p>A tag
         * is a label that you can apply to user pools to categorize and manage them in
         * different ways, such as by purpose, owner, environment, or other criteria.</p>
         * <p>You can use this action up to 10 times per second, per account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the user import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserImportJobsOutcome ListUserImportJobs(const Model::ListUserImportJobsRequest& request) const;

        /**
         * <p>Lists the user import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserImportJobsOutcomeCallable ListUserImportJobsCallable(const Model::ListUserImportJobsRequest& request) const;

        /**
         * <p>Lists the user import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserImportJobsAsync(const Model::ListUserImportJobsRequest& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the clients that have been created for the specified user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolClients">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserPoolClientsOutcome ListUserPoolClients(const Model::ListUserPoolClientsRequest& request) const;

        /**
         * <p>Lists the clients that have been created for the specified user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolClients">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoolClientsOutcomeCallable ListUserPoolClientsCallable(const Model::ListUserPoolClientsRequest& request) const;

        /**
         * <p>Lists the clients that have been created for the specified user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolClients">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoolClientsAsync(const Model::ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the user pools associated with an AWS account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserPoolsOutcome ListUserPools(const Model::ListUserPoolsRequest& request) const;

        /**
         * <p>Lists the user pools associated with an AWS account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPools">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoolsOutcomeCallable ListUserPoolsCallable(const Model::ListUserPoolsRequest& request) const;

        /**
         * <p>Lists the user pools associated with an AWS account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPools">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoolsAsync(const Model::ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the users in the Amazon Cognito user pool.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users in the Amazon Cognito user pool.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users in the Amazon Cognito user pool.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the users in the specified group.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersInGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersInGroupOutcome ListUsersInGroup(const Model::ListUsersInGroupRequest& request) const;

        /**
         * <p>Lists the users in the specified group.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersInGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersInGroupOutcomeCallable ListUsersInGroupCallable(const Model::ListUsersInGroupRequest& request) const;

        /**
         * <p>Lists the users in the specified group.</p> <p>Requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersInGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersInGroupAsync(const Model::ListUsersInGroupRequest& request, const ListUsersInGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResendConfirmationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::ResendConfirmationCodeOutcome ResendConfirmationCode(const Model::ResendConfirmationCodeRequest& request) const;

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResendConfirmationCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResendConfirmationCodeOutcomeCallable ResendConfirmationCodeCallable(const Model::ResendConfirmationCodeRequest& request) const;

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResendConfirmationCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResendConfirmationCodeAsync(const Model::ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Responds to the authentication challenge.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondToAuthChallengeOutcome RespondToAuthChallenge(const Model::RespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to the authentication challenge.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallenge">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RespondToAuthChallengeOutcomeCallable RespondToAuthChallengeCallable(const Model::RespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to the authentication challenge.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallenge">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RespondToAuthChallengeAsync(const Model::RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures actions on detected risks. To delete the risk configuration for
         * <code>UserPoolId</code> or <code>ClientId</code>, pass null values for all four
         * configuration types.</p> <p>To enable Amazon Cognito advanced security features,
         * update the user pool to include the <code>UserPoolAddOns</code>
         * key<code>AdvancedSecurityMode</code>.</p> <p>See .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetRiskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::SetRiskConfigurationOutcome SetRiskConfiguration(const Model::SetRiskConfigurationRequest& request) const;

        /**
         * <p>Configures actions on detected risks. To delete the risk configuration for
         * <code>UserPoolId</code> or <code>ClientId</code>, pass null values for all four
         * configuration types.</p> <p>To enable Amazon Cognito advanced security features,
         * update the user pool to include the <code>UserPoolAddOns</code>
         * key<code>AdvancedSecurityMode</code>.</p> <p>See .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetRiskConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetRiskConfigurationOutcomeCallable SetRiskConfigurationCallable(const Model::SetRiskConfigurationRequest& request) const;

        /**
         * <p>Configures actions on detected risks. To delete the risk configuration for
         * <code>UserPoolId</code> or <code>ClientId</code>, pass null values for all four
         * configuration types.</p> <p>To enable Amazon Cognito advanced security features,
         * update the user pool to include the <code>UserPoolAddOns</code>
         * key<code>AdvancedSecurityMode</code>.</p> <p>See .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetRiskConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetRiskConfigurationAsync(const Model::SetRiskConfigurationRequest& request, const SetRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the UI customization information for a user pool's built-in app UI.</p>
         * <p>You can specify app UI customization settings for a single client (with a
         * specific <code>clientId</code>) or for all clients (by setting the
         * <code>clientId</code> to <code>ALL</code>). If you specify <code>ALL</code>, the
         * default configuration will be used for every client that has no UI customization
         * set previously. If you specify UI customization settings for a particular
         * client, it will no longer fall back to the <code>ALL</code> configuration. </p>
         * <note> <p>To use this API, your user pool must have a domain associated with it.
         * Otherwise, there is no place to host the app's pages, and the service will throw
         * an error.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUICustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUICustomizationOutcome SetUICustomization(const Model::SetUICustomizationRequest& request) const;

        /**
         * <p>Sets the UI customization information for a user pool's built-in app UI.</p>
         * <p>You can specify app UI customization settings for a single client (with a
         * specific <code>clientId</code>) or for all clients (by setting the
         * <code>clientId</code> to <code>ALL</code>). If you specify <code>ALL</code>, the
         * default configuration will be used for every client that has no UI customization
         * set previously. If you specify UI customization settings for a particular
         * client, it will no longer fall back to the <code>ALL</code> configuration. </p>
         * <note> <p>To use this API, your user pool must have a domain associated with it.
         * Otherwise, there is no place to host the app's pages, and the service will throw
         * an error.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUICustomization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUICustomizationOutcomeCallable SetUICustomizationCallable(const Model::SetUICustomizationRequest& request) const;

        /**
         * <p>Sets the UI customization information for a user pool's built-in app UI.</p>
         * <p>You can specify app UI customization settings for a single client (with a
         * specific <code>clientId</code>) or for all clients (by setting the
         * <code>clientId</code> to <code>ALL</code>). If you specify <code>ALL</code>, the
         * default configuration will be used for every client that has no UI customization
         * set previously. If you specify UI customization settings for a particular
         * client, it will no longer fall back to the <code>ALL</code> configuration. </p>
         * <note> <p>To use this API, your user pool must have a domain associated with it.
         * Otherwise, there is no place to host the app's pages, and the service will throw
         * an error.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUICustomization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUICustomizationAsync(const Model::SetUICustomizationRequest& request, const SetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the user's multi-factor authentication (MFA) method
         * preference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserMFAPreference">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserMFAPreferenceOutcome SetUserMFAPreference(const Model::SetUserMFAPreferenceRequest& request) const;

        /**
         * <p>Set the user's multi-factor authentication (MFA) method
         * preference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserMFAPreference">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUserMFAPreferenceOutcomeCallable SetUserMFAPreferenceCallable(const Model::SetUserMFAPreferenceRequest& request) const;

        /**
         * <p>Set the user's multi-factor authentication (MFA) method
         * preference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserMFAPreference">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUserMFAPreferenceAsync(const Model::SetUserMFAPreferenceRequest& request, const SetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the user pool MFA configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserPoolMfaConfigOutcome SetUserPoolMfaConfig(const Model::SetUserPoolMfaConfigRequest& request) const;

        /**
         * <p>Set the user pool MFA configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUserPoolMfaConfigOutcomeCallable SetUserPoolMfaConfigCallable(const Model::SetUserPoolMfaConfigRequest& request) const;

        /**
         * <p>Set the user pool MFA configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUserPoolMfaConfigAsync(const Model::SetUserPoolMfaConfigRequest& request, const SetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the user settings like multi-factor authentication (MFA). If MFA is to
         * be removed for a particular attribute pass the attribute with code delivery as
         * null. If null list is passed, all MFA options are removed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserSettingsOutcome SetUserSettings(const Model::SetUserSettingsRequest& request) const;

        /**
         * <p>Sets the user settings like multi-factor authentication (MFA). If MFA is to
         * be removed for a particular attribute pass the attribute with code delivery as
         * null. If null list is passed, all MFA options are removed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUserSettingsOutcomeCallable SetUserSettingsCallable(const Model::SetUserSettingsRequest& request) const;

        /**
         * <p>Sets the user settings like multi-factor authentication (MFA). If MFA is to
         * be removed for a particular attribute pass the attribute with code delivery as
         * null. If null list is passed, all MFA options are removed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUserSettingsAsync(const Model::SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::SignUpOutcome SignUp(const Model::SignUpRequest& request) const;

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignUpOutcomeCallable SignUpCallable(const Model::SignUpRequest& request) const;

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignUpAsync(const Model::SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the user import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StartUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartUserImportJobOutcome StartUserImportJob(const Model::StartUserImportJobRequest& request) const;

        /**
         * <p>Starts the user import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StartUserImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartUserImportJobOutcomeCallable StartUserImportJobCallable(const Model::StartUserImportJobRequest& request) const;

        /**
         * <p>Starts the user import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StartUserImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartUserImportJobAsync(const Model::StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StopUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopUserImportJobOutcome StopUserImportJob(const Model::StopUserImportJobRequest& request) const;

        /**
         * <p>Stops the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StopUserImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopUserImportJobOutcomeCallable StopUserImportJobCallable(const Model::StopUserImportJobRequest& request) const;

        /**
         * <p>Stops the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StopUserImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopUserImportJobAsync(const Model::StopUserImportJobRequest& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns a set of tags to an Amazon Cognito user pool. A tag is a label that
         * you can use to categorize and manage user pools in different ways, such as by
         * purpose, owner, environment, or other criteria.</p> <p>Each tag consists of a
         * key and value, both of which you define. A key is a general category for more
         * specific values. For example, if you have two versions of a user pool, one for
         * testing and another for production, you might assign an <code>Environment</code>
         * tag key to both user pools. The value of this key might be <code>Test</code> for
         * one user pool and <code>Production</code> for the other.</p> <p>Tags are useful
         * for cost tracking and access control. You can activate your tags so that they
         * appear on the Billing and Cost Management console, where you can track the costs
         * associated with your user pools. In an IAM policy, you can constrain permissions
         * for user pools based on specific tags or tag values.</p> <p>You can use this
         * action up to 5 times per second, per account. A user pool can have as many as 50
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns a set of tags to an Amazon Cognito user pool. A tag is a label that
         * you can use to categorize and manage user pools in different ways, such as by
         * purpose, owner, environment, or other criteria.</p> <p>Each tag consists of a
         * key and value, both of which you define. A key is a general category for more
         * specific values. For example, if you have two versions of a user pool, one for
         * testing and another for production, you might assign an <code>Environment</code>
         * tag key to both user pools. The value of this key might be <code>Test</code> for
         * one user pool and <code>Production</code> for the other.</p> <p>Tags are useful
         * for cost tracking and access control. You can activate your tags so that they
         * appear on the Billing and Cost Management console, where you can track the costs
         * associated with your user pools. In an IAM policy, you can constrain permissions
         * for user pools based on specific tags or tag values.</p> <p>You can use this
         * action up to 5 times per second, per account. A user pool can have as many as 50
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns a set of tags to an Amazon Cognito user pool. A tag is a label that
         * you can use to categorize and manage user pools in different ways, such as by
         * purpose, owner, environment, or other criteria.</p> <p>Each tag consists of a
         * key and value, both of which you define. A key is a general category for more
         * specific values. For example, if you have two versions of a user pool, one for
         * testing and another for production, you might assign an <code>Environment</code>
         * tag key to both user pools. The value of this key might be <code>Test</code> for
         * one user pool and <code>Production</code> for the other.</p> <p>Tags are useful
         * for cost tracking and access control. You can activate your tags so that they
         * appear on the Billing and Cost Management console, where you can track the costs
         * associated with your user pools. In an IAM policy, you can constrain permissions
         * for user pools based on specific tags or tag values.</p> <p>You can use this
         * action up to 5 times per second, per account. A user pool can have as many as 50
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from an Amazon Cognito user pool. You can use this
         * action up to 5 times per second, per account</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from an Amazon Cognito user pool. You can use this
         * action up to 5 times per second, per account</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from an Amazon Cognito user pool. You can use this
         * action up to 5 times per second, per account</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the feedback for an authentication event whether it was from a valid
         * user or not. This feedback is used for improving the risk evaluation decision
         * for the user pool as part of Amazon Cognito advanced security.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthEventFeedbackOutcome UpdateAuthEventFeedback(const Model::UpdateAuthEventFeedbackRequest& request) const;

        /**
         * <p>Provides the feedback for an authentication event whether it was from a valid
         * user or not. This feedback is used for improving the risk evaluation decision
         * for the user pool as part of Amazon Cognito advanced security.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuthEventFeedbackOutcomeCallable UpdateAuthEventFeedbackCallable(const Model::UpdateAuthEventFeedbackRequest& request) const;

        /**
         * <p>Provides the feedback for an authentication event whether it was from a valid
         * user or not. This feedback is used for improving the risk evaluation decision
         * for the user pool as part of Amazon Cognito advanced security.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuthEventFeedbackAsync(const Model::UpdateAuthEventFeedbackRequest& request, const UpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateDeviceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceStatusOutcome UpdateDeviceStatus(const Model::UpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateDeviceStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceStatusOutcomeCallable UpdateDeviceStatusCallable(const Model::UpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateDeviceStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceStatusAsync(const Model::UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified group with the specified attributes.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the specified group with the specified attributes.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the specified group with the specified attributes.</p> <p>Requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates identity provider information for a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderOutcome UpdateIdentityProvider(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * <p>Updates identity provider information for a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIdentityProviderOutcomeCallable UpdateIdentityProviderCallable(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * <p>Updates identity provider information for a user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIdentityProviderAsync(const Model::UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and scopes of resource server. All other fields are
         * read-only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceServerOutcome UpdateResourceServer(const Model::UpdateResourceServerRequest& request) const;

        /**
         * <p>Updates the name and scopes of resource server. All other fields are
         * read-only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateResourceServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceServerOutcomeCallable UpdateResourceServerCallable(const Model::UpdateResourceServerRequest& request) const;

        /**
         * <p>Updates the name and scopes of resource server. All other fields are
         * read-only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateResourceServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceServerAsync(const Model::UpdateResourceServerRequest& request, const UpdateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to update a specific attribute (one at a time).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserAttributesOutcome UpdateUserAttributes(const Model::UpdateUserAttributesRequest& request) const;

        /**
         * <p>Allows a user to update a specific attribute (one at a time).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserAttributesOutcomeCallable UpdateUserAttributesCallable(const Model::UpdateUserAttributesRequest& request) const;

        /**
         * <p>Allows a user to update a specific attribute (one at a time).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAttributesAsync(const Model::UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user pool with the specified attributes. If you don't
         * provide a value for an attribute, it will be set to the default value. You can
         * get a list of the current user pool settings with .</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolOutcome UpdateUserPool(const Model::UpdateUserPoolRequest& request) const;

        /**
         * <p>Updates the specified user pool with the specified attributes. If you don't
         * provide a value for an attribute, it will be set to the default value. You can
         * get a list of the current user pool settings with .</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolOutcomeCallable UpdateUserPoolCallable(const Model::UpdateUserPoolRequest& request) const;

        /**
         * <p>Updates the specified user pool with the specified attributes. If you don't
         * provide a value for an attribute, it will be set to the default value. You can
         * get a list of the current user pool settings with .</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolAsync(const Model::UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user pool app client with the specified attributes. If
         * you don't provide a value for an attribute, it will be set to the default value.
         * You can get a list of the current user pool app client settings with
         * .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolClientOutcome UpdateUserPoolClient(const Model::UpdateUserPoolClientRequest& request) const;

        /**
         * <p>Updates the specified user pool app client with the specified attributes. If
         * you don't provide a value for an attribute, it will be set to the default value.
         * You can get a list of the current user pool app client settings with
         * .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolClientOutcomeCallable UpdateUserPoolClientCallable(const Model::UpdateUserPoolClientRequest& request) const;

        /**
         * <p>Updates the specified user pool app client with the specified attributes. If
         * you don't provide a value for an attribute, it will be set to the default value.
         * You can get a list of the current user pool app client settings with
         * .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolClientAsync(const Model::UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Secure Sockets Layer (SSL) certificate for the custom domain for
         * your user pool.</p> <p>You can use this operation to provide the Amazon Resource
         * Name (ARN) of a new certificate to Amazon Cognito. You cannot use it to change
         * the domain for a user pool.</p> <p>A custom domain is used to host the Amazon
         * Cognito hosted UI, which provides sign-up and sign-in pages for your
         * application. When you set up a custom domain, you provide a certificate that you
         * manage with AWS Certificate Manager (ACM). When necessary, you can use this
         * operation to change the certificate that you applied to your custom domain.</p>
         * <p>Usually, this is unnecessary following routine certificate renewal with ACM.
         * When you renew your existing certificate in ACM, the ARN for your certificate
         * remains the same, and your custom domain uses the new certificate
         * automatically.</p> <p>However, if you replace your existing certificate with a
         * new one, ACM gives the new certificate a new ARN. To apply the new certificate
         * to your custom domain, you must provide this ARN to Amazon Cognito.</p> <p>When
         * you add your new certificate in ACM, you must choose US East (N. Virginia) as
         * the AWS Region.</p> <p>After you submit your request, Amazon Cognito requires up
         * to 1 hour to distribute your new certificate to your custom domain.</p> <p>For
         * more information about adding a custom domain to your user pool, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
         * Your Own Domain for the Hosted UI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolDomainOutcome UpdateUserPoolDomain(const Model::UpdateUserPoolDomainRequest& request) const;

        /**
         * <p>Updates the Secure Sockets Layer (SSL) certificate for the custom domain for
         * your user pool.</p> <p>You can use this operation to provide the Amazon Resource
         * Name (ARN) of a new certificate to Amazon Cognito. You cannot use it to change
         * the domain for a user pool.</p> <p>A custom domain is used to host the Amazon
         * Cognito hosted UI, which provides sign-up and sign-in pages for your
         * application. When you set up a custom domain, you provide a certificate that you
         * manage with AWS Certificate Manager (ACM). When necessary, you can use this
         * operation to change the certificate that you applied to your custom domain.</p>
         * <p>Usually, this is unnecessary following routine certificate renewal with ACM.
         * When you renew your existing certificate in ACM, the ARN for your certificate
         * remains the same, and your custom domain uses the new certificate
         * automatically.</p> <p>However, if you replace your existing certificate with a
         * new one, ACM gives the new certificate a new ARN. To apply the new certificate
         * to your custom domain, you must provide this ARN to Amazon Cognito.</p> <p>When
         * you add your new certificate in ACM, you must choose US East (N. Virginia) as
         * the AWS Region.</p> <p>After you submit your request, Amazon Cognito requires up
         * to 1 hour to distribute your new certificate to your custom domain.</p> <p>For
         * more information about adding a custom domain to your user pool, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
         * Your Own Domain for the Hosted UI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolDomainOutcomeCallable UpdateUserPoolDomainCallable(const Model::UpdateUserPoolDomainRequest& request) const;

        /**
         * <p>Updates the Secure Sockets Layer (SSL) certificate for the custom domain for
         * your user pool.</p> <p>You can use this operation to provide the Amazon Resource
         * Name (ARN) of a new certificate to Amazon Cognito. You cannot use it to change
         * the domain for a user pool.</p> <p>A custom domain is used to host the Amazon
         * Cognito hosted UI, which provides sign-up and sign-in pages for your
         * application. When you set up a custom domain, you provide a certificate that you
         * manage with AWS Certificate Manager (ACM). When necessary, you can use this
         * operation to change the certificate that you applied to your custom domain.</p>
         * <p>Usually, this is unnecessary following routine certificate renewal with ACM.
         * When you renew your existing certificate in ACM, the ARN for your certificate
         * remains the same, and your custom domain uses the new certificate
         * automatically.</p> <p>However, if you replace your existing certificate with a
         * new one, ACM gives the new certificate a new ARN. To apply the new certificate
         * to your custom domain, you must provide this ARN to Amazon Cognito.</p> <p>When
         * you add your new certificate in ACM, you must choose US East (N. Virginia) as
         * the AWS Region.</p> <p>After you submit your request, Amazon Cognito requires up
         * to 1 hour to distribute your new certificate to your custom domain.</p> <p>For
         * more information about adding a custom domain to your user pool, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
         * Your Own Domain for the Hosted UI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolDomainAsync(const Model::UpdateUserPoolDomainRequest& request, const UpdateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this API to register a user's entered TOTP code and mark the user's
         * software token MFA status as "verified" if successful. The request takes an
         * access token or a session string, but not both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifySoftwareToken">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifySoftwareTokenOutcome VerifySoftwareToken(const Model::VerifySoftwareTokenRequest& request) const;

        /**
         * <p>Use this API to register a user's entered TOTP code and mark the user's
         * software token MFA status as "verified" if successful. The request takes an
         * access token or a session string, but not both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifySoftwareToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifySoftwareTokenOutcomeCallable VerifySoftwareTokenCallable(const Model::VerifySoftwareTokenRequest& request) const;

        /**
         * <p>Use this API to register a user's entered TOTP code and mark the user's
         * software token MFA status as "verified" if successful. The request takes an
         * access token or a session string, but not both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifySoftwareToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifySoftwareTokenAsync(const Model::VerifySoftwareTokenRequest& request, const VerifySoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies the specified user attributes in the user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifyUserAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyUserAttributeOutcome VerifyUserAttribute(const Model::VerifyUserAttributeRequest& request) const;

        /**
         * <p>Verifies the specified user attributes in the user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifyUserAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyUserAttributeOutcomeCallable VerifyUserAttributeCallable(const Model::VerifyUserAttributeRequest& request) const;

        /**
         * <p>Verifies the specified user attributes in the user pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifyUserAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyUserAttributeAsync(const Model::VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddCustomAttributesAsyncHelper(const Model::AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminAddUserToGroupAsyncHelper(const Model::AdminAddUserToGroupRequest& request, const AdminAddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminConfirmSignUpAsyncHelper(const Model::AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminCreateUserAsyncHelper(const Model::AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDeleteUserAsyncHelper(const Model::AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDeleteUserAttributesAsyncHelper(const Model::AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDisableProviderForUserAsyncHelper(const Model::AdminDisableProviderForUserRequest& request, const AdminDisableProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDisableUserAsyncHelper(const Model::AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminEnableUserAsyncHelper(const Model::AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminForgetDeviceAsyncHelper(const Model::AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminGetDeviceAsyncHelper(const Model::AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminGetUserAsyncHelper(const Model::AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminInitiateAuthAsyncHelper(const Model::AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminLinkProviderForUserAsyncHelper(const Model::AdminLinkProviderForUserRequest& request, const AdminLinkProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminListDevicesAsyncHelper(const Model::AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminListGroupsForUserAsyncHelper(const Model::AdminListGroupsForUserRequest& request, const AdminListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminListUserAuthEventsAsyncHelper(const Model::AdminListUserAuthEventsRequest& request, const AdminListUserAuthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminRemoveUserFromGroupAsyncHelper(const Model::AdminRemoveUserFromGroupRequest& request, const AdminRemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminResetUserPasswordAsyncHelper(const Model::AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminRespondToAuthChallengeAsyncHelper(const Model::AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminSetUserMFAPreferenceAsyncHelper(const Model::AdminSetUserMFAPreferenceRequest& request, const AdminSetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminSetUserPasswordAsyncHelper(const Model::AdminSetUserPasswordRequest& request, const AdminSetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminSetUserSettingsAsyncHelper(const Model::AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUpdateAuthEventFeedbackAsyncHelper(const Model::AdminUpdateAuthEventFeedbackRequest& request, const AdminUpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUpdateDeviceStatusAsyncHelper(const Model::AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUpdateUserAttributesAsyncHelper(const Model::AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUserGlobalSignOutAsyncHelper(const Model::AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSoftwareTokenAsyncHelper(const Model::AssociateSoftwareTokenRequest& request, const AssociateSoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangePasswordAsyncHelper(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmDeviceAsyncHelper(const Model::ConfirmDeviceRequest& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmForgotPasswordAsyncHelper(const Model::ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmSignUpAsyncHelper(const Model::ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIdentityProviderAsyncHelper(const Model::CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceServerAsyncHelper(const Model::CreateResourceServerRequest& request, const CreateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserImportJobAsyncHelper(const Model::CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserPoolAsyncHelper(const Model::CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserPoolClientAsyncHelper(const Model::CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserPoolDomainAsyncHelper(const Model::CreateUserPoolDomainRequest& request, const CreateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIdentityProviderAsyncHelper(const Model::DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceServerAsyncHelper(const Model::DeleteResourceServerRequest& request, const DeleteResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAttributesAsyncHelper(const Model::DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPoolAsyncHelper(const Model::DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPoolClientAsyncHelper(const Model::DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPoolDomainAsyncHelper(const Model::DeleteUserPoolDomainRequest& request, const DeleteUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdentityProviderAsyncHelper(const Model::DescribeIdentityProviderRequest& request, const DescribeIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceServerAsyncHelper(const Model::DescribeResourceServerRequest& request, const DescribeResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRiskConfigurationAsyncHelper(const Model::DescribeRiskConfigurationRequest& request, const DescribeRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserImportJobAsyncHelper(const Model::DescribeUserImportJobRequest& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserPoolAsyncHelper(const Model::DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserPoolClientAsyncHelper(const Model::DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserPoolDomainAsyncHelper(const Model::DescribeUserPoolDomainRequest& request, const DescribeUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ForgetDeviceAsyncHelper(const Model::ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ForgotPasswordAsyncHelper(const Model::ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCSVHeaderAsyncHelper(const Model::GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceAsyncHelper(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupAsyncHelper(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityProviderByIdentifierAsyncHelper(const Model::GetIdentityProviderByIdentifierRequest& request, const GetIdentityProviderByIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSigningCertificateAsyncHelper(const Model::GetSigningCertificateRequest& request, const GetSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUICustomizationAsyncHelper(const Model::GetUICustomizationRequest& request, const GetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAttributeVerificationCodeAsyncHelper(const Model::GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserPoolMfaConfigAsyncHelper(const Model::GetUserPoolMfaConfigRequest& request, const GetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GlobalSignOutAsyncHelper(const Model::GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitiateAuthAsyncHelper(const Model::InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicesAsyncHelper(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentityProvidersAsyncHelper(const Model::ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceServersAsyncHelper(const Model::ListResourceServersRequest& request, const ListResourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserImportJobsAsyncHelper(const Model::ListUserImportJobsRequest& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoolClientsAsyncHelper(const Model::ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoolsAsyncHelper(const Model::ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersInGroupAsyncHelper(const Model::ListUsersInGroupRequest& request, const ListUsersInGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResendConfirmationCodeAsyncHelper(const Model::ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RespondToAuthChallengeAsyncHelper(const Model::RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetRiskConfigurationAsyncHelper(const Model::SetRiskConfigurationRequest& request, const SetRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetUICustomizationAsyncHelper(const Model::SetUICustomizationRequest& request, const SetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetUserMFAPreferenceAsyncHelper(const Model::SetUserMFAPreferenceRequest& request, const SetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetUserPoolMfaConfigAsyncHelper(const Model::SetUserPoolMfaConfigRequest& request, const SetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetUserSettingsAsyncHelper(const Model::SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SignUpAsyncHelper(const Model::SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartUserImportJobAsyncHelper(const Model::StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopUserImportJobAsyncHelper(const Model::StopUserImportJobRequest& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAuthEventFeedbackAsyncHelper(const Model::UpdateAuthEventFeedbackRequest& request, const UpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceStatusAsyncHelper(const Model::UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIdentityProviderAsyncHelper(const Model::UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceServerAsyncHelper(const Model::UpdateResourceServerRequest& request, const UpdateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAttributesAsyncHelper(const Model::UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPoolAsyncHelper(const Model::UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPoolClientAsyncHelper(const Model::UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPoolDomainAsyncHelper(const Model::UpdateUserPoolDomainRequest& request, const UpdateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifySoftwareTokenAsyncHelper(const Model::VerifySoftwareTokenRequest& request, const VerifySoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyUserAttributeAsyncHelper(const Model::VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CognitoIdentityProvider
} // namespace Aws
