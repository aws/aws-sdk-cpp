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
#include <aws/dms/model/RunFleetAdvisorLsaAnalysisRequest.h>

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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DatabaseMigrationServiceClientConfiguration ClientConfigurationType;
      typedef DatabaseMigrationServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration = Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration(),
                                       std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DatabaseMigrationServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider = nullptr,
                                       const Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration = Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DatabaseMigrationServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider = nullptr,
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
         * endpoint, subnet group, and migration task. These tags can also be used with
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
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::AddTagsToResource, request, handler, context);
        }

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
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction, request);
        }

        /**
         * An Async wrapper for ApplyPendingMaintenanceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        void ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequestT& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction, request, handler, context);
        }

        /**
         * <p>Starts the analysis of up to 20 source databases to recommend target engines
         * for each source database. This is a batch version of <a
         * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartRecommendations.html">StartRecommendations</a>.</p>
         * <p>The result of analysis of each source database is reported individually in
         * the response. Because the batch request can result in a combination of
         * successful and unsuccessful actions, you should check for batch errors even when
         * the call returns an HTTP status code of <code>200</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/BatchStartRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStartRecommendationsOutcome BatchStartRecommendations(const Model::BatchStartRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for BatchStartRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStartRecommendationsRequestT = Model::BatchStartRecommendationsRequest>
        Model::BatchStartRecommendationsOutcomeCallable BatchStartRecommendationsCallable(const BatchStartRecommendationsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::BatchStartRecommendations, request);
        }

        /**
         * An Async wrapper for BatchStartRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStartRecommendationsRequestT = Model::BatchStartRecommendationsRequest>
        void BatchStartRecommendationsAsync(const BatchStartRecommendationsRequestT& request, const BatchStartRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::BatchStartRecommendations, request, handler, context);
        }

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
        template<typename CancelReplicationTaskAssessmentRunRequestT = Model::CancelReplicationTaskAssessmentRunRequest>
        Model::CancelReplicationTaskAssessmentRunOutcomeCallable CancelReplicationTaskAssessmentRunCallable(const CancelReplicationTaskAssessmentRunRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun, request);
        }

        /**
         * An Async wrapper for CancelReplicationTaskAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelReplicationTaskAssessmentRunRequestT = Model::CancelReplicationTaskAssessmentRunRequest>
        void CancelReplicationTaskAssessmentRunAsync(const CancelReplicationTaskAssessmentRunRequestT& request, const CancelReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun, request, handler, context);
        }

        /**
         * <p>Creates a data provider using the provided settings. A data provider stores a
         * data store type and location information about your database. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateDataProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataProviderOutcome CreateDataProvider(const Model::CreateDataProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateDataProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataProviderRequestT = Model::CreateDataProviderRequest>
        Model::CreateDataProviderOutcomeCallable CreateDataProviderCallable(const CreateDataProviderRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateDataProvider, request);
        }

        /**
         * An Async wrapper for CreateDataProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataProviderRequestT = Model::CreateDataProviderRequest>
        void CreateDataProviderAsync(const CreateDataProviderRequestT& request, const CreateDataProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateDataProvider, request, handler, context);
        }

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
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const CreateEndpointRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateEndpoint, request);
        }

        /**
         * An Async wrapper for CreateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        void CreateEndpointAsync(const CreateEndpointRequestT& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateEndpoint, request, handler, context);
        }

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
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const CreateEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateEventSubscription, request);
        }

        /**
         * An Async wrapper for CreateEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        void CreateEventSubscriptionAsync(const CreateEventSubscriptionRequestT& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateEventSubscription, request, handler, context);
        }

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
        template<typename CreateFleetAdvisorCollectorRequestT = Model::CreateFleetAdvisorCollectorRequest>
        Model::CreateFleetAdvisorCollectorOutcomeCallable CreateFleetAdvisorCollectorCallable(const CreateFleetAdvisorCollectorRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateFleetAdvisorCollector, request);
        }

        /**
         * An Async wrapper for CreateFleetAdvisorCollector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFleetAdvisorCollectorRequestT = Model::CreateFleetAdvisorCollectorRequest>
        void CreateFleetAdvisorCollectorAsync(const CreateFleetAdvisorCollectorRequestT& request, const CreateFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateFleetAdvisorCollector, request, handler, context);
        }

        /**
         * <p>Creates the instance profile using the specified parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstanceProfileRequestT = Model::CreateInstanceProfileRequest>
        Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const CreateInstanceProfileRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateInstanceProfile, request);
        }

        /**
         * An Async wrapper for CreateInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstanceProfileRequestT = Model::CreateInstanceProfileRequest>
        void CreateInstanceProfileAsync(const CreateInstanceProfileRequestT& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateInstanceProfile, request, handler, context);
        }

        /**
         * <p>Creates the migration project using the specified parameters.</p> <p>You can
         * run this action only after you create an instance profile and data providers
         * using <a
         * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateInstanceProfile.html">CreateInstanceProfile</a>
         * and <a
         * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateDataProvider.html">CreateDataProvider</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateMigrationProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMigrationProjectOutcome CreateMigrationProject(const Model::CreateMigrationProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateMigrationProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMigrationProjectRequestT = Model::CreateMigrationProjectRequest>
        Model::CreateMigrationProjectOutcomeCallable CreateMigrationProjectCallable(const CreateMigrationProjectRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateMigrationProject, request);
        }

        /**
         * An Async wrapper for CreateMigrationProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMigrationProjectRequestT = Model::CreateMigrationProjectRequest>
        void CreateMigrationProjectAsync(const CreateMigrationProjectRequestT& request, const CreateMigrationProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateMigrationProject, request, handler, context);
        }

        /**
         * <p>Creates a configuration that you can later provide to configure and start an
         * DMS Serverless replication. You can also provide options to validate the
         * configuration inputs before you start the replication.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationConfigOutcome CreateReplicationConfig(const Model::CreateReplicationConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicationConfigRequestT = Model::CreateReplicationConfigRequest>
        Model::CreateReplicationConfigOutcomeCallable CreateReplicationConfigCallable(const CreateReplicationConfigRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateReplicationConfig, request);
        }

        /**
         * An Async wrapper for CreateReplicationConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationConfigRequestT = Model::CreateReplicationConfigRequest>
        void CreateReplicationConfigAsync(const CreateReplicationConfigRequestT& request, const CreateReplicationConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateReplicationConfig, request, handler, context);
        }

        /**
         * <p>Creates the replication instance using the specified parameters.</p> <p>DMS
         * requires that your account have certain roles with appropriate permissions
         * before you can create a replication instance. For information on the required
         * roles, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.APIRole">Creating
         * the IAM Roles to Use With the CLI and DMS API</a>. For information on the
         * required permissions, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.IAMPermissions">IAM
         * Permissions Needed to Use DMS</a>.</p>  <p>If you don't specify a version
         * when creating a replication instance, DMS will create the instance using the
         * default engine version. For information about the default engine version, see <a
         * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReleaseNotes.html">Release
         * Notes</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationInstanceOutcome CreateReplicationInstance(const Model::CreateReplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicationInstanceRequestT = Model::CreateReplicationInstanceRequest>
        Model::CreateReplicationInstanceOutcomeCallable CreateReplicationInstanceCallable(const CreateReplicationInstanceRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateReplicationInstance, request);
        }

        /**
         * An Async wrapper for CreateReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationInstanceRequestT = Model::CreateReplicationInstanceRequest>
        void CreateReplicationInstanceAsync(const CreateReplicationInstanceRequestT& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateReplicationInstance, request, handler, context);
        }

        /**
         * <p>Creates a replication subnet group given a list of the subnet IDs in a
         * VPC.</p> <p>The VPC needs to have at least one subnet in at least two
         * availability zones in the Amazon Web Services Region, otherwise the service will
         * throw a <code>ReplicationSubnetGroupDoesNotCoverEnoughAZs</code> exception.</p>
         * <p>If a replication subnet group exists in your Amazon Web Services account, the
         * CreateReplicationSubnetGroup action returns the following error message: The
         * Replication Subnet Group already exists. In this case, delete the existing
         * replication subnet group. To do so, use the <a
         * href="https://docs.aws.amazon.com/en_us/dms/latest/APIReference/API_DeleteReplicationSubnetGroup.html">DeleteReplicationSubnetGroup</a>
         * action. Optionally, choose Subnet groups in the DMS console, then choose your
         * subnet group. Next, choose Delete from Actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationSubnetGroupOutcome CreateReplicationSubnetGroup(const Model::CreateReplicationSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicationSubnetGroupRequestT = Model::CreateReplicationSubnetGroupRequest>
        Model::CreateReplicationSubnetGroupOutcomeCallable CreateReplicationSubnetGroupCallable(const CreateReplicationSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateReplicationSubnetGroup, request);
        }

        /**
         * An Async wrapper for CreateReplicationSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationSubnetGroupRequestT = Model::CreateReplicationSubnetGroupRequest>
        void CreateReplicationSubnetGroupAsync(const CreateReplicationSubnetGroupRequestT& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateReplicationSubnetGroup, request, handler, context);
        }

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
        template<typename CreateReplicationTaskRequestT = Model::CreateReplicationTaskRequest>
        Model::CreateReplicationTaskOutcomeCallable CreateReplicationTaskCallable(const CreateReplicationTaskRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::CreateReplicationTask, request);
        }

        /**
         * An Async wrapper for CreateReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationTaskRequestT = Model::CreateReplicationTaskRequest>
        void CreateReplicationTaskAsync(const CreateReplicationTaskRequestT& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::CreateReplicationTask, request, handler, context);
        }

        /**
         * <p>Deletes the specified certificate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const DeleteCertificateRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteCertificate, request);
        }

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        void DeleteCertificateAsync(const DeleteCertificateRequestT& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteCertificate, request, handler, context);
        }

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
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>Deletes the specified data provider.</p>  <p>All migration projects
         * associated with the data provider must be deleted or modified before you can
         * delete the data provider.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteDataProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataProviderOutcome DeleteDataProvider(const Model::DeleteDataProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataProviderRequestT = Model::DeleteDataProviderRequest>
        Model::DeleteDataProviderOutcomeCallable DeleteDataProviderCallable(const DeleteDataProviderRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteDataProvider, request);
        }

        /**
         * An Async wrapper for DeleteDataProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataProviderRequestT = Model::DeleteDataProviderRequest>
        void DeleteDataProviderAsync(const DeleteDataProviderRequestT& request, const DeleteDataProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteDataProvider, request, handler, context);
        }

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
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const DeleteEndpointRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        void DeleteEndpointAsync(const DeleteEndpointRequestT& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteEndpoint, request, handler, context);
        }

        /**
         * <p> Deletes an DMS event subscription. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteEventSubscription, request);
        }

        /**
         * An Async wrapper for DeleteEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        void DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequestT& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteEventSubscription, request, handler, context);
        }

        /**
         * <p>Deletes the specified Fleet Advisor collector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteFleetAdvisorCollector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetAdvisorCollectorOutcome DeleteFleetAdvisorCollector(const Model::DeleteFleetAdvisorCollectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleetAdvisorCollector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFleetAdvisorCollectorRequestT = Model::DeleteFleetAdvisorCollectorRequest>
        Model::DeleteFleetAdvisorCollectorOutcomeCallable DeleteFleetAdvisorCollectorCallable(const DeleteFleetAdvisorCollectorRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector, request);
        }

        /**
         * An Async wrapper for DeleteFleetAdvisorCollector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFleetAdvisorCollectorRequestT = Model::DeleteFleetAdvisorCollectorRequest>
        void DeleteFleetAdvisorCollectorAsync(const DeleteFleetAdvisorCollectorRequestT& request, const DeleteFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector, request, handler, context);
        }

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
        template<typename DeleteFleetAdvisorDatabasesRequestT = Model::DeleteFleetAdvisorDatabasesRequest>
        Model::DeleteFleetAdvisorDatabasesOutcomeCallable DeleteFleetAdvisorDatabasesCallable(const DeleteFleetAdvisorDatabasesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases, request);
        }

        /**
         * An Async wrapper for DeleteFleetAdvisorDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFleetAdvisorDatabasesRequestT = Model::DeleteFleetAdvisorDatabasesRequest>
        void DeleteFleetAdvisorDatabasesAsync(const DeleteFleetAdvisorDatabasesRequestT& request, const DeleteFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases, request, handler, context);
        }

        /**
         * <p>Deletes the specified instance profile.</p>  <p>All migration projects
         * associated with the instance profile must be deleted or modified before you can
         * delete the instance profile.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceProfileRequestT = Model::DeleteInstanceProfileRequest>
        Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const DeleteInstanceProfileRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteInstanceProfile, request);
        }

        /**
         * An Async wrapper for DeleteInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceProfileRequestT = Model::DeleteInstanceProfileRequest>
        void DeleteInstanceProfileAsync(const DeleteInstanceProfileRequestT& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteInstanceProfile, request, handler, context);
        }

        /**
         * <p>Deletes the specified migration project.</p>  <p>The migration project
         * must be closed before you can delete it.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteMigrationProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMigrationProjectOutcome DeleteMigrationProject(const Model::DeleteMigrationProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteMigrationProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMigrationProjectRequestT = Model::DeleteMigrationProjectRequest>
        Model::DeleteMigrationProjectOutcomeCallable DeleteMigrationProjectCallable(const DeleteMigrationProjectRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteMigrationProject, request);
        }

        /**
         * An Async wrapper for DeleteMigrationProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMigrationProjectRequestT = Model::DeleteMigrationProjectRequest>
        void DeleteMigrationProjectAsync(const DeleteMigrationProjectRequestT& request, const DeleteMigrationProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteMigrationProject, request, handler, context);
        }

        /**
         * <p>Deletes an DMS Serverless replication configuration. This effectively
         * deprovisions any and all replications that use this configuration. You can't
         * delete the configuration for an DMS Serverless replication that is ongoing. You
         * can delete the configuration when the replication is in a non-RUNNING and
         * non-STARTING state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationConfigOutcome DeleteReplicationConfig(const Model::DeleteReplicationConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicationConfigRequestT = Model::DeleteReplicationConfigRequest>
        Model::DeleteReplicationConfigOutcomeCallable DeleteReplicationConfigCallable(const DeleteReplicationConfigRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationConfig, request);
        }

        /**
         * An Async wrapper for DeleteReplicationConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationConfigRequestT = Model::DeleteReplicationConfigRequest>
        void DeleteReplicationConfigAsync(const DeleteReplicationConfigRequestT& request, const DeleteReplicationConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationConfig, request, handler, context);
        }

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
        template<typename DeleteReplicationInstanceRequestT = Model::DeleteReplicationInstanceRequest>
        Model::DeleteReplicationInstanceOutcomeCallable DeleteReplicationInstanceCallable(const DeleteReplicationInstanceRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationInstance, request);
        }

        /**
         * An Async wrapper for DeleteReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationInstanceRequestT = Model::DeleteReplicationInstanceRequest>
        void DeleteReplicationInstanceAsync(const DeleteReplicationInstanceRequestT& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationInstance, request, handler, context);
        }

        /**
         * <p>Deletes a subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationSubnetGroupOutcome DeleteReplicationSubnetGroup(const Model::DeleteReplicationSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicationSubnetGroupRequestT = Model::DeleteReplicationSubnetGroupRequest>
        Model::DeleteReplicationSubnetGroupOutcomeCallable DeleteReplicationSubnetGroupCallable(const DeleteReplicationSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup, request);
        }

        /**
         * An Async wrapper for DeleteReplicationSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationSubnetGroupRequestT = Model::DeleteReplicationSubnetGroupRequest>
        void DeleteReplicationSubnetGroupAsync(const DeleteReplicationSubnetGroupRequestT& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified replication task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationTaskOutcome DeleteReplicationTask(const Model::DeleteReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicationTaskRequestT = Model::DeleteReplicationTaskRequest>
        Model::DeleteReplicationTaskOutcomeCallable DeleteReplicationTaskCallable(const DeleteReplicationTaskRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationTask, request);
        }

        /**
         * An Async wrapper for DeleteReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationTaskRequestT = Model::DeleteReplicationTaskRequest>
        void DeleteReplicationTaskAsync(const DeleteReplicationTaskRequestT& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationTask, request, handler, context);
        }

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
        template<typename DeleteReplicationTaskAssessmentRunRequestT = Model::DeleteReplicationTaskAssessmentRunRequest>
        Model::DeleteReplicationTaskAssessmentRunOutcomeCallable DeleteReplicationTaskAssessmentRunCallable(const DeleteReplicationTaskAssessmentRunRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun, request);
        }

        /**
         * An Async wrapper for DeleteReplicationTaskAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationTaskAssessmentRunRequestT = Model::DeleteReplicationTaskAssessmentRunRequest>
        void DeleteReplicationTaskAssessmentRunAsync(const DeleteReplicationTaskAssessmentRunRequestT& request, const DeleteReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun, request, handler, context);
        }

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
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const DescribeAccountAttributesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeAccountAttributes, request);
        }

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        void DescribeAccountAttributesAsync(const DescribeAccountAttributesRequestT& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeAccountAttributes, request, handler, context);
        }

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
        template<typename DescribeApplicableIndividualAssessmentsRequestT = Model::DescribeApplicableIndividualAssessmentsRequest>
        Model::DescribeApplicableIndividualAssessmentsOutcomeCallable DescribeApplicableIndividualAssessmentsCallable(const DescribeApplicableIndividualAssessmentsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments, request);
        }

        /**
         * An Async wrapper for DescribeApplicableIndividualAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicableIndividualAssessmentsRequestT = Model::DescribeApplicableIndividualAssessmentsRequest>
        void DescribeApplicableIndividualAssessmentsAsync(const DescribeApplicableIndividualAssessmentsRequestT& request, const DescribeApplicableIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments, request, handler, context);
        }

        /**
         * <p>Provides a description of the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCertificatesRequestT = Model::DescribeCertificatesRequest>
        Model::DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const DescribeCertificatesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeCertificates, request);
        }

        /**
         * An Async wrapper for DescribeCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCertificatesRequestT = Model::DescribeCertificatesRequest>
        void DescribeCertificatesAsync(const DescribeCertificatesRequestT& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeCertificates, request, handler, context);
        }

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
        template<typename DescribeConnectionsRequestT = Model::DescribeConnectionsRequest>
        Model::DescribeConnectionsOutcomeCallable DescribeConnectionsCallable(const DescribeConnectionsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeConnections, request);
        }

        /**
         * An Async wrapper for DescribeConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectionsRequestT = Model::DescribeConnectionsRequest>
        void DescribeConnectionsAsync(const DescribeConnectionsRequestT& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeConnections, request, handler, context);
        }

        /**
         * <p>Returns configuration parameters for a schema conversion
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeConversionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConversionConfigurationOutcome DescribeConversionConfiguration(const Model::DescribeConversionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeConversionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConversionConfigurationRequestT = Model::DescribeConversionConfigurationRequest>
        Model::DescribeConversionConfigurationOutcomeCallable DescribeConversionConfigurationCallable(const DescribeConversionConfigurationRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeConversionConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeConversionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConversionConfigurationRequestT = Model::DescribeConversionConfigurationRequest>
        void DescribeConversionConfigurationAsync(const DescribeConversionConfigurationRequestT& request, const DescribeConversionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeConversionConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of data providers for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeDataProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataProvidersOutcome DescribeDataProviders(const Model::DescribeDataProvidersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataProvidersRequestT = Model::DescribeDataProvidersRequest>
        Model::DescribeDataProvidersOutcomeCallable DescribeDataProvidersCallable(const DescribeDataProvidersRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeDataProviders, request);
        }

        /**
         * An Async wrapper for DescribeDataProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataProvidersRequestT = Model::DescribeDataProvidersRequest>
        void DescribeDataProvidersAsync(const DescribeDataProvidersRequestT& request, const DescribeDataProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeDataProviders, request, handler, context);
        }

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
        template<typename DescribeEndpointSettingsRequestT = Model::DescribeEndpointSettingsRequest>
        Model::DescribeEndpointSettingsOutcomeCallable DescribeEndpointSettingsCallable(const DescribeEndpointSettingsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeEndpointSettings, request);
        }

        /**
         * An Async wrapper for DescribeEndpointSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointSettingsRequestT = Model::DescribeEndpointSettingsRequest>
        void DescribeEndpointSettingsAsync(const DescribeEndpointSettingsRequestT& request, const DescribeEndpointSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeEndpointSettings, request, handler, context);
        }

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
        template<typename DescribeEndpointTypesRequestT = Model::DescribeEndpointTypesRequest>
        Model::DescribeEndpointTypesOutcomeCallable DescribeEndpointTypesCallable(const DescribeEndpointTypesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeEndpointTypes, request);
        }

        /**
         * An Async wrapper for DescribeEndpointTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointTypesRequestT = Model::DescribeEndpointTypesRequest>
        void DescribeEndpointTypesAsync(const DescribeEndpointTypesRequestT& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeEndpointTypes, request, handler, context);
        }

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
        template<typename DescribeEndpointsRequestT = Model::DescribeEndpointsRequest>
        Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const DescribeEndpointsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointsRequestT = Model::DescribeEndpointsRequest>
        void DescribeEndpointsAsync(const DescribeEndpointsRequestT& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeEndpoints, request, handler, context);
        }

        /**
         * <p>Returns information about the replication instance versions used in the
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineVersionsOutcome DescribeEngineVersions(const Model::DescribeEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngineVersionsRequestT = Model::DescribeEngineVersionsRequest>
        Model::DescribeEngineVersionsOutcomeCallable DescribeEngineVersionsCallable(const DescribeEngineVersionsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeEngineVersions, request);
        }

        /**
         * An Async wrapper for DescribeEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngineVersionsRequestT = Model::DescribeEngineVersionsRequest>
        void DescribeEngineVersionsAsync(const DescribeEngineVersionsRequestT& request, const DescribeEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeEngineVersions, request, handler, context);
        }

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
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const DescribeEventCategoriesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeEventCategories, request);
        }

        /**
         * An Async wrapper for DescribeEventCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        void DescribeEventCategoriesAsync(const DescribeEventCategoriesRequestT& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeEventCategories, request, handler, context);
        }

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
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeEventSubscriptions, request);
        }

        /**
         * An Async wrapper for DescribeEventSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        void DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequestT& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeEventSubscriptions, request, handler, context);
        }

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
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const DescribeEventsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeEvents, request);
        }

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        void DescribeEventsAsync(const DescribeEventsRequestT& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeEvents, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of extension pack associations for the specified
         * migration project. An extension pack is an add-on module that emulates functions
         * present in a source database that are required when converting objects to the
         * target database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeExtensionPackAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExtensionPackAssociationsOutcome DescribeExtensionPackAssociations(const Model::DescribeExtensionPackAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeExtensionPackAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExtensionPackAssociationsRequestT = Model::DescribeExtensionPackAssociationsRequest>
        Model::DescribeExtensionPackAssociationsOutcomeCallable DescribeExtensionPackAssociationsCallable(const DescribeExtensionPackAssociationsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeExtensionPackAssociations, request);
        }

        /**
         * An Async wrapper for DescribeExtensionPackAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExtensionPackAssociationsRequestT = Model::DescribeExtensionPackAssociationsRequest>
        void DescribeExtensionPackAssociationsAsync(const DescribeExtensionPackAssociationsRequestT& request, const DescribeExtensionPackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeExtensionPackAssociations, request, handler, context);
        }

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
        template<typename DescribeFleetAdvisorCollectorsRequestT = Model::DescribeFleetAdvisorCollectorsRequest>
        Model::DescribeFleetAdvisorCollectorsOutcomeCallable DescribeFleetAdvisorCollectorsCallable(const DescribeFleetAdvisorCollectorsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors, request);
        }

        /**
         * An Async wrapper for DescribeFleetAdvisorCollectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFleetAdvisorCollectorsRequestT = Model::DescribeFleetAdvisorCollectorsRequest>
        void DescribeFleetAdvisorCollectorsAsync(const DescribeFleetAdvisorCollectorsRequestT& request, const DescribeFleetAdvisorCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors, request, handler, context);
        }

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
        template<typename DescribeFleetAdvisorDatabasesRequestT = Model::DescribeFleetAdvisorDatabasesRequest>
        Model::DescribeFleetAdvisorDatabasesOutcomeCallable DescribeFleetAdvisorDatabasesCallable(const DescribeFleetAdvisorDatabasesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases, request);
        }

        /**
         * An Async wrapper for DescribeFleetAdvisorDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFleetAdvisorDatabasesRequestT = Model::DescribeFleetAdvisorDatabasesRequest>
        void DescribeFleetAdvisorDatabasesAsync(const DescribeFleetAdvisorDatabasesRequestT& request, const DescribeFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases, request, handler, context);
        }

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
        template<typename DescribeFleetAdvisorLsaAnalysisRequestT = Model::DescribeFleetAdvisorLsaAnalysisRequest>
        Model::DescribeFleetAdvisorLsaAnalysisOutcomeCallable DescribeFleetAdvisorLsaAnalysisCallable(const DescribeFleetAdvisorLsaAnalysisRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis, request);
        }

        /**
         * An Async wrapper for DescribeFleetAdvisorLsaAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFleetAdvisorLsaAnalysisRequestT = Model::DescribeFleetAdvisorLsaAnalysisRequest>
        void DescribeFleetAdvisorLsaAnalysisAsync(const DescribeFleetAdvisorLsaAnalysisRequestT& request, const DescribeFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis, request, handler, context);
        }

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
        template<typename DescribeFleetAdvisorSchemaObjectSummaryRequestT = Model::DescribeFleetAdvisorSchemaObjectSummaryRequest>
        Model::DescribeFleetAdvisorSchemaObjectSummaryOutcomeCallable DescribeFleetAdvisorSchemaObjectSummaryCallable(const DescribeFleetAdvisorSchemaObjectSummaryRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary, request);
        }

        /**
         * An Async wrapper for DescribeFleetAdvisorSchemaObjectSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFleetAdvisorSchemaObjectSummaryRequestT = Model::DescribeFleetAdvisorSchemaObjectSummaryRequest>
        void DescribeFleetAdvisorSchemaObjectSummaryAsync(const DescribeFleetAdvisorSchemaObjectSummaryRequestT& request, const DescribeFleetAdvisorSchemaObjectSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary, request, handler, context);
        }

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
        template<typename DescribeFleetAdvisorSchemasRequestT = Model::DescribeFleetAdvisorSchemasRequest>
        Model::DescribeFleetAdvisorSchemasOutcomeCallable DescribeFleetAdvisorSchemasCallable(const DescribeFleetAdvisorSchemasRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas, request);
        }

        /**
         * An Async wrapper for DescribeFleetAdvisorSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFleetAdvisorSchemasRequestT = Model::DescribeFleetAdvisorSchemasRequest>
        void DescribeFleetAdvisorSchemasAsync(const DescribeFleetAdvisorSchemasRequestT& request, const DescribeFleetAdvisorSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of instance profiles for your account in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeInstanceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceProfilesOutcome DescribeInstanceProfiles(const Model::DescribeInstanceProfilesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceProfilesRequestT = Model::DescribeInstanceProfilesRequest>
        Model::DescribeInstanceProfilesOutcomeCallable DescribeInstanceProfilesCallable(const DescribeInstanceProfilesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeInstanceProfiles, request);
        }

        /**
         * An Async wrapper for DescribeInstanceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceProfilesRequestT = Model::DescribeInstanceProfilesRequest>
        void DescribeInstanceProfilesAsync(const DescribeInstanceProfilesRequestT& request, const DescribeInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeInstanceProfiles, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of metadata model assessments for your account in
         * the current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeMetadataModelAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetadataModelAssessmentsOutcome DescribeMetadataModelAssessments(const Model::DescribeMetadataModelAssessmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetadataModelAssessments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMetadataModelAssessmentsRequestT = Model::DescribeMetadataModelAssessmentsRequest>
        Model::DescribeMetadataModelAssessmentsOutcomeCallable DescribeMetadataModelAssessmentsCallable(const DescribeMetadataModelAssessmentsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeMetadataModelAssessments, request);
        }

        /**
         * An Async wrapper for DescribeMetadataModelAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetadataModelAssessmentsRequestT = Model::DescribeMetadataModelAssessmentsRequest>
        void DescribeMetadataModelAssessmentsAsync(const DescribeMetadataModelAssessmentsRequestT& request, const DescribeMetadataModelAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeMetadataModelAssessments, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of metadata model conversions for a migration
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeMetadataModelConversions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetadataModelConversionsOutcome DescribeMetadataModelConversions(const Model::DescribeMetadataModelConversionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetadataModelConversions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMetadataModelConversionsRequestT = Model::DescribeMetadataModelConversionsRequest>
        Model::DescribeMetadataModelConversionsOutcomeCallable DescribeMetadataModelConversionsCallable(const DescribeMetadataModelConversionsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeMetadataModelConversions, request);
        }

        /**
         * An Async wrapper for DescribeMetadataModelConversions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetadataModelConversionsRequestT = Model::DescribeMetadataModelConversionsRequest>
        void DescribeMetadataModelConversionsAsync(const DescribeMetadataModelConversionsRequestT& request, const DescribeMetadataModelConversionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeMetadataModelConversions, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of metadata model exports.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeMetadataModelExportsAsScript">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetadataModelExportsAsScriptOutcome DescribeMetadataModelExportsAsScript(const Model::DescribeMetadataModelExportsAsScriptRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetadataModelExportsAsScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMetadataModelExportsAsScriptRequestT = Model::DescribeMetadataModelExportsAsScriptRequest>
        Model::DescribeMetadataModelExportsAsScriptOutcomeCallable DescribeMetadataModelExportsAsScriptCallable(const DescribeMetadataModelExportsAsScriptRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeMetadataModelExportsAsScript, request);
        }

        /**
         * An Async wrapper for DescribeMetadataModelExportsAsScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetadataModelExportsAsScriptRequestT = Model::DescribeMetadataModelExportsAsScriptRequest>
        void DescribeMetadataModelExportsAsScriptAsync(const DescribeMetadataModelExportsAsScriptRequestT& request, const DescribeMetadataModelExportsAsScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeMetadataModelExportsAsScript, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of metadata model exports.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeMetadataModelExportsToTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetadataModelExportsToTargetOutcome DescribeMetadataModelExportsToTarget(const Model::DescribeMetadataModelExportsToTargetRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetadataModelExportsToTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMetadataModelExportsToTargetRequestT = Model::DescribeMetadataModelExportsToTargetRequest>
        Model::DescribeMetadataModelExportsToTargetOutcomeCallable DescribeMetadataModelExportsToTargetCallable(const DescribeMetadataModelExportsToTargetRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeMetadataModelExportsToTarget, request);
        }

        /**
         * An Async wrapper for DescribeMetadataModelExportsToTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetadataModelExportsToTargetRequestT = Model::DescribeMetadataModelExportsToTargetRequest>
        void DescribeMetadataModelExportsToTargetAsync(const DescribeMetadataModelExportsToTargetRequestT& request, const DescribeMetadataModelExportsToTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeMetadataModelExportsToTarget, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of metadata model imports.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeMetadataModelImports">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetadataModelImportsOutcome DescribeMetadataModelImports(const Model::DescribeMetadataModelImportsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetadataModelImports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMetadataModelImportsRequestT = Model::DescribeMetadataModelImportsRequest>
        Model::DescribeMetadataModelImportsOutcomeCallable DescribeMetadataModelImportsCallable(const DescribeMetadataModelImportsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeMetadataModelImports, request);
        }

        /**
         * An Async wrapper for DescribeMetadataModelImports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetadataModelImportsRequestT = Model::DescribeMetadataModelImportsRequest>
        void DescribeMetadataModelImportsAsync(const DescribeMetadataModelImportsRequestT& request, const DescribeMetadataModelImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeMetadataModelImports, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of migration projects for your account in the
         * current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeMigrationProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMigrationProjectsOutcome DescribeMigrationProjects(const Model::DescribeMigrationProjectsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMigrationProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMigrationProjectsRequestT = Model::DescribeMigrationProjectsRequest>
        Model::DescribeMigrationProjectsOutcomeCallable DescribeMigrationProjectsCallable(const DescribeMigrationProjectsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeMigrationProjects, request);
        }

        /**
         * An Async wrapper for DescribeMigrationProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMigrationProjectsRequestT = Model::DescribeMigrationProjectsRequest>
        void DescribeMigrationProjectsAsync(const DescribeMigrationProjectsRequestT& request, const DescribeMigrationProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeMigrationProjects, request, handler, context);
        }

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
        template<typename DescribeOrderableReplicationInstancesRequestT = Model::DescribeOrderableReplicationInstancesRequest>
        Model::DescribeOrderableReplicationInstancesOutcomeCallable DescribeOrderableReplicationInstancesCallable(const DescribeOrderableReplicationInstancesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances, request);
        }

        /**
         * An Async wrapper for DescribeOrderableReplicationInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrderableReplicationInstancesRequestT = Model::DescribeOrderableReplicationInstancesRequest>
        void DescribeOrderableReplicationInstancesAsync(const DescribeOrderableReplicationInstancesRequestT& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances, request, handler, context);
        }

        /**
         * <p>For internal use only</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribePendingMaintenanceActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribePendingMaintenanceActions, request);
        }

        /**
         * An Async wrapper for DescribePendingMaintenanceActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        void DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequestT& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribePendingMaintenanceActions, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of limitations for recommendations of target Amazon
         * Web Services engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeRecommendationLimitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommendationLimitationsOutcome DescribeRecommendationLimitations(const Model::DescribeRecommendationLimitationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecommendationLimitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRecommendationLimitationsRequestT = Model::DescribeRecommendationLimitationsRequest>
        Model::DescribeRecommendationLimitationsOutcomeCallable DescribeRecommendationLimitationsCallable(const DescribeRecommendationLimitationsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeRecommendationLimitations, request);
        }

        /**
         * An Async wrapper for DescribeRecommendationLimitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecommendationLimitationsRequestT = Model::DescribeRecommendationLimitationsRequest>
        void DescribeRecommendationLimitationsAsync(const DescribeRecommendationLimitationsRequestT& request, const DescribeRecommendationLimitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeRecommendationLimitations, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of target engine recommendations for your source
         * databases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommendationsOutcome DescribeRecommendations(const Model::DescribeRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRecommendationsRequestT = Model::DescribeRecommendationsRequest>
        Model::DescribeRecommendationsOutcomeCallable DescribeRecommendationsCallable(const DescribeRecommendationsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeRecommendations, request);
        }

        /**
         * An Async wrapper for DescribeRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecommendationsRequestT = Model::DescribeRecommendationsRequest>
        void DescribeRecommendationsAsync(const DescribeRecommendationsRequestT& request, const DescribeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeRecommendations, request, handler, context);
        }

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
        template<typename DescribeRefreshSchemasStatusRequestT = Model::DescribeRefreshSchemasStatusRequest>
        Model::DescribeRefreshSchemasStatusOutcomeCallable DescribeRefreshSchemasStatusCallable(const DescribeRefreshSchemasStatusRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus, request);
        }

        /**
         * An Async wrapper for DescribeRefreshSchemasStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRefreshSchemasStatusRequestT = Model::DescribeRefreshSchemasStatusRequest>
        void DescribeRefreshSchemasStatusAsync(const DescribeRefreshSchemasStatusRequestT& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus, request, handler, context);
        }

        /**
         * <p>Returns one or more existing DMS Serverless replication configurations as a
         * list of structures.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationConfigsOutcome DescribeReplicationConfigs(const Model::DescribeReplicationConfigsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReplicationConfigsRequestT = Model::DescribeReplicationConfigsRequest>
        Model::DescribeReplicationConfigsOutcomeCallable DescribeReplicationConfigsCallable(const DescribeReplicationConfigsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationConfigs, request);
        }

        /**
         * An Async wrapper for DescribeReplicationConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationConfigsRequestT = Model::DescribeReplicationConfigsRequest>
        void DescribeReplicationConfigsAsync(const DescribeReplicationConfigsRequestT& request, const DescribeReplicationConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationConfigs, request, handler, context);
        }

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
        template<typename DescribeReplicationInstanceTaskLogsRequestT = Model::DescribeReplicationInstanceTaskLogsRequest>
        Model::DescribeReplicationInstanceTaskLogsOutcomeCallable DescribeReplicationInstanceTaskLogsCallable(const DescribeReplicationInstanceTaskLogsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs, request);
        }

        /**
         * An Async wrapper for DescribeReplicationInstanceTaskLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationInstanceTaskLogsRequestT = Model::DescribeReplicationInstanceTaskLogsRequest>
        void DescribeReplicationInstanceTaskLogsAsync(const DescribeReplicationInstanceTaskLogsRequestT& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs, request, handler, context);
        }

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
        template<typename DescribeReplicationInstancesRequestT = Model::DescribeReplicationInstancesRequest>
        Model::DescribeReplicationInstancesOutcomeCallable DescribeReplicationInstancesCallable(const DescribeReplicationInstancesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationInstances, request);
        }

        /**
         * An Async wrapper for DescribeReplicationInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationInstancesRequestT = Model::DescribeReplicationInstancesRequest>
        void DescribeReplicationInstancesAsync(const DescribeReplicationInstancesRequestT& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationInstances, request, handler, context);
        }

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
        template<typename DescribeReplicationSubnetGroupsRequestT = Model::DescribeReplicationSubnetGroupsRequest>
        Model::DescribeReplicationSubnetGroupsOutcomeCallable DescribeReplicationSubnetGroupsCallable(const DescribeReplicationSubnetGroupsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups, request);
        }

        /**
         * An Async wrapper for DescribeReplicationSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationSubnetGroupsRequestT = Model::DescribeReplicationSubnetGroupsRequest>
        void DescribeReplicationSubnetGroupsAsync(const DescribeReplicationSubnetGroupsRequestT& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups, request, handler, context);
        }

        /**
         * <p>Returns table and schema statistics for one or more provisioned replications
         * that use a given DMS Serverless replication configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTableStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationTableStatisticsOutcome DescribeReplicationTableStatistics(const Model::DescribeReplicationTableStatisticsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationTableStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReplicationTableStatisticsRequestT = Model::DescribeReplicationTableStatisticsRequest>
        Model::DescribeReplicationTableStatisticsOutcomeCallable DescribeReplicationTableStatisticsCallable(const DescribeReplicationTableStatisticsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTableStatistics, request);
        }

        /**
         * An Async wrapper for DescribeReplicationTableStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationTableStatisticsRequestT = Model::DescribeReplicationTableStatisticsRequest>
        void DescribeReplicationTableStatisticsAsync(const DescribeReplicationTableStatisticsRequestT& request, const DescribeReplicationTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTableStatistics, request, handler, context);
        }

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
        template<typename DescribeReplicationTaskAssessmentResultsRequestT = Model::DescribeReplicationTaskAssessmentResultsRequest>
        Model::DescribeReplicationTaskAssessmentResultsOutcomeCallable DescribeReplicationTaskAssessmentResultsCallable(const DescribeReplicationTaskAssessmentResultsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults, request);
        }

        /**
         * An Async wrapper for DescribeReplicationTaskAssessmentResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationTaskAssessmentResultsRequestT = Model::DescribeReplicationTaskAssessmentResultsRequest>
        void DescribeReplicationTaskAssessmentResultsAsync(const DescribeReplicationTaskAssessmentResultsRequestT& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults, request, handler, context);
        }

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
        template<typename DescribeReplicationTaskAssessmentRunsRequestT = Model::DescribeReplicationTaskAssessmentRunsRequest>
        Model::DescribeReplicationTaskAssessmentRunsOutcomeCallable DescribeReplicationTaskAssessmentRunsCallable(const DescribeReplicationTaskAssessmentRunsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns, request);
        }

        /**
         * An Async wrapper for DescribeReplicationTaskAssessmentRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationTaskAssessmentRunsRequestT = Model::DescribeReplicationTaskAssessmentRunsRequest>
        void DescribeReplicationTaskAssessmentRunsAsync(const DescribeReplicationTaskAssessmentRunsRequestT& request, const DescribeReplicationTaskAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns, request, handler, context);
        }

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
        template<typename DescribeReplicationTaskIndividualAssessmentsRequestT = Model::DescribeReplicationTaskIndividualAssessmentsRequest>
        Model::DescribeReplicationTaskIndividualAssessmentsOutcomeCallable DescribeReplicationTaskIndividualAssessmentsCallable(const DescribeReplicationTaskIndividualAssessmentsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments, request);
        }

        /**
         * An Async wrapper for DescribeReplicationTaskIndividualAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationTaskIndividualAssessmentsRequestT = Model::DescribeReplicationTaskIndividualAssessmentsRequest>
        void DescribeReplicationTaskIndividualAssessmentsAsync(const DescribeReplicationTaskIndividualAssessmentsRequestT& request, const DescribeReplicationTaskIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments, request, handler, context);
        }

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
        template<typename DescribeReplicationTasksRequestT = Model::DescribeReplicationTasksRequest>
        Model::DescribeReplicationTasksOutcomeCallable DescribeReplicationTasksCallable(const DescribeReplicationTasksRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplicationTasks, request);
        }

        /**
         * An Async wrapper for DescribeReplicationTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationTasksRequestT = Model::DescribeReplicationTasksRequest>
        void DescribeReplicationTasksAsync(const DescribeReplicationTasksRequestT& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplicationTasks, request, handler, context);
        }

        /**
         * <p>Provides details on replication progress by returning status information for
         * one or more provisioned DMS Serverless replications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationsOutcome DescribeReplications(const Model::DescribeReplicationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReplicationsRequestT = Model::DescribeReplicationsRequest>
        Model::DescribeReplicationsOutcomeCallable DescribeReplicationsCallable(const DescribeReplicationsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeReplications, request);
        }

        /**
         * An Async wrapper for DescribeReplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationsRequestT = Model::DescribeReplicationsRequest>
        void DescribeReplicationsAsync(const DescribeReplicationsRequestT& request, const DescribeReplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeReplications, request, handler, context);
        }

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
        template<typename DescribeSchemasRequestT = Model::DescribeSchemasRequest>
        Model::DescribeSchemasOutcomeCallable DescribeSchemasCallable(const DescribeSchemasRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeSchemas, request);
        }

        /**
         * An Async wrapper for DescribeSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSchemasRequestT = Model::DescribeSchemasRequest>
        void DescribeSchemasAsync(const DescribeSchemasRequestT& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeSchemas, request, handler, context);
        }

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
        template<typename DescribeTableStatisticsRequestT = Model::DescribeTableStatisticsRequest>
        Model::DescribeTableStatisticsOutcomeCallable DescribeTableStatisticsCallable(const DescribeTableStatisticsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::DescribeTableStatistics, request);
        }

        /**
         * An Async wrapper for DescribeTableStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTableStatisticsRequestT = Model::DescribeTableStatisticsRequest>
        void DescribeTableStatisticsAsync(const DescribeTableStatisticsRequestT& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::DescribeTableStatistics, request, handler, context);
        }

        /**
         * <p>Saves a copy of a database migration assessment report to your Amazon S3
         * bucket. DMS can save your assessment report as a comma-separated value (CSV) or
         * a PDF file. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ExportMetadataModelAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportMetadataModelAssessmentOutcome ExportMetadataModelAssessment(const Model::ExportMetadataModelAssessmentRequest& request) const;

        /**
         * A Callable wrapper for ExportMetadataModelAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportMetadataModelAssessmentRequestT = Model::ExportMetadataModelAssessmentRequest>
        Model::ExportMetadataModelAssessmentOutcomeCallable ExportMetadataModelAssessmentCallable(const ExportMetadataModelAssessmentRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ExportMetadataModelAssessment, request);
        }

        /**
         * An Async wrapper for ExportMetadataModelAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportMetadataModelAssessmentRequestT = Model::ExportMetadataModelAssessmentRequest>
        void ExportMetadataModelAssessmentAsync(const ExportMetadataModelAssessmentRequestT& request, const ExportMetadataModelAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ExportMetadataModelAssessment, request, handler, context);
        }

        /**
         * <p>Uploads the specified certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ImportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateOutcome ImportCertificate(const Model::ImportCertificateRequest& request) const;

        /**
         * A Callable wrapper for ImportCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportCertificateRequestT = Model::ImportCertificateRequest>
        Model::ImportCertificateOutcomeCallable ImportCertificateCallable(const ImportCertificateRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ImportCertificate, request);
        }

        /**
         * An Async wrapper for ImportCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportCertificateRequestT = Model::ImportCertificateRequest>
        void ImportCertificateAsync(const ImportCertificateRequestT& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ImportCertificate, request, handler, context);
        }

        /**
         * <p>Lists all metadata tags attached to an DMS resource, including replication
         * instance, endpoint, subnet group, and migration task. For more information, see
         * <a href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html">
         * <code>Tag</code> </a> data type description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Modifies the specified schema conversion configuration using the provided
         * parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyConversionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyConversionConfigurationOutcome ModifyConversionConfiguration(const Model::ModifyConversionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ModifyConversionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyConversionConfigurationRequestT = Model::ModifyConversionConfigurationRequest>
        Model::ModifyConversionConfigurationOutcomeCallable ModifyConversionConfigurationCallable(const ModifyConversionConfigurationRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyConversionConfiguration, request);
        }

        /**
         * An Async wrapper for ModifyConversionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyConversionConfigurationRequestT = Model::ModifyConversionConfigurationRequest>
        void ModifyConversionConfigurationAsync(const ModifyConversionConfigurationRequestT& request, const ModifyConversionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyConversionConfiguration, request, handler, context);
        }

        /**
         * <p>Modifies the specified data provider using the provided settings.</p> 
         * <p>You must remove the data provider from all migration projects before you can
         * modify it.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyDataProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDataProviderOutcome ModifyDataProvider(const Model::ModifyDataProviderRequest& request) const;

        /**
         * A Callable wrapper for ModifyDataProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDataProviderRequestT = Model::ModifyDataProviderRequest>
        Model::ModifyDataProviderOutcomeCallable ModifyDataProviderCallable(const ModifyDataProviderRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyDataProvider, request);
        }

        /**
         * An Async wrapper for ModifyDataProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDataProviderRequestT = Model::ModifyDataProviderRequest>
        void ModifyDataProviderAsync(const ModifyDataProviderRequestT& request, const ModifyDataProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyDataProvider, request, handler, context);
        }

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
        template<typename ModifyEndpointRequestT = Model::ModifyEndpointRequest>
        Model::ModifyEndpointOutcomeCallable ModifyEndpointCallable(const ModifyEndpointRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyEndpoint, request);
        }

        /**
         * An Async wrapper for ModifyEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyEndpointRequestT = Model::ModifyEndpointRequest>
        void ModifyEndpointAsync(const ModifyEndpointRequestT& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyEndpoint, request, handler, context);
        }

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
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyEventSubscription, request);
        }

        /**
         * An Async wrapper for ModifyEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        void ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequestT& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyEventSubscription, request, handler, context);
        }

        /**
         * <p>Modifies the specified instance profile using the provided parameters.</p>
         *  <p>All migration projects associated with the instance profile must be
         * deleted or modified before you can modify the instance profile.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceProfileOutcome ModifyInstanceProfile(const Model::ModifyInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyInstanceProfileRequestT = Model::ModifyInstanceProfileRequest>
        Model::ModifyInstanceProfileOutcomeCallable ModifyInstanceProfileCallable(const ModifyInstanceProfileRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyInstanceProfile, request);
        }

        /**
         * An Async wrapper for ModifyInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyInstanceProfileRequestT = Model::ModifyInstanceProfileRequest>
        void ModifyInstanceProfileAsync(const ModifyInstanceProfileRequestT& request, const ModifyInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyInstanceProfile, request, handler, context);
        }

        /**
         * <p>Modifies the specified migration project using the provided parameters.</p>
         *  <p>The migration project must be closed before you can modify it.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyMigrationProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyMigrationProjectOutcome ModifyMigrationProject(const Model::ModifyMigrationProjectRequest& request) const;

        /**
         * A Callable wrapper for ModifyMigrationProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyMigrationProjectRequestT = Model::ModifyMigrationProjectRequest>
        Model::ModifyMigrationProjectOutcomeCallable ModifyMigrationProjectCallable(const ModifyMigrationProjectRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyMigrationProject, request);
        }

        /**
         * An Async wrapper for ModifyMigrationProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyMigrationProjectRequestT = Model::ModifyMigrationProjectRequest>
        void ModifyMigrationProjectAsync(const ModifyMigrationProjectRequestT& request, const ModifyMigrationProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyMigrationProject, request, handler, context);
        }

        /**
         * <p>Modifies an existing DMS Serverless replication configuration that you can
         * use to start a replication. This command includes input validation and logic to
         * check the state of any replication that uses this configuration. You can only
         * modify a replication configuration before any replication that uses it has
         * started. As soon as you have initially started a replication with a given
         * configuiration, you can't modify that configuration, even if you stop it.</p>
         * <p>Other run statuses that allow you to run this command include FAILED and
         * CREATED. A provisioning state that allows you to run this command is
         * FAILED_PROVISION.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReplicationConfigOutcome ModifyReplicationConfig(const Model::ModifyReplicationConfigRequest& request) const;

        /**
         * A Callable wrapper for ModifyReplicationConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyReplicationConfigRequestT = Model::ModifyReplicationConfigRequest>
        Model::ModifyReplicationConfigOutcomeCallable ModifyReplicationConfigCallable(const ModifyReplicationConfigRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyReplicationConfig, request);
        }

        /**
         * An Async wrapper for ModifyReplicationConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyReplicationConfigRequestT = Model::ModifyReplicationConfigRequest>
        void ModifyReplicationConfigAsync(const ModifyReplicationConfigRequestT& request, const ModifyReplicationConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyReplicationConfig, request, handler, context);
        }

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
        template<typename ModifyReplicationInstanceRequestT = Model::ModifyReplicationInstanceRequest>
        Model::ModifyReplicationInstanceOutcomeCallable ModifyReplicationInstanceCallable(const ModifyReplicationInstanceRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyReplicationInstance, request);
        }

        /**
         * An Async wrapper for ModifyReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyReplicationInstanceRequestT = Model::ModifyReplicationInstanceRequest>
        void ModifyReplicationInstanceAsync(const ModifyReplicationInstanceRequestT& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyReplicationInstance, request, handler, context);
        }

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
        template<typename ModifyReplicationSubnetGroupRequestT = Model::ModifyReplicationSubnetGroupRequest>
        Model::ModifyReplicationSubnetGroupOutcomeCallable ModifyReplicationSubnetGroupCallable(const ModifyReplicationSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup, request);
        }

        /**
         * An Async wrapper for ModifyReplicationSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyReplicationSubnetGroupRequestT = Model::ModifyReplicationSubnetGroupRequest>
        void ModifyReplicationSubnetGroupAsync(const ModifyReplicationSubnetGroupRequestT& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup, request, handler, context);
        }

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
        template<typename ModifyReplicationTaskRequestT = Model::ModifyReplicationTaskRequest>
        Model::ModifyReplicationTaskOutcomeCallable ModifyReplicationTaskCallable(const ModifyReplicationTaskRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ModifyReplicationTask, request);
        }

        /**
         * An Async wrapper for ModifyReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyReplicationTaskRequestT = Model::ModifyReplicationTaskRequest>
        void ModifyReplicationTaskAsync(const ModifyReplicationTaskRequestT& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ModifyReplicationTask, request, handler, context);
        }

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
        template<typename MoveReplicationTaskRequestT = Model::MoveReplicationTaskRequest>
        Model::MoveReplicationTaskOutcomeCallable MoveReplicationTaskCallable(const MoveReplicationTaskRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::MoveReplicationTask, request);
        }

        /**
         * An Async wrapper for MoveReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MoveReplicationTaskRequestT = Model::MoveReplicationTaskRequest>
        void MoveReplicationTaskAsync(const MoveReplicationTaskRequestT& request, const MoveReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::MoveReplicationTask, request, handler, context);
        }

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
        template<typename RebootReplicationInstanceRequestT = Model::RebootReplicationInstanceRequest>
        Model::RebootReplicationInstanceOutcomeCallable RebootReplicationInstanceCallable(const RebootReplicationInstanceRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::RebootReplicationInstance, request);
        }

        /**
         * An Async wrapper for RebootReplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootReplicationInstanceRequestT = Model::RebootReplicationInstanceRequest>
        void RebootReplicationInstanceAsync(const RebootReplicationInstanceRequestT& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::RebootReplicationInstance, request, handler, context);
        }

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
        template<typename RefreshSchemasRequestT = Model::RefreshSchemasRequest>
        Model::RefreshSchemasOutcomeCallable RefreshSchemasCallable(const RefreshSchemasRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::RefreshSchemas, request);
        }

        /**
         * An Async wrapper for RefreshSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RefreshSchemasRequestT = Model::RefreshSchemasRequest>
        void RefreshSchemasAsync(const RefreshSchemasRequestT& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::RefreshSchemas, request, handler, context);
        }

        /**
         * <p>Reloads the target database table with the source data for a given DMS
         * Serverless replication configuration.</p> <p>You can only use this operation
         * with a task in the RUNNING state, otherwise the service will throw an
         * <code>InvalidResourceStateFault</code> exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReloadReplicationTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ReloadReplicationTablesOutcome ReloadReplicationTables(const Model::ReloadReplicationTablesRequest& request) const;

        /**
         * A Callable wrapper for ReloadReplicationTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReloadReplicationTablesRequestT = Model::ReloadReplicationTablesRequest>
        Model::ReloadReplicationTablesOutcomeCallable ReloadReplicationTablesCallable(const ReloadReplicationTablesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ReloadReplicationTables, request);
        }

        /**
         * An Async wrapper for ReloadReplicationTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReloadReplicationTablesRequestT = Model::ReloadReplicationTablesRequest>
        void ReloadReplicationTablesAsync(const ReloadReplicationTablesRequestT& request, const ReloadReplicationTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ReloadReplicationTables, request, handler, context);
        }

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
        template<typename ReloadTablesRequestT = Model::ReloadTablesRequest>
        Model::ReloadTablesOutcomeCallable ReloadTablesCallable(const ReloadTablesRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::ReloadTables, request);
        }

        /**
         * An Async wrapper for ReloadTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReloadTablesRequestT = Model::ReloadTablesRequest>
        void ReloadTablesAsync(const ReloadTablesRequestT& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::ReloadTables, request, handler, context);
        }

        /**
         * <p>Removes metadata tags from an DMS resource, including replication instance,
         * endpoint, subnet group, and migration task. For more information, see <a
         * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html">
         * <code>Tag</code> </a> data type description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::RemoveTagsFromResource, request, handler, context);
        }

        /**
         * <p>Runs large-scale assessment (LSA) analysis on every Fleet Advisor collector
         * in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RunFleetAdvisorLsaAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::RunFleetAdvisorLsaAnalysisOutcome RunFleetAdvisorLsaAnalysis(const Model::RunFleetAdvisorLsaAnalysisRequest& request = {}) const;

        /**
         * A Callable wrapper for RunFleetAdvisorLsaAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RunFleetAdvisorLsaAnalysisRequestT = Model::RunFleetAdvisorLsaAnalysisRequest>
        Model::RunFleetAdvisorLsaAnalysisOutcomeCallable RunFleetAdvisorLsaAnalysisCallable(const RunFleetAdvisorLsaAnalysisRequestT& request = {}) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysis, request);
        }

        /**
         * An Async wrapper for RunFleetAdvisorLsaAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RunFleetAdvisorLsaAnalysisRequestT = Model::RunFleetAdvisorLsaAnalysisRequest>
        void RunFleetAdvisorLsaAnalysisAsync(const RunFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const RunFleetAdvisorLsaAnalysisRequestT& request = {}) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysis, request, handler, context);
        }

        /**
         * <p>Applies the extension pack to your target database. An extension pack is an
         * add-on module that emulates functions present in a source database that are
         * required when converting objects to the target database. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartExtensionPackAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExtensionPackAssociationOutcome StartExtensionPackAssociation(const Model::StartExtensionPackAssociationRequest& request) const;

        /**
         * A Callable wrapper for StartExtensionPackAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartExtensionPackAssociationRequestT = Model::StartExtensionPackAssociationRequest>
        Model::StartExtensionPackAssociationOutcomeCallable StartExtensionPackAssociationCallable(const StartExtensionPackAssociationRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartExtensionPackAssociation, request);
        }

        /**
         * An Async wrapper for StartExtensionPackAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartExtensionPackAssociationRequestT = Model::StartExtensionPackAssociationRequest>
        void StartExtensionPackAssociationAsync(const StartExtensionPackAssociationRequestT& request, const StartExtensionPackAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartExtensionPackAssociation, request, handler, context);
        }

        /**
         * <p>Creates a database migration assessment report by assessing the migration
         * complexity for your source database. A database migration assessment report
         * summarizes all of the schema conversion tasks. It also details the action items
         * for database objects that can't be converted to the database engine of your
         * target database instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartMetadataModelAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMetadataModelAssessmentOutcome StartMetadataModelAssessment(const Model::StartMetadataModelAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StartMetadataModelAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMetadataModelAssessmentRequestT = Model::StartMetadataModelAssessmentRequest>
        Model::StartMetadataModelAssessmentOutcomeCallable StartMetadataModelAssessmentCallable(const StartMetadataModelAssessmentRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartMetadataModelAssessment, request);
        }

        /**
         * An Async wrapper for StartMetadataModelAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMetadataModelAssessmentRequestT = Model::StartMetadataModelAssessmentRequest>
        void StartMetadataModelAssessmentAsync(const StartMetadataModelAssessmentRequestT& request, const StartMetadataModelAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartMetadataModelAssessment, request, handler, context);
        }

        /**
         * <p>Converts your source database objects to a format compatible with the target
         * database. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartMetadataModelConversion">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMetadataModelConversionOutcome StartMetadataModelConversion(const Model::StartMetadataModelConversionRequest& request) const;

        /**
         * A Callable wrapper for StartMetadataModelConversion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMetadataModelConversionRequestT = Model::StartMetadataModelConversionRequest>
        Model::StartMetadataModelConversionOutcomeCallable StartMetadataModelConversionCallable(const StartMetadataModelConversionRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartMetadataModelConversion, request);
        }

        /**
         * An Async wrapper for StartMetadataModelConversion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMetadataModelConversionRequestT = Model::StartMetadataModelConversionRequest>
        void StartMetadataModelConversionAsync(const StartMetadataModelConversionRequestT& request, const StartMetadataModelConversionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartMetadataModelConversion, request, handler, context);
        }

        /**
         * <p>Saves your converted code to a file as a SQL script, and stores this file on
         * your Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartMetadataModelExportAsScript">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMetadataModelExportAsScriptOutcome StartMetadataModelExportAsScript(const Model::StartMetadataModelExportAsScriptRequest& request) const;

        /**
         * A Callable wrapper for StartMetadataModelExportAsScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMetadataModelExportAsScriptRequestT = Model::StartMetadataModelExportAsScriptRequest>
        Model::StartMetadataModelExportAsScriptOutcomeCallable StartMetadataModelExportAsScriptCallable(const StartMetadataModelExportAsScriptRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartMetadataModelExportAsScript, request);
        }

        /**
         * An Async wrapper for StartMetadataModelExportAsScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMetadataModelExportAsScriptRequestT = Model::StartMetadataModelExportAsScriptRequest>
        void StartMetadataModelExportAsScriptAsync(const StartMetadataModelExportAsScriptRequestT& request, const StartMetadataModelExportAsScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartMetadataModelExportAsScript, request, handler, context);
        }

        /**
         * <p>Applies converted database objects to your target database. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartMetadataModelExportToTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMetadataModelExportToTargetOutcome StartMetadataModelExportToTarget(const Model::StartMetadataModelExportToTargetRequest& request) const;

        /**
         * A Callable wrapper for StartMetadataModelExportToTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMetadataModelExportToTargetRequestT = Model::StartMetadataModelExportToTargetRequest>
        Model::StartMetadataModelExportToTargetOutcomeCallable StartMetadataModelExportToTargetCallable(const StartMetadataModelExportToTargetRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartMetadataModelExportToTarget, request);
        }

        /**
         * An Async wrapper for StartMetadataModelExportToTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMetadataModelExportToTargetRequestT = Model::StartMetadataModelExportToTargetRequest>
        void StartMetadataModelExportToTargetAsync(const StartMetadataModelExportToTargetRequestT& request, const StartMetadataModelExportToTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartMetadataModelExportToTarget, request, handler, context);
        }

        /**
         * <p>Loads the metadata for all the dependent database objects of the parent
         * object.</p> <p>This operation uses your project's Amazon S3 bucket as a metadata
         * cache to improve performance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartMetadataModelImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMetadataModelImportOutcome StartMetadataModelImport(const Model::StartMetadataModelImportRequest& request) const;

        /**
         * A Callable wrapper for StartMetadataModelImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMetadataModelImportRequestT = Model::StartMetadataModelImportRequest>
        Model::StartMetadataModelImportOutcomeCallable StartMetadataModelImportCallable(const StartMetadataModelImportRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartMetadataModelImport, request);
        }

        /**
         * An Async wrapper for StartMetadataModelImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMetadataModelImportRequestT = Model::StartMetadataModelImportRequest>
        void StartMetadataModelImportAsync(const StartMetadataModelImportRequestT& request, const StartMetadataModelImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartMetadataModelImport, request, handler, context);
        }

        /**
         * <p>Starts the analysis of your source database to provide recommendations of
         * target engines.</p> <p>You can create recommendations for multiple source
         * databases using <a
         * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_BatchStartRecommendations.html">BatchStartRecommendations</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecommendationsOutcome StartRecommendations(const Model::StartRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for StartRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRecommendationsRequestT = Model::StartRecommendationsRequest>
        Model::StartRecommendationsOutcomeCallable StartRecommendationsCallable(const StartRecommendationsRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartRecommendations, request);
        }

        /**
         * An Async wrapper for StartRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRecommendationsRequestT = Model::StartRecommendationsRequest>
        void StartRecommendationsAsync(const StartRecommendationsRequestT& request, const StartRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartRecommendations, request, handler, context);
        }

        /**
         * <p>For a given DMS Serverless replication configuration, DMS connects to the
         * source endpoint and collects the metadata to analyze the replication workload.
         * Using this metadata, DMS then computes and provisions the required capacity and
         * starts replicating to the target endpoint using the server resources that DMS
         * has provisioned for the DMS Serverless replication.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationOutcome StartReplication(const Model::StartReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartReplicationRequestT = Model::StartReplicationRequest>
        Model::StartReplicationOutcomeCallable StartReplicationCallable(const StartReplicationRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartReplication, request);
        }

        /**
         * An Async wrapper for StartReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReplicationRequestT = Model::StartReplicationRequest>
        void StartReplicationAsync(const StartReplicationRequestT& request, const StartReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartReplication, request, handler, context);
        }

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
        template<typename StartReplicationTaskRequestT = Model::StartReplicationTaskRequest>
        Model::StartReplicationTaskOutcomeCallable StartReplicationTaskCallable(const StartReplicationTaskRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartReplicationTask, request);
        }

        /**
         * An Async wrapper for StartReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReplicationTaskRequestT = Model::StartReplicationTaskRequest>
        void StartReplicationTaskAsync(const StartReplicationTaskRequestT& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartReplicationTask, request, handler, context);
        }

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
        template<typename StartReplicationTaskAssessmentRequestT = Model::StartReplicationTaskAssessmentRequest>
        Model::StartReplicationTaskAssessmentOutcomeCallable StartReplicationTaskAssessmentCallable(const StartReplicationTaskAssessmentRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartReplicationTaskAssessment, request);
        }

        /**
         * An Async wrapper for StartReplicationTaskAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReplicationTaskAssessmentRequestT = Model::StartReplicationTaskAssessmentRequest>
        void StartReplicationTaskAssessmentAsync(const StartReplicationTaskAssessmentRequestT& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartReplicationTaskAssessment, request, handler, context);
        }

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
        template<typename StartReplicationTaskAssessmentRunRequestT = Model::StartReplicationTaskAssessmentRunRequest>
        Model::StartReplicationTaskAssessmentRunOutcomeCallable StartReplicationTaskAssessmentRunCallable(const StartReplicationTaskAssessmentRunRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun, request);
        }

        /**
         * An Async wrapper for StartReplicationTaskAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReplicationTaskAssessmentRunRequestT = Model::StartReplicationTaskAssessmentRunRequest>
        void StartReplicationTaskAssessmentRunAsync(const StartReplicationTaskAssessmentRunRequestT& request, const StartReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun, request, handler, context);
        }

        /**
         * <p>For a given DMS Serverless replication configuration, DMS stops any and all
         * ongoing DMS Serverless replications. This command doesn't deprovision the
         * stopped replications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StopReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopReplicationOutcome StopReplication(const Model::StopReplicationRequest& request) const;

        /**
         * A Callable wrapper for StopReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopReplicationRequestT = Model::StopReplicationRequest>
        Model::StopReplicationOutcomeCallable StopReplicationCallable(const StopReplicationRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StopReplication, request);
        }

        /**
         * An Async wrapper for StopReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopReplicationRequestT = Model::StopReplicationRequest>
        void StopReplicationAsync(const StopReplicationRequestT& request, const StopReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StopReplication, request, handler, context);
        }

        /**
         * <p>Stops the replication task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StopReplicationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopReplicationTaskOutcome StopReplicationTask(const Model::StopReplicationTaskRequest& request) const;

        /**
         * A Callable wrapper for StopReplicationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopReplicationTaskRequestT = Model::StopReplicationTaskRequest>
        Model::StopReplicationTaskOutcomeCallable StopReplicationTaskCallable(const StopReplicationTaskRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::StopReplicationTask, request);
        }

        /**
         * An Async wrapper for StopReplicationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopReplicationTaskRequestT = Model::StopReplicationTaskRequest>
        void StopReplicationTaskAsync(const StopReplicationTaskRequestT& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::StopReplicationTask, request, handler, context);
        }

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
        template<typename TestConnectionRequestT = Model::TestConnectionRequest>
        Model::TestConnectionOutcomeCallable TestConnectionCallable(const TestConnectionRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::TestConnection, request);
        }

        /**
         * An Async wrapper for TestConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestConnectionRequestT = Model::TestConnectionRequest>
        void TestConnectionAsync(const TestConnectionRequestT& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::TestConnection, request, handler, context);
        }

        /**
         * <p>Migrates 10 active and enabled Amazon SNS subscriptions at a time and
         * converts them to corresponding Amazon EventBridge rules. By default, this
         * operation migrates subscriptions only when all your replication instance
         * versions are 3.4.5 or higher. If any replication instances are from versions
         * earlier than 3.4.5, the operation raises an error and tells you to upgrade these
         * instances to version 3.4.5 or higher. To enable migration regardless of version,
         * set the <code>Force</code> option to true. However, if you don't upgrade
         * instances earlier than version 3.4.5, some types of events might not be
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
        template<typename UpdateSubscriptionsToEventBridgeRequestT = Model::UpdateSubscriptionsToEventBridgeRequest>
        Model::UpdateSubscriptionsToEventBridgeOutcomeCallable UpdateSubscriptionsToEventBridgeCallable(const UpdateSubscriptionsToEventBridgeRequestT& request) const
        {
            return SubmitCallable(&DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge, request);
        }

        /**
         * An Async wrapper for UpdateSubscriptionsToEventBridge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriptionsToEventBridgeRequestT = Model::UpdateSubscriptionsToEventBridgeRequest>
        void UpdateSubscriptionsToEventBridgeAsync(const UpdateSubscriptionsToEventBridgeRequestT& request, const UpdateSubscriptionsToEventBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge, request, handler, context);
        }


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
