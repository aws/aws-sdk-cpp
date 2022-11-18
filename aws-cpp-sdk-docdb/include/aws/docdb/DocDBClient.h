/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/docdb/DocDBServiceClientModel.h>
#include <aws/docdb/DocDBLegacyAsyncMacros.h>

namespace Aws
{
namespace DocDB
{
  /**
   * <p>Amazon DocumentDB API documentation</p>
   */
  class AWS_DOCDB_API DocDBClient : public Aws::Client::AWSXMLClient
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
         * <p>Applies a pending maintenance action to a resource (for example, to an Amazon
         * DocumentDB instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;


        /**
         * <p>Copies the specified cluster parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterParameterGroupOutcome CopyDBClusterParameterGroup(const Model::CopyDBClusterParameterGroupRequest& request) const;


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
         * <p>Creates a new Amazon DocumentDB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;


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
         * <p>Creates a snapshot of a cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;


        /**
         * <p>Creates a new instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;


        /**
         * <p>Creates a new subnet group. subnet groups must contain at least one subnet in
         * at least two Availability Zones in the Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;


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
         * <p>Deletes a previously provisioned cluster. When you delete a cluster, all
         * automated backups for that cluster are deleted and can't be recovered. Manual DB
         * cluster snapshots of the specified cluster are not deleted.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterOutcome DeleteDBCluster(const Model::DeleteDBClusterRequest& request) const;


        /**
         * <p>Deletes a specified cluster parameter group. The cluster parameter group to
         * be deleted can't be associated with any clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterParameterGroupOutcome DeleteDBClusterParameterGroup(const Model::DeleteDBClusterParameterGroupRequest& request) const;


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
         * <p>Deletes a previously provisioned instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;


        /**
         * <p>Deletes a subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;


        /**
         * <p>Deletes an Amazon DocumentDB event notification subscription.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;


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
         * <p>Returns a list of certificate authority (CA) certificates provided by Amazon
         * DocumentDB for this Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;


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
         * <p>Returns the detailed parameter list for a particular cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParametersOutcome DescribeDBClusterParameters(const Model::DescribeDBClusterParametersRequest& request) const;


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
         * <p>Returns information about cluster snapshots. This API operation supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotsOutcome DescribeDBClusterSnapshots(const Model::DescribeDBClusterSnapshotsRequest& request) const;


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
         * <p>Returns a list of the available engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;


        /**
         * <p>Returns information about provisioned Amazon DocumentDB instances. This API
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;


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
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcome DescribeEngineDefaultClusterParameters(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;


        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;


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
         * <p>Returns information about Amazon DocumentDB global clusters. This API
         * supports pagination.</p>  <p>This action only applies to Amazon DocumentDB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeGlobalClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalClustersOutcome DescribeGlobalClusters(const Model::DescribeGlobalClustersRequest& request) const;


        /**
         * <p>Returns a list of orderable instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;


        /**
         * <p>Returns a list of resources (for example, instances) that have at least one
         * pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;


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
         * <p>Lists all tags on an Amazon DocumentDB resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Modifies a setting for an Amazon DocumentDB cluster. You can change one or
         * more database configuration parameters by specifying these parameters and the
         * new values in the request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterOutcome ModifyDBCluster(const Model::ModifyDBClusterRequest& request) const;


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
         * <p>Modifies settings for an instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;


        /**
         * <p>Modifies an existing subnet group. subnet groups must contain at least one
         * subnet in at least two Availability Zones in the Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;


        /**
         * <p>Modifies an existing Amazon DocumentDB event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;


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
         * <p>Removes a source identifier from an existing Amazon DocumentDB event
         * notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;


        /**
         * <p>Removes metadata tags from an Amazon DocumentDB resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;


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
         * <p>Restarts the stopped cluster that is specified by
         * <code>DBClusterIdentifier</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/db-cluster-stop-start.html">Stopping
         * and Starting an Amazon DocumentDB Cluster</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBClusterOutcome StartDBCluster(const Model::StartDBClusterRequest& request) const;


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



        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<DocDBEndpointProviderBase>& accessEndpointProvider();
  private:
        void init(const DocDBClientConfiguration& clientConfiguration);

        DocDBClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<DocDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace DocDB
} // namespace Aws
