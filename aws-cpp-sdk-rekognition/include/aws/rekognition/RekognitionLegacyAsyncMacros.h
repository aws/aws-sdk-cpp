/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CompareFacesAsync(...)  SubmitAsync(&RekognitionClient::CompareFaces, __VA_ARGS__)
#define CompareFacesCallable(REQUEST)  SubmitCallable(&RekognitionClient::CompareFaces, REQUEST)

#define CopyProjectVersionAsync(...)  SubmitAsync(&RekognitionClient::CopyProjectVersion, __VA_ARGS__)
#define CopyProjectVersionCallable(REQUEST)  SubmitCallable(&RekognitionClient::CopyProjectVersion, REQUEST)

#define CreateCollectionAsync(...)  SubmitAsync(&RekognitionClient::CreateCollection, __VA_ARGS__)
#define CreateCollectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::CreateCollection, REQUEST)

#define CreateDatasetAsync(...)  SubmitAsync(&RekognitionClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&RekognitionClient::CreateDataset, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&RekognitionClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&RekognitionClient::CreateProject, REQUEST)

#define CreateProjectVersionAsync(...)  SubmitAsync(&RekognitionClient::CreateProjectVersion, __VA_ARGS__)
#define CreateProjectVersionCallable(REQUEST)  SubmitCallable(&RekognitionClient::CreateProjectVersion, REQUEST)

#define CreateStreamProcessorAsync(...)  SubmitAsync(&RekognitionClient::CreateStreamProcessor, __VA_ARGS__)
#define CreateStreamProcessorCallable(REQUEST)  SubmitCallable(&RekognitionClient::CreateStreamProcessor, REQUEST)

#define DeleteCollectionAsync(...)  SubmitAsync(&RekognitionClient::DeleteCollection, __VA_ARGS__)
#define DeleteCollectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::DeleteCollection, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&RekognitionClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&RekognitionClient::DeleteDataset, REQUEST)

#define DeleteFacesAsync(...)  SubmitAsync(&RekognitionClient::DeleteFaces, __VA_ARGS__)
#define DeleteFacesCallable(REQUEST)  SubmitCallable(&RekognitionClient::DeleteFaces, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&RekognitionClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&RekognitionClient::DeleteProject, REQUEST)

#define DeleteProjectPolicyAsync(...)  SubmitAsync(&RekognitionClient::DeleteProjectPolicy, __VA_ARGS__)
#define DeleteProjectPolicyCallable(REQUEST)  SubmitCallable(&RekognitionClient::DeleteProjectPolicy, REQUEST)

#define DeleteProjectVersionAsync(...)  SubmitAsync(&RekognitionClient::DeleteProjectVersion, __VA_ARGS__)
#define DeleteProjectVersionCallable(REQUEST)  SubmitCallable(&RekognitionClient::DeleteProjectVersion, REQUEST)

#define DeleteStreamProcessorAsync(...)  SubmitAsync(&RekognitionClient::DeleteStreamProcessor, __VA_ARGS__)
#define DeleteStreamProcessorCallable(REQUEST)  SubmitCallable(&RekognitionClient::DeleteStreamProcessor, REQUEST)

#define DescribeCollectionAsync(...)  SubmitAsync(&RekognitionClient::DescribeCollection, __VA_ARGS__)
#define DescribeCollectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::DescribeCollection, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&RekognitionClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&RekognitionClient::DescribeDataset, REQUEST)

#define DescribeProjectVersionsAsync(...)  SubmitAsync(&RekognitionClient::DescribeProjectVersions, __VA_ARGS__)
#define DescribeProjectVersionsCallable(REQUEST)  SubmitCallable(&RekognitionClient::DescribeProjectVersions, REQUEST)

#define DescribeProjectsAsync(...)  SubmitAsync(&RekognitionClient::DescribeProjects, __VA_ARGS__)
#define DescribeProjectsCallable(REQUEST)  SubmitCallable(&RekognitionClient::DescribeProjects, REQUEST)

#define DescribeStreamProcessorAsync(...)  SubmitAsync(&RekognitionClient::DescribeStreamProcessor, __VA_ARGS__)
#define DescribeStreamProcessorCallable(REQUEST)  SubmitCallable(&RekognitionClient::DescribeStreamProcessor, REQUEST)

#define DetectCustomLabelsAsync(...)  SubmitAsync(&RekognitionClient::DetectCustomLabels, __VA_ARGS__)
#define DetectCustomLabelsCallable(REQUEST)  SubmitCallable(&RekognitionClient::DetectCustomLabels, REQUEST)

#define DetectFacesAsync(...)  SubmitAsync(&RekognitionClient::DetectFaces, __VA_ARGS__)
#define DetectFacesCallable(REQUEST)  SubmitCallable(&RekognitionClient::DetectFaces, REQUEST)

