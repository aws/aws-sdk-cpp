/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchCreateVariableAsync(...)  SubmitAsync(&FraudDetectorClient::BatchCreateVariable, __VA_ARGS__)
#define BatchCreateVariableCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::BatchCreateVariable, REQUEST)

#define BatchGetVariableAsync(...)  SubmitAsync(&FraudDetectorClient::BatchGetVariable, __VA_ARGS__)
#define BatchGetVariableCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::BatchGetVariable, REQUEST)

#define CancelBatchImportJobAsync(...)  SubmitAsync(&FraudDetectorClient::CancelBatchImportJob, __VA_ARGS__)
#define CancelBatchImportJobCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CancelBatchImportJob, REQUEST)

#define CancelBatchPredictionJobAsync(...)  SubmitAsync(&FraudDetectorClient::CancelBatchPredictionJob, __VA_ARGS__)
#define CancelBatchPredictionJobCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CancelBatchPredictionJob, REQUEST)

#define CreateBatchImportJobAsync(...)  SubmitAsync(&FraudDetectorClient::CreateBatchImportJob, __VA_ARGS__)
#define CreateBatchImportJobCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CreateBatchImportJob, REQUEST)

#define CreateBatchPredictionJobAsync(...)  SubmitAsync(&FraudDetectorClient::CreateBatchPredictionJob, __VA_ARGS__)
#define CreateBatchPredictionJobCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CreateBatchPredictionJob, REQUEST)

#define CreateDetectorVersionAsync(...)  SubmitAsync(&FraudDetectorClient::CreateDetectorVersion, __VA_ARGS__)
#define CreateDetectorVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CreateDetectorVersion, REQUEST)

#define CreateModelAsync(...)  SubmitAsync(&FraudDetectorClient::CreateModel, __VA_ARGS__)
#define CreateModelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CreateModel, REQUEST)

#define CreateModelVersionAsync(...)  SubmitAsync(&FraudDetectorClient::CreateModelVersion, __VA_ARGS__)
#define CreateModelVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CreateModelVersion, REQUEST)

#define CreateRuleAsync(...)  SubmitAsync(&FraudDetectorClient::CreateRule, __VA_ARGS__)
#define CreateRuleCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CreateRule, REQUEST)

#define CreateVariableAsync(...)  SubmitAsync(&FraudDetectorClient::CreateVariable, __VA_ARGS__)
#define CreateVariableCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::CreateVariable, REQUEST)

#define DeleteBatchImportJobAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteBatchImportJob, __VA_ARGS__)
#define DeleteBatchImportJobCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteBatchImportJob, REQUEST)

#define DeleteBatchPredictionJobAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteBatchPredictionJob, __VA_ARGS__)
#define DeleteBatchPredictionJobCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteBatchPredictionJob, REQUEST)

#define DeleteDetectorAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteDetector, __VA_ARGS__)
#define DeleteDetectorCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteDetector, REQUEST)

#define DeleteDetectorVersionAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteDetectorVersion, __VA_ARGS__)
#define DeleteDetectorVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteDetectorVersion, REQUEST)

#define DeleteEntityTypeAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteEntityType, __VA_ARGS__)
#define DeleteEntityTypeCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteEntityType, REQUEST)

#define DeleteEventAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteEvent, __VA_ARGS__)
#define DeleteEventCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteEvent, REQUEST)

#define DeleteEventTypeAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteEventType, __VA_ARGS__)
#define DeleteEventTypeCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteEventType, REQUEST)

#define DeleteEventsByEventTypeAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteEventsByEventType, __VA_ARGS__)
#define DeleteEventsByEventTypeCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteEventsByEventType, REQUEST)

#define DeleteExternalModelAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteExternalModel, __VA_ARGS__)
#define DeleteExternalModelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteExternalModel, REQUEST)

#define DeleteLabelAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteLabel, __VA_ARGS__)
#define DeleteLabelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteLabel, REQUEST)

#define DeleteModelAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteModel, __VA_ARGS__)
#define DeleteModelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteModel, REQUEST)

#define DeleteModelVersionAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteModelVersion, __VA_ARGS__)
#define DeleteModelVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteModelVersion, REQUEST)

