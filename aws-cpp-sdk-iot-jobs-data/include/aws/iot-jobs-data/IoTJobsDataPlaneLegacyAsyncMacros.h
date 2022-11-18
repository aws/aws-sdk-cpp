/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeJobExecutionAsync(...)  SubmitAsync(&IoTJobsDataPlaneClient::DescribeJobExecution, __VA_ARGS__)
#define DescribeJobExecutionCallable(REQUEST)  SubmitCallable(&IoTJobsDataPlaneClient::DescribeJobExecution, REQUEST)

#define GetPendingJobExecutionsAsync(...)  SubmitAsync(&IoTJobsDataPlaneClient::GetPendingJobExecutions, __VA_ARGS__)
#define GetPendingJobExecutionsCallable(REQUEST)  SubmitCallable(&IoTJobsDataPlaneClient::GetPendingJobExecutions, REQUEST)

#define StartNextPendingJobExecutionAsync(...)  SubmitAsync(&IoTJobsDataPlaneClient::StartNextPendingJobExecution, __VA_ARGS__)
#define StartNextPendingJobExecutionCallable(REQUEST)  SubmitCallable(&IoTJobsDataPlaneClient::StartNextPendingJobExecution, REQUEST)

#define UpdateJobExecutionAsync(...)  SubmitAsync(&IoTJobsDataPlaneClient::UpdateJobExecution, __VA_ARGS__)
#define UpdateJobExecutionCallable(REQUEST)  SubmitCallable(&IoTJobsDataPlaneClient::UpdateJobExecution, REQUEST)