#define DetectLabelsAsync(...)  SubmitAsync(&RekognitionClient::DetectLabels, __VA_ARGS__)
#define DetectLabelsCallable(REQUEST)  SubmitCallable(&RekognitionClient::DetectLabels, REQUEST)

#define DetectModerationLabelsAsync(...)  SubmitAsync(&RekognitionClient::DetectModerationLabels, __VA_ARGS__)
#define DetectModerationLabelsCallable(REQUEST)  SubmitCallable(&RekognitionClient::DetectModerationLabels, REQUEST)

#define DetectProtectiveEquipmentAsync(...)  SubmitAsync(&RekognitionClient::DetectProtectiveEquipment, __VA_ARGS__)
#define DetectProtectiveEquipmentCallable(REQUEST)  SubmitCallable(&RekognitionClient::DetectProtectiveEquipment, REQUEST)

#define DetectTextAsync(...)  SubmitAsync(&RekognitionClient::DetectText, __VA_ARGS__)
#define DetectTextCallable(REQUEST)  SubmitCallable(&RekognitionClient::DetectText, REQUEST)

#define DistributeDatasetEntriesAsync(...)  SubmitAsync(&RekognitionClient::DistributeDatasetEntries, __VA_ARGS__)
#define DistributeDatasetEntriesCallable(REQUEST)  SubmitCallable(&RekognitionClient::DistributeDatasetEntries, REQUEST)

#define GetCelebrityInfoAsync(...)  SubmitAsync(&RekognitionClient::GetCelebrityInfo, __VA_ARGS__)
#define GetCelebrityInfoCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetCelebrityInfo, REQUEST)

#define GetCelebrityRecognitionAsync(...)  SubmitAsync(&RekognitionClient::GetCelebrityRecognition, __VA_ARGS__)
#define GetCelebrityRecognitionCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetCelebrityRecognition, REQUEST)

#define GetContentModerationAsync(...)  SubmitAsync(&RekognitionClient::GetContentModeration, __VA_ARGS__)
#define GetContentModerationCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetContentModeration, REQUEST)

#define GetFaceDetectionAsync(...)  SubmitAsync(&RekognitionClient::GetFaceDetection, __VA_ARGS__)
#define GetFaceDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetFaceDetection, REQUEST)

#define GetFaceSearchAsync(...)  SubmitAsync(&RekognitionClient::GetFaceSearch, __VA_ARGS__)
#define GetFaceSearchCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetFaceSearch, REQUEST)

#define GetLabelDetectionAsync(...)  SubmitAsync(&RekognitionClient::GetLabelDetection, __VA_ARGS__)
#define GetLabelDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetLabelDetection, REQUEST)

#define GetPersonTrackingAsync(...)  SubmitAsync(&RekognitionClient::GetPersonTracking, __VA_ARGS__)
#define GetPersonTrackingCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetPersonTracking, REQUEST)

#define GetSegmentDetectionAsync(...)  SubmitAsync(&RekognitionClient::GetSegmentDetection, __VA_ARGS__)
#define GetSegmentDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetSegmentDetection, REQUEST)

#define GetTextDetectionAsync(...)  SubmitAsync(&RekognitionClient::GetTextDetection, __VA_ARGS__)
#define GetTextDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::GetTextDetection, REQUEST)

#define IndexFacesAsync(...)  SubmitAsync(&RekognitionClient::IndexFaces, __VA_ARGS__)
#define IndexFacesCallable(REQUEST)  SubmitCallable(&RekognitionClient::IndexFaces, REQUEST)

#define ListCollectionsAsync(...)  SubmitAsync(&RekognitionClient::ListCollections, __VA_ARGS__)
#define ListCollectionsCallable(REQUEST)  SubmitCallable(&RekognitionClient::ListCollections, REQUEST)

#define ListDatasetEntriesAsync(...)  SubmitAsync(&RekognitionClient::ListDatasetEntries, __VA_ARGS__)
#define ListDatasetEntriesCallable(REQUEST)  SubmitCallable(&RekognitionClient::ListDatasetEntries, REQUEST)

#define ListDatasetLabelsAsync(...)  SubmitAsync(&RekognitionClient::ListDatasetLabels, __VA_ARGS__)
#define ListDatasetLabelsCallable(REQUEST)  SubmitCallable(&RekognitionClient::ListDatasetLabels, REQUEST)

#define ListFacesAsync(...)  SubmitAsync(&RekognitionClient::ListFaces, __VA_ARGS__)
#define ListFacesCallable(REQUEST)  SubmitCallable(&RekognitionClient::ListFaces, REQUEST)

#define ListProjectPoliciesAsync(...)  SubmitAsync(&RekognitionClient::ListProjectPolicies, __VA_ARGS__)
#define ListProjectPoliciesCallable(REQUEST)  SubmitCallable(&RekognitionClient::ListProjectPolicies, REQUEST)

