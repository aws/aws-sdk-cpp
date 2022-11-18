/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateAssessmentReportEvidenceFolderAsync(...)  SubmitAsync(&AuditManagerClient::AssociateAssessmentReportEvidenceFolder, __VA_ARGS__)
#define AssociateAssessmentReportEvidenceFolderCallable(REQUEST)  SubmitCallable(&AuditManagerClient::AssociateAssessmentReportEvidenceFolder, REQUEST)

#define BatchAssociateAssessmentReportEvidenceAsync(...)  SubmitAsync(&AuditManagerClient::BatchAssociateAssessmentReportEvidence, __VA_ARGS__)
#define BatchAssociateAssessmentReportEvidenceCallable(REQUEST)  SubmitCallable(&AuditManagerClient::BatchAssociateAssessmentReportEvidence, REQUEST)

#define BatchCreateDelegationByAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::BatchCreateDelegationByAssessment, __VA_ARGS__)
#define BatchCreateDelegationByAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::BatchCreateDelegationByAssessment, REQUEST)

#define BatchDeleteDelegationByAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::BatchDeleteDelegationByAssessment, __VA_ARGS__)
#define BatchDeleteDelegationByAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::BatchDeleteDelegationByAssessment, REQUEST)

#define BatchDisassociateAssessmentReportEvidenceAsync(...)  SubmitAsync(&AuditManagerClient::BatchDisassociateAssessmentReportEvidence, __VA_ARGS__)
#define BatchDisassociateAssessmentReportEvidenceCallable(REQUEST)  SubmitCallable(&AuditManagerClient::BatchDisassociateAssessmentReportEvidence, REQUEST)

#define BatchImportEvidenceToAssessmentControlAsync(...)  SubmitAsync(&AuditManagerClient::BatchImportEvidenceToAssessmentControl, __VA_ARGS__)
#define BatchImportEvidenceToAssessmentControlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::BatchImportEvidenceToAssessmentControl, REQUEST)

#define CreateAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::CreateAssessment, __VA_ARGS__)
#define CreateAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::CreateAssessment, REQUEST)

#define CreateAssessmentFrameworkAsync(...)  SubmitAsync(&AuditManagerClient::CreateAssessmentFramework, __VA_ARGS__)
#define CreateAssessmentFrameworkCallable(REQUEST)  SubmitCallable(&AuditManagerClient::CreateAssessmentFramework, REQUEST)

#define CreateAssessmentReportAsync(...)  SubmitAsync(&AuditManagerClient::CreateAssessmentReport, __VA_ARGS__)
#define CreateAssessmentReportCallable(REQUEST)  SubmitCallable(&AuditManagerClient::CreateAssessmentReport, REQUEST)

#define CreateControlAsync(...)  SubmitAsync(&AuditManagerClient::CreateControl, __VA_ARGS__)
#define CreateControlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::CreateControl, REQUEST)

#define DeleteAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::DeleteAssessment, __VA_ARGS__)
#define DeleteAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DeleteAssessment, REQUEST)

#define DeleteAssessmentFrameworkAsync(...)  SubmitAsync(&AuditManagerClient::DeleteAssessmentFramework, __VA_ARGS__)
#define DeleteAssessmentFrameworkCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DeleteAssessmentFramework, REQUEST)

#define DeleteAssessmentFrameworkShareAsync(...)  SubmitAsync(&AuditManagerClient::DeleteAssessmentFrameworkShare, __VA_ARGS__)
#define DeleteAssessmentFrameworkShareCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DeleteAssessmentFrameworkShare, REQUEST)

#define DeleteAssessmentReportAsync(...)  SubmitAsync(&AuditManagerClient::DeleteAssessmentReport, __VA_ARGS__)
#define DeleteAssessmentReportCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DeleteAssessmentReport, REQUEST)

#define DeleteControlAsync(...)  SubmitAsync(&AuditManagerClient::DeleteControl, __VA_ARGS__)
#define DeleteControlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DeleteControl, REQUEST)

#define DeregisterAccountAsync(...)  SubmitAsync(&AuditManagerClient::DeregisterAccount, __VA_ARGS__)
#define DeregisterAccountCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DeregisterAccount, REQUEST)

#define DeregisterOrganizationAdminAccountAsync(...)  SubmitAsync(&AuditManagerClient::DeregisterOrganizationAdminAccount, __VA_ARGS__)
#define DeregisterOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DeregisterOrganizationAdminAccount, REQUEST)

#define DisassociateAssessmentReportEvidenceFolderAsync(...)  SubmitAsync(&AuditManagerClient::DisassociateAssessmentReportEvidenceFolder, __VA_ARGS__)
#define DisassociateAssessmentReportEvidenceFolderCallable(REQUEST)  SubmitCallable(&AuditManagerClient::DisassociateAssessmentReportEvidenceFolder, REQUEST)

