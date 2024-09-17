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
   * Web Services SDK for Ruby V3</a> </p> </li> </ul> <p>To get started with an
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
         * <p>Adds additional user attributes to the user pool schema.</p>  <p>Amazon
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
         * <p>This IAM-authenticated API operation confirms user sign-up as an
         * administrator. Unlike <a
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
         * <p><h3>See Also:</h3>   <a
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
         * SMS text messages with Amazon Cognito or any other Amazon Web Servicesservice,
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
         * Cognito won't send any email. </p> <p>In either case, the user will be in the
         * <code>FORCE_CHANGE_PASSWORD</code> state until they sign in and change their
         * password.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
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
         * <p>Deletes a user as an administrator. Works on any user.</p>  <p>Amazon
         * Cognito evaluates Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you must use IAM credentials to
         * authorize requests, and you must grant yourself the corresponding IAM permission
         * in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Deletes the user attributes in a user pool as an administrator. Works on any
         * user.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
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
         * <p>Deactivates a user and revokes all access tokens for the user. A deactivated
         * user can't sign in, but still appears in the responses to <code>GetUser</code>
         * and <code>ListUsers</code> API requests.</p>  <p>Amazon Cognito evaluates
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
         * <p>Enables the specified user as an administrator. Works on any user.</p> 
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
         * <p>Forgets the device, as an administrator.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Gets the device, as an administrator.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Gets the specified user by user name in a user pool as an administrator.
         * Works on any user.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
         * operation, you must use IAM credentials to authorize requests, and you must
         * grant yourself the corresponding IAM permission in a policy.</p> <p
         * class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Initiates the authentication flow, as an administrator.</p>  <p>This
         * action might generate an SMS text message. Starting June 1, 2021, US telecom
         * carriers require you to register an origination phone number before you can send
         * SMS messages to US phone numbers. If you use SMS text messages in Amazon
         * Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * <p>Lists devices, as an administrator.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Lists the groups that a user belongs to.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>A history of user activity and any risks detected as part of Amazon Cognito
         * advanced security.</p>  <p>Amazon Cognito evaluates Identity and Access
         * Management (IAM) policies in requests for this API operation. For this
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
         * <p>Removes the specified user from the specified group.</p>  <p>Amazon
         * Cognito evaluates Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you must use IAM credentials to
         * authorize requests, and you must grant yourself the corresponding IAM permission
         * in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Resets the specified user's password in a user pool as an administrator.
         * Works on any user.</p> <p>To use this API operation, your user pool must have
         * self-service account recovery configured. Use <a
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Deactivates a user's password, requiring
         * them to change it. If a user tries to sign in after the API is called, Amazon
         * Cognito responds with a <code>PasswordResetRequiredException</code> error. Your
         * app must then perform the actions that reset your user's password: the
         * forgot-password flow. In addition, if the user pool has phone verification
         * selected and a verified phone number exists for the user, or if email
         * verification is selected and a verified email exists for the user, calling this
         * API will also result in sending a message to the end user with the code to
         * change their password.</p>  <p>Amazon Cognito evaluates Identity and
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * sign-in.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
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
         * <p>Sets the specified user's password in a user pool as an administrator. Works
         * on any user. </p> <p>The password can be temporary or permanent. If it is
         * temporary, the user status enters the <code>FORCE_CHANGE_PASSWORD</code> state.
         * When the user next tries to sign in, the InitiateAuth/AdminInitiateAuth response
         * will contain the <code>NEW_PASSWORD_REQUIRED</code> challenge. If the user
         * doesn't sign in before it expires, the user won't be able to sign in, and an
         * administrator must reset their password. </p> <p>Once the user has set a new
         * password, or the password is permanent, the user status is set to
         * <code>Confirmed</code>.</p> <p> <code>AdminSetUserPassword</code> can set a
         * password for the user profile that Amazon Cognito creates for third-party
         * federated users. When you set a password, the federated user's status changes
         * from <code>EXTERNAL_PROVIDER</code> to <code>CONFIRMED</code>. A user in this
         * state can sign in as a federated user, and initiate authentication flows in the
         * API like a linked native user. They can also modify their password and
         * attributes in token-authenticated API requests like <code>ChangePassword</code>
         * and <code>UpdateUserAttributes</code>. As a best security practice and to keep
         * users in sync with your external IdP, don't set passwords on federated user
         * profiles. To set up a federated user for native sign-in with a linked native
         * user, refer to <a
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
         * the user pool as part of Amazon Cognito advanced security.</p>  <p>Amazon
         * Cognito evaluates Identity and Access Management (IAM) policies in requests for
         * this API operation. For this operation, you must use IAM credentials to
         * authorize requests, and you must grant yourself the corresponding IAM permission
         * in a policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Updates the device status as an administrator.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Updates the specified user's attributes,
         * including developer attributes, as an administrator. Works on any user. To
         * delete an attribute from your user, submit the attribute in your API request
         * with a blank value.</p> <p>For custom attributes, you must prepend the
         * <code>custom:</code> prefix to the attribute name.</p> <p>In addition to
         * updating user attributes, this API can also be used to mark phone and email as
         * verified.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
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
         * your user signs out of your app. This results in the following behavior. </p>
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
         * until your user's token expires.</p>  <p>Amazon Cognito evaluates Identity
         * and Access Management (IAM) policies in requests for this API operation. For
         * this operation, you must use IAM credentials to authorize requests, and you must
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
         * <p><h3>See Also:</h3>   <a
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
         * <p>Confirms tracking of the device. This API call is the call that begins device
         * tracking. For more information about device authentication, see <a
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
         * <p>Allows a user to enter a confirmation code to reset a forgotten password.</p>
         *  <p>Amazon Cognito doesn't evaluate Identity and Access Management (IAM)
         * policies in requests for this API operation. For this operation, you can't use
         * IAM credentials to authorize requests, and you can't grant IAM permissions in
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
         * <p>This public API operation provides a code that Amazon Cognito sent to your
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
         * <p>Creates a new group in the specified user pool.</p>  <p>Amazon Cognito
         * evaluates Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * provider (IdP) and a user pool.</p>  <p>Amazon Cognito evaluates Identity
         * and Access Management (IAM) policies in requests for this API operation. For
         * this operation, you must use IAM credentials to authorize requests, and you must
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
         * <p>Creates a new OAuth2.0 resource server and defines custom scopes within
         * it.</p>  <p>Amazon Cognito evaluates Identity and Access Management (IAM)
         * policies in requests for this API operation. For this operation, you must use
         * IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
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
         * <p>Creates a user import job.</p>  <p>Amazon Cognito evaluates Identity
         * and Access Management (IAM) policies in requests for this API operation. For
         * this operation, you must use IAM credentials to authorize requests, and you must
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p>  <p>Creates a new Amazon Cognito user pool and
         * sets the password policy for the pool.</p>  <p>If you don't provide a
         * value for an attribute, Amazon Cognito sets it to its default value.</p>
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
         * <p>Creates the user pool client.</p> <p>When you create a new user pool client,
         * token revocation is automatically activated. For more information about revoking
         * tokens, see <a
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
         * <p>Creates a new domain for a user pool.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
         * <p>Deletes a group.</p> <p>Calling this action requires developer
         * credentials.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes an IdP for a user pool.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a resource server.</p><p><h3>See Also:</h3>   <a
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
         * <p>Allows a user to delete their own user profile.</p> <p>Authorize this action
         * with a signed-in user's access token. It must include the scope
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
         * <p>Deletes the attributes for a user.</p> <p>Authorize this action with a
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
         * <p>Deletes the specified Amazon Cognito user pool.</p><p><h3>See Also:</h3>   <a
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
         * <p>Allows the developer to delete the user pool client.</p><p><h3>See Also:</h3>
         * <a
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
         * <p>Deletes a domain for a user pool.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets information about a specific IdP.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes a resource server.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes the risk configuration.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes the user import job.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns the configuration information and metadata of the specified user
         * pool.</p>  <p>Amazon Cognito evaluates Identity and Access Management
         * (IAM) policies in requests for this API operation. For this operation, you must
         * use IAM credentials to authorize requests, and you must grant yourself the
         * corresponding IAM permission in a policy.</p> <p class="title"> <b>Learn
         * more</b> </p> <ul> <li> <p> <a
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
         * <p>Client method for returning the configuration information and metadata of the
         * specified user pool app client.</p>  <p>Amazon Cognito evaluates Identity
         * and Access Management (IAM) policies in requests for this API operation. For
         * this operation, you must use IAM credentials to authorize requests, and you must
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
         * <p>Gets information about a domain.</p><p><h3>See Also:</h3>   <a
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * until your user's token expires.</p> <p>Authorize this action with a signed-in
         * user's access token. It must include the scope
         * <code>aws.cognito.signin.user.admin</code>.</p>  <p>Amazon Cognito doesn't
         * evaluate Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you can't use IAM credentials to authorize
         * requests, and you can't grant IAM permissions in policies. For more information
         * about authorization models in Amazon Cognito, see <a
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * Adaptive Authentication for the user pool.</p> <p>Authorize this action with a
         * signed-in user's access token. It must include the scope
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
         * <p>Sets the user pool multi-factor authentication (MFA) configuration.</p>
         *  <p>This action might generate an SMS text message. Starting June 1, 2021,
         * US telecom carriers require you to register an origination phone number before
         * you can send SMS messages to US phone numbers. If you use SMS text messages in
         * Amazon Cognito, you must register a phone number with <a
         * href="https://console.aws.amazon.com/pinpoint/home/">Amazon Pinpoint</a>. Amazon
         * Cognito uses the registered number automatically. Otherwise, Amazon Cognito
         * users who must receive SMS messages might not be able to sign up, activate their
         * accounts, or sign in.</p> <p>If you have never used SMS text messages with
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
         * Notification Service might place your account in the SMS sandbox. In <i> <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">sandbox
         * mode</a> </i>, you can send messages only to verified phone numbers. After you
         * test your app while in the sandbox environment, you can move out of the sandbox
         * and into production. For more information, see <a
         * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">
         * SMS message settings for Amazon Cognito user pools</a> in the <i>Amazon Cognito
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * Amazon Cognito or any other Amazon Web Servicesservice, Amazon Simple
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
         * Your Own Domain for the Hosted UI</a>.</p>  <p>Amazon Cognito evaluates
         * Identity and Access Management (IAM) policies in requests for this API
         * operation. For this operation, you must use IAM credentials to authorize
         * requests, and you must grant yourself the corresponding IAM permission in a
         * policy.</p> <p class="title"> <b>Learn more</b> </p> <ul> <li> <p> <a
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
