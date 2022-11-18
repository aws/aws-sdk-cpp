/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateBackupPlanAsync(...)  SubmitAsync(&BackupClient::CreateBackupPlan, __VA_ARGS__)
#define CreateBackupPlanCallable(REQUEST)  SubmitCallable(&BackupClient::CreateBackupPlan, REQUEST)

#define CreateBackupSelectionAsync(...)  SubmitAsync(&BackupClient::CreateBackupSelection, __VA_ARGS__)
#define CreateBackupSelectionCallable(REQUEST)  SubmitCallable(&BackupClient::CreateBackupSelection, REQUEST)

#define CreateBackupVaultAsync(...)  SubmitAsync(&BackupClient::CreateBackupVault, __VA_ARGS__)
#define CreateBackupVaultCallable(REQUEST)  SubmitCallable(&BackupClient::CreateBackupVault, REQUEST)

#define CreateFrameworkAsync(...)  SubmitAsync(&BackupClient::CreateFramework, __VA_ARGS__)
#define CreateFrameworkCallable(REQUEST)  SubmitCallable(&BackupClient::CreateFramework, REQUEST)

#define CreateReportPlanAsync(...)  SubmitAsync(&BackupClient::CreateReportPlan, __VA_ARGS__)
#define CreateReportPlanCallable(REQUEST)  SubmitCallable(&BackupClient::CreateReportPlan, REQUEST)

#define DeleteBackupPlanAsync(...)  SubmitAsync(&BackupClient::DeleteBackupPlan, __VA_ARGS__)
#define DeleteBackupPlanCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteBackupPlan, REQUEST)

#define DeleteBackupSelectionAsync(...)  SubmitAsync(&BackupClient::DeleteBackupSelection, __VA_ARGS__)
#define DeleteBackupSelectionCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteBackupSelection, REQUEST)

#define DeleteBackupVaultAsync(...)  SubmitAsync(&BackupClient::DeleteBackupVault, __VA_ARGS__)
#define DeleteBackupVaultCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteBackupVault, REQUEST)

#define DeleteBackupVaultAccessPolicyAsync(...)  SubmitAsync(&BackupClient::DeleteBackupVaultAccessPolicy, __VA_ARGS__)
#define DeleteBackupVaultAccessPolicyCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteBackupVaultAccessPolicy, REQUEST)

#define DeleteBackupVaultLockConfigurationAsync(...)  SubmitAsync(&BackupClient::DeleteBackupVaultLockConfiguration, __VA_ARGS__)
#define DeleteBackupVaultLockConfigurationCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteBackupVaultLockConfiguration, REQUEST)

#define DeleteBackupVaultNotificationsAsync(...)  SubmitAsync(&BackupClient::DeleteBackupVaultNotifications, __VA_ARGS__)
#define DeleteBackupVaultNotificationsCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteBackupVaultNotifications, REQUEST)

#define DeleteFrameworkAsync(...)  SubmitAsync(&BackupClient::DeleteFramework, __VA_ARGS__)
#define DeleteFrameworkCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteFramework, REQUEST)

#define DeleteRecoveryPointAsync(...)  SubmitAsync(&BackupClient::DeleteRecoveryPoint, __VA_ARGS__)
#define DeleteRecoveryPointCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteRecoveryPoint, REQUEST)

#define DeleteReportPlanAsync(...)  SubmitAsync(&BackupClient::DeleteReportPlan, __VA_ARGS__)
#define DeleteReportPlanCallable(REQUEST)  SubmitCallable(&BackupClient::DeleteReportPlan, REQUEST)

#define DescribeBackupJobAsync(...)  SubmitAsync(&BackupClient::DescribeBackupJob, __VA_ARGS__)
#define DescribeBackupJobCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeBackupJob, REQUEST)

#define DescribeBackupVaultAsync(...)  SubmitAsync(&BackupClient::DescribeBackupVault, __VA_ARGS__)
#define DescribeBackupVaultCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeBackupVault, REQUEST)

#define DescribeCopyJobAsync(...)  SubmitAsync(&BackupClient::DescribeCopyJob, __VA_ARGS__)
#define DescribeCopyJobCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeCopyJob, REQUEST)