#define GetAccountStatusAsync(...)  SubmitAsync(&AuditManagerClient::GetAccountStatus, __VA_ARGS__)
#define GetAccountStatusCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetAccountStatus, REQUEST)

#define GetAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::GetAssessment, __VA_ARGS__)
#define GetAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetAssessment, REQUEST)

#define GetAssessmentFrameworkAsync(...)  SubmitAsync(&AuditManagerClient::GetAssessmentFramework, __VA_ARGS__)
#define GetAssessmentFrameworkCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetAssessmentFramework, REQUEST)

#define GetAssessmentReportUrlAsync(...)  SubmitAsync(&AuditManagerClient::GetAssessmentReportUrl, __VA_ARGS__)
#define GetAssessmentReportUrlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetAssessmentReportUrl, REQUEST)

#define GetChangeLogsAsync(...)  SubmitAsync(&AuditManagerClient::GetChangeLogs, __VA_ARGS__)
#define GetChangeLogsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetChangeLogs, REQUEST)

#define GetControlAsync(...)  SubmitAsync(&AuditManagerClient::GetControl, __VA_ARGS__)
#define GetControlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetControl, REQUEST)

#define GetDelegationsAsync(...)  SubmitAsync(&AuditManagerClient::GetDelegations, __VA_ARGS__)
#define GetDelegationsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetDelegations, REQUEST)

#define GetEvidenceAsync(...)  SubmitAsync(&AuditManagerClient::GetEvidence, __VA_ARGS__)
#define GetEvidenceCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetEvidence, REQUEST)

#define GetEvidenceByEvidenceFolderAsync(...)  SubmitAsync(&AuditManagerClient::GetEvidenceByEvidenceFolder, __VA_ARGS__)
#define GetEvidenceByEvidenceFolderCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetEvidenceByEvidenceFolder, REQUEST)

#define GetEvidenceFolderAsync(...)  SubmitAsync(&AuditManagerClient::GetEvidenceFolder, __VA_ARGS__)
#define GetEvidenceFolderCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetEvidenceFolder, REQUEST)

#define GetEvidenceFoldersByAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::GetEvidenceFoldersByAssessment, __VA_ARGS__)
#define GetEvidenceFoldersByAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetEvidenceFoldersByAssessment, REQUEST)

#define GetEvidenceFoldersByAssessmentControlAsync(...)  SubmitAsync(&AuditManagerClient::GetEvidenceFoldersByAssessmentControl, __VA_ARGS__)
#define GetEvidenceFoldersByAssessmentControlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetEvidenceFoldersByAssessmentControl, REQUEST)

#define GetInsightsAsync(...)  SubmitAsync(&AuditManagerClient::GetInsights, __VA_ARGS__)
#define GetInsightsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetInsights, REQUEST)

#define GetInsightsByAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::GetInsightsByAssessment, __VA_ARGS__)
#define GetInsightsByAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetInsightsByAssessment, REQUEST)

#define GetOrganizationAdminAccountAsync(...)  SubmitAsync(&AuditManagerClient::GetOrganizationAdminAccount, __VA_ARGS__)
#define GetOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetOrganizationAdminAccount, REQUEST)

#define GetServicesInScopeAsync(...)  SubmitAsync(&AuditManagerClient::GetServicesInScope, __VA_ARGS__)
#define GetServicesInScopeCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetServicesInScope, REQUEST)

#define GetSettingsAsync(...)  SubmitAsync(&AuditManagerClient::GetSettings, __VA_ARGS__)
#define GetSettingsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::GetSettings, REQUEST)

#define ListAssessmentControlInsightsByControlDomainAsync(...)  SubmitAsync(&AuditManagerClient::ListAssessmentControlInsightsByControlDomain, __VA_ARGS__)
#define ListAssessmentControlInsightsByControlDomainCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListAssessmentControlInsightsByControlDomain, REQUEST)

#define ListAssessmentFrameworkShareRequestsAsync(...)  SubmitAsync(&AuditManagerClient::ListAssessmentFrameworkShareRequests, __VA_ARGS__)
#define ListAssessmentFrameworkShareRequestsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListAssessmentFrameworkShareRequests, REQUEST)

#define ListAssessmentFrameworksAsync(...)  SubmitAsync(&AuditManagerClient::ListAssessmentFrameworks, __VA_ARGS__)
#define ListAssessmentFrameworksCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListAssessmentFrameworks, REQUEST)

#define ListAssessmentReportsAsync(...)  SubmitAsync(&AuditManagerClient::ListAssessmentReports, __VA_ARGS__)
#define ListAssessmentReportsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListAssessmentReports, REQUEST)

#define ListAssessmentsAsync(...)  SubmitAsync(&AuditManagerClient::ListAssessments, __VA_ARGS__)
#define ListAssessmentsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListAssessments, REQUEST)

