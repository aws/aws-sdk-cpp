/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/SSOErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso/model/GetRoleCredentialsResult.h>
#include <aws/sso/model/ListAccountRolesResult.h>
#include <aws/sso/model/ListAccountsResult.h>
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

namespace SSO
{

namespace Model
{
        class GetRoleCredentialsRequest;
        class ListAccountRolesRequest;
        class ListAccountsRequest;
        class LogoutRequest;

        typedef Aws::Utils::Outcome<GetRoleCredentialsResult, SSOError> GetRoleCredentialsOutcome;
        typedef Aws::Utils::Outcome<ListAccountRolesResult, SSOError> ListAccountRolesOutcome;
        typedef Aws::Utils::Outcome<ListAccountsResult, SSOError> ListAccountsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SSOError> LogoutOutcome;

        typedef std::future<GetRoleCredentialsOutcome> GetRoleCredentialsOutcomeCallable;
        typedef std::future<ListAccountRolesOutcome> ListAccountRolesOutcomeCallable;
        typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
        typedef std::future<LogoutOutcome> LogoutOutcomeCallable;
} // namespace Model

  class SSOClient;

    typedef std::function<void(const SSOClient*, const Model::GetRoleCredentialsRequest&, const Model::GetRoleCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoleCredentialsResponseReceivedHandler;
    typedef std::function<void(const SSOClient*, const Model::ListAccountRolesRequest&, const Model::ListAccountRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountRolesResponseReceivedHandler;
    typedef std::function<void(const SSOClient*, const Model::ListAccountsRequest&, const Model::ListAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsResponseReceivedHandler;
    typedef std::function<void(const SSOClient*, const Model::LogoutRequest&, const Model::LogoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LogoutResponseReceivedHandler;

  /**
   * <p>AWS Single Sign-On Portal is a web service that makes it easy for you to
   * assign user access to AWS SSO resources such as the user portal. Users can get
   * AWS account applications and roles assigned to them and get federated into the
   * application.</p> <p>For general information about AWS SSO, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What
   * is AWS Single Sign-On?</a> in the <i>AWS SSO User Guide</i>.</p> <p>This API
   * reference guide describes the AWS SSO Portal operations that you can call
   * programatically and includes detailed information on data types and errors.</p>
   *  <p>AWS provides SDKs that consist of libraries and sample code for
   * various programming languages and platforms, such as Java, Ruby, .Net, iOS, or
   * Android. The SDKs provide a convenient way to create programmatic access to AWS
   * SSO and other AWS services. For more information about the AWS SDKs, including
   * how to download and install them, see <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * 
   */
  class AWS_SSO_API SSOClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SSOClient();


        /**
         * <p>Returns the STS short-term credentials for a given role name that is assigned
         * to the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/GetRoleCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoleCredentialsOutcome GetRoleCredentials(const Model::GetRoleCredentialsRequest& request) const;

        /**
         * <p>Returns the STS short-term credentials for a given role name that is assigned
         * to the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/GetRoleCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoleCredentialsOutcomeCallable GetRoleCredentialsCallable(const Model::GetRoleCredentialsRequest& request) const;

        /**
         * <p>Returns the STS short-term credentials for a given role name that is assigned
         * to the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/GetRoleCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoleCredentialsAsync(const Model::GetRoleCredentialsRequest& request, const GetRoleCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all roles that are assigned to the user for a given AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccountRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountRolesOutcome ListAccountRoles(const Model::ListAccountRolesRequest& request) const;

        /**
         * <p>Lists all roles that are assigned to the user for a given AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccountRoles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountRolesOutcomeCallable ListAccountRolesCallable(const Model::ListAccountRolesRequest& request) const;

        /**
         * <p>Lists all roles that are assigned to the user for a given AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccountRoles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountRolesAsync(const Model::ListAccountRolesRequest& request, const ListAccountRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all AWS accounts assigned to the user. These AWS accounts are assigned
         * by the administrator of the account. For more information, see <a
         * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/useraccess.html#assignusers">Assign
         * User Access</a> in the <i>AWS SSO User Guide</i>. This operation returns a
         * paginated response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists all AWS accounts assigned to the user. These AWS accounts are assigned
         * by the administrator of the account. For more information, see <a
         * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/useraccess.html#assignusers">Assign
         * User Access</a> in the <i>AWS SSO User Guide</i>. This operation returns a
         * paginated response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountsOutcomeCallable ListAccountsCallable(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists all AWS accounts assigned to the user. These AWS accounts are assigned
         * by the administrator of the account. For more information, see <a
         * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/useraccess.html#assignusers">Assign
         * User Access</a> in the <i>AWS SSO User Guide</i>. This operation returns a
         * paginated response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsAsync(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the client- and server-side session that is associated with the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/Logout">AWS API
         * Reference</a></p>
         */
        virtual Model::LogoutOutcome Logout(const Model::LogoutRequest& request) const;

        /**
         * <p>Removes the client- and server-side session that is associated with the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/Logout">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LogoutOutcomeCallable LogoutCallable(const Model::LogoutRequest& request) const;

        /**
         * <p>Removes the client- and server-side session that is associated with the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/Logout">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LogoutAsync(const Model::LogoutRequest& request, const LogoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetRoleCredentialsAsyncHelper(const Model::GetRoleCredentialsRequest& request, const GetRoleCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountRolesAsyncHelper(const Model::ListAccountRolesRequest& request, const ListAccountRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountsAsyncHelper(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LogoutAsyncHelper(const Model::LogoutRequest& request, const LogoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSO
} // namespace Aws