#define DescribeFrameworkAsync(...)  SubmitAsync(&BackupClient::DescribeFramework, __VA_ARGS__)
#define DescribeFrameworkCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeFramework, REQUEST)

#define DescribeGlobalSettingsAsync(...)  SubmitAsync(&BackupClient::DescribeGlobalSettings, __VA_ARGS__)
#define DescribeGlobalSettingsCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeGlobalSettings, REQUEST)

#define DescribeProtectedResourceAsync(...)  SubmitAsync(&BackupClient::DescribeProtectedResource, __VA_ARGS__)
#define DescribeProtectedResourceCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeProtectedResource, REQUEST)

#define DescribeRecoveryPointAsync(...)  SubmitAsync(&BackupClient::DescribeRecoveryPoint, __VA_ARGS__)
#define DescribeRecoveryPointCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeRecoveryPoint, REQUEST)

#define DescribeRegionSettingsAsync(...)  SubmitAsync(&BackupClient::DescribeRegionSettings, __VA_ARGS__)
#define DescribeRegionSettingsCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeRegionSettings, REQUEST)

#define DescribeReportJobAsync(...)  SubmitAsync(&BackupClient::DescribeReportJob, __VA_ARGS__)
#define DescribeReportJobCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeReportJob, REQUEST)

#define DescribeReportPlanAsync(...)  SubmitAsync(&BackupClient::DescribeReportPlan, __VA_ARGS__)
#define DescribeReportPlanCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeReportPlan, REQUEST)

#define DescribeRestoreJobAsync(...)  SubmitAsync(&BackupClient::DescribeRestoreJob, __VA_ARGS__)
#define DescribeRestoreJobCallable(REQUEST)  SubmitCallable(&BackupClient::DescribeRestoreJob, REQUEST)

#define DisassociateRecoveryPointAsync(...)  SubmitAsync(&BackupClient::DisassociateRecoveryPoint, __VA_ARGS__)
#define DisassociateRecoveryPointCallable(REQUEST)  SubmitCallable(&BackupClient::DisassociateRecoveryPoint, REQUEST)

#define ExportBackupPlanTemplateAsync(...)  SubmitAsync(&BackupClient::ExportBackupPlanTemplate, __VA_ARGS__)
#define ExportBackupPlanTemplateCallable(REQUEST)  SubmitCallable(&BackupClient::ExportBackupPlanTemplate, REQUEST)

#define GetBackupPlanAsync(...)  SubmitAsync(&BackupClient::GetBackupPlan, __VA_ARGS__)
#define GetBackupPlanCallable(REQUEST)  SubmitCallable(&BackupClient::GetBackupPlan, REQUEST)

#define GetBackupPlanFromJSONAsync(...)  SubmitAsync(&BackupClient::GetBackupPlanFromJSON, __VA_ARGS__)
#define GetBackupPlanFromJSONCallable(REQUEST)  SubmitCallable(&BackupClient::GetBackupPlanFromJSON, REQUEST)

#define GetBackupPlanFromTemplateAsync(...)  SubmitAsync(&BackupClient::GetBackupPlanFromTemplate, __VA_ARGS__)
#define GetBackupPlanFromTemplateCallable(REQUEST)  SubmitCallable(&BackupClient::GetBackupPlanFromTemplate, REQUEST)

#define GetBackupSelectionAsync(...)  SubmitAsync(&BackupClient::GetBackupSelection, __VA_ARGS__)
#define GetBackupSelectionCallable(REQUEST)  SubmitCallable(&BackupClient::GetBackupSelection, REQUEST)

#define GetBackupVaultAccessPolicyAsync(...)  SubmitAsync(&BackupClient::GetBackupVaultAccessPolicy, __VA_ARGS__)
#define GetBackupVaultAccessPolicyCallable(REQUEST)  SubmitCallable(&BackupClient::GetBackupVaultAccessPolicy, REQUEST)

#define GetBackupVaultNotificationsAsync(...)  SubmitAsync(&BackupClient::GetBackupVaultNotifications, __VA_ARGS__)
#define GetBackupVaultNotificationsCallable(REQUEST)  SubmitCallable(&BackupClient::GetBackupVaultNotifications, REQUEST)

