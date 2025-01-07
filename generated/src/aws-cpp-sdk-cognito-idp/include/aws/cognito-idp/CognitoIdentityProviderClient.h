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
   * <p>With the Amazon Cognito user pools API, you can configure user pools and
   * authenticate users. To authenticate users from third-party identity providers
   * (IdPs) in this API, you can <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation-consolidate-users.html">link
   * IdP users to native user profiles</a>. Learn more about the authentication and
   * authorization of federated users at <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation.html">Adding
   * user pool sign-in through a third party</a> and in the <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-userpools-server-contract-reference.html">User
   * pool federation endpoints and hosted UI reference</a>.</p> <p>This API reference
   * provides detailed information about API operations and object types in Amazon
   * Cognito.</p> <p>Along with resource management operations, the Amazon Cognito
   * user pools API includes classes of operations and authorization models for
   * client-side and server-side authentication of users. You can interact with
   * operations in the Amazon Cognito user pools API as any of the following
   * subjects.</p> <ol> <li> <p>An administrator who wants to configure user pools,
   * app clients, users, groups, or other user pool functions.</p> </li> <li> <p>A
   * server-side app, like a web application, that wants to use its Amazon Web
   * Services privileges to manage, authenticate, or authorize a user.</p> </li> <li>
   * <p>A client-side app, like a mobile app, that wants to make unauthenticated
   * requests to manage, authenticate, or authorize a user.</p> </li> </ol> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
   * the Amazon Cognito user pools API and user pool endpoints</a> in the <i>Amazon
   * Cognito Developer Guide</i>.</p> <p>With your Amazon Web Services SDK, you can
   * build the logic to support operational flows in every use case for this API. You
   * can also make direct REST API requests to <a
   * href="https://docs.aws.amazon.com/general/latest/gr/cognito_identity.html#cognito_identity_your_user_pools_region">Amazon
   * Cognito user pools service endpoints</a>. The following links can get you
   * started with the <code>CognitoIdentityProvider</code> client in other supported
   * Amazon Web Services SDKs.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/cognito-idp/index.html#cli-aws-cognito-idp">Amazon
   * Web Services Command Line Interface</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sdkfornet/v3/apidocs/items/CognitoIdentityProvider/TCognitoIdentityProviderClient.html">Amazon
   * Web Services SDK for .NET</a> </p> </li> <li> <p> <a
   * href="https://sdk.amazonaws.com/cpp/api/LATEST/aws-cpp-sdk-cognito-idp/html/class_aws_1_1_cognito_identity_provider_1_1_cognito_identity_provider_client.html">Amazon
   * Web Services SDK for C++</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sdk-for-go/api/service/cognitoidentityprovider/#CognitoIdentityProvider">Amazon
   * Web Services SDK for Go</a> </p> </li> <li> <p> <a
   * href="https://sdk.amazonaws.com/java/api/latest/software/amazon/awssdk/services/cognitoidentityprovider/CognitoIdentityProviderClient.html">Amazon
   * Web Services SDK for Java V2</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/AWSJavaScriptSDK/latest/AWS/CognitoIdentityServiceProvider.html">Amazon
   * Web Services SDK for JavaScript</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/aws-sdk-php/v3/api/api-cognito-idp-2016-04-18.html">Amazon
   * Web Services SDK for PHP V3</a> </p> </li> <li> <p> <a
   * href="https://boto3.amazonaws.com/v1/documentation/api/latest/reference/services/cognito-idp.html">Amazon
   * Web Services SDK for Python</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sdk-for-ruby/v3/api/Aws/CognitoIdentityProvider/Client.html">Amazon
   * Web Services SDK for Ruby V3</a> </p> </li> <li> <p> <a
   * href="https://sdk.amazonaws.com/kotlin/api/latest/cognitoidentityprovider/aws.sdk.kotlin.services.cognitoidentityprovider/-cognito-identity-provider-client/index.html">Amazon
   * Web Services SDK for Kotlin</a> </p> </li> </ul> <p>To get started with an
   * Amazon Web Services SDK, see <a
   * href="http://aws.amazon.com/developer/tools/">Tools to Build on Amazon Web
   * Services</a>. For example actions and scenarios, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/service_code_examples_cognito-identity-provider.html">Code
   * examples for Amazon Cognito Identity Provider using Amazon Web Services
   * SDKs</a>.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CognitoIdentityProviderClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CognitoIdentityProviderClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CognitoIdentityProviderClientConfiguration ClientConfigurationType;
      typedef CognitoIdentityProviderEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration = Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration(),
                                      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityProviderClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration = Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityProviderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider = nullptr,
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
         * <p>Adds additional user attributes to the user pool schema. Custom attributes
         * can be mutable or immutable and have a <code>custom:</code> or <code>dev:</code>
         * prefix. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html#user-pool-settings-custom-attributes">Custom
         * attributes</a>.</p> <p>You can also create custom attributes in the <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateUserPool.html#CognitoUserPools-CreateUserPool-request-Schema">Schema
         * parameter</a> of <code>CreateUserPool</code> and <code>UpdateUserPool</code>.
         * You can't delete custom attributes after you create them.</p>  <p>Amazon
         * Cognito evaluates Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you must use IAM credentials to
         * authorize requests, and you must grant yourself the corresponding IAM permission
         * in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddCustomAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCustomAttributesOutcome AddCustomAttributes(const Model::AddCustomAttributesRequest& request) const;

        /**
         * A Callable wrapper for AddCustomAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddCustomAttributesRequestT = Model::AddCustomAttributesRequest>
        Model::AddCustomAttributesOutcomeCallable AddCustomAttributesCallable(const AddCustomAttributesRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AddCustomAttributes, request);
        }

        /**
         * An Async wrapper for AddCustomAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddCustomAttributesRequestT = Model::AddCustomAttributesRequest>
        void AddCustomAttributesAsync(const AddCustomAttributesRequestT& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AddCustomAttributes, request, handler, context);
        }

        /**
         * <p>Adds a user to a group. A user who is in a group can present a preferred-role
         * claim to an identity pool, and populates a <code>cognito:groups</code> claim to
         * their access and identity tokens.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminAddUserToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminAddUserToGroupOutcome AdminAddUserToGroup(const Model::AdminAddUserToGroupRequest& request) const;

        /**
         * A Callable wrapper for AdminAddUserToGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminAddUserToGroupRequestT = Model::AdminAddUserToGroupRequest>
        Model::AdminAddUserToGroupOutcomeCallable AdminAddUserToGroupCallable(const AdminAddUserToGroupRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminAddUserToGroup, request);
        }

        /**
         * An Async wrapper for AdminAddUserToGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminAddUserToGroupRequestT = Model::AdminAddUserToGroupRequest>
        void AdminAddUserToGroupAsync(const AdminAddUserToGroupRequestT& request, const AdminAddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminAddUserToGroup, request, handler, context);
        }

        /**
         * <p>Confirms user sign-up as an administrator. Unlike <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ConfirmSignUp.html">ConfirmSignUp</a>,
         * your IAM credentials authorize user account confirmation. No confirmation code
         * is required.</p> <p>This request sets a user account active in a user pool that
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#signing-up-users-in-your-app-and-confirming-them-as-admin">requires
         * confirmation of new user accounts</a> before they can sign in. You can configure
         * your user pool to not send confirmation codes to new users and instead confirm
         * them with this API operation on the back end.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         *  <p>To configure your user pool to require administrative confirmation of
         * users, set <code>AllowAdminCreateUserOnly</code> to <code>true</code> in a
         * <code>CreateUserPool</code> or <code>UpdateUserPool</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminConfirmSignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminConfirmSignUpOutcome AdminConfirmSignUp(const Model::AdminConfirmSignUpRequest& request) const;

        /**
         * A Callable wrapper for AdminConfirmSignUp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminConfirmSignUpRequestT = Model::AdminConfirmSignUpRequest>
        Model::AdminConfirmSignUpOutcomeCallable AdminConfirmSignUpCallable(const AdminConfirmSignUpRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminConfirmSignUp, request);
        }

        /**
         * An Async wrapper for AdminConfirmSignUp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminConfirmSignUpRequestT = Model::AdminConfirmSignUpRequest>
        void AdminConfirmSignUpAsync(const AdminConfirmSignUpRequestT& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminConfirmSignUp, request, handler, context);
        }

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
         * SMS text messages with Amazon Cognito or any other Amazon Web Services service,
         * Amazon Simple Notification Service might place your account in the SMS sandbox.
         * In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>This message is based on a template that you
         * configured in your call to create or update a user pool. This template includes
         * your custom sign-up instructions and placeholders for user name and temporary
         * password.</p> <p>Alternatively, you can call <code>AdminCreateUser</code> with
         * <code>SUPPRESS</code> for the <code>MessageAction</code> parameter, and Amazon
         * Cognito won't send any email. </p> <p>In either case, if the user has a
         * password, they will be in the <code>FORCE_CHANGE_PASSWORD</code> state until
         * they sign in and set their password. Your invitation message template must have
         * the <code>{####}</code> password placeholder if your users have passwords. If
         * your template doesn't have this placeholder, Amazon Cognito doesn't deliver the
         * invitation message. In this case, you must update your message template and
         * resend the password with a new <code>AdminCreateUser</code> request with a
         * <code>MessageAction</code> value of <code>RESEND</code>.</p>  <p>Amazon
         * Cognito evaluates Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you must use IAM credentials to
         * authorize requests, and you must grant yourself the corresponding IAM permission
         * in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminCreateUserOutcome AdminCreateUser(const Model::AdminCreateUserRequest& request) const;

        /**
         * A Callable wrapper for AdminCreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminCreateUserRequestT = Model::AdminCreateUserRequest>
        Model::AdminCreateUserOutcomeCallable AdminCreateUserCallable(const AdminCreateUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminCreateUser, request);
        }

        /**
         * An Async wrapper for AdminCreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminCreateUserRequestT = Model::AdminCreateUserRequest>
        void AdminCreateUserAsync(const AdminCreateUserRequestT& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminCreateUser, request, handler, context);
        }

        /**
         * <p>Deletes a user profile in your user pool.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDeleteUserOutcome AdminDeleteUser(const Model::AdminDeleteUserRequest& request) const;

        /**
         * A Callable wrapper for AdminDeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminDeleteUserRequestT = Model::AdminDeleteUserRequest>
        Model::AdminDeleteUserOutcomeCallable AdminDeleteUserCallable(const AdminDeleteUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminDeleteUser, request);
        }

        /**
         * An Async wrapper for AdminDeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminDeleteUserRequestT = Model::AdminDeleteUserRequest>
        void AdminDeleteUserAsync(const AdminDeleteUserRequestT& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminDeleteUser, request, handler, context);
        }

        /**
         * <p>Deletes attribute values from a user. This operation doesn't affect tokens
         * for existing user sessions. The next ID token that the user receives will no
         * longer have this attribute.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDeleteUserAttributesOutcome AdminDeleteUserAttributes(const Model::AdminDeleteUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for AdminDeleteUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminDeleteUserAttributesRequestT = Model::AdminDeleteUserAttributesRequest>
        Model::AdminDeleteUserAttributesOutcomeCallable AdminDeleteUserAttributesCallable(const AdminDeleteUserAttributesRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminDeleteUserAttributes, request);
        }

        /**
         * An Async wrapper for AdminDeleteUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminDeleteUserAttributesRequestT = Model::AdminDeleteUserAttributesRequest>
        void AdminDeleteUserAttributesAsync(const AdminDeleteUserAttributesRequestT& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminDeleteUserAttributes, request, handler, context);
        }

        /**
         * <p>Prevents the user from signing in with the specified external (SAML or
         * social) identity provider (IdP). If the user that you want to deactivate is a
         * Amazon Cognito user pools native username + password user, they can't use their
         * password to sign in. If the user to deactivate is a linked external IdP user,
         * any link between that user and an existing user is removed. When the external
         * user signs in again, and the user is no longer attached to the previously linked
         * <code>DestinationUser</code>, the user must create a new user account. See <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminLinkProviderForUser.html">AdminLinkProviderForUser</a>.</p>
         * <p>The <code>ProviderName</code> must match the value specified when creating an
         * IdP for the pool. </p> <p>To deactivate a native username + password user, the
         * <code>ProviderName</code> value must be <code>Cognito</code> and the
         * <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code>. The
         * <code>ProviderAttributeValue</code> must be the name that is used in the user
         * pool for the user.</p> <p>The <code>ProviderAttributeName</code> must always be
         * <code>Cognito_Subject</code> for social IdPs. The
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
         * assertion.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableProviderForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDisableProviderForUserOutcome AdminDisableProviderForUser(const Model::AdminDisableProviderForUserRequest& request) const;

        /**
         * A Callable wrapper for AdminDisableProviderForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminDisableProviderForUserRequestT = Model::AdminDisableProviderForUserRequest>
        Model::AdminDisableProviderForUserOutcomeCallable AdminDisableProviderForUserCallable(const AdminDisableProviderForUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminDisableProviderForUser, request);
        }

        /**
         * An Async wrapper for AdminDisableProviderForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminDisableProviderForUserRequestT = Model::AdminDisableProviderForUserRequest>
        void AdminDisableProviderForUserAsync(const AdminDisableProviderForUserRequestT& request, const AdminDisableProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminDisableProviderForUser, request, handler, context);
        }

        /**
         * <p>Deactivates a user profile and revokes all access tokens for the user. A
         * deactivated user can't sign in, but still appears in the responses to
         * <code>ListUsers</code> API requests.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminDisableUserOutcome AdminDisableUser(const Model::AdminDisableUserRequest& request) const;

        /**
         * A Callable wrapper for AdminDisableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminDisableUserRequestT = Model::AdminDisableUserRequest>
        Model::AdminDisableUserOutcomeCallable AdminDisableUserCallable(const AdminDisableUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminDisableUser, request);
        }

        /**
         * An Async wrapper for AdminDisableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminDisableUserRequestT = Model::AdminDisableUserRequest>
        void AdminDisableUserAsync(const AdminDisableUserRequestT& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminDisableUser, request, handler, context);
        }

        /**
         * <p>Activate sign-in for a user profile that previously had sign-in access
         * disabled.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminEnableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminEnableUserOutcome AdminEnableUser(const Model::AdminEnableUserRequest& request) const;

        /**
         * A Callable wrapper for AdminEnableUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminEnableUserRequestT = Model::AdminEnableUserRequest>
        Model::AdminEnableUserOutcomeCallable AdminEnableUserCallable(const AdminEnableUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminEnableUser, request);
        }

        /**
         * An Async wrapper for AdminEnableUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminEnableUserRequestT = Model::AdminEnableUserRequest>
        void AdminEnableUserAsync(const AdminEnableUserRequestT& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminEnableUser, request, handler, context);
        }

        /**
         * <p>Forgets, or deletes, a remembered device from a user's profile. After you
         * forget the device, the user can no longer complete device authentication with
         * that device and when applicable, must submit MFA codes again. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with devices</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminForgetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminForgetDeviceOutcome AdminForgetDevice(const Model::AdminForgetDeviceRequest& request) const;

        /**
         * A Callable wrapper for AdminForgetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminForgetDeviceRequestT = Model::AdminForgetDeviceRequest>
        Model::AdminForgetDeviceOutcomeCallable AdminForgetDeviceCallable(const AdminForgetDeviceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminForgetDevice, request);
        }

        /**
         * An Async wrapper for AdminForgetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminForgetDeviceRequestT = Model::AdminForgetDeviceRequest>
        void AdminForgetDeviceAsync(const AdminForgetDeviceRequestT& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminForgetDevice, request, handler, context);
        }

        /**
         * <p>Given the device key, returns details for a user' device. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with devices</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminGetDeviceOutcome AdminGetDevice(const Model::AdminGetDeviceRequest& request) const;

        /**
         * A Callable wrapper for AdminGetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminGetDeviceRequestT = Model::AdminGetDeviceRequest>
        Model::AdminGetDeviceOutcomeCallable AdminGetDeviceCallable(const AdminGetDeviceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminGetDevice, request);
        }

        /**
         * An Async wrapper for AdminGetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminGetDeviceRequestT = Model::AdminGetDeviceRequest>
        void AdminGetDeviceAsync(const AdminGetDeviceRequestT& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminGetDevice, request, handler, context);
        }

        /**
         * <p>Given the username, returns details about a user profile in a user pool. This
         * operation contributes to your monthly active user (MAU) count for the purpose of
         * billing. You can specify alias attributes in the <code>Username</code>
         * parameter.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminGetUserOutcome AdminGetUser(const Model::AdminGetUserRequest& request) const;

        /**
         * A Callable wrapper for AdminGetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminGetUserRequestT = Model::AdminGetUserRequest>
        Model::AdminGetUserOutcomeCallable AdminGetUserCallable(const AdminGetUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminGetUser, request);
        }

        /**
         * An Async wrapper for AdminGetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminGetUserRequestT = Model::AdminGetUserRequest>
        void AdminGetUserAsync(const AdminGetUserRequestT& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminGetUser, request, handler, context);
        }

        /**
         * <p>Starts sign-in for applications with a server-side component, for example a
         * traditional web application. This operation specifies the authentication flow
         * that you'd like to begin. The authentication flow that you specify must be
         * supported in your app client configuration. For more information about
         * authentication flows, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-authentication-flow-methods.html">Authentication
         * flows</a>.</p>  <p>This action might generate an SMS text message.
         * Starting June 1, 2021, US telecom carriers require you to register an
         * origination phone number before you can send SMS messages to US phone numbers.
         * If you use SMS text messages in Amazon Cognito, you must register a phone number
         * with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Services service,
         * Amazon Simple Notification Service might place your account in the SMS sandbox.
         * In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>   <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminInitiateAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminInitiateAuthOutcome AdminInitiateAuth(const Model::AdminInitiateAuthRequest& request) const;

        /**
         * A Callable wrapper for AdminInitiateAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminInitiateAuthRequestT = Model::AdminInitiateAuthRequest>
        Model::AdminInitiateAuthOutcomeCallable AdminInitiateAuthCallable(const AdminInitiateAuthRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminInitiateAuth, request);
        }

        /**
         * An Async wrapper for AdminInitiateAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminInitiateAuthRequestT = Model::AdminInitiateAuthRequest>
        void AdminInitiateAuthAsync(const AdminInitiateAuthRequestT& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminInitiateAuth, request, handler, context);
        }

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
         * owner.</p>   <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminLinkProviderForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminLinkProviderForUserOutcome AdminLinkProviderForUser(const Model::AdminLinkProviderForUserRequest& request) const;

        /**
         * A Callable wrapper for AdminLinkProviderForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminLinkProviderForUserRequestT = Model::AdminLinkProviderForUserRequest>
        Model::AdminLinkProviderForUserOutcomeCallable AdminLinkProviderForUserCallable(const AdminLinkProviderForUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminLinkProviderForUser, request);
        }

        /**
         * An Async wrapper for AdminLinkProviderForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminLinkProviderForUserRequestT = Model::AdminLinkProviderForUserRequest>
        void AdminLinkProviderForUserAsync(const AdminLinkProviderForUserRequestT& request, const AdminLinkProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminLinkProviderForUser, request, handler, context);
        }

        /**
         * <p>Lists a user's registered devices. Remembered devices are used in
         * authentication services where you offer a "Remember me" option for users who you
         * want to permit to sign in without MFA from a trusted device. Users can bypass
         * MFA while your application performs device SRP authentication on the back end.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with devices</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListDevicesOutcome AdminListDevices(const Model::AdminListDevicesRequest& request) const;

        /**
         * A Callable wrapper for AdminListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminListDevicesRequestT = Model::AdminListDevicesRequest>
        Model::AdminListDevicesOutcomeCallable AdminListDevicesCallable(const AdminListDevicesRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminListDevices, request);
        }

        /**
         * An Async wrapper for AdminListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminListDevicesRequestT = Model::AdminListDevicesRequest>
        void AdminListDevicesAsync(const AdminListDevicesRequestT& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminListDevices, request, handler, context);
        }

        /**
         * <p>Lists the groups that a user belongs to. User pool groups are identifiers
         * that you can reference from the contents of ID and access tokens, and set
         * preferred IAM roles for identity-pool authentication. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-user-groups.html">Adding
         * groups to a user pool</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListGroupsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListGroupsForUserOutcome AdminListGroupsForUser(const Model::AdminListGroupsForUserRequest& request) const;

        /**
         * A Callable wrapper for AdminListGroupsForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminListGroupsForUserRequestT = Model::AdminListGroupsForUserRequest>
        Model::AdminListGroupsForUserOutcomeCallable AdminListGroupsForUserCallable(const AdminListGroupsForUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminListGroupsForUser, request);
        }

        /**
         * An Async wrapper for AdminListGroupsForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminListGroupsForUserRequestT = Model::AdminListGroupsForUserRequest>
        void AdminListGroupsForUserAsync(const AdminListGroupsForUserRequestT& request, const AdminListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminListGroupsForUser, request, handler, context);
        }

        /**
         * <p>Requests a history of user activity and any risks detected as part of Amazon
         * Cognito threat protection. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-event-user-history">Viewing
         * user event history</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListUserAuthEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminListUserAuthEventsOutcome AdminListUserAuthEvents(const Model::AdminListUserAuthEventsRequest& request) const;

        /**
         * A Callable wrapper for AdminListUserAuthEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminListUserAuthEventsRequestT = Model::AdminListUserAuthEventsRequest>
        Model::AdminListUserAuthEventsOutcomeCallable AdminListUserAuthEventsCallable(const AdminListUserAuthEventsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminListUserAuthEvents, request);
        }

        /**
         * An Async wrapper for AdminListUserAuthEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminListUserAuthEventsRequestT = Model::AdminListUserAuthEventsRequest>
        void AdminListUserAuthEventsAsync(const AdminListUserAuthEventsRequestT& request, const AdminListUserAuthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminListUserAuthEvents, request, handler, context);
        }

        /**
         * <p>Given a username and a group name. removes them from the group. User pool
         * groups are identifiers that you can reference from the contents of ID and access
         * tokens, and set preferred IAM roles for identity-pool authentication. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-user-groups.html">Adding
         * groups to a user pool</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRemoveUserFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminRemoveUserFromGroupOutcome AdminRemoveUserFromGroup(const Model::AdminRemoveUserFromGroupRequest& request) const;

        /**
         * A Callable wrapper for AdminRemoveUserFromGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminRemoveUserFromGroupRequestT = Model::AdminRemoveUserFromGroupRequest>
        Model::AdminRemoveUserFromGroupOutcomeCallable AdminRemoveUserFromGroupCallable(const AdminRemoveUserFromGroupRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminRemoveUserFromGroup, request);
        }

        /**
         * An Async wrapper for AdminRemoveUserFromGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminRemoveUserFromGroupRequestT = Model::AdminRemoveUserFromGroupRequest>
        void AdminRemoveUserFromGroupAsync(const AdminRemoveUserFromGroupRequestT& request, const AdminRemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminRemoveUserFromGroup, request, handler, context);
        }

        /**
         * <p>Resets the specified user's password in a user pool. This operation doesn't
         * change the user's password, but sends a password-reset code. This operation is
         * the administrative authentication API equivalent to <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ForgotPassword.html">ForgotPassword</a>.</p>
         * <p>This operation deactivates a user's password, requiring them to change it. If
         * a user tries to sign in after the API request, Amazon Cognito responds with a
         * <code>PasswordResetRequiredException</code> error. Your app must then complete
         * the forgot-password flow by prompting the user for their code and a new
         * password, then submitting those values in a <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ConfirmForgotPassword.html">ConfirmForgotPassword</a>
         * request. In addition, if the user pool has phone verification selected and a
         * verified phone number exists for the user, or if email verification is selected
         * and a verified email exists for the user, calling this API will also result in
         * sending a message to the end user with the code to change their password.</p>
         * <p>To use this API operation, your user pool must have self-service account
         * recovery configured. Use <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminSetUserPassword.html">AdminSetUserPassword</a>
         * if you manage passwords as an administrator.</p>  <p>This action might
         * generate an SMS text message. Starting June 1, 2021, US telecom carriers require
         * you to register an origination phone number before you can send SMS messages to
         * US phone numbers. If you use SMS text messages in Amazon Cognito, you must
         * register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>   <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminResetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminResetUserPasswordOutcome AdminResetUserPassword(const Model::AdminResetUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for AdminResetUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminResetUserPasswordRequestT = Model::AdminResetUserPasswordRequest>
        Model::AdminResetUserPasswordOutcomeCallable AdminResetUserPasswordCallable(const AdminResetUserPasswordRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminResetUserPassword, request);
        }

        /**
         * An Async wrapper for AdminResetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminResetUserPasswordRequestT = Model::AdminResetUserPasswordRequest>
        void AdminResetUserPasswordAsync(const AdminResetUserPasswordRequestT& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminResetUserPassword, request, handler, context);
        }

        /**
         * <p>Some API operations in a user pool generate a challenge, like a prompt for an
         * MFA code, for device authentication that bypasses MFA, or for a custom
         * authentication challenge. An <code>AdminRespondToAuthChallenge</code> API
         * request provides the answer to that challenge, like a code or a secure remote
         * password (SRP). The parameters of a response to an authentication challenge vary
         * with the type of challenge.</p> <p>For more information about custom
         * authentication challenges, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">Custom
         * authentication challenge Lambda triggers</a>.</p>  <p>This action might
         * generate an SMS text message. Starting June 1, 2021, US telecom carriers require
         * you to register an origination phone number before you can send SMS messages to
         * US phone numbers. If you use SMS text messages in Amazon Cognito, you must
         * register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>   <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminRespondToAuthChallengeOutcome AdminRespondToAuthChallenge(const Model::AdminRespondToAuthChallengeRequest& request) const;

        /**
         * A Callable wrapper for AdminRespondToAuthChallenge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminRespondToAuthChallengeRequestT = Model::AdminRespondToAuthChallengeRequest>
        Model::AdminRespondToAuthChallengeOutcomeCallable AdminRespondToAuthChallengeCallable(const AdminRespondToAuthChallengeRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminRespondToAuthChallenge, request);
        }

        /**
         * An Async wrapper for AdminRespondToAuthChallenge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminRespondToAuthChallengeRequestT = Model::AdminRespondToAuthChallengeRequest>
        void AdminRespondToAuthChallengeAsync(const AdminRespondToAuthChallengeRequestT& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminRespondToAuthChallenge, request, handler, context);
        }

        /**
         * <p>Sets the user's multi-factor authentication (MFA) preference, including which
         * MFA options are activated, and if any are preferred. Only one factor can be set
         * as preferred. The preferred MFA factor will be used to authenticate a user if
         * multiple factors are activated. If multiple options are activated and no
         * preference is set, a challenge to choose an MFA option will be returned during
         * sign-in.</p> <p>This operation doesn't reset an existing TOTP MFA for a user. To
         * register a new TOTP factor for a user, make an <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AssociateSoftwareToken.html">AssociateSoftwareToken</a>
         * request. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-mfa-totp.html">TOTP
         * software token MFA</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserMFAPreference">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserMFAPreferenceOutcome AdminSetUserMFAPreference(const Model::AdminSetUserMFAPreferenceRequest& request) const;

        /**
         * A Callable wrapper for AdminSetUserMFAPreference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminSetUserMFAPreferenceRequestT = Model::AdminSetUserMFAPreferenceRequest>
        Model::AdminSetUserMFAPreferenceOutcomeCallable AdminSetUserMFAPreferenceCallable(const AdminSetUserMFAPreferenceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminSetUserMFAPreference, request);
        }

        /**
         * An Async wrapper for AdminSetUserMFAPreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminSetUserMFAPreferenceRequestT = Model::AdminSetUserMFAPreferenceRequest>
        void AdminSetUserMFAPreferenceAsync(const AdminSetUserMFAPreferenceRequestT& request, const AdminSetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminSetUserMFAPreference, request, handler, context);
        }

        /**
         * <p>Sets the specified user's password in a user pool. This operation
         * administratively sets a temporary or permanent password for a user. With this
         * operation, you can bypass self-service password changes and permit immediate
         * sign-in with the password that you set. To do this, set <code>Permanent</code>
         * to <code>true</code>.</p> <p>You can also set a new temporary password in this
         * request, send it to a user, and require them to choose a new password on their
         * next sign-in. To do this, set <code>Permanent</code> to <code>false</code>.</p>
         * <p>If the password is temporary, the user's <code>Status</code> becomes
         * <code>FORCE_CHANGE_PASSWORD</code>. When the user next tries to sign in, the
         * <code>InitiateAuth</code> or <code>AdminInitiateAuth</code> response includes
         * the <code>NEW_PASSWORD_REQUIRED</code> challenge. If the user doesn't sign in
         * before the temporary password expires, they can no longer sign in and you must
         * repeat this operation to set a temporary or permanent password for them.</p>
         * <p>After the user sets a new password, or if you set a permanent password, their
         * status becomes <code>Confirmed</code>.</p> <p> <code>AdminSetUserPassword</code>
         * can set a password for the user profile that Amazon Cognito creates for
         * third-party federated users. When you set a password, the federated user's
         * status changes from <code>EXTERNAL_PROVIDER</code> to <code>CONFIRMED</code>. A
         * user in this state can sign in as a federated user, and initiate authentication
         * flows in the API like a linked native user. They can also modify their password
         * and attributes in token-authenticated API requests like
         * <code>ChangePassword</code> and <code>UpdateUserAttributes</code>. As a best
         * security practice and to keep users in sync with your external IdP, don't set
         * passwords on federated user profiles. To set up a federated user for native
         * sign-in with a linked native user, refer to <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation-consolidate-users.html">Linking
         * federated users to an existing user profile</a>.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserPasswordOutcome AdminSetUserPassword(const Model::AdminSetUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for AdminSetUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminSetUserPasswordRequestT = Model::AdminSetUserPasswordRequest>
        Model::AdminSetUserPasswordOutcomeCallable AdminSetUserPasswordCallable(const AdminSetUserPasswordRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminSetUserPassword, request);
        }

        /**
         * An Async wrapper for AdminSetUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminSetUserPasswordRequestT = Model::AdminSetUserPasswordRequest>
        void AdminSetUserPasswordAsync(const AdminSetUserPasswordRequestT& request, const AdminSetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminSetUserPassword, request, handler, context);
        }

        /**
         * <p> <i>This action is no longer supported.</i> You can use it to configure only
         * SMS MFA. You can't use it to configure time-based one-time password (TOTP)
         * software token MFA. To configure either type of MFA, use <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminSetUserMFAPreference.html">AdminSetUserMFAPreference</a>
         * instead.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminSetUserSettingsOutcome AdminSetUserSettings(const Model::AdminSetUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for AdminSetUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminSetUserSettingsRequestT = Model::AdminSetUserSettingsRequest>
        Model::AdminSetUserSettingsOutcomeCallable AdminSetUserSettingsCallable(const AdminSetUserSettingsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminSetUserSettings, request);
        }

        /**
         * An Async wrapper for AdminSetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminSetUserSettingsRequestT = Model::AdminSetUserSettingsRequest>
        void AdminSetUserSettingsAsync(const AdminSetUserSettingsRequestT& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminSetUserSettings, request, handler, context);
        }

        /**
         * <p>Provides feedback for an authentication event indicating if it was from a
         * valid user. This feedback is used for improving the risk evaluation decision for
         * the user pool as part of Amazon Cognito threat protection. To train the
         * threat-protection model to recognize trusted and untrusted sign-in
         * characteristics, configure threat protection in audit-only mode and provide a
         * mechanism for users or administrators to submit feedback. Your feedback can tell
         * Amazon Cognito that a risk rating was assigned at a level you don't agree
         * with.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateAuthEventFeedbackOutcome AdminUpdateAuthEventFeedback(const Model::AdminUpdateAuthEventFeedbackRequest& request) const;

        /**
         * A Callable wrapper for AdminUpdateAuthEventFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminUpdateAuthEventFeedbackRequestT = Model::AdminUpdateAuthEventFeedbackRequest>
        Model::AdminUpdateAuthEventFeedbackOutcomeCallable AdminUpdateAuthEventFeedbackCallable(const AdminUpdateAuthEventFeedbackRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback, request);
        }

        /**
         * An Async wrapper for AdminUpdateAuthEventFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminUpdateAuthEventFeedbackRequestT = Model::AdminUpdateAuthEventFeedbackRequest>
        void AdminUpdateAuthEventFeedbackAsync(const AdminUpdateAuthEventFeedbackRequestT& request, const AdminUpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback, request, handler, context);
        }

        /**
         * <p>Updates the status of a user's device so that it is marked as remembered or
         * not remembered for the purpose of device authentication. Device authentication
         * is a "remember me" mechanism that silently completes sign-in from trusted
         * devices with a device key instead of a user-provided MFA code. This operation
         * changes the status of a device without deleting it, so you can enable it again
         * later. For more information about device authentication, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with devices</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateDeviceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateDeviceStatusOutcome AdminUpdateDeviceStatus(const Model::AdminUpdateDeviceStatusRequest& request) const;

        /**
         * A Callable wrapper for AdminUpdateDeviceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminUpdateDeviceStatusRequestT = Model::AdminUpdateDeviceStatusRequest>
        Model::AdminUpdateDeviceStatusOutcomeCallable AdminUpdateDeviceStatusCallable(const AdminUpdateDeviceStatusRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminUpdateDeviceStatus, request);
        }

        /**
         * An Async wrapper for AdminUpdateDeviceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminUpdateDeviceStatusRequestT = Model::AdminUpdateDeviceStatusRequest>
        void AdminUpdateDeviceStatusAsync(const AdminUpdateDeviceStatusRequestT& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminUpdateDeviceStatus, request, handler, context);
        }

        /**
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Updates the specified user's attributes. To
         * delete an attribute from your user, submit the attribute in your API request
         * with a blank value.</p> <p>For custom attributes, you must prepend the
         * <code>custom:</code> prefix to the attribute name.</p> <p>This operation can set
         * a user's email address or phone number as verified and permit immediate sign-in
         * in user pools that require verification of these attributes. To do this, set the
         * <code>email_verified</code> or <code>phone_number_verified</code> attribute to
         * <code>true</code>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUpdateUserAttributesOutcome AdminUpdateUserAttributes(const Model::AdminUpdateUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for AdminUpdateUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminUpdateUserAttributesRequestT = Model::AdminUpdateUserAttributesRequest>
        Model::AdminUpdateUserAttributesOutcomeCallable AdminUpdateUserAttributesCallable(const AdminUpdateUserAttributesRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminUpdateUserAttributes, request);
        }

        /**
         * An Async wrapper for AdminUpdateUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminUpdateUserAttributesRequestT = Model::AdminUpdateUserAttributesRequest>
        void AdminUpdateUserAttributesAsync(const AdminUpdateUserAttributesRequestT& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminUpdateUserAttributes, request, handler, context);
        }

        /**
         * <p>Invalidates the identity, access, and refresh tokens that Amazon Cognito
         * issued to a user. Call this operation with your administrative credentials when
         * your user signs out of your app. This results in the following behavior.</p>
         * <ul> <li> <p>Amazon Cognito no longer accepts <i>token-authorized</i> user
         * operations that you authorize with a signed-out user's access tokens. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> <p>Amazon
         * Cognito returns an <code>Access Token has been revoked</code> error when your
         * app attempts to authorize a user pools API request with a revoked access token
         * that contains the scope <code>aws.cognito.signin.user.admin</code>.</p> </li>
         * <li> <p>Amazon Cognito no longer accepts a signed-out user's ID token in a <a
         * href="https://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetId.html">GetId
         * </a> request to an identity pool with <code>ServerSideTokenCheck</code> enabled
         * for its user pool IdP configuration in <a
         * href="https://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_CognitoIdentityProvider.html">CognitoIdentityProvider</a>.</p>
         * </li> <li> <p>Amazon Cognito no longer accepts a signed-out user's refresh
         * tokens in refresh requests.</p> </li> </ul> <p>Other requests might be valid
         * until your user's token expires. This operation doesn't clear the <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-managed-login.html">managed
         * login</a> session cookie. To clear the session for a user who signed in with
         * managed login or the classic hosted UI, direct their browser session to the <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/logout-endpoint.html">logout
         * endpoint</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUserGlobalSignOut">AWS
         * API Reference</a></p>
         */
        virtual Model::AdminUserGlobalSignOutOutcome AdminUserGlobalSignOut(const Model::AdminUserGlobalSignOutRequest& request) const;

        /**
         * A Callable wrapper for AdminUserGlobalSignOut that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AdminUserGlobalSignOutRequestT = Model::AdminUserGlobalSignOutRequest>
        Model::AdminUserGlobalSignOutOutcomeCallable AdminUserGlobalSignOutCallable(const AdminUserGlobalSignOutRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AdminUserGlobalSignOut, request);
        }

        /**
         * An Async wrapper for AdminUserGlobalSignOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AdminUserGlobalSignOutRequestT = Model::AdminUserGlobalSignOutRequest>
        void AdminUserGlobalSignOutAsync(const AdminUserGlobalSignOutRequestT& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AdminUserGlobalSignOut, request, handler, context);
        }

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
         * challenge each time your user signs in. Complete setup with
         * <code>AssociateSoftwareToken</code> and <code>VerifySoftwareToken</code>.</p>
         * <p>After you set up software token MFA for your user, Amazon Cognito generates a
         * <code>SOFTWARE_TOKEN_MFA</code> challenge when they authenticate. Respond to
         * this challenge with your user's TOTP.</p>   <p>Amazon Cognito
         * doesn't evaluate Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you can't use IAM credentials to
         * authorize requests, and you can't grant IAM permissions in policies. For more
         * information about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         * <p>Authorize this action with a signed-in user's access token. It must include
         * the scope <code>aws.cognito.signin.user.admin</code>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AssociateSoftwareToken">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSoftwareTokenOutcome AssociateSoftwareToken(const Model::AssociateSoftwareTokenRequest& request = {}) const;

        /**
         * A Callable wrapper for AssociateSoftwareToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateSoftwareTokenRequestT = Model::AssociateSoftwareTokenRequest>
        Model::AssociateSoftwareTokenOutcomeCallable AssociateSoftwareTokenCallable(const AssociateSoftwareTokenRequestT& request = {}) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::AssociateSoftwareToken, request);
        }

        /**
         * An Async wrapper for AssociateSoftwareToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSoftwareTokenRequestT = Model::AssociateSoftwareTokenRequest>
        void AssociateSoftwareTokenAsync(const AssociateSoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const AssociateSoftwareTokenRequestT& request = {}) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::AssociateSoftwareToken, request, handler, context);
        }

        /**
         * <p>Changes the password for a specified user in a user pool.</p> <p>Authorize
         * this action with a signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ChangePassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangePasswordOutcome ChangePassword(const Model::ChangePasswordRequest& request) const;

        /**
         * A Callable wrapper for ChangePassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ChangePasswordRequestT = Model::ChangePasswordRequest>
        Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const ChangePasswordRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ChangePassword, request);
        }

        /**
         * An Async wrapper for ChangePassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ChangePasswordRequestT = Model::ChangePasswordRequest>
        void ChangePasswordAsync(const ChangePasswordRequestT& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ChangePassword, request, handler, context);
        }

        /**
         * <p>Completes registration of a passkey authenticator for the current user. Your
         * application provides data from a successful registration request with the data
         * from the output of a <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_StartWebAuthnRegistration.html">
         * StartWebAuthnRegistration</a>.</p> <p>Authorize this action with a signed-in
         * user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CompleteWebAuthnRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteWebAuthnRegistrationOutcome CompleteWebAuthnRegistration(const Model::CompleteWebAuthnRegistrationRequest& request) const;

        /**
         * A Callable wrapper for CompleteWebAuthnRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompleteWebAuthnRegistrationRequestT = Model::CompleteWebAuthnRegistrationRequest>
        Model::CompleteWebAuthnRegistrationOutcomeCallable CompleteWebAuthnRegistrationCallable(const CompleteWebAuthnRegistrationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CompleteWebAuthnRegistration, request);
        }

        /**
         * An Async wrapper for CompleteWebAuthnRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteWebAuthnRegistrationRequestT = Model::CompleteWebAuthnRegistrationRequest>
        void CompleteWebAuthnRegistrationAsync(const CompleteWebAuthnRegistrationRequestT& request, const CompleteWebAuthnRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CompleteWebAuthnRegistration, request, handler, context);
        }

        /**
         * <p>Confirms a device that a user wants to remember. A remembered device is a
         * "Remember me on this device" option for user pools that perform authentication
         * with the device key of a trusted device in the back end, instead of a
         * user-provided MFA code. For more information about device authentication, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with user devices in your user pool</a>.</p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmDeviceOutcome ConfirmDevice(const Model::ConfirmDeviceRequest& request) const;

        /**
         * A Callable wrapper for ConfirmDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfirmDeviceRequestT = Model::ConfirmDeviceRequest>
        Model::ConfirmDeviceOutcomeCallable ConfirmDeviceCallable(const ConfirmDeviceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ConfirmDevice, request);
        }

        /**
         * An Async wrapper for ConfirmDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfirmDeviceRequestT = Model::ConfirmDeviceRequest>
        void ConfirmDeviceAsync(const ConfirmDeviceRequestT& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ConfirmDevice, request, handler, context);
        }

        /**
         * <p>This public API operation accepts a confirmation code that Amazon Cognito
         * sent to a user and accepts a new password for that user.</p>  <p>Amazon
         * Cognito doesn't evaluate Identity and Access Management (IAM) policies in
         * requests for this API operation. For this operation, you can't use IAM
         * credentials to authorize requests, and you can't grant IAM permissions in
         * policies. For more information about authorization models in Amazon Cognito, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmForgotPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmForgotPasswordOutcome ConfirmForgotPassword(const Model::ConfirmForgotPasswordRequest& request) const;

        /**
         * A Callable wrapper for ConfirmForgotPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfirmForgotPasswordRequestT = Model::ConfirmForgotPasswordRequest>
        Model::ConfirmForgotPasswordOutcomeCallable ConfirmForgotPasswordCallable(const ConfirmForgotPasswordRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ConfirmForgotPassword, request);
        }

        /**
         * An Async wrapper for ConfirmForgotPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfirmForgotPasswordRequestT = Model::ConfirmForgotPasswordRequest>
        void ConfirmForgotPasswordAsync(const ConfirmForgotPasswordRequestT& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ConfirmForgotPassword, request, handler, context);
        }

        /**
         * <p>This public API operation submits a code that Amazon Cognito sent to your
         * user when they signed up in your user pool via the <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SignUp.html">SignUp</a>
         * API operation. After your user enters their code, they confirm ownership of the
         * email address or phone number that they provided, and their user account becomes
         * active. Depending on your user pool configuration, your users will receive their
         * confirmation code in an email or SMS message.</p> <p>Local users who signed up
         * in your user pool are the only type of user who can confirm sign-up with a code.
         * Users who federate through an external identity provider (IdP) have already been
         * confirmed by their IdP. Administrator-created users, users created with the <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminCreateUser.html">AdminCreateUser</a>
         * API operation, confirm their accounts when they respond to their invitation
         * email message and choose a password. They do not receive a confirmation code.
         * Instead, they receive a temporary password.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmSignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmSignUpOutcome ConfirmSignUp(const Model::ConfirmSignUpRequest& request) const;

        /**
         * A Callable wrapper for ConfirmSignUp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfirmSignUpRequestT = Model::ConfirmSignUpRequest>
        Model::ConfirmSignUpOutcomeCallable ConfirmSignUpCallable(const ConfirmSignUpRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ConfirmSignUp, request);
        }

        /**
         * An Async wrapper for ConfirmSignUp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfirmSignUpRequestT = Model::ConfirmSignUpRequest>
        void ConfirmSignUpAsync(const ConfirmSignUpRequestT& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ConfirmSignUp, request, handler, context);
        }

        /**
         * <p>Creates a new group in the specified user pool. For more information about
         * user pool groups see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-user-groups.html">Adding
         * groups to a user pool</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateGroup, request, handler, context);
        }

        /**
         * <p>Adds a configuration and trust relationship between a third-party identity
         * provider (IdP) and a user pool. Amazon Cognito accepts sign-in with third-party
         * identity providers through managed login and OIDC relying-party libraries. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation.html">Third-party
         * IdP sign-in</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityProviderOutcome CreateIdentityProvider(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIdentityProviderRequestT = Model::CreateIdentityProviderRequest>
        Model::CreateIdentityProviderOutcomeCallable CreateIdentityProviderCallable(const CreateIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateIdentityProvider, request);
        }

        /**
         * An Async wrapper for CreateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIdentityProviderRequestT = Model::CreateIdentityProviderRequest>
        void CreateIdentityProviderAsync(const CreateIdentityProviderRequestT& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateIdentityProvider, request, handler, context);
        }

        /**
         * <p>Creates a new set of branding settings for a user pool style and associates
         * it with an app client. This operation is the programmatic option for the
         * creation of a new style in the branding designer.</p> <p>Provides values for UI
         * customization in a <code>Settings</code> JSON object and image files in an
         * <code>Assets</code> array. To send the JSON object <code>Document</code> type
         * parameter in <code>Settings</code>, you might need to update to the most recent
         * version of your Amazon Web Services SDK. To create a new style with default
         * settings, set <code>UseCognitoProvidedValues</code> to <code>true</code> and
         * don't provide values for any other options.</p> <p> This operation has a
         * 2-megabyte request-size limit and include the CSS settings and image assets for
         * your app client. Your branding settings might exceed 2MB in size. Amazon Cognito
         * doesn't require that you pass all parameters in one request and preserves
         * existing style settings that you don't specify. If your request is larger than
         * 2MB, separate it into multiple requests, each with a size smaller than the
         * limit. </p> <p>As a best practice, modify the output of <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeManagedLoginBrandingByClient.html">DescribeManagedLoginBrandingByClient</a>
         * into the request parameters for this operation. To get all settings, set
         * <code>ReturnMergedResources</code> to <code>true</code>. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/managed-login-brandingdesigner.html#branding-designer-api">API
         * and SDK operations for managed login branding</a>.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateManagedLoginBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateManagedLoginBrandingOutcome CreateManagedLoginBranding(const Model::CreateManagedLoginBrandingRequest& request) const;

        /**
         * A Callable wrapper for CreateManagedLoginBranding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateManagedLoginBrandingRequestT = Model::CreateManagedLoginBrandingRequest>
        Model::CreateManagedLoginBrandingOutcomeCallable CreateManagedLoginBrandingCallable(const CreateManagedLoginBrandingRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateManagedLoginBranding, request);
        }

        /**
         * An Async wrapper for CreateManagedLoginBranding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateManagedLoginBrandingRequestT = Model::CreateManagedLoginBrandingRequest>
        void CreateManagedLoginBrandingAsync(const CreateManagedLoginBrandingRequestT& request, const CreateManagedLoginBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateManagedLoginBranding, request, handler, context);
        }

        /**
         * <p>Creates a new OAuth2.0 resource server and defines custom scopes within it.
         * Resource servers are associated with custom scopes and machine-to-machine (M2M)
         * authorization. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-define-resource-servers.html">Access
         * control with resource servers</a>.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceServerOutcome CreateResourceServer(const Model::CreateResourceServerRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceServerRequestT = Model::CreateResourceServerRequest>
        Model::CreateResourceServerOutcomeCallable CreateResourceServerCallable(const CreateResourceServerRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateResourceServer, request);
        }

        /**
         * An Async wrapper for CreateResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceServerRequestT = Model::CreateResourceServerRequest>
        void CreateResourceServerAsync(const CreateResourceServerRequestT& request, const CreateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateResourceServer, request, handler, context);
        }

        /**
         * <p>Creates a user import job. You can import users into user pools from a
         * comma-separated values (CSV) file without adding Amazon Cognito MAU costs to
         * your Amazon Web Services bill. To generate a template for your import, see <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_GetCSVHeader.html">GetCSVHeader</a>.
         * To learn more about CSV import, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-using-import-tool.html">Importing
         * users from a CSV file</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserImportJobOutcome CreateUserImportJob(const Model::CreateUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserImportJobRequestT = Model::CreateUserImportJobRequest>
        Model::CreateUserImportJobOutcomeCallable CreateUserImportJobCallable(const CreateUserImportJobRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateUserImportJob, request);
        }

        /**
         * An Async wrapper for CreateUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserImportJobRequestT = Model::CreateUserImportJobRequest>
        void CreateUserImportJobAsync(const CreateUserImportJobRequestT& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateUserImportJob, request, handler, context);
        }

        /**
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Creates a new Amazon Cognito user pool. This
         * operation sets basic and advanced configuration options. You can create a user
         * pool in the Amazon Cognito console to your preferences and use the output of <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>
         * to generate requests from that baseline.</p>  <p>If you don't provide
         * a value for an attribute, Amazon Cognito sets it to its default value.</p>
         *   <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolOutcome CreateUserPool(const Model::CreateUserPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserPoolRequestT = Model::CreateUserPoolRequest>
        Model::CreateUserPoolOutcomeCallable CreateUserPoolCallable(const CreateUserPoolRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateUserPool, request);
        }

        /**
         * An Async wrapper for CreateUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserPoolRequestT = Model::CreateUserPoolRequest>
        void CreateUserPoolAsync(const CreateUserPoolRequestT& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateUserPool, request, handler, context);
        }

        /**
         * <p>Creates an app client in a user pool. This operation sets basic and advanced
         * configuration options. You can create an app client in the Amazon Cognito
         * console to your preferences and use the output of <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPoolClient.html">DescribeUserPoolClient</a>
         * to generate requests from that baseline.</p> <p>New app clients activate token
         * revocation by default. For more information about revoking tokens, see <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p>
         *  <p>If you don't provide a value for an attribute, Amazon Cognito
         * sets it to its default value.</p>   <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolClientOutcome CreateUserPoolClient(const Model::CreateUserPoolClientRequest& request) const;

        /**
         * A Callable wrapper for CreateUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserPoolClientRequestT = Model::CreateUserPoolClientRequest>
        Model::CreateUserPoolClientOutcomeCallable CreateUserPoolClientCallable(const CreateUserPoolClientRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateUserPoolClient, request);
        }

        /**
         * An Async wrapper for CreateUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserPoolClientRequestT = Model::CreateUserPoolClientRequest>
        void CreateUserPoolClientAsync(const CreateUserPoolClientRequestT& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateUserPoolClient, request, handler, context);
        }

        /**
         * <p>A user pool domain hosts managed login, an authorization server and web
         * server for authentication in your application. This operation creates a new user
         * pool prefix or custom domain and sets the managed login branding version. Set
         * the branding version to <code>1</code> for hosted UI (classic) or <code>2</code>
         * for managed login. When you choose a custom domain, you must provide an SSL
         * certificate in the US East (N. Virginia) Amazon Web Services Region in your
         * request.</p> <p>Your prefix domain might take up to one minute to take effect.
         * Your custom domain is online within five minutes, but it can take up to one hour
         * to distribute your SSL certificate.</p> <p>For more information about adding a
         * custom domain to your user pool, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Configuring
         * a user pool domain</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserPoolDomainOutcome CreateUserPoolDomain(const Model::CreateUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserPoolDomainRequestT = Model::CreateUserPoolDomainRequest>
        Model::CreateUserPoolDomainOutcomeCallable CreateUserPoolDomainCallable(const CreateUserPoolDomainRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::CreateUserPoolDomain, request);
        }

        /**
         * An Async wrapper for CreateUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserPoolDomainRequestT = Model::CreateUserPoolDomainRequest>
        void CreateUserPoolDomainAsync(const CreateUserPoolDomainRequestT& request, const CreateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::CreateUserPoolDomain, request, handler, context);
        }

        /**
         * <p>Deletes a group from the specified user pool. When you delete a group, that
         * group no longer contributes to users' <code>cognito:preferred_group</code> or
         * <code>cognito:groups</code> claims, and no longer influence access-control
         * decision that are based on group membership. For more information about user
         * pool groups, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-user-groups.html">Adding
         * groups to a user pool</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteGroup, request, handler, context);
        }

        /**
         * <p>Deletes a user pool identity provider (IdP). After you delete an IdP, users
         * can no longer sign in to your user pool through that IdP. For more information
         * about user pool IdPs, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation.html">Third-party
         * IdP sign-in</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityProviderOutcome DeleteIdentityProvider(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIdentityProviderRequestT = Model::DeleteIdentityProviderRequest>
        Model::DeleteIdentityProviderOutcomeCallable DeleteIdentityProviderCallable(const DeleteIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteIdentityProvider, request);
        }

        /**
         * An Async wrapper for DeleteIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIdentityProviderRequestT = Model::DeleteIdentityProviderRequest>
        void DeleteIdentityProviderAsync(const DeleteIdentityProviderRequestT& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteIdentityProvider, request, handler, context);
        }

        /**
         * <p>Deletes a managed login branding style. When you delete a style, you delete
         * the branding association for an app client. When an app client doesn't have a
         * style assigned, your managed login pages for that app client are nonfunctional
         * until you create a new style or switch the domain branding version.</p> 
         * <p>Amazon Cognito evaluates Identity and Access Management (IAM) policies in
         * requests for this API operation. For this operation, you must use IAM
         * credentials to authorize requests, and you must grant yourself the corresponding
         * IAM permission in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteManagedLoginBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteManagedLoginBrandingOutcome DeleteManagedLoginBranding(const Model::DeleteManagedLoginBrandingRequest& request) const;

        /**
         * A Callable wrapper for DeleteManagedLoginBranding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteManagedLoginBrandingRequestT = Model::DeleteManagedLoginBrandingRequest>
        Model::DeleteManagedLoginBrandingOutcomeCallable DeleteManagedLoginBrandingCallable(const DeleteManagedLoginBrandingRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteManagedLoginBranding, request);
        }

        /**
         * An Async wrapper for DeleteManagedLoginBranding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteManagedLoginBrandingRequestT = Model::DeleteManagedLoginBrandingRequest>
        void DeleteManagedLoginBrandingAsync(const DeleteManagedLoginBrandingRequestT& request, const DeleteManagedLoginBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteManagedLoginBranding, request, handler, context);
        }

        /**
         * <p>Deletes a resource server. After you delete a resource server, users can no
         * longer generate access tokens with scopes that are associate with that resource
         * server.</p> <p>Resource servers are associated with custom scopes and
         * machine-to-machine (M2M) authorization. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-define-resource-servers.html">Access
         * control with resource servers</a>.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceServerOutcome DeleteResourceServer(const Model::DeleteResourceServerRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceServerRequestT = Model::DeleteResourceServerRequest>
        Model::DeleteResourceServerOutcomeCallable DeleteResourceServerCallable(const DeleteResourceServerRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteResourceServer, request);
        }

        /**
         * An Async wrapper for DeleteResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceServerRequestT = Model::DeleteResourceServerRequest>
        void DeleteResourceServerAsync(const DeleteResourceServerRequestT& request, const DeleteResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteResourceServer, request, handler, context);
        }

        /**
         * <p>Self-deletes a user profile. A deleted user profile can no longer be used to
         * sign in and can't be restored.</p> <p>Authorize this action with a signed-in
         * user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Self-deletes attributes for a user. For example, your application can submit
         * a request to this operation when a user wants to remove their
         * <code>birthdate</code> attribute value.</p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserAttributesOutcome DeleteUserAttributes(const Model::DeleteUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserAttributesRequestT = Model::DeleteUserAttributesRequest>
        Model::DeleteUserAttributesOutcomeCallable DeleteUserAttributesCallable(const DeleteUserAttributesRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteUserAttributes, request);
        }

        /**
         * An Async wrapper for DeleteUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserAttributesRequestT = Model::DeleteUserAttributesRequest>
        void DeleteUserAttributesAsync(const DeleteUserAttributesRequestT& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteUserAttributes, request, handler, context);
        }

        /**
         * <p>Deletes a user pool. After you delete a user pool, users can no longer sign
         * in to any associated applications. </p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolOutcome DeleteUserPool(const Model::DeleteUserPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserPoolRequestT = Model::DeleteUserPoolRequest>
        Model::DeleteUserPoolOutcomeCallable DeleteUserPoolCallable(const DeleteUserPoolRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteUserPool, request);
        }

        /**
         * An Async wrapper for DeleteUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserPoolRequestT = Model::DeleteUserPoolRequest>
        void DeleteUserPoolAsync(const DeleteUserPoolRequestT& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteUserPool, request, handler, context);
        }

        /**
         * <p>Deletes a user pool app client. After you delete an app client, users can no
         * longer sign in to the associated application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolClientOutcome DeleteUserPoolClient(const Model::DeleteUserPoolClientRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserPoolClientRequestT = Model::DeleteUserPoolClientRequest>
        Model::DeleteUserPoolClientOutcomeCallable DeleteUserPoolClientCallable(const DeleteUserPoolClientRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteUserPoolClient, request);
        }

        /**
         * An Async wrapper for DeleteUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserPoolClientRequestT = Model::DeleteUserPoolClientRequest>
        void DeleteUserPoolClientAsync(const DeleteUserPoolClientRequestT& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteUserPoolClient, request, handler, context);
        }

        /**
         * <p>Given a user pool ID and domain identifier, deletes a user pool domain. After
         * you delete a user pool domain, your managed login pages and authorization server
         * are no longer available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPoolDomainOutcome DeleteUserPoolDomain(const Model::DeleteUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserPoolDomainRequestT = Model::DeleteUserPoolDomainRequest>
        Model::DeleteUserPoolDomainOutcomeCallable DeleteUserPoolDomainCallable(const DeleteUserPoolDomainRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteUserPoolDomain, request);
        }

        /**
         * An Async wrapper for DeleteUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserPoolDomainRequestT = Model::DeleteUserPoolDomainRequest>
        void DeleteUserPoolDomainAsync(const DeleteUserPoolDomainRequestT& request, const DeleteUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteUserPoolDomain, request, handler, context);
        }

        /**
         * <p>Deletes a registered passkey, or webauthN, authenticator for the currently
         * signed-in user.</p> <p>Authorize this action with a signed-in user's access
         * token. It must include the scope <code>aws.cognito.signin.user.admin</code>.</p>
         *  <p>Amazon Cognito doesn't evaluate Identity and Access Management (IAM)
         * policies in requests for this API operation. For this operation, you can't use
         * IAM credentials to authorize requests, and you can't grant IAM permissions in
         * policies. For more information about authorization models in Amazon Cognito, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteWebAuthnCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebAuthnCredentialOutcome DeleteWebAuthnCredential(const Model::DeleteWebAuthnCredentialRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebAuthnCredential that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWebAuthnCredentialRequestT = Model::DeleteWebAuthnCredentialRequest>
        Model::DeleteWebAuthnCredentialOutcomeCallable DeleteWebAuthnCredentialCallable(const DeleteWebAuthnCredentialRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DeleteWebAuthnCredential, request);
        }

        /**
         * An Async wrapper for DeleteWebAuthnCredential that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWebAuthnCredentialRequestT = Model::DeleteWebAuthnCredentialRequest>
        void DeleteWebAuthnCredentialAsync(const DeleteWebAuthnCredentialRequestT& request, const DeleteWebAuthnCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DeleteWebAuthnCredential, request, handler, context);
        }

        /**
         * <p>Given a user pool ID and identity provider (IdP) name, returns details about
         * the IdP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityProviderOutcome DescribeIdentityProvider(const Model::DescribeIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for DescribeIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIdentityProviderRequestT = Model::DescribeIdentityProviderRequest>
        Model::DescribeIdentityProviderOutcomeCallable DescribeIdentityProviderCallable(const DescribeIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeIdentityProvider, request);
        }

        /**
         * An Async wrapper for DescribeIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIdentityProviderRequestT = Model::DescribeIdentityProviderRequest>
        void DescribeIdentityProviderAsync(const DescribeIdentityProviderRequestT& request, const DescribeIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeIdentityProvider, request, handler, context);
        }

        /**
         * <p>Given the ID of a managed login branding style, returns detailed information
         * about the style.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeManagedLoginBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedLoginBrandingOutcome DescribeManagedLoginBranding(const Model::DescribeManagedLoginBrandingRequest& request) const;

        /**
         * A Callable wrapper for DescribeManagedLoginBranding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeManagedLoginBrandingRequestT = Model::DescribeManagedLoginBrandingRequest>
        Model::DescribeManagedLoginBrandingOutcomeCallable DescribeManagedLoginBrandingCallable(const DescribeManagedLoginBrandingRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeManagedLoginBranding, request);
        }

        /**
         * An Async wrapper for DescribeManagedLoginBranding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeManagedLoginBrandingRequestT = Model::DescribeManagedLoginBrandingRequest>
        void DescribeManagedLoginBrandingAsync(const DescribeManagedLoginBrandingRequestT& request, const DescribeManagedLoginBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeManagedLoginBranding, request, handler, context);
        }

        /**
         * <p>Given the ID of a user pool app client, returns detailed information about
         * the style assigned to the app client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeManagedLoginBrandingByClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedLoginBrandingByClientOutcome DescribeManagedLoginBrandingByClient(const Model::DescribeManagedLoginBrandingByClientRequest& request) const;

        /**
         * A Callable wrapper for DescribeManagedLoginBrandingByClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeManagedLoginBrandingByClientRequestT = Model::DescribeManagedLoginBrandingByClientRequest>
        Model::DescribeManagedLoginBrandingByClientOutcomeCallable DescribeManagedLoginBrandingByClientCallable(const DescribeManagedLoginBrandingByClientRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeManagedLoginBrandingByClient, request);
        }

        /**
         * An Async wrapper for DescribeManagedLoginBrandingByClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeManagedLoginBrandingByClientRequestT = Model::DescribeManagedLoginBrandingByClientRequest>
        void DescribeManagedLoginBrandingByClientAsync(const DescribeManagedLoginBrandingByClientRequestT& request, const DescribeManagedLoginBrandingByClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeManagedLoginBrandingByClient, request, handler, context);
        }

        /**
         * <p>Describes a resource server. For more information about resource servers, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-define-resource-servers.html">Access
         * control with resource servers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceServerOutcome DescribeResourceServer(const Model::DescribeResourceServerRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourceServerRequestT = Model::DescribeResourceServerRequest>
        Model::DescribeResourceServerOutcomeCallable DescribeResourceServerCallable(const DescribeResourceServerRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeResourceServer, request);
        }

        /**
         * An Async wrapper for DescribeResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourceServerRequestT = Model::DescribeResourceServerRequest>
        void DescribeResourceServerAsync(const DescribeResourceServerRequestT& request, const DescribeResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeResourceServer, request, handler, context);
        }

        /**
         * <p>Given an app client or user pool ID where threat protection is configured,
         * describes the risk configuration. This operation returns details about adaptive
         * authentication, compromised credentials, and IP-address allow- and denylists.
         * For more information about threat protection, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-threat-protection.html">Threat
         * protection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeRiskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRiskConfigurationOutcome DescribeRiskConfiguration(const Model::DescribeRiskConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeRiskConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRiskConfigurationRequestT = Model::DescribeRiskConfigurationRequest>
        Model::DescribeRiskConfigurationOutcomeCallable DescribeRiskConfigurationCallable(const DescribeRiskConfigurationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeRiskConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeRiskConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRiskConfigurationRequestT = Model::DescribeRiskConfigurationRequest>
        void DescribeRiskConfigurationAsync(const DescribeRiskConfigurationRequestT& request, const DescribeRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeRiskConfiguration, request, handler, context);
        }

        /**
         * <p>Describes a user import job. For more information about user CSV import, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-using-import-tool.html">Importing
         * users from a CSV file</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserImportJobOutcome DescribeUserImportJob(const Model::DescribeUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserImportJobRequestT = Model::DescribeUserImportJobRequest>
        Model::DescribeUserImportJobOutcomeCallable DescribeUserImportJobCallable(const DescribeUserImportJobRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeUserImportJob, request);
        }

        /**
         * An Async wrapper for DescribeUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserImportJobRequestT = Model::DescribeUserImportJobRequest>
        void DescribeUserImportJobAsync(const DescribeUserImportJobRequestT& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeUserImportJob, request, handler, context);
        }

        /**
         * <p>Given a user pool ID, returns configuration information. This operation is
         * useful when you want to inspect an existing user pool and programmatically
         * replicate the configuration to another user pool.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserPoolOutcome DescribeUserPool(const Model::DescribeUserPoolRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserPoolRequestT = Model::DescribeUserPoolRequest>
        Model::DescribeUserPoolOutcomeCallable DescribeUserPoolCallable(const DescribeUserPoolRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeUserPool, request);
        }

        /**
         * An Async wrapper for DescribeUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserPoolRequestT = Model::DescribeUserPoolRequest>
        void DescribeUserPoolAsync(const DescribeUserPoolRequestT& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeUserPool, request, handler, context);
        }

        /**
         * <p>Given an app client ID, returns configuration information. This operation is
         * useful when you want to inspect an existing app client and programmatically
         * replicate the configuration to another app client. For more information about
         * app clients, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-client-apps.html">App
         * clients</a>.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserPoolClientOutcome DescribeUserPoolClient(const Model::DescribeUserPoolClientRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserPoolClientRequestT = Model::DescribeUserPoolClientRequest>
        Model::DescribeUserPoolClientOutcomeCallable DescribeUserPoolClientCallable(const DescribeUserPoolClientRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeUserPoolClient, request);
        }

        /**
         * An Async wrapper for DescribeUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserPoolClientRequestT = Model::DescribeUserPoolClientRequest>
        void DescribeUserPoolClientAsync(const DescribeUserPoolClientRequestT& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeUserPoolClient, request, handler, context);
        }

        /**
         * <p>Given a user pool domain name, returns information about the domain
         * configuration.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserPoolDomainOutcome DescribeUserPoolDomain(const Model::DescribeUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserPoolDomainRequestT = Model::DescribeUserPoolDomainRequest>
        Model::DescribeUserPoolDomainOutcomeCallable DescribeUserPoolDomainCallable(const DescribeUserPoolDomainRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::DescribeUserPoolDomain, request);
        }

        /**
         * An Async wrapper for DescribeUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserPoolDomainRequestT = Model::DescribeUserPoolDomainRequest>
        void DescribeUserPoolDomainAsync(const DescribeUserPoolDomainRequestT& request, const DescribeUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::DescribeUserPoolDomain, request, handler, context);
        }

        /**
         * <p>Forgets the specified device. For more information about device
         * authentication, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with user devices in your user pool</a>.</p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgetDeviceOutcome ForgetDevice(const Model::ForgetDeviceRequest& request) const;

        /**
         * A Callable wrapper for ForgetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ForgetDeviceRequestT = Model::ForgetDeviceRequest>
        Model::ForgetDeviceOutcomeCallable ForgetDeviceCallable(const ForgetDeviceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ForgetDevice, request);
        }

        /**
         * An Async wrapper for ForgetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ForgetDeviceRequestT = Model::ForgetDeviceRequest>
        void ForgetDeviceAsync(const ForgetDeviceRequestT& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ForgetDevice, request, handler, context);
        }

        /**
         * <p>Calling this API causes a message to be sent to the end user with a
         * confirmation code that is required to change the user's password. For the
         * <code>Username</code> parameter, you can use the username or user alias. The
         * method used to send the confirmation code is sent according to the specified
         * AccountRecoverySetting. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/how-to-recover-a-user-account.html">Recovering
         * User Accounts</a> in the <i>Amazon Cognito Developer Guide</i>. To use the
         * confirmation code for resetting the password, call <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ConfirmForgotPassword.html">ConfirmForgotPassword</a>.
         * </p> <p>If neither a verified phone number nor a verified email exists, this API
         * returns <code>InvalidParameterException</code>. If your app client has a client
         * secret and you don't provide a <code>SECRET_HASH</code> parameter, this API
         * returns <code>NotAuthorizedException</code>.</p> <p>To use this API operation,
         * your user pool must have self-service account recovery configured. Use <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminSetUserPassword.html">AdminSetUserPassword</a>
         * if you manage passwords as an administrator.</p>  <p>Amazon Cognito
         * doesn't evaluate Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you can't use IAM credentials to
         * authorize requests, and you can't grant IAM permissions in policies. For more
         * information about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgotPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ForgotPasswordOutcome ForgotPassword(const Model::ForgotPasswordRequest& request) const;

        /**
         * A Callable wrapper for ForgotPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ForgotPasswordRequestT = Model::ForgotPasswordRequest>
        Model::ForgotPasswordOutcomeCallable ForgotPasswordCallable(const ForgotPasswordRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ForgotPassword, request);
        }

        /**
         * An Async wrapper for ForgotPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ForgotPasswordRequestT = Model::ForgotPasswordRequest>
        void ForgotPasswordAsync(const ForgotPasswordRequestT& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ForgotPassword, request, handler, context);
        }

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
        template<typename GetCSVHeaderRequestT = Model::GetCSVHeaderRequest>
        Model::GetCSVHeaderOutcomeCallable GetCSVHeaderCallable(const GetCSVHeaderRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetCSVHeader, request);
        }

        /**
         * An Async wrapper for GetCSVHeader that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCSVHeaderRequestT = Model::GetCSVHeaderRequest>
        void GetCSVHeaderAsync(const GetCSVHeaderRequestT& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetCSVHeader, request, handler, context);
        }

        /**
         * <p>Gets the device. For more information about device authentication, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with user devices in your user pool</a>.</p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        Model::GetDeviceOutcomeCallable GetDeviceCallable(const GetDeviceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetDevice, request);
        }

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        void GetDeviceAsync(const GetDeviceRequestT& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetDevice, request, handler, context);
        }

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
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        Model::GetGroupOutcomeCallable GetGroupCallable(const GetGroupRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetGroup, request);
        }

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        void GetGroupAsync(const GetGroupRequestT& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetGroup, request, handler, context);
        }

        /**
         * <p>Gets the specified IdP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetIdentityProviderByIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityProviderByIdentifierOutcome GetIdentityProviderByIdentifier(const Model::GetIdentityProviderByIdentifierRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityProviderByIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentityProviderByIdentifierRequestT = Model::GetIdentityProviderByIdentifierRequest>
        Model::GetIdentityProviderByIdentifierOutcomeCallable GetIdentityProviderByIdentifierCallable(const GetIdentityProviderByIdentifierRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetIdentityProviderByIdentifier, request);
        }

        /**
         * An Async wrapper for GetIdentityProviderByIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityProviderByIdentifierRequestT = Model::GetIdentityProviderByIdentifierRequest>
        void GetIdentityProviderByIdentifierAsync(const GetIdentityProviderByIdentifierRequestT& request, const GetIdentityProviderByIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetIdentityProviderByIdentifier, request, handler, context);
        }

        /**
         * <p>Gets the logging configuration of a user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetLogDeliveryConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogDeliveryConfigurationOutcome GetLogDeliveryConfiguration(const Model::GetLogDeliveryConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLogDeliveryConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLogDeliveryConfigurationRequestT = Model::GetLogDeliveryConfigurationRequest>
        Model::GetLogDeliveryConfigurationOutcomeCallable GetLogDeliveryConfigurationCallable(const GetLogDeliveryConfigurationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetLogDeliveryConfiguration, request);
        }

        /**
         * An Async wrapper for GetLogDeliveryConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLogDeliveryConfigurationRequestT = Model::GetLogDeliveryConfigurationRequest>
        void GetLogDeliveryConfigurationAsync(const GetLogDeliveryConfigurationRequestT& request, const GetLogDeliveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetLogDeliveryConfiguration, request, handler, context);
        }

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
        template<typename GetSigningCertificateRequestT = Model::GetSigningCertificateRequest>
        Model::GetSigningCertificateOutcomeCallable GetSigningCertificateCallable(const GetSigningCertificateRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetSigningCertificate, request);
        }

        /**
         * An Async wrapper for GetSigningCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSigningCertificateRequestT = Model::GetSigningCertificateRequest>
        void GetSigningCertificateAsync(const GetSigningCertificateRequestT& request, const GetSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetSigningCertificate, request, handler, context);
        }

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
        template<typename GetUICustomizationRequestT = Model::GetUICustomizationRequest>
        Model::GetUICustomizationOutcomeCallable GetUICustomizationCallable(const GetUICustomizationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetUICustomization, request);
        }

        /**
         * An Async wrapper for GetUICustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUICustomizationRequestT = Model::GetUICustomizationRequest>
        void GetUICustomizationAsync(const GetUICustomizationRequestT& request, const GetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetUICustomization, request, handler, context);
        }

        /**
         * <p>Gets the user attributes and metadata for a user.</p> <p>Authorize this
         * action with a signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * A Callable wrapper for GetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        Model::GetUserOutcomeCallable GetUserCallable(const GetUserRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetUser, request);
        }

        /**
         * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        void GetUserAsync(const GetUserRequestT& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetUser, request, handler, context);
        }

        /**
         * <p>Generates a user attribute verification code for the specified attribute
         * name. Sends a message to a user with a code that they must return in a
         * VerifyUserAttribute request.</p> <p>Authorize this action with a signed-in
         * user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAttributeVerificationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserAttributeVerificationCodeOutcome GetUserAttributeVerificationCode(const Model::GetUserAttributeVerificationCodeRequest& request) const;

        /**
         * A Callable wrapper for GetUserAttributeVerificationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserAttributeVerificationCodeRequestT = Model::GetUserAttributeVerificationCodeRequest>
        Model::GetUserAttributeVerificationCodeOutcomeCallable GetUserAttributeVerificationCodeCallable(const GetUserAttributeVerificationCodeRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetUserAttributeVerificationCode, request);
        }

        /**
         * An Async wrapper for GetUserAttributeVerificationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserAttributeVerificationCodeRequestT = Model::GetUserAttributeVerificationCodeRequest>
        void GetUserAttributeVerificationCodeAsync(const GetUserAttributeVerificationCodeRequestT& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetUserAttributeVerificationCode, request, handler, context);
        }

        /**
         * <p>Lists the authentication options for the currently signed-in user. Returns
         * the following:</p> <ol> <li> <p>The user's multi-factor authentication (MFA)
         * preferences.</p> </li> <li> <p>The user's options in the <code>USER_AUTH</code>
         * flow that they can select in a <code>SELECT_CHALLENGE</code> response or request
         * in a <code>PREFERRED_CHALLENGE</code>request.</p> </li> </ol><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAuthFactors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserAuthFactorsOutcome GetUserAuthFactors(const Model::GetUserAuthFactorsRequest& request) const;

        /**
         * A Callable wrapper for GetUserAuthFactors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserAuthFactorsRequestT = Model::GetUserAuthFactorsRequest>
        Model::GetUserAuthFactorsOutcomeCallable GetUserAuthFactorsCallable(const GetUserAuthFactorsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetUserAuthFactors, request);
        }

        /**
         * An Async wrapper for GetUserAuthFactors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserAuthFactorsRequestT = Model::GetUserAuthFactorsRequest>
        void GetUserAuthFactorsAsync(const GetUserAuthFactorsRequestT& request, const GetUserAuthFactorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetUserAuthFactors, request, handler, context);
        }

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
        template<typename GetUserPoolMfaConfigRequestT = Model::GetUserPoolMfaConfigRequest>
        Model::GetUserPoolMfaConfigOutcomeCallable GetUserPoolMfaConfigCallable(const GetUserPoolMfaConfigRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GetUserPoolMfaConfig, request);
        }

        /**
         * An Async wrapper for GetUserPoolMfaConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserPoolMfaConfigRequestT = Model::GetUserPoolMfaConfigRequest>
        void GetUserPoolMfaConfigAsync(const GetUserPoolMfaConfigRequestT& request, const GetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GetUserPoolMfaConfig, request, handler, context);
        }

        /**
         * <p>Invalidates the identity, access, and refresh tokens that Amazon Cognito
         * issued to a user. Call this operation when your user signs out of your app. This
         * results in the following behavior. </p> <ul> <li> <p>Amazon Cognito no longer
         * accepts <i>token-authorized</i> user operations that you authorize with a
         * signed-out user's access tokens. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> <p>Amazon
         * Cognito returns an <code>Access Token has been revoked</code> error when your
         * app attempts to authorize a user pools API request with a revoked access token
         * that contains the scope <code>aws.cognito.signin.user.admin</code>.</p> </li>
         * <li> <p>Amazon Cognito no longer accepts a signed-out user's ID token in a <a
         * href="https://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetId.html">GetId
         * </a> request to an identity pool with <code>ServerSideTokenCheck</code> enabled
         * for its user pool IdP configuration in <a
         * href="https://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_CognitoIdentityProvider.html">CognitoIdentityProvider</a>.</p>
         * </li> <li> <p>Amazon Cognito no longer accepts a signed-out user's refresh
         * tokens in refresh requests.</p> </li> </ul> <p>Other requests might be valid
         * until your user's token expires. This operation doesn't clear the <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-managed-login.html">managed
         * login</a> session cookie. To clear the session for a user who signed in with
         * managed login or the classic hosted UI, direct their browser session to the <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/logout-endpoint.html">logout
         * endpoint</a>.</p> <p>Authorize this action with a signed-in user's access token.
         * It must include the scope <code>aws.cognito.signin.user.admin</code>.</p> 
         * <p>Amazon Cognito doesn't evaluate Identity and Access Management (IAM) policies
         * in requests for this API operation. For this operation, you can't use IAM
         * credentials to authorize requests, and you can't grant IAM permissions in
         * policies. For more information about authorization models in Amazon Cognito, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GlobalSignOut">AWS
         * API Reference</a></p>
         */
        virtual Model::GlobalSignOutOutcome GlobalSignOut(const Model::GlobalSignOutRequest& request) const;

        /**
         * A Callable wrapper for GlobalSignOut that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GlobalSignOutRequestT = Model::GlobalSignOutRequest>
        Model::GlobalSignOutOutcomeCallable GlobalSignOutCallable(const GlobalSignOutRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::GlobalSignOut, request);
        }

        /**
         * An Async wrapper for GlobalSignOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GlobalSignOutRequestT = Model::GlobalSignOutRequest>
        void GlobalSignOutAsync(const GlobalSignOutRequestT& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::GlobalSignOut, request, handler, context);
        }

        /**
         * <p>Initiates sign-in for a user in the Amazon Cognito user directory. You can't
         * sign in a user with a federated IdP with <code>InitiateAuth</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation.html">
         * Adding user pool sign-in through a third party</a>.</p>  <p>Amazon Cognito
         * doesn't evaluate Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you can't use IAM credentials to
         * authorize requests, and you can't grant IAM permissions in policies. For more
         * information about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateAuthOutcome InitiateAuth(const Model::InitiateAuthRequest& request) const;

        /**
         * A Callable wrapper for InitiateAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitiateAuthRequestT = Model::InitiateAuthRequest>
        Model::InitiateAuthOutcomeCallable InitiateAuthCallable(const InitiateAuthRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::InitiateAuth, request);
        }

        /**
         * An Async wrapper for InitiateAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitiateAuthRequestT = Model::InitiateAuthRequest>
        void InitiateAuthAsync(const InitiateAuthRequestT& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::InitiateAuth, request, handler, context);
        }

        /**
         * <p>Lists the sign-in devices that Amazon Cognito has registered to the current
         * user. For more information about device authentication, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with user devices in your user pool</a>.</p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        Model::ListDevicesOutcomeCallable ListDevicesCallable(const ListDevicesRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListDevices, request);
        }

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        void ListDevicesAsync(const ListDevicesRequestT& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListDevices, request, handler, context);
        }

        /**
         * <p>Lists the groups associated with a user pool.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListGroups, request, handler, context);
        }

        /**
         * <p>Lists information about all IdPs for a user pool.</p>  <p>Amazon
         * Cognito evaluates Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you must use IAM credentials to
         * authorize requests, and you must grant yourself the corresponding IAM permission
         * in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentityProvidersRequestT = Model::ListIdentityProvidersRequest>
        Model::ListIdentityProvidersOutcomeCallable ListIdentityProvidersCallable(const ListIdentityProvidersRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListIdentityProviders, request);
        }

        /**
         * An Async wrapper for ListIdentityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityProvidersRequestT = Model::ListIdentityProvidersRequest>
        void ListIdentityProvidersAsync(const ListIdentityProvidersRequestT& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListIdentityProviders, request, handler, context);
        }

        /**
         * <p>Lists the resource servers for a user pool.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListResourceServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceServersOutcome ListResourceServers(const Model::ListResourceServersRequest& request) const;

        /**
         * A Callable wrapper for ListResourceServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceServersRequestT = Model::ListResourceServersRequest>
        Model::ListResourceServersOutcomeCallable ListResourceServersCallable(const ListResourceServersRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListResourceServers, request);
        }

        /**
         * An Async wrapper for ListResourceServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceServersRequestT = Model::ListResourceServersRequest>
        void ListResourceServersAsync(const ListResourceServersRequestT& request, const ListResourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListResourceServers, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists user import jobs for a user pool.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserImportJobsOutcome ListUserImportJobs(const Model::ListUserImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListUserImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserImportJobsRequestT = Model::ListUserImportJobsRequest>
        Model::ListUserImportJobsOutcomeCallable ListUserImportJobsCallable(const ListUserImportJobsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListUserImportJobs, request);
        }

        /**
         * An Async wrapper for ListUserImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserImportJobsRequestT = Model::ListUserImportJobsRequest>
        void ListUserImportJobsAsync(const ListUserImportJobsRequestT& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListUserImportJobs, request, handler, context);
        }

        /**
         * <p>Lists the clients that have been created for the specified user pool.</p>
         *  <p>Amazon Cognito evaluates Identity and Access Management (IAM) policies
         * in requests for this API operation. For this operation, you must use IAM
         * credentials to authorize requests, and you must grant yourself the corresponding
         * IAM permission in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolClients">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserPoolClientsOutcome ListUserPoolClients(const Model::ListUserPoolClientsRequest& request) const;

        /**
         * A Callable wrapper for ListUserPoolClients that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserPoolClientsRequestT = Model::ListUserPoolClientsRequest>
        Model::ListUserPoolClientsOutcomeCallable ListUserPoolClientsCallable(const ListUserPoolClientsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListUserPoolClients, request);
        }

        /**
         * An Async wrapper for ListUserPoolClients that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserPoolClientsRequestT = Model::ListUserPoolClientsRequest>
        void ListUserPoolClientsAsync(const ListUserPoolClientsRequestT& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListUserPoolClients, request, handler, context);
        }

        /**
         * <p>Lists the user pools associated with an Amazon Web Services account.</p>
         *  <p>Amazon Cognito evaluates Identity and Access Management (IAM) policies
         * in requests for this API operation. For this operation, you must use IAM
         * credentials to authorize requests, and you must grant yourself the corresponding
         * IAM permission in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserPoolsOutcome ListUserPools(const Model::ListUserPoolsRequest& request) const;

        /**
         * A Callable wrapper for ListUserPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserPoolsRequestT = Model::ListUserPoolsRequest>
        Model::ListUserPoolsOutcomeCallable ListUserPoolsCallable(const ListUserPoolsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListUserPools, request);
        }

        /**
         * An Async wrapper for ListUserPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserPoolsRequestT = Model::ListUserPoolsRequest>
        void ListUserPoolsAsync(const ListUserPoolsRequestT& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListUserPools, request, handler, context);
        }

        /**
         * <p>Lists users and their basic details in a user pool.</p>  <p>Amazon
         * Cognito evaluates Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you must use IAM credentials to
         * authorize requests, and you must grant yourself the corresponding IAM permission
         * in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Lists the users in the specified group.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersInGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersInGroupOutcome ListUsersInGroup(const Model::ListUsersInGroupRequest& request) const;

        /**
         * A Callable wrapper for ListUsersInGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersInGroupRequestT = Model::ListUsersInGroupRequest>
        Model::ListUsersInGroupOutcomeCallable ListUsersInGroupCallable(const ListUsersInGroupRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListUsersInGroup, request);
        }

        /**
         * An Async wrapper for ListUsersInGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersInGroupRequestT = Model::ListUsersInGroupRequest>
        void ListUsersInGroupAsync(const ListUsersInGroupRequestT& request, const ListUsersInGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListUsersInGroup, request, handler, context);
        }

        /**
         * <p>Generates a list of the current user's registered passkey, or webauthN,
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListWebAuthnCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebAuthnCredentialsOutcome ListWebAuthnCredentials(const Model::ListWebAuthnCredentialsRequest& request) const;

        /**
         * A Callable wrapper for ListWebAuthnCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWebAuthnCredentialsRequestT = Model::ListWebAuthnCredentialsRequest>
        Model::ListWebAuthnCredentialsOutcomeCallable ListWebAuthnCredentialsCallable(const ListWebAuthnCredentialsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ListWebAuthnCredentials, request);
        }

        /**
         * An Async wrapper for ListWebAuthnCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWebAuthnCredentialsRequestT = Model::ListWebAuthnCredentialsRequest>
        void ListWebAuthnCredentialsAsync(const ListWebAuthnCredentialsRequestT& request, const ListWebAuthnCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ListWebAuthnCredentials, request, handler, context);
        }

        /**
         * <p>Resends the confirmation (for confirmation of registration) to a specific
         * user in the user pool.</p>  <p>Amazon Cognito doesn't evaluate Identity
         * and Access Management (IAM) policies in requests for this API operation. For
         * this operation, you can't use IAM credentials to authorize requests, and you
         * can't grant IAM permissions in policies. For more information about
         * authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResendConfirmationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::ResendConfirmationCodeOutcome ResendConfirmationCode(const Model::ResendConfirmationCodeRequest& request) const;

        /**
         * A Callable wrapper for ResendConfirmationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResendConfirmationCodeRequestT = Model::ResendConfirmationCodeRequest>
        Model::ResendConfirmationCodeOutcomeCallable ResendConfirmationCodeCallable(const ResendConfirmationCodeRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::ResendConfirmationCode, request);
        }

        /**
         * An Async wrapper for ResendConfirmationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResendConfirmationCodeRequestT = Model::ResendConfirmationCodeRequest>
        void ResendConfirmationCodeAsync(const ResendConfirmationCodeRequestT& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::ResendConfirmationCode, request, handler, context);
        }

        /**
         * <p>Some API operations in a user pool generate a challenge, like a prompt for an
         * MFA code, for device authentication that bypasses MFA, or for a custom
         * authentication challenge. A <code>RespondToAuthChallenge</code> API request
         * provides the answer to that challenge, like a code or a secure remote password
         * (SRP). The parameters of a response to an authentication challenge vary with the
         * type of challenge.</p> <p>For more information about custom authentication
         * challenges, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">Custom
         * authentication challenge Lambda triggers</a>.</p>  <p>Amazon Cognito
         * doesn't evaluate Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you can't use IAM credentials to
         * authorize requests, and you can't grant IAM permissions in policies. For more
         * information about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondToAuthChallengeOutcome RespondToAuthChallenge(const Model::RespondToAuthChallengeRequest& request) const;

        /**
         * A Callable wrapper for RespondToAuthChallenge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RespondToAuthChallengeRequestT = Model::RespondToAuthChallengeRequest>
        Model::RespondToAuthChallengeOutcomeCallable RespondToAuthChallengeCallable(const RespondToAuthChallengeRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::RespondToAuthChallenge, request);
        }

        /**
         * An Async wrapper for RespondToAuthChallenge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RespondToAuthChallengeRequestT = Model::RespondToAuthChallengeRequest>
        void RespondToAuthChallengeAsync(const RespondToAuthChallengeRequestT& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::RespondToAuthChallenge, request, handler, context);
        }

        /**
         * <p>Revokes all of the access tokens generated by, and at the same time as, the
         * specified refresh token. After a token is revoked, you can't use the revoked
         * token to access Amazon Cognito user APIs, or to authorize access to your
         * resource server.</p>  <p>Amazon Cognito doesn't evaluate Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you can't use IAM credentials to authorize requests, and you can't
         * grant IAM permissions in policies. For more information about authorization
         * models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RevokeToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeTokenOutcome RevokeToken(const Model::RevokeTokenRequest& request) const;

        /**
         * A Callable wrapper for RevokeToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeTokenRequestT = Model::RevokeTokenRequest>
        Model::RevokeTokenOutcomeCallable RevokeTokenCallable(const RevokeTokenRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::RevokeToken, request);
        }

        /**
         * An Async wrapper for RevokeToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeTokenRequestT = Model::RevokeTokenRequest>
        void RevokeTokenAsync(const RevokeTokenRequestT& request, const RevokeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::RevokeToken, request, handler, context);
        }

        /**
         * <p>Sets up or modifies the logging configuration of a user pool. User pools can
         * export user notification logs and advanced security features user activity
         * logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetLogDeliveryConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLogDeliveryConfigurationOutcome SetLogDeliveryConfiguration(const Model::SetLogDeliveryConfigurationRequest& request) const;

        /**
         * A Callable wrapper for SetLogDeliveryConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetLogDeliveryConfigurationRequestT = Model::SetLogDeliveryConfigurationRequest>
        Model::SetLogDeliveryConfigurationOutcomeCallable SetLogDeliveryConfigurationCallable(const SetLogDeliveryConfigurationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::SetLogDeliveryConfiguration, request);
        }

        /**
         * An Async wrapper for SetLogDeliveryConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetLogDeliveryConfigurationRequestT = Model::SetLogDeliveryConfigurationRequest>
        void SetLogDeliveryConfigurationAsync(const SetLogDeliveryConfigurationRequestT& request, const SetLogDeliveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::SetLogDeliveryConfiguration, request, handler, context);
        }

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
        template<typename SetRiskConfigurationRequestT = Model::SetRiskConfigurationRequest>
        Model::SetRiskConfigurationOutcomeCallable SetRiskConfigurationCallable(const SetRiskConfigurationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::SetRiskConfiguration, request);
        }

        /**
         * An Async wrapper for SetRiskConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetRiskConfigurationRequestT = Model::SetRiskConfigurationRequest>
        void SetRiskConfigurationAsync(const SetRiskConfigurationRequestT& request, const SetRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::SetRiskConfiguration, request, handler, context);
        }

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
        template<typename SetUICustomizationRequestT = Model::SetUICustomizationRequest>
        Model::SetUICustomizationOutcomeCallable SetUICustomizationCallable(const SetUICustomizationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::SetUICustomization, request);
        }

        /**
         * An Async wrapper for SetUICustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetUICustomizationRequestT = Model::SetUICustomizationRequest>
        void SetUICustomizationAsync(const SetUICustomizationRequestT& request, const SetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::SetUICustomization, request, handler, context);
        }

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
         * Adaptive Authentication for the user pool.</p> <p>This operation doesn't reset
         * an existing TOTP MFA for a user. To register a new TOTP factor for a user, make
         * an <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AssociateSoftwareToken.html">AssociateSoftwareToken</a>
         * request. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-mfa-totp.html">TOTP
         * software token MFA</a>.</p> <p>Authorize this action with a signed-in user's
         * access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserMFAPreference">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserMFAPreferenceOutcome SetUserMFAPreference(const Model::SetUserMFAPreferenceRequest& request) const;

        /**
         * A Callable wrapper for SetUserMFAPreference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetUserMFAPreferenceRequestT = Model::SetUserMFAPreferenceRequest>
        Model::SetUserMFAPreferenceOutcomeCallable SetUserMFAPreferenceCallable(const SetUserMFAPreferenceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::SetUserMFAPreference, request);
        }

        /**
         * An Async wrapper for SetUserMFAPreference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetUserMFAPreferenceRequestT = Model::SetUserMFAPreferenceRequest>
        void SetUserMFAPreferenceAsync(const SetUserMFAPreferenceRequestT& request, const SetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::SetUserMFAPreference, request, handler, context);
        }

        /**
         * <p>Sets the user pool multi-factor authentication (MFA) and passkey
         * configuration.</p>  <p>This action might generate an SMS text message.
         * Starting June 1, 2021, US telecom carriers require you to register an
         * origination phone number before you can send SMS messages to US phone numbers.
         * If you use SMS text messages in Amazon Cognito, you must register a phone number
         * with <a href="https://console.aws.amazon.com/pinpoint/home/">Amazon
         * Pinpoint</a>. Amazon Cognito uses the registered number automatically.
         * Otherwise, Amazon Cognito users who must receive SMS messages might not be able
         * to sign up, activate their accounts, or sign in.</p> <p>If you have never used
         * SMS text messages with Amazon Cognito or any other Amazon Web Services service,
         * Amazon Simple Notification Service might place your account in the SMS sandbox.
         * In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserPoolMfaConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserPoolMfaConfigOutcome SetUserPoolMfaConfig(const Model::SetUserPoolMfaConfigRequest& request) const;

        /**
         * A Callable wrapper for SetUserPoolMfaConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetUserPoolMfaConfigRequestT = Model::SetUserPoolMfaConfigRequest>
        Model::SetUserPoolMfaConfigOutcomeCallable SetUserPoolMfaConfigCallable(const SetUserPoolMfaConfigRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::SetUserPoolMfaConfig, request);
        }

        /**
         * An Async wrapper for SetUserPoolMfaConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetUserPoolMfaConfigRequestT = Model::SetUserPoolMfaConfigRequest>
        void SetUserPoolMfaConfigAsync(const SetUserPoolMfaConfigRequestT& request, const SetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::SetUserPoolMfaConfig, request, handler, context);
        }

        /**
         * <p> <i>This action is no longer supported.</i> You can use it to configure only
         * SMS MFA. You can't use it to configure time-based one-time password (TOTP)
         * software token MFA. To configure either type of MFA, use <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetUserMFAPreference.html">SetUserMFAPreference</a>
         * instead.</p> <p>Authorize this action with a signed-in user's access token. It
         * must include the scope <code>aws.cognito.signin.user.admin</code>.</p> 
         * <p>Amazon Cognito doesn't evaluate Identity and Access Management (IAM) policies
         * in requests for this API operation. For this operation, you can't use IAM
         * credentials to authorize requests, and you can't grant IAM permissions in
         * policies. For more information about authorization models in Amazon Cognito, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUserSettingsOutcome SetUserSettings(const Model::SetUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for SetUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetUserSettingsRequestT = Model::SetUserSettingsRequest>
        Model::SetUserSettingsOutcomeCallable SetUserSettingsCallable(const SetUserSettingsRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::SetUserSettings, request);
        }

        /**
         * An Async wrapper for SetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetUserSettingsRequestT = Model::SetUserSettingsRequest>
        void SetUserSettingsAsync(const SetUserSettingsRequestT& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::SetUserSettings, request, handler, context);
        }

        /**
         * <p>Registers the user in the specified user pool and creates a user name,
         * password, and user attributes.</p>  <p>Amazon Cognito doesn't evaluate
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>You might receive a
         * <code>LimitExceeded</code> exception in response to this request if you have
         * exceeded a rate quota for email or SMS messages, and if your user pool
         * automatically verifies email addresses or phone numbers. When you get this
         * exception in the response, the user is successfully created and is in an
         * <code>UNCONFIRMED</code> state. You can send a new code with the <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ResendConfirmationCode.html">
         * ResendConfirmationCode</a> request, or confirm the user as an administrator with
         * an <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminConfirmSignUp.html">
         * AdminConfirmSignUp</a> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUp">AWS
         * API Reference</a></p>
         */
        virtual Model::SignUpOutcome SignUp(const Model::SignUpRequest& request) const;

        /**
         * A Callable wrapper for SignUp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SignUpRequestT = Model::SignUpRequest>
        Model::SignUpOutcomeCallable SignUpCallable(const SignUpRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::SignUp, request);
        }

        /**
         * An Async wrapper for SignUp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SignUpRequestT = Model::SignUpRequest>
        void SignUpAsync(const SignUpRequestT& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::SignUp, request, handler, context);
        }

        /**
         * <p>Starts the user import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StartUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartUserImportJobOutcome StartUserImportJob(const Model::StartUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartUserImportJobRequestT = Model::StartUserImportJobRequest>
        Model::StartUserImportJobOutcomeCallable StartUserImportJobCallable(const StartUserImportJobRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::StartUserImportJob, request);
        }

        /**
         * An Async wrapper for StartUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartUserImportJobRequestT = Model::StartUserImportJobRequest>
        void StartUserImportJobAsync(const StartUserImportJobRequestT& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::StartUserImportJob, request, handler, context);
        }

        /**
         * <p>Requests credential creation options from your user pool for registration of
         * a passkey authenticator. Returns information about the user pool, the user
         * profile, and authentication requirements. Users must provide this information in
         * their request to enroll your application with their passkey provider.</p>
         * <p>After users present this data and register with their passkey provider,
         * return the response to your user pool in a <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CompleteWebAuthnRegistration.html">
         * CompleteWebAuthnRegistration</a> API request.</p> <p>Authorize this action with
         * a signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StartWebAuthnRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWebAuthnRegistrationOutcome StartWebAuthnRegistration(const Model::StartWebAuthnRegistrationRequest& request) const;

        /**
         * A Callable wrapper for StartWebAuthnRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWebAuthnRegistrationRequestT = Model::StartWebAuthnRegistrationRequest>
        Model::StartWebAuthnRegistrationOutcomeCallable StartWebAuthnRegistrationCallable(const StartWebAuthnRegistrationRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::StartWebAuthnRegistration, request);
        }

        /**
         * An Async wrapper for StartWebAuthnRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWebAuthnRegistrationRequestT = Model::StartWebAuthnRegistrationRequest>
        void StartWebAuthnRegistrationAsync(const StartWebAuthnRegistrationRequestT& request, const StartWebAuthnRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::StartWebAuthnRegistration, request, handler, context);
        }

        /**
         * <p>Stops the user import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StopUserImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopUserImportJobOutcome StopUserImportJob(const Model::StopUserImportJobRequest& request) const;

        /**
         * A Callable wrapper for StopUserImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopUserImportJobRequestT = Model::StopUserImportJobRequest>
        Model::StopUserImportJobOutcomeCallable StopUserImportJobCallable(const StopUserImportJobRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::StopUserImportJob, request);
        }

        /**
         * An Async wrapper for StopUserImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopUserImportJobRequestT = Model::StopUserImportJobRequest>
        void StopUserImportJobAsync(const StopUserImportJobRequestT& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::StopUserImportJob, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Provides the feedback for an authentication event, whether it was from a
         * valid user or not. This feedback is used for improving the risk evaluation
         * decision for the user pool as part of Amazon Cognito advanced security.</p>
         *  <p>Amazon Cognito doesn't evaluate Identity and Access Management (IAM)
         * policies in requests for this API operation. For this operation, you can't use
         * IAM credentials to authorize requests, and you can't grant IAM permissions in
         * policies. For more information about authorization models in Amazon Cognito, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateAuthEventFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthEventFeedbackOutcome UpdateAuthEventFeedback(const Model::UpdateAuthEventFeedbackRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuthEventFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAuthEventFeedbackRequestT = Model::UpdateAuthEventFeedbackRequest>
        Model::UpdateAuthEventFeedbackOutcomeCallable UpdateAuthEventFeedbackCallable(const UpdateAuthEventFeedbackRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateAuthEventFeedback, request);
        }

        /**
         * An Async wrapper for UpdateAuthEventFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAuthEventFeedbackRequestT = Model::UpdateAuthEventFeedbackRequest>
        void UpdateAuthEventFeedbackAsync(const UpdateAuthEventFeedbackRequestT& request, const UpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateAuthEventFeedback, request, handler, context);
        }

        /**
         * <p>Updates the device status. For more information about device authentication,
         * see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
         * with user devices in your user pool</a>.</p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateDeviceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceStatusOutcome UpdateDeviceStatus(const Model::UpdateDeviceStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceStatusRequestT = Model::UpdateDeviceStatusRequest>
        Model::UpdateDeviceStatusOutcomeCallable UpdateDeviceStatusCallable(const UpdateDeviceStatusRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateDeviceStatus, request);
        }

        /**
         * An Async wrapper for UpdateDeviceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceStatusRequestT = Model::UpdateDeviceStatusRequest>
        void UpdateDeviceStatusAsync(const UpdateDeviceStatusRequestT& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateDeviceStatus, request, handler, context);
        }

        /**
         * <p>Updates the specified group with the specified attributes.</p> 
         * <p>Amazon Cognito evaluates Identity and Access Management (IAM) policies in
         * requests for this API operation. For this operation, you must use IAM
         * credentials to authorize requests, and you must grant yourself the corresponding
         * IAM permission in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateGroup, request, handler, context);
        }

        /**
         * <p>Updates IdP information for a user pool.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderOutcome UpdateIdentityProvider(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIdentityProviderRequestT = Model::UpdateIdentityProviderRequest>
        Model::UpdateIdentityProviderOutcomeCallable UpdateIdentityProviderCallable(const UpdateIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateIdentityProvider, request);
        }

        /**
         * An Async wrapper for UpdateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIdentityProviderRequestT = Model::UpdateIdentityProviderRequest>
        void UpdateIdentityProviderAsync(const UpdateIdentityProviderRequestT& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateIdentityProvider, request, handler, context);
        }

        /**
         * <p>Configures the branding settings for a user pool style. This operation is the
         * programmatic option for the configuration of a style in the branding
         * designer.</p> <p>Provides values for UI customization in a <code>Settings</code>
         * JSON object and image files in an <code>Assets</code> array.</p> <p> This
         * operation has a 2-megabyte request-size limit and include the CSS settings and
         * image assets for your app client. Your branding settings might exceed 2MB in
         * size. Amazon Cognito doesn't require that you pass all parameters in one request
         * and preserves existing style settings that you don't specify. If your request is
         * larger than 2MB, separate it into multiple requests, each with a size smaller
         * than the limit. </p> <p>As a best practice, modify the output of <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeManagedLoginBrandingByClient.html">DescribeManagedLoginBrandingByClient</a>
         * into the request parameters for this operation. To get all settings, set
         * <code>ReturnMergedResources</code> to <code>true</code>. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/managed-login-brandingdesigner.html#branding-designer-api">API
         * and SDK operations for managed login branding</a> </p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateManagedLoginBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateManagedLoginBrandingOutcome UpdateManagedLoginBranding(const Model::UpdateManagedLoginBrandingRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateManagedLoginBranding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateManagedLoginBrandingRequestT = Model::UpdateManagedLoginBrandingRequest>
        Model::UpdateManagedLoginBrandingOutcomeCallable UpdateManagedLoginBrandingCallable(const UpdateManagedLoginBrandingRequestT& request = {}) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateManagedLoginBranding, request);
        }

        /**
         * An Async wrapper for UpdateManagedLoginBranding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateManagedLoginBrandingRequestT = Model::UpdateManagedLoginBrandingRequest>
        void UpdateManagedLoginBrandingAsync(const UpdateManagedLoginBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateManagedLoginBrandingRequestT& request = {}) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateManagedLoginBranding, request, handler, context);
        }

        /**
         * <p>Updates the name and scopes of resource server. All other fields are
         * read-only.</p>  <p>If you don't provide a value for an attribute, it
         * is set to the default value.</p>   <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateResourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceServerOutcome UpdateResourceServer(const Model::UpdateResourceServerRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceServerRequestT = Model::UpdateResourceServerRequest>
        Model::UpdateResourceServerOutcomeCallable UpdateResourceServerCallable(const UpdateResourceServerRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateResourceServer, request);
        }

        /**
         * An Async wrapper for UpdateResourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceServerRequestT = Model::UpdateResourceServerRequest>
        void UpdateResourceServerAsync(const UpdateResourceServerRequestT& request, const UpdateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateResourceServer, request, handler, context);
        }

        /**
         * <p>With this operation, your users can update one or more of their attributes
         * with their own credentials. You authorize this API request with the user's
         * access token. To delete an attribute from your user, submit the attribute in
         * your API request with a blank value. Custom attribute values in this request
         * must include the <code>custom:</code> prefix.</p> <p>Authorize this action with
         * a signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p> 
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserAttributesOutcome UpdateUserAttributes(const Model::UpdateUserAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserAttributesRequestT = Model::UpdateUserAttributesRequest>
        Model::UpdateUserAttributesOutcomeCallable UpdateUserAttributesCallable(const UpdateUserAttributesRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateUserAttributes, request);
        }

        /**
         * An Async wrapper for UpdateUserAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserAttributesRequestT = Model::UpdateUserAttributesRequest>
        void UpdateUserAttributesAsync(const UpdateUserAttributesRequestT& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateUserAttributes, request, handler, context);
        }

        /**
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Services service, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Updates the specified user pool with the
         * specified attributes. You can get a list of the current user pool settings using
         * <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>.</p>
         *  <p>If you don't provide a value for an attribute, Amazon Cognito
         * sets it to its default value.</p>   <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolOutcome UpdateUserPool(const Model::UpdateUserPoolRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserPoolRequestT = Model::UpdateUserPoolRequest>
        Model::UpdateUserPoolOutcomeCallable UpdateUserPoolCallable(const UpdateUserPoolRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateUserPool, request);
        }

        /**
         * An Async wrapper for UpdateUserPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserPoolRequestT = Model::UpdateUserPoolRequest>
        void UpdateUserPoolAsync(const UpdateUserPoolRequestT& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateUserPool, request, handler, context);
        }

        /**
         * <p>Updates the specified user pool app client with the specified attributes. You
         * can get a list of the current user pool app client settings using <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPoolClient.html">DescribeUserPoolClient</a>.</p>
         *  <p>If you don't provide a value for an attribute, Amazon Cognito
         * sets it to its default value.</p>  <p>You can also use this
         * operation to enable token revocation for user pool clients. For more information
         * about revoking tokens, see <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p>
         *  <p>Amazon Cognito evaluates Identity and Access Management (IAM) policies
         * in requests for this API operation. For this operation, you must use IAM
         * credentials to authorize requests, and you must grant yourself the corresponding
         * IAM permission in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClient">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolClientOutcome UpdateUserPoolClient(const Model::UpdateUserPoolClientRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPoolClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserPoolClientRequestT = Model::UpdateUserPoolClientRequest>
        Model::UpdateUserPoolClientOutcomeCallable UpdateUserPoolClientCallable(const UpdateUserPoolClientRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateUserPoolClient, request);
        }

        /**
         * An Async wrapper for UpdateUserPoolClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserPoolClientRequestT = Model::UpdateUserPoolClientRequest>
        void UpdateUserPoolClientAsync(const UpdateUserPoolClientRequestT& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateUserPoolClient, request, handler, context);
        }

        /**
         * <p>A user pool domain hosts managed login, an authorization server and web
         * server for authentication in your application. This operation updates the
         * branding version for user pool domains between <code>1</code> for hosted UI
         * (classic) and <code>2</code> for managed login. It also updates the SSL
         * certificate for user pool custom domains.</p> <p>Changes to the domain branding
         * version take up to one minute to take effect for a prefix domain and up to five
         * minutes for a custom domain.</p> <p>This operation doesn't change the name of
         * your user pool domain. To change your domain, delete it with
         * <code>DeleteUserPoolDomain</code> and create a new domain with
         * <code>CreateUserPoolDomain</code>.</p> <p>You can pass the ARN of a new
         * Certificate Manager certificate in this request. Typically, ACM certificates
         * automatically renew and you user pool can continue to use the same ARN. But if
         * you generate a new certificate for your custom domain name, replace the original
         * configuration with the new ARN in this request.</p> <p>ACM certificates for
         * custom domains must be in the US East (N. Virginia) Amazon Web Services Region.
         * After you submit your request, Amazon Cognito requires up to 1 hour to
         * distribute your new certificate to your custom domain.</p> <p>For more
         * information about adding a custom domain to your user pool, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Configuring
         * a user pool domain</a>.</p>  <p>Amazon Cognito evaluates Identity and
         * Access Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-signing.html">Signing
         * Amazon Web Services API Requests</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a> </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPoolDomainOutcome UpdateUserPoolDomain(const Model::UpdateUserPoolDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPoolDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserPoolDomainRequestT = Model::UpdateUserPoolDomainRequest>
        Model::UpdateUserPoolDomainOutcomeCallable UpdateUserPoolDomainCallable(const UpdateUserPoolDomainRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::UpdateUserPoolDomain, request);
        }

        /**
         * An Async wrapper for UpdateUserPoolDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserPoolDomainRequestT = Model::UpdateUserPoolDomainRequest>
        void UpdateUserPoolDomainAsync(const UpdateUserPoolDomainRequestT& request, const UpdateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::UpdateUserPoolDomain, request, handler, context);
        }

        /**
         * <p>Use this API to register a user's entered time-based one-time password (TOTP)
         * code and mark the user's software token MFA status as "verified" if successful.
         * The request takes an access token or a session string, but not both.</p> 
         * <p>Amazon Cognito doesn't evaluate Identity and Access Management (IAM) policies
         * in requests for this API operation. For this operation, you can't use IAM
         * credentials to authorize requests, and you can't grant IAM permissions in
         * policies. For more information about authorization models in Amazon Cognito, see
         * <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifySoftwareToken">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifySoftwareTokenOutcome VerifySoftwareToken(const Model::VerifySoftwareTokenRequest& request) const;

        /**
         * A Callable wrapper for VerifySoftwareToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifySoftwareTokenRequestT = Model::VerifySoftwareTokenRequest>
        Model::VerifySoftwareTokenOutcomeCallable VerifySoftwareTokenCallable(const VerifySoftwareTokenRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::VerifySoftwareToken, request);
        }

        /**
         * An Async wrapper for VerifySoftwareToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifySoftwareTokenRequestT = Model::VerifySoftwareTokenRequest>
        void VerifySoftwareTokenAsync(const VerifySoftwareTokenRequestT& request, const VerifySoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::VerifySoftwareToken, request, handler, context);
        }

        /**
         * <p>Verifies the specified user attributes in the user pool.</p> <p> If your user
         * pool requires verification before Amazon Cognito updates the attribute value,
         * VerifyUserAttribute updates the affected attribute to its pending value. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UserAttributeUpdateSettingsType.html">
         * UserAttributeUpdateSettingsType</a>. </p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pools-API-operations.html">Using
         * the Amazon Cognito user pools API and user pool endpoints</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifyUserAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyUserAttributeOutcome VerifyUserAttribute(const Model::VerifyUserAttributeRequest& request) const;

        /**
         * A Callable wrapper for VerifyUserAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyUserAttributeRequestT = Model::VerifyUserAttributeRequest>
        Model::VerifyUserAttributeOutcomeCallable VerifyUserAttributeCallable(const VerifyUserAttributeRequestT& request) const
        {
            return SubmitCallable(&CognitoIdentityProviderClient::VerifyUserAttribute, request);
        }

        /**
         * An Async wrapper for VerifyUserAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyUserAttributeRequestT = Model::VerifyUserAttributeRequest>
        void VerifyUserAttributeAsync(const VerifyUserAttributeRequestT& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoIdentityProviderClient::VerifyUserAttribute, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CognitoIdentityProviderClient>;
      void init(const CognitoIdentityProviderClientConfiguration& clientConfiguration);

      CognitoIdentityProviderClientConfiguration m_clientConfiguration;
      std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> m_endpointProvider;
  };

} // namespace CognitoIdentityProvider
} // namespace Aws
