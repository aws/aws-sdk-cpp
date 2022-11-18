/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeEntitiesDetectionV2JobAsync(...)  SubmitAsync(&ComprehendMedicalClient::DescribeEntitiesDetectionV2Job, __VA_ARGS__)
#define DescribeEntitiesDetectionV2JobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::DescribeEntitiesDetectionV2Job, REQUEST)

#define DescribeICD10CMInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::DescribeICD10CMInferenceJob, __VA_ARGS__)
#define DescribeICD10CMInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::DescribeICD10CMInferenceJob, REQUEST)

#define DescribePHIDetectionJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::DescribePHIDetectionJob, __VA_ARGS__)
#define DescribePHIDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::DescribePHIDetectionJob, REQUEST)

#define DescribeRxNormInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::DescribeRxNormInferenceJob, __VA_ARGS__)
#define DescribeRxNormInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::DescribeRxNormInferenceJob, REQUEST)

#define DescribeSNOMEDCTInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::DescribeSNOMEDCTInferenceJob, __VA_ARGS__)
#define DescribeSNOMEDCTInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::DescribeSNOMEDCTInferenceJob, REQUEST)

#define DetectEntitiesV2Async(...)  SubmitAsync(&ComprehendMedicalClient::DetectEntitiesV2, __VA_ARGS__)
#define DetectEntitiesV2Callable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::DetectEntitiesV2, REQUEST)

#define DetectPHIAsync(...)  SubmitAsync(&ComprehendMedicalClient::DetectPHI, __VA_ARGS__)
#define DetectPHICallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::DetectPHI, REQUEST)

#define InferICD10CMAsync(...)  SubmitAsync(&ComprehendMedicalClient::InferICD10CM, __VA_ARGS__)
#define InferICD10CMCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::InferICD10CM, REQUEST)

#define InferRxNormAsync(...)  SubmitAsync(&ComprehendMedicalClient::InferRxNorm, __VA_ARGS__)
#define InferRxNormCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::InferRxNorm, REQUEST)

#define InferSNOMEDCTAsync(...)  SubmitAsync(&ComprehendMedicalClient::InferSNOMEDCT, __VA_ARGS__)
#define InferSNOMEDCTCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::InferSNOMEDCT, REQUEST)

#define ListEntitiesDetectionV2JobsAsync(...)  SubmitAsync(&ComprehendMedicalClient::ListEntitiesDetectionV2Jobs, __VA_ARGS__)
#define ListEntitiesDetectionV2JobsCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::ListEntitiesDetectionV2Jobs, REQUEST)

#define ListICD10CMInferenceJobsAsync(...)  SubmitAsync(&ComprehendMedicalClient::ListICD10CMInferenceJobs, __VA_ARGS__)
#define ListICD10CMInferenceJobsCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::ListICD10CMInferenceJobs, REQUEST)

#define ListPHIDetectionJobsAsync(...)  SubmitAsync(&ComprehendMedicalClient::ListPHIDetectionJobs, __VA_ARGS__)
#define ListPHIDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::ListPHIDetectionJobs, REQUEST)

#define ListRxNormInferenceJobsAsync(...)  SubmitAsync(&ComprehendMedicalClient::ListRxNormInferenceJobs, __VA_ARGS__)
#define ListRxNormInferenceJobsCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::ListRxNormInferenceJobs, REQUEST)

#define ListSNOMEDCTInferenceJobsAsync(...)  SubmitAsync(&ComprehendMedicalClient::ListSNOMEDCTInferenceJobs, __VA_ARGS__)
#define ListSNOMEDCTInferenceJobsCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::ListSNOMEDCTInferenceJobs, REQUEST)

#define StartEntitiesDetectionV2JobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StartEntitiesDetectionV2Job, __VA_ARGS__)
#define StartEntitiesDetectionV2JobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StartEntitiesDetectionV2Job, REQUEST)

#define StartICD10CMInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StartICD10CMInferenceJob, __VA_ARGS__)
#define StartICD10CMInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StartICD10CMInferenceJob, REQUEST)

#define StartPHIDetectionJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StartPHIDetectionJob, __VA_ARGS__)
#define StartPHIDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StartPHIDetectionJob, REQUEST)

#define StartRxNormInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StartRxNormInferenceJob, __VA_ARGS__)
#define StartRxNormInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StartRxNormInferenceJob, REQUEST)

#define StartSNOMEDCTInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StartSNOMEDCTInferenceJob, __VA_ARGS__)
#define StartSNOMEDCTInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StartSNOMEDCTInferenceJob, REQUEST)

#define StopEntitiesDetectionV2JobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StopEntitiesDetectionV2Job, __VA_ARGS__)
#define StopEntitiesDetectionV2JobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StopEntitiesDetectionV2Job, REQUEST)

#define StopICD10CMInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StopICD10CMInferenceJob, __VA_ARGS__)
#define StopICD10CMInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StopICD10CMInferenceJob, REQUEST)

#define StopPHIDetectionJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StopPHIDetectionJob, __VA_ARGS__)
#define StopPHIDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StopPHIDetectionJob, REQUEST)

#define StopRxNormInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StopRxNormInferenceJob, __VA_ARGS__)
#define StopRxNormInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StopRxNormInferenceJob, REQUEST)

#define StopSNOMEDCTInferenceJobAsync(...)  SubmitAsync(&ComprehendMedicalClient::StopSNOMEDCTInferenceJob, __VA_ARGS__)
#define StopSNOMEDCTInferenceJobCallable(REQUEST)  SubmitCallable(&ComprehendMedicalClient::StopSNOMEDCTInferenceJob, REQUEST)

