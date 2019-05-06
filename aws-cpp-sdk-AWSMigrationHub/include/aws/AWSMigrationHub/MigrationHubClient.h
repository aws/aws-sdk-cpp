/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactResult.h>
#include <aws/AWSMigrationHub/model/AssociateDiscoveredResourceResult.h>
#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamResult.h>
#include <aws/AWSMigrationHub/model/DeleteProgressUpdateStreamResult.h>
#include <aws/AWSMigrationHub/model/DescribeApplicationStateResult.h>
#include <aws/AWSMigrationHub/model/DescribeMigrationTaskResult.h>
#include <aws/AWSMigrationHub/model/DisassociateCreatedArtifactResult.h>
#include <aws/AWSMigrationHub/model/DisassociateDiscoveredResourceResult.h>
#include <aws/AWSMigrationHub/model/ImportMigrationTaskResult.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsResult.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesResult.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksResult.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsResult.h>
#include <aws/AWSMigrationHub/model/NotifyApplicationStateResult.h>
#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateResult.h>
#include <aws/AWSMigrationHub/model/PutResourceAttributesResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace MigrationHub
{

namespace Model
{
        class AssociateCreatedArtifactRequest;
        class AssociateDiscoveredResourceRequest;
        class CreateProgressUpdateStreamRequest;
        class DeleteProgressUpdateStreamRequest;
        class DescribeApplicationStateRequest;
        class DescribeMigrationTaskRequest;
        class DisassociateCreatedArtifactRequest;
        class DisassociateDiscoveredResourceRequest;
        class ImportMigrationTaskRequest;
        class ListCreatedArtifactsRequest;
        class ListDiscoveredResourcesRequest;
        class ListMigrationTasksRequest;
        class ListProgressUpdateStreamsRequest;
        class NotifyApplicationStateRequest;
        class NotifyMigrationTaskStateRequest;
        class PutResourceAttributesRequest;

        typedef Aws::Utils::Outcome<AssociateCreatedArtifactResult, Aws::Client::AWSError<MigrationHubErrors>> AssociateCreatedArtifactOutcome;
        typedef Aws::Utils::Outcome<AssociateDiscoveredResourceResult, Aws::Client::AWSError<MigrationHubErrors>> AssociateDiscoveredResourceOutcome;
        typedef Aws::Utils::Outcome<CreateProgressUpdateStreamResult, Aws::Client::AWSError<MigrationHubErrors>> CreateProgressUpdateStreamOutcome;
        typedef Aws::Utils::Outcome<DeleteProgressUpdateStreamResult, Aws::Client::AWSError<MigrationHubErrors>> DeleteProgressUpdateStreamOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationStateResult, Aws::Client::AWSError<MigrationHubErrors>> DescribeApplicationStateOutcome;
        typedef Aws::Utils::Outcome<DescribeMigrationTaskResult, Aws::Client::AWSError<MigrationHubErrors>> DescribeMigrationTaskOutcome;
        typedef Aws::Utils::Outcome<DisassociateCreatedArtifactResult, Aws::Client::AWSError<MigrationHubErrors>> DisassociateCreatedArtifactOutcome;
        typedef Aws::Utils::Outcome<DisassociateDiscoveredResourceResult, Aws::Client::AWSError<MigrationHubErrors>> DisassociateDiscoveredResourceOutcome;
        typedef Aws::Utils::Outcome<ImportMigrationTaskResult, Aws::Client::AWSError<MigrationHubErrors>> ImportMigrationTaskOutcome;
        typedef Aws::Utils::Outcome<ListCreatedArtifactsResult, Aws::Client::AWSError<MigrationHubErrors>> ListCreatedArtifactsOutcome;
        typedef Aws::Utils::Outcome<ListDiscoveredResourcesResult, Aws::Client::AWSError<MigrationHubErrors>> ListDiscoveredResourcesOutcome;
        typedef Aws::Utils::Outcome<ListMigrationTasksResult, Aws::Client::AWSError<MigrationHubErrors>> ListMigrationTasksOutcome;
        typedef Aws::Utils::Outcome<ListProgressUpdateStreamsResult, Aws::Client::AWSError<MigrationHubErrors>> ListProgressUpdateStreamsOutcome;
        typedef Aws::Utils::Outcome<NotifyApplicationStateResult, Aws::Client::AWSError<MigrationHubErrors>> NotifyApplicationStateOutcome;
        typedef Aws::Utils::Outcome<NotifyMigrationTaskStateResult, Aws::Client::AWSError<MigrationHubErrors>> NotifyMigrationTaskStateOutcome;
        typedef Aws::Utils::Outcome<PutResourceAttributesResult, Aws::Client::AWSError<MigrationHubErrors>> PutResourceAttributesOutcome;

        typedef std::future<AssociateCreatedArtifactOutcome> AssociateCreatedArtifactOutcomeCallable;
        typedef std::future<AssociateDiscoveredResourceOutcome> AssociateDiscoveredResourceOutcomeCallable;
        typedef std::future<CreateProgressUpdateStreamOutcome> CreateProgressUpdateStreamOutcomeCallable;
        typedef std::future<DeleteProgressUpdateStreamOutcome> DeleteProgressUpdateStreamOutcomeCallable;
        typedef std::future<DescribeApplicationStateOutcome> DescribeApplicationStateOutcomeCallable;
        typedef std::future<DescribeMigrationTaskOutcome> DescribeMigrationTaskOutcomeCallable;
        typedef std::future<DisassociateCreatedArtifactOutcome> DisassociateCreatedArtifactOutcomeCallable;
        typedef std::future<DisassociateDiscoveredResourceOutcome> DisassociateDiscoveredResourceOutcomeCallable;
        typedef std::future<ImportMigrationTaskOutcome> ImportMigrationTaskOutcomeCallable;
        typedef std::future<ListCreatedArtifactsOutcome> ListCreatedArtifactsOutcomeCallable;
        typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
        typedef std::future<ListMigrationTasksOutcome> ListMigrationTasksOutcomeCallable;
        typedef std::future<ListProgressUpdateStreamsOutcome> ListProgressUpdateStreamsOutcomeCallable;
        typedef std::future<NotifyApplicationStateOutcome> NotifyApplicationStateOutcomeCallable;
        typedef std::future<NotifyMigrationTaskStateOutcome> NotifyMigrationTaskStateOutcomeCallable;
        typedef std::future<PutResourceAttributesOutcome> PutResourceAttributesOutcomeCallable;
} // namespace Model

  class MigrationHubClient;

    typedef std::function<void(const MigrationHubClient*, const Model::AssociateCreatedArtifactRequest&, const Model::AssociateCreatedArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCreatedArtifactResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::AssociateDiscoveredResourceRequest&, const Model::AssociateDiscoveredResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDiscoveredResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::CreateProgressUpdateStreamRequest&, const Model::CreateProgressUpdateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProgressUpdateStreamResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DeleteProgressUpdateStreamRequest&, const Model::DeleteProgressUpdateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProgressUpdateStreamResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DescribeApplicationStateRequest&, const Model::DescribeApplicationStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationStateResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DescribeMigrationTaskRequest&, const Model::DescribeMigrationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMigrationTaskResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DisassociateCreatedArtifactRequest&, const Model::DisassociateCreatedArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCreatedArtifactResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DisassociateDiscoveredResourceRequest&, const Model::DisassociateDiscoveredResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDiscoveredResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ImportMigrationTaskRequest&, const Model::ImportMigrationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportMigrationTaskResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListCreatedArtifactsRequest&, const Model::ListCreatedArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCreatedArtifactsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListDiscoveredResourcesRequest&, const Model::ListDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListMigrationTasksRequest&, const Model::ListMigrationTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMigrationTasksResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListProgressUpdateStreamsRequest&, const Model::ListProgressUpdateStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProgressUpdateStreamsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::NotifyApplicationStateRequest&, const Model::NotifyApplicationStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyApplicationStateResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::NotifyMigrationTaskStateRequest&, const Model::NotifyMigrationTaskStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyMigrationTaskStateResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::PutResourceAttributesRequest&, const Model::PutResourceAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourceAttributesResponseReceivedHandler;

  /**
   * <p>The AWS Migration Hub API methods help to obtain server and application
   * migration status and integrate your resource-specific migration tool by
   * providing a programmatic interface to Migration Hub. </p>
   */
  class AWS_MIGRATIONHUB_API MigrationHubClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MigrationHubClient();

        inline virtual const char* GetServiceClientName() const override { return "mgh"; }


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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateCreatedArtifactOutcomeCallable AssociateCreatedArtifactCallable(const Model::AssociateCreatedArtifactRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateCreatedArtifactAsync(const Model::AssociateCreatedArtifactRequest& request, const AssociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a discovered resource ID from Application Discovery Service (ADS)
         * with a migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/AssociateDiscoveredResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDiscoveredResourceOutcome AssociateDiscoveredResource(const Model::AssociateDiscoveredResourceRequest& request) const;

        /**
         * <p>Associates a discovered resource ID from Application Discovery Service (ADS)
         * with a migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/AssociateDiscoveredResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDiscoveredResourceOutcomeCallable AssociateDiscoveredResourceCallable(const Model::AssociateDiscoveredResourceRequest& request) const;

        /**
         * <p>Associates a discovered resource ID from Application Discovery Service (ADS)
         * with a migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/AssociateDiscoveredResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDiscoveredResourceAsync(const Model::AssociateDiscoveredResourceRequest& request, const AssociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates a progress update stream which is an AWS resource used for access
         * control as well as a namespace for migration task names that is implicitly
         * linked to your AWS account. It must uniquely identify the migration tool as it
         * is used for all updates made by the tool; however, it does not need to be unique
         * for each AWS account because it is scoped to the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/CreateProgressUpdateStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProgressUpdateStreamOutcomeCallable CreateProgressUpdateStreamCallable(const Model::CreateProgressUpdateStreamRequest& request) const;

        /**
         * <p>Creates a progress update stream which is an AWS resource used for access
         * control as well as a namespace for migration task names that is implicitly
         * linked to your AWS account. It must uniquely identify the migration tool as it
         * is used for all updates made by the tool; however, it does not need to be unique
         * for each AWS account because it is scoped to the AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/CreateProgressUpdateStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProgressUpdateStreamAsync(const Model::CreateProgressUpdateStreamRequest& request, const CreateProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <code>NotifyMigrationTaskState</code>, and all Associate[*] APIs realted to the
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
         * <code>NotifyMigrationTaskState</code>, and all Associate[*] APIs realted to the
         * tasks belonging to the stream will throw "InvalidInputException" if the stream
         * of the same name is in the process of being deleted.</p> </li> <li> <p>Once the
         * stream and all of its resources are deleted,
         * <code>CreateProgressUpdateStream</code> for a stream of the same name will
         * succeed, and that stream will be an entirely new logical resource (without any
         * resources associated with the old stream).</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DeleteProgressUpdateStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProgressUpdateStreamOutcomeCallable DeleteProgressUpdateStreamCallable(const Model::DeleteProgressUpdateStreamRequest& request) const;

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
         * <code>NotifyMigrationTaskState</code>, and all Associate[*] APIs realted to the
         * tasks belonging to the stream will throw "InvalidInputException" if the stream
         * of the same name is in the process of being deleted.</p> </li> <li> <p>Once the
         * stream and all of its resources are deleted,
         * <code>CreateProgressUpdateStream</code> for a stream of the same name will
         * succeed, and that stream will be an entirely new logical resource (without any
         * resources associated with the old stream).</p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DeleteProgressUpdateStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProgressUpdateStreamAsync(const Model::DeleteProgressUpdateStreamRequest& request, const DeleteProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the migration status of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeApplicationState">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationStateOutcome DescribeApplicationState(const Model::DescribeApplicationStateRequest& request) const;

        /**
         * <p>Gets the migration status of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeApplicationState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationStateOutcomeCallable DescribeApplicationStateCallable(const Model::DescribeApplicationStateRequest& request) const;

        /**
         * <p>Gets the migration status of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeApplicationState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationStateAsync(const Model::DescribeApplicationStateRequest& request, const DescribeApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all attributes associated with a specific migration
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeMigrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMigrationTaskOutcome DescribeMigrationTask(const Model::DescribeMigrationTaskRequest& request) const;

        /**
         * <p>Retrieves a list of all attributes associated with a specific migration
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeMigrationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMigrationTaskOutcomeCallable DescribeMigrationTaskCallable(const Model::DescribeMigrationTaskRequest& request) const;

        /**
         * <p>Retrieves a list of all attributes associated with a specific migration
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DescribeMigrationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMigrationTaskAsync(const Model::DescribeMigrationTaskRequest& request, const DescribeMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateCreatedArtifactOutcomeCallable DisassociateCreatedArtifactCallable(const Model::DisassociateCreatedArtifactRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateCreatedArtifactAsync(const Model::DisassociateCreatedArtifactRequest& request, const DisassociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociate an Application Discovery Service (ADS) discovered resource from
         * a migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DisassociateDiscoveredResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDiscoveredResourceOutcome DisassociateDiscoveredResource(const Model::DisassociateDiscoveredResourceRequest& request) const;

        /**
         * <p>Disassociate an Application Discovery Service (ADS) discovered resource from
         * a migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DisassociateDiscoveredResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDiscoveredResourceOutcomeCallable DisassociateDiscoveredResourceCallable(const Model::DisassociateDiscoveredResourceRequest& request) const;

        /**
         * <p>Disassociate an Application Discovery Service (ADS) discovered resource from
         * a migration task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DisassociateDiscoveredResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDiscoveredResourceAsync(const Model::DisassociateDiscoveredResourceRequest& request, const DisassociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Registers a new migration task which represents a server, database, etc.,
         * being migrated to AWS by a migration tool.</p> <p>This API is a prerequisite to
         * calling the <code>NotifyMigrationTaskState</code> API as the migration tool must
         * first register the migration task with Migration Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ImportMigrationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportMigrationTaskOutcomeCallable ImportMigrationTaskCallable(const Model::ImportMigrationTaskRequest& request) const;

        /**
         * <p>Registers a new migration task which represents a server, database, etc.,
         * being migrated to AWS by a migration tool.</p> <p>This API is a prerequisite to
         * calling the <code>NotifyMigrationTaskState</code> API as the migration tool must
         * first register the migration task with Migration Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ImportMigrationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportMigrationTaskAsync(const Model::ImportMigrationTaskRequest& request, const ImportMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists the created artifacts attached to a given migration task in an update
         * stream. This API has the following traits:</p> <ul> <li> <p>Gets the list of the
         * created artifacts while migration is taking place.</p> </li> <li> <p>Shows the
         * artifacts created by the migration tool that was associated by the
         * <code>AssociateCreatedArtifact</code> API. </p> </li> <li> <p>Lists created
         * artifacts in a paginated interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListCreatedArtifacts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCreatedArtifactsOutcomeCallable ListCreatedArtifactsCallable(const Model::ListCreatedArtifactsRequest& request) const;

        /**
         * <p>Lists the created artifacts attached to a given migration task in an update
         * stream. This API has the following traits:</p> <ul> <li> <p>Gets the list of the
         * created artifacts while migration is taking place.</p> </li> <li> <p>Shows the
         * artifacts created by the migration tool that was associated by the
         * <code>AssociateCreatedArtifact</code> API. </p> </li> <li> <p>Lists created
         * artifacts in a paginated interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListCreatedArtifacts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCreatedArtifactsAsync(const Model::ListCreatedArtifactsRequest& request, const ListCreatedArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists discovered resources associated with the given
         * <code>MigrationTask</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListDiscoveredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * <p>Lists discovered resources associated with the given
         * <code>MigrationTask</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListDiscoveredResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * <p>Lists discovered resources associated with the given
         * <code>MigrationTask</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListDiscoveredResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDiscoveredResourcesAsync(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists all, or filtered by resource name, migration tasks associated with the
         * user account making this call. This API has the following traits:</p> <ul> <li>
         * <p>Can show a summary list of the most recent migration tasks.</p> </li> <li>
         * <p>Can show a summary list of migration tasks associated with a given discovered
         * resource.</p> </li> <li> <p>Lists migration tasks in a paginated interface.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListMigrationTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMigrationTasksOutcomeCallable ListMigrationTasksCallable(const Model::ListMigrationTasksRequest& request) const;

        /**
         * <p>Lists all, or filtered by resource name, migration tasks associated with the
         * user account making this call. This API has the following traits:</p> <ul> <li>
         * <p>Can show a summary list of the most recent migration tasks.</p> </li> <li>
         * <p>Can show a summary list of migration tasks associated with a given discovered
         * resource.</p> </li> <li> <p>Lists migration tasks in a paginated interface.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListMigrationTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMigrationTasksAsync(const Model::ListMigrationTasksRequest& request, const ListMigrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists progress update streams associated with the user account making this
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListProgressUpdateStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProgressUpdateStreamsOutcome ListProgressUpdateStreams(const Model::ListProgressUpdateStreamsRequest& request) const;

        /**
         * <p>Lists progress update streams associated with the user account making this
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListProgressUpdateStreams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProgressUpdateStreamsOutcomeCallable ListProgressUpdateStreamsCallable(const Model::ListProgressUpdateStreamsRequest& request) const;

        /**
         * <p>Lists progress update streams associated with the user account making this
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/ListProgressUpdateStreams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProgressUpdateStreamsAsync(const Model::ListProgressUpdateStreamsRequest& request, const ListProgressUpdateStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Sets the migration state of an application. For a given application
         * identified by the value passed to <code>ApplicationId</code>, its status is set
         * or updated by passing one of three values to <code>Status</code>:
         * <code>NOT_STARTED | IN_PROGRESS | COMPLETED</code>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/NotifyApplicationState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyApplicationStateOutcomeCallable NotifyApplicationStateCallable(const Model::NotifyApplicationStateRequest& request) const;

        /**
         * <p>Sets the migration state of an application. For a given application
         * identified by the value passed to <code>ApplicationId</code>, its status is set
         * or updated by passing one of three values to <code>Status</code>:
         * <code>NOT_STARTED | IN_PROGRESS | COMPLETED</code>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/NotifyApplicationState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyApplicationStateAsync(const Model::NotifyApplicationStateRequest& request, const NotifyApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyMigrationTaskStateOutcomeCallable NotifyMigrationTaskStateCallable(const Model::NotifyMigrationTaskStateRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyMigrationTaskStateAsync(const Model::NotifyMigrationTaskStateRequest& request, const NotifyMigrationTaskStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides identifying details of the resource being migrated so that it can be
         * associated in the Application Discovery Service (ADS)'s repository. This
         * association occurs asynchronously after <code>PutResourceAttributes</code>
         * returns.</p> <important> <ul> <li> <p>Keep in mind that subsequent calls to
         * PutResourceAttributes will override previously stored attributes. For example,
         * if it is first called with a MAC address, but later, it is desired to <i>add</i>
         * an IP address, it will then be required to call it with <i>both</i> the IP and
         * MAC addresses to prevent overiding the MAC address.</p> </li> <li> <p>Note the
         * instructions regarding the special use case of the <a
         * href="https://docs.aws.amazon.com/migrationhub/latest/ug/API_PutResourceAttributes.html#migrationhub-PutResourceAttributes-request-ResourceAttributeList">
         * <code>ResourceAttributeList</code> </a> parameter when specifying any "VM"
         * related value. </p> </li> </ul> </important> <note> <p>Because this is an
         * asynchronous call, it will always return 200, whether an association occurs or
         * not. To confirm if an association was found based on the provided details, call
         * <code>ListDiscoveredResources</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/PutResourceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourceAttributesOutcome PutResourceAttributes(const Model::PutResourceAttributesRequest& request) const;

        /**
         * <p>Provides identifying details of the resource being migrated so that it can be
         * associated in the Application Discovery Service (ADS)'s repository. This
         * association occurs asynchronously after <code>PutResourceAttributes</code>
         * returns.</p> <important> <ul> <li> <p>Keep in mind that subsequent calls to
         * PutResourceAttributes will override previously stored attributes. For example,
         * if it is first called with a MAC address, but later, it is desired to <i>add</i>
         * an IP address, it will then be required to call it with <i>both</i> the IP and
         * MAC addresses to prevent overiding the MAC address.</p> </li> <li> <p>Note the
         * instructions regarding the special use case of the <a
         * href="https://docs.aws.amazon.com/migrationhub/latest/ug/API_PutResourceAttributes.html#migrationhub-PutResourceAttributes-request-ResourceAttributeList">
         * <code>ResourceAttributeList</code> </a> parameter when specifying any "VM"
         * related value. </p> </li> </ul> </important> <note> <p>Because this is an
         * asynchronous call, it will always return 200, whether an association occurs or
         * not. To confirm if an association was found based on the provided details, call
         * <code>ListDiscoveredResources</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/PutResourceAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourceAttributesOutcomeCallable PutResourceAttributesCallable(const Model::PutResourceAttributesRequest& request) const;

        /**
         * <p>Provides identifying details of the resource being migrated so that it can be
         * associated in the Application Discovery Service (ADS)'s repository. This
         * association occurs asynchronously after <code>PutResourceAttributes</code>
         * returns.</p> <important> <ul> <li> <p>Keep in mind that subsequent calls to
         * PutResourceAttributes will override previously stored attributes. For example,
         * if it is first called with a MAC address, but later, it is desired to <i>add</i>
         * an IP address, it will then be required to call it with <i>both</i> the IP and
         * MAC addresses to prevent overiding the MAC address.</p> </li> <li> <p>Note the
         * instructions regarding the special use case of the <a
         * href="https://docs.aws.amazon.com/migrationhub/latest/ug/API_PutResourceAttributes.html#migrationhub-PutResourceAttributes-request-ResourceAttributeList">
         * <code>ResourceAttributeList</code> </a> parameter when specifying any "VM"
         * related value. </p> </li> </ul> </important> <note> <p>Because this is an
         * asynchronous call, it will always return 200, whether an association occurs or
         * not. To confirm if an association was found based on the provided details, call
         * <code>ListDiscoveredResources</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/PutResourceAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourceAttributesAsync(const Model::PutResourceAttributesRequest& request, const PutResourceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateCreatedArtifactAsyncHelper(const Model::AssociateCreatedArtifactRequest& request, const AssociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateDiscoveredResourceAsyncHelper(const Model::AssociateDiscoveredResourceRequest& request, const AssociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProgressUpdateStreamAsyncHelper(const Model::CreateProgressUpdateStreamRequest& request, const CreateProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProgressUpdateStreamAsyncHelper(const Model::DeleteProgressUpdateStreamRequest& request, const DeleteProgressUpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationStateAsyncHelper(const Model::DescribeApplicationStateRequest& request, const DescribeApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMigrationTaskAsyncHelper(const Model::DescribeMigrationTaskRequest& request, const DescribeMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateCreatedArtifactAsyncHelper(const Model::DisassociateCreatedArtifactRequest& request, const DisassociateCreatedArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDiscoveredResourceAsyncHelper(const Model::DisassociateDiscoveredResourceRequest& request, const DisassociateDiscoveredResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportMigrationTaskAsyncHelper(const Model::ImportMigrationTaskRequest& request, const ImportMigrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCreatedArtifactsAsyncHelper(const Model::ListCreatedArtifactsRequest& request, const ListCreatedArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDiscoveredResourcesAsyncHelper(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMigrationTasksAsyncHelper(const Model::ListMigrationTasksRequest& request, const ListMigrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProgressUpdateStreamsAsyncHelper(const Model::ListProgressUpdateStreamsRequest& request, const ListProgressUpdateStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void NotifyApplicationStateAsyncHelper(const Model::NotifyApplicationStateRequest& request, const NotifyApplicationStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void NotifyMigrationTaskStateAsyncHelper(const Model::NotifyMigrationTaskStateRequest& request, const NotifyMigrationTaskStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourceAttributesAsyncHelper(const Model::PutResourceAttributesRequest& request, const PutResourceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MigrationHub
} // namespace Aws
