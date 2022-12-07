/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-idp/CognitoIdentityProviderServiceClientModel.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
  /**
   * <p>Using the Amazon Cognito user pools API, you can create a user pool to manage
   * directories and users. You can authenticate a user to obtain tokens related to
   * user identity and access policies.</p> <p>This API reference provides
   * information about user pools in Amazon Cognito user pools.</p> <p>For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon
   * Cognito Documentation</a>.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CognitoIdentityProviderClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CognitoIdentityProviderClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration = Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration(),
                                      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration = Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityProviderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration = Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityProviderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CognitoIdentityProviderClient();

        /**
         * <p>Adds additional user attributes to the user pool schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddCustomAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCustomAttributesOutcome AddCustomAttributes(const Model::AddCustomAttributesRequest& request) const;

        /**
         * A Callable wrapper for AddCustomAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddCustomAttributesOutcomeCallable AddCustomAttributesCallable(const Model::AddCustomAttributesRequest& request) const;

        /**
         * An Async wrapper for AddCustomAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddCustomAttributesAsync(const Model::AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified user to the specified group.</p> <p>Calling this action
         * requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminAddUserToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminAddUserToGroupOutcome AdminAddUserToGroup(const Model::AdminAddUserToGroupRequest& request) const;

        /**
         * A Callable wrapper for AdminAddUserToGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminAddUserToGroupOutcomeCallable AdminAddUserToGroupCallable(const Model::AdminAddUserToGroupRequest& request) const;

        /**
         * An Async wrapper for AdminAddUserToGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminAddUserToGroupAsync(const Model::AdminAddUserToGroupRequest& request, const AdminAddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms user registration as an admin without using a confirmation code.
         * Works on any user.</p> <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminConfirmSignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminConfirmSignUpOutcome AdminConfirmSignUp(const Model::AdminConfirmSignUpRequest& request) const;

        /**
         * A Callable wrapper for AdminConfirmSignUp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminConfirmSignUpOutcomeCallable AdminConfirmSignUpCallable(const Model::AdminConfirmSignUpRequest& request) const;

        /**
         * An Async wrapper for AdminConfirmSignUp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminConfirmSignUpAsync(const Model::AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user in the specified user pool.</p> <p>If
         * <code>MessageAction</code> isn't set, the default is to send a welcome message
         * via email or phone (SMS).</p>  <p>This action might generate an SMS text
         * message. Starting June 1, 2021, US telecom carriers require you to register an
         * origination phone number before you can send SMS messages to US phone numbers.
         * If you use SMS text messages in Amazon Cognito, you must register a phone number
         * with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Service, Amazon
         * Simple Notification Service might place your account in the SMS sandbox. In <i>
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>This message is based on a template that you
         * configured in your call to create or update a user pool. This template includes
         * your custom sign-up instructions and placeholders for user name and temporary
         * password.</p> <p>Alternatively, you can call <code>AdminCreateUser</code> with
         * <code>SUPPRESS</code> for the <code>MessageAction</code> parameter, and Amazon
         * Cognito won't send any email. </p> <p>In either case, the user will be in the
         * <code>FORCE_CHANGE_PASSWORD</code> state until they sign in and change their
         * password.</p> <p> <code>AdminCreateUser</code> requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminCreateUserOutcome AdminCreateUser(const Model::AdminCreateUserRequest& request) const;

        /**
         * A Callable wrapper for AdminCreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminCreateUserOutcomeCallable AdminCreateUserCallable(const Model::AdminCreateUserRequest& request) const;

        /**
         * An Async wrapper for AdminCreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminCreateUserAsync(const Model::AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user as an administrator. Works on any user.</p> <p>Calling this
         * action requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDeleteUserOutcome AdminDeleteUser(const Model::AdminDeleteUserRequest& request) const;

        /**
         * A Callable wrapper for AdminDeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDeleteUserOutcomeCallable AdminDeleteUserCallable(const Model::AdminDeleteUserRequest& request) const;

        /**
         * An Async wrapper for AdminDeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDeleteUserAsync(const Model::AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p> <p>Calling this action requires developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDeleteUserAttributesOutcome AdminDeleteUserAttributes(const Model::AdminDeleteUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for AdminDeleteUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDeleteUserAttributesOutcomeCallable AdminDeleteUserAttributesCallable(const Model::AdminDeleteUserAttributesRequest& request) const;

        /**
         * An Async wrapper for AdminDeleteUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDeleteUserAttributesAsync(const Model::AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Prevents the user from signing in with the specified external (SAML or
         * social) identity provider (IdP). If the user that you want to deactivate is a
         * Amazon Cognito user pools native username + password user, they can't use their
         * password to sign in. If the user to deactivate is a linked external IdP user,
         * any link between that user and an existing user is removed. When the external
         * user signs in again, and the user is no longer attached to the previously linked
         * <code>DestinationUser</code>, the user must create a new user account. See <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>.</p>
         * <p>This action is enabled only for admin access and requires developer
         * credentials.</p> <p>The <code>ProviderName</code> must match the value specified
         * when creating an IdP for the pool. </p> <p>To deactivate a native username +
         * password user, the <code>ProviderName</code> value must be <code>Cognito</code>
         * and the <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code>.
         * The <code>ProviderAttributeValue</code> must be the name that is used in the
         * user pool for the user.</p> <p>The <code>ProviderAttributeName</code> must
         * always be <code>Cognito_Subject</code> for social IdPs. The
         * <code>ProviderAttributeValue</code> must always be the exact subject that was
         * used when the user was originally linked as a source user.</p> <p>For de-linking
         * a SAML identity, there are two scenarios. If the linked identity has not yet
         * been used to sign in, the <code>ProviderAttributeName</code> and
         * <code>ProviderAttributeValue</code> must be the same values that were used for
         * the <code>SourceUser</code> when the identities were originally linked using
         * <code> AdminLinkProviderForUser</code> call. (If the linking was done with
         * <code>ProviderAttributeName</code> set to <code>Cognito_Subject</code>, the same
         * applies here). However, if the user has already signed in, the
         * <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code> and
         * <code>ProviderAttributeValue</code> must be the subject of the SAML
         * assertion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableProviderForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDisableProviderForUserOutcome AdminDisableProviderForUser(const Model::AdminDisableProviderForUserRequest& request) const;

        /**
         * A Callable wrapper for AdminDisableProviderForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDisableProviderForUserOutcomeCallable AdminDisableProviderForUserCallable(const Model::AdminDisableProviderForUserRequest& request) const;

        /**
         * An Async wrapper for AdminDisableProviderForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDisableProviderForUserAsync(const Model::AdminDisableProviderForUserRequest& request, const AdminDisableProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates a user and revokes all access tokens for the user. A deactivated
         * user can't sign in, but still appears in the responses to <code>GetUser</code>
         * and <code>ListUsers</code> API requests.</p> <p>You must make this API request
         * with Amazon Web Services credentials that have
         * <code>cognito-idp:AdminDisableUser</code> permissions.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDisableUserOutcome AdminDisableUser(const Model::AdminDisableUserRequest& request) const;

        /**
         * A Callable wrapper for AdminDisableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminDisableUserOutcomeCallable AdminDisableUserCallable(const Model::AdminDisableUserRequest& request) const;

        /**
         * An Async wrapper for AdminDisableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminDisableUserAsync(const Model::AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified user as an administrator. Works on any user.</p>
         * <p>Calling this action requires developer credentials.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminEnableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminEnableUserOutcome AdminEnableUser(const Model::AdminEnableUserRequest& request) const;

        /**
         * A Callable wrapper for AdminEnableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminEnableUserOutcomeCallable AdminEnableUserCallable(const Model::AdminEnableUserRequest& request) const;

        /**
         * An Async wrapper for AdminEnableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminEnableUserAsync(const Model::AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forgets the device, as an administrator.</p> <p>Calling this action requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminForgetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminForgetDeviceOutcome AdminForgetDevice(const Model::AdminForgetDeviceRequest& request) const;

        /**
         * A Callable wrapper for AdminForgetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminForgetDeviceOutcomeCallable AdminForgetDeviceCallable(const Model::AdminForgetDeviceRequest& request) const;

        /**
         * An Async wrapper for AdminForgetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminForgetDeviceAsync(const Model::AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the device, as an administrator.</p> <p>Calling this action requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminGetDeviceOutcome AdminGetDevice(const Model::AdminGetDeviceRequest& request) const;

        /**
         * A Callable wrapper for AdminGetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminGetDeviceOutcomeCallable AdminGetDeviceCallable(const Model::AdminGetDeviceRequest& request) const;

        /**
         * An Async wrapper for AdminGetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminGetDeviceAsync(const Model::AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p> <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminGetUserOutcome AdminGetUser(const Model::AdminGetUserRequest& request) const;

        /**
         * A Callable wrapper for AdminGetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminGetUserOutcomeCallable AdminGetUserCallable(const Model::AdminGetUserRequest& request) const;

        /**
         * An Async wrapper for AdminGetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminGetUserAsync(const Model::AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the authentication flow, as an administrator.</p>  <p>This
         * action might generate an SMS text message. Starting June 1, 2021, US telecom
         * carriers require you to register an origination phone number before you can send
         * SMS messages to US phone numbers. If you use SMS text messages in Amazon
         * Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminInitiateAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminInitiateAuthOutcome AdminInitiateAuth(const Model::AdminInitiateAuthRequest& request) const;

        /**
         * A Callable wrapper for AdminInitiateAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminInitiateAuthOutcomeCallable AdminInitiateAuthCallable(const Model::AdminInitiateAuthRequest& request) const;

        /**
         * An Async wrapper for AdminInitiateAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminInitiateAuthAsync(const Model::AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Links an existing user account in a user pool (<code>DestinationUser</code>)
         * to an identity from an external IdP (<code>SourceUser</code>) based on a
         * specified attribute name and value from the external IdP. This allows you to
         * create a link from the existing user account to an external federated user
         * identity that has not yet been used to sign in. You can then use the federated
         * user identity to sign in as the existing user account. </p> <p> For example, if
         * there is an existing user with a username and password, this API links that user
         * to a federated user identity. When the user signs in with a federated user
         * identity, they sign in as the existing user account.</p>  <p>The maximum
         * number of federated identities linked to a user is five.</p>  
         * <p>Because this API allows a user with an external federated identity to sign in
         * as an existing user in the user pool, it is critical that it only be used with
         * external IdPs and provider attributes that have been trusted by the application
         * owner.</p>  <p>This action is administrative and requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminLinkProviderForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminLinkProviderForUserOutcome AdminLinkProviderForUser(const Model::AdminLinkProviderForUserRequest& request) const;

        /**
         * A Callable wrapper for AdminLinkProviderForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminLinkProviderForUserOutcomeCallable AdminLinkProviderForUserCallable(const Model::AdminLinkProviderForUserRequest& request) const;

        /**
         * An Async wrapper for AdminLinkProviderForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminLinkProviderForUserAsync(const Model::AdminLinkProviderForUserRequest& request, const AdminLinkProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists devices, as an administrator.</p> <p>Calling this action requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListDevicesOutcome AdminListDevices(const Model::AdminListDevicesRequest& request) const;

        /**
         * A Callable wrapper for AdminListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminListDevicesOutcomeCallable AdminListDevicesCallable(const Model::AdminListDevicesRequest& request) const;

        /**
         * An Async wrapper for AdminListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminListDevicesAsync(const Model::AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the groups that the user belongs to.</p> <p>Calling this action
         * requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListGroupsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListGroupsForUserOutcome AdminListGroupsForUser(const Model::AdminListGroupsForUserRequest& request) const;

        /**
         * A Callable wrapper for AdminListGroupsForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminListGroupsForUserOutcomeCallable AdminListGroupsForUserCallable(const Model::AdminListGroupsForUserRequest& request) const;

        /**
         * An Async wrapper for AdminListGroupsForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminListGroupsForUserAsync(const Model::AdminListGroupsForUserRequest& request, const AdminListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A history of user activity and any risks detected as part of Amazon Cognito
         * advanced security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListUserAuthEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListUserAuthEventsOutcome AdminListUserAuthEvents(const Model::AdminListUserAuthEventsRequest& request) const;

        /**
         * A Callable wrapper for AdminListUserAuthEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminListUserAuthEventsOutcomeCallable AdminListUserAuthEventsCallable(const Model::AdminListUserAuthEventsRequest& request) const;

        /**
         * An Async wrapper for AdminListUserAuthEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminListUserAuthEventsAsync(const Model::AdminListUserAuthEventsRequest& request, const AdminListUserAuthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified user from the specified group.</p> <p>Calling this
         * action requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRemoveUserFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminRemoveUserFromGroupOutcome AdminRemoveUserFromGroup(const Model::AdminRemoveUserFromGroupRequest& request) const;

        /**
         * A Callable wrapper for AdminRemoveUserFromGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminRemoveUserFromGroupOutcomeCallable AdminRemoveUserFromGroupCallable(const Model::AdminRemoveUserFromGroupRequest& request) const;

        /**
         * An Async wrapper for AdminRemoveUserFromGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * change their password.</p>  <p>This action might generate an SMS text
         * message. Starting June 1, 2021, US telecom carriers require you to register an
         * origination phone number before you can send SMS messages to US phone numbers.
         * If you use SMS text messages in Amazon Cognito, you must register a phone number
         * with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Service, Amazon
         * Simple Notification Service might place your account in the SMS sandbox. In <i>
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminResetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminResetUserPasswordOutcome AdminResetUserPassword(const Model::AdminResetUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for AdminResetUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminResetUserPasswordOutcomeCallable AdminResetUserPasswordCallable(const Model::AdminResetUserPasswordRequest& request) const;

        /**
         * An Async wrapper for AdminResetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminResetUserPasswordAsync(const Model::AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Responds to an authentication challenge, as an administrator.</p> 
         * <p>This action might generate an SMS text message. Starting June 1, 2021, US
         * telecom carriers require you to register an origination phone number before you
         * can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminRespondToAuthChallengeOutcome AdminRespondToAuthChallenge(const Model::AdminRespondToAuthChallengeRequest& request) const;

        /**
         * A Callable wrapper for AdminRespondToAuthChallenge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminRespondToAuthChallengeOutcomeCallable AdminRespondToAuthChallengeCallable(const Model::AdminRespondToAuthChallengeRequest& request) const;

        /**
         * An Async wrapper for AdminRespondToAuthChallenge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminRespondToAuthChallengeAsync(const Model::AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The user's multi-factor authentication (MFA) preference, including which MFA
         * options are activated, and if any are preferred. Only one factor can be set as
         * preferred. The preferred MFA factor will be used to authenticate a user if
         * multiple factors are activated. If multiple options are activated and no
         * preference is set, a challenge to choose an MFA option will be returned during
         * sign-in.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserMFAPreference">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserMFAPreferenceOutcome AdminSetUserMFAPreference(const Model::AdminSetUserMFAPreferenceRequest& request) const;

        /**
         * A Callable wrapper for AdminSetUserMFAPreference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminSetUserMFAPreferenceOutcomeCallable AdminSetUserMFAPreferenceCallable(const Model::AdminSetUserMFAPreferenceRequest& request) const;

        /**
         * An Async wrapper for AdminSetUserMFAPreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminSetUserMFAPreferenceAsync(const Model::AdminSetUserMFAPreferenceRequest& request, const AdminSetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified user's password in a user pool as an administrator. Works
         * on any user. </p> <p>The password can be temporary or permanent. If it is
         * temporary, the user status enters the <code>FORCE_CHANGE_PASSWORD</code> state.
         * When the user next tries to sign in, the InitiateAuth/AdminInitiateAuth response
         * will contain the <code>NEW_PASSWORD_REQUIRED</code> challenge. If the user
         * doesn't sign in before it expires, the user won't be able to sign in, and an
         * administrator must reset their password. </p> <p>Once the user has set a new
         * password, or the password is permanent, the user status is set to
         * <code>Confirmed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserPasswordOutcome AdminSetUserPassword(const Model::AdminSetUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for AdminSetUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminSetUserPasswordOutcomeCallable AdminSetUserPasswordCallable(const Model::AdminSetUserPasswordRequest& request) const;

        /**
         * An Async wrapper for AdminSetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminSetUserPasswordAsync(const Model::AdminSetUserPasswordRequest& request, const AdminSetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <i>This action is no longer supported.</i> You can use it to configure only
         * SMS MFA. You can't use it to configure time-based one-time password (TOTP)
         * software token MFA. To configure either type of MFA, use <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminSetUserMFAPreference.html">AdminSetUserMFAPreference</a>
         * instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserSettingsOutcome AdminSetUserSettings(const Model::AdminSetUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for AdminSetUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminSetUserSettingsOutcomeCallable AdminSetUserSettingsCallable(const Model::AdminSetUserSettingsRequest& request) const;

        /**
         * An Async wrapper for AdminSetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminSetUserSettingsAsync(const Model::AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides feedback for an authentication event indicating if it was from a
         * valid user. This feedback is used for improving the risk evaluation decision for
         * the user pool as part of Amazon Cognito advanced security.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateAuthEventFeedbackOutcome AdminUpdateAuthEventFeedback(const Model::AdminUpdateAuthEventFeedbackRequest& request) const;

        /**
         * A Callable wrapper for AdminUpdateAuthEventFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateAuthEventFeedbackOutcomeCallable AdminUpdateAuthEventFeedbackCallable(const Model::AdminUpdateAuthEventFeedbackRequest& request) const;

        /**
         * An Async wrapper for AdminUpdateAuthEventFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateAuthEventFeedbackAsync(const Model::AdminUpdateAuthEventFeedbackRequest& request, const AdminUpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device status as an administrator.</p> <p>Calling this action
         * requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateDeviceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateDeviceStatusOutcome AdminUpdateDeviceStatus(const Model::AdminUpdateDeviceStatusRequest& request) const;

        /**
         * A Callable wrapper for AdminUpdateDeviceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateDeviceStatusOutcomeCallable AdminUpdateDeviceStatusCallable(const Model::AdminUpdateDeviceStatusRequest& request) const;

        /**
         * An Async wrapper for AdminUpdateDeviceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateDeviceStatusAsync(const Model::AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user's attributes, including developer attributes, as
         * an administrator. Works on any user.</p> <p>For custom attributes, you must
         * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>In
         * addition to updating user attributes, this API can also be used to mark phone
         * and email as verified.</p>  <p>This action might generate an SMS text
         * message. Starting June 1, 2021, US telecom carriers require you to register an
         * origination phone number before you can send SMS messages to US phone numbers.
         * If you use SMS text messages in Amazon Cognito, you must register a phone number
         * with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Service, Amazon
         * Simple Notification Service might place your account in the SMS sandbox. In <i>
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateUserAttributesOutcome AdminUpdateUserAttributes(const Model::AdminUpdateUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for AdminUpdateUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUpdateUserAttributesOutcomeCallable AdminUpdateUserAttributesCallable(const Model::AdminUpdateUserAttributesRequest& request) const;

        /**
         * An Async wrapper for AdminUpdateUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUpdateUserAttributesAsync(const Model::AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signs out a user from all devices. You must sign
         * <code>AdminUserGlobalSignOut</code> requests with Amazon Web Services
         * credentials. It also invalidates all refresh tokens that Amazon Cognito has
         * issued to a user. The user's current access and ID tokens remain valid until
         * they expire. By default, access and ID tokens expire one hour after they're
         * issued. A user can still use a hosted UI cookie to retrieve new tokens for the
         * duration of the cookie validity period of 1 hour.</p> <p>Calling this action
         * requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUserGlobalSignOut">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUserGlobalSignOutOutcome AdminUserGlobalSignOut(const Model::AdminUserGlobalSignOutRequest& request) const;

        /**
         * A Callable wrapper for AdminUserGlobalSignOut that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AdminUserGlobalSignOutOutcomeCallable AdminUserGlobalSignOutCallable(const Model::AdminUserGlobalSignOutRequest& request) const;

        /**
         * An Async wrapper for AdminUserGlobalSignOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AdminUserGlobalSignOutAsync(const Model::AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Begins setup of time-based one-time password (TOTP) multi-factor
         * authentication (MFA) for a user, with a unique private key that Amazon Cognito
         * generates and returns in the API response. You can authorize an
         * <code>AssociateSoftwareToken</code> request with either the user's access token,
         * or a session string from a challenge response that you received from Amazon
         * Cognito.</p>  <p>Amazon Cognito disassociates an existing software token
         * when you verify the new token in a <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifySoftwareToken.html">
         * VerifySoftwareToken</a> API request. If you don't verify the software token and
         * your user pool doesn't require MFA, the user can then authenticate with user
         * name and password credentials alone. If your user pool requires TOTP MFA, Amazon
         * Cognito generates an <code>MFA_SETUP</code> or <code>SOFTWARE_TOKEN_SETUP</code>
         * challenge each time your user signs. Complete setup with
         * <code>AssociateSoftwareToken</code> and <code>VerifySoftwareToken</code>.</p>
         * <p>After you set up software token MFA for your user, Amazon Cognito generates a
         * <code>SOFTWARE_TOKEN_MFA</code> challenge when they authenticate. Respond to
         * this challenge with your user's TOTP.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AssociateSoftwareToken">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSoftwareTokenOutcome AssociateSoftwareToken(const Model::AssociateSoftwareTokenRequest& request) const;

        /**
         * A Callable wrapper for AssociateSoftwareToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSoftwareTokenOutcomeCallable AssociateSoftwareTokenCallable(const Model::AssociateSoftwareTokenRequest& request) const;

        /**
         * An Async wrapper for AssociateSoftwareToken that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ChangePassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const Model::ChangePasswordRequest& request) const;

        /**
         * An Async wrapper for ChangePassword that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ConfirmDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmDeviceOutcomeCallable ConfirmDeviceCallable(const Model::ConfirmDeviceRequest& request) const;

        /**
         * An Async wrapper for ConfirmDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ConfirmForgotPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmForgotPasswordOutcomeCallable ConfirmForgotPasswordCallable(const Model::ConfirmForgotPasswordRequest& request) const;

        /**
         * An Async wrapper for ConfirmForgotPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmForgotPasswordAsync(const Model::ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms registration of a new user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmSignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmSignUpOutcome ConfirmSignUp(const Model::ConfirmSignUpRequest& request) const;

        /**
         * A Callable wrapper for ConfirmSignUp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmSignUpOutcomeCallable ConfirmSignUpCallable(const Model::ConfirmSignUpRequest& request) const;

        /**
         * An Async wrapper for ConfirmSignUp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmSignUpAsync(const Model::ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new group in the specified user pool.</p> <p>Calling this action
         * requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IdP for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityProviderOutcome CreateIdentityProvider(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIdentityProviderOutcomeCallable CreateIdentityProviderCallable(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for CreateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIdentityProviderAsync(const Model::CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new OAuth2.0 resource server and defines custom scopes within
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceServerOutcome CreateResourceServer(const Model::CreateResourceServerRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceServerOutcomeCallable CreateResourceServerCallable(const Model::CreateResourceServerRequest& request) const;

        /**
         * An Async wrapper for CreateResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceServerAsync(const Model::CreateResourceServerRequest& request, const CreateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserImportJobOutcome CreateUserImportJob(const Model::CreateUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserImportJobOutcomeCallable CreateUserImportJobCallable(const Model::CreateUserImportJobRequest& request) const;

        /**
         * An Async wrapper for CreateUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserImportJobAsync(const Model::CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Cognito user pool and sets the password policy for the
         * pool.</p>  <p>This action might generate an SMS text message. Starting
         * June 1, 2021, US telecom carriers require you to register an origination phone
         * number before you can send SMS messages to US phone numbers. If you use SMS text
         * messages in Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolOutcome CreateUserPool(const Model::CreateUserPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolOutcomeCallable CreateUserPoolCallable(const Model::CreateUserPoolRequest& request) const;

        /**
         * An Async wrapper for CreateUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolAsync(const Model::CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the user pool client.</p> <p>When you create a new user pool client,
         * token revocation is automatically activated. For more information about revoking
         * tokens, see <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolClientOutcome CreateUserPoolClient(const Model::CreateUserPoolClientRequest& request) const;

        /**
         * A Callable wrapper for CreateUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolClientOutcomeCallable CreateUserPoolClientCallable(const Model::CreateUserPoolClientRequest& request) const;

        /**
         * An Async wrapper for CreateUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolClientAsync(const Model::CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolDomainOutcome CreateUserPoolDomain(const Model::CreateUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserPoolDomainOutcomeCallable CreateUserPoolDomainCallable(const Model::CreateUserPoolDomainRequest& request) const;

        /**
         * An Async wrapper for CreateUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserPoolDomainAsync(const Model::CreateUserPoolDomainRequest& request, const CreateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a group.</p> <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an IdP for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityProviderOutcome DeleteIdentityProvider(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityProviderOutcomeCallable DeleteIdentityProviderCallable(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for DeleteIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityProviderAsync(const Model::DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceServerOutcome DeleteResourceServer(const Model::DeleteResourceServerRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceServerOutcomeCallable DeleteResourceServerCallable(const Model::DeleteResourceServerRequest& request) const;

        /**
         * An Async wrapper for DeleteResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceServerAsync(const Model::DeleteResourceServerRequest& request, const DeleteResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to delete himself or herself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the attributes for a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserAttributesOutcome DeleteUserAttributes(const Model::DeleteUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserAttributesOutcomeCallable DeleteUserAttributesCallable(const Model::DeleteUserAttributesRequest& request) const;

        /**
         * An Async wrapper for DeleteUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAttributesAsync(const Model::DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Cognito user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolOutcome DeleteUserPool(const Model::DeleteUserPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolOutcomeCallable DeleteUserPoolCallable(const Model::DeleteUserPoolRequest& request) const;

        /**
         * An Async wrapper for DeleteUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolClientOutcomeCallable DeleteUserPoolClientCallable(const Model::DeleteUserPoolClientRequest& request) const;

        /**
         * An Async wrapper for DeleteUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPoolClientAsync(const Model::DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a domain for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolDomainOutcome DeleteUserPoolDomain(const Model::DeleteUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPoolDomainOutcomeCallable DeleteUserPoolDomainCallable(const Model::DeleteUserPoolDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPoolDomainAsync(const Model::DeleteUserPoolDomainRequest& request, const DeleteUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific IdP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityProviderOutcome DescribeIdentityProvider(const Model::DescribeIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for DescribeIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityProviderOutcomeCallable DescribeIdentityProviderCallable(const Model::DescribeIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for DescribeIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityProviderAsync(const Model::DescribeIdentityProviderRequest& request, const DescribeIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceServerOutcome DescribeResourceServer(const Model::DescribeResourceServerRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceServerOutcomeCallable DescribeResourceServerCallable(const Model::DescribeResourceServerRequest& request) const;

        /**
         * An Async wrapper for DescribeResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceServerAsync(const Model::DescribeResourceServerRequest& request, const DescribeResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the risk configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeRiskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRiskConfigurationOutcome DescribeRiskConfiguration(const Model::DescribeRiskConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeRiskConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRiskConfigurationOutcomeCallable DescribeRiskConfigurationCallable(const Model::DescribeRiskConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeRiskConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRiskConfigurationAsync(const Model::DescribeRiskConfigurationRequest& request, const DescribeRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserImportJobOutcome DescribeUserImportJob(const Model::DescribeUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserImportJobOutcomeCallable DescribeUserImportJobCallable(const Model::DescribeUserImportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolOutcomeCallable DescribeUserPoolCallable(const Model::DescribeUserPoolRequest& request) const;

        /**
         * An Async wrapper for DescribeUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolClientOutcomeCallable DescribeUserPoolClientCallable(const Model::DescribeUserPoolClientRequest& request) const;

        /**
         * An Async wrapper for DescribeUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserPoolClientAsync(const Model::DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserPoolDomainOutcome DescribeUserPoolDomain(const Model::DescribeUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserPoolDomainOutcomeCallable DescribeUserPoolDomainCallable(const Model::DescribeUserPoolDomainRequest& request) const;

        /**
         * An Async wrapper for DescribeUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserPoolDomainAsync(const Model::DescribeUserPoolDomainRequest& request, const DescribeUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forgets the specified device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgetDeviceOutcome ForgetDevice(const Model::ForgetDeviceRequest& request) const;

        /**
         * A Callable wrapper for ForgetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgetDeviceOutcomeCallable ForgetDeviceCallable(const Model::ForgetDeviceRequest& request) const;

        /**
         * An Async wrapper for ForgetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgetDeviceAsync(const Model::ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Calling this API causes a message to be sent to the end user with a
         * confirmation code that is required to change the user's password. For the
         * <code>Username</code> parameter, you can use the username or user alias. The
         * method used to send the confirmation code is sent according to the specified
         * AccountRecoverySetting. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/how-to-recover-a-user-account.html">Recovering
         * User Accounts</a> in the <i>Amazon Cognito Developer Guide</i>. If neither a
         * verified phone number nor a verified email exists, an
         * <code>InvalidParameterException</code> is thrown. To use the confirmation code
         * for resetting the password, call <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ConfirmForgotPassword.html">ConfirmForgotPassword</a>.
         * </p>  <p>This action might generate an SMS text message. Starting June 1,
         * 2021, US telecom carriers require you to register an origination phone number
         * before you can send SMS messages to US phone numbers. If you use SMS text
         * messages in Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgotPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgotPasswordOutcome ForgotPassword(const Model::ForgotPasswordRequest& request) const;

        /**
         * A Callable wrapper for ForgotPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ForgotPasswordOutcomeCallable ForgotPasswordCallable(const Model::ForgotPasswordRequest& request) const;

        /**
         * An Async wrapper for ForgotPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ForgotPasswordAsync(const Model::ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the header information for the comma-separated value (CSV) file to be
         * used as input for the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetCSVHeader">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCSVHeaderOutcome GetCSVHeader(const Model::GetCSVHeaderRequest& request) const;

        /**
         * A Callable wrapper for GetCSVHeader that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCSVHeaderOutcomeCallable GetCSVHeaderCallable(const Model::GetCSVHeaderRequest& request) const;

        /**
         * An Async wrapper for GetCSVHeader that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCSVHeaderAsync(const Model::GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a group.</p> <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified IdP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetIdentityProviderByIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityProviderByIdentifierOutcome GetIdentityProviderByIdentifier(const Model::GetIdentityProviderByIdentifierRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityProviderByIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityProviderByIdentifierOutcomeCallable GetIdentityProviderByIdentifierCallable(const Model::GetIdentityProviderByIdentifierRequest& request) const;

        /**
         * An Async wrapper for GetIdentityProviderByIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityProviderByIdentifierAsync(const Model::GetIdentityProviderByIdentifierRequest& request, const GetIdentityProviderByIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This method takes a user pool ID, and returns the signing certificate. The
         * issued certificate is valid for 10 years from the date of issue.</p> <p>Amazon
         * Cognito issues and assigns a new signing certificate annually. This process
         * returns a new value in the response to <code>GetSigningCertificate</code>, but
         * doesn't invalidate the original certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSigningCertificateOutcome GetSigningCertificate(const Model::GetSigningCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetSigningCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSigningCertificateOutcomeCallable GetSigningCertificateCallable(const Model::GetSigningCertificateRequest& request) const;

        /**
         * An Async wrapper for GetSigningCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSigningCertificateAsync(const Model::GetSigningCertificateRequest& request, const GetSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the user interface (UI) Customization information for a particular app
         * client's app UI, if any such information exists for the client. If nothing is
         * set for the particular client, but there is an existing pool level customization
         * (the app <code>clientId</code> is <code>ALL</code>), then that information is
         * returned. If nothing is present, then an empty shape is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUICustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUICustomizationOutcome GetUICustomization(const Model::GetUICustomizationRequest& request) const;

        /**
         * A Callable wrapper for GetUICustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUICustomizationOutcomeCallable GetUICustomizationCallable(const Model::GetUICustomizationRequest& request) const;

        /**
         * An Async wrapper for GetUICustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a user attribute verification code for the specified attribute
         * name. Sends a message to a user with a code that they must return in a
         * VerifyUserAttribute request.</p>  <p>This action might generate an SMS
         * text message. Starting June 1, 2021, US telecom carriers require you to register
         * an origination phone number before you can send SMS messages to US phone
         * numbers. If you use SMS text messages in Amazon Cognito, you must register a
         * phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Service, Amazon
         * Simple Notification Service might place your account in the SMS sandbox. In <i>
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAttributeVerificationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserAttributeVerificationCodeOutcome GetUserAttributeVerificationCode(const Model::GetUserAttributeVerificationCodeRequest& request) const;

        /**
         * A Callable wrapper for GetUserAttributeVerificationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserAttributeVerificationCodeOutcomeCallable GetUserAttributeVerificationCodeCallable(const Model::GetUserAttributeVerificationCodeRequest& request) const;

        /**
         * An Async wrapper for GetUserAttributeVerificationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetUserPoolMfaConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserPoolMfaConfigOutcomeCallable GetUserPoolMfaConfigCallable(const Model::GetUserPoolMfaConfigRequest& request) const;

        /**
         * An Async wrapper for GetUserPoolMfaConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserPoolMfaConfigAsync(const Model::GetUserPoolMfaConfigRequest& request, const GetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signs out users from all devices. It also invalidates all refresh tokens that
         * Amazon Cognito has issued to a user. A user can still use a hosted UI cookie to
         * retrieve new tokens for the duration of the 1-hour cookie validity
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GlobalSignOut">AWS
         * API Reference</a></p>
         */
        virtual Model::GlobalSignOutOutcome GlobalSignOut(const Model::GlobalSignOutRequest& request) const;

        /**
         * A Callable wrapper for GlobalSignOut that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GlobalSignOutOutcomeCallable GlobalSignOutCallable(const Model::GlobalSignOutRequest& request) const;

        /**
         * An Async wrapper for GlobalSignOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GlobalSignOutAsync(const Model::GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates sign-in for a user in the Amazon Cognito user directory. You can't
         * sign in a user with a federated IdP with <code>InitiateAuth</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation.html">
         * Adding user pool sign-in through a third party</a>.</p>  <p>This action
         * might generate an SMS text message. Starting June 1, 2021, US telecom carriers
         * require you to register an origination phone number before you can send SMS
         * messages to US phone numbers. If you use SMS text messages in Amazon Cognito,
         * you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateAuthOutcome InitiateAuth(const Model::InitiateAuthRequest& request) const;

        /**
         * A Callable wrapper for InitiateAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateAuthOutcomeCallable InitiateAuthCallable(const Model::InitiateAuthRequest& request) const;

        /**
         * An Async wrapper for InitiateAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateAuthAsync(const Model::InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the sign-in devices that Amazon Cognito has registered to the current
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the groups associated with a user pool.</p> <p>Calling this action
         * requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about all IdPs for a user pool.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityProvidersOutcomeCallable ListIdentityProvidersCallable(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * An Async wrapper for ListIdentityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityProvidersAsync(const Model::ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource servers for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListResourceServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceServersOutcome ListResourceServers(const Model::ListResourceServersRequest& request) const;

        /**
         * A Callable wrapper for ListResourceServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceServersOutcomeCallable ListResourceServersCallable(const Model::ListResourceServersRequest& request) const;

        /**
         * An Async wrapper for ListResourceServers that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the user import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserImportJobsOutcome ListUserImportJobs(const Model::ListUserImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListUserImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserImportJobsOutcomeCallable ListUserImportJobsCallable(const Model::ListUserImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListUserImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListUserPoolClients that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoolClientsOutcomeCallable ListUserPoolClientsCallable(const Model::ListUserPoolClientsRequest& request) const;

        /**
         * An Async wrapper for ListUserPoolClients that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoolClientsAsync(const Model::ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the user pools associated with an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserPoolsOutcome ListUserPools(const Model::ListUserPoolsRequest& request) const;

        /**
         * A Callable wrapper for ListUserPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoolsOutcomeCallable ListUserPoolsCallable(const Model::ListUserPoolsRequest& request) const;

        /**
         * An Async wrapper for ListUserPools that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the users in the specified group.</p> <p>Calling this action requires
         * developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersInGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersInGroupOutcome ListUsersInGroup(const Model::ListUsersInGroupRequest& request) const;

        /**
         * A Callable wrapper for ListUsersInGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersInGroupOutcomeCallable ListUsersInGroupCallable(const Model::ListUsersInGroupRequest& request) const;

        /**
         * An Async wrapper for ListUsersInGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersInGroupAsync(const Model::ListUsersInGroupRequest& request, const ListUsersInGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p>  <p>This action might generate an SMS text
         * message. Starting June 1, 2021, US telecom carriers require you to register an
         * origination phone number before you can send SMS messages to US phone numbers.
         * If you use SMS text messages in Amazon Cognito, you must register a phone number
         * with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Service, Amazon
         * Simple Notification Service might place your account in the SMS sandbox. In <i>
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResendConfirmationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::ResendConfirmationCodeOutcome ResendConfirmationCode(const Model::ResendConfirmationCodeRequest& request) const;

        /**
         * A Callable wrapper for ResendConfirmationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResendConfirmationCodeOutcomeCallable ResendConfirmationCodeCallable(const Model::ResendConfirmationCodeRequest& request) const;

        /**
         * An Async wrapper for ResendConfirmationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResendConfirmationCodeAsync(const Model::ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Responds to the authentication challenge.</p>  <p>This action might
         * generate an SMS text message. Starting June 1, 2021, US telecom carriers require
         * you to register an origination phone number before you can send SMS messages to
         * US phone numbers. If you use SMS text messages in Amazon Cognito, you must
         * register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondToAuthChallengeOutcome RespondToAuthChallenge(const Model::RespondToAuthChallengeRequest& request) const;

        /**
         * A Callable wrapper for RespondToAuthChallenge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RespondToAuthChallengeOutcomeCallable RespondToAuthChallengeCallable(const Model::RespondToAuthChallengeRequest& request) const;

        /**
         * An Async wrapper for RespondToAuthChallenge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RespondToAuthChallengeAsync(const Model::RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes all of the access tokens generated by, and at the same time as, the
         * specified refresh token. After a token is revoked, you can't use the revoked
         * token to access Amazon Cognito user APIs, or to authorize access to your
         * resource server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RevokeToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeTokenOutcome RevokeToken(const Model::RevokeTokenRequest& request) const;

        /**
         * A Callable wrapper for RevokeToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeTokenOutcomeCallable RevokeTokenCallable(const Model::RevokeTokenRequest& request) const;

        /**
         * An Async wrapper for RevokeToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeTokenAsync(const Model::RevokeTokenRequest& request, const RevokeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures actions on detected risks. To delete the risk configuration for
         * <code>UserPoolId</code> or <code>ClientId</code>, pass null values for all four
         * configuration types.</p> <p>To activate Amazon Cognito advanced security
         * features, update the user pool to include the <code>UserPoolAddOns</code>
         * key<code>AdvancedSecurityMode</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetRiskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::SetRiskConfigurationOutcome SetRiskConfiguration(const Model::SetRiskConfigurationRequest& request) const;

        /**
         * A Callable wrapper for SetRiskConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetRiskConfigurationOutcomeCallable SetRiskConfigurationCallable(const Model::SetRiskConfigurationRequest& request) const;

        /**
         * An Async wrapper for SetRiskConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetRiskConfigurationAsync(const Model::SetRiskConfigurationRequest& request, const SetRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the user interface (UI) customization information for a user pool's
         * built-in app UI.</p> <p>You can specify app UI customization settings for a
         * single client (with a specific <code>clientId</code>) or for all clients (by
         * setting the <code>clientId</code> to <code>ALL</code>). If you specify
         * <code>ALL</code>, the default configuration is used for every client that has no
         * previously set UI customization. If you specify UI customization settings for a
         * particular client, it will no longer return to the <code>ALL</code>
         * configuration.</p>  <p>To use this API, your user pool must have a domain
         * associated with it. Otherwise, there is no place to host the app's pages, and
         * the service will throw an error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUICustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUICustomizationOutcome SetUICustomization(const Model::SetUICustomizationRequest& request) const;

        /**
         * A Callable wrapper for SetUICustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUICustomizationOutcomeCallable SetUICustomizationCallable(const Model::SetUICustomizationRequest& request) const;

        /**
         * An Async wrapper for SetUICustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUICustomizationAsync(const Model::SetUICustomizationRequest& request, const SetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the user's multi-factor authentication (MFA) method preference, including
         * which MFA factors are activated and if any are preferred. Only one factor can be
         * set as preferred. The preferred MFA factor will be used to authenticate a user
         * if multiple factors are activated. If multiple options are activated and no
         * preference is set, a challenge to choose an MFA option will be returned during
         * sign-in. If an MFA type is activated for a user, the user will be prompted for
         * MFA during all sign-in attempts unless device tracking is turned on and the
         * device has been trusted. If you want MFA to be applied selectively based on the
         * assessed risk level of sign-in attempts, deactivate MFA for users and turn on
         * Adaptive Authentication for the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserMFAPreference">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserMFAPreferenceOutcome SetUserMFAPreference(const Model::SetUserMFAPreferenceRequest& request) const;

        /**
         * A Callable wrapper for SetUserMFAPreference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUserMFAPreferenceOutcomeCallable SetUserMFAPreferenceCallable(const Model::SetUserMFAPreferenceRequest& request) const;

        /**
         * An Async wrapper for SetUserMFAPreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUserMFAPreferenceAsync(const Model::SetUserMFAPreferenceRequest& request, const SetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the user pool multi-factor authentication (MFA) configuration.</p>
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserPoolMfaConfigOutcome SetUserPoolMfaConfig(const Model::SetUserPoolMfaConfigRequest& request) const;

        /**
         * A Callable wrapper for SetUserPoolMfaConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUserPoolMfaConfigOutcomeCallable SetUserPoolMfaConfigCallable(const Model::SetUserPoolMfaConfigRequest& request) const;

        /**
         * An Async wrapper for SetUserPoolMfaConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUserPoolMfaConfigAsync(const Model::SetUserPoolMfaConfigRequest& request, const SetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <i>This action is no longer supported.</i> You can use it to configure only
         * SMS MFA. You can't use it to configure time-based one-time password (TOTP)
         * software token MFA. To configure either type of MFA, use <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetUserMFAPreference.html">SetUserMFAPreference</a>
         * instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserSettingsOutcome SetUserSettings(const Model::SetUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for SetUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetUserSettingsOutcomeCallable SetUserSettingsCallable(const Model::SetUserSettingsRequest& request) const;

        /**
         * An Async wrapper for SetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetUserSettingsAsync(const Model::SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p>  <p>This action might generate an SMS
         * text message. Starting June 1, 2021, US telecom carriers require you to register
         * an origination phone number before you can send SMS messages to US phone
         * numbers. If you use SMS text messages in Amazon Cognito, you must register a
         * phone number with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Service, Amazon
         * Simple Notification Service might place your account in the SMS sandbox. In <i>
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::SignUpOutcome SignUp(const Model::SignUpRequest& request) const;

        /**
         * A Callable wrapper for SignUp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignUpOutcomeCallable SignUpCallable(const Model::SignUpRequest& request) const;

        /**
         * An Async wrapper for SignUp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignUpAsync(const Model::SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the user import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StartUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartUserImportJobOutcome StartUserImportJob(const Model::StartUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartUserImportJobOutcomeCallable StartUserImportJobCallable(const Model::StartUserImportJobRequest& request) const;

        /**
         * An Async wrapper for StartUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartUserImportJobAsync(const Model::StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StopUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopUserImportJobOutcome StopUserImportJob(const Model::StopUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for StopUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopUserImportJobOutcomeCallable StopUserImportJobCallable(const Model::StopUserImportJobRequest& request) const;

        /**
         * An Async wrapper for StopUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * one user pool, and <code>Production</code> for the other.</p> <p>Tags are useful
         * for cost tracking and access control. You can activate your tags so that they
         * appear on the Billing and Cost Management console, where you can track the costs
         * associated with your user pools. In an Identity and Access Management policy,
         * you can constrain permissions for user pools based on specific tags or tag
         * values.</p> <p>You can use this action up to 5 times per second, per account. A
         * user pool can have as many as 50 tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from an Amazon Cognito user pool. You can use this
         * action up to 5 times per second, per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the feedback for an authentication event, whether it was from a
         * valid user or not. This feedback is used for improving the risk evaluation
         * decision for the user pool as part of Amazon Cognito advanced
         * security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthEventFeedbackOutcome UpdateAuthEventFeedback(const Model::UpdateAuthEventFeedbackRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuthEventFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuthEventFeedbackOutcomeCallable UpdateAuthEventFeedbackCallable(const Model::UpdateAuthEventFeedbackRequest& request) const;

        /**
         * An Async wrapper for UpdateAuthEventFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuthEventFeedbackAsync(const Model::UpdateAuthEventFeedbackRequest& request, const UpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the device status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateDeviceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceStatusOutcome UpdateDeviceStatus(const Model::UpdateDeviceStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceStatusOutcomeCallable UpdateDeviceStatusCallable(const Model::UpdateDeviceStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateDeviceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceStatusAsync(const Model::UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified group with the specified attributes.</p> <p>Calling
         * this action requires developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates IdP information for a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderOutcome UpdateIdentityProvider(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIdentityProviderOutcomeCallable UpdateIdentityProviderCallable(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for UpdateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIdentityProviderAsync(const Model::UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and scopes of resource server. All other fields are
         * read-only.</p>  <p>If you don't provide a value for an attribute, it
         * is set to the default value.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceServerOutcome UpdateResourceServer(const Model::UpdateResourceServerRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceServerOutcomeCallable UpdateResourceServerCallable(const Model::UpdateResourceServerRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceServerAsync(const Model::UpdateResourceServerRequest& request, const UpdateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a user to update a specific attribute (one at a time).</p> 
         * <p>This action might generate an SMS text message. Starting June 1, 2021, US
         * telecom carriers require you to register an origination phone number before you
         * can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserAttributesOutcome UpdateUserAttributes(const Model::UpdateUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserAttributesOutcomeCallable UpdateUserAttributesCallable(const Model::UpdateUserAttributesRequest& request) const;

        /**
         * An Async wrapper for UpdateUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAttributesAsync(const Model::UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user pool with the specified attributes. You can get a
         * list of the current user pool settings using <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>.
         * If you don't provide a value for an attribute, it will be set to the default
         * value. </p>  <p>This action might generate an SMS text message. Starting
         * June 1, 2021, US telecom carriers require you to register an origination phone
         * number before you can send SMS messages to US phone numbers. If you use SMS text
         * messages in Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Service, Amazon Simple Notification
         * Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-sms-userpool-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolOutcome UpdateUserPool(const Model::UpdateUserPoolRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolOutcomeCallable UpdateUserPoolCallable(const Model::UpdateUserPoolRequest& request) const;

        /**
         * An Async wrapper for UpdateUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolAsync(const Model::UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified user pool app client with the specified attributes. You
         * can get a list of the current user pool app client settings using <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPoolClient.html">DescribeUserPoolClient</a>.</p>
         *  <p>If you don't provide a value for an attribute, it will be set to
         * the default value.</p>  <p>You can also use this operation to enable
         * token revocation for user pool clients. For more information about revoking
         * tokens, see <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolClientOutcome UpdateUserPoolClient(const Model::UpdateUserPoolClientRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolClientOutcomeCallable UpdateUserPoolClientCallable(const Model::UpdateUserPoolClientRequest& request) const;

        /**
         * An Async wrapper for UpdateUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolClientAsync(const Model::UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Secure Sockets Layer (SSL) certificate for the custom domain for
         * your user pool.</p> <p>You can use this operation to provide the Amazon Resource
         * Name (ARN) of a new certificate to Amazon Cognito. You can't use it to change
         * the domain for a user pool.</p> <p>A custom domain is used to host the Amazon
         * Cognito hosted UI, which provides sign-up and sign-in pages for your
         * application. When you set up a custom domain, you provide a certificate that you
         * manage with Certificate Manager (ACM). When necessary, you can use this
         * operation to change the certificate that you applied to your custom domain.</p>
         * <p>Usually, this is unnecessary following routine certificate renewal with ACM.
         * When you renew your existing certificate in ACM, the ARN for your certificate
         * remains the same, and your custom domain uses the new certificate
         * automatically.</p> <p>However, if you replace your existing certificate with a
         * new one, ACM gives the new certificate a new ARN. To apply the new certificate
         * to your custom domain, you must provide this ARN to Amazon Cognito.</p> <p>When
         * you add your new certificate in ACM, you must choose US East (N. Virginia) as
         * the Amazon Web Services Region.</p> <p>After you submit your request, Amazon
         * Cognito requires up to 1 hour to distribute your new certificate to your custom
         * domain.</p> <p>For more information about adding a custom domain to your user
         * pool, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
         * Your Own Domain for the Hosted UI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolDomainOutcome UpdateUserPoolDomain(const Model::UpdateUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPoolDomainOutcomeCallable UpdateUserPoolDomainCallable(const Model::UpdateUserPoolDomainRequest& request) const;

        /**
         * An Async wrapper for UpdateUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPoolDomainAsync(const Model::UpdateUserPoolDomainRequest& request, const UpdateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this API to register a user's entered time-based one-time password (TOTP)
         * code and mark the user's software token MFA status as "verified" if successful.
         * The request takes an access token or a session string, but not
         * both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifySoftwareToken">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifySoftwareTokenOutcome VerifySoftwareToken(const Model::VerifySoftwareTokenRequest& request) const;

        /**
         * A Callable wrapper for VerifySoftwareToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifySoftwareTokenOutcomeCallable VerifySoftwareTokenCallable(const Model::VerifySoftwareTokenRequest& request) const;

        /**
         * An Async wrapper for VerifySoftwareToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifySoftwareTokenAsync(const Model::VerifySoftwareTokenRequest& request, const VerifySoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies the specified user attributes in the user pool.</p> <p> If your user
         * pool requires verification before Amazon Cognito updates the attribute value,
         * VerifyUserAttribute updates the affected attribute to its pending value. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UserAttributeUpdateSettingsType.html">
         * UserAttributeUpdateSettingsType</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifyUserAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyUserAttributeOutcome VerifyUserAttribute(const Model::VerifyUserAttributeRequest& request) const;

        /**
         * A Callable wrapper for VerifyUserAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyUserAttributeOutcomeCallable VerifyUserAttributeCallable(const Model::VerifyUserAttributeRequest& request) const;

        /**
         * An Async wrapper for VerifyUserAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyUserAttributeAsync(const Model::VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CognitoIdentityProviderClient>;
      void init(const CognitoIdentityProviderClientConfiguration& clientConfiguration);

      CognitoIdentityProviderClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> m_endpointProvider;
  };

} // namespace CognitoIdentityProvider
} // namespace Aws
