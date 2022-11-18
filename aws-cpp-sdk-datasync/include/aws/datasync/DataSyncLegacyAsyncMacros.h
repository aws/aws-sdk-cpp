/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelTaskExecutionAsync(...)  SubmitAsync(&DataSyncClient::CancelTaskExecution, __VA_ARGS__)
#define CancelTaskExecutionCallable(REQUEST)  SubmitCallable(&DataSyncClient::CancelTaskExecution, REQUEST)

#define CreateAgentAsync(...)  SubmitAsync(&DataSyncClient::CreateAgent, __VA_ARGS__)
#define CreateAgentCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateAgent, REQUEST)

#define CreateLocationEfsAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationEfs, __VA_ARGS__)
#define CreateLocationEfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationEfs, REQUEST)

#define CreateLocationFsxLustreAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationFsxLustre, __VA_ARGS__)
#define CreateLocationFsxLustreCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationFsxLustre, REQUEST)

#define CreateLocationFsxOntapAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationFsxOntap, __VA_ARGS__)
#define CreateLocationFsxOntapCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationFsxOntap, REQUEST)

#define CreateLocationFsxOpenZfsAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationFsxOpenZfs, __VA_ARGS__)
#define CreateLocationFsxOpenZfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationFsxOpenZfs, REQUEST)

#define CreateLocationFsxWindowsAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationFsxWindows, __VA_ARGS__)
#define CreateLocationFsxWindowsCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationFsxWindows, REQUEST)

#define CreateLocationHdfsAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationHdfs, __VA_ARGS__)
#define CreateLocationHdfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationHdfs, REQUEST)

#define CreateLocationNfsAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationNfs, __VA_ARGS__)
#define CreateLocationNfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationNfs, REQUEST)

#define CreateLocationObjectStorageAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationObjectStorage, __VA_ARGS__)
#define CreateLocationObjectStorageCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationObjectStorage, REQUEST)

#define CreateLocationS3Async(...)  SubmitAsync(&DataSyncClient::CreateLocationS3, __VA_ARGS__)
#define CreateLocationS3Callable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationS3, REQUEST)

#define CreateLocationSmbAsync(...)  SubmitAsync(&DataSyncClient::CreateLocationSmb, __VA_ARGS__)
#define CreateLocationSmbCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateLocationSmb, REQUEST)

#define CreateTaskAsync(...)  SubmitAsync(&DataSyncClient::CreateTask, __VA_ARGS__)
#define CreateTaskCallable(REQUEST)  SubmitCallable(&DataSyncClient::CreateTask, REQUEST)

#define DeleteAgentAsync(...)  SubmitAsync(&DataSyncClient::DeleteAgent, __VA_ARGS__)
#define DeleteAgentCallable(REQUEST)  SubmitCallable(&DataSyncClient::DeleteAgent, REQUEST)

#define DeleteLocationAsync(...)  SubmitAsync(&DataSyncClient::DeleteLocation, __VA_ARGS__)
#define DeleteLocationCallable(REQUEST)  SubmitCallable(&DataSyncClient::DeleteLocation, REQUEST)

#define DeleteTaskAsync(...)  SubmitAsync(&DataSyncClient::DeleteTask, __VA_ARGS__)
#define DeleteTaskCallable(REQUEST)  SubmitCallable(&DataSyncClient::DeleteTask, REQUEST)

#define DescribeAgentAsync(...)  SubmitAsync(&DataSyncClient::DescribeAgent, __VA_ARGS__)
#define DescribeAgentCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeAgent, REQUEST)

#define DescribeLocationEfsAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationEfs, __VA_ARGS__)
#define DescribeLocationEfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationEfs, REQUEST)

#define DescribeLocationFsxLustreAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationFsxLustre, __VA_ARGS__)
#define DescribeLocationFsxLustreCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationFsxLustre, REQUEST)

#define DescribeLocationFsxOntapAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationFsxOntap, __VA_ARGS__)
#define DescribeLocationFsxOntapCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationFsxOntap, REQUEST)

#define DescribeLocationFsxOpenZfsAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationFsxOpenZfs, __VA_ARGS__)
#define DescribeLocationFsxOpenZfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationFsxOpenZfs, REQUEST)

#define DescribeLocationFsxWindowsAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationFsxWindows, __VA_ARGS__)
#define DescribeLocationFsxWindowsCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationFsxWindows, REQUEST)

#define DescribeLocationHdfsAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationHdfs, __VA_ARGS__)
#define DescribeLocationHdfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationHdfs, REQUEST)