#define DeleteOutcomeAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteOutcome, __VA_ARGS__)
#define DeleteOutcomeCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteOutcome, REQUEST)

#define DeleteRuleAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteRule, __VA_ARGS__)
#define DeleteRuleCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteRule, REQUEST)

#define DeleteVariableAsync(...)  SubmitAsync(&FraudDetectorClient::DeleteVariable, __VA_ARGS__)
#define DeleteVariableCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DeleteVariable, REQUEST)

#define DescribeDetectorAsync(...)  SubmitAsync(&FraudDetectorClient::DescribeDetector, __VA_ARGS__)
#define DescribeDetectorCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DescribeDetector, REQUEST)

#define DescribeModelVersionsAsync(...)  SubmitAsync(&FraudDetectorClient::DescribeModelVersions, __VA_ARGS__)
#define DescribeModelVersionsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::DescribeModelVersions, REQUEST)

#define GetBatchImportJobsAsync(...)  SubmitAsync(&FraudDetectorClient::GetBatchImportJobs, __VA_ARGS__)
#define GetBatchImportJobsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetBatchImportJobs, REQUEST)

#define GetBatchPredictionJobsAsync(...)  SubmitAsync(&FraudDetectorClient::GetBatchPredictionJobs, __VA_ARGS__)
#define GetBatchPredictionJobsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetBatchPredictionJobs, REQUEST)

#define GetDeleteEventsByEventTypeStatusAsync(...)  SubmitAsync(&FraudDetectorClient::GetDeleteEventsByEventTypeStatus, __VA_ARGS__)
#define GetDeleteEventsByEventTypeStatusCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetDeleteEventsByEventTypeStatus, REQUEST)

#define GetDetectorVersionAsync(...)  SubmitAsync(&FraudDetectorClient::GetDetectorVersion, __VA_ARGS__)
#define GetDetectorVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetDetectorVersion, REQUEST)

#define GetDetectorsAsync(...)  SubmitAsync(&FraudDetectorClient::GetDetectors, __VA_ARGS__)
#define GetDetectorsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetDetectors, REQUEST)

#define GetEntityTypesAsync(...)  SubmitAsync(&FraudDetectorClient::GetEntityTypes, __VA_ARGS__)
#define GetEntityTypesCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetEntityTypes, REQUEST)

#define GetEventAsync(...)  SubmitAsync(&FraudDetectorClient::GetEvent, __VA_ARGS__)
#define GetEventCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetEvent, REQUEST)

#define GetEventPredictionAsync(...)  SubmitAsync(&FraudDetectorClient::GetEventPrediction, __VA_ARGS__)
#define GetEventPredictionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetEventPrediction, REQUEST)

#define GetEventPredictionMetadataAsync(...)  SubmitAsync(&FraudDetectorClient::GetEventPredictionMetadata, __VA_ARGS__)
#define GetEventPredictionMetadataCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetEventPredictionMetadata, REQUEST)

#define GetEventTypesAsync(...)  SubmitAsync(&FraudDetectorClient::GetEventTypes, __VA_ARGS__)
#define GetEventTypesCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetEventTypes, REQUEST)

#define GetExternalModelsAsync(...)  SubmitAsync(&FraudDetectorClient::GetExternalModels, __VA_ARGS__)
#define GetExternalModelsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetExternalModels, REQUEST)


#define GetLabelsAsync(...)  SubmitAsync(&FraudDetectorClient::GetLabels, __VA_ARGS__)
#define GetLabelsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetLabels, REQUEST)

#define GetModelVersionAsync(...)  SubmitAsync(&FraudDetectorClient::GetModelVersion, __VA_ARGS__)
#define GetModelVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetModelVersion, REQUEST)

#define GetModelsAsync(...)  SubmitAsync(&FraudDetectorClient::GetModels, __VA_ARGS__)
#define GetModelsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetModels, REQUEST)

#define GetOutcomesAsync(...)  SubmitAsync(&FraudDetectorClient::GetOutcomes, __VA_ARGS__)
#define GetOutcomesCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetOutcomes, REQUEST)

