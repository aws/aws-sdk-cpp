/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/model/CancelTaskExecutionResult.h>
#include <aws/datasync/model/CreateAgentResult.h>
#include <aws/datasync/model/CreateLocationEfsResult.h>
#include <aws/datasync/model/CreateLocationFsxWindowsResult.h>
#include <aws/datasync/model/CreateLocationNfsResult.h>
#include <aws/datasync/model/CreateLocationObjectStorageResult.h>
#include <aws/datasync/model/CreateLocationS3Result.h>
#include <aws/datasync/model/CreateLocationSmbResult.h>
#include <aws/datasync/model/CreateTaskResult.h>
#include <aws/datasync/model/DeleteAgentResult.h>
#include <aws/datasync/model/DeleteLocationResult.h>
#include <aws/datasync/model/DeleteTaskResult.h>
#include <aws/datasync/model/DescribeAgentResult.h>
#include <aws/datasync/model/DescribeLocationEfsResult.h>
#include <aws/datasync/model/DescribeLocationFsxWindowsResult.h>
#include <aws/datasync/model/DescribeLocationNfsResult.h>
#include <aws/datasync/model/DescribeLocationObjectStorageResult.h>
#include <aws/datasync/model/DescribeLocationS3Result.h>
#include <aws/datasync/model/DescribeLocationSmbResult.h>
#include <aws/datasync/model/DescribeTaskResult.h>
#include <aws/datasync/model/DescribeTaskExecutionResult.h>
#include <aws/datasync/model/ListAgentsResult.h>
#include <aws/datasync/model/ListLocationsResult.h>
#include <aws/datasync/model/ListTagsForResourceResult.h>
#include <aws/datasync/model/ListTaskExecutionsResult.h>
#include <aws/datasync/model/ListTasksResult.h>
#include <aws/datasync/model/StartTaskExecutionResult.h>
#include <aws/datasync/model/TagResourceResult.h>
#include <aws/datasync/model/UntagResourceResult.h>
#include <aws/datasync/model/UpdateAgentResult.h>
#include <aws/datasync/model/UpdateLocationNfsResult.h>
#include <aws/datasync/model/UpdateLocationObjectStorageResult.h>
#include <aws/datasync/model/UpdateLocationSmbResult.h>
#include <aws/datasync/model/UpdateTaskResult.h>
#include <aws/datasync/model/UpdateTaskExecutionResult.h>
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

namespace DataSync
{

namespace Model
{
        class CancelTaskExecutionRequest;
        class CreateAgentRequest;
        class CreateLocationEfsRequest;
        class CreateLocationFsxWindowsRequest;
        class CreateLocationNfsRequest;
        class CreateLocationObjectStorageRequest;
        class CreateLocationS3Request;
        class CreateLocationSmbRequest;
        class CreateTaskRequest;
        class DeleteAgentRequest;
        class DeleteLocationRequest;
        class DeleteTaskRequest;
        class DescribeAgentRequest;
        class DescribeLocationEfsRequest;
        class DescribeLocationFsxWindowsRequest;
        class DescribeLocationNfsRequest;
        class DescribeLocationObjectStorageRequest;
        class DescribeLocationS3Request;
        class DescribeLocationSmbRequest;
        class DescribeTaskRequest;
        class DescribeTaskExecutionRequest;
        class ListAgentsRequest;
        class ListLocationsRequest;
        class ListTagsForResourceRequest;
        class ListTaskExecutionsRequest;
        class ListTasksRequest;
        class StartTaskExecutionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAgentRequest;
        class UpdateLocationNfsRequest;
        class UpdateLocationObjectStorageRequest;
        class UpdateLocationSmbRequest;
        class UpdateTaskRequest;
        class UpdateTaskExecutionRequest;