#define GetRecoveryPointRestoreMetadataAsync(...)  SubmitAsync(&BackupClient::GetRecoveryPointRestoreMetadata, __VA_ARGS__)
#define GetRecoveryPointRestoreMetadataCallable(REQUEST)  SubmitCallable(&BackupClient::GetRecoveryPointRestoreMetadata, REQUEST)


#define ListBackupJobsAsync(...)  SubmitAsync(&BackupClient::ListBackupJobs, __VA_ARGS__)
#define ListBackupJobsCallable(REQUEST)  SubmitCallable(&BackupClient::ListBackupJobs, REQUEST)

#define ListBackupPlanTemplatesAsync(...)  SubmitAsync(&BackupClient::ListBackupPlanTemplates, __VA_ARGS__)
#define ListBackupPlanTemplatesCallable(REQUEST)  SubmitCallable(&BackupClient::ListBackupPlanTemplates, REQUEST)

#define ListBackupPlanVersionsAsync(...)  SubmitAsync(&BackupClient::ListBackupPlanVersions, __VA_ARGS__)
#define ListBackupPlanVersionsCallable(REQUEST)  SubmitCallable(&BackupClient::ListBackupPlanVersions, REQUEST)

#define ListBackupPlansAsync(...)  SubmitAsync(&BackupClient::ListBackupPlans, __VA_ARGS__)
#define ListBackupPlansCallable(REQUEST)  SubmitCallable(&BackupClient::ListBackupPlans, REQUEST)

#define ListBackupSelectionsAsync(...)  SubmitAsync(&BackupClient::ListBackupSelections, __VA_ARGS__)
#define ListBackupSelectionsCallable(REQUEST)  SubmitCallable(&BackupClient::ListBackupSelections, REQUEST)

#define ListBackupVaultsAsync(...)  SubmitAsync(&BackupClient::ListBackupVaults, __VA_ARGS__)
#define ListBackupVaultsCallable(REQUEST)  SubmitCallable(&BackupClient::ListBackupVaults, REQUEST)

#define ListCopyJobsAsync(...)  SubmitAsync(&BackupClient::ListCopyJobs, __VA_ARGS__)
#define ListCopyJobsCallable(REQUEST)  SubmitCallable(&BackupClient::ListCopyJobs, REQUEST)

#define ListFrameworksAsync(...)  SubmitAsync(&BackupClient::ListFrameworks, __VA_ARGS__)
#define ListFrameworksCallable(REQUEST)  SubmitCallable(&BackupClient::ListFrameworks, REQUEST)

#define ListProtectedResourcesAsync(...)  SubmitAsync(&BackupClient::ListProtectedResources, __VA_ARGS__)
#define ListProtectedResourcesCallable(REQUEST)  SubmitCallable(&BackupClient::ListProtectedResources, REQUEST)

#define ListRecoveryPointsByBackupVaultAsync(...)  SubmitAsync(&BackupClient::ListRecoveryPointsByBackupVault, __VA_ARGS__)
#define ListRecoveryPointsByBackupVaultCallable(REQUEST)  SubmitCallable(&BackupClient::ListRecoveryPointsByBackupVault, REQUEST)

#define ListRecoveryPointsByResourceAsync(...)  SubmitAsync(&BackupClient::ListRecoveryPointsByResource, __VA_ARGS__)
#define ListRecoveryPointsByResourceCallable(REQUEST)  SubmitCallable(&BackupClient::ListRecoveryPointsByResource, REQUEST)

#define ListReportJobsAsync(...)  SubmitAsync(&BackupClient::ListReportJobs, __VA_ARGS__)
#define ListReportJobsCallable(REQUEST)  SubmitCallable(&BackupClient::ListReportJobs, REQUEST)

#define ListReportPlansAsync(...)  SubmitAsync(&BackupClient::ListReportPlans, __VA_ARGS__)
#define ListReportPlansCallable(REQUEST)  SubmitCallable(&BackupClient::ListReportPlans, REQUEST)

#define ListRestoreJobsAsync(...)  SubmitAsync(&BackupClient::ListRestoreJobs, __VA_ARGS__)
#define ListRestoreJobsCallable(REQUEST)  SubmitCallable(&BackupClient::ListRestoreJobs, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&BackupClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&BackupClient::ListTags, REQUEST)

