/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/SSOOIDCErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-oidc/model/CreateTokenResult.h>
#include <aws/sso-oidc/model/RegisterClientResult.h>
#include <aws/sso-oidc/model/StartDeviceAuthorizationResult.h>
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

namespace SSOOIDC
{

namespace Model
{
        class CreateTokenRequest;
        class RegisterClientRequest;
        class StartDeviceAuthorizationRequest;

        typedef Aws::Utils::Outcome<CreateTokenResult, SSOOIDCError> CreateTokenOutcome;
        typedef Aws::Utils::Outcome<RegisterClientResult, SSOOIDCError> RegisterClientOutcome;
        typedef Aws::Utils::Outcome<StartDeviceAuthorizationResult, SSOOIDCError> StartDeviceAuthorizationOutcome;

        typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
        typedef std::future<RegisterClientOutcome> RegisterClientOutcomeCallable;
        typedef std::future<StartDeviceAuthorizationOutcome> StartDeviceAuthorizationOutcomeCallable;
} // namespace Model

  class SSOOIDCClient;

    typedef std::function<void(const SSOOIDCClient*, const Model::CreateTokenRequest&, const Model::CreateTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTokenResponseReceivedHandler;
    typedef std::function<void(const SSOOIDCClient*, const Model::RegisterClientRequest&, const Model::RegisterClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterClientResponseReceivedHandler;
    typedef std::function<void(const SSOOIDCClient*, const Model::StartDeviceAuthorizationRequest&, const Model::StartDeviceAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeviceAuthorizationResponseReceivedHandler;

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
        SSOOIDCClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Creates and returns an access token for the authorized client. The access
         * token issued will be used to fetch short-term credentials for the assigned roles
         * in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/CreateToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTokenOutcomeCallable CreateTokenCallable(const Model::CreateTokenRequest& request) const;

        /**
         * <p>Creates and returns an access token for the authorized client. The access
         * token issued will be used to fetch short-term credentials for the assigned roles
         * in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/CreateToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Registers a client with AWS SSO. This allows clients to initiate device
         * authorization. The output should be persisted for reuse through many
         * authentication requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/RegisterClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterClientOutcomeCallable RegisterClientCallable(const Model::RegisterClientRequest& request) const;

        /**
         * <p>Registers a client with AWS SSO. This allows clients to initiate device
         * authorization. The output should be persisted for reuse through many
         * authentication requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/RegisterClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Initiates device authorization by requesting a pair of verification codes
         * from the authorization service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/StartDeviceAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeviceAuthorizationOutcomeCallable StartDeviceAuthorizationCallable(const Model::StartDeviceAuthorizationRequest& request) const;

        /**
         * <p>Initiates device authorization by requesting a pair of verification codes
         * from the authorization service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/StartDeviceAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeviceAuthorizationAsync(const Model::StartDeviceAuthorizationRequest& request, const StartDeviceAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateTokenAsyncHelper(const Model::CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterClientAsyncHelper(const Model::RegisterClientRequest& request, const RegisterClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDeviceAuthorizationAsyncHelper(const Model::StartDeviceAuthorizationRequest& request, const StartDeviceAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSOOIDC
} // namespace Aws
