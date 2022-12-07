/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/DatabaseMigrationServiceServiceClientModel.h>

namespace Aws
{
namespace DatabaseMigrationService
{
  /**
   * <fullname>Database Migration Service</fullname> <p>Database Migration Service
   * (DMS) can migrate your data to and from the most widely used commercial and
   * open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon
   * Redshift, MariaDB, Amazon Aurora, MySQL, and SAP Adaptive Server Enterprise
   * (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as
   * well as heterogeneous migrations between different database platforms, such as
   * Oracle to MySQL or SQL Server to PostgreSQL.</p> <p>For more information about
   * DMS, see <a
   * href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
   * Database Migration Service?</a> in the <i>Database Migration Service User
   * Guide.</i> </p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DatabaseMigrationServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DatabaseMigrationServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration = Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration(),
                                       std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration = Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DatabaseMigrationServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration = Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DatabaseMigrationServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DatabaseMigrationServiceClient();

        /**
         * <p>Adds metadata tags to an DMS resource, including replication instance,
         * endpoint, security group, and migration task. These tags can also be used with
         * cost allocation reporting to track cost associated with DMS resources, or used
         * in a Condition statement in an IAM policy for DMS. For more information, see <a
         * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html">
         * <code>Tag</code> </a> data type description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/AddTagsToResource">AWS
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
         * <p>Applies a pending maintenance action to a resource (for example, to a
         * replication instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ApplyPendingMaintenanceAction">AWS
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
         * <p>Cancels a single premigration assessment run.</p> <p>This operation prevents
         * any individual assessments from running if they haven't started running. It also
         * attempts to cancel any individual assessments that are currently
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CancelReplicationTaskAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelReplicationTaskAssessmentRunOutcome CancelReplicationTaskAssessmentRun(const Model::CancelReplicationTaskAssessmentRunRequest& request) const;

        /**
         * A Callable wrapper for CancelReplicationTaskAssessmentRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelReplicationTaskAssessmentRunOutcomeCallable CancelReplicationTaskAssessmentRunCallable(const Model::CancelReplicationTaskAssessmentRunRequest& request) const;

        /**
         * An Async wrapper for CancelReplicationTaskAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelReplicationTaskAssessmentRunAsync(const Model::CancelReplicationTaskAssessmentRunRequest& request, const CancelReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint using the provided settings.</p>  <p>For a MySQL
         * source or target endpoint, don't explicitly specify the database using the
         * <code>DatabaseName</code> request parameter on the <code>CreateEndpoint</code>
         * API call. Specifying <code>DatabaseName</code> when you create a MySQL endpoint
         * replicates all the task tables to this single database. For MySQL endpoints, you
         * specify the database only when you specify the schema in the table-mapping rules
         * of the DMS task.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAsync(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an DMS event notification subscription. </p> <p>You can specify the
         * type of source (<code>SourceType</code>) you want to be notified of, provide a
         * list of DMS source IDs (<code>SourceIds</code>) that triggers the events, and
         * provide a list of event categories (<code>EventCategories</code>) for events you
         * want to be notified of. If you specify both the <code>SourceType</code> and
         * <code>SourceIds</code>, such as <code>SourceType = replication-instance</code>
         * and <code>SourceIdentifier = my-replinstance</code>, you will be notified of all
         * the replication instance events for the specified source. If you specify a
         * <code>SourceType</code> but don't specify a <code>SourceIdentifier</code>, you
         * receive notice of the events for that source type for all your DMS sources. If
         * you don't specify either <code>SourceType</code> nor
         * <code>SourceIdentifier</code>, you will be notified of events generated from all
         * DMS sources belonging to your customer account.</p> <p>For more information
         * about DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEventSubscription">AWS
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
         * <p>Creates a Fleet Advisor collector using the specified
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateFleetAdvisorCollector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetAdvisorCollectorOutcome CreateFleetAdvisorCollector(const Model::CreateFleetAdvisorCollectorRequest& request) const;

        /**
         * A Callable wrapper for CreateFleetAdvisorCollector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetAdvisorCollectorOutcomeCallable CreateFleetAdvisorCollectorCallable(const Model::CreateFleetAdvisorCollectorRequest& request) const;

        /**
         * An Async wrapper for CreateFleetAdvisorCollector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAdvisorCollectorAsync(const Model::CreateFleetAdvisorCollectorRequest& request, const CreateFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the replication instance using the specified parameters.</p> <p>DMS
         * requires that your account have certain roles with appropriate permissions
         * before you can create a replication instance. For information on the required
         * roles, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.APIRole">Creating
         * the IAM Roles to Use With the CLI and DMS API</a>. For information on the
         * required permissions, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.IAMPermissions">IAM
         * Permissions Needed to Use DMS</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationInstanceOutcome CreateReplicationInstance(const Model::CreateReplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationInstanceOutcomeCallable CreateReplicationInstanceCallable(const Model::CreateReplicationInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationInstanceAsync(const Model::CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a replication subnet group given a list of the subnet IDs in a
         * VPC.</p> <p>The VPC needs to have at least one subnet in at least two
         * availability zones in the Amazon Web Services Region, otherwise the service will
         * throw a <code>ReplicationSubnetGroupDoesNotCoverEnoughAZs</code>
         * exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationSubnetGroupOutcome CreateReplicationSubnetGroup(const Model::CreateReplicationSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationSubnetGroupOutcomeCallable CreateReplicationSubnetGroupCallable(const Model::CreateReplicationSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationSubnetGroupAsync(const Model::CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a replication task using the specified parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationTaskOutcome CreateReplicationTask(const Model::CreateReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationTaskOutcomeCallable CreateReplicationTaskCallable(const Model::CreateReplicationTaskRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationTaskAsync(const Model::CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified certificate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the connection between a replication instance and an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified endpoint.</p>  <p>All tasks associated with the
         * endpoint must be deleted before you can delete the endpoint.</p> 
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an DMS event subscription. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEventSubscription">AWS
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
         * <p>Deletes the specified Fleet Advisor collector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteFleetAdvisorCollector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetAdvisorCollectorOutcome DeleteFleetAdvisorCollector(const Model::DeleteFleetAdvisorCollectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleetAdvisorCollector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetAdvisorCollectorOutcomeCallable DeleteFleetAdvisorCollectorCallable(const Model::DeleteFleetAdvisorCollectorRequest& request) const;

        /**
         * An Async wrapper for DeleteFleetAdvisorCollector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAdvisorCollectorAsync(const Model::DeleteFleetAdvisorCollectorRequest& request, const DeleteFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Fleet Advisor collector databases.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteFleetAdvisorDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetAdvisorDatabasesOutcome DeleteFleetAdvisorDatabases(const Model::DeleteFleetAdvisorDatabasesRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleetAdvisorDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetAdvisorDatabasesOutcomeCallable DeleteFleetAdvisorDatabasesCallable(const Model::DeleteFleetAdvisorDatabasesRequest& request) const;

        /**
         * An Async wrapper for DeleteFleetAdvisorDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAdvisorDatabasesAsync(const Model::DeleteFleetAdvisorDatabasesRequest& request, const DeleteFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified replication instance.</p>  <p>You must delete any
         * migration tasks that are associated with the replication instance before you can
         * delete it.</p>  <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationInstanceOutcome DeleteReplicationInstance(const Model::DeleteReplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationInstanceOutcomeCallable DeleteReplicationInstanceCallable(const Model::DeleteReplicationInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationInstanceAsync(const Model::DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationSubnetGroupOutcome DeleteReplicationSubnetGroup(const Model::DeleteReplicationSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationSubnetGroupOutcomeCallable DeleteReplicationSubnetGroupCallable(const Model::DeleteReplicationSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationSubnetGroupAsync(const Model::DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified replication task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationTaskOutcome DeleteReplicationTask(const Model::DeleteReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationTaskOutcomeCallable DeleteReplicationTaskCallable(const Model::DeleteReplicationTaskRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationTaskAsync(const Model::DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the record of a single premigration assessment run.</p> <p>This
         * operation removes all metadata that DMS maintains about this assessment run.
         * However, the operation leaves untouched all information about this assessment
         * run that is stored in your Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTaskAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationTaskAssessmentRunOutcome DeleteReplicationTaskAssessmentRun(const Model::DeleteReplicationTaskAssessmentRunRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationTaskAssessmentRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationTaskAssessmentRunOutcomeCallable DeleteReplicationTaskAssessmentRunCallable(const Model::DeleteReplicationTaskAssessmentRunRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationTaskAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationTaskAssessmentRunAsync(const Model::DeleteReplicationTaskAssessmentRunRequest& request, const DeleteReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the DMS attributes for a customer account. These attributes
         * include DMS quotas for the account and a unique account identifier in a
         * particular DMS region. DMS quotas include a list of resource quotas supported by
         * the account, such as the number of replication instances allowed. The
         * description for each resource quota, includes the quota name, current usage
         * toward that quota, and the quota's maximum value. DMS uses the unique account
         * identifier to name each artifact used by DMS in the given region.</p> <p>This
         * command does not take any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeAccountAttributes">AWS
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
         * <p>Provides a list of individual assessments that you can specify for a new
         * premigration assessment run, given one or more parameters.</p> <p>If you specify
         * an existing migration task, this operation provides the default individual
         * assessments you can specify for that task. Otherwise, the specified parameters
         * model elements of a possible migration task on which to base a premigration
         * assessment run.</p> <p>To use these migration task modeling parameters, you must
         * specify an existing replication instance, a source database engine, a target
         * database engine, and a migration type. This combination of parameters
         * potentially limits the default individual assessments available for an
         * assessment run created for a corresponding migration task.</p> <p>If you specify
         * no parameters, this operation provides a list of all possible individual
         * assessments that you can specify for an assessment run. If you specify any one
         * of the task modeling parameters, you must specify all of them or the operation
         * cannot provide a list of individual assessments. The only parameter that you can
         * specify alone is for an existing migration task. The specified task definition
         * then determines the default list of individual assessments that you can specify
         * in an assessment run for the task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeApplicableIndividualAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicableIndividualAssessmentsOutcome DescribeApplicableIndividualAssessments(const Model::DescribeApplicableIndividualAssessmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicableIndividualAssessments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicableIndividualAssessmentsOutcomeCallable DescribeApplicableIndividualAssessmentsCallable(const Model::DescribeApplicableIndividualAssessmentsRequest& request) const;

        /**
         * An Async wrapper for DescribeApplicableIndividualAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicableIndividualAssessmentsAsync(const Model::DescribeApplicableIndividualAssessmentsRequest& request, const DescribeApplicableIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a description of the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeCertificates">AWS
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
         * <p>Describes the status of the connections that have been made between the
         * replication instance and an endpoint. Connections are created when you test an
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionsOutcome DescribeConnections(const Model::DescribeConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionsOutcomeCallable DescribeConnectionsCallable(const Model::DescribeConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionsAsync(const Model::DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the possible endpoint settings available when you
         * create an endpoint for a specific database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpointSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointSettingsOutcome DescribeEndpointSettings(const Model::DescribeEndpointSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpointSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointSettingsOutcomeCallable DescribeEndpointSettingsCallable(const Model::DescribeEndpointSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpointSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointSettingsAsync(const Model::DescribeEndpointSettingsRequest& request, const DescribeEndpointSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the type of endpoints available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpointTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointTypesOutcome DescribeEndpointTypes(const Model::DescribeEndpointTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpointTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointTypesOutcomeCallable DescribeEndpointTypesCallable(const Model::DescribeEndpointTypesRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpointTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointTypesAsync(const Model::DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the endpoints for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists categories for all event source types, or, if specified, for a
         * specified source type. You can see a list of the event categories and source
         * types in <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventCategories">AWS
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
         * <p>Lists all the event subscriptions for a customer account. The description of
         * a subscription includes <code>SubscriptionName</code>, <code>SNSTopicARN</code>,
         * <code>CustomerID</code>, <code>SourceType</code>, <code>SourceID</code>,
         * <code>CreationTime</code>, and <code>Status</code>. </p> <p>If you specify
         * <code>SubscriptionName</code>, this action lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventSubscriptions">AWS
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
         * <p> Lists events for a given source identifier and source type. You can also
         * specify a start and end time. For more information on DMS events, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
         * with Events and Notifications</a> in the <i>Database Migration Service User
         * Guide.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEvents">AWS
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
         * <p>Returns a list of the Fleet Advisor collectors in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeFleetAdvisorCollectors">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetAdvisorCollectorsOutcome DescribeFleetAdvisorCollectors(const Model::DescribeFleetAdvisorCollectorsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetAdvisorCollectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAdvisorCollectorsOutcomeCallable DescribeFleetAdvisorCollectorsCallable(const Model::DescribeFleetAdvisorCollectorsRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetAdvisorCollectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAdvisorCollectorsAsync(const Model::DescribeFleetAdvisorCollectorsRequest& request, const DescribeFleetAdvisorCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Fleet Advisor databases in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeFleetAdvisorDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetAdvisorDatabasesOutcome DescribeFleetAdvisorDatabases(const Model::DescribeFleetAdvisorDatabasesRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetAdvisorDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAdvisorDatabasesOutcomeCallable DescribeFleetAdvisorDatabasesCallable(const Model::DescribeFleetAdvisorDatabasesRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetAdvisorDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAdvisorDatabasesAsync(const Model::DescribeFleetAdvisorDatabasesRequest& request, const DescribeFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptions of large-scale assessment (LSA) analyses produced by
         * your Fleet Advisor collectors. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeFleetAdvisorLsaAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetAdvisorLsaAnalysisOutcome DescribeFleetAdvisorLsaAnalysis(const Model::DescribeFleetAdvisorLsaAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetAdvisorLsaAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAdvisorLsaAnalysisOutcomeCallable DescribeFleetAdvisorLsaAnalysisCallable(const Model::DescribeFleetAdvisorLsaAnalysisRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetAdvisorLsaAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAdvisorLsaAnalysisAsync(const Model::DescribeFleetAdvisorLsaAnalysisRequest& request, const DescribeFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides descriptions of the schemas discovered by your Fleet Advisor
         * collectors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeFleetAdvisorSchemaObjectSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetAdvisorSchemaObjectSummaryOutcome DescribeFleetAdvisorSchemaObjectSummary(const Model::DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetAdvisorSchemaObjectSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAdvisorSchemaObjectSummaryOutcomeCallable DescribeFleetAdvisorSchemaObjectSummaryCallable(const Model::DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetAdvisorSchemaObjectSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAdvisorSchemaObjectSummaryAsync(const Model::DescribeFleetAdvisorSchemaObjectSummaryRequest& request, const DescribeFleetAdvisorSchemaObjectSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of schemas detected by Fleet Advisor Collectors in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeFleetAdvisorSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetAdvisorSchemasOutcome DescribeFleetAdvisorSchemas(const Model::DescribeFleetAdvisorSchemasRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetAdvisorSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAdvisorSchemasOutcomeCallable DescribeFleetAdvisorSchemasCallable(const Model::DescribeFleetAdvisorSchemasRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetAdvisorSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAdvisorSchemasAsync(const Model::DescribeFleetAdvisorSchemasRequest& request, const DescribeFleetAdvisorSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the replication instance types that can be created
         * in the specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeOrderableReplicationInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableReplicationInstancesOutcome DescribeOrderableReplicationInstances(const Model::DescribeOrderableReplicationInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrderableReplicationInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrderableReplicationInstancesOutcomeCallable DescribeOrderableReplicationInstancesCallable(const Model::DescribeOrderableReplicationInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeOrderableReplicationInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrderableReplicationInstancesAsync(const Model::DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For internal use only</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribePendingMaintenanceActions">AWS
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
         * <p>Returns the status of the RefreshSchemas operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeRefreshSchemasStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRefreshSchemasStatusOutcome DescribeRefreshSchemasStatus(const Model::DescribeRefreshSchemasStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeRefreshSchemasStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRefreshSchemasStatusOutcomeCallable DescribeRefreshSchemasStatusCallable(const Model::DescribeRefreshSchemasStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeRefreshSchemasStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRefreshSchemasStatusAsync(const Model::DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the task logs for the specified task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstanceTaskLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationInstanceTaskLogsOutcome DescribeReplicationInstanceTaskLogs(const Model::DescribeReplicationInstanceTaskLogsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationInstanceTaskLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationInstanceTaskLogsOutcomeCallable DescribeReplicationInstanceTaskLogsCallable(const Model::DescribeReplicationInstanceTaskLogsRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationInstanceTaskLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationInstanceTaskLogsAsync(const Model::DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about replication instances for your account in the
         * current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationInstancesOutcome DescribeReplicationInstances(const Model::DescribeReplicationInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationInstancesOutcomeCallable DescribeReplicationInstancesCallable(const Model::DescribeReplicationInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationInstancesAsync(const Model::DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the replication subnet groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationSubnetGroupsOutcome DescribeReplicationSubnetGroups(const Model::DescribeReplicationSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationSubnetGroupsOutcomeCallable DescribeReplicationSubnetGroupsCallable(const Model::DescribeReplicationSubnetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationSubnetGroupsAsync(const Model::DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the task assessment results from the Amazon S3 bucket that DMS
         * creates in your Amazon Web Services account. This action always returns the
         * latest results.</p> <p>For more information about DMS task assessments, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.AssessmentReport.html">Creating
         * a task assessment report</a> in the <i>Database Migration Service User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentResults">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationTaskAssessmentResultsOutcome DescribeReplicationTaskAssessmentResults(const Model::DescribeReplicationTaskAssessmentResultsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationTaskAssessmentResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationTaskAssessmentResultsOutcomeCallable DescribeReplicationTaskAssessmentResultsCallable(const Model::DescribeReplicationTaskAssessmentResultsRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationTaskAssessmentResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationTaskAssessmentResultsAsync(const Model::DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of premigration assessment runs based on filter
         * settings.</p> <p>These filter settings can specify a combination of premigration
         * assessment runs, migration tasks, replication instances, and assessment run
         * status values.</p>  <p>This operation doesn't return information about
         * individual assessments. For this information, see the
         * <code>DescribeReplicationTaskIndividualAssessments</code> operation. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationTaskAssessmentRunsOutcome DescribeReplicationTaskAssessmentRuns(const Model::DescribeReplicationTaskAssessmentRunsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationTaskAssessmentRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationTaskAssessmentRunsOutcomeCallable DescribeReplicationTaskAssessmentRunsCallable(const Model::DescribeReplicationTaskAssessmentRunsRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationTaskAssessmentRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationTaskAssessmentRunsAsync(const Model::DescribeReplicationTaskAssessmentRunsRequest& request, const DescribeReplicationTaskAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of individual assessments based on filter
         * settings.</p> <p>These filter settings can specify a combination of premigration
         * assessment runs, migration tasks, and assessment status values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskIndividualAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationTaskIndividualAssessmentsOutcome DescribeReplicationTaskIndividualAssessments(const Model::DescribeReplicationTaskIndividualAssessmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationTaskIndividualAssessments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationTaskIndividualAssessmentsOutcomeCallable DescribeReplicationTaskIndividualAssessmentsCallable(const Model::DescribeReplicationTaskIndividualAssessmentsRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationTaskIndividualAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationTaskIndividualAssessmentsAsync(const Model::DescribeReplicationTaskIndividualAssessmentsRequest& request, const DescribeReplicationTaskIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about replication tasks for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationTasksOutcome DescribeReplicationTasks(const Model::DescribeReplicationTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationTasksOutcomeCallable DescribeReplicationTasksCallable(const Model::DescribeReplicationTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationTasksAsync(const Model::DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the schema for the specified endpoint.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemasOutcome DescribeSchemas(const Model::DescribeSchemasRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSchemasOutcomeCallable DescribeSchemasCallable(const Model::DescribeSchemasRequest& request) const;

        /**
         * An Async wrapper for DescribeSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSchemasAsync(const Model::DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns table statistics on the database migration task, including table
         * name, rows inserted, rows updated, and rows deleted.</p> <p>Note that the "last
         * updated" column the DMS console only indicates the time that DMS last updated
         * the table statistics record for a table. It does not indicate the time of the
         * last update to the table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeTableStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableStatisticsOutcome DescribeTableStatistics(const Model::DescribeTableStatisticsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTableStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTableStatisticsOutcomeCallable DescribeTableStatisticsCallable(const Model::DescribeTableStatisticsRequest& request) const;

        /**
         * An Async wrapper for DescribeTableStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTableStatisticsAsync(const Model::DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads the specified certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ImportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateOutcome ImportCertificate(const Model::ImportCertificateRequest& request) const;

        /**
         * A Callable wrapper for ImportCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCertificateOutcomeCallable ImportCertificateCallable(const Model::ImportCertificateRequest& request) const;

        /**
         * An Async wrapper for ImportCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCertificateAsync(const Model::ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all metadata tags attached to an DMS resource, including replication
         * instance, endpoint, security group, and migration task. For more information,
         * see <a href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html">
         * <code>Tag</code> </a> data type description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ListTagsForResource">AWS
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
         * <p>Modifies the specified endpoint.</p>  <p>For a MySQL source or target
         * endpoint, don't explicitly specify the database using the
         * <code>DatabaseName</code> request parameter on the <code>ModifyEndpoint</code>
         * API call. Specifying <code>DatabaseName</code> when you modify a MySQL endpoint
         * replicates all the task tables to this single database. For MySQL endpoints, you
         * specify the database only when you specify the schema in the table-mapping rules
         * of the DMS task.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEndpointOutcome ModifyEndpoint(const Model::ModifyEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyEndpointOutcomeCallable ModifyEndpointCallable(const Model::ModifyEndpointRequest& request) const;

        /**
         * An Async wrapper for ModifyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyEndpointAsync(const Model::ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing DMS event notification subscription. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEventSubscription">AWS
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
         * <p>Modifies the replication instance to apply new settings. You can change one
         * or more parameters by specifying these parameters and the new values in the
         * request.</p> <p>Some settings are applied during the maintenance window.</p>
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationInstanceOutcome ModifyReplicationInstance(const Model::ModifyReplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for ModifyReplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationInstanceOutcomeCallable ModifyReplicationInstanceCallable(const Model::ModifyReplicationInstanceRequest& request) const;

        /**
         * An Async wrapper for ModifyReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationInstanceAsync(const Model::ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the settings for the specified replication subnet
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationSubnetGroupOutcome ModifyReplicationSubnetGroup(const Model::ModifyReplicationSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyReplicationSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationSubnetGroupOutcomeCallable ModifyReplicationSubnetGroupCallable(const Model::ModifyReplicationSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for ModifyReplicationSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationSubnetGroupAsync(const Model::ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified replication task.</p> <p>You can't modify the task
         * endpoints. The task must be stopped before you can modify it. </p> <p>For more
         * information about DMS tasks, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks</a> in the <i>Database Migration Service User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationTaskOutcome ModifyReplicationTask(const Model::ModifyReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for ModifyReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReplicationTaskOutcomeCallable ModifyReplicationTaskCallable(const Model::ModifyReplicationTaskRequest& request) const;

        /**
         * An Async wrapper for ModifyReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReplicationTaskAsync(const Model::ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves a replication task from its current replication instance to a different
         * target replication instance using the specified parameters. The target
         * replication instance must be created with the same or later DMS version as the
         * current replication instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MoveReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::MoveReplicationTaskOutcome MoveReplicationTask(const Model::MoveReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for MoveReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MoveReplicationTaskOutcomeCallable MoveReplicationTaskCallable(const Model::MoveReplicationTaskRequest& request) const;

        /**
         * An Async wrapper for MoveReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MoveReplicationTaskAsync(const Model::MoveReplicationTaskRequest& request, const MoveReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots a replication instance. Rebooting results in a momentary outage,
         * until the replication instance becomes available again.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RebootReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootReplicationInstanceOutcome RebootReplicationInstance(const Model::RebootReplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for RebootReplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootReplicationInstanceOutcomeCallable RebootReplicationInstanceCallable(const Model::RebootReplicationInstanceRequest& request) const;

        /**
         * An Async wrapper for RebootReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootReplicationInstanceAsync(const Model::RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Populates the schema for the specified endpoint. This is an asynchronous
         * operation and can take several minutes. You can check the status of this
         * operation by calling the DescribeRefreshSchemasStatus operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RefreshSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshSchemasOutcome RefreshSchemas(const Model::RefreshSchemasRequest& request) const;

        /**
         * A Callable wrapper for RefreshSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RefreshSchemasOutcomeCallable RefreshSchemasCallable(const Model::RefreshSchemasRequest& request) const;

        /**
         * An Async wrapper for RefreshSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RefreshSchemasAsync(const Model::RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reloads the target database table with the source data. </p> <p>You can only
         * use this operation with a task in the <code>RUNNING</code> state, otherwise the
         * service will throw an <code>InvalidResourceStateFault</code>
         * exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReloadTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ReloadTablesOutcome ReloadTables(const Model::ReloadTablesRequest& request) const;

        /**
         * A Callable wrapper for ReloadTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReloadTablesOutcomeCallable ReloadTablesCallable(const Model::ReloadTablesRequest& request) const;

        /**
         * An Async wrapper for ReloadTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReloadTablesAsync(const Model::ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from an DMS resource, including replication instance,
         * endpoint, security group, and migration task. For more information, see <a
         * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html">
         * <code>Tag</code> </a> data type description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RemoveTagsFromResource">AWS
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
         * <p>Runs large-scale assessment (LSA) analysis on every Fleet Advisor collector
         * in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RunFleetAdvisorLsaAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::RunFleetAdvisorLsaAnalysisOutcome RunFleetAdvisorLsaAnalysis() const;

        /**
         * A Callable wrapper for RunFleetAdvisorLsaAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunFleetAdvisorLsaAnalysisOutcomeCallable RunFleetAdvisorLsaAnalysisCallable() const;

        /**
         * An Async wrapper for RunFleetAdvisorLsaAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunFleetAdvisorLsaAnalysisAsync(const RunFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Starts the replication task.</p> <p>For more information about DMS tasks, see
         * <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working
         * with Migration Tasks </a> in the <i>Database Migration Service User Guide.</i>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationTaskOutcome StartReplicationTask(const Model::StartReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for StartReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReplicationTaskOutcomeCallable StartReplicationTaskCallable(const Model::StartReplicationTaskRequest& request) const;

        /**
         * An Async wrapper for StartReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReplicationTaskAsync(const Model::StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts the replication task assessment for unsupported data types in the
         * source database. </p> <p>You can only use this operation for a task if the
         * following conditions are true:</p> <ul> <li> <p>The task must be in the
         * <code>stopped</code> state.</p> </li> <li> <p>The task must have successful
         * connections to the source and target.</p> </li> </ul> <p>If either of these
         * conditions are not met, an <code>InvalidResourceStateFault</code> error will
         * result. </p> <p>For information about DMS task assessments, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.AssessmentReport.html">Creating
         * a task assessment report</a> in the <i>Database Migration Service User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationTaskAssessmentOutcome StartReplicationTaskAssessment(const Model::StartReplicationTaskAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StartReplicationTaskAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReplicationTaskAssessmentOutcomeCallable StartReplicationTaskAssessmentCallable(const Model::StartReplicationTaskAssessmentRequest& request) const;

        /**
         * An Async wrapper for StartReplicationTaskAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReplicationTaskAssessmentAsync(const Model::StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new premigration assessment run for one or more individual
         * assessments of a migration task.</p> <p>The assessments that you can specify
         * depend on the source and target database engine and the migration type defined
         * for the given task. To run this operation, your migration task must already be
         * created. After you run this operation, you can review the status of each
         * individual assessment. You can also run the migration task manually after the
         * assessment run and its individual assessments complete.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationTaskAssessmentRunOutcome StartReplicationTaskAssessmentRun(const Model::StartReplicationTaskAssessmentRunRequest& request) const;

        /**
         * A Callable wrapper for StartReplicationTaskAssessmentRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReplicationTaskAssessmentRunOutcomeCallable StartReplicationTaskAssessmentRunCallable(const Model::StartReplicationTaskAssessmentRunRequest& request) const;

        /**
         * An Async wrapper for StartReplicationTaskAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReplicationTaskAssessmentRunAsync(const Model::StartReplicationTaskAssessmentRunRequest& request, const StartReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the replication task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StopReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopReplicationTaskOutcome StopReplicationTask(const Model::StopReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for StopReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopReplicationTaskOutcomeCallable StopReplicationTaskCallable(const Model::StopReplicationTaskRequest& request) const;

        /**
         * An Async wrapper for StopReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopReplicationTaskAsync(const Model::StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests the connection between the replication instance and the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TestConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::TestConnectionOutcome TestConnection(const Model::TestConnectionRequest& request) const;

        /**
         * A Callable wrapper for TestConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestConnectionOutcomeCallable TestConnectionCallable(const Model::TestConnectionRequest& request) const;

        /**
         * An Async wrapper for TestConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestConnectionAsync(const Model::TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Migrates 10 active and enabled Amazon SNS subscriptions at a time and
         * converts them to corresponding Amazon EventBridge rules. By default, this
         * operation migrates subscriptions only when all your replication instance
         * versions are 3.4.6 or higher. If any replication instances are from versions
         * earlier than 3.4.6, the operation raises an error and tells you to upgrade these
         * instances to version 3.4.6 or higher. To enable migration regardless of version,
         * set the <code>Force</code> option to true. However, if you don't upgrade
         * instances earlier than version 3.4.6, some types of events might not be
         * available when you use Amazon EventBridge.</p> <p>To call this operation, make
         * sure that you have certain permissions added to your user account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html#CHAP_Events-migrate-to-eventbridge">Migrating
         * event subscriptions to Amazon EventBridge</a> in the <i>Amazon Web Services
         * Database Migration Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/UpdateSubscriptionsToEventBridge">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionsToEventBridgeOutcome UpdateSubscriptionsToEventBridge(const Model::UpdateSubscriptionsToEventBridgeRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriptionsToEventBridge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriptionsToEventBridgeOutcomeCallable UpdateSubscriptionsToEventBridgeCallable(const Model::UpdateSubscriptionsToEventBridgeRequest& request) const;

        /**
         * An Async wrapper for UpdateSubscriptionsToEventBridge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriptionsToEventBridgeAsync(const Model::UpdateSubscriptionsToEventBridgeRequest& request, const UpdateSubscriptionsToEventBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DatabaseMigrationServiceClient>;
      void init(const DatabaseMigrationServiceClientConfiguration& clientConfiguration);

      DatabaseMigrationServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace DatabaseMigrationService
} // namespace Aws
