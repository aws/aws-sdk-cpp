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
   * <p>Amazon DocumentDB API documentation</p>
   */
  class AWS_DOCDB_API DocDBClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<DocDBClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBClient(const Aws::DocDB::DocDBClientConfiguration& clientConfiguration = Aws::DocDB::DocDBClientConfiguration(),
                    std::shared_ptr<DocDBEndpointProviderBase> endpointProvider = Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DocDBClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<DocDBEndpointProviderBase> endpointProvider = Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG),
                    const Aws::DocDB::DocDBClientConfiguration& clientConfiguration = Aws::DocDB::DocDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DocDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<DocDBEndpointProviderBase> endpointProvider = Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * An Async wrapper for AddSourceIdentifierToSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddSourceIdentifierToSubscriptionAsync(const Model::AddSourceIdentifierToSubscriptionRequest& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * An Async wrapper for ApplyPendingMaintenanceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyPendingMaintenanceActionAsync(const Model::ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified cluster parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterParameterGroupOutcome CopyDBClusterParameterGroup(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBClusterParameterGroupOutcomeCallable CopyDBClusterParameterGroupCallable(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CopyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBClusterParameterGroupAsync(const Model::CopyDBClusterParameterGroupRequest& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CopyDBClusterSnapshotOutcomeCallable CopyDBClusterSnapshotCallable(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for CopyDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBClusterSnapshotAsync(const Model::CopyDBClusterSnapshotRequest& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon DocumentDB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterOutcomeCallable CreateDBClusterCallable(const Model::CreateDBClusterRequest& request) const;

        /**
         * An Async wrapper for CreateDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDBClusterParameterGroupOutcomeCallable CreateDBClusterParameterGroupCallable(const Model::CreateDBClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterParameterGroupAsync(const Model::CreateDBClusterParameterGroupRequest& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterSnapshotOutcomeCallable CreateDBClusterSnapshotCallable(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterSnapshotAsync(const Model::CreateDBClusterSnapshotRequest& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSubnetGroupAsync(const Model::CreateDBSubnetGroupRequest& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSubscriptionAsync(const Model::CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateGlobalClusterOutcomeCallable CreateGlobalClusterCallable(const Model::CreateGlobalClusterRequest& request) const;

        /**
         * An Async wrapper for CreateGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGlobalClusterAsync(const Model::CreateGlobalClusterRequest& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDBClusterOutcomeCallable DeleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDBClusterParameterGroupOutcomeCallable DeleteDBClusterParameterGroupCallable(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterParameterGroupAsync(const Model::DeleteDBClusterParameterGroupRequest& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDBClusterSnapshotOutcomeCallable DeleteDBClusterSnapshotCallable(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterSnapshotAsync(const Model::DeleteDBClusterSnapshotRequest& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously provisioned instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSubnetGroupAsync(const Model::DeleteDBSubnetGroupRequest& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSubscriptionAsync(const Model::DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteGlobalClusterOutcomeCallable DeleteGlobalClusterCallable(const Model::DeleteGlobalClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGlobalClusterAsync(const Model::DeleteGlobalClusterRequest& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request) const;

        /**
         * An Async wrapper for DescribeCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDBClusterParameterGroupsOutcomeCallable DescribeDBClusterParameterGroupsCallable(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBClusterParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterParameterGroupsAsync(const Model::DescribeDBClusterParameterGroupsRequest& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDBClusterParametersOutcomeCallable DescribeDBClusterParametersCallable(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeDBClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterParametersAsync(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDBClusterSnapshotAttributesOutcomeCallable DescribeDBClusterSnapshotAttributesCallable(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeDBClusterSnapshotAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotAttributesAsync(const Model::DescribeDBClusterSnapshotAttributesRequest& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDBClusterSnapshotsOutcomeCallable DescribeDBClusterSnapshotsCallable(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterSnapshotsAsync(const Model::DescribeDBClusterSnapshotsRequest& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDBClustersOutcomeCallable DescribeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;

        /**
         * An Async wrapper for DescribeDBClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBEngineVersionsAsync(const Model::DescribeDBEngineVersionsRequest& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeDBInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDBSubnetGroupsOutcomeCallable DescribeDBSubnetGroupsCallable(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSubnetGroupsAsync(const Model::DescribeDBSubnetGroupsRequest& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEngineDefaultClusterParametersOutcomeCallable DescribeEngineDefaultClusterParametersCallable(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeEngineDefaultClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultClusterParametersAsync(const Model::DescribeEngineDefaultClusterParametersRequest& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * An Async wrapper for DescribeEventCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventCategoriesAsync(const Model::DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeEventSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSubscriptionsAsync(const Model::DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeGlobalClustersOutcomeCallable DescribeGlobalClustersCallable(const Model::DescribeGlobalClustersRequest& request) const;

        /**
         * An Async wrapper for DescribeGlobalClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalClustersAsync(const Model::DescribeGlobalClustersRequest& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeOrderableDBInstanceOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableDBInstanceOptionsAsync(const Model::DescribeOrderableDBInstanceOptionsRequest& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * An Async wrapper for DescribePendingMaintenanceActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePendingMaintenanceActionsAsync(const Model::DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::FailoverDBClusterOutcomeCallable FailoverDBClusterCallable(const Model::FailoverDBClusterRequest& request) const;

        /**
         * An Async wrapper for FailoverDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverDBClusterAsync(const Model::FailoverDBClusterRequest& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyDBClusterOutcomeCallable ModifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;

        /**
         * An Async wrapper for ModifyDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyDBClusterParameterGroupOutcomeCallable ModifyDBClusterParameterGroupCallable(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterParameterGroupAsync(const Model::ModifyDBClusterParameterGroupRequest& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyDBClusterSnapshotAttributeOutcomeCallable ModifyDBClusterSnapshotAttributeCallable(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyDBClusterSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterSnapshotAttributeAsync(const Model::ModifyDBClusterSnapshotAttributeRequest& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * An Async wrapper for ModifyDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBInstanceAsync(const Model::ModifyDBInstanceRequest& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSubnetGroupAsync(const Model::ModifyDBSubnetGroupRequest& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * An Async wrapper for ModifyEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEventSubscriptionAsync(const Model::ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyGlobalClusterOutcomeCallable ModifyGlobalClusterCallable(const Model::ModifyGlobalClusterRequest& request) const;

        /**
         * An Async wrapper for ModifyGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyGlobalClusterAsync(const Model::ModifyGlobalClusterRequest& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const Model::RebootDBInstanceRequest& request) const;

        /**
         * An Async wrapper for RebootDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootDBInstanceAsync(const Model::RebootDBInstanceRequest& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveFromGlobalClusterOutcomeCallable RemoveFromGlobalClusterCallable(const Model::RemoveFromGlobalClusterRequest& request) const;

        /**
         * An Async wrapper for RemoveFromGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFromGlobalClusterAsync(const Model::RemoveFromGlobalClusterRequest& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * An Async wrapper for RemoveSourceIdentifierFromSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveSourceIdentifierFromSubscriptionAsync(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ResetDBClusterParameterGroupOutcomeCallable ResetDBClusterParameterGroupCallable(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ResetDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDBClusterParameterGroupAsync(const Model::ResetDBClusterParameterGroupRequest& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RestoreDBClusterFromSnapshotOutcomeCallable RestoreDBClusterFromSnapshotCallable(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * An Async wrapper for RestoreDBClusterFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterFromSnapshotAsync(const Model::RestoreDBClusterFromSnapshotRequest& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RestoreDBClusterToPointInTimeOutcomeCallable RestoreDBClusterToPointInTimeCallable(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * An Async wrapper for RestoreDBClusterToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterToPointInTimeAsync(const Model::RestoreDBClusterToPointInTimeRequest& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartDBClusterOutcomeCallable StartDBClusterCallable(const Model::StartDBClusterRequest& request) const;

        /**
         * An Async wrapper for StartDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDBClusterAsync(const Model::StartDBClusterRequest& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopDBClusterOutcomeCallable StopDBClusterCallable(const Model::StopDBClusterRequest& request) const;

        /**
         * An Async wrapper for StopDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDBClusterAsync(const Model::StopDBClusterRequest& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
