/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/RDSServiceClientModel.h>

namespace Aws
{
  namespace RDS
  {
        /**
     * <fullname>Amazon Relational Database Service</fullname> <p/> <p>Amazon
   * Relational Database Service (Amazon RDS) is a web service that makes it easier
   * to set up, operate, and scale a relational database in the cloud. It provides
   * cost-efficient, resizeable capacity for an industry-standard relational database
   * and manages common database administration tasks, freeing up developers to focus
   * on what makes their applications and businesses unique.</p> <p>Amazon RDS gives
   * you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL
   * Server, Oracle, or Amazon Aurora database server. These capabilities mean that
   * the code, applications, and tools you already use today with your existing
   * databases work with Amazon RDS without modification. Amazon RDS automatically
   * backs up your database and maintains the database software that powers your DB
   * instance. Amazon RDS is flexible: you can scale your DB instance's compute
   * resources and storage capacity to meet your application's demand. As with all
   * Amazon Web Services, there are no up-front investments, and you pay only for the
   * resources you use.</p> <p>This interface reference for Amazon RDS contains
   * documentation for a programming or command line interface you can use to manage
   * Amazon RDS. Amazon RDS is asynchronous, which means that some interfaces might
   * require techniques such as polling or callback functions to determine when a
   * command has been applied. In this reference, the parameter descriptions indicate
   * whether a command is applied immediately, on the next instance reboot, or during
   * the maintenance window. The reference structure is as follows, and we list
   * following some related topics from the user guide.</p> <p> <b>Amazon RDS API
   * Reference</b> </p> <ul> <li> <p>For the alphabetical list of API actions, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
   * Actions</a>.</p> </li> <li> <p>For the alphabetical list of data types, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
   * Types</a>.</p> </li> <li> <p>For a list of common query parameters, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
   * Parameters</a>.</p> </li> <li> <p>For descriptions of the error codes, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
   * Errors</a>.</p> </li> </ul> <p> <b>Amazon RDS User Guide</b> </p> <ul> <li>
   * <p>For a summary of the Amazon RDS interfaces, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available
   * RDS Interfaces</a>.</p> </li> <li> <p>For more information about how to use the
   * Query API, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using
   * the Query API</a>.</p> </li> </ul>
     */
                class AWS_RDS_API RDSClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<RDSClient>
    {
    public:
    typedef Aws::Client::AWSXMLClient BASECLASS;
    static const char* SERVICE_NAME;
    static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::RDS::RDSClientConfiguration& clientConfiguration = Aws::RDS::RDSClientConfiguration(),
                  std::shared_ptr<RDSEndpointProviderBase> endpointProvider = Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<RDSEndpointProviderBase> endpointProvider = Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::RDS::RDSClientConfiguration& clientConfiguration = Aws::RDS::RDSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<RDSEndpointProviderBase> endpointProvider = Aws::MakeShared<RDSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::RDS::RDSClientConfiguration& clientConfiguration = Aws::RDS::RDSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RDSClient();

    
        /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;

