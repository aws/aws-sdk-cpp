/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/AWSMigrationHub/MigrationHubServiceClientModel.h>

namespace Aws
{
namespace MigrationHub
{
  /**
   * <p>The AWS Migration Hub API methods help to obtain server and application
   * migration status and integrate your resource-specific migration tool by
   * providing a programmatic interface to Migration Hub.</p> <p>Remember that you
   * must set your AWS Migration Hub home region before you call any of these APIs,
   * or a <code>HomeRegionNotSetException</code> error will be returned. Also, you
   * must make the API calls while in your home region.</p>
   */
  class AWS_MIGRATIONHUB_API MigrationHubClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MigrationHubClientConfiguration ClientConfigurationType;
      typedef MigrationHubEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubClient(const Aws::MigrationHub::MigrationHubClientConfiguration& clientConfiguration = Aws::MigrationHub::MigrationHubClientConfiguration(),
                           std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MigrationHub::MigrationHubClientConfiguration& clientConfiguration = Aws::MigrationHub::MigrationHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MigrationHub::MigrationHubClientConfiguration& clientConfiguration = Aws::MigrationHub::MigrationHubClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubClient();

        /**
         * <p>Associates a created artifact of an AWS cloud resource, the target receiving
         * the migration, with the migration task performed by a migration tool. This API
         * has the following traits:</p> <ul> <li> <p>Migration tools can call the
         * <code>AssociateCreatedArtifact</code> operation to indicate which AWS artifact
         * is associated with a migration task.</p> </li> <li> <p>The created artifact name
         * must be provided in ARN (Amazon Resource Name) format which will contain
         * information about type and region; for example:
         * <code>arn:aws:ec2:us-east-1:488216288981:image/ami-6d0ba87b</code>.</p> </li>
         * <li> <p>Examples of the AWS resource behind the created artifact are, AMI's, EC2
         * instance, or DMS endpoint, etc.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/AssociateCreatedArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCreatedArtifactOutcome AssociateCreatedArtifact(const Model::AssociateCreatedArtifactRequest& request) const;

        /**
         * A Callable wrapper for AssociateCreatedArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateCreatedArtifactRequestT = Model::AssociateCreatedArtifactRequest>
        Model::AssociateCreatedArtifactOutcomeCallable AssociateCreatedArtifactCallable(const AssociateCreatedArtifactRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::AssociateCreatedArtifact, request);
        }

        /**
         * An Async wrapper for AssociateCreatedArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateCreatedArtifactRequestT = Model::AssociateCreatedArtifactRequest>
        void AssociateCreatedArtifactAsync(const AssociateCreatedArtifactRequestT& request, const AssociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::AssociateCreatedArtifact, request, handler, context);
        }

        /**
         * <p>Associates a discovered resource ID from Application Discovery Service with a
         * migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/AssociateDiscoveredResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDiscoveredResourceOutcome AssociateDiscoveredResource(const Model::AssociateDiscoveredResourceRequest& request) const;

        /**
         * A Callable wrapper for AssociateDiscoveredResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateDiscoveredResourceRequestT = Model::AssociateDiscoveredResourceRequest>
        Model::AssociateDiscoveredResourceOutcomeCallable AssociateDiscoveredResourceCallable(const AssociateDiscoveredResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::AssociateDiscoveredResource, request);
        }

        /**
         * An Async wrapper for AssociateDiscoveredResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDiscoveredResourceRequestT = Model::AssociateDiscoveredResourceRequest>
        void AssociateDiscoveredResourceAsync(const AssociateDiscoveredResourceRequestT& request, const AssociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::AssociateDiscoveredResource, request, handler, context);
        }

        /**
         * <p>Creates a progress update stream which is an AWS resource used for access
         * control as well as a namespace for migration task names that is implicitly
         * linked to your AWS account. It must uniquely identify the migration tool as it
         * is used for all updates made by the tool; however, it does not need to be unique
         * for each AWS account because it is scoped to the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/CreateProgressUpdateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProgressUpdateStreamOutcome CreateProgressUpdateStream(const Model::CreateProgressUpdateStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateProgressUpdateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProgressUpdateStreamRequestT = Model::CreateProgressUpdateStreamRequest>
        Model::CreateProgressUpdateStreamOutcomeCallable CreateProgressUpdateStreamCallable(const CreateProgressUpdateStreamRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::CreateProgressUpdateStream, request);
        }

        /**
         * An Async wrapper for CreateProgressUpdateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProgressUpdateStreamRequestT = Model::CreateProgressUpdateStreamRequest>
        void CreateProgressUpdateStreamAsync(const CreateProgressUpdateStreamRequestT& request, const CreateProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::CreateProgressUpdateStream, request, handler, context);
        }

        /**
         * <p>Deletes a progress update stream, including all of its tasks, which was
         * previously created as an AWS resource used for access control. This API has the
         * following traits:</p> <ul> <li> <p>The only parameter needed for
         * <code>DeleteProgressUpdateStream</code> is the stream name (same as a
         * <code>CreateProgressUpdateStream</code> call).</p> </li> <li> <p>The call will
         * return, and a background process will asynchronously delete the stream and all
         * of its resources (tasks, associated resources, resource attributes, created
         * artifacts).</p> </li> <li> <p>If the stream takes time to be deleted, it might
         * still show up on a <code>ListProgressUpdateStreams</code> call.</p> </li> <li>
         * <p> <code>CreateProgressUpdateStream</code>, <code>ImportMigrationTask</code>,
         * <code>NotifyMigrationTaskState</code>, and all Associate[*] APIs related to the
         * tasks belonging to the stream will throw "InvalidInputException" if the stream
         * of the same name is in the process of being deleted.</p> </li> <li> <p>Once the
         * stream and all of its resources are deleted,
         * <code>CreateProgressUpdateStream</code> for a stream of the same name will
         * succeed, and that stream will be an entirely new logical resource (without any
         * resources associated with the old stream).</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DeleteProgressUpdateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProgressUpdateStreamOutcome DeleteProgressUpdateStream(const Model::DeleteProgressUpdateStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteProgressUpdateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProgressUpdateStreamRequestT = Model::DeleteProgressUpdateStreamRequest>
        Model::DeleteProgressUpdateStreamOutcomeCallable DeleteProgressUpdateStreamCallable(const DeleteProgressUpdateStreamRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::DeleteProgressUpdateStream, request);
        }

        /**
         * An Async wrapper for DeleteProgressUpdateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProgressUpdateStreamRequestT = Model::DeleteProgressUpdateStreamRequest>
        void DeleteProgressUpdateStreamAsync(const DeleteProgressUpdateStreamRequestT& request, const DeleteProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::DeleteProgressUpdateStream, request, handler, context);
        }

        /**
         * <p>Gets the migration status of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeApplicationState">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationStateOutcome DescribeApplicationState(const Model::DescribeApplicationStateRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationStateRequestT = Model::DescribeApplicationStateRequest>
        Model::DescribeApplicationStateOutcomeCallable DescribeApplicationStateCallable(const DescribeApplicationStateRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::DescribeApplicationState, request);
        }

        /**
         * An Async wrapper for DescribeApplicationState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationStateRequestT = Model::DescribeApplicationStateRequest>
        void DescribeApplicationStateAsync(const DescribeApplicationStateRequestT& request, const DescribeApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::DescribeApplicationState, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all attributes associated with a specific migration
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeMigrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMigrationTaskOutcome DescribeMigrationTask(const Model::DescribeMigrationTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeMigrationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMigrationTaskRequestT = Model::DescribeMigrationTaskRequest>
        Model::DescribeMigrationTaskOutcomeCallable DescribeMigrationTaskCallable(const DescribeMigrationTaskRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::DescribeMigrationTask, request);
        }

        /**
         * An Async wrapper for DescribeMigrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMigrationTaskRequestT = Model::DescribeMigrationTaskRequest>
        void DescribeMigrationTaskAsync(const DescribeMigrationTaskRequestT& request, const DescribeMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::DescribeMigrationTask, request, handler, context);
        }

        /**
         * <p>Disassociates a created artifact of an AWS resource with a migration task
         * performed by a migration tool that was previously associated. This API has the
         * following traits:</p> <ul> <li> <p>A migration user can call the
         * <code>DisassociateCreatedArtifacts</code> operation to disassociate a created
         * AWS Artifact from a migration task.</p> </li> <li> <p>The created artifact name
         * must be provided in ARN (Amazon Resource Name) format which will contain
         * information about type and region; for example:
         * <code>arn:aws:ec2:us-east-1:488216288981:image/ami-6d0ba87b</code>.</p> </li>
         * <li> <p>Examples of the AWS resource behind the created artifact are, AMI's, EC2
         * instance, or RDS instance, etc.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DisassociateCreatedArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCreatedArtifactOutcome DisassociateCreatedArtifact(const Model::DisassociateCreatedArtifactRequest& request) const;

        /**
         * A Callable wrapper for DisassociateCreatedArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateCreatedArtifactRequestT = Model::DisassociateCreatedArtifactRequest>
        Model::DisassociateCreatedArtifactOutcomeCallable DisassociateCreatedArtifactCallable(const DisassociateCreatedArtifactRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::DisassociateCreatedArtifact, request);
        }

        /**
         * An Async wrapper for DisassociateCreatedArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateCreatedArtifactRequestT = Model::DisassociateCreatedArtifactRequest>
        void DisassociateCreatedArtifactAsync(const DisassociateCreatedArtifactRequestT& request, const DisassociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::DisassociateCreatedArtifact, request, handler, context);
        }

        /**
         * <p>Disassociate an Application Discovery Service discovered resource from a
         * migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DisassociateDiscoveredResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDiscoveredResourceOutcome DisassociateDiscoveredResource(const Model::DisassociateDiscoveredResourceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDiscoveredResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateDiscoveredResourceRequestT = Model::DisassociateDiscoveredResourceRequest>
        Model::DisassociateDiscoveredResourceOutcomeCallable DisassociateDiscoveredResourceCallable(const DisassociateDiscoveredResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::DisassociateDiscoveredResource, request);
        }

        /**
         * An Async wrapper for DisassociateDiscoveredResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateDiscoveredResourceRequestT = Model::DisassociateDiscoveredResourceRequest>
        void DisassociateDiscoveredResourceAsync(const DisassociateDiscoveredResourceRequestT& request, const DisassociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::DisassociateDiscoveredResource, request, handler, context);
        }

        /**
         * <p>Registers a new migration task which represents a server, database, etc.,
         * being migrated to AWS by a migration tool.</p> <p>This API is a prerequisite to
         * calling the <code>NotifyMigrationTaskState</code> API as the migration tool must
         * first register the migration task with Migration Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ImportMigrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportMigrationTaskOutcome ImportMigrationTask(const Model::ImportMigrationTaskRequest& request) const;

        /**
         * A Callable wrapper for ImportMigrationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportMigrationTaskRequestT = Model::ImportMigrationTaskRequest>
        Model::ImportMigrationTaskOutcomeCallable ImportMigrationTaskCallable(const ImportMigrationTaskRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::ImportMigrationTask, request);
        }

        /**
         * An Async wrapper for ImportMigrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportMigrationTaskRequestT = Model::ImportMigrationTaskRequest>
        void ImportMigrationTaskAsync(const ImportMigrationTaskRequestT& request, const ImportMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::ImportMigrationTask, request, handler, context);
        }

        /**
         * <p>Lists all the migration statuses for your applications. If you use the
         * optional <code>ApplicationIds</code> parameter, only the migration statuses for
         * those applications will be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListApplicationStates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationStatesOutcome ListApplicationStates(const Model::ListApplicationStatesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationStates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationStatesRequestT = Model::ListApplicationStatesRequest>
        Model::ListApplicationStatesOutcomeCallable ListApplicationStatesCallable(const ListApplicationStatesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::ListApplicationStates, request);
        }

        /**
         * An Async wrapper for ListApplicationStates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationStatesRequestT = Model::ListApplicationStatesRequest>
        void ListApplicationStatesAsync(const ListApplicationStatesRequestT& request, const ListApplicationStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::ListApplicationStates, request, handler, context);
        }

        /**
         * <p>Lists the created artifacts attached to a given migration task in an update
         * stream. This API has the following traits:</p> <ul> <li> <p>Gets the list of the
         * created artifacts while migration is taking place.</p> </li> <li> <p>Shows the
         * artifacts created by the migration tool that was associated by the
         * <code>AssociateCreatedArtifact</code> API. </p> </li> <li> <p>Lists created
         * artifacts in a paginated interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListCreatedArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCreatedArtifactsOutcome ListCreatedArtifacts(const Model::ListCreatedArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListCreatedArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCreatedArtifactsRequestT = Model::ListCreatedArtifactsRequest>
        Model::ListCreatedArtifactsOutcomeCallable ListCreatedArtifactsCallable(const ListCreatedArtifactsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::ListCreatedArtifacts, request);
        }

        /**
         * An Async wrapper for ListCreatedArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCreatedArtifactsRequestT = Model::ListCreatedArtifactsRequest>
        void ListCreatedArtifactsAsync(const ListCreatedArtifactsRequestT& request, const ListCreatedArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::ListCreatedArtifacts, request, handler, context);
        }

        /**
         * <p>Lists discovered resources associated with the given
         * <code>MigrationTask</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListDiscoveredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDiscoveredResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDiscoveredResourcesRequestT = Model::ListDiscoveredResourcesRequest>
        Model::ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::ListDiscoveredResources, request);
        }

        /**
         * An Async wrapper for ListDiscoveredResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDiscoveredResourcesRequestT = Model::ListDiscoveredResourcesRequest>
        void ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequestT& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::ListDiscoveredResources, request, handler, context);
        }

        /**
         * <p>Lists all, or filtered by resource name, migration tasks associated with the
         * user account making this call. This API has the following traits:</p> <ul> <li>
         * <p>Can show a summary list of the most recent migration tasks.</p> </li> <li>
         * <p>Can show a summary list of migration tasks associated with a given discovered
         * resource.</p> </li> <li> <p>Lists migration tasks in a paginated interface.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListMigrationTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMigrationTasksOutcome ListMigrationTasks(const Model::ListMigrationTasksRequest& request) const;

        /**
         * A Callable wrapper for ListMigrationTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMigrationTasksRequestT = Model::ListMigrationTasksRequest>
        Model::ListMigrationTasksOutcomeCallable ListMigrationTasksCallable(const ListMigrationTasksRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::ListMigrationTasks, request);
        }

        /**
         * An Async wrapper for ListMigrationTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMigrationTasksRequestT = Model::ListMigrationTasksRequest>
        void ListMigrationTasksAsync(const ListMigrationTasksRequestT& request, const ListMigrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::ListMigrationTasks, request, handler, context);
        }

        /**
         * <p>Lists progress update streams associated with the user account making this
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListProgressUpdateStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProgressUpdateStreamsOutcome ListProgressUpdateStreams(const Model::ListProgressUpdateStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListProgressUpdateStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProgressUpdateStreamsRequestT = Model::ListProgressUpdateStreamsRequest>
        Model::ListProgressUpdateStreamsOutcomeCallable ListProgressUpdateStreamsCallable(const ListProgressUpdateStreamsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::ListProgressUpdateStreams, request);
        }

        /**
         * An Async wrapper for ListProgressUpdateStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProgressUpdateStreamsRequestT = Model::ListProgressUpdateStreamsRequest>
        void ListProgressUpdateStreamsAsync(const ListProgressUpdateStreamsRequestT& request, const ListProgressUpdateStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::ListProgressUpdateStreams, request, handler, context);
        }

        /**
         * <p>Sets the migration state of an application. For a given application
         * identified by the value passed to <code>ApplicationId</code>, its status is set
         * or updated by passing one of three values to <code>Status</code>:
         * <code>NOT_STARTED | IN_PROGRESS | COMPLETED</code>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/NotifyApplicationState">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyApplicationStateOutcome NotifyApplicationState(const Model::NotifyApplicationStateRequest& request) const;

        /**
         * A Callable wrapper for NotifyApplicationState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyApplicationStateRequestT = Model::NotifyApplicationStateRequest>
        Model::NotifyApplicationStateOutcomeCallable NotifyApplicationStateCallable(const NotifyApplicationStateRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::NotifyApplicationState, request);
        }

        /**
         * An Async wrapper for NotifyApplicationState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyApplicationStateRequestT = Model::NotifyApplicationStateRequest>
        void NotifyApplicationStateAsync(const NotifyApplicationStateRequestT& request, const NotifyApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::NotifyApplicationState, request, handler, context);
        }

        /**
         * <p>Notifies Migration Hub of the current status, progress, or other detail
         * regarding a migration task. This API has the following traits:</p> <ul> <li>
         * <p>Migration tools will call the <code>NotifyMigrationTaskState</code> API to
         * share the latest progress and status.</p> </li> <li> <p>
         * <code>MigrationTaskName</code> is used for addressing updates to the correct
         * target.</p> </li> <li> <p> <code>ProgressUpdateStream</code> is used for access
         * control and to provide a namespace for each migration tool.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/NotifyMigrationTaskState">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyMigrationTaskStateOutcome NotifyMigrationTaskState(const Model::NotifyMigrationTaskStateRequest& request) const;

        /**
         * A Callable wrapper for NotifyMigrationTaskState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyMigrationTaskStateRequestT = Model::NotifyMigrationTaskStateRequest>
        Model::NotifyMigrationTaskStateOutcomeCallable NotifyMigrationTaskStateCallable(const NotifyMigrationTaskStateRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::NotifyMigrationTaskState, request);
        }

        /**
         * An Async wrapper for NotifyMigrationTaskState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyMigrationTaskStateRequestT = Model::NotifyMigrationTaskStateRequest>
        void NotifyMigrationTaskStateAsync(const NotifyMigrationTaskStateRequestT& request, const NotifyMigrationTaskStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::NotifyMigrationTaskState, request, handler, context);
        }

        /**
         * <p>Provides identifying details of the resource being migrated so that it can be
         * associated in the Application Discovery Service repository. This association
         * occurs asynchronously after <code>PutResourceAttributes</code> returns.</p>
         *  <ul> <li> <p>Keep in mind that subsequent calls to
         * PutResourceAttributes will override previously stored attributes. For example,
         * if it is first called with a MAC address, but later, it is desired to <i>add</i>
         * an IP address, it will then be required to call it with <i>both</i> the IP and
         * MAC addresses to prevent overriding the MAC address.</p> </li> <li> <p>Note the
         * instructions regarding the special use case of the <a
         * href="https://docs.aws.amazon.com/migrationhub/latest/ug/API_PutResourceAttributes.html#migrationhub-PutResourceAttributes-request-ResourceAttributeList">
         * <code>ResourceAttributeList</code> </a> parameter when specifying any "VM"
         * related value.</p> </li> </ul>   <p>Because this is an
         * asynchronous call, it will always return 200, whether an association occurs or
         * not. To confirm if an association was found based on the provided details, call
         * <code>ListDiscoveredResources</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/PutResourceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourceAttributesOutcome PutResourceAttributes(const Model::PutResourceAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutResourceAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourceAttributesRequestT = Model::PutResourceAttributesRequest>
        Model::PutResourceAttributesOutcomeCallable PutResourceAttributesCallable(const PutResourceAttributesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubClient::PutResourceAttributes, request);
        }

        /**
         * An Async wrapper for PutResourceAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourceAttributesRequestT = Model::PutResourceAttributesRequest>
        void PutResourceAttributesAsync(const PutResourceAttributesRequestT& request, const PutResourceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubClient::PutResourceAttributes, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubClient>;
      void init(const MigrationHubClientConfiguration& clientConfiguration);

      MigrationHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHub
} // namespace Aws
