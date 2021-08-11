﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/SnowDeviceManagementErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/snow-device-management/model/CancelTaskResult.h>
#include <aws/snow-device-management/model/CreateTaskResult.h>
#include <aws/snow-device-management/model/DescribeDeviceResult.h>
#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesResult.h>
#include <aws/snow-device-management/model/DescribeExecutionResult.h>
#include <aws/snow-device-management/model/DescribeTaskResult.h>
#include <aws/snow-device-management/model/ListDeviceResourcesResult.h>
#include <aws/snow-device-management/model/ListDevicesResult.h>
#include <aws/snow-device-management/model/ListExecutionsResult.h>
#include <aws/snow-device-management/model/ListTagsForResourceResult.h>
#include <aws/snow-device-management/model/ListTasksResult.h>
#include <aws/core/NoResult.h>
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

namespace SnowDeviceManagement
{

namespace Model
{
        class CancelTaskRequest;
        class CreateTaskRequest;
        class DescribeDeviceRequest;
        class DescribeDeviceEc2InstancesRequest;
        class DescribeExecutionRequest;
        class DescribeTaskRequest;
        class ListDeviceResourcesRequest;
        class ListDevicesRequest;
        class ListExecutionsRequest;
        class ListTagsForResourceRequest;
        class ListTasksRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CancelTaskResult, SnowDeviceManagementError> CancelTaskOutcome;
        typedef Aws::Utils::Outcome<CreateTaskResult, SnowDeviceManagementError> CreateTaskOutcome;
        typedef Aws::Utils::Outcome<DescribeDeviceResult, SnowDeviceManagementError> DescribeDeviceOutcome;
        typedef Aws::Utils::Outcome<DescribeDeviceEc2InstancesResult, SnowDeviceManagementError> DescribeDeviceEc2InstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeExecutionResult, SnowDeviceManagementError> DescribeExecutionOutcome;
        typedef Aws::Utils::Outcome<DescribeTaskResult, SnowDeviceManagementError> DescribeTaskOutcome;
        typedef Aws::Utils::Outcome<ListDeviceResourcesResult, SnowDeviceManagementError> ListDeviceResourcesOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, SnowDeviceManagementError> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListExecutionsResult, SnowDeviceManagementError> ListExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SnowDeviceManagementError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTasksResult, SnowDeviceManagementError> ListTasksOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SnowDeviceManagementError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SnowDeviceManagementError> UntagResourceOutcome;

        typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
        typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
        typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
        typedef std::future<DescribeDeviceEc2InstancesOutcome> DescribeDeviceEc2InstancesOutcomeCallable;
        typedef std::future<DescribeExecutionOutcome> DescribeExecutionOutcomeCallable;
        typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
        typedef std::future<ListDeviceResourcesOutcome> ListDeviceResourcesOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class SnowDeviceManagementClient;

    typedef std::function<void(const SnowDeviceManagementClient*, const Model::CancelTaskRequest&, const Model::CancelTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTaskResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::CreateTaskRequest&, const Model::CreateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeDeviceEc2InstancesRequest&, const Model::DescribeDeviceEc2InstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceEc2InstancesResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeExecutionRequest&, const Model::DescribeExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExecutionResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::DescribeTaskRequest&, const Model::DescribeTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListDeviceResourcesRequest&, const Model::ListDeviceResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceResourcesResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListExecutionsRequest&, const Model::ListExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExecutionsResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SnowDeviceManagementClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>Amazon Web Services Snow Device Management documentation.</p>
   */
  class AWS_SNOWDEVICEMANAGEMENT_API SnowDeviceManagementClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowDeviceManagementClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowDeviceManagementClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SnowDeviceManagementClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Sends a cancel request for a specified task. You can cancel a task only if
         * it's still in a <code>QUEUED</code> state. Tasks that are already running can't
         * be cancelled.</p>  <p>A task might still run if it's processed from the
         * queue before the <code>CancelTask</code> operation changes the task's state.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/CancelTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request) const;

        /**
         * <p>Sends a cancel request for a specified task. You can cancel a task only if
         * it's still in a <code>QUEUED</code> state. Tasks that are already running can't
         * be cancelled.</p>  <p>A task might still run if it's processed from the
         * queue before the <code>CancelTask</code> operation changes the task's state.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/CancelTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Instructs one or more devices to start a task, such as unlocking or
         * rebooting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/CreateTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request) const;

        /**
         * <p>Instructs one or more devices to start a task, such as unlocking or
         * rebooting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/CreateTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Checks device-specific information, such as the device type, software
         * version, IP addresses, and lock status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request) const;

        /**
         * <p>Checks device-specific information, such as the device type, software
         * version, IP addresses, and lock status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Checks the current state of the Amazon EC2 instances. The output is similar
         * to <code>describeDevice</code>, but the results are sourced from the device
         * cache in the Amazon Web Services Cloud and include a subset of the available
         * fields. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeDeviceEc2Instances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceEc2InstancesOutcomeCallable DescribeDeviceEc2InstancesCallable(const Model::DescribeDeviceEc2InstancesRequest& request) const;

        /**
         * <p>Checks the current state of the Amazon EC2 instances. The output is similar
         * to <code>describeDevice</code>, but the results are sourced from the device
         * cache in the Amazon Web Services Cloud and include a subset of the available
         * fields. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeDeviceEc2Instances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Checks the status of a remote task running on one or more target
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const Model::DescribeExecutionRequest& request) const;

        /**
         * <p>Checks the status of a remote task running on one or more target
         * devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Checks the metadata for a given task on a device. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request) const;

        /**
         * <p>Checks the metadata for a given task on a device. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DescribeTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of the Amazon Web Services resources available for a device.
         * Currently, Amazon EC2 instances are the only supported resource
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListDeviceResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceResourcesOutcomeCallable ListDeviceResourcesCallable(const Model::ListDeviceResourcesRequest& request) const;

        /**
         * <p>Returns a list of the Amazon Web Services resources available for a device.
         * Currently, Amazon EC2 instances are the only supported resource
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListDeviceResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of all devices on your Amazon Web Services account that have
         * Amazon Web Services Snow Device Management enabled in the Amazon Web Services
         * Region where the command is run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Returns a list of all devices on your Amazon Web Services account that have
         * Amazon Web Services Snow Device Management enabled in the Amazon Web Services
         * Region where the command is run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the status of tasks for one or more target devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const Model::ListExecutionsRequest& request) const;

        /**
         * <p>Returns the status of tasks for one or more target devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of tags for a managed device or task.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags for a managed device or task.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of tasks that can be filtered by state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request) const;

        /**
         * <p>Returns a list of tasks that can be filtered by state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/ListTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or replaces tags on a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or replaces tags on a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or replaces tags on a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from a device or task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelTaskAsyncHelper(const Model::CancelTaskRequest& request, const CancelTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTaskAsyncHelper(const Model::CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeviceAsyncHelper(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeviceEc2InstancesAsyncHelper(const Model::DescribeDeviceEc2InstancesRequest& request, const DescribeDeviceEc2InstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExecutionAsyncHelper(const Model::DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTaskAsyncHelper(const Model::DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceResourcesAsyncHelper(const Model::ListDeviceResourcesRequest& request, const ListDeviceResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicesAsyncHelper(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExecutionsAsyncHelper(const Model::ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTasksAsyncHelper(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SnowDeviceManagement
} // namespace Aws
