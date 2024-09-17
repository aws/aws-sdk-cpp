/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cognito-idp/CognitoIdentityProviderErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cognito-idp/CognitoIdentityProviderEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CognitoIdentityProviderClient header */
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
#include <aws/cognito-idp/model/GetLogDeliveryConfigurationResult.h>
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
#include <aws/cognito-idp/model/RevokeTokenResult.h>
#include <aws/cognito-idp/model/SetLogDeliveryConfigurationResult.h>
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
#include <aws/cognito-idp/model/AssociateSoftwareTokenRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CognitoIdentityProviderClient header */

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
    using CognitoIdentityProviderClientConfiguration = Aws::Client::GenericClientConfiguration;
    using CognitoIdentityProviderEndpointProviderBase = Aws::CognitoIdentityProvider::Endpoint::CognitoIdentityProviderEndpointProviderBase;
    using CognitoIdentityProviderEndpointProvider = Aws::CognitoIdentityProvider::Endpoint::CognitoIdentityProviderEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CognitoIdentityProviderClient header */
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
      class GetLogDeliveryConfigurationRequest;
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
      class RevokeTokenRequest;
      class SetLogDeliveryConfigurationRequest;
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
      /* End of service model forward declarations required in CognitoIdentityProviderClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddCustomAttributesResult, CognitoIdentityProviderError> AddCustomAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> AdminAddUserToGroupOutcome;
      typedef Aws::Utils::Outcome<AdminConfirmSignUpResult, CognitoIdentityProviderError> AdminConfirmSignUpOutcome;
      typedef Aws::Utils::Outcome<AdminCreateUserResult, CognitoIdentityProviderError> AdminCreateUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> AdminDeleteUserOutcome;
      typedef Aws::Utils::Outcome<AdminDeleteUserAttributesResult, CognitoIdentityProviderError> AdminDeleteUserAttributesOutcome;
      typedef Aws::Utils::Outcome<AdminDisableProviderForUserResult, CognitoIdentityProviderError> AdminDisableProviderForUserOutcome;
      typedef Aws::Utils::Outcome<AdminDisableUserResult, CognitoIdentityProviderError> AdminDisableUserOutcome;
      typedef Aws::Utils::Outcome<AdminEnableUserResult, CognitoIdentityProviderError> AdminEnableUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> AdminForgetDeviceOutcome;
      typedef Aws::Utils::Outcome<AdminGetDeviceResult, CognitoIdentityProviderError> AdminGetDeviceOutcome;
      typedef Aws::Utils::Outcome<AdminGetUserResult, CognitoIdentityProviderError> AdminGetUserOutcome;
      typedef Aws::Utils::Outcome<AdminInitiateAuthResult, CognitoIdentityProviderError> AdminInitiateAuthOutcome;
      typedef Aws::Utils::Outcome<AdminLinkProviderForUserResult, CognitoIdentityProviderError> AdminLinkProviderForUserOutcome;
      typedef Aws::Utils::Outcome<AdminListDevicesResult, CognitoIdentityProviderError> AdminListDevicesOutcome;
      typedef Aws::Utils::Outcome<AdminListGroupsForUserResult, CognitoIdentityProviderError> AdminListGroupsForUserOutcome;
      typedef Aws::Utils::Outcome<AdminListUserAuthEventsResult, CognitoIdentityProviderError> AdminListUserAuthEventsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> AdminRemoveUserFromGroupOutcome;
      typedef Aws::Utils::Outcome<AdminResetUserPasswordResult, CognitoIdentityProviderError> AdminResetUserPasswordOutcome;
      typedef Aws::Utils::Outcome<AdminRespondToAuthChallengeResult, CognitoIdentityProviderError> AdminRespondToAuthChallengeOutcome;
      typedef Aws::Utils::Outcome<AdminSetUserMFAPreferenceResult, CognitoIdentityProviderError> AdminSetUserMFAPreferenceOutcome;
      typedef Aws::Utils::Outcome<AdminSetUserPasswordResult, CognitoIdentityProviderError> AdminSetUserPasswordOutcome;
      typedef Aws::Utils::Outcome<AdminSetUserSettingsResult, CognitoIdentityProviderError> AdminSetUserSettingsOutcome;
      typedef Aws::Utils::Outcome<AdminUpdateAuthEventFeedbackResult, CognitoIdentityProviderError> AdminUpdateAuthEventFeedbackOutcome;
      typedef Aws::Utils::Outcome<AdminUpdateDeviceStatusResult, CognitoIdentityProviderError> AdminUpdateDeviceStatusOutcome;
      typedef Aws::Utils::Outcome<AdminUpdateUserAttributesResult, CognitoIdentityProviderError> AdminUpdateUserAttributesOutcome;
      typedef Aws::Utils::Outcome<AdminUserGlobalSignOutResult, CognitoIdentityProviderError> AdminUserGlobalSignOutOutcome;
      typedef Aws::Utils::Outcome<AssociateSoftwareTokenResult, CognitoIdentityProviderError> AssociateSoftwareTokenOutcome;
      typedef Aws::Utils::Outcome<ChangePasswordResult, CognitoIdentityProviderError> ChangePasswordOutcome;
      typedef Aws::Utils::Outcome<ConfirmDeviceResult, CognitoIdentityProviderError> ConfirmDeviceOutcome;
      typedef Aws::Utils::Outcome<ConfirmForgotPasswordResult, CognitoIdentityProviderError> ConfirmForgotPasswordOutcome;
      typedef Aws::Utils::Outcome<ConfirmSignUpResult, CognitoIdentityProviderError> ConfirmSignUpOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, CognitoIdentityProviderError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateIdentityProviderResult, CognitoIdentityProviderError> CreateIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<CreateResourceServerResult, CognitoIdentityProviderError> CreateResourceServerOutcome;
      typedef Aws::Utils::Outcome<CreateUserImportJobResult, CognitoIdentityProviderError> CreateUserImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateUserPoolResult, CognitoIdentityProviderError> CreateUserPoolOutcome;
      typedef Aws::Utils::Outcome<CreateUserPoolClientResult, CognitoIdentityProviderError> CreateUserPoolClientOutcome;
      typedef Aws::Utils::Outcome<CreateUserPoolDomainResult, CognitoIdentityProviderError> CreateUserPoolDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> DeleteIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> DeleteResourceServerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DeleteUserAttributesResult, CognitoIdentityProviderError> DeleteUserAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> DeleteUserPoolOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> DeleteUserPoolClientOutcome;
      typedef Aws::Utils::Outcome<DeleteUserPoolDomainResult, CognitoIdentityProviderError> DeleteUserPoolDomainOutcome;
      typedef Aws::Utils::Outcome<DescribeIdentityProviderResult, CognitoIdentityProviderError> DescribeIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<DescribeResourceServerResult, CognitoIdentityProviderError> DescribeResourceServerOutcome;
      typedef Aws::Utils::Outcome<DescribeRiskConfigurationResult, CognitoIdentityProviderError> DescribeRiskConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeUserImportJobResult, CognitoIdentityProviderError> DescribeUserImportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeUserPoolResult, CognitoIdentityProviderError> DescribeUserPoolOutcome;
      typedef Aws::Utils::Outcome<DescribeUserPoolClientResult, CognitoIdentityProviderError> DescribeUserPoolClientOutcome;
      typedef Aws::Utils::Outcome<DescribeUserPoolDomainResult, CognitoIdentityProviderError> DescribeUserPoolDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoIdentityProviderError> ForgetDeviceOutcome;
      typedef Aws::Utils::Outcome<ForgotPasswordResult, CognitoIdentityProviderError> ForgotPasswordOutcome;
      typedef Aws::Utils::Outcome<GetCSVHeaderResult, CognitoIdentityProviderError> GetCSVHeaderOutcome;
      typedef Aws::Utils::Outcome<GetDeviceResult, CognitoIdentityProviderError> GetDeviceOutcome;
      typedef Aws::Utils::Outcome<GetGroupResult, CognitoIdentityProviderError> GetGroupOutcome;
      typedef Aws::Utils::Outcome<GetIdentityProviderByIdentifierResult, CognitoIdentityProviderError> GetIdentityProviderByIdentifierOutcome;
      typedef Aws::Utils::Outcome<GetLogDeliveryConfigurationResult, CognitoIdentityProviderError> GetLogDeliveryConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetSigningCertificateResult, CognitoIdentityProviderError> GetSigningCertificateOutcome;
      typedef Aws::Utils::Outcome<GetUICustomizationResult, CognitoIdentityProviderError> GetUICustomizationOutcome;
      typedef Aws::Utils::Outcome<GetUserResult, CognitoIdentityProviderError> GetUserOutcome;
      typedef Aws::Utils::Outcome<GetUserAttributeVerificationCodeResult, CognitoIdentityProviderError> GetUserAttributeVerificationCodeOutcome;
      typedef Aws::Utils::Outcome<GetUserPoolMfaConfigResult, CognitoIdentityProviderError> GetUserPoolMfaConfigOutcome;
      typedef Aws::Utils::Outcome<GlobalSignOutResult, CognitoIdentityProviderError> GlobalSignOutOutcome;
      typedef Aws::Utils::Outcome<InitiateAuthResult, CognitoIdentityProviderError> InitiateAuthOutcome;
      typedef Aws::Utils::Outcome<ListDevicesResult, CognitoIdentityProviderError> ListDevicesOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, CognitoIdentityProviderError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListIdentityProvidersResult, CognitoIdentityProviderError> ListIdentityProvidersOutcome;
      typedef Aws::Utils::Outcome<ListResourceServersResult, CognitoIdentityProviderError> ListResourceServersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CognitoIdentityProviderError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUserImportJobsResult, CognitoIdentityProviderError> ListUserImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListUserPoolClientsResult, CognitoIdentityProviderError> ListUserPoolClientsOutcome;
      typedef Aws::Utils::Outcome<ListUserPoolsResult, CognitoIdentityProviderError> ListUserPoolsOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, CognitoIdentityProviderError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<ListUsersInGroupResult, CognitoIdentityProviderError> ListUsersInGroupOutcome;
      typedef Aws::Utils::Outcome<ResendConfirmationCodeResult, CognitoIdentityProviderError> ResendConfirmationCodeOutcome;
      typedef Aws::Utils::Outcome<RespondToAuthChallengeResult, CognitoIdentityProviderError> RespondToAuthChallengeOutcome;
      typedef Aws::Utils::Outcome<RevokeTokenResult, CognitoIdentityProviderError> RevokeTokenOutcome;
      typedef Aws::Utils::Outcome<SetLogDeliveryConfigurationResult, CognitoIdentityProviderError> SetLogDeliveryConfigurationOutcome;
      typedef Aws::Utils::Outcome<SetRiskConfigurationResult, CognitoIdentityProviderError> SetRiskConfigurationOutcome;
      typedef Aws::Utils::Outcome<SetUICustomizationResult, CognitoIdentityProviderError> SetUICustomizationOutcome;
      typedef Aws::Utils::Outcome<SetUserMFAPreferenceResult, CognitoIdentityProviderError> SetUserMFAPreferenceOutcome;
      typedef Aws::Utils::Outcome<SetUserPoolMfaConfigResult, CognitoIdentityProviderError> SetUserPoolMfaConfigOutcome;
      typedef Aws::Utils::Outcome<SetUserSettingsResult, CognitoIdentityProviderError> SetUserSettingsOutcome;
      typedef Aws::Utils::Outcome<SignUpResult, CognitoIdentityProviderError> SignUpOutcome;
      typedef Aws::Utils::Outcome<StartUserImportJobResult, CognitoIdentityProviderError> StartUserImportJobOutcome;
      typedef Aws::Utils::Outcome<StopUserImportJobResult, CognitoIdentityProviderError> StopUserImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CognitoIdentityProviderError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CognitoIdentityProviderError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAuthEventFeedbackResult, CognitoIdentityProviderError> UpdateAuthEventFeedbackOutcome;
      typedef Aws::Utils::Outcome<UpdateDeviceStatusResult, CognitoIdentityProviderError> UpdateDeviceStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupResult, CognitoIdentityProviderError> UpdateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateIdentityProviderResult, CognitoIdentityProviderError> UpdateIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceServerResult, CognitoIdentityProviderError> UpdateResourceServerOutcome;
      typedef Aws::Utils::Outcome<UpdateUserAttributesResult, CognitoIdentityProviderError> UpdateUserAttributesOutcome;
      typedef Aws::Utils::Outcome<UpdateUserPoolResult, CognitoIdentityProviderError> UpdateUserPoolOutcome;
      typedef Aws::Utils::Outcome<UpdateUserPoolClientResult, CognitoIdentityProviderError> UpdateUserPoolClientOutcome;
      typedef Aws::Utils::Outcome<UpdateUserPoolDomainResult, CognitoIdentityProviderError> UpdateUserPoolDomainOutcome;
      typedef Aws::Utils::Outcome<VerifySoftwareTokenResult, CognitoIdentityProviderError> VerifySoftwareTokenOutcome;
      typedef Aws::Utils::Outcome<VerifyUserAttributeResult, CognitoIdentityProviderError> VerifyUserAttributeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<GetLogDeliveryConfigurationOutcome> GetLogDeliveryConfigurationOutcomeCallable;
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
      typedef std::future<RevokeTokenOutcome> RevokeTokenOutcomeCallable;
      typedef std::future<SetLogDeliveryConfigurationOutcome> SetLogDeliveryConfigurationOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CognitoIdentityProviderClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetLogDeliveryConfigurationRequest&, const Model::GetLogDeliveryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogDeliveryConfigurationResponseReceivedHandler;
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
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::RevokeTokenRequest&, const Model::RevokeTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeTokenResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetLogDeliveryConfigurationRequest&, const Model::SetLogDeliveryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLogDeliveryConfigurationResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace CognitoIdentityProvider
} // namespace Aws
