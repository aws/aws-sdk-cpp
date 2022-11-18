/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloud9/Cloud9ServiceClientModel.h>
#include <aws/cloud9/Cloud9LegacyAsyncMacros.h>

namespace Aws
{
namespace Cloud9
{
  /**
   * <fullname>Cloud9</fullname> <p>Cloud9 is a collection of tools that you can use
   * to code, build, run, test, debug, and release software in the cloud.</p> <p>For
   * more information about Cloud9, see the <a
   * href="https://docs.aws.amazon.com/cloud9/latest/user-guide">Cloud9 User
   * Guide</a>.</p> <p>Cloud9 supports these operations:</p> <ul> <li> <p>
   * <code>CreateEnvironmentEC2</code>: Creates an Cloud9 development environment,
   * launches an Amazon EC2 instance, and then connects from the instance to the
   * environment.</p> </li> <li> <p> <code>CreateEnvironmentMembership</code>: Adds
   * an environment member to an environment.</p> </li> <li> <p>
   * <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2
   * instance is connected to the environment, also terminates the instance.</p>
   * </li> <li> <p> <code>DeleteEnvironmentMembership</code>: Deletes an environment
   * member from an environment.</p> </li> <li> <p>
   * <code>DescribeEnvironmentMemberships</code>: Gets information about environment
   * members for an environment.</p> </li> <li> <p>
   * <code>DescribeEnvironments</code>: Gets information about environments.</p>
   * </li> <li> <p> <code>DescribeEnvironmentStatus</code>: Gets status information
   * for an environment.</p> </li> <li> <p> <code>ListEnvironments</code>: Gets a
   * list of environment identifiers.</p> </li> <li> <p>
   * <code>ListTagsForResource</code>: Gets the tags for an environment.</p> </li>
   * <li> <p> <code>TagResource</code>: Adds tags to an environment.</p> </li> <li>
   * <p> <code>UntagResource</code>: Removes tags from an environment.</p> </li> <li>
   * <p> <code>UpdateEnvironment</code>: Changes the settings of an existing
   * environment.</p> </li> <li> <p> <code>UpdateEnvironmentMembership</code>:
   * Changes the settings of an existing environment member for an environment.</p>
   * </li> </ul>
   */
  class AWS_CLOUD9_API Cloud9Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Cloud9::Cloud9ClientConfiguration& clientConfiguration = Aws::Cloud9::Cloud9ClientConfiguration(),
                     std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider = Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider = Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Cloud9::Cloud9ClientConfiguration& clientConfiguration = Aws::Cloud9::Cloud9ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Cloud9Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider = Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Cloud9::Cloud9ClientConfiguration& clientConfiguration = Aws::Cloud9::Cloud9ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Cloud9Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Cloud9Client();


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
         * <p>Creates an Cloud9 development environment, launches an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, and then connects from the instance to the
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentEC2">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentEC2Outcome CreateEnvironmentEC2(const Model::CreateEnvironmentEC2Request& request) const;


        /**
         * <p>Adds an environment member to an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentMembershipOutcome CreateEnvironmentMembership(const Model::CreateEnvironmentMembershipRequest& request) const;


        /**
         * <p>Deletes an Cloud9 development environment. If an Amazon EC2 instance is
         * connected to the environment, also terminates the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;


        /**
         * <p>Deletes an environment member from a development environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentMembershipOutcome DeleteEnvironmentMembership(const Model::DeleteEnvironmentMembershipRequest& request) const;


        /**
         * <p>Gets information about environment members for an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentMembershipsOutcome DescribeEnvironmentMemberships(const Model::DescribeEnvironmentMembershipsRequest& request) const;


        /**
         * <p>Gets status information for an Cloud9 development environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentStatusOutcome DescribeEnvironmentStatus(const Model::DescribeEnvironmentStatusRequest& request) const;


        /**
         * <p>Gets information about Cloud9 development environments.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest& request) const;


        /**
         * <p>Gets a list of Cloud9 development environment identifiers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;


        /**
         * <p>Gets a list of the tags associated with an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds tags to an Cloud9 development environment.</p>  <p>Tags that
         * you add to an Cloud9 environment by using this method will NOT be automatically
         * propagated to underlying resources.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from an Cloud9 development environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Changes the settings of an existing Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;


        /**
         * <p>Changes the settings of an existing environment member for an Cloud9
         * development environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentMembershipOutcome UpdateEnvironmentMembership(const Model::UpdateEnvironmentMembershipRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Cloud9EndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const Cloud9ClientConfiguration& clientConfiguration);

      Cloud9ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Cloud9EndpointProviderBase> m_endpointProvider;
  };

} // namespace Cloud9
} // namespace Aws
