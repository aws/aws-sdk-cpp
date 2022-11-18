/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso/SSOServiceClientModel.h>
#include <aws/sso/SSOLegacyAsyncMacros.h>

namespace Aws
{
namespace SSO
{
  /**
   * <p>AWS IAM Identity Center (successor to AWS Single Sign-On) Portal is a web
   * service that makes it easy for you to assign user access to IAM Identity Center
   * resources such as the AWS access portal. Users can get AWS account applications
   * and roles assigned to them and get federated into the application.</p> 
   * <p>Although AWS Single Sign-On was renamed, the <code>sso</code> and
   * <code>identitystore</code> API namespaces will continue to retain their original
   * name for backward compatibility purposes. For more information, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM
   * Identity Center rename</a>.</p>  <p>This reference guide describes the
   * IAM Identity Center Portal operations that you can call programatically and
   * includes detailed information on data types and errors.</p>  <p>AWS
   * provides SDKs that consist of libraries and sample code for various programming
   * languages and platforms, such as Java, Ruby, .Net, iOS, or Android. The SDKs
   * provide a convenient way to create programmatic access to IAM Identity Center
   * and other AWS services. For more information about the AWS SDKs, including how
   * to download and install them, see <a href="http://aws.amazon.com/tools/">Tools
   * for Amazon Web Services</a>.</p> 
   */
  class AWS_SSO_API SSOClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOClient(const Aws::SSO::SSOClientConfiguration& clientConfiguration = Aws::SSO::SSOClientConfiguration(),
                  std::shared_ptr<SSOEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SSOEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SSO::SSOClientConfiguration& clientConfiguration = Aws::SSO::SSOClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SSOEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SSO::SSOClientConfiguration& clientConfiguration = Aws::SSO::SSOClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSOClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Returns the STS short-term credentials for a given role name that is assigned
         * to the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/GetRoleCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoleCredentialsOutcome GetRoleCredentials(const Model::GetRoleCredentialsRequest& request) const;


        /**
         * <p>Lists all roles that are assigned to the user for a given AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccountRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountRolesOutcome ListAccountRoles(const Model::ListAccountRolesRequest& request) const;


        /**
         * <p>Lists all AWS accounts assigned to the user. These AWS accounts are assigned
         * by the administrator of the account. For more information, see <a
         * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/useraccess.html#assignusers">Assign
         * User Access</a> in the <i>IAM Identity Center User Guide</i>. This operation
         * returns a paginated response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;


        /**
         * <p>Removes the locally stored SSO tokens from the client-side cache and sends an
         * API call to the IAM Identity Center service to invalidate the corresponding
         * server-side IAM Identity Center sign in session.</p>  <p>If a user uses
         * IAM Identity Center to access the AWS CLI, the user’s IAM Identity Center sign
         * in session is used to obtain an IAM session, as specified in the corresponding
         * IAM Identity Center permission set. More specifically, IAM Identity Center
         * assumes an IAM role in the target account on behalf of the user, and the
         * corresponding temporary AWS credentials are returned to the client.</p> <p>After
         * user logout, any existing IAM role sessions that were created by using IAM
         * Identity Center permission sets continue based on the duration configured in the
         * permission set. For more information, see <a
         * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/authconcept.html">User
         * authentications</a> in the <i>IAM Identity Center User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/Logout">AWS API
         * Reference</a></p>
         */
        virtual Model::LogoutOutcome Logout(const Model::LogoutRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSOEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SSOClientConfiguration& clientConfiguration);

      SSOClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSOEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSO
} // namespace Aws