#define PutBackupVaultAccessPolicyAsync(...)  SubmitAsync(&BackupClient::PutBackupVaultAccessPolicy, __VA_ARGS__)
#define PutBackupVaultAccessPolicyCallable(REQUEST)  SubmitCallable(&BackupClient::PutBackupVaultAccessPolicy, REQUEST)

#define PutBackupVaultLockConfigurationAsync(...)  SubmitAsync(&BackupClient::PutBackupVaultLockConfiguration, __VA_ARGS__)
#define PutBackupVaultLockConfigurationCallable(REQUEST)  SubmitCallable(&BackupClient::PutBackupVaultLockConfiguration, REQUEST)

#define PutBackupVaultNotificationsAsync(...)  SubmitAsync(&BackupClient::PutBackupVaultNotifications, __VA_ARGS__)
#define PutBackupVaultNotificationsCallable(REQUEST)  SubmitCallable(&BackupClient::PutBackupVaultNotifications, REQUEST)

#define StartBackupJobAsync(...)  SubmitAsync(&BackupClient::StartBackupJob, __VA_ARGS__)
#define StartBackupJobCallable(REQUEST)  SubmitCallable(&BackupClient::StartBackupJob, REQUEST)

#define StartCopyJobAsync(...)  SubmitAsync(&BackupClient::StartCopyJob, __VA_ARGS__)
#define StartCopyJobCallable(REQUEST)  SubmitCallable(&BackupClient::StartCopyJob, REQUEST)

#define StartReportJobAsync(...)  SubmitAsync(&BackupClient::StartReportJob, __VA_ARGS__)
#define StartReportJobCallable(REQUEST)  SubmitCallable(&BackupClient::StartReportJob, REQUEST)

#define StartRestoreJobAsync(...)  SubmitAsync(&BackupClient::StartRestoreJob, __VA_ARGS__)
#define StartRestoreJobCallable(REQUEST)  SubmitCallable(&BackupClient::StartRestoreJob, REQUEST)

#define StopBackupJobAsync(...)  SubmitAsync(&BackupClient::StopBackupJob, __VA_ARGS__)
#define StopBackupJobCallable(REQUEST)  SubmitCallable(&BackupClient::StopBackupJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&BackupClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&BackupClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&BackupClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&BackupClient::UntagResource, REQUEST)

#define UpdateBackupPlanAsync(...)  SubmitAsync(&BackupClient::UpdateBackupPlan, __VA_ARGS__)
#define UpdateBackupPlanCallable(REQUEST)  SubmitCallable(&BackupClient::UpdateBackupPlan, REQUEST)

#define UpdateFrameworkAsync(...)  SubmitAsync(&BackupClient::UpdateFramework, __VA_ARGS__)
#define UpdateFrameworkCallable(REQUEST)  SubmitCallable(&BackupClient::UpdateFramework, REQUEST)

#define UpdateGlobalSettingsAsync(...)  SubmitAsync(&BackupClient::UpdateGlobalSettings, __VA_ARGS__)
#define UpdateGlobalSettingsCallable(REQUEST)  SubmitCallable(&BackupClient::UpdateGlobalSettings, REQUEST)

#define UpdateRecoveryPointLifecycleAsync(...)  SubmitAsync(&BackupClient::UpdateRecoveryPointLifecycle, __VA_ARGS__)
#define UpdateRecoveryPointLifecycleCallable(REQUEST)  SubmitCallable(&BackupClient::UpdateRecoveryPointLifecycle, REQUEST)

#define UpdateRegionSettingsAsync(...)  SubmitAsync(&BackupClient::UpdateRegionSettings, __VA_ARGS__)
#define UpdateRegionSettingsCallable(REQUEST)  SubmitCallable(&BackupClient::UpdateRegionSettings, REQUEST)

#define UpdateReportPlanAsync(...)  SubmitAsync(&BackupClient::UpdateReportPlan, __VA_ARGS__)
#define UpdateReportPlanCallable(REQUEST)  SubmitCallable(&BackupClient::UpdateReportPlan, REQUEST)