#define GetRulesAsync(...)  SubmitAsync(&FraudDetectorClient::GetRules, __VA_ARGS__)
#define GetRulesCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetRules, REQUEST)

#define GetVariablesAsync(...)  SubmitAsync(&FraudDetectorClient::GetVariables, __VA_ARGS__)
#define GetVariablesCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::GetVariables, REQUEST)

#define ListEventPredictionsAsync(...)  SubmitAsync(&FraudDetectorClient::ListEventPredictions, __VA_ARGS__)
#define ListEventPredictionsCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::ListEventPredictions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&FraudDetectorClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::ListTagsForResource, REQUEST)

#define PutDetectorAsync(...)  SubmitAsync(&FraudDetectorClient::PutDetector, __VA_ARGS__)
#define PutDetectorCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::PutDetector, REQUEST)

#define PutEntityTypeAsync(...)  SubmitAsync(&FraudDetectorClient::PutEntityType, __VA_ARGS__)
#define PutEntityTypeCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::PutEntityType, REQUEST)

#define PutEventTypeAsync(...)  SubmitAsync(&FraudDetectorClient::PutEventType, __VA_ARGS__)
#define PutEventTypeCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::PutEventType, REQUEST)

#define PutExternalModelAsync(...)  SubmitAsync(&FraudDetectorClient::PutExternalModel, __VA_ARGS__)
#define PutExternalModelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::PutExternalModel, REQUEST)

#define PutKMSEncryptionKeyAsync(...)  SubmitAsync(&FraudDetectorClient::PutKMSEncryptionKey, __VA_ARGS__)
#define PutKMSEncryptionKeyCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::PutKMSEncryptionKey, REQUEST)

#define PutLabelAsync(...)  SubmitAsync(&FraudDetectorClient::PutLabel, __VA_ARGS__)
#define PutLabelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::PutLabel, REQUEST)

#define PutOutcomeAsync(...)  SubmitAsync(&FraudDetectorClient::PutOutcome, __VA_ARGS__)
#define PutOutcomeCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::PutOutcome, REQUEST)

#define SendEventAsync(...)  SubmitAsync(&FraudDetectorClient::SendEvent, __VA_ARGS__)
#define SendEventCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::SendEvent, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&FraudDetectorClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&FraudDetectorClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UntagResource, REQUEST)

#define UpdateDetectorVersionAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateDetectorVersion, __VA_ARGS__)
#define UpdateDetectorVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateDetectorVersion, REQUEST)

#define UpdateDetectorVersionMetadataAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateDetectorVersionMetadata, __VA_ARGS__)
#define UpdateDetectorVersionMetadataCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateDetectorVersionMetadata, REQUEST)

#define UpdateDetectorVersionStatusAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateDetectorVersionStatus, __VA_ARGS__)
#define UpdateDetectorVersionStatusCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateDetectorVersionStatus, REQUEST)

#define UpdateEventLabelAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateEventLabel, __VA_ARGS__)
#define UpdateEventLabelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateEventLabel, REQUEST)

#define UpdateModelAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateModel, __VA_ARGS__)
#define UpdateModelCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateModel, REQUEST)

#define UpdateModelVersionAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateModelVersion, __VA_ARGS__)
#define UpdateModelVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateModelVersion, REQUEST)

#define UpdateModelVersionStatusAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateModelVersionStatus, __VA_ARGS__)
#define UpdateModelVersionStatusCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateModelVersionStatus, REQUEST)

#define UpdateRuleMetadataAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateRuleMetadata, __VA_ARGS__)
#define UpdateRuleMetadataCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateRuleMetadata, REQUEST)

#define UpdateRuleVersionAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateRuleVersion, __VA_ARGS__)
#define UpdateRuleVersionCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateRuleVersion, REQUEST)

#define UpdateVariableAsync(...)  SubmitAsync(&FraudDetectorClient::UpdateVariable, __VA_ARGS__)
#define UpdateVariableCallable(REQUEST)  SubmitCallable(&FraudDetectorClient::UpdateVariable, REQUEST)

