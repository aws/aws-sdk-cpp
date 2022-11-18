/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelTaskAsync(...)  SubmitAsync(&SnowDeviceManagementClient::CancelTask, __VA_ARGS__)
#define CancelTaskCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::CancelTask, REQUEST)

#define CreateTaskAsync(...)  SubmitAsync(&SnowDeviceManagementClient::CreateTask, __VA_ARGS__)
#define CreateTaskCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::CreateTask, REQUEST)

#define DescribeDeviceAsync(...)  SubmitAsync(&SnowDeviceManagementClient::DescribeDevice, __VA_ARGS__)
#define DescribeDeviceCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::DescribeDevice, REQUEST)

#define DescribeDeviceEc2InstancesAsync(...)  SubmitAsync(&SnowDeviceManagementClient::DescribeDeviceEc2Instances, __VA_ARGS__)
#define DescribeDeviceEc2InstancesCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::DescribeDeviceEc2Instances, REQUEST)

#define DescribeExecutionAsync(...)  SubmitAsync(&SnowDeviceManagementClient::DescribeExecution, __VA_ARGS__)
#define DescribeExecutionCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::DescribeExecution, REQUEST)

#define DescribeTaskAsync(...)  SubmitAsync(&SnowDeviceManagementClient::DescribeTask, __VA_ARGS__)
#define DescribeTaskCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::DescribeTask, REQUEST)

#define ListDeviceResourcesAsync(...)  SubmitAsync(&SnowDeviceManagementClient::ListDeviceResources, __VA_ARGS__)
#define ListDeviceResourcesCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::ListDeviceResources, REQUEST)

#define ListDevicesAsync(...)  SubmitAsync(&SnowDeviceManagementClient::ListDevices, __VA_ARGS__)
#define ListDevicesCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::ListDevices, REQUEST)

#define ListExecutionsAsync(...)  SubmitAsync(&SnowDeviceManagementClient::ListExecutions, __VA_ARGS__)
#define ListExecutionsCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::ListExecutions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SnowDeviceManagementClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::ListTagsForResource, REQUEST)

#define ListTasksAsync(...)  SubmitAsync(&SnowDeviceManagementClient::ListTasks, __VA_ARGS__)
#define ListTasksCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::ListTasks, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SnowDeviceManagementClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SnowDeviceManagementClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SnowDeviceManagementClient::UntagResource, REQUEST)

