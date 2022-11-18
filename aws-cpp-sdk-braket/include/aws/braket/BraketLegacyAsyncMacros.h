/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJobAsync(...)  SubmitAsync(&BraketClient::CancelJob, __VA_ARGS__)
#define CancelJobCallable(REQUEST)  SubmitCallable(&BraketClient::CancelJob, REQUEST)

#define CancelQuantumTaskAsync(...)  SubmitAsync(&BraketClient::CancelQuantumTask, __VA_ARGS__)
#define CancelQuantumTaskCallable(REQUEST)  SubmitCallable(&BraketClient::CancelQuantumTask, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&BraketClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&BraketClient::CreateJob, REQUEST)

#define CreateQuantumTaskAsync(...)  SubmitAsync(&BraketClient::CreateQuantumTask, __VA_ARGS__)
#define CreateQuantumTaskCallable(REQUEST)  SubmitCallable(&BraketClient::CreateQuantumTask, REQUEST)

#define GetDeviceAsync(...)  SubmitAsync(&BraketClient::GetDevice, __VA_ARGS__)
#define GetDeviceCallable(REQUEST)  SubmitCallable(&BraketClient::GetDevice, REQUEST)

#define GetJobAsync(...)  SubmitAsync(&BraketClient::GetJob, __VA_ARGS__)
#define GetJobCallable(REQUEST)  SubmitCallable(&BraketClient::GetJob, REQUEST)

#define GetQuantumTaskAsync(...)  SubmitAsync(&BraketClient::GetQuantumTask, __VA_ARGS__)
#define GetQuantumTaskCallable(REQUEST)  SubmitCallable(&BraketClient::GetQuantumTask, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&BraketClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&BraketClient::ListTagsForResource, REQUEST)

#define SearchDevicesAsync(...)  SubmitAsync(&BraketClient::SearchDevices, __VA_ARGS__)
#define SearchDevicesCallable(REQUEST)  SubmitCallable(&BraketClient::SearchDevices, REQUEST)

#define SearchJobsAsync(...)  SubmitAsync(&BraketClient::SearchJobs, __VA_ARGS__)
#define SearchJobsCallable(REQUEST)  SubmitCallable(&BraketClient::SearchJobs, REQUEST)

#define SearchQuantumTasksAsync(...)  SubmitAsync(&BraketClient::SearchQuantumTasks, __VA_ARGS__)
#define SearchQuantumTasksCallable(REQUEST)  SubmitCallable(&BraketClient::SearchQuantumTasks, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&BraketClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&BraketClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&BraketClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&BraketClient::UntagResource, REQUEST)

