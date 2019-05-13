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
#include <aws/datasync/model/CreateLocationNfsResult.h>
#include <aws/datasync/model/CreateLocationS3Result.h>
#include <aws/datasync/model/CreateTaskResult.h>
#include <aws/datasync/model/DeleteAgentResult.h>
#include <aws/datasync/model/DeleteLocationResult.h>
#include <aws/datasync/model/DeleteTaskResult.h>
#include <aws/datasync/model/DescribeAgentResult.h>
#include <aws/datasync/model/DescribeLocationEfsResult.h>
#include <aws/datasync/model/DescribeLocationNfsResult.h>
#include <aws/datasync/model/DescribeLocationS3Result.h>
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
#include <aws/datasync/model/UpdateTaskResult.h>
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
        class CreateLocationNfsRequest;
        class CreateLocationS3Request;
        class CreateTaskRequest;
        class DeleteAgentRequest;
        class DeleteLocationRequest;
        class DeleteTaskRequest;
        class DescribeAgentRequest;
        class DescribeLocationEfsRequest;
        class DescribeLocationNfsRequest;
        class DescribeLocationS3Request;
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
        class UpdateTaskRequest;

        typedef Aws::Utils::Outcome<CancelTaskExecutionResult, Aws::Client::AWSError<DataSyncErrors>> CancelTaskExecutionOutcome;
        typedef Aws::Utils::Outcome<CreateAgentResult, Aws::Client::AWSError<DataSyncErrors>> CreateAgentOutcome;
        typedef Aws::Utils::Outcome<CreateLocationEfsResult, Aws::Client::AWSError<DataSyncErrors>> CreateLocationEfsOutcome;
        typedef Aws::Utils::Outcome<CreateLocationNfsResult, Aws::Client::AWSError<DataSyncErrors>> CreateLocationNfsOutcome;
        typedef Aws::Utils::Outcome<CreateLocationS3Result, Aws::Client::AWSError<DataSyncErrors>> CreateLocationS3Outcome;
        typedef Aws::Utils::Outcome<CreateTaskResult, Aws::Client::AWSError<DataSyncErrors>> CreateTaskOutcome;
        typedef Aws::Utils::Outcome<DeleteAgentResult, Aws::Client::AWSError<DataSyncErrors>> DeleteAgentOutcome;
        typedef Aws::Utils::Outcome<DeleteLocationResult, Aws::Client::AWSError<DataSyncErrors>> DeleteLocationOutcome;
        typedef Aws::Utils::Outcome<DeleteTaskResult, Aws::Client::AWSError<DataSyncErrors>> DeleteTaskOutcome;
        typedef Aws::Utils::Outcome<DescribeAgentResult, Aws::Client::AWSError<DataSyncErrors>> DescribeAgentOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationEfsResult, Aws::Client::AWSError<DataSyncErrors>> DescribeLocationEfsOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationNfsResult, Aws::Client::AWSError<DataSyncErrors>> DescribeLocationNfsOutcome;
        typedef Aws::Utils::Outcome<DescribeLocationS3Result, Aws::Client::AWSError<DataSyncErrors>> DescribeLocationS3Outcome;
        typedef Aws::Utils::Outcome<DescribeTaskResult, Aws::Client::AWSError<DataSyncErrors>> DescribeTaskOutcome;
        typedef Aws::Utils::Outcome<DescribeTaskExecutionResult, Aws::Client::AWSError<DataSyncErrors>> DescribeTaskExecutionOutcome;
        typedef Aws::Utils::Outcome<ListAgentsResult, Aws::Client::AWSError<DataSyncErrors>> ListAgentsOutcome;
        typedef Aws::Utils::Outcome<ListLocationsResult, Aws::Client::AWSError<DataSyncErrors>> ListLocationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<DataSyncErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTaskExecutionsResult, Aws::Client::AWSError<DataSyncErrors>> ListTaskExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListTasksResult, Aws::Client::AWSError<DataSyncErrors>> ListTasksOutcome;
        typedef Aws::Utils::Outcome<StartTaskExecutionResult, Aws::Client::AWSError<DataSyncErrors>> StartTaskExecutionOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<DataSyncErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<DataSyncErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAgentResult, Aws::Client::AWSError<DataSyncErrors>> UpdateAgentOutcome;
        typedef Aws::Utils::Outcome<UpdateTaskResult, Aws::Client::AWSError<DataSyncErrors>> UpdateTaskOutcome;

        typedef std::future<CancelTaskExecutionOutcome> CancelTaskExecutionOutcomeCallable;
        typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
        typedef std::future<CreateLocationEfsOutcome> CreateLocationEfsOutcomeCallable;
        typedef std::future<CreateLocationNfsOutcome> CreateLocationNfsOutcomeCallable;
        typedef std::future<CreateLocationS3Outcome> CreateLocationS3OutcomeCallable;
        typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
        typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
        typedef std::future<DeleteLocationOutcome> DeleteLocationOutcomeCallable;
        typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
        typedef std::future<DescribeAgentOutcome> DescribeAgentOutcomeCallable;
        typedef std::future<DescribeLocationEfsOutcome> DescribeLocationEfsOutcomeCallable;
        typedef std::future<DescribeLocationNfsOutcome> DescribeLocationNfsOutcomeCallable;
        typedef std::future<DescribeLocationS3Outcome> DescribeLocationS3OutcomeCallable;
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
        typedef std::future<UpdateTaskOutcome> UpdateTaskOutcomeCallable;
} // namespace Model

  class DataSyncClient;

    typedef std::function<void(const DataSyncClient*, const Model::CancelTaskExecutionRequest&, const Model::CancelTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTaskExecutionResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateAgentRequest&, const Model::CreateAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationEfsRequest&, const Model::CreateLocationEfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationEfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationNfsRequest&, const Model::CreateLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationS3Request&, const Model::CreateLocationS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationS3ResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateTaskRequest&, const Model::CreateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteAgentRequest&, const Model::DeleteAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteLocationRequest&, const Model::DeleteLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocationResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteTaskRequest&, const Model::DeleteTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeAgentRequest&, const Model::DescribeAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationEfsRequest&, const Model::DescribeLocationEfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationEfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationNfsRequest&, const Model::DescribeLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationS3Request&, const Model::DescribeLocationS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationS3ResponseReceivedHandler;
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
    typedef std::function<void(const DataSyncClient*, const Model::UpdateTaskRequest&, const Model::UpdateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskResponseReceivedHandler;

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

        inline virtual const char* GetServiceClientName() const override { return "DataSync"; }


        /**
         * <p>Cancels execution of a task. </p> <p>When you cancel a task execution, the
         * transfer of some files are abruptly interrupted. The contents of files that are
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
         * transfer of some files are abruptly interrupted. The contents of files that are
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
         * transfer of some files are abruptly interrupted. The contents of files that are
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
         * this AWS Region. </p> <p>You can use an agent for more than one location. If a
         * task uses multiple agents, all of them need to have status AVAILABLE for the
         * task to run. If you use multiple agents for a source location, the status of all
         * the agents must be AVAILABLE for the task to run. </p> <p>For more information,
         * see
         * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
         * (Activating an Agent) in the <i>AWS DataSync User Guide.</i> </p> <p>Agents are
         * automatically updated by AWS on a regular basis, using a mechanism that ensures
         * minimal interruption to your tasks.</p> <p/><p><h3>See Also:</h3>   <a
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
         * this AWS Region. </p> <p>You can use an agent for more than one location. If a
         * task uses multiple agents, all of them need to have status AVAILABLE for the
         * task to run. If you use multiple agents for a source location, the status of all
         * the agents must be AVAILABLE for the task to run. </p> <p>For more information,
         * see
         * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
         * (Activating an Agent) in the <i>AWS DataSync User Guide.</i> </p> <p>Agents are
         * automatically updated by AWS on a regular basis, using a mechanism that ensures
         * minimal interruption to your tasks.</p> <p/><p><h3>See Also:</h3>   <a
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
         * this AWS Region. </p> <p>You can use an agent for more than one location. If a
         * task uses multiple agents, all of them need to have status AVAILABLE for the
         * task to run. If you use multiple agents for a source location, the status of all
         * the agents must be AVAILABLE for the task to run. </p> <p>For more information,
         * see
         * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
         * (Activating an Agent) in the <i>AWS DataSync User Guide.</i> </p> <p>Agents are
         * automatically updated by AWS on a regular basis, using a mechanism that ensures
         * minimal interruption to your tasks.</p> <p/><p><h3>See Also:</h3>   <a
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
         * <p>Creates an endpoint for a Network File System (NFS) file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationNfsOutcome CreateLocationNfs(const Model::CreateLocationNfsRequest& request) const;

        /**
         * <p>Creates an endpoint for a Network File System (NFS) file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationNfsOutcomeCallable CreateLocationNfsCallable(const Model::CreateLocationNfsRequest& request) const;

        /**
         * <p>Creates an endpoint for a Network File System (NFS) file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationNfsAsync(const Model::CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint for an Amazon S3 bucket.</p> <p>For AWS DataSync to
         * access a destination S3 bucket, it needs an AWS Identity and Access Management
         * (IAM) role that has the required permissions. You can set up the required
         * permissions by creating an IAM policy that grants the required permissions and
         * attaching the policy to the role. An example of such a policy is shown in the
         * examples section.</p> <p>For more information, see
         * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-locations.html#create-s3-location"
         * (Configuring Amazon S3 Location Settings) in the <i>AWS DataSync User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationS3Outcome CreateLocationS3(const Model::CreateLocationS3Request& request) const;

        /**
         * <p>Creates an endpoint for an Amazon S3 bucket.</p> <p>For AWS DataSync to
         * access a destination S3 bucket, it needs an AWS Identity and Access Management
         * (IAM) role that has the required permissions. You can set up the required
         * permissions by creating an IAM policy that grants the required permissions and
         * attaching the policy to the role. An example of such a policy is shown in the
         * examples section.</p> <p>For more information, see
         * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-locations.html#create-s3-location"
         * (Configuring Amazon S3 Location Settings) in the <i>AWS DataSync User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationS3OutcomeCallable CreateLocationS3Callable(const Model::CreateLocationS3Request& request) const;

        /**
         * <p>Creates an endpoint for an Amazon S3 bucket.</p> <p>For AWS DataSync to
         * access a destination S3 bucket, it needs an AWS Identity and Access Management
         * (IAM) role that has the required permissions. You can set up the required
         * permissions by creating an IAM policy that grants the required permissions and
         * attaching the policy to the role. An example of such a policy is shown in the
         * examples section.</p> <p>For more information, see
         * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-locations.html#create-s3-location"
         * (Configuring Amazon S3 Location Settings) in the <i>AWS DataSync User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationS3Async(const Model::CreateLocationS3Request& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a task. A task is a set of two locations (source and destination) and
         * a set of Options that you use to control the behavior of a task. If you don't
         * specify Options when you create a task, AWS DataSync populates them with service
         * defaults.</p> <p>When you create a task, it first enters the CREATING state.
         * During CREATING AWS DataSync attempts to mount the on-premises Network File
         * System (NFS) location. The task transitions to the AVAILABLE state without
         * waiting for the AWS location to become mounted. If required, AWS DataSync mounts
         * the AWS location before each task execution.</p> <p>If an agent that is
         * associated with a source (NFS) location goes offline, the task transitions to
         * the UNAVAILABLE status. If the status of the task remains in the CREATING status
         * for more than a few minutes, it means that your agent might be having trouble
         * mounting the source NFS file system. Check the task's ErrorCode and ErrorDetail.
         * Mount issues are often caused by either a misconfigured firewall or a mistyped
         * NFS server host name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTaskOutcome CreateTask(const Model::CreateTaskRequest& request) const;

        /**
         * <p>Creates a task. A task is a set of two locations (source and destination) and
         * a set of Options that you use to control the behavior of a task. If you don't
         * specify Options when you create a task, AWS DataSync populates them with service
         * defaults.</p> <p>When you create a task, it first enters the CREATING state.
         * During CREATING AWS DataSync attempts to mount the on-premises Network File
         * System (NFS) location. The task transitions to the AVAILABLE state without
         * waiting for the AWS location to become mounted. If required, AWS DataSync mounts
         * the AWS location before each task execution.</p> <p>If an agent that is
         * associated with a source (NFS) location goes offline, the task transitions to
         * the UNAVAILABLE status. If the status of the task remains in the CREATING status
         * for more than a few minutes, it means that your agent might be having trouble
         * mounting the source NFS file system. Check the task's ErrorCode and ErrorDetail.
         * Mount issues are often caused by either a misconfigured firewall or a mistyped
         * NFS server host name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request) const;

        /**
         * <p>Creates a task. A task is a set of two locations (source and destination) and
         * a set of Options that you use to control the behavior of a task. If you don't
         * specify Options when you create a task, AWS DataSync populates them with service
         * defaults.</p> <p>When you create a task, it first enters the CREATING state.
         * During CREATING AWS DataSync attempts to mount the on-premises Network File
         * System (NFS) location. The task transitions to the AVAILABLE state without
         * waiting for the AWS location to become mounted. If required, AWS DataSync mounts
         * the AWS location before each task execution.</p> <p>If an agent that is
         * associated with a source (NFS) location goes offline, the task transitions to
         * the UNAVAILABLE status. If the status of the task remains in the CREATING status
         * for more than a few minutes, it means that your agent might be having trouble
         * mounting the source NFS file system. Check the task's ErrorCode and ErrorDetail.
         * Mount issues are often caused by either a misconfigured firewall or a mistyped
         * NFS server host name.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns metadata, such as the path information, about a NFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationNfsOutcome DescribeLocationNfs(const Model::DescribeLocationNfsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information, about a NFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationNfsOutcomeCallable DescribeLocationNfsCallable(const Model::DescribeLocationNfsRequest& request) const;

        /**
         * <p>Returns metadata, such as the path information, about a NFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationNfsAsync(const Model::DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Returns a lists of source and destination locations.</p> <p>If you have more
         * locations than are returned in a response (that is, the response returns only a
         * truncated list of your agents), the response contains a token that you can
         * specify in your next request to fetch the next page of locations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLocationsOutcome ListLocations(const Model::ListLocationsRequest& request) const;

        /**
         * <p>Returns a lists of source and destination locations.</p> <p>If you have more
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
         * <p>Returns a lists of source and destination locations.</p> <p>If you have more
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
         * <p>Returns all the tags associated with a specified resources. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns all the tags associated with a specified resources. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns all the tags associated with a specified resources. </p><p><h3>See
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
         * | SUCCESS/FAILURE. </p> <p>For detailed information, see <i>Task Execution</i>
         * in
         * "https://docs.aws.amazon.com/datasync/latest/userguide/how-datasync-works.html#terminology"
         * (Components and Terminology) in the <i>AWS DataSync User
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
         * | SUCCESS/FAILURE. </p> <p>For detailed information, see <i>Task Execution</i>
         * in
         * "https://docs.aws.amazon.com/datasync/latest/userguide/how-datasync-works.html#terminology"
         * (Components and Terminology) in the <i>AWS DataSync User
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
         * | SUCCESS/FAILURE. </p> <p>For detailed information, see <i>Task Execution</i>
         * in
         * "https://docs.aws.amazon.com/datasync/latest/userguide/how-datasync-works.html#terminology"
         * (Components and Terminology) in the <i>AWS DataSync User
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelTaskExecutionAsyncHelper(const Model::CancelTaskExecutionRequest& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAgentAsyncHelper(const Model::CreateAgentRequest& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationEfsAsyncHelper(const Model::CreateLocationEfsRequest& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationNfsAsyncHelper(const Model::CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLocationS3AsyncHelper(const Model::CreateLocationS3Request& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTaskAsyncHelper(const Model::CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAgentAsyncHelper(const Model::DeleteAgentRequest& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLocationAsyncHelper(const Model::DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTaskAsyncHelper(const Model::DeleteTaskRequest& request, const DeleteTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAgentAsyncHelper(const Model::DescribeAgentRequest& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationEfsAsyncHelper(const Model::DescribeLocationEfsRequest& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationNfsAsyncHelper(const Model::DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLocationS3AsyncHelper(const Model::DescribeLocationS3Request& request, const DescribeLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void UpdateTaskAsyncHelper(const Model::UpdateTaskRequest& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DataSync
} // namespace Aws