#define DescribeLocationNfsAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationNfs, __VA_ARGS__)
#define DescribeLocationNfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationNfs, REQUEST)

#define DescribeLocationObjectStorageAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationObjectStorage, __VA_ARGS__)
#define DescribeLocationObjectStorageCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationObjectStorage, REQUEST)

#define DescribeLocationS3Async(...)  SubmitAsync(&DataSyncClient::DescribeLocationS3, __VA_ARGS__)
#define DescribeLocationS3Callable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationS3, REQUEST)

#define DescribeLocationSmbAsync(...)  SubmitAsync(&DataSyncClient::DescribeLocationSmb, __VA_ARGS__)
#define DescribeLocationSmbCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeLocationSmb, REQUEST)

#define DescribeTaskAsync(...)  SubmitAsync(&DataSyncClient::DescribeTask, __VA_ARGS__)
#define DescribeTaskCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeTask, REQUEST)

#define DescribeTaskExecutionAsync(...)  SubmitAsync(&DataSyncClient::DescribeTaskExecution, __VA_ARGS__)
#define DescribeTaskExecutionCallable(REQUEST)  SubmitCallable(&DataSyncClient::DescribeTaskExecution, REQUEST)

#define ListAgentsAsync(...)  SubmitAsync(&DataSyncClient::ListAgents, __VA_ARGS__)
#define ListAgentsCallable(REQUEST)  SubmitCallable(&DataSyncClient::ListAgents, REQUEST)

#define ListLocationsAsync(...)  SubmitAsync(&DataSyncClient::ListLocations, __VA_ARGS__)
#define ListLocationsCallable(REQUEST)  SubmitCallable(&DataSyncClient::ListLocations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DataSyncClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DataSyncClient::ListTagsForResource, REQUEST)

#define ListTaskExecutionsAsync(...)  SubmitAsync(&DataSyncClient::ListTaskExecutions, __VA_ARGS__)
#define ListTaskExecutionsCallable(REQUEST)  SubmitCallable(&DataSyncClient::ListTaskExecutions, REQUEST)

#define ListTasksAsync(...)  SubmitAsync(&DataSyncClient::ListTasks, __VA_ARGS__)
#define ListTasksCallable(REQUEST)  SubmitCallable(&DataSyncClient::ListTasks, REQUEST)

#define StartTaskExecutionAsync(...)  SubmitAsync(&DataSyncClient::StartTaskExecution, __VA_ARGS__)
#define StartTaskExecutionCallable(REQUEST)  SubmitCallable(&DataSyncClient::StartTaskExecution, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DataSyncClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DataSyncClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DataSyncClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DataSyncClient::UntagResource, REQUEST)

#define UpdateAgentAsync(...)  SubmitAsync(&DataSyncClient::UpdateAgent, __VA_ARGS__)
#define UpdateAgentCallable(REQUEST)  SubmitCallable(&DataSyncClient::UpdateAgent, REQUEST)

#define UpdateLocationHdfsAsync(...)  SubmitAsync(&DataSyncClient::UpdateLocationHdfs, __VA_ARGS__)
#define UpdateLocationHdfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::UpdateLocationHdfs, REQUEST)

#define UpdateLocationNfsAsync(...)  SubmitAsync(&DataSyncClient::UpdateLocationNfs, __VA_ARGS__)
#define UpdateLocationNfsCallable(REQUEST)  SubmitCallable(&DataSyncClient::UpdateLocationNfs, REQUEST)

#define UpdateLocationObjectStorageAsync(...)  SubmitAsync(&DataSyncClient::UpdateLocationObjectStorage, __VA_ARGS__)
#define UpdateLocationObjectStorageCallable(REQUEST)  SubmitCallable(&DataSyncClient::UpdateLocationObjectStorage, REQUEST)

#define UpdateLocationSmbAsync(...)  SubmitAsync(&DataSyncClient::UpdateLocationSmb, __VA_ARGS__)
#define UpdateLocationSmbCallable(REQUEST)  SubmitCallable(&DataSyncClient::UpdateLocationSmb, REQUEST)

#define UpdateTaskAsync(...)  SubmitAsync(&DataSyncClient::UpdateTask, __VA_ARGS__)
#define UpdateTaskCallable(REQUEST)  SubmitCallable(&DataSyncClient::UpdateTask, REQUEST)

#define UpdateTaskExecutionAsync(...)  SubmitAsync(&DataSyncClient::UpdateTaskExecution, __VA_ARGS__)
#define UpdateTaskExecutionCallable(REQUEST)  SubmitCallable(&DataSyncClient::UpdateTaskExecution, REQUEST)