        /**
        * Generates an auth token for connecting to an rds instance.
        */
        Aws::String GenerateConnectAuthToken(const char* dbHostName, const char* dbRegion, unsigned port, const char* dbUserName) const;

        
        /**
         * <p>Associates an Identity and Access Management (IAM) role with a DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBClusterOutcome AddRoleToDBCluster(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * A Callable wrapper for AddRoleToDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToDBClusterOutcomeCallable AddRoleToDBClusterCallable(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * An Async wrapper for AddRoleToDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToDBClusterAsync(const Model::AddRoleToDBClusterRequest& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an Amazon Web Services Identity and Access Management (IAM) role
         * with a DB instance.</p>  <p>To add a role to a DB instance, the status of
         * the DB instance must be <code>available</code>.</p>  <p>This command
         * doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddRoleToDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBInstanceOutcome AddRoleToDBInstance(const Model::AddRoleToDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for AddRoleToDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToDBInstanceOutcomeCallable AddRoleToDBInstanceCallable(const Model::AddRoleToDBInstanceRequest& request) const;

        /**
         * An Async wrapper for AddRoleToDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToDBInstanceAsync(const Model::AddRoleToDBInstanceRequest& request, const AddRoleToDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a source identifier to an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddSourceIdentifierToSubscription">AWS
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
         * <p>Adds metadata tags to an Amazon RDS resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon RDS
         * resources, or used in a Condition statement in an IAM policy for Amazon RDS.</p>
         * <p>For an overview on tagging Amazon RDS resources, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddTagsToResource">AWS
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
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ApplyPendingMaintenanceAction">AWS
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
         * <p>Enables ingress to a DBSecurityGroup using one of two forms of authorization.
         * First, EC2 or VPC security groups can be added to the DBSecurityGroup if the
         * application using the database is running on EC2 or VPC instances. Second, IP
         * ranges are available if the application accessing your database is running on
         * the internet. Required parameters for this API are one of CIDR range,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId for non-VPC).</p> <p>You can't
         * authorize ingress from an EC2 security group in one Amazon Web Services Region
         * to an Amazon RDS DB instance in another. You can't authorize ingress from a VPC
         * security group in one VPC to an Amazon RDS DB instance in another.</p> <p>For an
         * overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p>  <p>EC2-Classic was retired on August 15, 2022. If you
         * haven't migrated from EC2-Classic to a VPC, we recommend that you migrate as
         * soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AuthorizeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeDBSecurityGroupIngressOutcome AuthorizeDBSecurityGroupIngress(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeDBSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeDBSecurityGroupIngressOutcomeCallable AuthorizeDBSecurityGroupIngressCallable(const Model::AuthorizeDBSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for AuthorizeDBSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeDBSecurityGroupIngressAsync(const Model::AuthorizeDBSecurityGroupIngressRequest& request, const AuthorizeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Backtracks a DB cluster to a specific time, without creating a new DB
         * cluster.</p> <p>For more information on backtracking, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Managing.Backtrack.html">
         * Backtracking an Aurora DB Cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>  <p>This action applies only to Aurora MySQL DB
         * clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BacktrackDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::BacktrackDBClusterOutcome BacktrackDBCluster(const Model::BacktrackDBClusterRequest& request) const;

        /**
         * A Callable wrapper for BacktrackDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BacktrackDBClusterOutcomeCallable BacktrackDBClusterCallable(const Model::BacktrackDBClusterRequest& request) const;

        /**
         * An Async wrapper for BacktrackDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BacktrackDBClusterAsync(const Model::BacktrackDBClusterRequest& request, const BacktrackDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an export task in progress that is exporting a snapshot to Amazon S3.
         * Any data that has already been written to the S3 bucket isn't
         * removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelExportTaskOutcomeCallable CancelExportTaskCallable(const Model::CancelExportTaskRequest& request) const;

        /**
         * An Async wrapper for CancelExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelExportTaskAsync(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB cluster parameter group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterParameterGroup">AWS
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
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p> <p>You can copy an encrypted DB
         * cluster snapshot from another Amazon Web Services Region. In that case, the
         * Amazon Web Services Region where you call the <code>CopyDBClusterSnapshot</code>
         * operation is the destination Amazon Web Services Region for the encrypted DB
         * cluster snapshot to be copied to. To copy an encrypted DB cluster snapshot from
         * another Amazon Web Services Region, you must provide the following values:</p>
         * <ul> <li> <p> <code>KmsKeyId</code> - The Amazon Web Services Key Management
         * System (Amazon Web Services KMS) key identifier for the key to use to encrypt
         * the copy of the DB cluster snapshot in the destination Amazon Web Services
         * Region.</p> </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The
         * identifier for the new copy of the DB cluster snapshot in the destination Amazon
         * Web Services Region.</p> </li> <li> <p>
         * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot
         * identifier for the encrypted DB cluster snapshot to be copied. This identifier
         * must be in the ARN format for the source Amazon Web Services Region and is the
         * same value as the <code>SourceDBClusterSnapshotIdentifier</code> in the
         * presigned URL.</p> </li> </ul> <p>To cancel the copy operation once it is in
         * progress, delete the target DB cluster snapshot identified by
         * <code>TargetDBClusterSnapshotIdentifier</code> while that DB cluster snapshot is
         * in "copying" status.</p> <p>For more information on copying encrypted Amazon
         * Aurora DB cluster snapshots from one Amazon Web Services Region to another, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_CopySnapshot.html">
         * Copying a Snapshot</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For more
         * information on Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterSnapshot">AWS
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
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBParameterGroupOutcome CopyDBParameterGroup(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBParameterGroupOutcomeCallable CopyDBParameterGroupCallable(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CopyDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBParameterGroupAsync(const Model::CopyDBParameterGroupRequest& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified DB snapshot. The source DB snapshot must be in the
         * <code>available</code> state.</p> <p>You can copy a snapshot from one Amazon Web
         * Services Region to another. In that case, the Amazon Web Services Region where
         * you call the <code>CopyDBSnapshot</code> operation is the destination Amazon Web
         * Services Region for the DB snapshot copy.</p> <p>This command doesn't apply to
         * RDS Custom.</p> <p>For more information about copying snapshots, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopyDBSnapshot">Copying
         * a DB Snapshot</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBSnapshotOutcome CopyDBSnapshot(const Model::CopyDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopyDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyDBSnapshotOutcomeCallable CopyDBSnapshotCallable(const Model::CopyDBSnapshotRequest& request) const;

        /**
         * An Async wrapper for CopyDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyDBSnapshotAsync(const Model::CopyDBSnapshotRequest& request, const CopyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyOptionGroupOutcome CopyOptionGroup(const Model::CopyOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyOptionGroupOutcomeCallable CopyOptionGroupCallable(const Model::CopyOptionGroupRequest& request) const;

        /**
         * An Async wrapper for CopyOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyOptionGroupAsync(const Model::CopyOptionGroupRequest& request, const CopyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a blue/green deployment.</p> <p>A blue/green deployment creates a
         * staging environment that copies the production environment. In a blue/green
         * deployment, the blue environment is the current production environment. The
         * green environment is the staging environment. The staging environment stays in
         * sync with the current production environment using logical replication.</p>
         * <p>You can make changes to the databases in the green environment without
         * affecting production workloads. For example, you can upgrade the major or minor
         * DB engine version, change database parameters, or make schema changes in the
         * staging environment. You can thoroughly test changes in the green environment.
         * When ready, you can switch over the environments to promote the green
         * environment to be the new production environment. The switchover typically takes
         * under a minute.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
         * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
         * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateBlueGreenDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBlueGreenDeploymentOutcome CreateBlueGreenDeployment(const Model::CreateBlueGreenDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateBlueGreenDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBlueGreenDeploymentOutcomeCallable CreateBlueGreenDeploymentCallable(const Model::CreateBlueGreenDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateBlueGreenDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBlueGreenDeploymentAsync(const Model::CreateBlueGreenDeploymentRequest& request, const CreateBlueGreenDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom DB engine version (CEV). A CEV is a binary volume snapshot
         * of a database engine and specific AMI. The supported engines are the
         * following:</p> <ul> <li> <p>Oracle Database 12.1 Enterprise Edition with the
         * January 2021 or later RU/RUR</p> </li> <li> <p>Oracle Database 19c Enterprise
         * Edition with the January 2021 or later RU/RUR</p> </li> </ul> <p>Amazon RDS,
         * which is a fully managed service, supplies the Amazon Machine Image (AMI) and
         * database software. The Amazon RDS database software is preinstalled, so you need
         * only select a DB engine and version, and create your database. With Amazon RDS
         * Custom for Oracle, you upload your database installation files in Amazon S3.</p>
         * <p>When you create a custom engine version, you specify the files in a JSON
         * document called a CEV manifest. This document describes installation .zip files
         * stored in Amazon S3. RDS Custom creates your CEV from the installation files
         * that you provided. This service model is called Bring Your Own Media (BYOM).</p>
         * <p>Creation takes approximately two hours. If creation fails, RDS Custom issues
         * <code>RDS-EVENT-0196</code> with the message <code>Creation failed for custom
         * engine version</code>, and includes details about the failure. For example, the
         * event prints missing files.</p> <p>After you create the CEV, it is available for
         * use. You can create multiple CEVs, and create multiple RDS Custom instances from
         * any CEV. You can also change the status of a CEV to make it available or
         * inactive.</p>  <p>The MediaImport service that imports files from Amazon
         * S3 to create CEVs isn't integrated with Amazon Web Services CloudTrail. If you
         * turn on data logging for Amazon RDS in CloudTrail, calls to the
         * <code>CreateCustomDbEngineVersion</code> event aren't logged. However, you might
         * see calls from the API gateway that accesses your Amazon S3 bucket. These calls
         * originate from the MediaImport service for the
         * <code>CreateCustomDbEngineVersion</code> event.</p>  <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.create">
         * Creating a CEV</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateCustomDBEngineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomDBEngineVersionOutcome CreateCustomDBEngineVersion(const Model::CreateCustomDBEngineVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomDBEngineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomDBEngineVersionOutcomeCallable CreateCustomDBEngineVersionCallable(const Model::CreateCustomDBEngineVersionRequest& request) const;

        /**
         * An Async wrapper for CreateCustomDBEngineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomDBEngineVersionAsync(const Model::CreateCustomDBEngineVersionRequest& request, const CreateCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Aurora DB cluster or Multi-AZ DB cluster.</p> <p>You can
         * use the <code>ReplicationSourceIdentifier</code> parameter to create an Amazon
         * Aurora DB cluster as a read replica of another DB cluster or Amazon RDS MySQL or
         * PostgreSQL DB instance.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBCluster">AWS
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
         * <p>Creates a new custom endpoint and associates it with an Amazon Aurora DB
         * cluster.</p>  <p>This action applies only to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterEndpointOutcome CreateDBClusterEndpoint(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBClusterEndpointOutcomeCallable CreateDBClusterEndpointCallable(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBClusterEndpointAsync(const Model::CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB cluster parameter group.</p> <p>Parameters in a DB cluster
         * parameter group apply to all of the instances in a DB cluster.</p> <p>A DB
         * cluster parameter group is initially created with the default parameters for the
         * database engine used by instances in the DB cluster. To provide custom values
         * for any of the parameters, you must modify the group after creating it using
         * <code>ModifyDBClusterParameterGroup</code>. Once you've created a DB cluster
         * parameter group, you need to associate it with your DB cluster using
         * <code>ModifyDBCluster</code>.</p> <p>When you associate a new DB cluster
         * parameter group with a running Aurora DB cluster, reboot the DB instances in the
         * DB cluster without failover for the new DB cluster parameter group and
         * associated settings to take effect.</p> <p>When you associate a new DB cluster
         * parameter group with a running Multi-AZ DB cluster, reboot the DB cluster
         * without failover for the new DB cluster parameter group and associated settings
         * to take effect.</p>  <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon RDS to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * RDS console</a> or the <code>DescribeDBClusterParameters</code> operation to
         * verify that your DB cluster parameter group has been created or modified.</p>
         *  <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterParameterGroup">AWS
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
         * <p>Creates a snapshot of a DB cluster.</p> <p>For more information on Amazon
         * Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterSnapshot">AWS
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
         * <p>Creates a new DB instance.</p> <p>The new DB instance can be an RDS DB
         * instance, or it can be a DB instance in an Aurora DB cluster. For an Aurora DB
         * cluster, you can call this operation multiple times to add more than one DB
         * instance to the cluster.</p> <p>For more information about creating an RDS DB
         * instance, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CreateDBInstance.html">
         * Creating an Amazon RDS DB instance</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>For more information about creating a DB instance in an Aurora DB cluster,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.CreateInstance.html">
         * Creating an Amazon Aurora DB cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstance">AWS
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
         * <p>Creates a new DB instance that acts as a read replica for an existing source
         * DB instance. You can create a read replica for a DB instance running MySQL,
         * MariaDB, Oracle, PostgreSQL, or SQL Server. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReadRepl.html">Working
         * with Read Replicas</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Amazon Aurora
         * doesn't support this operation. Call the <code>CreateDBInstance</code> operation
         * to create a DB instance for an Aurora DB cluster.</p> <p>All read replica DB
         * instances are created with backups disabled. All other DB instance attributes
         * (including DB security groups and DB parameter groups) are inherited from the
         * source DB instance, except as specified.</p>  <p>Your source DB
         * instance must have backup retention enabled.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstanceReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceReadReplicaOutcome CreateDBInstanceReadReplica(const Model::CreateDBInstanceReadReplicaRequest& request) const;

        /**
         * A Callable wrapper for CreateDBInstanceReadReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBInstanceReadReplicaOutcomeCallable CreateDBInstanceReadReplicaCallable(const Model::CreateDBInstanceReadReplicaRequest& request) const;

        /**
         * An Async wrapper for CreateDBInstanceReadReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBInstanceReadReplicaAsync(const Model::CreateDBInstanceReadReplicaRequest& request, const CreateDBInstanceReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB parameter group.</p> <p>A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <code>ModifyDBParameterGroup</code>. Once
         * you've created a DB parameter group, you need to associate it with your DB
         * instance using <code>ModifyDBInstance</code>. When you associate a new DB
         * parameter group with a running DB instance, you need to reboot the DB instance
         * without failover for the new DB parameter group and associated settings to take
         * effect.</p> <p>This command doesn't apply to RDS Custom.</p> 
         * <p>After you create a DB parameter group, you should wait at least 5 minutes
         * before creating your first DB instance that uses that DB parameter group as the
         * default parameter group. This allows Amazon RDS to fully complete the create
         * action before the parameter group is used as the default for a new DB instance.
         * This is especially important for parameters that are critical when creating the
         * default database for a DB instance, such as the character set for the default
         * database defined by the <code>character_set_database</code> parameter. You can
         * use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBParameterGroupOutcome CreateDBParameterGroup(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBParameterGroupOutcomeCallable CreateDBParameterGroupCallable(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBParameterGroupAsync(const Model::CreateDBParameterGroupRequest& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBProxyOutcome CreateDBProxy(const Model::CreateDBProxyRequest& request) const;

        /**
         * A Callable wrapper for CreateDBProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBProxyOutcomeCallable CreateDBProxyCallable(const Model::CreateDBProxyRequest& request) const;

        /**
         * An Async wrapper for CreateDBProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBProxyAsync(const Model::CreateDBProxyRequest& request, const CreateDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DBProxyEndpoint</code>. Only applies to proxies that are
         * associated with Aurora DB clusters. You can use DB proxy endpoints to specify
         * read/write or read-only access to the DB cluster. You can also use DB proxy
         * endpoints to access a DB proxy through a different VPC than the proxy's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBProxyEndpointOutcome CreateDBProxyEndpoint(const Model::CreateDBProxyEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateDBProxyEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBProxyEndpointOutcomeCallable CreateDBProxyEndpointCallable(const Model::CreateDBProxyEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateDBProxyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBProxyEndpointAsync(const Model::CreateDBProxyEndpointRequest& request, const CreateDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB security group. DB security groups control access to a DB
         * instance.</p> <p>A DB security group controls access to EC2-Classic DB instances
         * that are not in a VPC.</p>  <p>EC2-Classic was retired on August 15, 2022.
         * If you haven't migrated from EC2-Classic to a VPC, we recommend that you migrate
         * as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSecurityGroupOutcome CreateDBSecurityGroup(const Model::CreateDBSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSecurityGroupOutcomeCallable CreateDBSecurityGroupCallable(const Model::CreateDBSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDBSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSecurityGroupAsync(const Model::CreateDBSecurityGroupRequest& request, const CreateDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a DB instance. The source DB instance must be in the
         * <code>available</code> or <code>storage-optimization</code> state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSnapshotOutcome CreateDBSnapshot(const Model::CreateDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDBSnapshotOutcomeCallable CreateDBSnapshotCallable(const Model::CreateDBSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDBSnapshotAsync(const Model::CreateDBSnapshotRequest& request, const CreateDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSubnetGroup">AWS
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
         * <p>Creates an RDS event notification subscription. This operation requires a
         * topic Amazon Resource Name (ARN) created by either the RDS console, the SNS
         * console, or the SNS API. To obtain an ARN with SNS, you must create a topic in
         * Amazon SNS and subscribe to the topic. The ARN is displayed in the SNS
         * console.</p> <p>You can specify the type of source (<code>SourceType</code>)
         * that you want to be notified of and provide a list of RDS sources
         * (<code>SourceIds</code>) that triggers the events. You can also provide a list
         * of event categories (<code>EventCategories</code>) for events that you want to
         * be notified of. For example, you can specify <code>SourceType</code> =
         * <code>db-instance</code>, <code>SourceIds</code> = <code>mydbinstance1</code>,
         * <code>mydbinstance2</code> and <code>EventCategories</code> =
         * <code>Availability</code>, <code>Backup</code>.</p> <p>If you specify both the
         * <code>SourceType</code> and <code>SourceIds</code>, such as
         * <code>SourceType</code> = <code>db-instance</code> and <code>SourceIds</code> =
         * <code>myDBInstance1</code>, you are notified of all the <code>db-instance</code>
         * events for the specified source. If you specify a <code>SourceType</code> but do
         * not specify <code>SourceIds</code>, you receive notice of the events for that
         * source type for all your RDS sources. If you don't specify either the SourceType
         * or the <code>SourceIds</code>, you are notified of events generated from all RDS
         * sources belonging to your customer account.</p> <p>For more information about
         * subscribing to an event for RDS DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Subscribing.html">
         * Subscribing to Amazon RDS event notification</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p>For more information about subscribing to an event for Aurora
         * DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Subscribing.html">
         * Subscribing to Amazon RDS event notification</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateEventSubscription">AWS
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
         * <p>Creates an Aurora global database spread across multiple Amazon Web Services
         * Regions. The global database contains a single primary cluster with read-write
         * capability, and a read-only secondary cluster that receives data from the
         * primary cluster through high-speed replication performed by the Aurora storage
         * subsystem.</p> <p>You can create a global database that is initially empty, and
         * then add a primary cluster and a secondary cluster to it. Or you can specify an
         * existing Aurora cluster during the create operation, and this cluster becomes
         * the primary cluster of the global database.</p>  <p>This action applies
         * only to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateGlobalCluster">AWS
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
         * <p>Creates a new option group. You can create up to 20 option groups.</p>
         * <p>This command doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOptionGroupOutcome CreateOptionGroup(const Model::CreateOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOptionGroupOutcomeCallable CreateOptionGroupCallable(const Model::CreateOptionGroupRequest& request) const;

        /**
         * An Async wrapper for CreateOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOptionGroupAsync(const Model::CreateOptionGroupRequest& request, const CreateOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a blue/green deployment.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
         * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
         * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteBlueGreenDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBlueGreenDeploymentOutcome DeleteBlueGreenDeployment(const Model::DeleteBlueGreenDeploymentRequest& request) const;

        /**
         * A Callable wrapper for DeleteBlueGreenDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBlueGreenDeploymentOutcomeCallable DeleteBlueGreenDeploymentCallable(const Model::DeleteBlueGreenDeploymentRequest& request) const;

        /**
         * An Async wrapper for DeleteBlueGreenDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBlueGreenDeploymentAsync(const Model::DeleteBlueGreenDeploymentRequest& request, const DeleteBlueGreenDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom engine version. To run this command, make sure you meet the
         * following prerequisites:</p> <ul> <li> <p>The CEV must not be the default for
         * RDS Custom. If it is, change the default before running this command.</p> </li>
         * <li> <p>The CEV must not be associated with an RDS Custom DB instance, RDS
         * Custom instance snapshot, or automated backup of your RDS Custom instance.</p>
         * </li> </ul> <p>Typically, deletion takes a few minutes.</p>  <p>The
         * MediaImport service that imports files from Amazon S3 to create CEVs isn't
         * integrated with Amazon Web Services CloudTrail. If you turn on data logging for
         * Amazon RDS in CloudTrail, calls to the <code>DeleteCustomDbEngineVersion</code>
         * event aren't logged. However, you might see calls from the API gateway that
         * accesses your Amazon S3 bucket. These calls originate from the MediaImport
         * service for the <code>DeleteCustomDbEngineVersion</code> event.</p> 
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.delete">
         * Deleting a CEV</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteCustomDBEngineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDBEngineVersionOutcome DeleteCustomDBEngineVersion(const Model::DeleteCustomDBEngineVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomDBEngineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomDBEngineVersionOutcomeCallable DeleteCustomDBEngineVersionCallable(const Model::DeleteCustomDBEngineVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomDBEngineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomDBEngineVersionAsync(const Model::DeleteCustomDBEngineVersionRequest& request, const DeleteCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBCluster">AWS
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
         * <p>Deletes a custom endpoint and removes it from an Amazon Aurora DB
         * cluster.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterEndpointOutcome DeleteDBClusterEndpoint(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBClusterEndpointOutcomeCallable DeleteDBClusterEndpointCallable(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBClusterEndpointAsync(const Model::DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterParameterGroup">AWS
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
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p>  <p>For more information
         * on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterSnapshot">AWS
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
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and can't be recovered. Manual DB snapshots of the DB instance to be
         * deleted by <code>DeleteDBInstance</code> are not deleted.</p> <p>If you request
         * a final DB snapshot the status of the Amazon RDS DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted.</p> <p>When a DB
         * instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when you skip creation of the final snapshot with the
         * <code>SkipFinalSnapshot</code> parameter.</p> <p>If the specified DB instance is
         * part of an Amazon Aurora DB cluster, you can't delete the DB instance if both of
         * the following conditions are true:</p> <ul> <li> <p>The DB cluster is a read
         * replica of another Amazon Aurora DB cluster.</p> </li> <li> <p>The DB instance
         * is the only instance in the DB cluster.</p> </li> </ul> <p>To delete a DB
         * instance in this case, first call the <code>PromoteReadReplicaDBCluster</code>
         * API action to promote the DB cluster so it's no longer a read replica. After the
         * promotion completes, then call the <code>DeleteDBInstance</code> API action to
         * delete the final instance in the DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstance">AWS
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
         * <p>Deletes automated backups using the <code>DbiResourceId</code> value of the
         * source DB instance or the Amazon Resource Name (ARN) of the automated
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBInstanceAutomatedBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceAutomatedBackupOutcome DeleteDBInstanceAutomatedBackup(const Model::DeleteDBInstanceAutomatedBackupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBInstanceAutomatedBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBInstanceAutomatedBackupOutcomeCallable DeleteDBInstanceAutomatedBackupCallable(const Model::DeleteDBInstanceAutomatedBackupRequest& request) const;

        /**
         * An Async wrapper for DeleteDBInstanceAutomatedBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBInstanceAutomatedBackupAsync(const Model::DeleteDBInstanceAutomatedBackupRequest& request, const DeleteDBInstanceAutomatedBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified DB parameter group. The DB parameter group to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBParameterGroupOutcome DeleteDBParameterGroup(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBParameterGroupOutcomeCallable DeleteDBParameterGroupCallable(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBParameterGroupAsync(const Model::DeleteDBParameterGroupRequest& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBProxyOutcome DeleteDBProxy(const Model::DeleteDBProxyRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBProxyOutcomeCallable DeleteDBProxyCallable(const Model::DeleteDBProxyRequest& request) const;

        /**
         * An Async wrapper for DeleteDBProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBProxyAsync(const Model::DeleteDBProxyRequest& request, const DeleteDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>DBProxyEndpoint</code>. Doing so removes the ability to
         * access the DB proxy using the endpoint that you defined. The endpoint that you
         * delete might have provided capabilities such as read/write or read-only
         * operations, or using a different VPC than the DB proxy's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBProxyEndpointOutcome DeleteDBProxyEndpoint(const Model::DeleteDBProxyEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBProxyEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBProxyEndpointOutcomeCallable DeleteDBProxyEndpointCallable(const Model::DeleteDBProxyEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteDBProxyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBProxyEndpointAsync(const Model::DeleteDBProxyEndpointRequest& request, const DeleteDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB security group.</p> <p>The specified DB security group must not
         * be associated with any DB instances.</p>  <p>EC2-Classic was retired on
         * August 15, 2022. If you haven't migrated from EC2-Classic to a VPC, we recommend
         * that you migrate as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSecurityGroupOutcome DeleteDBSecurityGroup(const Model::DeleteDBSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSecurityGroupOutcomeCallable DeleteDBSecurityGroupCallable(const Model::DeleteDBSecurityGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDBSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSecurityGroupAsync(const Model::DeleteDBSecurityGroupRequest& request, const DeleteDBSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB snapshot. If the snapshot is being copied, the copy operation is
         * terminated.</p>  <p>The DB snapshot must be in the <code>available</code>
         * state to be deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSnapshotOutcome DeleteDBSnapshot(const Model::DeleteDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDBSnapshotOutcomeCallable DeleteDBSnapshotCallable(const Model::DeleteDBSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDBSnapshotAsync(const Model::DeleteDBSnapshotRequest& request, const DeleteDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSubnetGroup">AWS
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
         * <p>Deletes an RDS event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteEventSubscription">AWS
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
         * <p>Deletes a global database cluster. The primary and secondary clusters must
         * already be detached or destroyed first.</p>  <p>This action only applies
         * to Aurora DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteGlobalCluster">AWS
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
         * <p>Deletes an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOptionGroupOutcome DeleteOptionGroup(const Model::DeleteOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOptionGroupOutcomeCallable DeleteOptionGroupCallable(const Model::DeleteOptionGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOptionGroupAsync(const Model::DeleteOptionGroupRequest& request, const DeleteOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove the association between one or more <code>DBProxyTarget</code> data
         * structures and a <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeregisterDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDBProxyTargetsOutcome DeregisterDBProxyTargets(const Model::DeregisterDBProxyTargetsRequest& request) const;

        /**
         * A Callable wrapper for DeregisterDBProxyTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterDBProxyTargetsOutcomeCallable DeregisterDBProxyTargetsCallable(const Model::DeregisterDBProxyTargetsRequest& request) const;

        /**
         * An Async wrapper for DeregisterDBProxyTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterDBProxyTargetsAsync(const Model::DeregisterDBProxyTargetsRequest& request, const DeregisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the attributes for a customer account. The attributes include
         * Amazon RDS quotas for the account, such as the number of DB instances allowed.
         * The description for a quota includes the quota name, current usage toward that
         * quota, and the quota's maximum value.</p> <p>This command doesn't take any
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about blue/green deployments.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
         * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
         * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeBlueGreenDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBlueGreenDeploymentsOutcome DescribeBlueGreenDeployments(const Model::DescribeBlueGreenDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBlueGreenDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBlueGreenDeploymentsOutcomeCallable DescribeBlueGreenDeploymentsCallable(const Model::DescribeBlueGreenDeploymentsRequest& request) const;

        /**
         * An Async wrapper for DescribeBlueGreenDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBlueGreenDeploymentsAsync(const Model::DescribeBlueGreenDeploymentsRequest& request, const DescribeBlueGreenDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the set of CA certificates provided by Amazon RDS for this Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeCertificates">AWS
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
         * <p>Returns information about backtracks for a DB cluster.</p> <p>For more
         * information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This action only applies to Aurora MySQL DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterBacktracks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterBacktracksOutcome DescribeDBClusterBacktracks(const Model::DescribeDBClusterBacktracksRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterBacktracks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterBacktracksOutcomeCallable DescribeDBClusterBacktracksCallable(const Model::DescribeDBClusterBacktracksRequest& request) const;

        /**
         * An Async wrapper for DescribeDBClusterBacktracks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterBacktracksAsync(const Model::DescribeDBClusterBacktracksRequest& request, const DescribeDBClusterBacktracksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about endpoints for an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterEndpointsOutcome DescribeDBClusterEndpoints(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBClusterEndpointsOutcomeCallable DescribeDBClusterEndpointsCallable(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBClusterEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBClusterEndpointsAsync(const Model::DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter group.</p>
         * <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameterGroups">AWS
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
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterParameters">AWS
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
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other Amazon Web
         * Services accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the Amazon Web Services
         * accounts that are authorized to copy or restore the manual DB cluster snapshot.
         * If <code>all</code> is included in the list of values for the
         * <code>restore</code> attribute, then the manual DB cluster snapshot is public
         * and can be copied or restored by all Amazon Web Services accounts.</p> <p>To add
         * or remove access for an Amazon Web Services account to copy or restore a manual
         * DB cluster snapshot, or to make the manual DB cluster snapshot public or
         * private, use the <code>ModifyDBClusterSnapshotAttribute</code> API
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
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
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p> <p>For more information on Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterSnapshots">AWS
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
         * <p>Returns information about Amazon Aurora DB clusters and Multi-AZ DB clusters.
         * This API supports pagination.</p> <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p> <p>This operation can also return information for Amazon
         * Neptune DB instances and Amazon DocumentDB instances.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusters">AWS
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
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBEngineVersions">AWS
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
         * <p>Displays backups for both current and deleted instances. For example, use
         * this operation to find details about automated backups for previously deleted
         * instances. Current instances with retention periods greater than zero (0) are
         * returned for both the <code>DescribeDBInstanceAutomatedBackups</code> and
         * <code>DescribeDBInstances</code> operations.</p> <p>All parameters are
         * optional.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstanceAutomatedBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstanceAutomatedBackupsOutcome DescribeDBInstanceAutomatedBackups(const Model::DescribeDBInstanceAutomatedBackupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBInstanceAutomatedBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBInstanceAutomatedBackupsOutcomeCallable DescribeDBInstanceAutomatedBackupsCallable(const Model::DescribeDBInstanceAutomatedBackupsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBInstanceAutomatedBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBInstanceAutomatedBackupsAsync(const Model::DescribeDBInstanceAutomatedBackupsRequest& request, const DescribeDBInstanceAutomatedBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about provisioned RDS instances. This API supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * Neptune DB instances and Amazon DocumentDB instances.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstances">AWS
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
         * <p>Returns a list of DB log files for the DB instance.</p> <p>This command
         * doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBLogFiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request) const;

        /**
         * An Async wrapper for DescribeDBLogFiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParameterGroupsOutcome DescribeDBParameterGroups(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParameterGroupsOutcomeCallable DescribeDBParameterGroupsCallable(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParameterGroupsAsync(const Model::DescribeDBParameterGroupsRequest& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeDBParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB proxies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxiesOutcome DescribeDBProxies(const Model::DescribeDBProxiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxiesOutcomeCallable DescribeDBProxiesCallable(const Model::DescribeDBProxiesRequest& request) const;

        /**
         * An Async wrapper for DescribeDBProxies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxiesAsync(const Model::DescribeDBProxiesRequest& request, const DescribeDBProxiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB proxy endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyEndpointsOutcome DescribeDBProxyEndpoints(const Model::DescribeDBProxyEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxyEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxyEndpointsOutcomeCallable DescribeDBProxyEndpointsCallable(const Model::DescribeDBProxyEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBProxyEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxyEndpointsAsync(const Model::DescribeDBProxyEndpointsRequest& request, const DescribeDBProxyEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB proxy target groups, represented by
         * <code>DBProxyTargetGroup</code> data structures.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyTargetGroupsOutcome DescribeDBProxyTargetGroups(const Model::DescribeDBProxyTargetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxyTargetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxyTargetGroupsOutcomeCallable DescribeDBProxyTargetGroupsCallable(const Model::DescribeDBProxyTargetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBProxyTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxyTargetGroupsAsync(const Model::DescribeDBProxyTargetGroupsRequest& request, const DescribeDBProxyTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about <code>DBProxyTarget</code> objects. This API
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBProxyTargetsOutcome DescribeDBProxyTargets(const Model::DescribeDBProxyTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBProxyTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBProxyTargetsOutcomeCallable DescribeDBProxyTargetsCallable(const Model::DescribeDBProxyTargetsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBProxyTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBProxyTargetsAsync(const Model::DescribeDBProxyTargetsRequest& request, const DescribeDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>DBSecurityGroup</code> descriptions. If a
         * <code>DBSecurityGroupName</code> is specified, the list will contain only the
         * descriptions of the specified DB security group.</p>  <p>EC2-Classic was
         * retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC,
         * we recommend that you migrate as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DB snapshot attribute names and values for a manual DB
         * snapshot.</p> <p>When sharing snapshots with other Amazon Web Services accounts,
         * <code>DescribeDBSnapshotAttributes</code> returns the <code>restore</code>
         * attribute and a list of IDs for the Amazon Web Services accounts that are
         * authorized to copy or restore the manual DB snapshot. If <code>all</code> is
         * included in the list of values for the <code>restore</code> attribute, then the
         * manual DB snapshot is public and can be copied or restored by all Amazon Web
         * Services accounts.</p> <p>To add or remove access for an Amazon Web Services
         * account to copy or restore a manual DB snapshot, or to make the manual DB
         * snapshot public or private, use the <code>ModifyDBSnapshotAttribute</code> API
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSnapshotAttributesOutcome DescribeDBSnapshotAttributes(const Model::DescribeDBSnapshotAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSnapshotAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSnapshotAttributesOutcomeCallable DescribeDBSnapshotAttributesCallable(const Model::DescribeDBSnapshotAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeDBSnapshotAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSnapshotAttributesAsync(const Model::DescribeDBSnapshotAttributesRequest& request, const DescribeDBSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DB snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSnapshotsOutcome DescribeDBSnapshots(const Model::DescribeDBSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDBSnapshotsOutcomeCallable DescribeDBSnapshotsCallable(const Model::DescribeDBSnapshotsRequest& request) const;

        /**
         * An Async wrapper for DescribeDBSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDBSnapshotsAsync(const Model::DescribeDBSnapshotsRequest& request, const DescribeDBSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSubnetGroups">AWS
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
         * database engine.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
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
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineDefaultParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeEngineDefaultParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngineDefaultParametersAsync(const Model::DescribeEngineDefaultParametersRequest& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type. You can also see this list in the "Amazon RDS event
         * categories and event messages" section of the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
         * <i>Amazon RDS User Guide</i> </a> or the <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
         * <i>Amazon Aurora User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventCategories">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEventSubscriptions">AWS
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
         * <p>Returns events related to DB instances, DB clusters, DB parameter groups, DB
         * security groups, DB snapshots, DB cluster snapshots, and RDS Proxies for the
         * past 14 days. Events specific to a particular DB instance, DB cluster, DB
         * parameter group, DB security group, DB snapshot, DB cluster snapshot group, or
         * RDS Proxy can be obtained by providing the name as a parameter.</p> <p>For more
         * information on working with events, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/working-with-events.html">Monitoring
         * Amazon RDS events</a> in the <i>Amazon RDS User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/working-with-events.html">Monitoring
         * Amazon Aurora events</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>By default, RDS returns events that were generated in the past hour.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEvents">AWS
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
         * <p>Returns information about a snapshot export to Amazon S3. This API operation
         * supports pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeExportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const Model::DescribeExportTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeExportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportTasksAsync(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about Aurora global database clusters. This API supports
         * pagination.</p> <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeGlobalClusters">AWS
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
         * <p>Describes all available options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroupOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptionGroupOptionsOutcome DescribeOptionGroupOptions(const Model::DescribeOptionGroupOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOptionGroupOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptionGroupOptionsOutcomeCallable DescribeOptionGroupOptionsCallable(const Model::DescribeOptionGroupOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeOptionGroupOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptionGroupOptionsAsync(const Model::DescribeOptionGroupOptionsRequest& request, const DescribeOptionGroupOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available option groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOptionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptionGroupsOutcome DescribeOptionGroups(const Model::DescribeOptionGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOptionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptionGroupsOutcomeCallable DescribeOptionGroupsCallable(const Model::DescribeOptionGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeOptionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptionGroupsAsync(const Model::DescribeOptionGroupsRequest& request, const DescribeOptionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of orderable DB instance options for the specified DB engine,
         * DB engine version, and DB instance class.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
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
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribePendingMaintenanceActions">AWS
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
         * <p>Returns information about reserved DB instances for this account, or about a
         * specified reserved DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedDBInstancesOutcome DescribeReservedDBInstances(const Model::DescribeReservedDBInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedDBInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedDBInstancesOutcomeCallable DescribeReservedDBInstancesCallable(const Model::DescribeReservedDBInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedDBInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedDBInstancesAsync(const Model::DescribeReservedDBInstancesRequest& request, const DescribeReservedDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists available reserved DB instance offerings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstancesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedDBInstancesOfferingsOutcome DescribeReservedDBInstancesOfferings(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedDBInstancesOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedDBInstancesOfferingsOutcomeCallable DescribeReservedDBInstancesOfferingsCallable(const Model::DescribeReservedDBInstancesOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeReservedDBInstancesOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedDBInstancesOfferingsAsync(const Model::DescribeReservedDBInstancesOfferingsRequest& request, const DescribeReservedDBInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the source Amazon Web Services Regions where the current
         * Amazon Web Services Region can create a read replica, copy a DB snapshot from,
         * or replicate automated backups from.</p> <p>Use this operation to determine
         * whether cross-Region features are supported between other Regions and your
         * current Region. This operation supports pagination.</p> <p>To return information
         * about the Regions that are enabled for your account, or all Regions, use the EC2
         * operation <code>DescribeRegions</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeRegions.html">
         * DescribeRegions</a> in the <i>Amazon EC2 API Reference</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeSourceRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceRegionsOutcome DescribeSourceRegions(const Model::DescribeSourceRegionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSourceRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSourceRegionsOutcomeCallable DescribeSourceRegionsCallable(const Model::DescribeSourceRegionsRequest& request) const;

        /**
         * An Async wrapper for DescribeSourceRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSourceRegionsAsync(const Model::DescribeSourceRegionsRequest& request, const DescribeSourceRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can call <code>DescribeValidDBInstanceModifications</code> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <code>ModifyDBInstance</code>.</p> <p>This command doesn't apply
         * to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcome DescribeValidDBInstanceModifications(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeValidDBInstanceModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcomeCallable DescribeValidDBInstanceModificationsCallable(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * An Async wrapper for DescribeValidDBInstanceModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeValidDBInstanceModificationsAsync(const Model::DescribeValidDBInstanceModificationsRequest& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads all or a portion of the specified log file, up to 1 MB in size.</p>
         * <p>This command doesn't apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortion">AWS
         * API Reference</a></p>
         */
        virtual Model::DownloadDBLogFilePortionOutcome DownloadDBLogFilePortion(const Model::DownloadDBLogFilePortionRequest& request) const;

