/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateFHIRDatastoreAsync(...)  SubmitAsync(&HealthLakeClient::CreateFHIRDatastore, __VA_ARGS__)
#define CreateFHIRDatastoreCallable(REQUEST)  SubmitCallable(&HealthLakeClient::CreateFHIRDatastore, REQUEST)

#define DeleteFHIRDatastoreAsync(...)  SubmitAsync(&HealthLakeClient::DeleteFHIRDatastore, __VA_ARGS__)
#define DeleteFHIRDatastoreCallable(REQUEST)  SubmitCallable(&HealthLakeClient::DeleteFHIRDatastore, REQUEST)

#define DescribeFHIRDatastoreAsync(...)  SubmitAsync(&HealthLakeClient::DescribeFHIRDatastore, __VA_ARGS__)
#define DescribeFHIRDatastoreCallable(REQUEST)  SubmitCallable(&HealthLakeClient::DescribeFHIRDatastore, REQUEST)

#define DescribeFHIRExportJobAsync(...)  SubmitAsync(&HealthLakeClient::DescribeFHIRExportJob, __VA_ARGS__)
#define DescribeFHIRExportJobCallable(REQUEST)  SubmitCallable(&HealthLakeClient::DescribeFHIRExportJob, REQUEST)

#define DescribeFHIRImportJobAsync(...)  SubmitAsync(&HealthLakeClient::DescribeFHIRImportJob, __VA_ARGS__)
#define DescribeFHIRImportJobCallable(REQUEST)  SubmitCallable(&HealthLakeClient::DescribeFHIRImportJob, REQUEST)

#define ListFHIRDatastoresAsync(...)  SubmitAsync(&HealthLakeClient::ListFHIRDatastores, __VA_ARGS__)
#define ListFHIRDatastoresCallable(REQUEST)  SubmitCallable(&HealthLakeClient::ListFHIRDatastores, REQUEST)

#define ListFHIRExportJobsAsync(...)  SubmitAsync(&HealthLakeClient::ListFHIRExportJobs, __VA_ARGS__)
#define ListFHIRExportJobsCallable(REQUEST)  SubmitCallable(&HealthLakeClient::ListFHIRExportJobs, REQUEST)

#define ListFHIRImportJobsAsync(...)  SubmitAsync(&HealthLakeClient::ListFHIRImportJobs, __VA_ARGS__)
#define ListFHIRImportJobsCallable(REQUEST)  SubmitCallable(&HealthLakeClient::ListFHIRImportJobs, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&HealthLakeClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&HealthLakeClient::ListTagsForResource, REQUEST)

#define StartFHIRExportJobAsync(...)  SubmitAsync(&HealthLakeClient::StartFHIRExportJob, __VA_ARGS__)
#define StartFHIRExportJobCallable(REQUEST)  SubmitCallable(&HealthLakeClient::StartFHIRExportJob, REQUEST)

#define StartFHIRImportJobAsync(...)  SubmitAsync(&HealthLakeClient::StartFHIRImportJob, __VA_ARGS__)
#define StartFHIRImportJobCallable(REQUEST)  SubmitCallable(&HealthLakeClient::StartFHIRImportJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&HealthLakeClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&HealthLakeClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&HealthLakeClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&HealthLakeClient::UntagResource, REQUEST)