#define ListControlDomainInsightsAsync(...)  SubmitAsync(&AuditManagerClient::ListControlDomainInsights, __VA_ARGS__)
#define ListControlDomainInsightsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListControlDomainInsights, REQUEST)

#define ListControlDomainInsightsByAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::ListControlDomainInsightsByAssessment, __VA_ARGS__)
#define ListControlDomainInsightsByAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListControlDomainInsightsByAssessment, REQUEST)

#define ListControlInsightsByControlDomainAsync(...)  SubmitAsync(&AuditManagerClient::ListControlInsightsByControlDomain, __VA_ARGS__)
#define ListControlInsightsByControlDomainCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListControlInsightsByControlDomain, REQUEST)

#define ListControlsAsync(...)  SubmitAsync(&AuditManagerClient::ListControls, __VA_ARGS__)
#define ListControlsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListControls, REQUEST)

#define ListKeywordsForDataSourceAsync(...)  SubmitAsync(&AuditManagerClient::ListKeywordsForDataSource, __VA_ARGS__)
#define ListKeywordsForDataSourceCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListKeywordsForDataSource, REQUEST)

#define ListNotificationsAsync(...)  SubmitAsync(&AuditManagerClient::ListNotifications, __VA_ARGS__)
#define ListNotificationsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListNotifications, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AuditManagerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ListTagsForResource, REQUEST)

#define RegisterAccountAsync(...)  SubmitAsync(&AuditManagerClient::RegisterAccount, __VA_ARGS__)
#define RegisterAccountCallable(REQUEST)  SubmitCallable(&AuditManagerClient::RegisterAccount, REQUEST)

#define RegisterOrganizationAdminAccountAsync(...)  SubmitAsync(&AuditManagerClient::RegisterOrganizationAdminAccount, __VA_ARGS__)
#define RegisterOrganizationAdminAccountCallable(REQUEST)  SubmitCallable(&AuditManagerClient::RegisterOrganizationAdminAccount, REQUEST)

#define StartAssessmentFrameworkShareAsync(...)  SubmitAsync(&AuditManagerClient::StartAssessmentFrameworkShare, __VA_ARGS__)
#define StartAssessmentFrameworkShareCallable(REQUEST)  SubmitCallable(&AuditManagerClient::StartAssessmentFrameworkShare, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AuditManagerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AuditManagerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AuditManagerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UntagResource, REQUEST)

#define UpdateAssessmentAsync(...)  SubmitAsync(&AuditManagerClient::UpdateAssessment, __VA_ARGS__)
#define UpdateAssessmentCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateAssessment, REQUEST)

#define UpdateAssessmentControlAsync(...)  SubmitAsync(&AuditManagerClient::UpdateAssessmentControl, __VA_ARGS__)
#define UpdateAssessmentControlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateAssessmentControl, REQUEST)

#define UpdateAssessmentControlSetStatusAsync(...)  SubmitAsync(&AuditManagerClient::UpdateAssessmentControlSetStatus, __VA_ARGS__)
#define UpdateAssessmentControlSetStatusCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateAssessmentControlSetStatus, REQUEST)

#define UpdateAssessmentFrameworkAsync(...)  SubmitAsync(&AuditManagerClient::UpdateAssessmentFramework, __VA_ARGS__)
#define UpdateAssessmentFrameworkCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateAssessmentFramework, REQUEST)

#define UpdateAssessmentFrameworkShareAsync(...)  SubmitAsync(&AuditManagerClient::UpdateAssessmentFrameworkShare, __VA_ARGS__)
#define UpdateAssessmentFrameworkShareCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateAssessmentFrameworkShare, REQUEST)

#define UpdateAssessmentStatusAsync(...)  SubmitAsync(&AuditManagerClient::UpdateAssessmentStatus, __VA_ARGS__)
#define UpdateAssessmentStatusCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateAssessmentStatus, REQUEST)

#define UpdateControlAsync(...)  SubmitAsync(&AuditManagerClient::UpdateControl, __VA_ARGS__)
#define UpdateControlCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateControl, REQUEST)

#define UpdateSettingsAsync(...)  SubmitAsync(&AuditManagerClient::UpdateSettings, __VA_ARGS__)
#define UpdateSettingsCallable(REQUEST)  SubmitCallable(&AuditManagerClient::UpdateSettings, REQUEST)

#define ValidateAssessmentReportIntegrityAsync(...)  SubmitAsync(&AuditManagerClient::ValidateAssessmentReportIntegrity, __VA_ARGS__)
#define ValidateAssessmentReportIntegrityCallable(REQUEST)  SubmitCallable(&AuditManagerClient::ValidateAssessmentReportIntegrity, REQUEST)

