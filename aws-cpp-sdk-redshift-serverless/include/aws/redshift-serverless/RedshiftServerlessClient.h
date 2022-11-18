/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/RedshiftServerlessServiceClientModel.h>
#include <aws/redshift-serverless/RedshiftServerlessLegacyAsyncMacros.h>

namespace Aws
{
namespace RedshiftServerless
{
  /**
   * <p>This is an interface reference for Amazon Redshift Serverless. It contains
   * documentation for one of the programming or command line interfaces you can use
   * to manage Amazon Redshift Serverless. </p> <p>Amazon Redshift Serverless
   * automatically provisions data warehouse capacity and intelligently scales the
   * underlying resources based on workload demands. Amazon Redshift Serverless
   * adjusts capacity in seconds to deliver consistently high performance and
   * simplified operations for even the most demanding and volatile workloads. Amazon
   * Redshift Serverless lets you focus on using your data to acquire new insights
   * for your business and customers. </p> <p> To learn more about Amazon Redshift
   * Serverless, see <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What
   * is Amazon Redshift Serverless</a>. </p>
   */
  class AWS_REDSHIFTSERVERLESS_API RedshiftServerlessClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration(),
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RedshiftServerlessClient();


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
         * <p>Converts a recovery point to a snapshot. For more information about recovery
         * points and snapshots, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html">Working
         * with snapshots and recovery points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ConvertRecoveryPointToSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ConvertRecoveryPointToSnapshotOutcome ConvertRecoveryPointToSnapshot(const Model::ConvertRecoveryPointToSnapshotRequest& request) const;


        /**
         * <p>Creates an Amazon Redshift Serverless managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointAccessOutcome CreateEndpointAccess(const Model::CreateEndpointAccessRequest& request) const;


        /**
         * <p>Creates a namespace in Amazon Redshift Serverless.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest& request) const;


        /**
         * <p>Creates a snapshot of all databases in a namespace. For more information
         * about snapshots, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html">
         * Working with snapshots and recovery points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;


        /**
         * <p>Creates a usage limit for a specified Amazon Redshift Serverless usage type.
         * The usage limit is identified by the returned usage limit identifier.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsageLimitOutcome CreateUsageLimit(const Model::CreateUsageLimitRequest& request) const;


        /**
         * <p>Creates an workgroup in Amazon Redshift Serverless.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkgroupOutcome CreateWorkgroup(const Model::CreateWorkgroupRequest& request) const;


        /**
         * <p>Deletes an Amazon Redshift Serverless managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointAccessOutcome DeleteEndpointAccess(const Model::DeleteEndpointAccessRequest& request) const;


        /**
         * <p>Deletes a namespace from Amazon Redshift Serverless. Before you delete the
         * namespace, you can create a final snapshot that has all of the data within the
         * namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;


        /**
         * <p>Deletes the specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Deletes a snapshot from Amazon Redshift Serverless.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;


        /**
         * <p>Deletes a usage limit from Amazon Redshift Serverless.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageLimitOutcome DeleteUsageLimit(const Model::DeleteUsageLimitRequest& request) const;


        /**
         * <p>Deletes a workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkgroupOutcome DeleteWorkgroup(const Model::DeleteWorkgroupRequest& request) const;


        /**
         * <p>Returns a database user name and temporary password with temporary
         * authorization to log in to Amazon Redshift Serverless.</p> <p>By default, the
         * temporary credentials expire in 900 seconds. You can optionally specify a
         * duration between 900 seconds (15 minutes) and 3600 seconds (60 minutes).</p>
         * <pre><code> &lt;p&gt; The Identity and Access Management (IAM) user or role that
         * runs GetCredentials must have an IAM policy attached that allows access to all
         * necessary actions and resources. &lt;/p&gt; &lt;p&gt; If the
         * &lt;code&gt;DbName&lt;/code&gt; parameter is specified, the IAM policy must
         * allow access to the resource dbname for the specified database name.&lt;/p&gt;
         * </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialsOutcome GetCredentials(const Model::GetCredentialsRequest& request) const;


        /**
         * <p>Returns information, such as the name, about a VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointAccessOutcome GetEndpointAccess(const Model::GetEndpointAccessRequest& request) const;


        /**
         * <p>Returns information about a namespace in Amazon Redshift
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamespaceOutcome GetNamespace(const Model::GetNamespaceRequest& request) const;


        /**
         * <p>Returns information about a recovery point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryPointOutcome GetRecoveryPoint(const Model::GetRecoveryPointRequest& request) const;


        /**
         * <p>Returns a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;


        /**
         * <p>Returns information about a specific snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotOutcome GetSnapshot(const Model::GetSnapshotRequest& request) const;


        /**
         * <p>Returns information about a usage limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageLimitOutcome GetUsageLimit(const Model::GetUsageLimitRequest& request) const;


        /**
         * <p>Returns information about a specific workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkgroupOutcome GetWorkgroup(const Model::GetWorkgroupRequest& request) const;


        /**
         * <p>Returns an array of <code>EndpointAccess</code> objects and relevant
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointAccessOutcome ListEndpointAccess(const Model::ListEndpointAccessRequest& request) const;


        /**
         * <p>Returns information about a list of specified namespaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;


        /**
         * <p>Returns an array of recovery points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListRecoveryPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsOutcome ListRecoveryPoints(const Model::ListRecoveryPointsRequest& request) const;


        /**
         * <p>Returns a list of snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotsOutcome ListSnapshots(const Model::ListSnapshotsRequest& request) const;


        /**
         * <p>Lists the tags assigned to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists all usage limits within Amazon Redshift Serverless.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListUsageLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsageLimitsOutcome ListUsageLimits(const Model::ListUsageLimitsRequest& request) const;


        /**
         * <p>Returns information about a list of specified workgroups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListWorkgroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkgroupsOutcome ListWorkgroups(const Model::ListWorkgroupsRequest& request) const;


        /**
         * <p>Creates or updates a resource policy. Currently, you can use policies to
         * share snapshots across Amazon Web Services accounts.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;


        /**
         * <p>Restore the data from a recovery point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreFromRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromRecoveryPointOutcome RestoreFromRecoveryPoint(const Model::RestoreFromRecoveryPointRequest& request) const;


        /**
         * <p>Restores a namespace from a snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromSnapshotOutcome RestoreFromSnapshot(const Model::RestoreFromSnapshotRequest& request) const;


        /**
         * <p>Assigns one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag or set of tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an Amazon Redshift Serverless managed endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointAccessOutcome UpdateEndpointAccess(const Model::UpdateEndpointAccessRequest& request) const;


        /**
         * <p>Updates a namespace with the specified settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNamespaceOutcome UpdateNamespace(const Model::UpdateNamespaceRequest& request) const;


        /**
         * <p>Updates a snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotOutcome UpdateSnapshot(const Model::UpdateSnapshotRequest& request) const;


        /**
         * <p>Update a usage limit in Amazon Redshift Serverless. You can't update the
         * usage type or period of a usage limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsageLimitOutcome UpdateUsageLimit(const Model::UpdateUsageLimitRequest& request) const;


        /**
         * <p>Updates a workgroup with the specified configuration settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkgroupOutcome UpdateWorkgroup(const Model::UpdateWorkgroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RedshiftServerlessEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const RedshiftServerlessClientConfiguration& clientConfiguration);

      RedshiftServerlessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RedshiftServerlessEndpointProviderBase> m_endpointProvider;
  };

} // namespace RedshiftServerless
} // namespace Aws
