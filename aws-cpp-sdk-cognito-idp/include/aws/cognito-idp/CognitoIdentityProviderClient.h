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
#include <aws/cognito-idp/model/AdminDisableUserResult.h>
#include <aws/cognito-idp/model/AdminEnableUserResult.h>
#include <aws/cognito-idp/model/AdminGetDeviceResult.h>
#include <aws/cognito-idp/model/AdminGetUserResult.h>
#include <aws/cognito-idp/model/AdminInitiateAuthResult.h>
#include <aws/cognito-idp/model/AdminListDevicesResult.h>
#include <aws/cognito-idp/model/AdminResetUserPasswordResult.h>
#include <aws/cognito-idp/model/AdminRespondToAuthChallengeResult.h>
#include <aws/cognito-idp/model/AdminSetUserSettingsResult.h>
#include <aws/cognito-idp/model/AdminUpdateDeviceStatusResult.h>
#include <aws/cognito-idp/model/AdminUpdateUserAttributesResult.h>
#include <aws/cognito-idp/model/AdminUserGlobalSignOutResult.h>
#include <aws/cognito-idp/model/ChangePasswordResult.h>
#include <aws/cognito-idp/model/ConfirmDeviceResult.h>
#include <aws/cognito-idp/model/ConfirmForgotPasswordResult.h>
#include <aws/cognito-idp/model/ConfirmSignUpResult.h>
#include <aws/cognito-idp/model/CreateUserImportJobResult.h>
#include <aws/cognito-idp/model/CreateUserPoolResult.h>
#include <aws/cognito-idp/model/CreateUserPoolClientResult.h>
#include <aws/cognito-idp/model/DeleteUserAttributesResult.h>
#include <aws/cognito-idp/model/DescribeUserImportJobResult.h>
#include <aws/cognito-idp/model/DescribeUserPoolResult.h>
#include <aws/cognito-idp/model/DescribeUserPoolClientResult.h>
#include <aws/cognito-idp/model/ForgotPasswordResult.h>
#include <aws/cognito-idp/model/GetCSVHeaderResult.h>
#include <aws/cognito-idp/model/GetDeviceResult.h>
#include <aws/cognito-idp/model/GetUserResult.h>
#include <aws/cognito-idp/model/GetUserAttributeVerificationCodeResult.h>
#include <aws/cognito-idp/model/GlobalSignOutResult.h>
#include <aws/cognito-idp/model/InitiateAuthResult.h>
#include <aws/cognito-idp/model/ListDevicesResult.h>
#include <aws/cognito-idp/model/ListUserImportJobsResult.h>
#include <aws/cognito-idp/model/ListUserPoolClientsResult.h>
#include <aws/cognito-idp/model/ListUserPoolsResult.h>
#include <aws/cognito-idp/model/ListUsersResult.h>
#include <aws/cognito-idp/model/ResendConfirmationCodeResult.h>
#include <aws/cognito-idp/model/RespondToAuthChallengeResult.h>
#include <aws/cognito-idp/model/SetUserSettingsResult.h>
#include <aws/cognito-idp/model/SignUpResult.h>
#include <aws/cognito-idp/model/StartUserImportJobResult.h>
#include <aws/cognito-idp/model/StopUserImportJobResult.h>
#include <aws/cognito-idp/model/UpdateDeviceStatusResult.h>
#include <aws/cognito-idp/model/UpdateUserAttributesResult.h>
#include <aws/cognito-idp/model/UpdateUserPoolResult.h>
#include <aws/cognito-idp/model/UpdateUserPoolClientResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class AdminConfirmSignUpRequest;
        class AdminCreateUserRequest;
        class AdminDeleteUserRequest;
        class AdminDeleteUserAttributesRequest;
        class AdminDisableUserRequest;
        class AdminEnableUserRequest;
        class AdminForgetDeviceRequest;
        class AdminGetDeviceRequest;
        class AdminGetUserRequest;
        class AdminInitiateAuthRequest;
        class AdminListDevicesRequest;
        class AdminResetUserPasswordRequest;
        class AdminRespondToAuthChallengeRequest;
        class AdminSetUserSettingsRequest;
        class AdminUpdateDeviceStatusRequest;
        class AdminUpdateUserAttributesRequest;
        class AdminUserGlobalSignOutRequest;
        class ChangePasswordRequest;
        class ConfirmDeviceRequest;
        class ConfirmForgotPasswordRequest;
        class ConfirmSignUpRequest;
        class CreateUserImportJobRequest;
        class CreateUserPoolRequest;
        class CreateUserPoolClientRequest;
        class DeleteUserRequest;
        class DeleteUserAttributesRequest;
        class DeleteUserPoolRequest;
        class DeleteUserPoolClientRequest;
        class DescribeUserImportJobRequest;
        class DescribeUserPoolRequest;
        class DescribeUserPoolClientRequest;
        class ForgetDeviceRequest;
        class ForgotPasswordRequest;
        class GetCSVHeaderRequest;
        class GetDeviceRequest;
        class GetUserRequest;
        class GetUserAttributeVerificationCodeRequest;
        class GlobalSignOutRequest;
        class InitiateAuthRequest;
        class ListDevicesRequest;
        class ListUserImportJobsRequest;
        class ListUserPoolClientsRequest;
        class ListUserPoolsRequest;
        class ListUsersRequest;
        class ResendConfirmationCodeRequest;
        class RespondToAuthChallengeRequest;
        class SetUserSettingsRequest;
        class SignUpRequest;
        class StartUserImportJobRequest;
        class StopUserImportJobRequest;
        class UpdateDeviceStatusRequest;
        class UpdateUserAttributesRequest;
        class UpdateUserPoolRequest;
        class UpdateUserPoolClientRequest;
        class VerifyUserAttributeRequest;

        typedef Aws::Utils::Outcome<AddCustomAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AddCustomAttributesOutcome;
        typedef Aws::Utils::Outcome<AdminConfirmSignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminConfirmSignUpOutcome;
        typedef Aws::Utils::Outcome<AdminCreateUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminCreateUserOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDeleteUserOutcome;
        typedef Aws::Utils::Outcome<AdminDeleteUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDeleteUserAttributesOutcome;
        typedef Aws::Utils::Outcome<AdminDisableUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDisableUserOutcome;
        typedef Aws::Utils::Outcome<AdminEnableUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminEnableUserOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminForgetDeviceOutcome;
        typedef Aws::Utils::Outcome<AdminGetDeviceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminGetDeviceOutcome;
        typedef Aws::Utils::Outcome<AdminGetUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminGetUserOutcome;
        typedef Aws::Utils::Outcome<AdminInitiateAuthResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminInitiateAuthOutcome;
        typedef Aws::Utils::Outcome<AdminListDevicesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminListDevicesOutcome;
        typedef Aws::Utils::Outcome<AdminResetUserPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminResetUserPasswordOutcome;
        typedef Aws::Utils::Outcome<AdminRespondToAuthChallengeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminRespondToAuthChallengeOutcome;
        typedef Aws::Utils::Outcome<AdminSetUserSettingsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminSetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<AdminUpdateDeviceStatusResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUpdateDeviceStatusOutcome;
        typedef Aws::Utils::Outcome<AdminUpdateUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUpdateUserAttributesOutcome;
        typedef Aws::Utils::Outcome<AdminUserGlobalSignOutResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUserGlobalSignOutOutcome;
        typedef Aws::Utils::Outcome<ChangePasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ChangePasswordOutcome;
        typedef Aws::Utils::Outcome<ConfirmDeviceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmDeviceOutcome;
        typedef Aws::Utils::Outcome<ConfirmForgotPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmForgotPasswordOutcome;
        typedef Aws::Utils::Outcome<ConfirmSignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmSignUpOutcome;
        typedef Aws::Utils::Outcome<CreateUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserImportJobOutcome;
        typedef Aws::Utils::Outcome<CreateUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserPoolOutcome;
        typedef Aws::Utils::Outcome<CreateUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DeleteUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserAttributesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserPoolOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<DescribeUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserImportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserPoolOutcome;
        typedef Aws::Utils::Outcome<DescribeUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ForgetDeviceOutcome;
        typedef Aws::Utils::Outcome<ForgotPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ForgotPasswordOutcome;
        typedef Aws::Utils::Outcome<GetCSVHeaderResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetCSVHeaderOutcome;
        typedef Aws::Utils::Outcome<GetDeviceResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetDeviceOutcome;
        typedef Aws::Utils::Outcome<GetUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUserOutcome;
        typedef Aws::Utils::Outcome<GetUserAttributeVerificationCodeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUserAttributeVerificationCodeOutcome;
        typedef Aws::Utils::Outcome<GlobalSignOutResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GlobalSignOutOutcome;
        typedef Aws::Utils::Outcome<InitiateAuthResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> InitiateAuthOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListUserImportJobsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserImportJobsOutcome;
        typedef Aws::Utils::Outcome<ListUserPoolClientsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserPoolClientsOutcome;
        typedef Aws::Utils::Outcome<ListUserPoolsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserPoolsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ResendConfirmationCodeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ResendConfirmationCodeOutcome;
        typedef Aws::Utils::Outcome<RespondToAuthChallengeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> RespondToAuthChallengeOutcome;
        typedef Aws::Utils::Outcome<SetUserSettingsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<SignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SignUpOutcome;
        typedef Aws::Utils::Outcome<StartUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> StartUserImportJobOutcome;
        typedef Aws::Utils::Outcome<StopUserImportJobResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> StopUserImportJobOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceStatusResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateDeviceStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserPoolOutcome;
        typedef Aws::Utils::Outcome<UpdateUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<VerifyUserAttributeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> VerifyUserAttributeOutcome;

        typedef std::future<AddCustomAttributesOutcome> AddCustomAttributesOutcomeCallable;
        typedef std::future<AdminConfirmSignUpOutcome> AdminConfirmSignUpOutcomeCallable;
        typedef std::future<AdminCreateUserOutcome> AdminCreateUserOutcomeCallable;
        typedef std::future<AdminDeleteUserOutcome> AdminDeleteUserOutcomeCallable;
        typedef std::future<AdminDeleteUserAttributesOutcome> AdminDeleteUserAttributesOutcomeCallable;
        typedef std::future<AdminDisableUserOutcome> AdminDisableUserOutcomeCallable;
        typedef std::future<AdminEnableUserOutcome> AdminEnableUserOutcomeCallable;
        typedef std::future<AdminForgetDeviceOutcome> AdminForgetDeviceOutcomeCallable;
        typedef std::future<AdminGetDeviceOutcome> AdminGetDeviceOutcomeCallable;
        typedef std::future<AdminGetUserOutcome> AdminGetUserOutcomeCallable;
        typedef std::future<AdminInitiateAuthOutcome> AdminInitiateAuthOutcomeCallable;
        typedef std::future<AdminListDevicesOutcome> AdminListDevicesOutcomeCallable;
        typedef std::future<AdminResetUserPasswordOutcome> AdminResetUserPasswordOutcomeCallable;
        typedef std::future<AdminRespondToAuthChallengeOutcome> AdminRespondToAuthChallengeOutcomeCallable;
        typedef std::future<AdminSetUserSettingsOutcome> AdminSetUserSettingsOutcomeCallable;
        typedef std::future<AdminUpdateDeviceStatusOutcome> AdminUpdateDeviceStatusOutcomeCallable;
        typedef std::future<AdminUpdateUserAttributesOutcome> AdminUpdateUserAttributesOutcomeCallable;
        typedef std::future<AdminUserGlobalSignOutOutcome> AdminUserGlobalSignOutOutcomeCallable;
        typedef std::future<ChangePasswordOutcome> ChangePasswordOutcomeCallable;
        typedef std::future<ConfirmDeviceOutcome> ConfirmDeviceOutcomeCallable;
        typedef std::future<ConfirmForgotPasswordOutcome> ConfirmForgotPasswordOutcomeCallable;
        typedef std::future<ConfirmSignUpOutcome> ConfirmSignUpOutcomeCallable;
        typedef std::future<CreateUserImportJobOutcome> CreateUserImportJobOutcomeCallable;
        typedef std::future<CreateUserPoolOutcome> CreateUserPoolOutcomeCallable;
        typedef std::future<CreateUserPoolClientOutcome> CreateUserPoolClientOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserAttributesOutcome> DeleteUserAttributesOutcomeCallable;
        typedef std::future<DeleteUserPoolOutcome> DeleteUserPoolOutcomeCallable;
        typedef std::future<DeleteUserPoolClientOutcome> DeleteUserPoolClientOutcomeCallable;
        typedef std::future<DescribeUserImportJobOutcome> DescribeUserImportJobOutcomeCallable;
        typedef std::future<DescribeUserPoolOutcome> DescribeUserPoolOutcomeCallable;
        typedef std::future<DescribeUserPoolClientOutcome> DescribeUserPoolClientOutcomeCallable;
        typedef std::future<ForgetDeviceOutcome> ForgetDeviceOutcomeCallable;
        typedef std::future<ForgotPasswordOutcome> ForgotPasswordOutcomeCallable;
        typedef std::future<GetCSVHeaderOutcome> GetCSVHeaderOutcomeCallable;
        typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetUserAttributeVerificationCodeOutcome> GetUserAttributeVerificationCodeOutcomeCallable;
        typedef std::future<GlobalSignOutOutcome> GlobalSignOutOutcomeCallable;
        typedef std::future<InitiateAuthOutcome> InitiateAuthOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListUserImportJobsOutcome> ListUserImportJobsOutcomeCallable;
        typedef std::future<ListUserPoolClientsOutcome> ListUserPoolClientsOutcomeCallable;
        typedef std::future<ListUserPoolsOutcome> ListUserPoolsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ResendConfirmationCodeOutcome> ResendConfirmationCodeOutcomeCallable;
        typedef std::future<RespondToAuthChallengeOutcome> RespondToAuthChallengeOutcomeCallable;
        typedef std::future<SetUserSettingsOutcome> SetUserSettingsOutcomeCallable;
        typedef std::future<SignUpOutcome> SignUpOutcomeCallable;
        typedef std::future<StartUserImportJobOutcome> StartUserImportJobOutcomeCallable;
        typedef std::future<StopUserImportJobOutcome> StopUserImportJobOutcomeCallable;
        typedef std::future<UpdateDeviceStatusOutcome> UpdateDeviceStatusOutcomeCallable;
        typedef std::future<UpdateUserAttributesOutcome> UpdateUserAttributesOutcomeCallable;
        typedef std::future<UpdateUserPoolOutcome> UpdateUserPoolOutcomeCallable;
        typedef std::future<UpdateUserPoolClientOutcome> UpdateUserPoolClientOutcomeCallable;
        typedef std::future<VerifyUserAttributeOutcome> VerifyUserAttributeOutcomeCallable;
} // namespace Model

  class CognitoIdentityProviderClient;

    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AddCustomAttributesRequest&, const Model::AddCustomAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCustomAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminConfirmSignUpRequest&, const Model::AdminConfirmSignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminConfirmSignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminCreateUserRequest&, const Model::AdminCreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminCreateUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDeleteUserRequest&, const Model::AdminDeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDeleteUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDeleteUserAttributesRequest&, const Model::AdminDeleteUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDeleteUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDisableUserRequest&, const Model::AdminDisableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDisableUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminEnableUserRequest&, const Model::AdminEnableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminEnableUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminForgetDeviceRequest&, const Model::AdminForgetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminForgetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminGetDeviceRequest&, const Model::AdminGetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminGetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminGetUserRequest&, const Model::AdminGetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminGetUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminInitiateAuthRequest&, const Model::AdminInitiateAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminInitiateAuthResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminListDevicesRequest&, const Model::AdminListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminListDevicesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminResetUserPasswordRequest&, const Model::AdminResetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminResetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminRespondToAuthChallengeRequest&, const Model::AdminRespondToAuthChallengeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminRespondToAuthChallengeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminSetUserSettingsRequest&, const Model::AdminSetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminSetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUpdateDeviceStatusRequest&, const Model::AdminUpdateDeviceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUpdateDeviceStatusResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUpdateUserAttributesRequest&, const Model::AdminUpdateUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUpdateUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUserGlobalSignOutRequest&, const Model::AdminUserGlobalSignOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUserGlobalSignOutResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ChangePasswordRequest&, const Model::ChangePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangePasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmDeviceRequest&, const Model::ConfirmDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmForgotPasswordRequest&, const Model::ConfirmForgotPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmForgotPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmSignUpRequest&, const Model::ConfirmSignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmSignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserImportJobRequest&, const Model::CreateUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserPoolRequest&, const Model::CreateUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserPoolClientRequest&, const Model::CreateUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserAttributesRequest&, const Model::DeleteUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserPoolRequest&, const Model::DeleteUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserPoolClientRequest&, const Model::DeleteUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserImportJobRequest&, const Model::DescribeUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserPoolRequest&, const Model::DescribeUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserPoolClientRequest&, const Model::DescribeUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ForgetDeviceRequest&, const Model::ForgetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ForgetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ForgotPasswordRequest&, const Model::ForgotPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ForgotPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetCSVHeaderRequest&, const Model::GetCSVHeaderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCSVHeaderResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUserAttributeVerificationCodeRequest&, const Model::GetUserAttributeVerificationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserAttributeVerificationCodeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GlobalSignOutRequest&, const Model::GlobalSignOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GlobalSignOutResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::InitiateAuthRequest&, const Model::InitiateAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateAuthResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserImportJobsRequest&, const Model::ListUserImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserImportJobsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserPoolClientsRequest&, const Model::ListUserPoolClientsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoolClientsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserPoolsRequest&, const Model::ListUserPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoolsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ResendConfirmationCodeRequest&, const Model::ResendConfirmationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendConfirmationCodeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::RespondToAuthChallengeRequest&, const Model::RespondToAuthChallengeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RespondToAuthChallengeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetUserSettingsRequest&, const Model::SetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SignUpRequest&, const Model::SignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::StartUserImportJobRequest&, const Model::StartUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::StopUserImportJobRequest&, const Model::StopUserImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopUserImportJobResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateDeviceStatusRequest&, const Model::UpdateDeviceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceStatusResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserAttributesRequest&, const Model::UpdateUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserPoolRequest&, const Model::UpdateUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserPoolClientRequest&, const Model::UpdateUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::VerifyUserAttributeRequest&, const Model::VerifyUserAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyUserAttributeResponseReceivedHandler;

  /**
   * <p>Using the Amazon Cognito Your User Pools API, you can create a user pool to
   * manage directories and users. You can authenticate a user to obtain tokens
   * related to user identity and access policies.</p> <p>This API reference provides
   * information about user pools in Amazon Cognito Your User Pools.</p> <p>For more
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
        CognitoIdentityProviderClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityProviderClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CognitoIdentityProviderClient();

        /**
         * <p>Adds additional user attributes to the user pool schema.</p>
         */
        virtual Model::AddCustomAttributesOutcome AddCustomAttributes(const Model::AddCustomAttributesRequest& request) const;

        /**
         * <p>Adds additional user attributes to the user pool schema.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddCustomAttributesOutcomeCallable AddCustomAttributesCallable(const Model::AddCustomAttributesRequest& request) const;

        /**
         * <p>Adds additional user attributes to the user pool schema.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddCustomAttributesAsync(const Model::AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms user registration as an admin without using a confirmation code.
         * Works on any user.</p>
         */
        virtual Model::AdminConfirmSignUpOutcome AdminConfirmSignUp(const Model::AdminConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms user registration as an admin without using a confirmation code.
         * Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminConfirmSignUpOutcomeCallable AdminConfirmSignUpCallable(const Model::AdminConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms user registration as an admin without using a confirmation code.
         * Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminConfirmSignUpAsync(const Model::AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user in the specified user pool and sends a welcome message via
         * email or phone (SMS). This message is based on a template that you configured in
         * your call to CreateUserPool or UpdateUserPool. This template includes your
         * custom sign-up instructions and placeholders for user name and temporary
         * password.</p> <p>Requires developer credentials.</p>
         */
        virtual Model::AdminCreateUserOutcome AdminCreateUser(const Model::AdminCreateUserRequest& request) const;

        /**
         * <p>Creates a new user in the specified user pool and sends a welcome message via
         * email or phone (SMS). This message is based on a template that you configured in
         * your call to CreateUserPool or UpdateUserPool. This template includes your
         * custom sign-up instructions and placeholders for user name and temporary
         * password.</p> <p>Requires developer credentials.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminCreateUserOutcomeCallable AdminCreateUserCallable(const Model::AdminCreateUserRequest& request) const;

        /**
         * <p>Creates a new user in the specified user pool and sends a welcome message via
         * email or phone (SMS). This message is based on a template that you configured in
         * your call to CreateUserPool or UpdateUserPool. This template includes your
         * custom sign-up instructions and placeholders for user name and temporary
         * password.</p> <p>Requires developer credentials.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminCreateUserAsync(const Model::AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user as an administrator. Works on any user.</p>
         */
        virtual Model::AdminDeleteUserOutcome AdminDeleteUser(const Model::AdminDeleteUserRequest& request) const;

        /**
         * <p>Deletes a user as an administrator. Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDeleteUserOutcomeCallable AdminDeleteUserCallable(const Model::AdminDeleteUserRequest& request) const;

        /**
         * <p>Deletes a user as an administrator. Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDeleteUserAsync(const Model::AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p>
         */
        virtual Model::AdminDeleteUserAttributesOutcome AdminDeleteUserAttributes(const Model::AdminDeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDeleteUserAttributesOutcomeCallable AdminDeleteUserAttributesCallable(const Model::AdminDeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDeleteUserAttributesAsync(const Model::AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified user as an administrator. Works on any user.</p>
         */
        virtual Model::AdminDisableUserOutcome AdminDisableUser(const Model::AdminDisableUserRequest& request) const;

        /**
         * <p>Disables the specified user as an administrator. Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDisableUserOutcomeCallable AdminDisableUserCallable(const Model::AdminDisableUserRequest& request) const;

        /**
         * <p>Disables the specified user as an administrator. Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDisableUserAsync(const Model::AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified user as an administrator. Works on any user.</p>
         */
        virtual Model::AdminEnableUserOutcome AdminEnableUser(const Model::AdminEnableUserRequest& request) const;

        /**
         * <p>Enables the specified user as an administrator. Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminEnableUserOutcomeCallable AdminEnableUserCallable(const Model::AdminEnableUserRequest& request) const;

        /**
         * <p>Enables the specified user as an administrator. Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminEnableUserAsync(const Model::AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forgets the device, as an administrator.</p>
         */
        virtual Model::AdminForgetDeviceOutcome AdminForgetDevice(const Model::AdminForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the device, as an administrator.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminForgetDeviceOutcomeCallable AdminForgetDeviceCallable(const Model::AdminForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the device, as an administrator.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminForgetDeviceAsync(const Model::AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the device, as an administrator.</p>
         */
        virtual Model::AdminGetDeviceOutcome AdminGetDevice(const Model::AdminGetDeviceRequest& request) const;

        /**
         * <p>Gets the device, as an administrator.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminGetDeviceOutcomeCallable AdminGetDeviceCallable(const Model::AdminGetDeviceRequest& request) const;

        /**
         * <p>Gets the device, as an administrator.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminGetDeviceAsync(const Model::AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p>
         */
        virtual Model::AdminGetUserOutcome AdminGetUser(const Model::AdminGetUserRequest& request) const;

        /**
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminGetUserOutcomeCallable AdminGetUserCallable(const Model::AdminGetUserRequest& request) const;

        /**
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminGetUserAsync(const Model::AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the authentication flow, as an administrator.</p>
         */
        virtual Model::AdminInitiateAuthOutcome AdminInitiateAuth(const Model::AdminInitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow, as an administrator.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminInitiateAuthOutcomeCallable AdminInitiateAuthCallable(const Model::AdminInitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow, as an administrator.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminInitiateAuthAsync(const Model::AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists devices, as an administrator.</p>
         */
        virtual Model::AdminListDevicesOutcome AdminListDevices(const Model::AdminListDevicesRequest& request) const;

        /**
         * <p>Lists devices, as an administrator.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminListDevicesOutcomeCallable AdminListDevicesCallable(const Model::AdminListDevicesRequest& request) const;

        /**
         * <p>Lists devices, as an administrator.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminListDevicesAsync(const Model::AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * change their password.</p>
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
         * change their password.</p>
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
         * change their password.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminResetUserPasswordAsync(const Model::AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Responds to an authentication challenge, as an administrator.</p>
         */
        virtual Model::AdminRespondToAuthChallengeOutcome AdminRespondToAuthChallenge(const Model::AdminRespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to an authentication challenge, as an administrator.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminRespondToAuthChallengeOutcomeCallable AdminRespondToAuthChallengeCallable(const Model::AdminRespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to an authentication challenge, as an administrator.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminRespondToAuthChallengeAsync(const Model::AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets all the user settings for a specified user name. Works on any user.</p>
         */
        virtual Model::AdminSetUserSettingsOutcome AdminSetUserSettings(const Model::AdminSetUserSettingsRequest& request) const;

        /**
         * <p>Sets all the user settings for a specified user name. Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminSetUserSettingsOutcomeCallable AdminSetUserSettingsCallable(const Model::AdminSetUserSettingsRequest& request) const;

        /**
         * <p>Sets all the user settings for a specified user name. Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminSetUserSettingsAsync(const Model::AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device status as an administrator.</p>
         */
        virtual Model::AdminUpdateDeviceStatusOutcome AdminUpdateDeviceStatus(const Model::AdminUpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status as an administrator.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateDeviceStatusOutcomeCallable AdminUpdateDeviceStatusCallable(const Model::AdminUpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status as an administrator.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateDeviceStatusAsync(const Model::AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user's attributes, including developer attributes, as
         * an administrator. Works on any user.</p>
         */
        virtual Model::AdminUpdateUserAttributesOutcome AdminUpdateUserAttributes(const Model::AdminUpdateUserAttributesRequest& request) const;

        /**
         * <p>Updates the specified user's attributes, including developer attributes, as
         * an administrator. Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateUserAttributesOutcomeCallable AdminUpdateUserAttributesCallable(const Model::AdminUpdateUserAttributesRequest& request) const;

        /**
         * <p>Updates the specified user's attributes, including developer attributes, as
         * an administrator. Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateUserAttributesAsync(const Model::AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signs out users from all devices, as an administrator.</p>
         */
        virtual Model::AdminUserGlobalSignOutOutcome AdminUserGlobalSignOut(const Model::AdminUserGlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices, as an administrator.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUserGlobalSignOutOutcomeCallable AdminUserGlobalSignOutCallable(const Model::AdminUserGlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices, as an administrator.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUserGlobalSignOutAsync(const Model::AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password for a specified user in a user pool.</p>
         */
        virtual Model::ChangePasswordOutcome ChangePassword(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password for a specified user in a user pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const Model::ChangePasswordRequest& request) const;

        /**
         * <p>Changes the password for a specified user in a user pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms tracking of the device. This API call is the call that beings device
         * tracking.</p>
         */
        virtual Model::ConfirmDeviceOutcome ConfirmDevice(const Model::ConfirmDeviceRequest& request) const;

        /**
         * <p>Confirms tracking of the device. This API call is the call that beings device
         * tracking.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmDeviceOutcomeCallable ConfirmDeviceCallable(const Model::ConfirmDeviceRequest& request) const;

        /**
         * <p>Confirms tracking of the device. This API call is the call that beings device
         * tracking.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmDeviceAsync(const Model::ConfirmDeviceRequest& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to enter a code provided when they reset their password to
         * update their password.</p>
         */
        virtual Model::ConfirmForgotPasswordOutcome ConfirmForgotPassword(const Model::ConfirmForgotPasswordRequest& request) const;

        /**
         * <p>Allows a user to enter a code provided when they reset their password to
         * update their password.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmForgotPasswordOutcomeCallable ConfirmForgotPasswordCallable(const Model::ConfirmForgotPasswordRequest& request) const;

        /**
         * <p>Allows a user to enter a code provided when they reset their password to
         * update their password.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmForgotPasswordAsync(const Model::ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms registration of a user and handles the existing alias from a
         * previous user.</p>
         */
        virtual Model::ConfirmSignUpOutcome ConfirmSignUp(const Model::ConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms registration of a user and handles the existing alias from a
         * previous user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmSignUpOutcomeCallable ConfirmSignUpCallable(const Model::ConfirmSignUpRequest& request) const;

        /**
         * <p>Confirms registration of a user and handles the existing alias from a
         * previous user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmSignUpAsync(const Model::ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the user import job.</p>
         */
        virtual Model::CreateUserImportJobOutcome CreateUserImportJob(const Model::CreateUserImportJobRequest& request) const;

        /**
         * <p>Creates the user import job.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserImportJobOutcomeCallable CreateUserImportJobCallable(const Model::CreateUserImportJobRequest& request) const;

        /**
         * <p>Creates the user import job.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserImportJobAsync(const Model::CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Cognito user pool and sets the password policy for the
         * pool.</p>
         */
        virtual Model::CreateUserPoolOutcome CreateUserPool(const Model::CreateUserPoolRequest& request) const;

        /**
         * <p>Creates a new Amazon Cognito user pool and sets the password policy for the
         * pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolOutcomeCallable CreateUserPoolCallable(const Model::CreateUserPoolRequest& request) const;

        /**
         * <p>Creates a new Amazon Cognito user pool and sets the password policy for the
         * pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolAsync(const Model::CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the user pool client.</p>
         */
        virtual Model::CreateUserPoolClientOutcome CreateUserPoolClient(const Model::CreateUserPoolClientRequest& request) const;

        /**
         * <p>Creates the user pool client.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolClientOutcomeCallable CreateUserPoolClientCallable(const Model::CreateUserPoolClientRequest& request) const;

        /**
         * <p>Creates the user pool client.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolClientAsync(const Model::CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to delete one's self.</p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Allows a user to delete one's self.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Allows a user to delete one's self.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the attributes for a user.</p>
         */
        virtual Model::DeleteUserAttributesOutcome DeleteUserAttributes(const Model::DeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the attributes for a user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserAttributesOutcomeCallable DeleteUserAttributesCallable(const Model::DeleteUserAttributesRequest& request) const;

        /**
         * <p>Deletes the attributes for a user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAttributesAsync(const Model::DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Cognito user pool.</p>
         */
        virtual Model::DeleteUserPoolOutcome DeleteUserPool(const Model::DeleteUserPoolRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Cognito user pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolOutcomeCallable DeleteUserPoolCallable(const Model::DeleteUserPoolRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Cognito user pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPoolAsync(const Model::DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the developer to delete the user pool client.</p>
         */
        virtual Model::DeleteUserPoolClientOutcome DeleteUserPoolClient(const Model::DeleteUserPoolClientRequest& request) const;

        /**
         * <p>Allows the developer to delete the user pool client.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolClientOutcomeCallable DeleteUserPoolClientCallable(const Model::DeleteUserPoolClientRequest& request) const;

        /**
         * <p>Allows the developer to delete the user pool client.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPoolClientAsync(const Model::DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the user import job.</p>
         */
        virtual Model::DescribeUserImportJobOutcome DescribeUserImportJob(const Model::DescribeUserImportJobRequest& request) const;

        /**
         * <p>Describes the user import job.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserImportJobOutcomeCallable DescribeUserImportJobCallable(const Model::DescribeUserImportJobRequest& request) const;

        /**
         * <p>Describes the user import job.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserImportJobAsync(const Model::DescribeUserImportJobRequest& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration information and metadata of the specified user
         * pool.</p>
         */
        virtual Model::DescribeUserPoolOutcome DescribeUserPool(const Model::DescribeUserPoolRequest& request) const;

        /**
         * <p>Returns the configuration information and metadata of the specified user
         * pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolOutcomeCallable DescribeUserPoolCallable(const Model::DescribeUserPoolRequest& request) const;

        /**
         * <p>Returns the configuration information and metadata of the specified user
         * pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserPoolAsync(const Model::DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Client method for returning the configuration information and metadata of the
         * specified user pool client.</p>
         */
        virtual Model::DescribeUserPoolClientOutcome DescribeUserPoolClient(const Model::DescribeUserPoolClientRequest& request) const;

        /**
         * <p>Client method for returning the configuration information and metadata of the
         * specified user pool client.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolClientOutcomeCallable DescribeUserPoolClientCallable(const Model::DescribeUserPoolClientRequest& request) const;

        /**
         * <p>Client method for returning the configuration information and metadata of the
         * specified user pool client.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserPoolClientAsync(const Model::DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forgets the specified device.</p>
         */
        virtual Model::ForgetDeviceOutcome ForgetDevice(const Model::ForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the specified device.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgetDeviceOutcomeCallable ForgetDeviceCallable(const Model::ForgetDeviceRequest& request) const;

        /**
         * <p>Forgets the specified device.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgetDeviceAsync(const Model::ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the password for the specified client ID or username.</p>
         */
        virtual Model::ForgotPasswordOutcome ForgotPassword(const Model::ForgotPasswordRequest& request) const;

        /**
         * <p>Retrieves the password for the specified client ID or username.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgotPasswordOutcomeCallable ForgotPasswordCallable(const Model::ForgotPasswordRequest& request) const;

        /**
         * <p>Retrieves the password for the specified client ID or username.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgotPasswordAsync(const Model::ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the header information for the .csv file to be used as input for the
         * user import job.</p>
         */
        virtual Model::GetCSVHeaderOutcome GetCSVHeader(const Model::GetCSVHeaderRequest& request) const;

        /**
         * <p>Gets the header information for the .csv file to be used as input for the
         * user import job.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCSVHeaderOutcomeCallable GetCSVHeaderCallable(const Model::GetCSVHeaderRequest& request) const;

        /**
         * <p>Gets the header information for the .csv file to be used as input for the
         * user import job.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCSVHeaderAsync(const Model::GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the device.</p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets the device.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets the device.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the user attributes and metadata for a user.</p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * <p>Gets the user attributes and metadata for a user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * <p>Gets the user attributes and metadata for a user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the user attribute verification code for the specified attribute
         * name.</p>
         */
        virtual Model::GetUserAttributeVerificationCodeOutcome GetUserAttributeVerificationCode(const Model::GetUserAttributeVerificationCodeRequest& request) const;

        /**
         * <p>Gets the user attribute verification code for the specified attribute
         * name.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserAttributeVerificationCodeOutcomeCallable GetUserAttributeVerificationCodeCallable(const Model::GetUserAttributeVerificationCodeRequest& request) const;

        /**
         * <p>Gets the user attribute verification code for the specified attribute
         * name.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAttributeVerificationCodeAsync(const Model::GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signs out users from all devices.</p>
         */
        virtual Model::GlobalSignOutOutcome GlobalSignOut(const Model::GlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GlobalSignOutOutcomeCallable GlobalSignOutCallable(const Model::GlobalSignOutRequest& request) const;

        /**
         * <p>Signs out users from all devices.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GlobalSignOutAsync(const Model::GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the authentication flow.</p>
         */
        virtual Model::InitiateAuthOutcome InitiateAuth(const Model::InitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateAuthOutcomeCallable InitiateAuthCallable(const Model::InitiateAuthRequest& request) const;

        /**
         * <p>Initiates the authentication flow.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateAuthAsync(const Model::InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the devices.</p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Lists the devices.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Lists the devices.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the user import jobs.</p>
         */
        virtual Model::ListUserImportJobsOutcome ListUserImportJobs(const Model::ListUserImportJobsRequest& request) const;

        /**
         * <p>Lists the user import jobs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserImportJobsOutcomeCallable ListUserImportJobsCallable(const Model::ListUserImportJobsRequest& request) const;

        /**
         * <p>Lists the user import jobs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserImportJobsAsync(const Model::ListUserImportJobsRequest& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the clients that have been created for the specified user pool.</p>
         */
        virtual Model::ListUserPoolClientsOutcome ListUserPoolClients(const Model::ListUserPoolClientsRequest& request) const;

        /**
         * <p>Lists the clients that have been created for the specified user pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoolClientsOutcomeCallable ListUserPoolClientsCallable(const Model::ListUserPoolClientsRequest& request) const;

        /**
         * <p>Lists the clients that have been created for the specified user pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoolClientsAsync(const Model::ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the user pools associated with an AWS account.</p>
         */
        virtual Model::ListUserPoolsOutcome ListUserPools(const Model::ListUserPoolsRequest& request) const;

        /**
         * <p>Lists the user pools associated with an AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoolsOutcomeCallable ListUserPoolsCallable(const Model::ListUserPoolsRequest& request) const;

        /**
         * <p>Lists the user pools associated with an AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoolsAsync(const Model::ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the users in the Amazon Cognito user pool.</p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users in the Amazon Cognito user pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users in the Amazon Cognito user pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p>
         */
        virtual Model::ResendConfirmationCodeOutcome ResendConfirmationCode(const Model::ResendConfirmationCodeRequest& request) const;

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResendConfirmationCodeOutcomeCallable ResendConfirmationCodeCallable(const Model::ResendConfirmationCodeRequest& request) const;

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResendConfirmationCodeAsync(const Model::ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Responds to the authentication challenge.</p>
         */
        virtual Model::RespondToAuthChallengeOutcome RespondToAuthChallenge(const Model::RespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to the authentication challenge.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RespondToAuthChallengeOutcomeCallable RespondToAuthChallengeCallable(const Model::RespondToAuthChallengeRequest& request) const;

        /**
         * <p>Responds to the authentication challenge.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RespondToAuthChallengeAsync(const Model::RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the user settings like multi-factor authentication (MFA). If MFA is to
         * be removed for a particular attribute pass the attribute with code delivery as
         * null. If null list is passed, all MFA options are removed.</p>
         */
        virtual Model::SetUserSettingsOutcome SetUserSettings(const Model::SetUserSettingsRequest& request) const;

        /**
         * <p>Sets the user settings like multi-factor authentication (MFA). If MFA is to
         * be removed for a particular attribute pass the attribute with code delivery as
         * null. If null list is passed, all MFA options are removed.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUserSettingsOutcomeCallable SetUserSettingsCallable(const Model::SetUserSettingsRequest& request) const;

        /**
         * <p>Sets the user settings like multi-factor authentication (MFA). If MFA is to
         * be removed for a particular attribute pass the attribute with code delivery as
         * null. If null list is passed, all MFA options are removed.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUserSettingsAsync(const Model::SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p>
         */
        virtual Model::SignUpOutcome SignUp(const Model::SignUpRequest& request) const;

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignUpOutcomeCallable SignUpCallable(const Model::SignUpRequest& request) const;

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignUpAsync(const Model::SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the user import.</p>
         */
        virtual Model::StartUserImportJobOutcome StartUserImportJob(const Model::StartUserImportJobRequest& request) const;

        /**
         * <p>Starts the user import.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartUserImportJobOutcomeCallable StartUserImportJobCallable(const Model::StartUserImportJobRequest& request) const;

        /**
         * <p>Starts the user import.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartUserImportJobAsync(const Model::StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the user import job.</p>
         */
        virtual Model::StopUserImportJobOutcome StopUserImportJob(const Model::StopUserImportJobRequest& request) const;

        /**
         * <p>Stops the user import job.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopUserImportJobOutcomeCallable StopUserImportJobCallable(const Model::StopUserImportJobRequest& request) const;

        /**
         * <p>Stops the user import job.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopUserImportJobAsync(const Model::StopUserImportJobRequest& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device status.</p>
         */
        virtual Model::UpdateDeviceStatusOutcome UpdateDeviceStatus(const Model::UpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceStatusOutcomeCallable UpdateDeviceStatusCallable(const Model::UpdateDeviceStatusRequest& request) const;

        /**
         * <p>Updates the device status.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceStatusAsync(const Model::UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to update a specific attribute (one at a time).</p>
         */
        virtual Model::UpdateUserAttributesOutcome UpdateUserAttributes(const Model::UpdateUserAttributesRequest& request) const;

        /**
         * <p>Allows a user to update a specific attribute (one at a time).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserAttributesOutcomeCallable UpdateUserAttributesCallable(const Model::UpdateUserAttributesRequest& request) const;

        /**
         * <p>Allows a user to update a specific attribute (one at a time).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAttributesAsync(const Model::UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user pool with the specified attributes.</p>
         */
        virtual Model::UpdateUserPoolOutcome UpdateUserPool(const Model::UpdateUserPoolRequest& request) const;

        /**
         * <p>Updates the specified user pool with the specified attributes.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolOutcomeCallable UpdateUserPoolCallable(const Model::UpdateUserPoolRequest& request) const;

        /**
         * <p>Updates the specified user pool with the specified attributes.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolAsync(const Model::UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the developer to update the specified user pool client and password
         * policy.</p>
         */
        virtual Model::UpdateUserPoolClientOutcome UpdateUserPoolClient(const Model::UpdateUserPoolClientRequest& request) const;

        /**
         * <p>Allows the developer to update the specified user pool client and password
         * policy.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolClientOutcomeCallable UpdateUserPoolClientCallable(const Model::UpdateUserPoolClientRequest& request) const;

        /**
         * <p>Allows the developer to update the specified user pool client and password
         * policy.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolClientAsync(const Model::UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies the specified user attributes in the user pool.</p>
         */
        virtual Model::VerifyUserAttributeOutcome VerifyUserAttribute(const Model::VerifyUserAttributeRequest& request) const;

        /**
         * <p>Verifies the specified user attributes in the user pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyUserAttributeOutcomeCallable VerifyUserAttributeCallable(const Model::VerifyUserAttributeRequest& request) const;

        /**
         * <p>Verifies the specified user attributes in the user pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyUserAttributeAsync(const Model::VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddCustomAttributesAsyncHelper(const Model::AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminConfirmSignUpAsyncHelper(const Model::AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminCreateUserAsyncHelper(const Model::AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDeleteUserAsyncHelper(const Model::AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDeleteUserAttributesAsyncHelper(const Model::AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDisableUserAsyncHelper(const Model::AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminEnableUserAsyncHelper(const Model::AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminForgetDeviceAsyncHelper(const Model::AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminGetDeviceAsyncHelper(const Model::AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminGetUserAsyncHelper(const Model::AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminInitiateAuthAsyncHelper(const Model::AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminListDevicesAsyncHelper(const Model::AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminResetUserPasswordAsyncHelper(const Model::AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminRespondToAuthChallengeAsyncHelper(const Model::AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminSetUserSettingsAsyncHelper(const Model::AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUpdateDeviceStatusAsyncHelper(const Model::AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUpdateUserAttributesAsyncHelper(const Model::AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUserGlobalSignOutAsyncHelper(const Model::AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangePasswordAsyncHelper(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmDeviceAsyncHelper(const Model::ConfirmDeviceRequest& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmForgotPasswordAsyncHelper(const Model::ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmSignUpAsyncHelper(const Model::ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserImportJobAsyncHelper(const Model::CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserPoolAsyncHelper(const Model::CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserPoolClientAsyncHelper(const Model::CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAttributesAsyncHelper(const Model::DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPoolAsyncHelper(const Model::DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPoolClientAsyncHelper(const Model::DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserImportJobAsyncHelper(const Model::DescribeUserImportJobRequest& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserPoolAsyncHelper(const Model::DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserPoolClientAsyncHelper(const Model::DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ForgetDeviceAsyncHelper(const Model::ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ForgotPasswordAsyncHelper(const Model::ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCSVHeaderAsyncHelper(const Model::GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceAsyncHelper(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAttributeVerificationCodeAsyncHelper(const Model::GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GlobalSignOutAsyncHelper(const Model::GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitiateAuthAsyncHelper(const Model::InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicesAsyncHelper(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserImportJobsAsyncHelper(const Model::ListUserImportJobsRequest& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoolClientsAsyncHelper(const Model::ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoolsAsyncHelper(const Model::ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResendConfirmationCodeAsyncHelper(const Model::ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RespondToAuthChallengeAsyncHelper(const Model::RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetUserSettingsAsyncHelper(const Model::SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SignUpAsyncHelper(const Model::SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartUserImportJobAsyncHelper(const Model::StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopUserImportJobAsyncHelper(const Model::StopUserImportJobRequest& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceStatusAsyncHelper(const Model::UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAttributesAsyncHelper(const Model::UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPoolAsyncHelper(const Model::UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPoolClientAsyncHelper(const Model::UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyUserAttributeAsyncHelper(const Model::VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CognitoIdentityProvider
} // namespace Aws
