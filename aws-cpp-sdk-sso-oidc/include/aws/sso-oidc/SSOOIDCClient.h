/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-oidc/SSOOIDCServiceClientModel.h>

namespace Aws
{
namespace SSOOIDC
{
  /**
   * <p>AWS Single Sign-On (SSO) OpenID Connect (OIDC) is a web service that enables
   * a client (such as AWS CLI or a native application) to register with AWS SSO. The
   * service also enables the client to fetch the user’s access token upon successful
   * authentication and authorization with AWS SSO. This service conforms with the
   * OAuth 2.0 based implementation of the device authorization grant standard (<a
   * href="https://tools.ietf.org/html/rfc8628">https://tools.ietf.org/html/rfc8628</a>).</p>
   * <p>For general information about AWS SSO, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What
   * is AWS Single Sign-On?</a> in the <i>AWS SSO User Guide</i>.</p> <p>This API
   * reference guide describes the AWS SSO OIDC operations that you can call
   * programatically and includes detailed information on data types and errors.</p>
   *  <p>AWS provides SDKs that consist of libraries and sample code for
   * various programming languages and platforms such as Java, Ruby, .Net, iOS, and
   * Android. The SDKs provide a convenient way to create programmatic access to AWS
   * SSO and other AWS services. For more information about the AWS SDKs, including
   * how to download and install them, see <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * 
   */
  class AWS_SSOOIDC_API SSOOIDCClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOOIDCClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOOIDCClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOOIDCClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Registers a client with AWS SSO. This allows clients to initiate device
         * authorization. The output should be persisted for reuse through many
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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSOOIDC
} // namespace Aws
