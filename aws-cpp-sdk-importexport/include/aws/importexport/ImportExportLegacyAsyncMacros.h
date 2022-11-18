/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJobAsync(...)  SubmitAsync(&ImportExportClient::CancelJob, __VA_ARGS__)
#define CancelJobCallable(REQUEST)  SubmitCallable(&ImportExportClient::CancelJob, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&ImportExportClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&ImportExportClient::CreateJob, REQUEST)

#define GetShippingLabelAsync(...)  SubmitAsync(&ImportExportClient::GetShippingLabel, __VA_ARGS__)
#define GetShippingLabelCallable(REQUEST)  SubmitCallable(&ImportExportClient::GetShippingLabel, REQUEST)

#define GetStatusAsync(...)  SubmitAsync(&ImportExportClient::GetStatus, __VA_ARGS__)
#define GetStatusCallable(REQUEST)  SubmitCallable(&ImportExportClient::GetStatus, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&ImportExportClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&ImportExportClient::ListJobs, REQUEST)

#define UpdateJobAsync(...)  SubmitAsync(&ImportExportClient::UpdateJob, __VA_ARGS__)
#define UpdateJobCallable(REQUEST)  SubmitCallable(&ImportExportClient::UpdateJob, REQUEST)

