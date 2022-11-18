/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptQualificationRequestAsync(...)  SubmitAsync(&MTurkClient::AcceptQualificationRequest, __VA_ARGS__)
#define AcceptQualificationRequestCallable(REQUEST)  SubmitCallable(&MTurkClient::AcceptQualificationRequest, REQUEST)

#define ApproveAssignmentAsync(...)  SubmitAsync(&MTurkClient::ApproveAssignment, __VA_ARGS__)
#define ApproveAssignmentCallable(REQUEST)  SubmitCallable(&MTurkClient::ApproveAssignment, REQUEST)

#define AssociateQualificationWithWorkerAsync(...)  SubmitAsync(&MTurkClient::AssociateQualificationWithWorker, __VA_ARGS__)
#define AssociateQualificationWithWorkerCallable(REQUEST)  SubmitCallable(&MTurkClient::AssociateQualificationWithWorker, REQUEST)

#define CreateAdditionalAssignmentsForHITAsync(...)  SubmitAsync(&MTurkClient::CreateAdditionalAssignmentsForHIT, __VA_ARGS__)
#define CreateAdditionalAssignmentsForHITCallable(REQUEST)  SubmitCallable(&MTurkClient::CreateAdditionalAssignmentsForHIT, REQUEST)

#define CreateHITAsync(...)  SubmitAsync(&MTurkClient::CreateHIT, __VA_ARGS__)
#define CreateHITCallable(REQUEST)  SubmitCallable(&MTurkClient::CreateHIT, REQUEST)

#define CreateHITTypeAsync(...)  SubmitAsync(&MTurkClient::CreateHITType, __VA_ARGS__)
#define CreateHITTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::CreateHITType, REQUEST)

#define CreateHITWithHITTypeAsync(...)  SubmitAsync(&MTurkClient::CreateHITWithHITType, __VA_ARGS__)
#define CreateHITWithHITTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::CreateHITWithHITType, REQUEST)

#define CreateQualificationTypeAsync(...)  SubmitAsync(&MTurkClient::CreateQualificationType, __VA_ARGS__)
#define CreateQualificationTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::CreateQualificationType, REQUEST)

#define CreateWorkerBlockAsync(...)  SubmitAsync(&MTurkClient::CreateWorkerBlock, __VA_ARGS__)
#define CreateWorkerBlockCallable(REQUEST)  SubmitCallable(&MTurkClient::CreateWorkerBlock, REQUEST)

#define DeleteHITAsync(...)  SubmitAsync(&MTurkClient::DeleteHIT, __VA_ARGS__)
#define DeleteHITCallable(REQUEST)  SubmitCallable(&MTurkClient::DeleteHIT, REQUEST)

#define DeleteQualificationTypeAsync(...)  SubmitAsync(&MTurkClient::DeleteQualificationType, __VA_ARGS__)
#define DeleteQualificationTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::DeleteQualificationType, REQUEST)

#define DeleteWorkerBlockAsync(...)  SubmitAsync(&MTurkClient::DeleteWorkerBlock, __VA_ARGS__)
#define DeleteWorkerBlockCallable(REQUEST)  SubmitCallable(&MTurkClient::DeleteWorkerBlock, REQUEST)

#define DisassociateQualificationFromWorkerAsync(...)  SubmitAsync(&MTurkClient::DisassociateQualificationFromWorker, __VA_ARGS__)
#define DisassociateQualificationFromWorkerCallable(REQUEST)  SubmitCallable(&MTurkClient::DisassociateQualificationFromWorker, REQUEST)

#define GetAccountBalanceAsync(...)  SubmitAsync(&MTurkClient::GetAccountBalance, __VA_ARGS__)
#define GetAccountBalanceCallable(REQUEST)  SubmitCallable(&MTurkClient::GetAccountBalance, REQUEST)

#define GetAssignmentAsync(...)  SubmitAsync(&MTurkClient::GetAssignment, __VA_ARGS__)
#define GetAssignmentCallable(REQUEST)  SubmitCallable(&MTurkClient::GetAssignment, REQUEST)

#define GetFileUploadURLAsync(...)  SubmitAsync(&MTurkClient::GetFileUploadURL, __VA_ARGS__)
#define GetFileUploadURLCallable(REQUEST)  SubmitCallable(&MTurkClient::GetFileUploadURL, REQUEST)

#define GetHITAsync(...)  SubmitAsync(&MTurkClient::GetHIT, __VA_ARGS__)
#define GetHITCallable(REQUEST)  SubmitCallable(&MTurkClient::GetHIT, REQUEST)

#define GetQualificationScoreAsync(...)  SubmitAsync(&MTurkClient::GetQualificationScore, __VA_ARGS__)
#define GetQualificationScoreCallable(REQUEST)  SubmitCallable(&MTurkClient::GetQualificationScore, REQUEST)

#define GetQualificationTypeAsync(...)  SubmitAsync(&MTurkClient::GetQualificationType, __VA_ARGS__)
#define GetQualificationTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::GetQualificationType, REQUEST)

#define ListAssignmentsForHITAsync(...)  SubmitAsync(&MTurkClient::ListAssignmentsForHIT, __VA_ARGS__)
#define ListAssignmentsForHITCallable(REQUEST)  SubmitCallable(&MTurkClient::ListAssignmentsForHIT, REQUEST)

