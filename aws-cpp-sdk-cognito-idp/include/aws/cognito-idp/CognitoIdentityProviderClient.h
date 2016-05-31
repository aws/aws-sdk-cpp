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
#include <aws/cognito-idp/model/AdminDeleteUserAttributesResult.h>
#include <aws/cognito-idp/model/AdminDisableUserResult.h>
#include <aws/cognito-idp/model/AdminEnableUserResult.h>
#include <aws/cognito-idp/model/AdminGetUserResult.h>
#include <aws/cognito-idp/model/AdminResetUserPasswordResult.h>
#include <aws/cognito-idp/model/AdminSetUserSettingsResult.h>
#include <aws/cognito-idp/model/AdminUpdateUserAttributesResult.h>
#include <aws/cognito-idp/model/ChangePasswordResult.h>
#include <aws/cognito-idp/model/ConfirmForgotPasswordResult.h>
#include <aws/cognito-idp/model/ConfirmSignUpResult.h>
#include <aws/cognito-idp/model/CreateUserPoolResult.h>
#include <aws/cognito-idp/model/CreateUserPoolClientResult.h>
#include <aws/cognito-idp/model/DeleteUserAttributesResult.h>
#include <aws/cognito-idp/model/DescribeUserPoolResult.h>
#include <aws/cognito-idp/model/DescribeUserPoolClientResult.h>
#include <aws/cognito-idp/model/ForgotPasswordResult.h>
#include <aws/cognito-idp/model/GetUserResult.h>
#include <aws/cognito-idp/model/GetUserAttributeVerificationCodeResult.h>
#include <aws/cognito-idp/model/ListUserPoolClientsResult.h>
#include <aws/cognito-idp/model/ListUserPoolsResult.h>
#include <aws/cognito-idp/model/ListUsersResult.h>
#include <aws/cognito-idp/model/ResendConfirmationCodeResult.h>
#include <aws/cognito-idp/model/SetUserSettingsResult.h>
#include <aws/cognito-idp/model/SignUpResult.h>
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
        class AdminDeleteUserRequest;
        class AdminDeleteUserAttributesRequest;
        class AdminDisableUserRequest;
        class AdminEnableUserRequest;
        class AdminGetUserRequest;
        class AdminResetUserPasswordRequest;
        class AdminSetUserSettingsRequest;
        class AdminUpdateUserAttributesRequest;
        class ChangePasswordRequest;
        class ConfirmForgotPasswordRequest;
        class ConfirmSignUpRequest;
        class CreateUserPoolRequest;
        class CreateUserPoolClientRequest;
        class DeleteUserRequest;
        class DeleteUserAttributesRequest;
        class DeleteUserPoolRequest;
        class DeleteUserPoolClientRequest;
        class DescribeUserPoolRequest;
        class DescribeUserPoolClientRequest;
        class ForgotPasswordRequest;
        class GetUserRequest;
        class GetUserAttributeVerificationCodeRequest;
        class ListUserPoolClientsRequest;
        class ListUserPoolsRequest;
        class ListUsersRequest;
        class ResendConfirmationCodeRequest;
        class SetUserSettingsRequest;
        class SignUpRequest;
        class UpdateUserAttributesRequest;
        class UpdateUserPoolRequest;
        class UpdateUserPoolClientRequest;
        class VerifyUserAttributeRequest;

        typedef Aws::Utils::Outcome<AddCustomAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AddCustomAttributesOutcome;
        typedef Aws::Utils::Outcome<AdminConfirmSignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminConfirmSignUpOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDeleteUserOutcome;
        typedef Aws::Utils::Outcome<AdminDeleteUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDeleteUserAttributesOutcome;
        typedef Aws::Utils::Outcome<AdminDisableUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminDisableUserOutcome;
        typedef Aws::Utils::Outcome<AdminEnableUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminEnableUserOutcome;
        typedef Aws::Utils::Outcome<AdminGetUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminGetUserOutcome;
        typedef Aws::Utils::Outcome<AdminResetUserPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminResetUserPasswordOutcome;
        typedef Aws::Utils::Outcome<AdminSetUserSettingsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminSetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<AdminUpdateUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> AdminUpdateUserAttributesOutcome;
        typedef Aws::Utils::Outcome<ChangePasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ChangePasswordOutcome;
        typedef Aws::Utils::Outcome<ConfirmForgotPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmForgotPasswordOutcome;
        typedef Aws::Utils::Outcome<ConfirmSignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ConfirmSignUpOutcome;
        typedef Aws::Utils::Outcome<CreateUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserPoolOutcome;
        typedef Aws::Utils::Outcome<CreateUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> CreateUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DeleteUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserAttributesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserPoolOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DeleteUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<DescribeUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserPoolOutcome;
        typedef Aws::Utils::Outcome<DescribeUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> DescribeUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<ForgotPasswordResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ForgotPasswordOutcome;
        typedef Aws::Utils::Outcome<GetUserResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUserOutcome;
        typedef Aws::Utils::Outcome<GetUserAttributeVerificationCodeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> GetUserAttributeVerificationCodeOutcome;
        typedef Aws::Utils::Outcome<ListUserPoolClientsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserPoolClientsOutcome;
        typedef Aws::Utils::Outcome<ListUserPoolsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUserPoolsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ResendConfirmationCodeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> ResendConfirmationCodeOutcome;
        typedef Aws::Utils::Outcome<SetUserSettingsResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<SignUpResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> SignUpOutcome;
        typedef Aws::Utils::Outcome<UpdateUserAttributesResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateUserPoolResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserPoolOutcome;
        typedef Aws::Utils::Outcome<UpdateUserPoolClientResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> UpdateUserPoolClientOutcome;
        typedef Aws::Utils::Outcome<VerifyUserAttributeResult, Aws::Client::AWSError<CognitoIdentityProviderErrors>> VerifyUserAttributeOutcome;

        typedef std::future<AddCustomAttributesOutcome> AddCustomAttributesOutcomeCallable;
        typedef std::future<AdminConfirmSignUpOutcome> AdminConfirmSignUpOutcomeCallable;
        typedef std::future<AdminDeleteUserOutcome> AdminDeleteUserOutcomeCallable;
        typedef std::future<AdminDeleteUserAttributesOutcome> AdminDeleteUserAttributesOutcomeCallable;
        typedef std::future<AdminDisableUserOutcome> AdminDisableUserOutcomeCallable;
        typedef std::future<AdminEnableUserOutcome> AdminEnableUserOutcomeCallable;
        typedef std::future<AdminGetUserOutcome> AdminGetUserOutcomeCallable;
        typedef std::future<AdminResetUserPasswordOutcome> AdminResetUserPasswordOutcomeCallable;
        typedef std::future<AdminSetUserSettingsOutcome> AdminSetUserSettingsOutcomeCallable;
        typedef std::future<AdminUpdateUserAttributesOutcome> AdminUpdateUserAttributesOutcomeCallable;
        typedef std::future<ChangePasswordOutcome> ChangePasswordOutcomeCallable;
        typedef std::future<ConfirmForgotPasswordOutcome> ConfirmForgotPasswordOutcomeCallable;
        typedef std::future<ConfirmSignUpOutcome> ConfirmSignUpOutcomeCallable;
        typedef std::future<CreateUserPoolOutcome> CreateUserPoolOutcomeCallable;
        typedef std::future<CreateUserPoolClientOutcome> CreateUserPoolClientOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DeleteUserAttributesOutcome> DeleteUserAttributesOutcomeCallable;
        typedef std::future<DeleteUserPoolOutcome> DeleteUserPoolOutcomeCallable;
        typedef std::future<DeleteUserPoolClientOutcome> DeleteUserPoolClientOutcomeCallable;
        typedef std::future<DescribeUserPoolOutcome> DescribeUserPoolOutcomeCallable;
        typedef std::future<DescribeUserPoolClientOutcome> DescribeUserPoolClientOutcomeCallable;
        typedef std::future<ForgotPasswordOutcome> ForgotPasswordOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetUserAttributeVerificationCodeOutcome> GetUserAttributeVerificationCodeOutcomeCallable;
        typedef std::future<ListUserPoolClientsOutcome> ListUserPoolClientsOutcomeCallable;
        typedef std::future<ListUserPoolsOutcome> ListUserPoolsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ResendConfirmationCodeOutcome> ResendConfirmationCodeOutcomeCallable;
        typedef std::future<SetUserSettingsOutcome> SetUserSettingsOutcomeCallable;
        typedef std::future<SignUpOutcome> SignUpOutcomeCallable;
        typedef std::future<UpdateUserAttributesOutcome> UpdateUserAttributesOutcomeCallable;
        typedef std::future<UpdateUserPoolOutcome> UpdateUserPoolOutcomeCallable;
        typedef std::future<UpdateUserPoolClientOutcome> UpdateUserPoolClientOutcomeCallable;
        typedef std::future<VerifyUserAttributeOutcome> VerifyUserAttributeOutcomeCallable;
} // namespace Model

  class CognitoIdentityProviderClient;

    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AddCustomAttributesRequest&, const Model::AddCustomAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCustomAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminConfirmSignUpRequest&, const Model::AdminConfirmSignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminConfirmSignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDeleteUserRequest&, const Model::AdminDeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDeleteUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDeleteUserAttributesRequest&, const Model::AdminDeleteUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDeleteUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminDisableUserRequest&, const Model::AdminDisableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminDisableUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminEnableUserRequest&, const Model::AdminEnableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminEnableUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminGetUserRequest&, const Model::AdminGetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminGetUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminResetUserPasswordRequest&, const Model::AdminResetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminResetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminSetUserSettingsRequest&, const Model::AdminSetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminSetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::AdminUpdateUserAttributesRequest&, const Model::AdminUpdateUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdminUpdateUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ChangePasswordRequest&, const Model::ChangePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangePasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmForgotPasswordRequest&, const Model::ConfirmForgotPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmForgotPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ConfirmSignUpRequest&, const Model::ConfirmSignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmSignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserPoolRequest&, const Model::CreateUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::CreateUserPoolClientRequest&, const Model::CreateUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserAttributesRequest&, const Model::DeleteUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserPoolRequest&, const Model::DeleteUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DeleteUserPoolClientRequest&, const Model::DeleteUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserPoolRequest&, const Model::DescribeUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::DescribeUserPoolClientRequest&, const Model::DescribeUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ForgotPasswordRequest&, const Model::ForgotPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ForgotPasswordResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::GetUserAttributeVerificationCodeRequest&, const Model::GetUserAttributeVerificationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserAttributeVerificationCodeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserPoolClientsRequest&, const Model::ListUserPoolClientsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoolClientsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUserPoolsRequest&, const Model::ListUserPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserPoolsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::ResendConfirmationCodeRequest&, const Model::ResendConfirmationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendConfirmationCodeResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SetUserSettingsRequest&, const Model::SetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::SignUpRequest&, const Model::SignUpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignUpResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserAttributesRequest&, const Model::UpdateUserAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserAttributesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserPoolRequest&, const Model::UpdateUserPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::UpdateUserPoolClientRequest&, const Model::UpdateUserPoolClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPoolClientResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityProviderClient*, const Model::VerifyUserAttributeRequest&, const Model::VerifyUserAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyUserAttributeResponseReceivedHandler;

  /**
   * <p>You can create a user pool in Amazon Cognito Identity to manage directories
   * and users. You can authenticate a user to obtain tokens related to user identity
   * and access policies.</p> <p>This API reference provides information about user
   * pools in Amazon Cognito Identity, which is a new capability that is available as
   * a beta.</p>
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
         * <p>Resets the specified user's password in a user pool as an administrator.
         * Works on any user.</p>
         */
        virtual Model::AdminResetUserPasswordOutcome AdminResetUserPassword(const Model::AdminResetUserPasswordRequest& request) const;

        /**
         * <p>Resets the specified user's password in a user pool as an administrator.
         * Works on any user.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminResetUserPasswordOutcomeCallable AdminResetUserPasswordCallable(const Model::AdminResetUserPasswordRequest& request) const;

        /**
         * <p>Resets the specified user's password in a user pool as an administrator.
         * Works on any user.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminResetUserPasswordAsync(const Model::AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        void AdminDeleteUserAsyncHelper(const Model::AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDeleteUserAttributesAsyncHelper(const Model::AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminDisableUserAsyncHelper(const Model::AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminEnableUserAsyncHelper(const Model::AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminGetUserAsyncHelper(const Model::AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminResetUserPasswordAsyncHelper(const Model::AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminSetUserSettingsAsyncHelper(const Model::AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AdminUpdateUserAttributesAsyncHelper(const Model::AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangePasswordAsyncHelper(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmForgotPasswordAsyncHelper(const Model::ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmSignUpAsyncHelper(const Model::ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserPoolAsyncHelper(const Model::CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserPoolClientAsyncHelper(const Model::CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAttributesAsyncHelper(const Model::DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPoolAsyncHelper(const Model::DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserPoolClientAsyncHelper(const Model::DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserPoolAsyncHelper(const Model::DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserPoolClientAsyncHelper(const Model::DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ForgotPasswordAsyncHelper(const Model::ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAttributeVerificationCodeAsyncHelper(const Model::GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoolClientsAsyncHelper(const Model::ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserPoolsAsyncHelper(const Model::ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResendConfirmationCodeAsyncHelper(const Model::ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetUserSettingsAsyncHelper(const Model::SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SignUpAsyncHelper(const Model::SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAttributesAsyncHelper(const Model::UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPoolAsyncHelper(const Model::UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPoolClientAsyncHelper(const Model::UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyUserAttributeAsyncHelper(const Model::VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CognitoIdentityProvider
} // namespace Aws
