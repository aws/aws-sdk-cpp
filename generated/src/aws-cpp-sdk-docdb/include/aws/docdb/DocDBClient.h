/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/docdb/DocDBServiceClientModel.h>

namespace Aws
{
namespace DocDB
{
  /**
   * <p>Amazon DocumentDB is a fast, reliable, and fully managed database service.
   * Amazon DocumentDB makes it easy to set up, operate, and scale MongoDB-compatible
   * databases in the cloud. With Amazon DocumentDB, you can run the same application
   * code and use the same drivers and tools that you use with MongoDB.</p>
   */
  class AWS_DOCDB_API DocDBClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<DocDBClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DocDBClientConfiguration ClientConfigurationType;
      typedef DocDBEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBClient(const Aws::DocDB::DocDBClientConfiguration& clientConfiguration = Aws::DocDB::DocDBClientConfiguration(),
                    std::shared_ptr<DocDBEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<DocDBEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::DocDB::DocDBClientConfiguration& clientConfiguration = Aws::DocDB::DocDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DocDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<DocDBEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::DocDB::DocDBClientConfiguration& clientConfiguration = Aws::DocDB::DocDBClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DocDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DocDBClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds a source identifier to an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcome AddSourceIdentifierToSubscription(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for AddSourceIdentifierToSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddSourceIdentifierToSubscriptionRequestT = Model::AddSourceIdentifierToSubscriptionRequest>
        Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::AddSourceIdentifierToSubscription, request);
        }

