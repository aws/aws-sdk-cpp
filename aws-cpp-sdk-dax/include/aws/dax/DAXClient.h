/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dax/DAXServiceClientModel.h>
#include <aws/dax/DAXLegacyAsyncMacros.h>

namespace Aws
{
namespace DAX
{
  /**
   * <p>DAX is a managed caching service engineered for Amazon DynamoDB. DAX
   * dramatically speeds up database reads by caching frequently-accessed data from
   * DynamoDB, so applications can access that data with sub-millisecond latency. You
   * can create a DAX cluster easily, using the AWS Management Console. With a few
   * simple modifications to your code, your application can begin taking advantage
   * of the DAX cluster and realize significant improvements in read performance.</p>
   */
  class AWS_DAX_API DAXClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DAXClient(const Aws::DAX::DAXClientConfiguration& clientConfiguration = Aws::DAX::DAXClientConfiguration(),
                  std::shared_ptr<DAXEndpointProviderBase> endpointProvider = Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DAXClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<DAXEndpointProviderBase> endpointProvider = Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG),
                  const Aws::DAX::DAXClientConfiguration& clientConfiguration = Aws::DAX::DAXClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DAXClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<DAXEndpointProviderBase> endpointProvider = Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG),
                  const Aws::DAX::DAXClientConfiguration& clientConfiguration = Aws::DAX::DAXClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DAXClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DAXClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DAXClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DAXClient();


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
         * <p>Creates a DAX cluster. All nodes in the cluster run the same DAX caching
         * software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;


        /**
         * <p>Creates a new parameter group. A parameter group is a collection of
         * parameters that you apply to all of the nodes in a DAX cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/CreateParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParameterGroupOutcome CreateParameterGroup(const Model::CreateParameterGroupRequest& request) const;


        /**
         * <p>Creates a new subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/CreateSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubnetGroupOutcome CreateSubnetGroup(const Model::CreateSubnetGroupRequest& request) const;


        /**
         * <p>Removes one or more nodes from a DAX cluster.</p>  <p>You cannot use
         * <code>DecreaseReplicationFactor</code> to remove the last node in a DAX cluster.
         * If you need to do this, use <code>DeleteCluster</code> instead.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DecreaseReplicationFactor">AWS
         * API Reference</a></p>
         */
        virtual Model::DecreaseReplicationFactorOutcome DecreaseReplicationFactor(const Model::DecreaseReplicationFactorRequest& request) const;


        /**
         * <p>Deletes a previously provisioned DAX cluster. <i>DeleteCluster</i> deletes
         * all associated nodes, node endpoints and the DAX cluster itself. When you
         * receive a successful response from this action, DAX immediately begins deleting
         * the cluster; you cannot cancel or revert this action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;


        /**
         * <p>Deletes the specified parameter group. You cannot delete a parameter group if
         * it is associated with any DAX clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DeleteParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterGroupOutcome DeleteParameterGroup(const Model::DeleteParameterGroupRequest& request) const;


        /**
         * <p>Deletes a subnet group.</p>  <p>You cannot delete a subnet group if it
         * is associated with any DAX clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DeleteSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetGroupOutcome DeleteSubnetGroup(const Model::DeleteSubnetGroupRequest& request) const;


        /**
         * <p>Returns information about all provisioned DAX clusters if no cluster
         * identifier is specified, or about a specific DAX cluster if a cluster identifier
         * is supplied.</p> <p>If the cluster is in the CREATING state, only cluster level
         * information will be displayed until all of the nodes are successfully
         * provisioned.</p> <p>If the cluster is in the DELETING state, only cluster level
         * information will be displayed.</p> <p>If nodes are currently being added to the
         * DAX cluster, node endpoint information and creation time for the additional
         * nodes will not be displayed until they are completely provisioned. When the DAX
         * cluster state is <i>available</i>, the cluster is ready for use.</p> <p>If nodes
         * are currently being removed from the DAX cluster, no endpoint information for
         * the removed nodes is displayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;


        /**
         * <p>Returns the default system parameter information for the DAX caching
         * software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDefaultParametersOutcome DescribeDefaultParameters(const Model::DescribeDefaultParametersRequest& request) const;


        /**
         * <p>Returns events related to DAX clusters and parameter groups. You can obtain
         * events specific to a particular DAX cluster or parameter group by providing the
         * name as a parameter.</p> <p>By default, only the events occurring within the
         * last 24 hours are returned; however, you can retrieve up to 14 days' worth of
         * events if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;


        /**
         * <p>Returns a list of parameter group descriptions. If a parameter group name is
         * specified, the list will contain only the descriptions for that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParameterGroupsOutcome DescribeParameterGroups(const Model::DescribeParameterGroupsRequest& request) const;


        /**
         * <p>Returns the detailed parameter list for a particular parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;


        /**
         * <p>Returns a list of subnet group descriptions. If a subnet group name is
         * specified, the list will contain only the description of that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubnetGroupsOutcome DescribeSubnetGroups(const Model::DescribeSubnetGroupsRequest& request) const;


        /**
         * <p>Adds one or more nodes to a DAX cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/IncreaseReplicationFactor">AWS
         * API Reference</a></p>
         */
        virtual Model::IncreaseReplicationFactorOutcome IncreaseReplicationFactor(const Model::IncreaseReplicationFactorRequest& request) const;


        /**
         * <p>List all of the tags for a DAX cluster. You can call <code>ListTags</code> up
         * to 10 times per second, per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;


        /**
         * <p>Reboots a single node of a DAX cluster. The reboot action takes place as soon
         * as possible. During the reboot, the node status is set to REBOOTING.</p> 
         * <p> <code>RebootNode</code> restarts the DAX engine process and does not remove
         * the contents of the cache. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/RebootNode">AWS API
         * Reference</a></p>
         */
        virtual Model::RebootNodeOutcome RebootNode(const Model::RebootNodeRequest& request) const;


        /**
         * <p>Associates a set of tags with a DAX resource. You can call
         * <code>TagResource</code> up to 5 times per second, per account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the association of tags from a DAX resource. You can call
         * <code>UntagResource</code> up to 5 times per second, per account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Modifies the settings for a DAX cluster. You can use this action to change
         * one or more cluster configuration parameters by specifying the parameters and
         * the new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;


        /**
         * <p>Modifies the parameters of a parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UpdateParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParameterGroupOutcome UpdateParameterGroup(const Model::UpdateParameterGroupRequest& request) const;


        /**
         * <p>Modifies an existing subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UpdateSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubnetGroupOutcome UpdateSubnetGroup(const Model::UpdateSubnetGroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DAXEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DAXClientConfiguration& clientConfiguration);

      DAXClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DAXEndpointProviderBase> m_endpointProvider;
  };

} // namespace DAX
} // namespace Aws
