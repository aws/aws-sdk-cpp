/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/DataSyncServiceClientModel.h>

namespace Aws
{
namespace DataSync
{
  /**
   * <fullname>DataSync</fullname> <p>DataSync is a managed data transfer service
   * that makes it simpler for you to automate moving data between on-premises
   * storage and Amazon Web Services storage services. You also can use DataSync to
   * transfer data between other cloud providers and Amazon Web Services storage
   * services.</p> <p>This API interface reference includes documentation for using
   * DataSync programmatically. For complete information, see the <i> <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/what-is-datasync.html">DataSync
   * User Guide</a> </i>.</p>
   */
  class AWS_DATASYNC_API DataSyncClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DataSyncClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataSyncClient(const Aws::DataSync::DataSyncClientConfiguration& clientConfiguration = Aws::DataSync::DataSyncClientConfiguration(),
                       std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataSyncClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG),
                       const Aws::DataSync::DataSyncClientConfiguration& clientConfiguration = Aws::DataSync::DataSyncClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG),
                       const Aws::DataSync::DataSyncClientConfiguration& clientConfiguration = Aws::DataSync::DataSyncClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataSyncClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DataSyncClient();

        /**
         * <p>Stops an DataSync task execution that's in progress. The transfer of some
         * files are abruptly interrupted. File contents that're transferred to the
         * destination might be incomplete or inconsistent with the source files.</p>
         * <p>However, if you start a new task execution using the same task and allow it
         * to finish, file content on the destination will be complete and consistent. This
         * applies to other unexpected failures that interrupt a task execution. In all of
         * these cases, DataSync successfully completes the transfer when you start the
         * next task execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CancelTaskExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelTaskExecutionOutcome CancelTaskExecution(const Model::CancelTaskExecutionRequest& request) const;

        /**
         * A Callable wrapper for CancelTaskExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelTaskExecutionRequestT = Model::CancelTaskExecutionRequest>
        Model::CancelTaskExecutionOutcomeCallable CancelTaskExecutionCallable(const CancelTaskExecutionRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CancelTaskExecution, request);
        }

        /**
         * An Async wrapper for CancelTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelTaskExecutionRequestT = Model::CancelTaskExecutionRequest>
        void CancelTaskExecutionAsync(const CancelTaskExecutionRequestT& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CancelTaskExecution, request, handler, context);
        }

        /**
         * <p>Activates an DataSync agent that you have deployed in your storage
         * environment. The activation process associates your agent with your account. In
         * the activation process, you specify information such as the Amazon Web Services
         * Region that you want to activate the agent in. You activate the agent in the
         * Amazon Web Services Region where your target locations (in Amazon S3 or Amazon
         * EFS) reside. Your tasks are created in this Amazon Web Services Region.</p>
         * <p>You can activate the agent in a VPC (virtual private cloud) or provide the
         * agent access to a VPC endpoint so you can run tasks without going over the
         * public internet.</p> <p>You can use an agent for more than one location. If a
         * task uses multiple agents, all of them need to have status AVAILABLE for the
         * task to run. If you use multiple agents for a source location, the status of all
         * the agents must be AVAILABLE for the task to run. </p> <p>Agents are
         * automatically updated by Amazon Web Services on a regular basis, using a
         * mechanism that ensures minimal interruption to your tasks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentOutcome CreateAgent(const Model::CreateAgentRequest& request) const;

        /**
         * A Callable wrapper for CreateAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentRequestT = Model::CreateAgentRequest>
        Model::CreateAgentOutcomeCallable CreateAgentCallable(const CreateAgentRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateAgent, request);
        }

        /**
         * An Async wrapper for CreateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentRequestT = Model::CreateAgentRequest>
        void CreateAgentAsync(const CreateAgentRequestT& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateAgent, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for an Amazon EFS file system that DataSync can access
         * for a transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html">Creating
         * a location for Amazon EFS</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationEfs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationEfsOutcome CreateLocationEfs(const Model::CreateLocationEfsRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationEfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationEfsRequestT = Model::CreateLocationEfsRequest>
        Model::CreateLocationEfsOutcomeCallable CreateLocationEfsCallable(const CreateLocationEfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationEfs, request);
        }

        /**
         * An Async wrapper for CreateLocationEfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationEfsRequestT = Model::CreateLocationEfsRequest>
        void CreateLocationEfsAsync(const CreateLocationEfsRequestT& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationEfs, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for an Amazon FSx for Lustre file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationFsxLustre">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationFsxLustreOutcome CreateLocationFsxLustre(const Model::CreateLocationFsxLustreRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationFsxLustre that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationFsxLustreRequestT = Model::CreateLocationFsxLustreRequest>
        Model::CreateLocationFsxLustreOutcomeCallable CreateLocationFsxLustreCallable(const CreateLocationFsxLustreRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationFsxLustre, request);
        }

        /**
         * An Async wrapper for CreateLocationFsxLustre that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationFsxLustreRequestT = Model::CreateLocationFsxLustreRequest>
        void CreateLocationFsxLustreAsync(const CreateLocationFsxLustreRequestT& request, const CreateLocationFsxLustreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationFsxLustre, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for an Amazon FSx for NetApp ONTAP file system that
         * DataSync can access for a transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html">Creating
         * a location for FSx for ONTAP</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationFsxOntap">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationFsxOntapOutcome CreateLocationFsxOntap(const Model::CreateLocationFsxOntapRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationFsxOntap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationFsxOntapRequestT = Model::CreateLocationFsxOntapRequest>
        Model::CreateLocationFsxOntapOutcomeCallable CreateLocationFsxOntapCallable(const CreateLocationFsxOntapRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationFsxOntap, request);
        }

        /**
         * An Async wrapper for CreateLocationFsxOntap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationFsxOntapRequestT = Model::CreateLocationFsxOntapRequest>
        void CreateLocationFsxOntapAsync(const CreateLocationFsxOntapRequestT& request, const CreateLocationFsxOntapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationFsxOntap, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for an Amazon FSx for OpenZFS file system that DataSync
         * can access for a transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-openzfs-location.html">Creating
         * a location for FSx for OpenZFS</a>.</p>  <p>Request parameters related to
         * <code>SMB</code> aren't supported with the <code>CreateLocationFsxOpenZfs</code>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationFsxOpenZfs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationFsxOpenZfsOutcome CreateLocationFsxOpenZfs(const Model::CreateLocationFsxOpenZfsRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationFsxOpenZfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationFsxOpenZfsRequestT = Model::CreateLocationFsxOpenZfsRequest>
        Model::CreateLocationFsxOpenZfsOutcomeCallable CreateLocationFsxOpenZfsCallable(const CreateLocationFsxOpenZfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationFsxOpenZfs, request);
        }

        /**
         * An Async wrapper for CreateLocationFsxOpenZfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationFsxOpenZfsRequestT = Model::CreateLocationFsxOpenZfsRequest>
        void CreateLocationFsxOpenZfsAsync(const CreateLocationFsxOpenZfsRequestT& request, const CreateLocationFsxOpenZfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationFsxOpenZfs, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for an Amazon FSx for Windows File Server file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationFsxWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationFsxWindowsOutcome CreateLocationFsxWindows(const Model::CreateLocationFsxWindowsRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationFsxWindows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationFsxWindowsRequestT = Model::CreateLocationFsxWindowsRequest>
        Model::CreateLocationFsxWindowsOutcomeCallable CreateLocationFsxWindowsCallable(const CreateLocationFsxWindowsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationFsxWindows, request);
        }

        /**
         * An Async wrapper for CreateLocationFsxWindows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationFsxWindowsRequestT = Model::CreateLocationFsxWindowsRequest>
        void CreateLocationFsxWindowsAsync(const CreateLocationFsxWindowsRequestT& request, const CreateLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationFsxWindows, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for a Hadoop Distributed File System (HDFS).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationHdfs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationHdfsOutcome CreateLocationHdfs(const Model::CreateLocationHdfsRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationHdfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationHdfsRequestT = Model::CreateLocationHdfsRequest>
        Model::CreateLocationHdfsOutcomeCallable CreateLocationHdfsCallable(const CreateLocationHdfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationHdfs, request);
        }

        /**
         * An Async wrapper for CreateLocationHdfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationHdfsRequestT = Model::CreateLocationHdfsRequest>
        void CreateLocationHdfsAsync(const CreateLocationHdfsRequestT& request, const CreateLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationHdfs, request, handler, context);
        }

        /**
         * <p>Defines a file system on a Network File System (NFS) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationNfsOutcome CreateLocationNfs(const Model::CreateLocationNfsRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationNfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationNfsRequestT = Model::CreateLocationNfsRequest>
        Model::CreateLocationNfsOutcomeCallable CreateLocationNfsCallable(const CreateLocationNfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationNfs, request);
        }

        /**
         * An Async wrapper for CreateLocationNfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationNfsRequestT = Model::CreateLocationNfsRequest>
        void CreateLocationNfsAsync(const CreateLocationNfsRequestT& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationNfs, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for an object storage system that DataSync can access for
         * a transfer. For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-object-location.html">Creating
         * a location for object storage</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationObjectStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationObjectStorageOutcome CreateLocationObjectStorage(const Model::CreateLocationObjectStorageRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationObjectStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationObjectStorageRequestT = Model::CreateLocationObjectStorageRequest>
        Model::CreateLocationObjectStorageOutcomeCallable CreateLocationObjectStorageCallable(const CreateLocationObjectStorageRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationObjectStorage, request);
        }

        /**
         * An Async wrapper for CreateLocationObjectStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationObjectStorageRequestT = Model::CreateLocationObjectStorageRequest>
        void CreateLocationObjectStorageAsync(const CreateLocationObjectStorageRequestT& request, const CreateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationObjectStorage, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for an Amazon S3 bucket that DataSync can access for a
         * transfer.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-locations-cli.html#create-location-s3-cli">Create
         * an Amazon S3 location</a> in the <i>DataSync User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationS3Outcome CreateLocationS3(const Model::CreateLocationS3Request& request) const;

        /**
         * A Callable wrapper for CreateLocationS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationS3RequestT = Model::CreateLocationS3Request>
        Model::CreateLocationS3OutcomeCallable CreateLocationS3Callable(const CreateLocationS3RequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationS3, request);
        }

        /**
         * An Async wrapper for CreateLocationS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationS3RequestT = Model::CreateLocationS3Request>
        void CreateLocationS3Async(const CreateLocationS3RequestT& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationS3, request, handler, context);
        }

        /**
         * <p>Defines a file system on a Server Message Block (SMB) server that can be read
         * from or written to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationSmb">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationSmbOutcome CreateLocationSmb(const Model::CreateLocationSmbRequest& request) const;

        /**
         * A Callable wrapper for CreateLocationSmb that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLocationSmbRequestT = Model::CreateLocationSmbRequest>
        Model::CreateLocationSmbOutcomeCallable CreateLocationSmbCallable(const CreateLocationSmbRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateLocationSmb, request);
        }

        /**
         * An Async wrapper for CreateLocationSmb that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLocationSmbRequestT = Model::CreateLocationSmbRequest>
        void CreateLocationSmbAsync(const CreateLocationSmbRequestT& request, const CreateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateLocationSmb, request, handler, context);
        }

        /**
         * <p>Configures a task, which defines where and how DataSync transfers your
         * data.</p> <p>A task includes a source location, a destination location, and the
         * preferences for how and when you want to transfer your data (such as bandwidth
         * limits, scheduling, among other options).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTaskOutcome CreateTask(const Model::CreateTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTaskRequestT = Model::CreateTaskRequest>
        Model::CreateTaskOutcomeCallable CreateTaskCallable(const CreateTaskRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::CreateTask, request);
        }

        /**
         * An Async wrapper for CreateTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTaskRequestT = Model::CreateTaskRequest>
        void CreateTaskAsync(const CreateTaskRequestT& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::CreateTask, request, handler, context);
        }

        /**
         * <p>Deletes an agent. To specify which agent to delete, use the Amazon Resource
         * Name (ARN) of the agent in your request. The operation disassociates the agent
         * from your Amazon Web Services account. However, it doesn't delete the agent
         * virtual machine (VM) from your on-premises environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentOutcome DeleteAgent(const Model::DeleteAgentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentRequestT = Model::DeleteAgentRequest>
        Model::DeleteAgentOutcomeCallable DeleteAgentCallable(const DeleteAgentRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DeleteAgent, request);
        }

        /**
         * An Async wrapper for DeleteAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentRequestT = Model::DeleteAgentRequest>
        void DeleteAgentAsync(const DeleteAgentRequestT& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DeleteAgent, request, handler, context);
        }

        /**
         * <p>Deletes the configuration of a location used by DataSync. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocationOutcome DeleteLocation(const Model::DeleteLocationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLocationRequestT = Model::DeleteLocationRequest>
        Model::DeleteLocationOutcomeCallable DeleteLocationCallable(const DeleteLocationRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DeleteLocation, request);
        }

        /**
         * An Async wrapper for DeleteLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLocationRequestT = Model::DeleteLocationRequest>
        void DeleteLocationAsync(const DeleteLocationRequestT& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DeleteLocation, request, handler, context);
        }

        /**
         * <p>Deletes an DataSync task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTaskRequestT = Model::DeleteTaskRequest>
        Model::DeleteTaskOutcomeCallable DeleteTaskCallable(const DeleteTaskRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DeleteTask, request);
        }

        /**
         * An Async wrapper for DeleteTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTaskRequestT = Model::DeleteTaskRequest>
        void DeleteTaskAsync(const DeleteTaskRequestT& request, const DeleteTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DeleteTask, request, handler, context);
        }

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
         * A Callable wrapper for DescribeAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAgentRequestT = Model::DescribeAgentRequest>
        Model::DescribeAgentOutcomeCallable DescribeAgentCallable(const DescribeAgentRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeAgent, request);
        }

        /**
         * An Async wrapper for DescribeAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAgentRequestT = Model::DescribeAgentRequest>
        void DescribeAgentAsync(const DescribeAgentRequestT& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeAgent, request, handler, context);
        }

        /**
         * <p>Returns metadata about your DataSync location for an Amazon EFS file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationEfs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationEfsOutcome DescribeLocationEfs(const Model::DescribeLocationEfsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationEfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationEfsRequestT = Model::DescribeLocationEfsRequest>
        Model::DescribeLocationEfsOutcomeCallable DescribeLocationEfsCallable(const DescribeLocationEfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationEfs, request);
        }

        /**
         * An Async wrapper for DescribeLocationEfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationEfsRequestT = Model::DescribeLocationEfsRequest>
        void DescribeLocationEfsAsync(const DescribeLocationEfsRequestT& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationEfs, request, handler, context);
        }

        /**
         * <p>Provides details about how an DataSync location for an Amazon FSx for Lustre
         * file system is configured.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationFsxLustre">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationFsxLustreOutcome DescribeLocationFsxLustre(const Model::DescribeLocationFsxLustreRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationFsxLustre that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationFsxLustreRequestT = Model::DescribeLocationFsxLustreRequest>
        Model::DescribeLocationFsxLustreOutcomeCallable DescribeLocationFsxLustreCallable(const DescribeLocationFsxLustreRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationFsxLustre, request);
        }

        /**
         * An Async wrapper for DescribeLocationFsxLustre that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationFsxLustreRequestT = Model::DescribeLocationFsxLustreRequest>
        void DescribeLocationFsxLustreAsync(const DescribeLocationFsxLustreRequestT& request, const DescribeLocationFsxLustreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationFsxLustre, request, handler, context);
        }

        /**
         * <p>Provides details about how an DataSync location for an Amazon FSx for NetApp
         * ONTAP file system is configured.</p>  <p>If your location uses SMB, the
         * <code>DescribeLocationFsxOntap</code> operation doesn't actually return a
         * <code>Password</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationFsxOntap">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationFsxOntapOutcome DescribeLocationFsxOntap(const Model::DescribeLocationFsxOntapRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationFsxOntap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationFsxOntapRequestT = Model::DescribeLocationFsxOntapRequest>
        Model::DescribeLocationFsxOntapOutcomeCallable DescribeLocationFsxOntapCallable(const DescribeLocationFsxOntapRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationFsxOntap, request);
        }

        /**
         * An Async wrapper for DescribeLocationFsxOntap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationFsxOntapRequestT = Model::DescribeLocationFsxOntapRequest>
        void DescribeLocationFsxOntapAsync(const DescribeLocationFsxOntapRequestT& request, const DescribeLocationFsxOntapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationFsxOntap, request, handler, context);
        }

        /**
         * <p>Provides details about how an DataSync location for an Amazon FSx for OpenZFS
         * file system is configured.</p>  <p>Response elements related to
         * <code>SMB</code> aren't supported with the
         * <code>DescribeLocationFsxOpenZfs</code> operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationFsxOpenZfs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationFsxOpenZfsOutcome DescribeLocationFsxOpenZfs(const Model::DescribeLocationFsxOpenZfsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationFsxOpenZfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationFsxOpenZfsRequestT = Model::DescribeLocationFsxOpenZfsRequest>
        Model::DescribeLocationFsxOpenZfsOutcomeCallable DescribeLocationFsxOpenZfsCallable(const DescribeLocationFsxOpenZfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationFsxOpenZfs, request);
        }

        /**
         * An Async wrapper for DescribeLocationFsxOpenZfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationFsxOpenZfsRequestT = Model::DescribeLocationFsxOpenZfsRequest>
        void DescribeLocationFsxOpenZfsAsync(const DescribeLocationFsxOpenZfsRequestT& request, const DescribeLocationFsxOpenZfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationFsxOpenZfs, request, handler, context);
        }

        /**
         * <p>Returns metadata about an Amazon FSx for Windows File Server location, such
         * as information about its path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationFsxWindows">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationFsxWindowsOutcome DescribeLocationFsxWindows(const Model::DescribeLocationFsxWindowsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationFsxWindows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationFsxWindowsRequestT = Model::DescribeLocationFsxWindowsRequest>
        Model::DescribeLocationFsxWindowsOutcomeCallable DescribeLocationFsxWindowsCallable(const DescribeLocationFsxWindowsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationFsxWindows, request);
        }

        /**
         * An Async wrapper for DescribeLocationFsxWindows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationFsxWindowsRequestT = Model::DescribeLocationFsxWindowsRequest>
        void DescribeLocationFsxWindowsAsync(const DescribeLocationFsxWindowsRequestT& request, const DescribeLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationFsxWindows, request, handler, context);
        }

        /**
         * <p>Returns metadata, such as the authentication information about the Hadoop
         * Distributed File System (HDFS) location. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationHdfs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationHdfsOutcome DescribeLocationHdfs(const Model::DescribeLocationHdfsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationHdfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationHdfsRequestT = Model::DescribeLocationHdfsRequest>
        Model::DescribeLocationHdfsOutcomeCallable DescribeLocationHdfsCallable(const DescribeLocationHdfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationHdfs, request);
        }

        /**
         * An Async wrapper for DescribeLocationHdfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationHdfsRequestT = Model::DescribeLocationHdfsRequest>
        void DescribeLocationHdfsAsync(const DescribeLocationHdfsRequestT& request, const DescribeLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationHdfs, request, handler, context);
        }

        /**
         * <p>Returns metadata, such as the path information, about an NFS
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationNfsOutcome DescribeLocationNfs(const Model::DescribeLocationNfsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationNfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationNfsRequestT = Model::DescribeLocationNfsRequest>
        Model::DescribeLocationNfsOutcomeCallable DescribeLocationNfsCallable(const DescribeLocationNfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationNfs, request);
        }

        /**
         * An Async wrapper for DescribeLocationNfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationNfsRequestT = Model::DescribeLocationNfsRequest>
        void DescribeLocationNfsAsync(const DescribeLocationNfsRequestT& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationNfs, request, handler, context);
        }

        /**
         * <p>Returns metadata about your DataSync location for an object storage
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationObjectStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationObjectStorageOutcome DescribeLocationObjectStorage(const Model::DescribeLocationObjectStorageRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationObjectStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationObjectStorageRequestT = Model::DescribeLocationObjectStorageRequest>
        Model::DescribeLocationObjectStorageOutcomeCallable DescribeLocationObjectStorageCallable(const DescribeLocationObjectStorageRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationObjectStorage, request);
        }

        /**
         * An Async wrapper for DescribeLocationObjectStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationObjectStorageRequestT = Model::DescribeLocationObjectStorageRequest>
        void DescribeLocationObjectStorageAsync(const DescribeLocationObjectStorageRequestT& request, const DescribeLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationObjectStorage, request, handler, context);
        }

        /**
         * <p>Returns metadata, such as bucket name, about an Amazon S3 bucket
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationS3">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationS3Outcome DescribeLocationS3(const Model::DescribeLocationS3Request& request) const;

        /**
         * A Callable wrapper for DescribeLocationS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationS3RequestT = Model::DescribeLocationS3Request>
        Model::DescribeLocationS3OutcomeCallable DescribeLocationS3Callable(const DescribeLocationS3RequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationS3, request);
        }

        /**
         * An Async wrapper for DescribeLocationS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationS3RequestT = Model::DescribeLocationS3Request>
        void DescribeLocationS3Async(const DescribeLocationS3RequestT& request, const DescribeLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationS3, request, handler, context);
        }

        /**
         * <p>Returns metadata, such as the path and user information about an SMB
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationSmb">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLocationSmbOutcome DescribeLocationSmb(const Model::DescribeLocationSmbRequest& request) const;

        /**
         * A Callable wrapper for DescribeLocationSmb that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLocationSmbRequestT = Model::DescribeLocationSmbRequest>
        Model::DescribeLocationSmbOutcomeCallable DescribeLocationSmbCallable(const DescribeLocationSmbRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeLocationSmb, request);
        }

        /**
         * An Async wrapper for DescribeLocationSmb that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLocationSmbRequestT = Model::DescribeLocationSmbRequest>
        void DescribeLocationSmbAsync(const DescribeLocationSmbRequestT& request, const DescribeLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeLocationSmb, request, handler, context);
        }

        /**
         * <p>Returns metadata about a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTaskRequestT = Model::DescribeTaskRequest>
        Model::DescribeTaskOutcomeCallable DescribeTaskCallable(const DescribeTaskRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeTask, request);
        }

        /**
         * An Async wrapper for DescribeTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTaskRequestT = Model::DescribeTaskRequest>
        void DescribeTaskAsync(const DescribeTaskRequestT& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeTask, request, handler, context);
        }

        /**
         * <p>Returns detailed metadata about a task that is being executed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskExecutionOutcome DescribeTaskExecution(const Model::DescribeTaskExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTaskExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTaskExecutionRequestT = Model::DescribeTaskExecutionRequest>
        Model::DescribeTaskExecutionOutcomeCallable DescribeTaskExecutionCallable(const DescribeTaskExecutionRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::DescribeTaskExecution, request);
        }

        /**
         * An Async wrapper for DescribeTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTaskExecutionRequestT = Model::DescribeTaskExecutionRequest>
        void DescribeTaskExecutionAsync(const DescribeTaskExecutionRequestT& request, const DescribeTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::DescribeTaskExecution, request, handler, context);
        }

        /**
         * <p>Returns a list of agents owned by an Amazon Web Services account in the
         * Amazon Web Services Region specified in the request. The returned list is
         * ordered by agent Amazon Resource Name (ARN).</p> <p>By default, this operation
         * returns a maximum of 100 agents. This operation supports pagination that enables
         * you to optionally reduce the number of agents returned in a response.</p> <p>If
         * you have more agents than are returned in a response (that is, the response
         * returns only a truncated list of your agents), the response contains a marker
         * that you can specify in your next request to fetch the next page of
         * agents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentsOutcome ListAgents(const Model::ListAgentsRequest& request) const;

        /**
         * A Callable wrapper for ListAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        Model::ListAgentsOutcomeCallable ListAgentsCallable(const ListAgentsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::ListAgents, request);
        }

        /**
         * An Async wrapper for ListAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        void ListAgentsAsync(const ListAgentsRequestT& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::ListAgents, request, handler, context);
        }

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
         * A Callable wrapper for ListLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLocationsRequestT = Model::ListLocationsRequest>
        Model::ListLocationsOutcomeCallable ListLocationsCallable(const ListLocationsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::ListLocations, request);
        }

        /**
         * An Async wrapper for ListLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLocationsRequestT = Model::ListLocationsRequest>
        void ListLocationsAsync(const ListLocationsRequestT& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::ListLocations, request, handler, context);
        }

        /**
         * <p>Returns all the tags associated with an Amazon Web Services
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of executed tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTaskExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskExecutionsOutcome ListTaskExecutions(const Model::ListTaskExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListTaskExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTaskExecutionsRequestT = Model::ListTaskExecutionsRequest>
        Model::ListTaskExecutionsOutcomeCallable ListTaskExecutionsCallable(const ListTaskExecutionsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::ListTaskExecutions, request);
        }

        /**
         * An Async wrapper for ListTaskExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTaskExecutionsRequestT = Model::ListTaskExecutionsRequest>
        void ListTaskExecutionsAsync(const ListTaskExecutionsRequestT& request, const ListTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::ListTaskExecutions, request, handler, context);
        }

        /**
         * <p>Returns a list of the DataSync tasks you created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

        /**
         * A Callable wrapper for ListTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTasksRequestT = Model::ListTasksRequest>
        Model::ListTasksOutcomeCallable ListTasksCallable(const ListTasksRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::ListTasks, request);
        }

        /**
         * An Async wrapper for ListTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTasksRequestT = Model::ListTasksRequest>
        void ListTasksAsync(const ListTasksRequestT& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::ListTasks, request, handler, context);
        }

        /**
         * <p>Starts an DataSync task. For each task, you can only run one task execution
         * at a time.</p> <p>There are several phases to a task execution. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/working-with-task-executions.html#understand-task-execution-statuses">Task
         * execution statuses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/StartTaskExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTaskExecutionOutcome StartTaskExecution(const Model::StartTaskExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartTaskExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTaskExecutionRequestT = Model::StartTaskExecutionRequest>
        Model::StartTaskExecutionOutcomeCallable StartTaskExecutionCallable(const StartTaskExecutionRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::StartTaskExecution, request);
        }

        /**
         * An Async wrapper for StartTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTaskExecutionRequestT = Model::StartTaskExecutionRequest>
        void StartTaskExecutionAsync(const StartTaskExecutionRequestT& request, const StartTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::StartTaskExecution, request, handler, context);
        }

        /**
         * <p>Applies a <i>tag</i> to an Amazon Web Services resource. Tags are key-value
         * pairs that can help you manage, filter, and search for your resources.</p>
         * <p>These include DataSync resources, such as locations, tasks, and task
         * executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from an Amazon Web Services resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the name of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentOutcome UpdateAgent(const Model::UpdateAgentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentRequestT = Model::UpdateAgentRequest>
        Model::UpdateAgentOutcomeCallable UpdateAgentCallable(const UpdateAgentRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UpdateAgent, request);
        }

        /**
         * An Async wrapper for UpdateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentRequestT = Model::UpdateAgentRequest>
        void UpdateAgentAsync(const UpdateAgentRequestT& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UpdateAgent, request, handler, context);
        }

        /**
         * <p>Updates some parameters of a previously created location for a Hadoop
         * Distributed File System cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationHdfs">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLocationHdfsOutcome UpdateLocationHdfs(const Model::UpdateLocationHdfsRequest& request) const;

        /**
         * A Callable wrapper for UpdateLocationHdfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLocationHdfsRequestT = Model::UpdateLocationHdfsRequest>
        Model::UpdateLocationHdfsOutcomeCallable UpdateLocationHdfsCallable(const UpdateLocationHdfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UpdateLocationHdfs, request);
        }

        /**
         * An Async wrapper for UpdateLocationHdfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLocationHdfsRequestT = Model::UpdateLocationHdfsRequest>
        void UpdateLocationHdfsAsync(const UpdateLocationHdfsRequestT& request, const UpdateLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UpdateLocationHdfs, request, handler, context);
        }

        /**
         * <p>Updates some of the parameters of a previously created location for Network
         * File System (NFS) access. For information about creating an NFS location, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html">Creating
         * a location for NFS</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationNfs">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLocationNfsOutcome UpdateLocationNfs(const Model::UpdateLocationNfsRequest& request) const;

        /**
         * A Callable wrapper for UpdateLocationNfs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLocationNfsRequestT = Model::UpdateLocationNfsRequest>
        Model::UpdateLocationNfsOutcomeCallable UpdateLocationNfsCallable(const UpdateLocationNfsRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UpdateLocationNfs, request);
        }

        /**
         * An Async wrapper for UpdateLocationNfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLocationNfsRequestT = Model::UpdateLocationNfsRequest>
        void UpdateLocationNfsAsync(const UpdateLocationNfsRequestT& request, const UpdateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UpdateLocationNfs, request, handler, context);
        }

        /**
         * <p>Updates some parameters of an existing object storage location that DataSync
         * accesses for a transfer. For information about creating a self-managed object
         * storage location, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-object-location.html">Creating
         * a location for object storage</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationObjectStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLocationObjectStorageOutcome UpdateLocationObjectStorage(const Model::UpdateLocationObjectStorageRequest& request) const;

        /**
         * A Callable wrapper for UpdateLocationObjectStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLocationObjectStorageRequestT = Model::UpdateLocationObjectStorageRequest>
        Model::UpdateLocationObjectStorageOutcomeCallable UpdateLocationObjectStorageCallable(const UpdateLocationObjectStorageRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UpdateLocationObjectStorage, request);
        }

        /**
         * An Async wrapper for UpdateLocationObjectStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLocationObjectStorageRequestT = Model::UpdateLocationObjectStorageRequest>
        void UpdateLocationObjectStorageAsync(const UpdateLocationObjectStorageRequestT& request, const UpdateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UpdateLocationObjectStorage, request, handler, context);
        }

        /**
         * <p>Updates some of the parameters of a previously created location for Server
         * Message Block (SMB) file system access. For information about creating an SMB
         * location, see <a
         * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html">Creating
         * a location for SMB</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateLocationSmb">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLocationSmbOutcome UpdateLocationSmb(const Model::UpdateLocationSmbRequest& request) const;

        /**
         * A Callable wrapper for UpdateLocationSmb that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLocationSmbRequestT = Model::UpdateLocationSmbRequest>
        Model::UpdateLocationSmbOutcomeCallable UpdateLocationSmbCallable(const UpdateLocationSmbRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UpdateLocationSmb, request);
        }

        /**
         * An Async wrapper for UpdateLocationSmb that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLocationSmbRequestT = Model::UpdateLocationSmbRequest>
        void UpdateLocationSmbAsync(const UpdateLocationSmbRequestT& request, const UpdateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UpdateLocationSmb, request, handler, context);
        }

        /**
         * <p>Updates the metadata associated with a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskOutcome UpdateTask(const Model::UpdateTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTaskRequestT = Model::UpdateTaskRequest>
        Model::UpdateTaskOutcomeCallable UpdateTaskCallable(const UpdateTaskRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UpdateTask, request);
        }

        /**
         * An Async wrapper for UpdateTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTaskRequestT = Model::UpdateTaskRequest>
        void UpdateTaskAsync(const UpdateTaskRequestT& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UpdateTask, request, handler, context);
        }

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
         * A Callable wrapper for UpdateTaskExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTaskExecutionRequestT = Model::UpdateTaskExecutionRequest>
        Model::UpdateTaskExecutionOutcomeCallable UpdateTaskExecutionCallable(const UpdateTaskExecutionRequestT& request) const
        {
            return SubmitCallable(&DataSyncClient::UpdateTaskExecution, request);
        }

        /**
         * An Async wrapper for UpdateTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTaskExecutionRequestT = Model::UpdateTaskExecutionRequest>
        void UpdateTaskExecutionAsync(const UpdateTaskExecutionRequestT& request, const UpdateTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataSyncClient::UpdateTaskExecution, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DataSyncEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DataSyncClient>;
      void init(const DataSyncClientConfiguration& clientConfiguration);

      DataSyncClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DataSyncEndpointProviderBase> m_endpointProvider;
  };

} // namespace DataSync
} // namespace Aws