        /**
         * A Callable wrapper for DownloadDBLogFilePortion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DownloadDBLogFilePortionOutcomeCallable DownloadDBLogFilePortionCallable(const Model::DownloadDBLogFilePortionRequest& request) const;

        /**
         * An Async wrapper for DownloadDBLogFilePortion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DownloadDBLogFilePortionAsync(const Model::DownloadDBLogFilePortionRequest& request, const DownloadDBLogFilePortionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>For an Aurora DB cluster, failover
         * for a DB cluster promotes one of the Aurora Replicas (read-only instances) in
         * the DB cluster to be the primary DB instance (the cluster writer).</p> <p>For a
         * Multi-AZ DB cluster, failover for a DB cluster promotes one of the readable
         * standby DB instances (read-only instances) in the DB cluster to be the primary
         * DB instance (the cluster writer).</p> <p>An Amazon Aurora DB cluster
         * automatically fails over to an Aurora Replica, if one exists, when the primary
         * DB instance fails. A Multi-AZ DB cluster automatically fails over to a readable
         * standby DB instance when the primary DB instance fails.</p> <p>To simulate a
         * failure of a primary instance for testing, you can force a failover. Because
         * each instance in a DB cluster has its own endpoint address, make sure to clean
         * up and re-establish any existing connections that use those endpoint addresses
         * when the failover is complete.</p> <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverDBCluster">AWS
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
         * <p>Initiates the failover process for an Aurora global database
         * (<a>GlobalCluster</a>).</p> <p>A failover for an Aurora global database promotes
         * one of secondary read-only DB clusters to be the primary DB cluster and demotes
         * the primary DB cluster to being a secondary (read-only) DB cluster. In other
         * words, the role of the current primary DB cluster and the selected (target) DB
         * cluster are switched. The selected secondary DB cluster assumes full read/write
         * capabilities for the Aurora global database.</p> <p>For more information about
         * failing over an Amazon Aurora global database, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.html#aurora-global-database-disaster-recovery.managed-failover">Managed
         * planned failover for Amazon Aurora global databases</a> in the <i>Amazon Aurora
         * User Guide</i>.</p>  <p>This action applies to <a>GlobalCluster</a>
         * (Aurora global databases) only. Use this action only on healthy Aurora global
         * databases with running Aurora DB clusters and no Region-wide outages, to test
         * disaster recovery scenarios or to reconfigure your Aurora global database
         * topology.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/FailoverGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverGlobalClusterOutcome FailoverGlobalCluster(const Model::FailoverGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for FailoverGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FailoverGlobalClusterOutcomeCallable FailoverGlobalClusterCallable(const Model::FailoverGlobalClusterRequest& request) const;

        /**
         * An Async wrapper for FailoverGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FailoverGlobalClusterAsync(const Model::FailoverGlobalClusterRequest& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on an Amazon RDS resource.</p> <p>For an overview on tagging
         * an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ListTagsForResource">AWS
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
         * <p>Changes the audit policy state of a database activity stream to either locked
         * (default) or unlocked. A locked policy is read-only, whereas an unlocked policy
         * is read/write. If your activity stream is started and locked, you can unlock it,
         * customize your audit policy, and then lock your activity stream. Restarting the
         * activity stream isn't required. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/DBActivityStreams.Modifying.html">
         * Modifying a database activity stream</a> in the <i>Amazon RDS User Guide</i>.
         * </p> <p>This operation is supported for RDS for Oracle only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyActivityStreamOutcome ModifyActivityStream(const Model::ModifyActivityStreamRequest& request) const;

        /**
         * A Callable wrapper for ModifyActivityStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyActivityStreamOutcomeCallable ModifyActivityStreamCallable(const Model::ModifyActivityStreamRequest& request) const;

        /**
         * An Async wrapper for ModifyActivityStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyActivityStreamAsync(const Model::ModifyActivityStreamRequest& request, const ModifyActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Override the system-default Secure Sockets Layer/Transport Layer Security
         * (SSL/TLS) certificate for Amazon RDS for new DB instances, or remove the
         * override.</p> <p>By using this operation, you can specify an RDS-approved
         * SSL/TLS certificate for new DB instances that is different from the default
         * certificate provided by RDS. You can also use this operation to remove the
         * override, so that new DB instances use the default certificate provided by
         * RDS.</p> <p>You might need to override the default certificate in the following
         * situations:</p> <ul> <li> <p>You already migrated your applications to support
         * the latest certificate authority (CA) certificate, but the new CA certificate is
         * not yet the RDS default CA certificate for the specified Amazon Web Services
         * Region.</p> </li> <li> <p>RDS has already moved to a new default CA certificate
         * for the specified Amazon Web Services Region, but you are still in the process
         * of supporting the new CA certificate. In this case, you temporarily need
         * additional time to finish your application changes.</p> </li> </ul> <p>For more
         * information about rotating your SSL/TLS certificate for RDS DB engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon RDS User Guide</i>.</p>
         * <p>For more information about rotating your SSL/TLS certificate for Aurora DB
         * engines, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL-certificate-rotation.html">
         * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon Aurora User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCertificatesOutcome ModifyCertificates(const Model::ModifyCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ModifyCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCertificatesOutcomeCallable ModifyCertificatesCallable(const Model::ModifyCertificatesRequest& request) const;

        /**
         * An Async wrapper for ModifyCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCertificatesAsync(const Model::ModifyCertificatesRequest& request, const ModifyCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the capacity of an Aurora Serverless v1 DB cluster to a specific
         * value.</p> <p>Aurora Serverless v1 scales seamlessly based on the workload on
         * the DB cluster. In some cases, the capacity might not scale fast enough to meet
         * a sudden change in workload, such as a large number of new transactions. Call
         * <code>ModifyCurrentDBClusterCapacity</code> to set the capacity explicitly.</p>
         * <p>After this call sets the DB cluster capacity, Aurora Serverless v1 can
         * automatically scale the DB cluster based on the cooldown period for scaling up
         * and the cooldown period for scaling down.</p> <p>For more information about
         * Aurora Serverless v1, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
         * Amazon Aurora Serverless v1</a> in the <i>Amazon Aurora User Guide</i>.</p>
         *  <p>If you call <code>ModifyCurrentDBClusterCapacity</code> with the
         * default <code>TimeoutAction</code>, connections that prevent Aurora Serverless
         * v1 from finding a scaling point might be dropped. For more information about
         * scaling points, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.how-it-works.html#aurora-serverless.how-it-works.auto-scaling">
         * Autoscaling for Aurora Serverless v1</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>   <p>This action only applies to Aurora
         * Serverless v1 DB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCurrentDBClusterCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCurrentDBClusterCapacityOutcome ModifyCurrentDBClusterCapacity(const Model::ModifyCurrentDBClusterCapacityRequest& request) const;

        /**
         * A Callable wrapper for ModifyCurrentDBClusterCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCurrentDBClusterCapacityOutcomeCallable ModifyCurrentDBClusterCapacityCallable(const Model::ModifyCurrentDBClusterCapacityRequest& request) const;

        /**
         * An Async wrapper for ModifyCurrentDBClusterCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCurrentDBClusterCapacityAsync(const Model::ModifyCurrentDBClusterCapacityRequest& request, const ModifyCurrentDBClusterCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the status of a custom engine version (CEV). You can find CEVs to
         * modify by calling <code>DescribeDBEngineVersions</code>.</p>  <p>The
         * MediaImport service that imports files from Amazon S3 to create CEVs isn't
         * integrated with Amazon Web Services CloudTrail. If you turn on data logging for
         * Amazon RDS in CloudTrail, calls to the <code>ModifyCustomDbEngineVersion</code>
         * event aren't logged. However, you might see calls from the API gateway that
         * accesses your Amazon S3 bucket. These calls originate from the MediaImport
         * service for the <code>ModifyCustomDbEngineVersion</code> event.</p> 
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.modify">Modifying
         * CEV status</a> in the <i>Amazon RDS User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyCustomDBEngineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCustomDBEngineVersionOutcome ModifyCustomDBEngineVersion(const Model::ModifyCustomDBEngineVersionRequest& request) const;

        /**
         * A Callable wrapper for ModifyCustomDBEngineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyCustomDBEngineVersionOutcomeCallable ModifyCustomDBEngineVersionCallable(const Model::ModifyCustomDBEngineVersionRequest& request) const;

        /**
         * An Async wrapper for ModifyCustomDBEngineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyCustomDBEngineVersionAsync(const Model::ModifyCustomDBEngineVersionRequest& request, const ModifyCustomDBEngineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the settings for an Amazon Aurora DB cluster or a Multi-AZ DB cluster.
         * You can change one or more settings by specifying these parameters and the new
         * values in the request.</p> <p>For more information on Amazon Aurora DB clusters,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBCluster">AWS
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
         * <p>Modifies the properties of an endpoint in an Amazon Aurora DB cluster.</p>
         *  <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterEndpointOutcome ModifyDBClusterEndpoint(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBClusterEndpointOutcomeCallable ModifyDBClusterEndpointCallable(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * An Async wrapper for ModifyDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBClusterEndpointAsync(const Model::ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>After you
         * create a DB cluster parameter group, you should wait at least 5 minutes before
         * creating your first DB cluster that uses that DB cluster parameter group as the
         * default parameter group. This allows Amazon RDS to fully complete the create
         * action before the parameter group is used as the default for a new DB cluster.
         * This is especially important for parameters that are critical when creating the
         * default database for a DB cluster, such as the character set for the default
         * database defined by the <code>character_set_database</code> parameter. You can
         * use the <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <code>DescribeDBClusterParameters</code> operation to verify that your DB
         * cluster parameter group has been created or modified.</p> <p>If the modified DB
         * cluster parameter group is used by an Aurora Serverless v1 cluster, Aurora
         * applies the update immediately. The cluster restart might interrupt your
         * workload. In that case, your application must reopen any connections and retry
         * any transactions that were active when the parameter changes took effect.</p>
         *  <p>For more information on Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterParameterGroup">AWS
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
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other Amazon Web Services accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon Web Services accounts that are authorized to restore
         * the manual DB cluster snapshot. Use the value <code>all</code> to make the
         * manual DB cluster snapshot public, which means that it can be copied or restored
         * by all Amazon Web Services accounts.</p>  <p>Don't add the
         * <code>all</code> value for any manual DB cluster snapshots that contain private
         * information that you don't want available to all Amazon Web Services
         * accounts.</p>  <p>If a manual DB cluster snapshot is encrypted, it can be
         * shared, but only by specifying a list of authorized Amazon Web Services account
         * IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code>
         * as a value for that parameter in this case.</p> <p>To view which Amazon Web
         * Services accounts have access to copy or restore a manual DB cluster snapshot,
         * or whether a manual DB cluster snapshot is public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API operation. The accounts are
         * returned as values for the <code>restore</code> attribute.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
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
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <code>DescribeValidDBInstanceModifications</code> before you call
         * <code>ModifyDBInstance</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBInstance">AWS
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
         * <p>Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>After you
         * modify a DB parameter group, you should wait at least 5 minutes before creating
         * your first DB instance that uses that DB parameter group as the default
         * parameter group. This allows Amazon RDS to fully complete the modify action
         * before the parameter group is used as the default for a new DB instance. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB instance, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the <a
         * href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBParameterGroupOutcome ModifyDBParameterGroup(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBParameterGroupOutcomeCallable ModifyDBParameterGroupCallable(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBParameterGroupAsync(const Model::ModifyDBParameterGroupRequest& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings for an existing DB proxy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyOutcome ModifyDBProxy(const Model::ModifyDBProxyRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBProxyOutcomeCallable ModifyDBProxyCallable(const Model::ModifyDBProxyRequest& request) const;

        /**
         * An Async wrapper for ModifyDBProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBProxyAsync(const Model::ModifyDBProxyRequest& request, const ModifyDBProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings for an existing DB proxy endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyEndpointOutcome ModifyDBProxyEndpoint(const Model::ModifyDBProxyEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBProxyEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBProxyEndpointOutcomeCallable ModifyDBProxyEndpointCallable(const Model::ModifyDBProxyEndpointRequest& request) const;

        /**
         * An Async wrapper for ModifyDBProxyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBProxyEndpointAsync(const Model::ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the properties of a <code>DBProxyTargetGroup</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBProxyTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBProxyTargetGroupOutcome ModifyDBProxyTargetGroup(const Model::ModifyDBProxyTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBProxyTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBProxyTargetGroupOutcomeCallable ModifyDBProxyTargetGroupCallable(const Model::ModifyDBProxyTargetGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyDBProxyTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBProxyTargetGroupAsync(const Model::ModifyDBProxyTargetGroupRequest& request, const ModifyDBProxyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a manual DB snapshot with a new engine version. The snapshot can be
         * encrypted or unencrypted, but not shared or public. </p> <p>Amazon RDS supports
         * upgrading DB snapshots for MySQL, PostgreSQL, and Oracle. This command doesn't
         * apply to RDS Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSnapshotOutcome ModifyDBSnapshot(const Model::ModifyDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBSnapshotOutcomeCallable ModifyDBSnapshotCallable(const Model::ModifyDBSnapshotRequest& request) const;

        /**
         * An Async wrapper for ModifyDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSnapshotAsync(const Model::ModifyDBSnapshotRequest& request, const ModifyDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB snapshot.</p> <p>To share a manual DB snapshot with other Amazon Web
         * Services accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon Web Services accounts that are authorized to restore
         * the manual DB snapshot. Uses the value <code>all</code> to make the manual DB
         * snapshot public, which means it can be copied or restored by all Amazon Web
         * Services accounts.</p>  <p>Don't add the <code>all</code> value for any
         * manual DB snapshots that contain private information that you don't want
         * available to all Amazon Web Services accounts.</p>  <p>If the manual DB
         * snapshot is encrypted, it can be shared, but only by specifying a list of
         * authorized Amazon Web Services account IDs for the <code>ValuesToAdd</code>
         * parameter. You can't use <code>all</code> as a value for that parameter in this
         * case.</p> <p>To view which Amazon Web Services accounts have access to copy or
         * restore a manual DB snapshot, or whether a manual DB snapshot public or private,
         * use the <a>DescribeDBSnapshotAttributes</a> API operation. The accounts are
         * returned as values for the <code>restore</code> attribute.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSnapshotAttributeOutcome ModifyDBSnapshotAttribute(const Model::ModifyDBSnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBSnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDBSnapshotAttributeOutcomeCallable ModifyDBSnapshotAttributeCallable(const Model::ModifyDBSnapshotAttributeRequest& request) const;

        /**
         * An Async wrapper for ModifyDBSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDBSnapshotAttributeAsync(const Model::ModifyDBSnapshotAttributeRequest& request, const ModifyDBSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSubnetGroup">AWS
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
         * <p>Modifies an existing RDS event notification subscription. You can't modify
         * the source identifiers using this call. To change source identifiers for a
         * subscription, use the <code>AddSourceIdentifierToSubscription</code> and
         * <code>RemoveSourceIdentifierFromSubscription</code> calls.</p> <p>You can see a
         * list of the event categories for a given source type (<code>SourceType</code>)
         * in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a>
         * in the <i>Amazon RDS User Guide</i> or by using the
         * <code>DescribeEventCategories</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyEventSubscription">AWS
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
         * <p>Modify a setting for an Amazon Aurora global cluster. You can change one or
         * more database configuration parameters by specifying these parameters and the
         * new values in the request. For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This action only applies to Aurora DB clusters.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyGlobalCluster">AWS
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
         * <p>Modifies an existing option group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyOptionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyOptionGroupOutcome ModifyOptionGroup(const Model::ModifyOptionGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyOptionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyOptionGroupOutcomeCallable ModifyOptionGroupCallable(const Model::ModifyOptionGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyOptionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyOptionGroupAsync(const Model::ModifyOptionGroupRequest& request, const ModifyOptionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Promotes a read replica DB instance to a standalone DB instance.</p> 
         * <ul> <li> <p>Backup duration is a function of the amount of changes to the
         * database since the previous backup. If you plan to promote a read replica to a
         * standalone instance, we recommend that you enable backups and complete at least
         * one backup prior to promotion. In addition, a read replica cannot be promoted to
         * a standalone instance when it is in the <code>backing-up</code> status. If you
         * have enabled backups on your read replica, configure the automated backup window
         * so that daily backups do not interfere with read replica promotion.</p> </li>
         * <li> <p>This command doesn't apply to Aurora MySQL, Aurora PostgreSQL, or RDS
         * Custom.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaOutcome PromoteReadReplica(const Model::PromoteReadReplicaRequest& request) const;

        /**
         * A Callable wrapper for PromoteReadReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PromoteReadReplicaOutcomeCallable PromoteReadReplicaCallable(const Model::PromoteReadReplicaRequest& request) const;

        /**
         * An Async wrapper for PromoteReadReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PromoteReadReplicaAsync(const Model::PromoteReadReplicaRequest& request, const PromoteReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Promotes a read replica DB cluster to a standalone DB cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaDBClusterOutcome PromoteReadReplicaDBCluster(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * A Callable wrapper for PromoteReadReplicaDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PromoteReadReplicaDBClusterOutcomeCallable PromoteReadReplicaDBClusterCallable(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * An Async wrapper for PromoteReadReplicaDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PromoteReadReplicaDBClusterAsync(const Model::PromoteReadReplicaDBClusterRequest& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchases a reserved DB instance offering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PurchaseReservedDBInstancesOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedDBInstancesOfferingOutcome PurchaseReservedDBInstancesOffering(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedDBInstancesOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedDBInstancesOfferingOutcomeCallable PurchaseReservedDBInstancesOfferingCallable(const Model::PurchaseReservedDBInstancesOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseReservedDBInstancesOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedDBInstancesOfferingAsync(const Model::PurchaseReservedDBInstancesOfferingRequest& request, const PurchaseReservedDBInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You might need to reboot your DB cluster, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB cluster
         * parameter group associated with the DB cluster, reboot the DB cluster for the
         * changes to take effect.</p> <p>Rebooting a DB cluster restarts the database
         * engine service. Rebooting a DB cluster results in a momentary outage, during
         * which the DB cluster status is set to rebooting.</p> <p>Use this operation only
         * for a non-Aurora Multi-AZ DB cluster.</p> <p>For more information on Multi-AZ DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBClusterOutcome RebootDBCluster(const Model::RebootDBClusterRequest& request) const;

        /**
         * A Callable wrapper for RebootDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootDBClusterOutcomeCallable RebootDBClusterCallable(const Model::RebootDBClusterRequest& request) const;

        /**
         * An Async wrapper for RebootDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootDBClusterAsync(const Model::RebootDBClusterRequest& request, const RebootDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect.</p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting.</p> <p>For more
         * information about rebooting, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_RebootInstance.html">Rebooting
         * a DB Instance</a> in the <i>Amazon RDS User Guide.</i> </p> <p>This command
         * doesn't apply to RDS Custom.</p> <p>If your DB instance is part of a Multi-AZ DB
         * cluster, you can reboot the DB cluster with the <code>RebootDBCluster</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBInstance">AWS
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
         * <p>Associate one or more <code>DBProxyTarget</code> data structures with a
         * <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RegisterDBProxyTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDBProxyTargetsOutcome RegisterDBProxyTargets(const Model::RegisterDBProxyTargetsRequest& request) const;

        /**
         * A Callable wrapper for RegisterDBProxyTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDBProxyTargetsOutcomeCallable RegisterDBProxyTargetsCallable(const Model::RegisterDBProxyTargetsRequest& request) const;

        /**
         * An Async wrapper for RegisterDBProxyTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDBProxyTargetsAsync(const Model::RegisterDBProxyTargetsRequest& request, const RegisterDBProxyTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches an Aurora secondary cluster from an Aurora global database cluster.
         * The cluster becomes a standalone cluster with read-write capability instead of
         * being read-only and receiving data from a primary cluster in a different
         * Region.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveFromGlobalCluster">AWS
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
         * <p>Removes the asssociation of an Amazon Web Services Identity and Access
         * Management (IAM) role from a DB cluster.</p> <p>For more information on Amazon
         * Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBClusterOutcome RemoveRoleFromDBCluster(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * A Callable wrapper for RemoveRoleFromDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromDBClusterOutcomeCallable RemoveRoleFromDBClusterCallable(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * An Async wrapper for RemoveRoleFromDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromDBClusterAsync(const Model::RemoveRoleFromDBClusterRequest& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Amazon Web Services Identity and Access Management (IAM)
         * role from a DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveRoleFromDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBInstanceOutcome RemoveRoleFromDBInstance(const Model::RemoveRoleFromDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for RemoveRoleFromDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromDBInstanceOutcomeCallable RemoveRoleFromDBInstanceCallable(const Model::RemoveRoleFromDBInstanceRequest& request) const;

        /**
         * An Async wrapper for RemoveRoleFromDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromDBInstanceAsync(const Model::RemoveRoleFromDBInstanceRequest& request, const RemoveRoleFromDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a source identifier from an existing RDS event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
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
         * <p>Removes metadata tags from an Amazon RDS resource.</p> <p>For an overview on
         * tagging an Amazon RDS resource, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging
         * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RemoveTagsFromResource">AWS
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
         * <p>Modifies the parameters of a DB cluster parameter group to the default value.
         * To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters.</p> <p>When resetting the entire
         * group, dynamic parameters are updated immediately and static parameters are set
         * to <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request. You must call
         * <code>RebootDBInstance</code> for every DB instance in your DB cluster that you
         * want the updated static parameter to apply to.</p> <p>For more information on
         * Amazon Aurora DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBClusterParameterGroup">AWS
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
         * <p>Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters, provide a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBParameterGroupOutcome ResetDBParameterGroup(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDBParameterGroupOutcomeCallable ResetDBParameterGroupCallable(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * An Async wrapper for ResetDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDBParameterGroupAsync(const Model::ResetDBParameterGroupRequest& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Aurora DB cluster from MySQL data stored in an Amazon S3
         * bucket. Amazon RDS must be authorized to access the Amazon S3 bucket and the
         * data must be created using the Percona XtraBackup utility as described in <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Migrating.ExtMySQL.html#AuroraMySQL.Migrating.ExtMySQL.S3">
         * Migrating Data from MySQL by Using an Amazon S3 Bucket</a> in the <i>Amazon
         * Aurora User Guide</i>.</p>  <p>This action only restores the DB cluster,
         * not the DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromS3</code> action has completed and the DB cluster is
         * available.</p>  <p>For more information on Amazon Aurora, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> 
         * <p>This action only applies to Aurora DB clusters. The source DB engine must be
         * MySQL.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromS3">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromS3Outcome RestoreDBClusterFromS3(const Model::RestoreDBClusterFromS3Request& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterFromS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBClusterFromS3OutcomeCallable RestoreDBClusterFromS3Callable(const Model::RestoreDBClusterFromS3Request& request) const;

        /**
         * An Async wrapper for RestoreDBClusterFromS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBClusterFromS3Async(const Model::RestoreDBClusterFromS3Request& request, const RestoreDBClusterFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot.</p>
         * <p>The target DB cluster is created from the source snapshot with a default
         * configuration. If you don't specify a security group, the new DB cluster is
         * associated with the default security group.</p>  <p>This action only
         * restores the DB cluster, not the DB instances for that DB cluster. You must
         * invoke the <code>CreateDBInstance</code> action to create DB instances for the
         * restored DB cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterFromSnapshot</code> action has completed and the DB
         * cluster is available.</p>  <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromSnapshot">AWS
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
         * <p>Restores a DB cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security
         * group.</p>  <p>For Aurora, this action only restores the DB cluster, not
         * the DB instances for that DB cluster. You must invoke the
         * <code>CreateDBInstance</code> action to create DB instances for the restored DB
         * cluster, specifying the identifier of the restored DB cluster in
         * <code>DBClusterIdentifier</code>. You can create DB instances only after the
         * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB
         * cluster is available.</p>  <p>For more information on Amazon Aurora DB
         * clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html">
         * What is Amazon Aurora?</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>For
         * more information on Multi-AZ DB clusters, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
         * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
         * RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterToPointInTime">AWS
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
         * <p>Creates a new DB instance from a DB snapshot. The target database is created
         * from the source database restore point with most of the source's original
         * configuration, including the default security group and DB parameter group. By
         * default, the new DB instance is created as a Single-AZ deployment, except when
         * the instance is a SQL Server instance that has an option group associated with
         * mirroring. In this case, the instance becomes a Multi-AZ deployment, not a
         * Single-AZ deployment.</p> <p>If you want to replace your original DB instance
         * with the new, restored DB instance, then rename your original DB instance before
         * you call the RestoreDBInstanceFromDBSnapshot action. RDS doesn't allow two DB
         * instances with the same name. After you have renamed your original DB instance
         * with a different identifier, then you can pass the original name of the DB
         * instance as the DBInstanceIdentifier in the call to the
         * RestoreDBInstanceFromDBSnapshot action. The result is that you replace the
         * original DB instance with the DB instance created from the snapshot.</p> <p>If
         * you are restoring from a shared manual DB snapshot, the
         * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
         *  <p>This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For
         * Aurora, use <code>RestoreDBClusterFromSnapshot</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromDBSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceFromDBSnapshotOutcome RestoreDBInstanceFromDBSnapshot(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBInstanceFromDBSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceFromDBSnapshotOutcomeCallable RestoreDBInstanceFromDBSnapshotCallable(const Model::RestoreDBInstanceFromDBSnapshotRequest& request) const;

        /**
         * An Async wrapper for RestoreDBInstanceFromDBSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceFromDBSnapshotAsync(const Model::RestoreDBInstanceFromDBSnapshotRequest& request, const RestoreDBInstanceFromDBSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Amazon Relational Database Service (Amazon RDS) supports importing MySQL
         * databases by using backup files. You can create a backup of your on-premises
         * database, store it on Amazon Simple Storage Service (Amazon S3), and then
         * restore the backup file onto a new Amazon RDS DB instance running MySQL. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html">Importing
         * Data into an Amazon RDS MySQL DB Instance</a> in the <i>Amazon RDS User
         * Guide.</i> </p> <p>This command doesn't apply to RDS Custom.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromS3">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceFromS3Outcome RestoreDBInstanceFromS3(const Model::RestoreDBInstanceFromS3Request& request) const;

        /**
         * A Callable wrapper for RestoreDBInstanceFromS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceFromS3OutcomeCallable RestoreDBInstanceFromS3Callable(const Model::RestoreDBInstanceFromS3Request& request) const;

        /**
         * An Async wrapper for RestoreDBInstanceFromS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceFromS3Async(const Model::RestoreDBInstanceFromS3Request& request, const RestoreDBInstanceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a DB instance to an arbitrary point in time. You can restore to any
         * point in time before the time identified by the LatestRestorableTime property.
         * You can restore to a point up to the number of days specified by the
         * BackupRetentionPeriod property.</p> <p>The target database is created with most
         * of the original configuration, but in a system-selected Availability Zone, with
         * the default security group, the default subnet group, and the default DB
         * parameter group. By default, the new DB instance is created as a single-AZ
         * deployment except when the instance is a SQL Server instance that has an option
         * group that is associated with mirroring; in this case, the instance becomes a
         * mirrored deployment and not a single-AZ deployment.</p>  <p>This command
         * doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
         * <code>RestoreDBClusterToPointInTime</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBInstanceToPointInTimeOutcome RestoreDBInstanceToPointInTime(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBInstanceToPointInTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDBInstanceToPointInTimeOutcomeCallable RestoreDBInstanceToPointInTimeCallable(const Model::RestoreDBInstanceToPointInTimeRequest& request) const;

        /**
         * An Async wrapper for RestoreDBInstanceToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDBInstanceToPointInTimeAsync(const Model::RestoreDBInstanceToPointInTimeRequest& request, const RestoreDBInstanceToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or
         * EC2 or VPC security groups. Required parameters for this API are one of CIDRIP,
         * EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
         * EC2SecurityGroupName or EC2SecurityGroupId).</p>  <p>EC2-Classic was
         * retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC,
         * we recommend that you migrate as soon as possible. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
         * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 User Guide</i>, the blog <a
         * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
         * Networking is Retiring – Here’s How to Prepare</a>, and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving
         * a DB instance not in a VPC into a VPC</a> in the <i>Amazon RDS User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RevokeDBSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeDBSecurityGroupIngressOutcome RevokeDBSecurityGroupIngress(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

        /**
         * A Callable wrapper for RevokeDBSecurityGroupIngress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeDBSecurityGroupIngressOutcomeCallable RevokeDBSecurityGroupIngressCallable(const Model::RevokeDBSecurityGroupIngressRequest& request) const;

        /**
         * An Async wrapper for RevokeDBSecurityGroupIngress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeDBSecurityGroupIngressAsync(const Model::RevokeDBSecurityGroupIngressRequest& request, const RevokeDBSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a database activity stream to monitor activity on the database. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::StartActivityStreamOutcome StartActivityStream(const Model::StartActivityStreamRequest& request) const;

        /**
         * A Callable wrapper for StartActivityStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartActivityStreamOutcomeCallable StartActivityStreamCallable(const Model::StartActivityStreamRequest& request) const;

        /**
         * An Async wrapper for StartActivityStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartActivityStreamAsync(const Model::StartActivityStreamRequest& request, const StartActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an Amazon Aurora DB cluster that was stopped using the Amazon Web
         * Services console, the stop-db-cluster CLI command, or the StopDBCluster
         * action.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBCluster">AWS
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
         * <p>Starts an Amazon RDS DB instance that was stopped using the Amazon Web
         * Services console, the stop-db-instance CLI command, or the StopDBInstance
         * action.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StartInstance.html">
         * Starting an Amazon RDS DB instance That Was Previously Stopped</a> in the
         * <i>Amazon RDS User Guide.</i> </p>  <p>This command doesn't apply to RDS
         * Custom, Aurora MySQL, and Aurora PostgreSQL. For Aurora DB clusters, use
         * <code>StartDBCluster</code> instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBInstanceOutcome StartDBInstance(const Model::StartDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for StartDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDBInstanceOutcomeCallable StartDBInstanceCallable(const Model::StartDBInstanceRequest& request) const;

        /**
         * An Async wrapper for StartDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDBInstanceAsync(const Model::StartDBInstanceRequest& request, const StartDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables replication of automated backups to a different Amazon Web Services
         * Region.</p> <p>This command doesn't apply to RDS Custom.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another Amazon Web Services Region</a> in the
         * <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBInstanceAutomatedBackupsReplicationOutcome StartDBInstanceAutomatedBackupsReplication(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartDBInstanceAutomatedBackupsReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDBInstanceAutomatedBackupsReplicationOutcomeCallable StartDBInstanceAutomatedBackupsReplicationCallable(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * An Async wrapper for StartDBInstanceAutomatedBackupsReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDBInstanceAutomatedBackupsReplicationAsync(const Model::StartDBInstanceAutomatedBackupsReplicationRequest& request, const StartDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an export of a snapshot to Amazon S3. The provided IAM role must have
         * access to the S3 bucket.</p> <p>This command doesn't apply to RDS
         * Custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StartExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExportTaskOutcome StartExportTask(const Model::StartExportTaskRequest& request) const;

        /**
         * A Callable wrapper for StartExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExportTaskOutcomeCallable StartExportTaskCallable(const Model::StartExportTaskRequest& request) const;

        /**
         * An Async wrapper for StartExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExportTaskAsync(const Model::StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a database activity stream that was started using the Amazon Web
         * Services console, the <code>start-activity-stream</code> CLI command, or the
         * <code>StartActivityStream</code> action.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database
         * Activity Streams</a> in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopActivityStream">AWS
         * API Reference</a></p>
         */
        virtual Model::StopActivityStreamOutcome StopActivityStream(const Model::StopActivityStreamRequest& request) const;

