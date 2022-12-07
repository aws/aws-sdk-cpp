/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/snow-device-management/SnowDeviceManagementServiceClientModel.h>

namespace Aws
{
namespace SnowDeviceManagement
{
  /**
   * <p>Amazon Web Services Snow Device Management documentation.</p>
   */
  class AWS_SNOWDEVICEMANAGEMENT_API SnowDeviceManagementClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SnowDeviceManagementClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowDeviceManagementClient(const Aws::SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration = Aws::SnowDeviceManagement::SnowDeviceManagementClientConfiguration(),
                                   std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider = Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowDeviceManagementClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider = Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration = Aws::SnowDeviceManagement::SnowDeviceManagementClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SnowDeviceManagementClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider = Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration = Aws::SnowDeviceManagement::SnowDeviceManagementClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowDeviceManagementClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowDeviceManagementClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SnowDeviceManagementClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SnowDeviceManagementClient();

        /**
         * <p>Sends a cancel request for a specified task. You can cancel a task only if
         * it's still in a <code>QUEUED</code> state. Tasks that are already running can't
         * be cancelled.</p>  <p>A task might still run if it's processed from the
         * queue before the <code>CancelTask</code> operation changes the task's state.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/CancelTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelTaskOutcome CancelTask(const Model::CancelTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request) const;

        /**
         * An Async wrapper for CancelTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Instructs one or more devices to start a task, such as unlocking or
         * rebooting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/CreateTask">AWS
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
         * <p>Checks device-specific information, such as the device type, software
         * version, IP addresses, and lock status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request) const;

        /**
         * An Async wrapper for DescribeDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks the current state of the Amazon EC2 instances. The output is similar
         * to <code>describeDevice</code>, but the results are sourced from the device
         * cache in the Amazon Web Services Cloud and include a subset of the available
         * fields. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeDeviceEc2Instances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceEc2InstancesOutcome DescribeDeviceEc2Instances(const Model::DescribeDeviceEc2InstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeviceEc2Instances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceEc2InstancesOutcomeCallable DescribeDeviceEc2InstancesCallable(const Model::DescribeDeviceEc2InstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeDeviceEc2Instances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceEc2InstancesAsync(const Model::DescribeDeviceEc2InstancesRequest& request, const DescribeDeviceEc2InstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks the status of a remote task running on one or more target
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const Model::DescribeExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExecutionAsync(const Model::DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks the metadata for a given task on a device. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeTask">AWS
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
         * <p>Returns a list of the Amazon Web Services resources available for a device.
         * Currently, Amazon EC2 instances are the only supported resource
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListDeviceResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceResourcesOutcome ListDeviceResources(const Model::ListDeviceResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceResourcesOutcomeCallable ListDeviceResourcesCallable(const Model::ListDeviceResourcesRequest& request) const;

        /**
         * An Async wrapper for ListDeviceResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceResourcesAsync(const Model::ListDeviceResourcesRequest& request, const ListDeviceResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all devices on your Amazon Web Services account that have
         * Amazon Web Services Snow Device Management enabled in the Amazon Web Services
         * Region where the command is run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the status of tasks for one or more target devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const Model::ListExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExecutionsAsync(const Model::ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags for a managed device or task.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListTagsForResource">AWS
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
         * <p>Returns a list of tasks that can be filtered by state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListTasks">AWS
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
         * <p>Adds or replaces tags on a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/TagResource">AWS
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
         * <p>Removes a tag from a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/UntagResource">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SnowDeviceManagementEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SnowDeviceManagementClient>;
      void init(const SnowDeviceManagementClientConfiguration& clientConfiguration);

      SnowDeviceManagementClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SnowDeviceManagementEndpointProviderBase> m_endpointProvider;
  };

} // namespace SnowDeviceManagement
} // namespace Aws
