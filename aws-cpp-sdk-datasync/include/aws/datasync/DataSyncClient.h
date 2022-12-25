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
        virtual Model::CancelTaskExecutionOutcomeCallable CancelTaskExecutionCallable(const Model::CancelTaskExecutionRequest& request) const;

        /**
         * An Async wrapper for CancelTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelTaskExecutionAsync(const Model::CancelTaskExecutionRequest& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAgentOutcomeCallable CreateAgentCallable(const Model::CreateAgentRequest& request) const;

        /**
         * An Async wrapper for CreateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAgentAsync(const Model::CreateAgentRequest& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationEfsOutcomeCallable CreateLocationEfsCallable(const Model::CreateLocationEfsRequest& request) const;

        /**
         * An Async wrapper for CreateLocationEfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationEfsAsync(const Model::CreateLocationEfsRequest& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationFsxLustreOutcomeCallable CreateLocationFsxLustreCallable(const Model::CreateLocationFsxLustreRequest& request) const;

        /**
         * An Async wrapper for CreateLocationFsxLustre that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationFsxLustreAsync(const Model::CreateLocationFsxLustreRequest& request, const CreateLocationFsxLustreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationFsxOntapOutcomeCallable CreateLocationFsxOntapCallable(const Model::CreateLocationFsxOntapRequest& request) const;

        /**
         * An Async wrapper for CreateLocationFsxOntap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationFsxOntapAsync(const Model::CreateLocationFsxOntapRequest& request, const CreateLocationFsxOntapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationFsxOpenZfsOutcomeCallable CreateLocationFsxOpenZfsCallable(const Model::CreateLocationFsxOpenZfsRequest& request) const;

        /**
         * An Async wrapper for CreateLocationFsxOpenZfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationFsxOpenZfsAsync(const Model::CreateLocationFsxOpenZfsRequest& request, const CreateLocationFsxOpenZfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationFsxWindowsOutcomeCallable CreateLocationFsxWindowsCallable(const Model::CreateLocationFsxWindowsRequest& request) const;

        /**
         * An Async wrapper for CreateLocationFsxWindows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationFsxWindowsAsync(const Model::CreateLocationFsxWindowsRequest& request, const CreateLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationHdfsOutcomeCallable CreateLocationHdfsCallable(const Model::CreateLocationHdfsRequest& request) const;

        /**
         * An Async wrapper for CreateLocationHdfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationHdfsAsync(const Model::CreateLocationHdfsRequest& request, const CreateLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationNfsOutcomeCallable CreateLocationNfsCallable(const Model::CreateLocationNfsRequest& request) const;

        /**
         * An Async wrapper for CreateLocationNfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationNfsAsync(const Model::CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationObjectStorageOutcomeCallable CreateLocationObjectStorageCallable(const Model::CreateLocationObjectStorageRequest& request) const;

        /**
         * An Async wrapper for CreateLocationObjectStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationObjectStorageAsync(const Model::CreateLocationObjectStorageRequest& request, const CreateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLocationS3OutcomeCallable CreateLocationS3Callable(const Model::CreateLocationS3Request& request) const;

        /**
         * An Async wrapper for CreateLocationS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateLocationSmb that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationSmbOutcomeCallable CreateLocationSmbCallable(const Model::CreateLocationSmbRequest& request) const;

        /**
         * An Async wrapper for CreateLocationSmb that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationSmbAsync(const Model::CreateLocationSmbRequest& request, const CreateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request) const;

        /**
         * An Async wrapper for CreateTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAgentOutcomeCallable DeleteAgentCallable(const Model::DeleteAgentRequest& request) const;

        /**
         * An Async wrapper for DeleteAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAgentAsync(const Model::DeleteAgentRequest& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteLocationOutcomeCallable DeleteLocationCallable(const Model::DeleteLocationRequest& request) const;

        /**
         * An Async wrapper for DeleteLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLocationAsync(const Model::DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an DataSync task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request) const;

        /**
         * An Async wrapper for DeleteTask that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentOutcomeCallable DescribeAgentCallable(const Model::DescribeAgentRequest& request) const;

        /**
         * An Async wrapper for DescribeAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgentAsync(const Model::DescribeAgentRequest& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationEfsOutcomeCallable DescribeLocationEfsCallable(const Model::DescribeLocationEfsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationEfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationEfsAsync(const Model::DescribeLocationEfsRequest& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationFsxLustreOutcomeCallable DescribeLocationFsxLustreCallable(const Model::DescribeLocationFsxLustreRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationFsxLustre that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationFsxLustreAsync(const Model::DescribeLocationFsxLustreRequest& request, const DescribeLocationFsxLustreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationFsxOntapOutcomeCallable DescribeLocationFsxOntapCallable(const Model::DescribeLocationFsxOntapRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationFsxOntap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationFsxOntapAsync(const Model::DescribeLocationFsxOntapRequest& request, const DescribeLocationFsxOntapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationFsxOpenZfsOutcomeCallable DescribeLocationFsxOpenZfsCallable(const Model::DescribeLocationFsxOpenZfsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationFsxOpenZfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationFsxOpenZfsAsync(const Model::DescribeLocationFsxOpenZfsRequest& request, const DescribeLocationFsxOpenZfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationFsxWindowsOutcomeCallable DescribeLocationFsxWindowsCallable(const Model::DescribeLocationFsxWindowsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationFsxWindows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationFsxWindowsAsync(const Model::DescribeLocationFsxWindowsRequest& request, const DescribeLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationHdfsOutcomeCallable DescribeLocationHdfsCallable(const Model::DescribeLocationHdfsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationHdfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationHdfsAsync(const Model::DescribeLocationHdfsRequest& request, const DescribeLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationNfsOutcomeCallable DescribeLocationNfsCallable(const Model::DescribeLocationNfsRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationNfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationNfsAsync(const Model::DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLocationObjectStorageOutcomeCallable DescribeLocationObjectStorageCallable(const Model::DescribeLocationObjectStorageRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationObjectStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeLocationS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationS3OutcomeCallable DescribeLocationS3Callable(const Model::DescribeLocationS3Request& request) const;

        /**
         * An Async wrapper for DescribeLocationS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeLocationSmb that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLocationSmbOutcomeCallable DescribeLocationSmbCallable(const Model::DescribeLocationSmbRequest& request) const;

        /**
         * An Async wrapper for DescribeLocationSmb that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLocationSmbAsync(const Model::DescribeLocationSmbRequest& request, const DescribeLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request) const;

        /**
         * An Async wrapper for DescribeTask that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeTaskExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTaskExecutionOutcomeCallable DescribeTaskExecutionCallable(const Model::DescribeTaskExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTaskExecutionAsync(const Model::DescribeTaskExecutionRequest& request, const DescribeTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAgentsOutcomeCallable ListAgentsCallable(const Model::ListAgentsRequest& request) const;

        /**
         * An Async wrapper for ListAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLocationsOutcomeCallable ListLocationsCallable(const Model::ListLocationsRequest& request) const;

        /**
         * An Async wrapper for ListLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLocationsAsync(const Model::ListLocationsRequest& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of executed tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTaskExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskExecutionsOutcome ListTaskExecutions(const Model::ListTaskExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListTaskExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTaskExecutionsOutcomeCallable ListTaskExecutionsCallable(const Model::ListTaskExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListTaskExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTaskExecutionsAsync(const Model::ListTaskExecutionsRequest& request, const ListTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request) const;

        /**
         * An Async wrapper for ListTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartTaskExecutionOutcomeCallable StartTaskExecutionCallable(const Model::StartTaskExecutionRequest& request) const;

        /**
         * An Async wrapper for StartTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTaskExecutionAsync(const Model::StartTaskExecutionRequest& request, const StartTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentOutcome UpdateAgent(const Model::UpdateAgentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAgentOutcomeCallable UpdateAgentCallable(const Model::UpdateAgentRequest& request) const;

        /**
         * An Async wrapper for UpdateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAgentAsync(const Model::UpdateAgentRequest& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateLocationHdfsOutcomeCallable UpdateLocationHdfsCallable(const Model::UpdateLocationHdfsRequest& request) const;

        /**
         * An Async wrapper for UpdateLocationHdfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLocationHdfsAsync(const Model::UpdateLocationHdfsRequest& request, const UpdateLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateLocationNfsOutcomeCallable UpdateLocationNfsCallable(const Model::UpdateLocationNfsRequest& request) const;

        /**
         * An Async wrapper for UpdateLocationNfs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLocationNfsAsync(const Model::UpdateLocationNfsRequest& request, const UpdateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateLocationObjectStorageOutcomeCallable UpdateLocationObjectStorageCallable(const Model::UpdateLocationObjectStorageRequest& request) const;

        /**
         * An Async wrapper for UpdateLocationObjectStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLocationObjectStorageAsync(const Model::UpdateLocationObjectStorageRequest& request, const UpdateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateLocationSmbOutcomeCallable UpdateLocationSmbCallable(const Model::UpdateLocationSmbRequest& request) const;

        /**
         * An Async wrapper for UpdateLocationSmb that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLocationSmbAsync(const Model::UpdateLocationSmbRequest& request, const UpdateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the metadata associated with a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/UpdateTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskOutcome UpdateTask(const Model::UpdateTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTaskOutcomeCallable UpdateTaskCallable(const Model::UpdateTaskRequest& request) const;

        /**
         * An Async wrapper for UpdateTask that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateTaskExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTaskExecutionOutcomeCallable UpdateTaskExecutionCallable(const Model::UpdateTaskExecutionRequest& request) const;

        /**
         * An Async wrapper for UpdateTaskExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTaskExecutionAsync(const Model::UpdateTaskExecutionRequest& request, const UpdateTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
