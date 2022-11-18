/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJobRunAsync(...)  SubmitAsync(&EMRServerlessClient::CancelJobRun, __VA_ARGS__)
#define CancelJobRunCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::CancelJobRun, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&EMRServerlessClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::CreateApplication, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&EMRServerlessClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::DeleteApplication, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&EMRServerlessClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::GetApplication, REQUEST)

#define GetDashboardForJobRunAsync(...)  SubmitAsync(&EMRServerlessClient::GetDashboardForJobRun, __VA_ARGS__)
#define GetDashboardForJobRunCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::GetDashboardForJobRun, REQUEST)

#define GetJobRunAsync(...)  SubmitAsync(&EMRServerlessClient::GetJobRun, __VA_ARGS__)
#define GetJobRunCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::GetJobRun, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&EMRServerlessClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::ListApplications, REQUEST)

#define ListJobRunsAsync(...)  SubmitAsync(&EMRServerlessClient::ListJobRuns, __VA_ARGS__)
#define ListJobRunsCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::ListJobRuns, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&EMRServerlessClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::ListTagsForResource, REQUEST)

#define StartApplicationAsync(...)  SubmitAsync(&EMRServerlessClient::StartApplication, __VA_ARGS__)
#define StartApplicationCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::StartApplication, REQUEST)

#define StartJobRunAsync(...)  SubmitAsync(&EMRServerlessClient::StartJobRun, __VA_ARGS__)
#define StartJobRunCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::StartJobRun, REQUEST)

#define StopApplicationAsync(...)  SubmitAsync(&EMRServerlessClient::StopApplication, __VA_ARGS__)
#define StopApplicationCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::StopApplication, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&EMRServerlessClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&EMRServerlessClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&EMRServerlessClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&EMRServerlessClient::UpdateApplication, REQUEST)