        /**
         * An Async wrapper for AddSourceIdentifierToSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddSourceIdentifierToSubscriptionRequestT = Model::AddSourceIdentifierToSubscriptionRequest>
        void AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequestT& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::AddSourceIdentifierToSubscription, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to an Amazon DocumentDB resource. You can use these tags
         * with cost allocation reporting to track costs that are associated with Amazon
         * DocumentDB resources or in a <code>Condition</code> statement in an Identity and
         * Access Management (IAM) policy for Amazon DocumentDB.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::AddTagsToResource, request, handler, context);
        }

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to an Amazon
         * DocumentDB instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * A Callable wrapper for ApplyPendingMaintenanceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ApplyPendingMaintenanceAction, request);
        }

        /**
         * An Async wrapper for ApplyPendingMaintenanceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        void ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequestT& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ApplyPendingMaintenanceAction, request, handler, context);
        }

        /**
         * <p>Copies the specified cluster parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterParameterGroupOutcome CopyDBClusterParameterGroup(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBClusterParameterGroupRequestT = Model::CopyDBClusterParameterGroupRequest>
        Model::CopyDBClusterParameterGroupOutcomeCallable CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CopyDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for CopyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBClusterParameterGroupRequestT = Model::CopyDBClusterParameterGroupRequest>
        void CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequestT& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CopyDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Copies a snapshot of a cluster.</p> <p>To copy a cluster snapshot from a
         * shared manual cluster snapshot, <code>SourceDBClusterSnapshotIdentifier</code>
         * must be the Amazon Resource Name (ARN) of the shared cluster snapshot. You can
         * only copy a shared DB cluster snapshot, whether encrypted or not, in the same
         * Amazon Web Services Region.</p> <p>To cancel the copy operation after it is in
         * progress, delete the target cluster snapshot identified by
         * <code>TargetDBClusterSnapshotIdentifier</code> while that cluster snapshot is in
         * the <i>copying</i> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterSnapshotOutcome CopyDBClusterSnapshot(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopyDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBClusterSnapshotRequestT = Model::CopyDBClusterSnapshotRequest>
        Model::CopyDBClusterSnapshotOutcomeCallable CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CopyDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for CopyDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBClusterSnapshotRequestT = Model::CopyDBClusterSnapshotRequest>
        void CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequestT& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CopyDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon DocumentDB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterRequestT = Model::CreateDBClusterRequest>
        Model::CreateDBClusterOutcomeCallable CreateDBClusterCallable(const CreateDBClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CreateDBCluster, request);
        }

        /**
         * An Async wrapper for CreateDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterRequestT = Model::CreateDBClusterRequest>
        void CreateDBClusterAsync(const CreateDBClusterRequestT& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CreateDBCluster, request, handler, context);
        }

        /**
         * <p>Creates a new cluster parameter group.</p> <p>Parameters in a cluster
         * parameter group apply to all of the instances in a cluster.</p> <p>A cluster
         * parameter group is initially created with the default parameters for the
         * database engine used by instances in the cluster. In Amazon DocumentDB, you
         * cannot make modifications directly to the <code>default.docdb3.6</code> cluster
         * parameter group. If your Amazon DocumentDB cluster is using the default cluster
         * parameter group and you want to modify a value in it, you must first <a
         * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/cluster_parameter_group-create.html">
         * create a new parameter group</a> or <a
         * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/cluster_parameter_group-copy.html">
         * copy an existing parameter group</a>, modify it, and then apply the modified
         * parameter group to your cluster. For the new cluster parameter group and
         * associated settings to take effect, you must then reboot the instances in the
         * cluster without failover. For more information, see <a
         * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/cluster_parameter_group-modify.html">
         * Modifying Amazon DocumentDB Cluster Parameter Groups</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterParameterGroupOutcome CreateDBClusterParameterGroup(const Model::CreateDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterParameterGroupRequestT = Model::CreateDBClusterParameterGroupRequest>
        Model::CreateDBClusterParameterGroupOutcomeCallable CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CreateDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for CreateDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterParameterGroupRequestT = Model::CreateDBClusterParameterGroupRequest>
        void CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequestT& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CreateDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterSnapshotRequestT = Model::CreateDBClusterSnapshotRequest>
        Model::CreateDBClusterSnapshotOutcomeCallable CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CreateDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for CreateDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterSnapshotRequestT = Model::CreateDBClusterSnapshotRequest>
        void CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequestT& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CreateDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a new instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBInstanceRequestT = Model::CreateDBInstanceRequest>
        Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const CreateDBInstanceRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CreateDBInstance, request);
        }

        /**
         * An Async wrapper for CreateDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBInstanceRequestT = Model::CreateDBInstanceRequest>
        void CreateDBInstanceAsync(const CreateDBInstanceRequestT& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CreateDBInstance, request, handler, context);
        }

        /**
         * <p>Creates a new subnet group. subnet groups must contain at least one subnet in
         * at least two Availability Zones in the Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBSubnetGroupRequestT = Model::CreateDBSubnetGroupRequest>
        Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CreateDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for CreateDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBSubnetGroupRequestT = Model::CreateDBSubnetGroupRequest>
        void CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequestT& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CreateDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Creates an Amazon DocumentDB event notification subscription. This action
         * requires a topic Amazon Resource Name (ARN) created by using the Amazon
         * DocumentDB console, the Amazon SNS console, or the Amazon SNS API. To obtain an
         * ARN with Amazon SNS, you must create a topic in Amazon SNS and subscribe to the
         * topic. The ARN is displayed in the Amazon SNS console.</p> <p>You can specify
         * the type of source (<code>SourceType</code>) that you want to be notified of.
         * You can also provide a list of Amazon DocumentDB sources
         * (<code>SourceIds</code>) that trigger the events, and you can provide a list of
         * event categories (<code>EventCategories</code>) for events that you want to be
         * notified of. For example, you can specify <code>SourceType = db-instance</code>,
         * <code>SourceIds = mydbinstance1, mydbinstance2</code> and <code>EventCategories
         * = Availability, Backup</code>.</p> <p>If you specify both the
         * <code>SourceType</code> and <code>SourceIds</code> (such as <code>SourceType =
         * db-instance</code> and <code>SourceIdentifier = myDBInstance1</code>), you are
         * notified of all the <code>db-instance</code> events for the specified source. If
         * you specify a <code>SourceType</code> but do not specify a
         * <code>SourceIdentifier</code>, you receive notice of the events for that source
         * type for all your Amazon DocumentDB sources. If you do not specify either the
         * <code>SourceType</code> or the <code>SourceIdentifier</code>, you are notified
         * of events generated from all Amazon DocumentDB sources belonging to your
         * customer account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const CreateEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CreateEventSubscription, request);
        }

        /**
         * An Async wrapper for CreateEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        void CreateEventSubscriptionAsync(const CreateEventSubscriptionRequestT& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CreateEventSubscription, request, handler, context);
        }

        /**
         * <p>Creates an Amazon DocumentDB global cluster that can span multiple multiple
         * Amazon Web Services Regions. The global cluster contains one primary cluster
         * with read-write capability, and up-to give read-only secondary clusters. Global
         * clusters uses storage-based fast replication across regions with latencies less
         * than one second, using dedicated infrastructure with no impact to your
         * workload’s performance.</p> <p/> <p>You can create a global cluster that is
         * initially empty, and then add a primary and a secondary to it. Or you can
         * specify an existing cluster during the create operation, and this cluster
         * becomes the primary of the global cluster. </p>  <p>This action only
         * applies to Amazon DocumentDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalClusterOutcome CreateGlobalCluster(const Model::CreateGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlobalClusterRequestT = Model::CreateGlobalClusterRequest>
        Model::CreateGlobalClusterOutcomeCallable CreateGlobalClusterCallable(const CreateGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::CreateGlobalCluster, request);
        }

        /**
         * An Async wrapper for CreateGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlobalClusterRequestT = Model::CreateGlobalClusterRequest>
        void CreateGlobalClusterAsync(const CreateGlobalClusterRequestT& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::CreateGlobalCluster, request, handler, context);
        }

        /**
         * <p>Deletes a previously provisioned cluster. When you delete a cluster, all
         * automated backups for that cluster are deleted and can't be recovered. Manual DB
         * cluster snapshots of the specified cluster are not deleted.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterOutcome DeleteDBCluster(const Model::DeleteDBClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterRequestT = Model::DeleteDBClusterRequest>
        Model::DeleteDBClusterOutcomeCallable DeleteDBClusterCallable(const DeleteDBClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DeleteDBCluster, request);
        }

        /**
         * An Async wrapper for DeleteDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterRequestT = Model::DeleteDBClusterRequest>
        void DeleteDBClusterAsync(const DeleteDBClusterRequestT& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DeleteDBCluster, request, handler, context);
        }

        /**
         * <p>Deletes a specified cluster parameter group. The cluster parameter group to
         * be deleted can't be associated with any clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterParameterGroupOutcome DeleteDBClusterParameterGroup(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterParameterGroupRequestT = Model::DeleteDBClusterParameterGroupRequest>
        Model::DeleteDBClusterParameterGroupOutcomeCallable DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DeleteDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterParameterGroupRequestT = Model::DeleteDBClusterParameterGroupRequest>
        void DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequestT& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DeleteDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Deletes a cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterSnapshotOutcome DeleteDBClusterSnapshot(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterSnapshotRequestT = Model::DeleteDBClusterSnapshotRequest>
        Model::DeleteDBClusterSnapshotOutcomeCallable DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DeleteDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterSnapshotRequestT = Model::DeleteDBClusterSnapshotRequest>
        void DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequestT& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DeleteDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes a previously provisioned instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBInstanceRequestT = Model::DeleteDBInstanceRequest>
        Model::DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const DeleteDBInstanceRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DeleteDBInstance, request);
        }

        /**
         * An Async wrapper for DeleteDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBInstanceRequestT = Model::DeleteDBInstanceRequest>
        void DeleteDBInstanceAsync(const DeleteDBInstanceRequestT& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DeleteDBInstance, request, handler, context);
        }

        /**
         * <p>Deletes a subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBSubnetGroupRequestT = Model::DeleteDBSubnetGroupRequest>
        Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DeleteDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBSubnetGroupRequestT = Model::DeleteDBSubnetGroupRequest>
        void DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequestT& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DeleteDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon DocumentDB event notification subscription.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DeleteEventSubscription, request);
        }

        /**
         * An Async wrapper for DeleteEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        void DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequestT& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DeleteEventSubscription, request, handler, context);
        }

        /**
         * <p>Deletes a global cluster. The primary and secondary clusters must already be
         * detached or deleted before attempting to delete a global cluster.</p> 
         * <p>This action only applies to Amazon DocumentDB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalClusterOutcome DeleteGlobalCluster(const Model::DeleteGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGlobalClusterRequestT = Model::DeleteGlobalClusterRequest>
        Model::DeleteGlobalClusterOutcomeCallable DeleteGlobalClusterCallable(const DeleteGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DeleteGlobalCluster, request);
        }

        /**
         * An Async wrapper for DeleteGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGlobalClusterRequestT = Model::DeleteGlobalClusterRequest>
        void DeleteGlobalClusterAsync(const DeleteGlobalClusterRequestT& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DeleteGlobalCluster, request, handler, context);
        }

        /**
         * <p>Returns a list of certificate authority (CA) certificates provided by Amazon
         * DocumentDB for this Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCertificatesRequestT = Model::DescribeCertificatesRequest>
        Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const DescribeCertificatesRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeCertificates, request);
        }

        /**
         * An Async wrapper for DescribeCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCertificatesRequestT = Model::DescribeCertificatesRequest>
        void DescribeCertificatesAsync(const DescribeCertificatesRequestT& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeCertificates, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list
         * contains only the description of the specified cluster parameter group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcome DescribeDBClusterParameterGroups(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterParameterGroupsRequestT = Model::DescribeDBClusterParameterGroupsRequest>
        Model::DescribeDBClusterParameterGroupsOutcomeCallable DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBClusterParameterGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterParameterGroupsRequestT = Model::DescribeDBClusterParameterGroupsRequest>
        void DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequestT& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBClusterParameterGroups, request, handler, context);
        }

        /**
         * <p>Returns the detailed parameter list for a particular cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParametersOutcome DescribeDBClusterParameters(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterParametersRequestT = Model::DescribeDBClusterParametersRequest>
        Model::DescribeDBClusterParametersOutcomeCallable DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBClusterParameters, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterParametersRequestT = Model::DescribeDBClusterParametersRequest>
        void DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequestT& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBClusterParameters, request, handler, context);
        }

        /**
         * <p>Returns a list of cluster snapshot attribute names and values for a manual DB
         * cluster snapshot.</p> <p>When you share snapshots with other Amazon Web Services
         * accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the Amazon Web Services
         * accounts that are authorized to copy or restore the manual cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual cluster snapshot is public and can be copied or
         * restored by all Amazon Web Services accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotAttributesOutcome DescribeDBClusterSnapshotAttributes(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterSnapshotAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterSnapshotAttributesRequestT = Model::DescribeDBClusterSnapshotAttributesRequest>
        Model::DescribeDBClusterSnapshotAttributesOutcomeCallable DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBClusterSnapshotAttributes, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterSnapshotAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterSnapshotAttributesRequestT = Model::DescribeDBClusterSnapshotAttributesRequest>
        void DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequestT& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBClusterSnapshotAttributes, request, handler, context);
        }

        /**
         * <p>Returns information about cluster snapshots. This API operation supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotsOutcome DescribeDBClusterSnapshots(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterSnapshotsRequestT = Model::DescribeDBClusterSnapshotsRequest>
        Model::DescribeDBClusterSnapshotsOutcomeCallable DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBClusterSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterSnapshotsRequestT = Model::DescribeDBClusterSnapshotsRequest>
        void DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequestT& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBClusterSnapshots, request, handler, context);
        }

        /**
         * <p>Returns information about provisioned Amazon DocumentDB clusters. This API
         * operation supports pagination. For certain management features such as cluster
         * and instance lifecycle management, Amazon DocumentDB leverages operational
         * technology that is shared with Amazon RDS and Amazon Neptune. Use the
         * <code>filterName=engine,Values=docdb</code> filter parameter to return only
         * Amazon DocumentDB clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClustersOutcome DescribeDBClusters(const Model::DescribeDBClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClustersRequestT = Model::DescribeDBClustersRequest>
        Model::DescribeDBClustersOutcomeCallable DescribeDBClustersCallable(const DescribeDBClustersRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBClusters, request);
        }

        /**
         * An Async wrapper for DescribeDBClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClustersRequestT = Model::DescribeDBClustersRequest>
        void DescribeDBClustersAsync(const DescribeDBClustersRequestT& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of the available engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBEngineVersionsRequestT = Model::DescribeDBEngineVersionsRequest>
        Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBEngineVersions, request);
        }

        /**
         * An Async wrapper for DescribeDBEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBEngineVersionsRequestT = Model::DescribeDBEngineVersionsRequest>
        void DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequestT& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBEngineVersions, request, handler, context);
        }

        /**
         * <p>Returns information about provisioned Amazon DocumentDB instances. This API
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBInstancesRequestT = Model::DescribeDBInstancesRequest>
        Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const DescribeDBInstancesRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBInstances, request);
        }

        /**
         * An Async wrapper for DescribeDBInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBInstancesRequestT = Model::DescribeDBInstancesRequest>
        void DescribeDBInstancesAsync(const DescribeDBInstancesRequestT& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBInstances, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DBSubnetGroup</code> descriptions. If a
         * <code>DBSubnetGroupName</code> is specified, the list will contain only the
         * descriptions of the specified <code>DBSubnetGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSubnetGroupsOutcome DescribeDBSubnetGroups(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBSubnetGroupsRequestT = Model::DescribeDBSubnetGroupsRequest>
        Model::DescribeDBSubnetGroupsOutcomeCallable DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeDBSubnetGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBSubnetGroupsRequestT = Model::DescribeDBSubnetGroupsRequest>
        void DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequestT& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeDBSubnetGroups, request, handler, context);
        }

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcome DescribeEngineDefaultClusterParameters(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineDefaultClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngineDefaultClusterParametersRequestT = Model::DescribeEngineDefaultClusterParametersRequest>
        Model::DescribeEngineDefaultClusterParametersOutcomeCallable DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeEngineDefaultClusterParameters, request);
        }

        /**
         * An Async wrapper for DescribeEngineDefaultClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngineDefaultClusterParametersRequestT = Model::DescribeEngineDefaultClusterParametersRequest>
        void DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequestT& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeEngineDefaultClusterParameters, request, handler, context);
        }

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const DescribeEventCategoriesRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeEventCategories, request);
        }

        /**
         * An Async wrapper for DescribeEventCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        void DescribeEventCategoriesAsync(const DescribeEventCategoriesRequestT& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeEventCategories, request, handler, context);
        }

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes <code>SubscriptionName</code>,
         * <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
         * <code>SourceID</code>, <code>CreationTime</code>, and <code>Status</code>.</p>
         * <p>If you specify a <code>SubscriptionName</code>, lists the description for
         * that subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeEventSubscriptions, request);
        }

        /**
         * An Async wrapper for DescribeEventSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        void DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequestT& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeEventSubscriptions, request, handler, context);
        }

        /**
         * <p>Returns events related to instances, security groups, snapshots, and DB
         * parameter groups for the past 14 days. You can obtain events specific to a
         * particular DB instance, security group, snapshot, or parameter group by
         * providing the name as a parameter. By default, the events of the past hour are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const DescribeEventsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeEvents, request);
        }

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        void DescribeEventsAsync(const DescribeEventsRequestT& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeEvents, request, handler, context);
        }

        /**
         * <p>Returns information about Amazon DocumentDB global clusters. This API
         * supports pagination.</p>  <p>This action only applies to Amazon DocumentDB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeGlobalClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalClustersOutcome DescribeGlobalClusters(const Model::DescribeGlobalClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGlobalClustersRequestT = Model::DescribeGlobalClustersRequest>
        Model::DescribeGlobalClustersOutcomeCallable DescribeGlobalClustersCallable(const DescribeGlobalClustersRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeGlobalClusters, request);
        }

        /**
         * An Async wrapper for DescribeGlobalClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalClustersRequestT = Model::DescribeGlobalClustersRequest>
        void DescribeGlobalClustersAsync(const DescribeGlobalClustersRequestT& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeGlobalClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of orderable instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrderableDBInstanceOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrderableDBInstanceOptionsRequestT = Model::DescribeOrderableDBInstanceOptionsRequest>
        Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribeOrderableDBInstanceOptions, request);
        }

        /**
         * An Async wrapper for DescribeOrderableDBInstanceOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrderableDBInstanceOptionsRequestT = Model::DescribeOrderableDBInstanceOptionsRequest>
        void DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequestT& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribeOrderableDBInstanceOptions, request, handler, context);
        }

        /**
         * <p>Returns a list of resources (for example, instances) that have at least one
         * pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribePendingMaintenanceActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::DescribePendingMaintenanceActions, request);
        }

        /**
         * An Async wrapper for DescribePendingMaintenanceActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        void DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequestT& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::DescribePendingMaintenanceActions, request, handler, context);
        }

        /**
         * <p>Forces a failover for a cluster.</p> <p>A failover for a cluster promotes one
         * of the Amazon DocumentDB replicas (read-only instances) in the cluster to be the
         * primary instance (the cluster writer).</p> <p>If the primary instance fails,
         * Amazon DocumentDB automatically fails over to an Amazon DocumentDB replica, if
         * one exists. You can force a failover when you want to simulate a failure of a
         * primary instance for testing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverDBClusterOutcome FailoverDBCluster(const Model::FailoverDBClusterRequest& request) const;

        /**
         * A Callable wrapper for FailoverDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FailoverDBClusterRequestT = Model::FailoverDBClusterRequest>
        Model::FailoverDBClusterOutcomeCallable FailoverDBClusterCallable(const FailoverDBClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::FailoverDBCluster, request);
        }

        /**
         * An Async wrapper for FailoverDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FailoverDBClusterRequestT = Model::FailoverDBClusterRequest>
        void FailoverDBClusterAsync(const FailoverDBClusterRequestT& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::FailoverDBCluster, request, handler, context);
        }

        /**
         * <p>Lists all tags on an Amazon DocumentDB resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Modifies a setting for an Amazon DocumentDB cluster. You can change one or
         * more database configuration parameters by specifying these parameters and the
         * new values in the request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterOutcome ModifyDBCluster(const Model::ModifyDBClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterRequestT = Model::ModifyDBClusterRequest>
        Model::ModifyDBClusterOutcomeCallable ModifyDBClusterCallable(const ModifyDBClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ModifyDBCluster, request);
        }

        /**
         * An Async wrapper for ModifyDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterRequestT = Model::ModifyDBClusterRequest>
        void ModifyDBClusterAsync(const ModifyDBClusterRequestT& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ModifyDBCluster, request, handler, context);
        }

        /**
         * <p> Modifies the parameters of a cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request. </p>  <p>Changes to
         * dynamic parameters are applied immediately. Changes to static parameters require
         * a reboot or maintenance window before the change can take effect.</p> 
         *  <p>After you create a cluster parameter group, you should wait at
         * least 5 minutes before creating your first cluster that uses that cluster
         * parameter group as the default parameter group. This allows Amazon DocumentDB to
         * fully complete the create action before the parameter group is used as the
         * default for a new cluster. This step is especially important for parameters that
         * are critical when creating the default database for a cluster, such as the
         * character set for the default database defined by the
         * <code>character_set_database</code> parameter.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterParameterGroupOutcome ModifyDBClusterParameterGroup(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterParameterGroupRequestT = Model::ModifyDBClusterParameterGroupRequest>
        Model::ModifyDBClusterParameterGroupOutcomeCallable ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ModifyDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterParameterGroupRequestT = Model::ModifyDBClusterParameterGroupRequest>
        void ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequestT& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ModifyDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual cluster snapshot.</p> <p>To share a manual cluster snapshot with other
         * Amazon Web Services accounts, specify <code>restore</code> as the
         * <code>AttributeName</code>, and use the <code>ValuesToAdd</code> parameter to
         * add a list of IDs of the Amazon Web Services accounts that are authorized to
         * restore the manual cluster snapshot. Use the value <code>all</code> to make the
         * manual cluster snapshot public, which means that it can be copied or restored by
         * all Amazon Web Services accounts. Do not add the <code>all</code> value for any
         * manual cluster snapshots that contain private information that you don't want
         * available to all Amazon Web Services accounts. If a manual cluster snapshot is
         * encrypted, it can be shared, but only by specifying a list of authorized Amazon
         * Web Services account IDs for the <code>ValuesToAdd</code> parameter. You can't
         * use <code>all</code> as a value for that parameter in this case.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterSnapshotAttributeOutcome ModifyDBClusterSnapshotAttribute(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterSnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterSnapshotAttributeRequestT = Model::ModifyDBClusterSnapshotAttributeRequest>
        Model::ModifyDBClusterSnapshotAttributeOutcomeCallable ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ModifyDBClusterSnapshotAttribute, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterSnapshotAttributeRequestT = Model::ModifyDBClusterSnapshotAttributeRequest>
        void ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequestT& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ModifyDBClusterSnapshotAttribute, request, handler, context);
        }

        /**
         * <p>Modifies settings for an instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBInstanceRequestT = Model::ModifyDBInstanceRequest>
        Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const ModifyDBInstanceRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ModifyDBInstance, request);
        }

        /**
         * An Async wrapper for ModifyDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBInstanceRequestT = Model::ModifyDBInstanceRequest>
        void ModifyDBInstanceAsync(const ModifyDBInstanceRequestT& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ModifyDBInstance, request, handler, context);
        }

        /**
         * <p>Modifies an existing subnet group. subnet groups must contain at least one
         * subnet in at least two Availability Zones in the Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBSubnetGroupRequestT = Model::ModifyDBSubnetGroupRequest>
        Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ModifyDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBSubnetGroupRequestT = Model::ModifyDBSubnetGroupRequest>
        void ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequestT& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ModifyDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Modifies an existing Amazon DocumentDB event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for ModifyEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ModifyEventSubscription, request);
        }

        /**
         * An Async wrapper for ModifyEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        void ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequestT& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ModifyEventSubscription, request, handler, context);
        }

        /**
         * <p>Modify a setting for an Amazon DocumentDB global cluster. You can change one
         * or more configuration parameters (for example: deletion protection), or the
         * global cluster identifier by specifying these parameters and the new values in
         * the request.</p>  <p>This action only applies to Amazon DocumentDB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyGlobalClusterOutcome ModifyGlobalCluster(const Model::ModifyGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyGlobalClusterRequestT = Model::ModifyGlobalClusterRequest>
        Model::ModifyGlobalClusterOutcomeCallable ModifyGlobalClusterCallable(const ModifyGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ModifyGlobalCluster, request);
        }

        /**
         * An Async wrapper for ModifyGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyGlobalClusterRequestT = Model::ModifyGlobalClusterRequest>
        void ModifyGlobalClusterAsync(const ModifyGlobalClusterRequestT& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ModifyGlobalCluster, request, handler, context);
        }

        /**
         * <p>You might need to reboot your instance, usually for maintenance reasons. For
         * example, if you make certain changes, or if you change the cluster parameter
         * group that is associated with the instance, you must reboot the instance for the
         * changes to take effect. </p> <p>Rebooting an instance restarts the database
         * engine service. Rebooting an instance results in a momentary outage, during
         * which the instance status is set to <i>rebooting</i>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBInstanceOutcome RebootDBInstance(const Model::RebootDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for RebootDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootDBInstanceRequestT = Model::RebootDBInstanceRequest>
        Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const RebootDBInstanceRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::RebootDBInstance, request);
        }

        /**
         * An Async wrapper for RebootDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootDBInstanceRequestT = Model::RebootDBInstanceRequest>
        void RebootDBInstanceAsync(const RebootDBInstanceRequestT& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::RebootDBInstance, request, handler, context);
        }

        /**
         * <p>Detaches an Amazon DocumentDB secondary cluster from a global cluster. The
         * cluster becomes a standalone cluster with read-write capability instead of being
         * read-only and receiving data from a primary in a different region. </p> 
         * <p>This action only applies to Amazon DocumentDB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RemoveFromGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFromGlobalClusterOutcome RemoveFromGlobalCluster(const Model::RemoveFromGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for RemoveFromGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFromGlobalClusterRequestT = Model::RemoveFromGlobalClusterRequest>
        Model::RemoveFromGlobalClusterOutcomeCallable RemoveFromGlobalClusterCallable(const RemoveFromGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::RemoveFromGlobalCluster, request);
        }

        /**
         * An Async wrapper for RemoveFromGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFromGlobalClusterRequestT = Model::RemoveFromGlobalClusterRequest>
        void RemoveFromGlobalClusterAsync(const RemoveFromGlobalClusterRequestT& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::RemoveFromGlobalCluster, request, handler, context);
        }

        /**
         * <p>Removes a source identifier from an existing Amazon DocumentDB event
         * notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for RemoveSourceIdentifierFromSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveSourceIdentifierFromSubscriptionRequestT = Model::RemoveSourceIdentifierFromSubscriptionRequest>
        Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::RemoveSourceIdentifierFromSubscription, request);
        }

        /**
         * An Async wrapper for RemoveSourceIdentifierFromSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveSourceIdentifierFromSubscriptionRequestT = Model::RemoveSourceIdentifierFromSubscriptionRequest>
        void RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequestT& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::RemoveSourceIdentifierFromSubscription, request, handler, context);
        }

        /**
         * <p>Removes metadata tags from an Amazon DocumentDB resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::RemoveTagsFromResource, request, handler, context);
        }

        /**
         * <p> Modifies the parameters of a cluster parameter group to the default value.
         * To reset specific parameters, submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters. </p> <p> When you reset the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * reboot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ResetDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBClusterParameterGroupOutcome ResetDBClusterParameterGroup(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetDBClusterParameterGroupRequestT = Model::ResetDBClusterParameterGroupRequest>
        Model::ResetDBClusterParameterGroupOutcomeCallable ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::ResetDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for ResetDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetDBClusterParameterGroupRequestT = Model::ResetDBClusterParameterGroupRequest>
        void ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequestT& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::ResetDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a new cluster from a snapshot or cluster snapshot.</p> <p>If a
         * snapshot is specified, the target cluster is created from the source DB snapshot
         * with a default configuration and default security group.</p> <p>If a cluster
         * snapshot is specified, the target cluster is created from the source cluster
         * restore point with the same configuration as the original source DB cluster,
         * except that the new cluster is created with the default security
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcome RestoreDBClusterFromSnapshot(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBClusterFromSnapshotRequestT = Model::RestoreDBClusterFromSnapshotRequest>
        Model::RestoreDBClusterFromSnapshotOutcomeCallable RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::RestoreDBClusterFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreDBClusterFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBClusterFromSnapshotRequestT = Model::RestoreDBClusterFromSnapshotRequest>
        void RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequestT& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::RestoreDBClusterFromSnapshot, request, handler, context);
        }

        /**
         * <p>Restores a cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target cluster is created from the
         * source cluster with the same configuration as the original cluster, except that
         * the new cluster is created with the default security group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcome RestoreDBClusterToPointInTime(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterToPointInTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBClusterToPointInTimeRequestT = Model::RestoreDBClusterToPointInTimeRequest>
        Model::RestoreDBClusterToPointInTimeOutcomeCallable RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::RestoreDBClusterToPointInTime, request);
        }

        /**
         * An Async wrapper for RestoreDBClusterToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBClusterToPointInTimeRequestT = Model::RestoreDBClusterToPointInTimeRequest>
        void RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequestT& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::RestoreDBClusterToPointInTime, request, handler, context);
        }

        /**
         * <p>Restarts the stopped cluster that is specified by
         * <code>DBClusterIdentifier</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/db-cluster-stop-start.html">Stopping
         * and Starting an Amazon DocumentDB Cluster</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBClusterOutcome StartDBCluster(const Model::StartDBClusterRequest& request) const;

        /**
         * A Callable wrapper for StartDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDBClusterRequestT = Model::StartDBClusterRequest>
        Model::StartDBClusterOutcomeCallable StartDBClusterCallable(const StartDBClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::StartDBCluster, request);
        }

        /**
         * An Async wrapper for StartDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDBClusterRequestT = Model::StartDBClusterRequest>
        void StartDBClusterAsync(const StartDBClusterRequestT& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::StartDBCluster, request, handler, context);
        }

        /**
         * <p>Stops the running cluster that is specified by
         * <code>DBClusterIdentifier</code>. The cluster must be in the <i>available</i>
         * state. For more information, see <a
         * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/db-cluster-stop-start.html">Stopping
         * and Starting an Amazon DocumentDB Cluster</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBClusterOutcome StopDBCluster(const Model::StopDBClusterRequest& request) const;

        /**
         * A Callable wrapper for StopDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDBClusterRequestT = Model::StopDBClusterRequest>
        Model::StopDBClusterOutcomeCallable StopDBClusterCallable(const StopDBClusterRequestT& request) const
        {
            return SubmitCallable(&DocDBClient::StopDBCluster, request);
        }

        /**
         * An Async wrapper for StopDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDBClusterRequestT = Model::StopDBClusterRequest>
        void StopDBClusterAsync(const StopDBClusterRequestT& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DocDBClient::StopDBCluster, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<DocDBEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<DocDBClient>;
        void init(const DocDBClientConfiguration& clientConfiguration);

        DocDBClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<DocDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace DocDB
} // namespace Aws