        /**
         * A Callable wrapper for StopActivityStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopActivityStreamOutcomeCallable StopActivityStreamCallable(const Model::StopActivityStreamRequest& request) const;

        /**
         * An Async wrapper for StopActivityStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopActivityStreamAsync(const Model::StopActivityStreamRequest& request, const StopActivityStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an Amazon Aurora DB cluster. When you stop a DB cluster, Aurora retains
         * the DB cluster's metadata, including its endpoints and DB parameter groups.
         * Aurora also retains the transaction logs so you can do a point-in-time restore
         * if necessary.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html">
         * Stopping and Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
         * Guide</i>.</p>  <p>This action only applies to Aurora DB clusters.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBCluster">AWS
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

        /**
         * <p>Stops an Amazon RDS DB instance. When you stop a DB instance, Amazon RDS
         * retains the DB instance's metadata, including its endpoint, DB parameter group,
         * and option group membership. Amazon RDS also retains the transaction logs so you
         * can do a point-in-time restore if necessary.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StopInstance.html">
         * Stopping an Amazon RDS DB Instance Temporarily</a> in the <i>Amazon RDS User
         * Guide.</i> </p>  <p>This command doesn't apply to RDS Custom, Aurora
         * MySQL, and Aurora PostgreSQL. For Aurora clusters, use
         * <code>StopDBCluster</code> instead.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBInstanceOutcome StopDBInstance(const Model::StopDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for StopDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDBInstanceOutcomeCallable StopDBInstanceCallable(const Model::StopDBInstanceRequest& request) const;

        /**
         * An Async wrapper for StopDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDBInstanceAsync(const Model::StopDBInstanceRequest& request, const StopDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops automated backup replication for a DB instance.</p> <p>This command
         * doesn't apply to RDS Custom, Aurora MySQL, and Aurora PostgreSQL.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
         * Replicating Automated Backups to Another Amazon Web Services Region</a> in the
         * <i>Amazon RDS User Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/StopDBInstanceAutomatedBackupsReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBInstanceAutomatedBackupsReplicationOutcome StopDBInstanceAutomatedBackupsReplication(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * A Callable wrapper for StopDBInstanceAutomatedBackupsReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDBInstanceAutomatedBackupsReplicationOutcomeCallable StopDBInstanceAutomatedBackupsReplicationCallable(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request) const;

        /**
         * An Async wrapper for StopDBInstanceAutomatedBackupsReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDBInstanceAutomatedBackupsReplicationAsync(const Model::StopDBInstanceAutomatedBackupsReplicationRequest& request, const StopDBInstanceAutomatedBackupsReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Switches over a blue/green deployment.</p> <p>Before you switch over,
         * production traffic is routed to the databases in the blue environment. After you
         * switch over, production traffic is routed to the databases in the green
         * environment.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/blue-green-deployments.html">Using
         * Amazon RDS Blue/Green Deployments for database updates</a> in the <i>Amazon RDS
         * User Guide</i> and <a
         * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/blue-green-deployments.html">
         * Using Amazon RDS Blue/Green Deployments for database updates</a> in the
         * <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SwitchoverBlueGreenDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::SwitchoverBlueGreenDeploymentOutcome SwitchoverBlueGreenDeployment(const Model::SwitchoverBlueGreenDeploymentRequest& request) const;

        /**
         * A Callable wrapper for SwitchoverBlueGreenDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SwitchoverBlueGreenDeploymentOutcomeCallable SwitchoverBlueGreenDeploymentCallable(const Model::SwitchoverBlueGreenDeploymentRequest& request) const;

        /**
         * An Async wrapper for SwitchoverBlueGreenDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SwitchoverBlueGreenDeploymentAsync(const Model::SwitchoverBlueGreenDeploymentRequest& request, const SwitchoverBlueGreenDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Switches over an Oracle standby database in an Oracle Data Guard environment,
         * making it the new primary database. Issue this command in the Region that hosts
         * the current standby database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SwitchoverReadReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::SwitchoverReadReplicaOutcome SwitchoverReadReplica(const Model::SwitchoverReadReplicaRequest& request) const;

        /**
         * A Callable wrapper for SwitchoverReadReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SwitchoverReadReplicaOutcomeCallable SwitchoverReadReplicaCallable(const Model::SwitchoverReadReplicaRequest& request) const;

        /**
         * An Async wrapper for SwitchoverReadReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SwitchoverReadReplicaAsync(const Model::SwitchoverReadReplicaRequest& request, const SwitchoverReadReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<RDSEndpointProviderBase>& accessEndpointProvider();
    private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<RDSClient>;
        void init(const RDSClientConfiguration& clientConfiguration);

        RDSClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<RDSEndpointProviderBase> m_endpointProvider;
    };
  } // namespace RDS
} // namespace Aws