        typedef Aws::Utils::Outcome<CancelTaskExecutionResult, DataSyncError> CancelTaskExecutionOutcome;
        typedef Aws::Utils::Outcome<CreateAgentResult, DataSyncError> CreateAgentOutcome;
        typedef Aws::Utils::Outcome<CreateLocationEfsResult, DataSyncError> CreateLocationEfsOutcome;
        typedef Aws::Utils::Outcome<CreateLocationFsxWindowsResult, DataSyncError> CreateLocationFsxWindowsOutcome;
        typedef Aws::Utils::Outcome<CreateLocationNfsResult, DataSyncError> CreateLocationNfsOutcome;
        typedef Aws::Utils::Outcome<CreateLocationObjectStorageResult, DataSyncError> CreateLocationObjectStorageOutcome;
        typedef Aws::Utils::Outcome<CreateLocationS3Result, DataSyncError> CreateLocationS3Outcome;
        typedef Aws::Utils::Outcome<CreateLocationSmbResult, DataSyncError> CreateLocationSmbOutcome;
        typedef Aws::Utils::Outcome<CreateTaskResult, DataSyncError> CreateTaskOutcome;
        typedef Aws::Utils::Outcome<DeleteAgentResult, DataSyncError> DeleteAgentOutcome;
        typedef Aws::Utils::Outcome<DeleteLocationResult, DataSyncError> DeleteLocationOutcome;
        typedef Aws::Utils::Outcome<DeleteTaskResult, DataSyncError> DeleteTaskOutcome;
        typedef Aws::Utils::Outcome<DescribeAgentResult, DataSyncError> DescribeAgentOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationEfsResult, DataSyncError> DescribeLocationEfsOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationFsxWindowsResult, DataSyncError> DescribeLocationFsxWindowsOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationNfsResult, DataSyncError> DescribeLocationNfsOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationObjectStorageResult, DataSyncError> DescribeLocationObjectStorageOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationS3Result, DataSyncError> DescribeLocationS3Outcome;
        typedef Aws::Utils::Outcome<DescribeLocationSmbResult, DataSyncError> DescribeLocationSmbOutcome;
        typedef Aws::Utils::Outcome<DescribeTaskResult, DataSyncError> DescribeTaskOutcome;
        typedef Aws::Utils::Outcome<DescribeTaskExecutionResult, DataSyncError> DescribeTaskExecutionOutcome;
        typedef Aws::Utils::Outcome<ListAgentsResult, DataSyncError> ListAgentsOutcome;
        typedef Aws::Utils::Outcome<ListLocationsResult, DataSyncError> ListLocationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, DataSyncError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTaskExecutionsResult, DataSyncError> ListTaskExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListTasksResult, DataSyncError> ListTasksOutcome;
        typedef Aws::Utils::Outcome<StartTaskExecutionResult, DataSyncError> StartTaskExecutionOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, DataSyncError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, DataSyncError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAgentResult, DataSyncError> UpdateAgentOutcome;
        typedef Aws::Utils::Outcome<UpdateLocationNfsResult, DataSyncError> UpdateLocationNfsOutcome;
        typedef Aws::Utils::Outcome<UpdateLocationObjectStorageResult, DataSyncError> UpdateLocationObjectStorageOutcome;
        typedef Aws::Utils::Outcome<UpdateLocationSmbResult, DataSyncError> UpdateLocationSmbOutcome;
        typedef Aws::Utils::Outcome<UpdateTaskResult, DataSyncError> UpdateTaskOutcome;
        typedef Aws::Utils::Outcome<UpdateTaskExecutionResult, DataSyncError> UpdateTaskExecutionOutcome;

        typedef std::future<CancelTaskExecutionOutcome> CancelTaskExecutionOutcomeCallable;
        typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
        typedef std::future<CreateLocationEfsOutcome> CreateLocationEfsOutcomeCallable;
        typedef std::future<CreateLocationFsxWindowsOutcome> CreateLocationFsxWindowsOutcomeCallable;
        typedef std::future<CreateLocationNfsOutcome> CreateLocationNfsOutcomeCallable;
        typedef std::future<CreateLocationObjectStorageOutcome> CreateLocationObjectStorageOutcomeCallable;
        typedef std::future<CreateLocationS3Outcome> CreateLocationS3OutcomeCallable;
        typedef std::future<CreateLocationSmbOutcome> CreateLocationSmbOutcomeCallable;
        typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
        typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
        typedef std::future<DeleteLocationOutcome> DeleteLocationOutcomeCallable;
        typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
        typedef std::future<DescribeAgentOutcome> DescribeAgentOutcomeCallable;
        typedef std::future<DescribeLocationEfsOutcome> DescribeLocationEfsOutcomeCallable;
        typedef std::future<DescribeLocationFsxWindowsOutcome> DescribeLocationFsxWindowsOutcomeCallable;
        typedef std::future<DescribeLocationNfsOutcome> DescribeLocationNfsOutcomeCallable;
        typedef std::future<DescribeLocationObjectStorageOutcome> DescribeLocationObjectStorageOutcomeCallable;
        typedef std::future<DescribeLocationS3Outcome> DescribeLocationS3OutcomeCallable;
        typedef std::future<DescribeLocationSmbOutcome> DescribeLocationSmbOutcomeCallable;
        typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
        typedef std::future<DescribeTaskExecutionOutcome> DescribeTaskExecutionOutcomeCallable;
        typedef std::future<ListAgentsOutcome> ListAgentsOutcomeCallable;
        typedef std::future<ListLocationsOutcome> ListLocationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTaskExecutionsOutcome> ListTaskExecutionsOutcomeCallable;
        typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
        typedef std::future<StartTaskExecutionOutcome> StartTaskExecutionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAgentOutcome> UpdateAgentOutcomeCallable;
        typedef std::future<UpdateLocationNfsOutcome> UpdateLocationNfsOutcomeCallable;
        typedef std::future<UpdateLocationObjectStorageOutcome> UpdateLocationObjectStorageOutcomeCallable;
        typedef std::future<UpdateLocationSmbOutcome> UpdateLocationSmbOutcomeCallable;
        typedef std::future<UpdateTaskOutcome> UpdateTaskOutcomeCallable;
        typedef std::future<UpdateTaskExecutionOutcome> UpdateTaskExecutionOutcomeCallable;
} // namespace Model

  class DataSyncClient;

