/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-oidc/SSOOIDCServiceClientModel.h>

namespace Aws
{
namespace SSOOIDC
{
  /**
   * <p>AWS IAM Identity Center (successor to AWS Single Sign-On) OpenID Connect
   * (OIDC) is a web service that enables a client (such as AWS CLI or a native
   * application) to register with IAM Identity Center. The service also enables the
   * client to fetch the user’s access token upon successful authentication and
   * authorization with IAM Identity Center.</p>  <p>Although AWS Single
   * Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API
   * namespaces will continue to retain their original name for backward
   * compatibility purposes. For more information, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM
   * Identity Center rename</a>.</p>  <p> <b>Considerations for Using This
   * Guide</b> </p> <p>Before you begin using this guide, we recommend that you first
   * review the following important information about how the IAM Identity Center
   * OIDC service works.</p> <ul> <li> <p>The IAM Identity Center OIDC service
   * currently implements only the portions of the OAuth 2.0 Device Authorization
   * Grant standard (<a
   * href="https://tools.ietf.org/html/rfc8628">https://tools.ietf.org/html/rfc8628</a>)
   * that are necessary to enable single sign-on authentication with the AWS CLI.
   * Support for other OIDC flows frequently needed for native applications, such as
   * Authorization Code Flow (+ PKCE), will be addressed in future releases.</p>
   * </li> <li> <p>The service emits only OIDC access tokens, such that obtaining a
   * new token (For example, token refresh) requires explicit user
   * re-authentication.</p> </li> <li> <p>The access tokens provided by this service
   * grant access to all AWS account entitlements assigned to an IAM Identity Center
   * user, not just a particular application.</p> </li> <li> <p>The documentation in
   * this guide does not describe the mechanism to convert the access token into AWS
   * Auth (“sigv4”) credentials for use with IAM-protected AWS service endpoints. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/PortalAPIReference/API_GetRoleCredentials.html">GetRoleCredentials</a>
   * in the <i>IAM Identity Center Portal API Reference Guide</i>.</p> </li> </ul>
   * <p>For general information about IAM Identity Center, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What
   * is IAM Identity Center?</a> in the <i>IAM Identity Center User Guide</i>.</p>
   */
  class AWS_SSOOIDC_API SSOOIDCClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSOOIDCClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOOIDCClient(const Aws::SSOOIDC::SSOOIDCClientConfiguration& clientConfiguration = Aws::SSOOIDC::SSOOIDCClientConfiguration(),
                      std::shared_ptr<SSOOIDCEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOOIDCEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOOIDCClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<SSOOIDCEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOOIDCEndpointProvider>(ALLOCATION_TAG),
                      const Aws::SSOOIDC::SSOOIDCClientConfiguration& clientConfiguration = Aws::SSOOIDC::SSOOIDCClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOOIDCClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<SSOOIDCEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOOIDCEndpointProvider>(ALLOCATION_TAG),
                      const Aws::SSOOIDC::SSOOIDCClientConfiguration& clientConfiguration = Aws::SSOOIDC::SSOOIDCClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOOIDCClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOOIDCClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOOIDCClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSOOIDCClient();

        /**
         * <p>Creates and returns an access token for the authorized client. The access
         * token issued will be used to fetch short-term credentials for the assigned roles
         * in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/CreateToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTokenOutcome CreateToken(const Model::CreateTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTokenOutcomeCallable CreateTokenCallable(const Model::CreateTokenRequest& request) const;

        /**
         * An Async wrapper for CreateToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTokenAsync(const Model::CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a client with IAM Identity Center. This allows clients to initiate
         * device authorization. The output should be persisted for reuse through many
         * authentication requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/RegisterClient">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterClientOutcome RegisterClient(const Model::RegisterClientRequest& request) const;

        /**
         * A Callable wrapper for RegisterClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterClientOutcomeCallable RegisterClientCallable(const Model::RegisterClientRequest& request) const;

        /**
         * An Async wrapper for RegisterClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterClientAsync(const Model::RegisterClientRequest& request, const RegisterClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates device authorization by requesting a pair of verification codes
         * from the authorization service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/StartDeviceAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeviceAuthorizationOutcome StartDeviceAuthorization(const Model::StartDeviceAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for StartDeviceAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeviceAuthorizationOutcomeCallable StartDeviceAuthorizationCallable(const Model::StartDeviceAuthorizationRequest& request) const;

        /**
         * An Async wrapper for StartDeviceAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeviceAuthorizationAsync(const Model::StartDeviceAuthorizationRequest& request, const StartDeviceAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSOOIDCEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSOOIDCClient>;
      void init(const SSOOIDCClientConfiguration& clientConfiguration);

      SSOOIDCClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSOOIDCEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSOOIDC
} // namespace Aws