#define ListBonusPaymentsAsync(...)  SubmitAsync(&MTurkClient::ListBonusPayments, __VA_ARGS__)
#define ListBonusPaymentsCallable(REQUEST)  SubmitCallable(&MTurkClient::ListBonusPayments, REQUEST)

#define ListHITsAsync(...)  SubmitAsync(&MTurkClient::ListHITs, __VA_ARGS__)
#define ListHITsCallable(REQUEST)  SubmitCallable(&MTurkClient::ListHITs, REQUEST)

#define ListHITsForQualificationTypeAsync(...)  SubmitAsync(&MTurkClient::ListHITsForQualificationType, __VA_ARGS__)
#define ListHITsForQualificationTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::ListHITsForQualificationType, REQUEST)

#define ListQualificationRequestsAsync(...)  SubmitAsync(&MTurkClient::ListQualificationRequests, __VA_ARGS__)
#define ListQualificationRequestsCallable(REQUEST)  SubmitCallable(&MTurkClient::ListQualificationRequests, REQUEST)

#define ListQualificationTypesAsync(...)  SubmitAsync(&MTurkClient::ListQualificationTypes, __VA_ARGS__)
#define ListQualificationTypesCallable(REQUEST)  SubmitCallable(&MTurkClient::ListQualificationTypes, REQUEST)

#define ListReviewPolicyResultsForHITAsync(...)  SubmitAsync(&MTurkClient::ListReviewPolicyResultsForHIT, __VA_ARGS__)
#define ListReviewPolicyResultsForHITCallable(REQUEST)  SubmitCallable(&MTurkClient::ListReviewPolicyResultsForHIT, REQUEST)

#define ListReviewableHITsAsync(...)  SubmitAsync(&MTurkClient::ListReviewableHITs, __VA_ARGS__)
#define ListReviewableHITsCallable(REQUEST)  SubmitCallable(&MTurkClient::ListReviewableHITs, REQUEST)

#define ListWorkerBlocksAsync(...)  SubmitAsync(&MTurkClient::ListWorkerBlocks, __VA_ARGS__)
#define ListWorkerBlocksCallable(REQUEST)  SubmitCallable(&MTurkClient::ListWorkerBlocks, REQUEST)

#define ListWorkersWithQualificationTypeAsync(...)  SubmitAsync(&MTurkClient::ListWorkersWithQualificationType, __VA_ARGS__)
#define ListWorkersWithQualificationTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::ListWorkersWithQualificationType, REQUEST)

#define NotifyWorkersAsync(...)  SubmitAsync(&MTurkClient::NotifyWorkers, __VA_ARGS__)
#define NotifyWorkersCallable(REQUEST)  SubmitCallable(&MTurkClient::NotifyWorkers, REQUEST)

#define RejectAssignmentAsync(...)  SubmitAsync(&MTurkClient::RejectAssignment, __VA_ARGS__)
#define RejectAssignmentCallable(REQUEST)  SubmitCallable(&MTurkClient::RejectAssignment, REQUEST)

#define RejectQualificationRequestAsync(...)  SubmitAsync(&MTurkClient::RejectQualificationRequest, __VA_ARGS__)
#define RejectQualificationRequestCallable(REQUEST)  SubmitCallable(&MTurkClient::RejectQualificationRequest, REQUEST)

#define SendBonusAsync(...)  SubmitAsync(&MTurkClient::SendBonus, __VA_ARGS__)
#define SendBonusCallable(REQUEST)  SubmitCallable(&MTurkClient::SendBonus, REQUEST)

#define SendTestEventNotificationAsync(...)  SubmitAsync(&MTurkClient::SendTestEventNotification, __VA_ARGS__)
#define SendTestEventNotificationCallable(REQUEST)  SubmitCallable(&MTurkClient::SendTestEventNotification, REQUEST)

#define UpdateExpirationForHITAsync(...)  SubmitAsync(&MTurkClient::UpdateExpirationForHIT, __VA_ARGS__)
#define UpdateExpirationForHITCallable(REQUEST)  SubmitCallable(&MTurkClient::UpdateExpirationForHIT, REQUEST)

#define UpdateHITReviewStatusAsync(...)  SubmitAsync(&MTurkClient::UpdateHITReviewStatus, __VA_ARGS__)
#define UpdateHITReviewStatusCallable(REQUEST)  SubmitCallable(&MTurkClient::UpdateHITReviewStatus, REQUEST)

#define UpdateHITTypeOfHITAsync(...)  SubmitAsync(&MTurkClient::UpdateHITTypeOfHIT, __VA_ARGS__)
#define UpdateHITTypeOfHITCallable(REQUEST)  SubmitCallable(&MTurkClient::UpdateHITTypeOfHIT, REQUEST)

#define UpdateNotificationSettingsAsync(...)  SubmitAsync(&MTurkClient::UpdateNotificationSettings, __VA_ARGS__)
#define UpdateNotificationSettingsCallable(REQUEST)  SubmitCallable(&MTurkClient::UpdateNotificationSettings, REQUEST)

#define UpdateQualificationTypeAsync(...)  SubmitAsync(&MTurkClient::UpdateQualificationType, __VA_ARGS__)
#define UpdateQualificationTypeCallable(REQUEST)  SubmitCallable(&MTurkClient::UpdateQualificationType, REQUEST)