    typedef std::function<void(const DataSyncClient*, const Model::CancelTaskExecutionRequest&, const Model::CancelTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTaskExecutionResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateAgentRequest&, const Model::CreateAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationEfsRequest&, const Model::CreateLocationEfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationEfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationFsxWindowsRequest&, const Model::CreateLocationFsxWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationFsxWindowsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationNfsRequest&, const Model::CreateLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationObjectStorageRequest&, const Model::CreateLocationObjectStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationObjectStorageResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationS3Request&, const Model::CreateLocationS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationS3ResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationSmbRequest&, const Model::CreateLocationSmbOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationSmbResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateTaskRequest&, const Model::CreateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteAgentRequest&, const Model::DeleteAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteLocationRequest&, const Model::DeleteLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocationResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteTaskRequest&, const Model::DeleteTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeAgentRequest&, const Model::DescribeAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationEfsRequest&, const Model::DescribeLocationEfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationEfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationFsxWindowsRequest&, const Model::DescribeLocationFsxWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationFsxWindowsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationNfsRequest&, const Model::DescribeLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationObjectStorageRequest&, const Model::DescribeLocationObjectStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationObjectStorageResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationS3Request&, const Model::DescribeLocationS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationS3ResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationSmbRequest&, const Model::DescribeLocationSmbOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationSmbResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeTaskRequest&, const Model::DescribeTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeTaskExecutionRequest&, const Model::DescribeTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskExecutionResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListAgentsRequest&, const Model::ListAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListLocationsRequest&, const Model::ListLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLocationsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListTaskExecutionsRequest&, const Model::ListTaskExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskExecutionsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::StartTaskExecutionRequest&, const Model::StartTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskExecutionResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateAgentRequest&, const Model::UpdateAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateLocationNfsRequest&, const Model::UpdateLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateLocationObjectStorageRequest&, const Model::UpdateLocationObjectStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLocationObjectStorageResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateLocationSmbRequest&, const Model::UpdateLocationSmbOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLocationSmbResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateTaskRequest&, const Model::UpdateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateTaskExecutionRequest&, const Model::UpdateTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskExecutionResponseReceivedHandler;

  /**
   * <fullname>AWS DataSync</fullname> <p>AWS DataSync is a managed data transfer
   * service that makes it simpler for you to automate moving data between
   * on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon
   * Elastic File System (Amazon EFS). </p> <p>This API interface reference for AWS
   * DataSync contains documentation for a programming interface that you can use to
   * manage AWS DataSync.</p>
   */
  class AWS_DATASYNC_API DataSyncClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataSyncClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DataSyncClient();


        /**
         * <p>Cancels execution of a task. </p> <p>When you cancel a task execution, the
         * transfer of some files is abruptly interrupted. The contents of files that are
         * transferred to the destination might be incomplete or inconsistent with the
         * source files. However, if you start a new task execution on the same task and
         * you allow the task execution to complete, file content on the destination is
         * complete and consistent. This applies to other unexpected failures that
         * interrupt a task execution. In all of these cases, AWS DataSync successfully
         * complete the transfer when you start the next task execution.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CancelTaskExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelTaskExecutionOutcome CancelTaskExecution(const Model::CancelTaskExecutionRequest& request) const;

        /**
         * <p>Cancels execution of a task. </p> <p>When you cancel a task execution, the
         * transfer of some files is abruptly interrupted. The contents of files that are
         * transferred to the destination might be incomplete or inconsistent with the
         * source files. However, if you start a new task execution on the same task and
         * you allow the task execution to complete, file content on the destination is
         * complete and consistent. This applies to other unexpected failures that
         * interrupt a task execution. In all of these cases, AWS DataSync successfully
         * complete the transfer when you start the next task execution.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CancelTaskExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelTaskExecutionOutcomeCallable CancelTaskExecutionCallable(const Model::CancelTaskExecutionRequest& request) const;

        /**
         * <p>Cancels execution of a task. </p> <p>When you cancel a task execution, the
         * transfer of some files is abruptly interrupted. The contents of files that are
         * transferred to the destination might be incomplete or inconsistent with the
         * source files. However, if you start a new task execution on the same task and
         * you allow the task execution to complete, file content on the destination is
         * complete and consistent. This applies to other unexpected failures that
         * interrupt a task execution. In all of these cases, AWS DataSync successfully
         * complete the transfer when you start the next task execution.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CancelTaskExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelTaskExecutionAsync(const Model::CancelTaskExecutionRequest& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Activates an AWS DataSync agent that you have deployed on your host. The
         * activation process associates your agent with your account. In the activation
         * process, you specify information such as the AWS Region that you want to
         * activate the agent in. You activate the agent in the AWS Region where your
         * target locations (in Amazon S3 or Amazon EFS) reside. Your tasks are created in
         * this AWS Region.</p> <p>You can activate the agent in a VPC (virtual private
         * cloud) or provide the agent access to a VPC endpoint so you can run tasks
         * without going over the public internet.</p> <p>You can use an agent for more
         * than one location. If a task uses multiple agents, all of them need to have
         * status AVAILABLE for the task to run. If you use multiple agents for a source
         * location, the status of all the agents must be AVAILABLE for the task to run.
         * </p> <p>Agents are automatically updated by AWS on a regular basis, using a
         * mechanism that ensures minimal interruption to your tasks.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentOutcome CreateAgent(const Model::CreateAgentRequest& request) const;

        /**
         * <p>Activates an AWS DataSync agent that you have deployed on your host. The
         * activation process associates your agent with your account. In the activation
         * process, you specify information such as the AWS Region that you want to
         * activate the agent in. You activate the agent in the AWS Region where your
         * target locations (in Amazon S3 or Amazon EFS) reside. Your tasks are created in
         * this AWS Region.</p> <p>You can activate the agent in a VPC (virtual private
         * cloud) or provide the agent access to a VPC endpoint so you can run tasks
         * without going over the public internet.</p> <p>You can use an agent for more
         * than one location. If a task uses multiple agents, all of them need to have
         * status AVAILABLE for the task to run. If you use multiple agents for a source
         * location, the status of all the agents must be AVAILABLE for the task to run.
         * </p> <p>Agents are automatically updated by AWS on a regular basis, using a
         * mechanism that ensures minimal interruption to your tasks.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateAgent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAgentOutcomeCallable CreateAgentCallable(const Model::CreateAgentRequest& request) const;

        /**
         * <p>Activates an AWS DataSync agent that you have deployed on your host. The
         * activation process associates your agent with your account. In the activation
         * process, you specify information such as the AWS Region that you want to
         * activate the agent in. You activate the agent in the AWS Region where your
         * target locations (in Amazon S3 or Amazon EFS) reside. Your tasks are created in
         * this AWS Region.</p> <p>You can activate the agent in a VPC (virtual private
         * cloud) or provide the agent access to a VPC endpoint so you can run tasks
         * without going over the public internet.</p> <p>You can use an agent for more
         * than one location. If a task uses multiple agents, all of them need to have
         * status AVAILABLE for the task to run. If you use multiple agents for a source
         * location, the status of all the agents must be AVAILABLE for the task to run.
         * </p> <p>Agents are automatically updated by AWS on a regular basis, using a
         * mechanism that ensures minimal interruption to your tasks.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateAgent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAgentAsync(const Model::CreateAgentRequest& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint for an Amazon EFS file system.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationEfs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationEfsOutcome CreateLocationEfs(const Model::CreateLocationEfsRequest& request) const;

        /**
         * <p>Creates an endpoint for an Amazon EFS file system.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationEfs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationEfsOutcomeCallable CreateLocationEfsCallable(const Model::CreateLocationEfsRequest& request) const;

        /**
         * <p>Creates an endpoint for an Amazon EFS file system.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationEfs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationEfsAsync(const Model::CreateLocationEfsRequest& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint for an Amazon FSx for Windows File Server file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationFsxWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationFsxWindowsOutcome CreateLocationFsxWindows(const Model::CreateLocationFsxWindowsRequest& request) const;

        /**
         * <p>Creates an endpoint for an Amazon FSx for Windows File Server file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationFsxWindows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationFsxWindowsOutcomeCallable CreateLocationFsxWindowsCallable(const Model::CreateLocationFsxWindowsRequest& request) const;

        /**
         * <p>Creates an endpoint for an Amazon FSx for Windows File Server file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationFsxWindows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationFsxWindowsAsync(const Model::CreateLocationFsxWindowsRequest& request, const CreateLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines a file system on a Network File System (NFS) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationNfsOutcome CreateLocationNfs(const Model::CreateLocationNfsRequest& request) const;

        /**
         * <p>Defines a file system on a Network File System (NFS) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationNfsOutcomeCallable CreateLocationNfsCallable(const Model::CreateLocationNfsRequest& request) const;

        /**
         * <p>Defines a file system on a Network File System (NFS) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationNfsAsync(const Model::CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint for a self-managed object storage bucket. For more
         * information about self-managed object storage locations, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationObjectStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationObjectStorageOutcome CreateLocationObjectStorage(const Model::CreateLocationObjectStorageRequest& request) const;

        /**
         * <p>Creates an endpoint for a self-managed object storage bucket. For more
         * information about self-managed object storage locations, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationObjectStorage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationObjectStorageOutcomeCallable CreateLocationObjectStorageCallable(const Model::CreateLocationObjectStorageRequest& request) const;

        /**
         * <p>Creates an endpoint for a self-managed object storage bucket. For more
         * information about self-managed object storage locations, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationObjectStorage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationObjectStorageAsync(const Model::CreateLocationObjectStorageRequest& request, const CreateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint for an Amazon S3 bucket.</p> <p>For more information, see
         * https://docs.aws.amazon.com/datasync/latest/userguide/create-locations-cli.html#create-location-s3-cli
         * in the <i>AWS DataSync User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationS3Outcome CreateLocationS3(const Model::CreateLocationS3Request& request) const;

        /**
         * <p>Creates an endpoint for an Amazon S3 bucket.</p> <p>For more information, see
         * https://docs.aws.amazon.com/datasync/latest/userguide/create-locations-cli.html#create-location-s3-cli
         * in the <i>AWS DataSync User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationS3OutcomeCallable CreateLocationS3Callable(const Model::CreateLocationS3Request& request) const;

        /**
         * <p>Creates an endpoint for an Amazon S3 bucket.</p> <p>For more information, see
         * https://docs.aws.amazon.com/datasync/latest/userguide/create-locations-cli.html#create-location-s3-cli
         * in the <i>AWS DataSync User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationS3Async(const Model::CreateLocationS3Request& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines a file system on a Server Message Block (SMB) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationSmb">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationSmbOutcome CreateLocationSmb(const Model::CreateLocationSmbRequest& request) const;

        /**
         * <p>Defines a file system on a Server Message Block (SMB) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationSmb">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationSmbOutcomeCallable CreateLocationSmbCallable(const Model::CreateLocationSmbRequest& request) const;

        /**
         * <p>Defines a file system on a Server Message Block (SMB) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationSmb">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationSmbAsync(const Model::CreateLocationSmbRequest& request, const CreateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a task.</p> <p>A task includes a source location and a destination
         * location, and a configuration that specifies how data is transferred. A task
         * always transfers data from the source location to the destination location. The
         * configuration specifies options such as task scheduling, bandwidth limits, etc.
         * A task is the complete definition of a data transfer.</p> <p>When you create a
         * task that transfers data between AWS services in different AWS Regions, one of
         * the two locations that you specify must reside in the Region where DataSync is
         * being used. The other location must be specified in a different Region.</p>
         * <p>You can transfer data between commercial AWS Regions except for China, or
         * between AWS GovCloud (US-East and US-West) Regions.</p>  <p>When you
         * use DataSync to copy files or objects between AWS Regions, you pay for data
         * transfer between Regions. This is billed as data transfer OUT from your source
         * Region to your destination Region. For more information, see <a
         * href="http://aws.amazon.com/ec2/pricing/on-demand/#Data_Transfer">Data Transfer
         * pricing</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTaskOutcome CreateTask(const Model::CreateTaskRequest& request) const;

        /**
         * <p>Creates a task.</p> <p>A task includes a source location and a destination
         * location, and a configuration that specifies how data is transferred. A task
         * always transfers data from the source location to the destination location. The
         * configuration specifies options such as task scheduling, bandwidth limits, etc.
         * A task is the complete definition of a data transfer.</p> <p>When you create a
         * task that transfers data between AWS services in different AWS Regions, one of
         * the two locations that you specify must reside in the Region where DataSync is
         * being used. The other location must be specified in a different Region.</p>
         * <p>You can transfer data between commercial AWS Regions except for China, or
         * between AWS GovCloud (US-East and US-West) Regions.</p>  <p>When you
         * use DataSync to copy files or objects between AWS Regions, you pay for data
         * transfer between Regions. This is billed as data transfer OUT from your source
         * Region to your destination Region. For more information, see <a
         * href="http://aws.amazon.com/ec2/pricing/on-demand/#Data_Transfer">Data Transfer
         * pricing</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request) const;

        /**
         * <p>Creates a task.</p> <p>A task includes a source location and a destination
         * location, and a configuration that specifies how data is transferred. A task
         * always transfers data from the source location to the destination location. The
         * configuration specifies options such as task scheduling, bandwidth limits, etc.
         * A task is the complete definition of a data transfer.</p> <p>When you create a
         * task that transfers data between AWS services in different AWS Regions, one of
         * the two locations that you specify must reside in the Region where DataSync is
         * being used. The other location must be specified in a different Region.</p>
         * <p>You can transfer data between commercial AWS Regions except for China, or
         * between AWS GovCloud (US-East and US-West) Regions.</p>  <p>When you
         * use DataSync to copy files or objects between AWS Regions, you pay for data
         * transfer between Regions. This is billed as data transfer OUT from your source
         * Region to your destination Region. For more information, see <a
         * href="http://aws.amazon.com/ec2/pricing/on-demand/#Data_Transfer">Data Transfer
         * pricing</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an agent. To specify which agent to delete, use the Amazon Resource
         * Name (ARN) of the agent in your request. The operation disassociates the agent
         * from your AWS account. However, it doesn't delete the agent virtual machine (VM)
         * from your on-premises environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentOutcome DeleteAgent(const Model::DeleteAgentRequest& request) const;

        /**
         * <p>Deletes an agent. To specify which agent to delete, use the Amazon Resource
         * Name (ARN) of the agent in your request. The operation disassociates the agent
         * from your AWS account. However, it doesn't delete the agent virtual machine (VM)
         * from your on-premises environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteAgent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAgentOutcomeCallable DeleteAgentCallable(const Model::DeleteAgentRequest& request) const;

        /**
         * <p>Deletes an agent. To specify which agent to delete, use the Amazon Resource
         * Name (ARN) of the agent in your request. The operation disassociates the agent
         * from your AWS account. However, it doesn't delete the agent virtual machine (VM)
         * from your on-premises environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteAgent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAgentAsync(const Model::DeleteAgentRequest& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the configuration of a location used by AWS DataSync. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocationOutcome DeleteLocation(const Model::DeleteLocationRequest& request) const;

        /**
         * <p>Deletes the configuration of a location used by AWS DataSync. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLocationOutcomeCallable DeleteLocationCallable(const Model::DeleteLocationRequest& request) const;

        /**
         * <p>Deletes the configuration of a location used by AWS DataSync. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLocationAsync(const Model::DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest& request) const;

        /**
         * <p>Deletes a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request) const;

        /**
         * <p>Deletes a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata such as the name, the network interfaces, and the status
         * (that is, whether the agent is running or not) for an agent. To specify which
         * agent to describe, use the Amazon Resource Name (ARN) of the agent in your
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentOutcome DescribeAgent(const Model::DescribeAgentRequest& request) const;

        /**
         * <p>Returns metadata such as the name, the network interfaces, and the status
         * (that is, whether the agent is running or not) for an agent. To specify which
         * agent to describe, use the Amazon Resource Name (ARN) of the agent in your
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeAgent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentOutcomeCallable DescribeAgentCallable(const Model::DescribeAgentRequest& request) const;

        /**
         * <p>Returns metadata such as the name, the network interfaces, and the status
         * (that is, whether the agent is running or not) for an agent. To specify which
         * agent to describe, use the Amazon Resource Name (ARN) of the agent in your
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeAgent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgentAsync(const Model::DescribeAgentRequest& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata, such as the path information about an Amazon EFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationEfs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationEfsOutcome DescribeLocationEfs(const Model::DescribeLocationEfsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information about an Amazon EFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationEfs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationEfsOutcomeCallable DescribeLocationEfsCallable(const Model::DescribeLocationEfsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information about an Amazon EFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationEfs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationEfsAsync(const Model::DescribeLocationEfsRequest& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata, such as the path information about an Amazon FSx for
         * Windows File Server location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationFsxWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationFsxWindowsOutcome DescribeLocationFsxWindows(const Model::DescribeLocationFsxWindowsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information about an Amazon FSx for
         * Windows File Server location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationFsxWindows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationFsxWindowsOutcomeCallable DescribeLocationFsxWindowsCallable(const Model::DescribeLocationFsxWindowsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information about an Amazon FSx for
         * Windows File Server location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationFsxWindows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationFsxWindowsAsync(const Model::DescribeLocationFsxWindowsRequest& request, const DescribeLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata, such as the path information, about an NFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationNfsOutcome DescribeLocationNfs(const Model::DescribeLocationNfsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information, about an NFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationNfsOutcomeCallable DescribeLocationNfsCallable(const Model::DescribeLocationNfsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information, about an NFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationNfsAsync(const Model::DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a self-managed object storage server location. For
         * more information about self-managed object storage locations, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationObjectStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationObjectStorageOutcome DescribeLocationObjectStorage(const Model::DescribeLocationObjectStorageRequest& request) const;

        /**
         * <p>Returns metadata about a self-managed object storage server location. For
         * more information about self-managed object storage locations, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationObjectStorage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationObjectStorageOutcomeCallable DescribeLocationObjectStorageCallable(const Model::DescribeLocationObjectStorageRequest& request) const;

        /**
         * <p>Returns metadata about a self-managed object storage server location. For
         * more information about self-managed object storage locations, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationObjectStorage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationObjectStorageAsync(const Model::DescribeLocationObjectStorageRequest& request, const DescribeLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata, such as bucket name, about an Amazon S3 bucket
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationS3">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationS3Outcome DescribeLocationS3(const Model::DescribeLocationS3Request& request) const;

        /**
         * <p>Returns metadata, such as bucket name, about an Amazon S3 bucket
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationS3">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationS3OutcomeCallable DescribeLocationS3Callable(const Model::DescribeLocationS3Request& request) const;

        /**
         * <p>Returns metadata, such as bucket name, about an Amazon S3 bucket
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationS3">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationS3Async(const Model::DescribeLocationS3Request& request, const DescribeLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata, such as the path and user information about an SMB
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationSmb">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationSmbOutcome DescribeLocationSmb(const Model::DescribeLocationSmbRequest& request) const;

        /**
         * <p>Returns metadata, such as the path and user information about an SMB
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationSmb">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationSmbOutcomeCallable DescribeLocationSmbCallable(const Model::DescribeLocationSmbRequest& request) const;

        /**
         * <p>Returns metadata, such as the path and user information about an SMB
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationSmb">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationSmbAsync(const Model::DescribeLocationSmbRequest& request, const DescribeLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest& request) const;

        /**
         * <p>Returns metadata about a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request) const;

        /**
         * <p>Returns metadata about a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed metadata about a task that is being executed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskExecutionOutcome DescribeTaskExecution(const Model::DescribeTaskExecutionRequest& request) const;

        /**
         * <p>Returns detailed metadata about a task that is being executed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTaskExecutionOutcomeCallable DescribeTaskExecutionCallable(const Model::DescribeTaskExecutionRequest& request) const;

        /**
         * <p>Returns detailed metadata about a task that is being executed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTaskExecutionAsync(const Model::DescribeTaskExecutionRequest& request, const DescribeTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of agents owned by an AWS account in the AWS Region specified
         * in the request. The returned list is ordered by agent Amazon Resource Name
         * (ARN).</p> <p>By default, this operation returns a maximum of 100 agents. This
         * operation supports pagination that enables you to optionally reduce the number
         * of agents returned in a response.</p> <p>If you have more agents than are
         * returned in a response (that is, the response returns only a truncated list of
         * your agents), the response contains a marker that you can specify in your next
         * request to fetch the next page of agents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentsOutcome ListAgents(const Model::ListAgentsRequest& request) const;

        /**
         * <p>Returns a list of agents owned by an AWS account in the AWS Region specified
         * in the request. The returned list is ordered by agent Amazon Resource Name
         * (ARN).</p> <p>By default, this operation returns a maximum of 100 agents. This
         * operation supports pagination that enables you to optionally reduce the number
         * of agents returned in a response.</p> <p>If you have more agents than are
         * returned in a response (that is, the response returns only a truncated list of
         * your agents), the response contains a marker that you can specify in your next
         * request to fetch the next page of agents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListAgents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAgentsOutcomeCallable ListAgentsCallable(const Model::ListAgentsRequest& request) const;

        /**
         * <p>Returns a list of agents owned by an AWS account in the AWS Region specified
         * in the request. The returned list is ordered by agent Amazon Resource Name
         * (ARN).</p> <p>By default, this operation returns a maximum of 100 agents. This
         * operation supports pagination that enables you to optionally reduce the number
         * of agents returned in a response.</p> <p>If you have more agents than are
         * returned in a response (that is, the response returns only a truncated list of
         * your agents), the response contains a marker that you can specify in your next
         * request to fetch the next page of agents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListAgents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAgentsAsync(const Model::ListAgentsRequest& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of source and destination locations.</p> <p>If you have more
         * locations than are returned in a response (that is, the response returns only a
         * truncated list of your agents), the response contains a token that you can
         * specify in your next request to fetch the next page of locations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLocationsOutcome ListLocations(const Model::ListLocationsRequest& request) const;

        /**
         * <p>Returns a list of source and destination locations.</p> <p>If you have more
         * locations than are returned in a response (that is, the response returns only a
         * truncated list of your agents), the response contains a token that you can
         * specify in your next request to fetch the next page of locations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListLocations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLocationsOutcomeCallable ListLocationsCallable(const Model::ListLocationsRequest& request) const;

        /**
         * <p>Returns a list of source and destination locations.</p> <p>If you have more
         * locations than are returned in a response (that is, the response returns only a
         * truncated list of your agents), the response contains a token that you can
         * specify in your next request to fetch the next page of locations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListLocations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLocationsAsync(const Model::ListLocationsRequest& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all the tags associated with a specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns all the tags associated with a specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns all the tags associated with a specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of executed tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTaskExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskExecutionsOutcome ListTaskExecutions(const Model::ListTaskExecutionsRequest& request) const;

        /**
         * <p>Returns a list of executed tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTaskExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTaskExecutionsOutcomeCallable ListTaskExecutionsCallable(const Model::ListTaskExecutionsRequest& request) const;

        /**
         * <p>Returns a list of executed tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTaskExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTaskExecutionsAsync(const Model::ListTaskExecutionsRequest& request, const ListTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all the tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

        /**
         * <p>Returns a list of all the tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request) const;

        /**
         * <p>Returns a list of all the tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specific invocation of a task. A <code>TaskExecution</code> value
         * represents an individual run of a task. Each task can have at most one
         * <code>TaskExecution</code> at a time.</p> <p> <code>TaskExecution</code> has the
         * following transition phases: INITIALIZING | PREPARING | TRANSFERRING | VERIFYING
         * | SUCCESS/FAILURE. </p> <p>For detailed information, see the Task Execution
         * section in the Components and Terminology topic in the <i>AWS DataSync User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StartTaskExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTaskExecutionOutcome StartTaskExecution(const Model::StartTaskExecutionRequest& request) const;

        /**
         * <p>Starts a specific invocation of a task. A <code>TaskExecution</code> value
         * represents an individual run of a task. Each task can have at most one
         * <code>TaskExecution</code> at a time.</p> <p> <code>TaskExecution</code> has the
         * following transition phases: INITIALIZING | PREPARING | TRANSFERRING | VERIFYING
         * | SUCCESS/FAILURE. </p> <p>For detailed information, see the Task Execution
         * section in the Components and Terminology topic in the <i>AWS DataSync User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StartTaskExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTaskExecutionOutcomeCallable StartTaskExecutionCallable(const Model::StartTaskExecutionRequest& request) const;

        /**
         * <p>Starts a specific invocation of a task. A <code>TaskExecution</code> value
         * represents an individual run of a task. Each task can have at most one
         * <code>TaskExecution</code> at a time.</p> <p> <code>TaskExecution</code> has the
         * following transition phases: INITIALIZING | PREPARING | TRANSFERRING | VERIFYING
         * | SUCCESS/FAILURE. </p> <p>For detailed information, see the Task Execution
         * section in the Components and Terminology topic in the <i>AWS DataSync User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StartTaskExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTaskExecutionAsync(const Model::StartTaskExecutionRequest& request, const StartTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a key-value pair to an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Applies a key-value pair to an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Applies a key-value pair to an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentOutcome UpdateAgent(const Model::UpdateAgentRequest& request) const;

        /**
         * <p>Updates the name of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateAgent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAgentOutcomeCallable UpdateAgentCallable(const Model::UpdateAgentRequest& request) const;

        /**
         * <p>Updates the name of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateAgent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAgentAsync(const Model::UpdateAgentRequest& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates some of the parameters of a previously created location for Network
         * File System (NFS) access. For information about creating an NFS location, see
         * <a>create-nfs-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLocationNfsOutcome UpdateLocationNfs(const Model::UpdateLocationNfsRequest& request) const;

        /**
         * <p>Updates some of the parameters of a previously created location for Network
         * File System (NFS) access. For information about creating an NFS location, see
         * <a>create-nfs-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationNfs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLocationNfsOutcomeCallable UpdateLocationNfsCallable(const Model::UpdateLocationNfsRequest& request) const;

        /**
         * <p>Updates some of the parameters of a previously created location for Network
         * File System (NFS) access. For information about creating an NFS location, see
         * <a>create-nfs-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationNfs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLocationNfsAsync(const Model::UpdateLocationNfsRequest& request, const UpdateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates some of the parameters of a previously created location for
         * self-managed object storage server access. For information about creating a
         * self-managed object storage location, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationObjectStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLocationObjectStorageOutcome UpdateLocationObjectStorage(const Model::UpdateLocationObjectStorageRequest& request) const;

        /**
         * <p>Updates some of the parameters of a previously created location for
         * self-managed object storage server access. For information about creating a
         * self-managed object storage location, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationObjectStorage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLocationObjectStorageOutcomeCallable UpdateLocationObjectStorageCallable(const Model::UpdateLocationObjectStorageRequest& request) const;

        /**
         * <p>Updates some of the parameters of a previously created location for
         * self-managed object storage server access. For information about creating a
         * self-managed object storage location, see
         * <a>create-object-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationObjectStorage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLocationObjectStorageAsync(const Model::UpdateLocationObjectStorageRequest& request, const UpdateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates some of the parameters of a previously created location for Server
         * Message Block (SMB) file system access. For information about creating an SMB
         * location, see <a>create-smb-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationSmb">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLocationSmbOutcome UpdateLocationSmb(const Model::UpdateLocationSmbRequest& request) const;

        /**
         * <p>Updates some of the parameters of a previously created location for Server
         * Message Block (SMB) file system access. For information about creating an SMB
         * location, see <a>create-smb-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationSmb">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLocationSmbOutcomeCallable UpdateLocationSmbCallable(const Model::UpdateLocationSmbRequest& request) const;

        /**
         * <p>Updates some of the parameters of a previously created location for Server
         * Message Block (SMB) file system access. For information about creating an SMB
         * location, see <a>create-smb-location</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationSmb">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLocationSmbAsync(const Model::UpdateLocationSmbRequest& request, const UpdateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the metadata associated with a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskOutcome UpdateTask(const Model::UpdateTaskRequest& request) const;

        /**
         * <p>Updates the metadata associated with a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTaskOutcomeCallable UpdateTaskCallable(const Model::UpdateTaskRequest& request) const;

        /**
         * <p>Updates the metadata associated with a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTaskAsync(const Model::UpdateTaskRequest& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates execution of a task.</p> <p>You can modify bandwidth throttling for a
         * task execution that is running or queued. For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/working-with-task-executions.html#adjust-bandwidth-throttling">Adjusting
         * Bandwidth Throttling for a Task Execution</a>.</p>  <p>The only
         * <code>Option</code> that can be modified by <code>UpdateTaskExecution</code> is
         * <code> <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-BytesPerSecond">BytesPerSecond</a>
         * </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTaskExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskExecutionOutcome UpdateTaskExecution(const Model::UpdateTaskExecutionRequest& request) const;

        /**
         * <p>Updates execution of a task.</p> <p>You can modify bandwidth throttling for a
         * task execution that is running or queued. For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/working-with-task-executions.html#adjust-bandwidth-throttling">Adjusting
         * Bandwidth Throttling for a Task Execution</a>.</p>  <p>The only
         * <code>Option</code> that can be modified by <code>UpdateTaskExecution</code> is
         * <code> <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-BytesPerSecond">BytesPerSecond</a>
         * </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTaskExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTaskExecutionOutcomeCallable UpdateTaskExecutionCallable(const Model::UpdateTaskExecutionRequest& request) const;

        /**
         * <p>Updates execution of a task.</p> <p>You can modify bandwidth throttling for a
         * task execution that is running or queued. For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/working-with-task-executions.html#adjust-bandwidth-throttling">Adjusting
         * Bandwidth Throttling for a Task Execution</a>.</p>  <p>The only
         * <code>Option</code> that can be modified by <code>UpdateTaskExecution</code> is
         * <code> <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Options.html#DataSync-Type-Options-BytesPerSecond">BytesPerSecond</a>
         * </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTaskExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTaskExecutionAsync(const Model::UpdateTaskExecutionRequest& request, const UpdateTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelTaskExecutionAsyncHelper(const Model::CancelTaskExecutionRequest& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAgentAsyncHelper(const Model::CreateAgentRequest& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationEfsAsyncHelper(const Model::CreateLocationEfsRequest& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationFsxWindowsAsyncHelper(const Model::CreateLocationFsxWindowsRequest& request, const CreateLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationNfsAsyncHelper(const Model::CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationObjectStorageAsyncHelper(const Model::CreateLocationObjectStorageRequest& request, const CreateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationS3AsyncHelper(const Model::CreateLocationS3Request& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationSmbAsyncHelper(const Model::CreateLocationSmbRequest& request, const CreateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTaskAsyncHelper(const Model::CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAgentAsyncHelper(const Model::DeleteAgentRequest& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLocationAsyncHelper(const Model::DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTaskAsyncHelper(const Model::DeleteTaskRequest& request, const DeleteTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAgentAsyncHelper(const Model::DescribeAgentRequest& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationEfsAsyncHelper(const Model::DescribeLocationEfsRequest& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationFsxWindowsAsyncHelper(const Model::DescribeLocationFsxWindowsRequest& request, const DescribeLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationNfsAsyncHelper(const Model::DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationObjectStorageAsyncHelper(const Model::DescribeLocationObjectStorageRequest& request, const DescribeLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationS3AsyncHelper(const Model::DescribeLocationS3Request& request, const DescribeLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationSmbAsyncHelper(const Model::DescribeLocationSmbRequest& request, const DescribeLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTaskAsyncHelper(const Model::DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTaskExecutionAsyncHelper(const Model::DescribeTaskExecutionRequest& request, const DescribeTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAgentsAsyncHelper(const Model::ListAgentsRequest& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLocationsAsyncHelper(const Model::ListLocationsRequest& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskExecutionsAsyncHelper(const Model::ListTaskExecutionsRequest& request, const ListTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTasksAsyncHelper(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTaskExecutionAsyncHelper(const Model::StartTaskExecutionRequest& request, const StartTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAgentAsyncHelper(const Model::UpdateAgentRequest& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLocationNfsAsyncHelper(const Model::UpdateLocationNfsRequest& request, const UpdateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLocationObjectStorageAsyncHelper(const Model::UpdateLocationObjectStorageRequest& request, const UpdateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLocationSmbAsyncHelper(const Model::UpdateLocationSmbRequest& request, const UpdateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTaskAsyncHelper(const Model::UpdateTaskRequest& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTaskExecutionAsyncHelper(const Model::UpdateTaskExecutionRequest& request, const UpdateTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DataSync
} // namespace Aws