#define ListStreamProcessorsAsync(...)  SubmitAsync(&RekognitionClient::ListStreamProcessors, __VA_ARGS__)
#define ListStreamProcessorsCallable(REQUEST)  SubmitCallable(&RekognitionClient::ListStreamProcessors, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&RekognitionClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&RekognitionClient::ListTagsForResource, REQUEST)

#define PutProjectPolicyAsync(...)  SubmitAsync(&RekognitionClient::PutProjectPolicy, __VA_ARGS__)
#define PutProjectPolicyCallable(REQUEST)  SubmitCallable(&RekognitionClient::PutProjectPolicy, REQUEST)

#define RecognizeCelebritiesAsync(...)  SubmitAsync(&RekognitionClient::RecognizeCelebrities, __VA_ARGS__)
#define RecognizeCelebritiesCallable(REQUEST)  SubmitCallable(&RekognitionClient::RecognizeCelebrities, REQUEST)

#define SearchFacesAsync(...)  SubmitAsync(&RekognitionClient::SearchFaces, __VA_ARGS__)
#define SearchFacesCallable(REQUEST)  SubmitCallable(&RekognitionClient::SearchFaces, REQUEST)

#define SearchFacesByImageAsync(...)  SubmitAsync(&RekognitionClient::SearchFacesByImage, __VA_ARGS__)
#define SearchFacesByImageCallable(REQUEST)  SubmitCallable(&RekognitionClient::SearchFacesByImage, REQUEST)

#define StartCelebrityRecognitionAsync(...)  SubmitAsync(&RekognitionClient::StartCelebrityRecognition, __VA_ARGS__)
#define StartCelebrityRecognitionCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartCelebrityRecognition, REQUEST)

#define StartContentModerationAsync(...)  SubmitAsync(&RekognitionClient::StartContentModeration, __VA_ARGS__)
#define StartContentModerationCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartContentModeration, REQUEST)

#define StartFaceDetectionAsync(...)  SubmitAsync(&RekognitionClient::StartFaceDetection, __VA_ARGS__)
#define StartFaceDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartFaceDetection, REQUEST)

#define StartFaceSearchAsync(...)  SubmitAsync(&RekognitionClient::StartFaceSearch, __VA_ARGS__)
#define StartFaceSearchCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartFaceSearch, REQUEST)

#define StartLabelDetectionAsync(...)  SubmitAsync(&RekognitionClient::StartLabelDetection, __VA_ARGS__)
#define StartLabelDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartLabelDetection, REQUEST)

#define StartPersonTrackingAsync(...)  SubmitAsync(&RekognitionClient::StartPersonTracking, __VA_ARGS__)
#define StartPersonTrackingCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartPersonTracking, REQUEST)

#define StartProjectVersionAsync(...)  SubmitAsync(&RekognitionClient::StartProjectVersion, __VA_ARGS__)
#define StartProjectVersionCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartProjectVersion, REQUEST)

#define StartSegmentDetectionAsync(...)  SubmitAsync(&RekognitionClient::StartSegmentDetection, __VA_ARGS__)
#define StartSegmentDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartSegmentDetection, REQUEST)

#define StartStreamProcessorAsync(...)  SubmitAsync(&RekognitionClient::StartStreamProcessor, __VA_ARGS__)
#define StartStreamProcessorCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartStreamProcessor, REQUEST)

#define StartTextDetectionAsync(...)  SubmitAsync(&RekognitionClient::StartTextDetection, __VA_ARGS__)
#define StartTextDetectionCallable(REQUEST)  SubmitCallable(&RekognitionClient::StartTextDetection, REQUEST)

#define StopProjectVersionAsync(...)  SubmitAsync(&RekognitionClient::StopProjectVersion, __VA_ARGS__)
#define StopProjectVersionCallable(REQUEST)  SubmitCallable(&RekognitionClient::StopProjectVersion, REQUEST)

#define StopStreamProcessorAsync(...)  SubmitAsync(&RekognitionClient::StopStreamProcessor, __VA_ARGS__)
#define StopStreamProcessorCallable(REQUEST)  SubmitCallable(&RekognitionClient::StopStreamProcessor, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&RekognitionClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&RekognitionClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&RekognitionClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&RekognitionClient::UntagResource, REQUEST)

#define UpdateDatasetEntriesAsync(...)  SubmitAsync(&RekognitionClient::UpdateDatasetEntries, __VA_ARGS__)
#define UpdateDatasetEntriesCallable(REQUEST)  SubmitCallable(&RekognitionClient::UpdateDatasetEntries, REQUEST)

#define UpdateStreamProcessorAsync(...)  SubmitAsync(&RekognitionClient::UpdateStreamProcessor, __VA_ARGS__)
#define UpdateStreamProcessorCallable(REQUEST)  SubmitCallable(&RekognitionClient::UpdateStreamProcessor, REQUEST)

