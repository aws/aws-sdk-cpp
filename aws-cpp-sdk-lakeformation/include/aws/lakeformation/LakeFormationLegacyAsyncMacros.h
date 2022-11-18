/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddLFTagsToResourceAsync(...)  SubmitAsync(&LakeFormationClient::AddLFTagsToResource, __VA_ARGS__)
#define AddLFTagsToResourceCallable(REQUEST)  SubmitCallable(&LakeFormationClient::AddLFTagsToResource, REQUEST)

#define AssumeDecoratedRoleWithSAMLAsync(...)  SubmitAsync(&LakeFormationClient::AssumeDecoratedRoleWithSAML, __VA_ARGS__)
#define AssumeDecoratedRoleWithSAMLCallable(REQUEST)  SubmitCallable(&LakeFormationClient::AssumeDecoratedRoleWithSAML, REQUEST)

#define BatchGrantPermissionsAsync(...)  SubmitAsync(&LakeFormationClient::BatchGrantPermissions, __VA_ARGS__)
#define BatchGrantPermissionsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::BatchGrantPermissions, REQUEST)

#define BatchRevokePermissionsAsync(...)  SubmitAsync(&LakeFormationClient::BatchRevokePermissions, __VA_ARGS__)
#define BatchRevokePermissionsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::BatchRevokePermissions, REQUEST)

#define CancelTransactionAsync(...)  SubmitAsync(&LakeFormationClient::CancelTransaction, __VA_ARGS__)
#define CancelTransactionCallable(REQUEST)  SubmitCallable(&LakeFormationClient::CancelTransaction, REQUEST)

#define CommitTransactionAsync(...)  SubmitAsync(&LakeFormationClient::CommitTransaction, __VA_ARGS__)
#define CommitTransactionCallable(REQUEST)  SubmitCallable(&LakeFormationClient::CommitTransaction, REQUEST)

#define CreateDataCellsFilterAsync(...)  SubmitAsync(&LakeFormationClient::CreateDataCellsFilter, __VA_ARGS__)
#define CreateDataCellsFilterCallable(REQUEST)  SubmitCallable(&LakeFormationClient::CreateDataCellsFilter, REQUEST)

#define CreateLFTagAsync(...)  SubmitAsync(&LakeFormationClient::CreateLFTag, __VA_ARGS__)
#define CreateLFTagCallable(REQUEST)  SubmitCallable(&LakeFormationClient::CreateLFTag, REQUEST)

#define DeleteDataCellsFilterAsync(...)  SubmitAsync(&LakeFormationClient::DeleteDataCellsFilter, __VA_ARGS__)
#define DeleteDataCellsFilterCallable(REQUEST)  SubmitCallable(&LakeFormationClient::DeleteDataCellsFilter, REQUEST)

#define DeleteLFTagAsync(...)  SubmitAsync(&LakeFormationClient::DeleteLFTag, __VA_ARGS__)
#define DeleteLFTagCallable(REQUEST)  SubmitCallable(&LakeFormationClient::DeleteLFTag, REQUEST)

#define DeleteObjectsOnCancelAsync(...)  SubmitAsync(&LakeFormationClient::DeleteObjectsOnCancel, __VA_ARGS__)
#define DeleteObjectsOnCancelCallable(REQUEST)  SubmitCallable(&LakeFormationClient::DeleteObjectsOnCancel, REQUEST)

#define DeregisterResourceAsync(...)  SubmitAsync(&LakeFormationClient::DeregisterResource, __VA_ARGS__)
#define DeregisterResourceCallable(REQUEST)  SubmitCallable(&LakeFormationClient::DeregisterResource, REQUEST)

#define DescribeResourceAsync(...)  SubmitAsync(&LakeFormationClient::DescribeResource, __VA_ARGS__)
#define DescribeResourceCallable(REQUEST)  SubmitCallable(&LakeFormationClient::DescribeResource, REQUEST)

#define DescribeTransactionAsync(...)  SubmitAsync(&LakeFormationClient::DescribeTransaction, __VA_ARGS__)
#define DescribeTransactionCallable(REQUEST)  SubmitCallable(&LakeFormationClient::DescribeTransaction, REQUEST)

#define ExtendTransactionAsync(...)  SubmitAsync(&LakeFormationClient::ExtendTransaction, __VA_ARGS__)
#define ExtendTransactionCallable(REQUEST)  SubmitCallable(&LakeFormationClient::ExtendTransaction, REQUEST)

#define GetDataLakeSettingsAsync(...)  SubmitAsync(&LakeFormationClient::GetDataLakeSettings, __VA_ARGS__)
#define GetDataLakeSettingsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetDataLakeSettings, REQUEST)

#define GetEffectivePermissionsForPathAsync(...)  SubmitAsync(&LakeFormationClient::GetEffectivePermissionsForPath, __VA_ARGS__)
#define GetEffectivePermissionsForPathCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetEffectivePermissionsForPath, REQUEST)

#define GetLFTagAsync(...)  SubmitAsync(&LakeFormationClient::GetLFTag, __VA_ARGS__)
#define GetLFTagCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetLFTag, REQUEST)

#define GetQueryStateAsync(...)  SubmitAsync(&LakeFormationClient::GetQueryState, __VA_ARGS__)
#define GetQueryStateCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetQueryState, REQUEST)

#define GetQueryStatisticsAsync(...)  SubmitAsync(&LakeFormationClient::GetQueryStatistics, __VA_ARGS__)
#define GetQueryStatisticsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetQueryStatistics, REQUEST)

#define GetResourceLFTagsAsync(...)  SubmitAsync(&LakeFormationClient::GetResourceLFTags, __VA_ARGS__)
#define GetResourceLFTagsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetResourceLFTags, REQUEST)

#define GetTableObjectsAsync(...)  SubmitAsync(&LakeFormationClient::GetTableObjects, __VA_ARGS__)
#define GetTableObjectsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetTableObjects, REQUEST)

#define GetTemporaryGluePartitionCredentialsAsync(...)  SubmitAsync(&LakeFormationClient::GetTemporaryGluePartitionCredentials, __VA_ARGS__)
#define GetTemporaryGluePartitionCredentialsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetTemporaryGluePartitionCredentials, REQUEST)

#define GetTemporaryGlueTableCredentialsAsync(...)  SubmitAsync(&LakeFormationClient::GetTemporaryGlueTableCredentials, __VA_ARGS__)
#define GetTemporaryGlueTableCredentialsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetTemporaryGlueTableCredentials, REQUEST)

#define GetWorkUnitResultsAsync(...)  SubmitAsync(&LakeFormationClient::GetWorkUnitResults, __VA_ARGS__)
#define GetWorkUnitResultsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetWorkUnitResults, REQUEST)

#define GetWorkUnitsAsync(...)  SubmitAsync(&LakeFormationClient::GetWorkUnits, __VA_ARGS__)
#define GetWorkUnitsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GetWorkUnits, REQUEST)

#define GrantPermissionsAsync(...)  SubmitAsync(&LakeFormationClient::GrantPermissions, __VA_ARGS__)
#define GrantPermissionsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::GrantPermissions, REQUEST)

#define ListDataCellsFilterAsync(...)  SubmitAsync(&LakeFormationClient::ListDataCellsFilter, __VA_ARGS__)
#define ListDataCellsFilterCallable(REQUEST)  SubmitCallable(&LakeFormationClient::ListDataCellsFilter, REQUEST)

#define ListLFTagsAsync(...)  SubmitAsync(&LakeFormationClient::ListLFTags, __VA_ARGS__)
#define ListLFTagsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::ListLFTags, REQUEST)

#define ListPermissionsAsync(...)  SubmitAsync(&LakeFormationClient::ListPermissions, __VA_ARGS__)
#define ListPermissionsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::ListPermissions, REQUEST)

#define ListResourcesAsync(...)  SubmitAsync(&LakeFormationClient::ListResources, __VA_ARGS__)
#define ListResourcesCallable(REQUEST)  SubmitCallable(&LakeFormationClient::ListResources, REQUEST)

#define ListTableStorageOptimizersAsync(...)  SubmitAsync(&LakeFormationClient::ListTableStorageOptimizers, __VA_ARGS__)
#define ListTableStorageOptimizersCallable(REQUEST)  SubmitCallable(&LakeFormationClient::ListTableStorageOptimizers, REQUEST)

#define ListTransactionsAsync(...)  SubmitAsync(&LakeFormationClient::ListTransactions, __VA_ARGS__)
#define ListTransactionsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::ListTransactions, REQUEST)

#define PutDataLakeSettingsAsync(...)  SubmitAsync(&LakeFormationClient::PutDataLakeSettings, __VA_ARGS__)
#define PutDataLakeSettingsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::PutDataLakeSettings, REQUEST)

#define RegisterResourceAsync(...)  SubmitAsync(&LakeFormationClient::RegisterResource, __VA_ARGS__)
#define RegisterResourceCallable(REQUEST)  SubmitCallable(&LakeFormationClient::RegisterResource, REQUEST)

#define RemoveLFTagsFromResourceAsync(...)  SubmitAsync(&LakeFormationClient::RemoveLFTagsFromResource, __VA_ARGS__)
#define RemoveLFTagsFromResourceCallable(REQUEST)  SubmitCallable(&LakeFormationClient::RemoveLFTagsFromResource, REQUEST)

#define RevokePermissionsAsync(...)  SubmitAsync(&LakeFormationClient::RevokePermissions, __VA_ARGS__)
#define RevokePermissionsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::RevokePermissions, REQUEST)

#define SearchDatabasesByLFTagsAsync(...)  SubmitAsync(&LakeFormationClient::SearchDatabasesByLFTags, __VA_ARGS__)
#define SearchDatabasesByLFTagsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::SearchDatabasesByLFTags, REQUEST)

#define SearchTablesByLFTagsAsync(...)  SubmitAsync(&LakeFormationClient::SearchTablesByLFTags, __VA_ARGS__)
#define SearchTablesByLFTagsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::SearchTablesByLFTags, REQUEST)

#define StartQueryPlanningAsync(...)  SubmitAsync(&LakeFormationClient::StartQueryPlanning, __VA_ARGS__)
#define StartQueryPlanningCallable(REQUEST)  SubmitCallable(&LakeFormationClient::StartQueryPlanning, REQUEST)

#define StartTransactionAsync(...)  SubmitAsync(&LakeFormationClient::StartTransaction, __VA_ARGS__)
#define StartTransactionCallable(REQUEST)  SubmitCallable(&LakeFormationClient::StartTransaction, REQUEST)

#define UpdateLFTagAsync(...)  SubmitAsync(&LakeFormationClient::UpdateLFTag, __VA_ARGS__)
#define UpdateLFTagCallable(REQUEST)  SubmitCallable(&LakeFormationClient::UpdateLFTag, REQUEST)

#define UpdateResourceAsync(...)  SubmitAsync(&LakeFormationClient::UpdateResource, __VA_ARGS__)
#define UpdateResourceCallable(REQUEST)  SubmitCallable(&LakeFormationClient::UpdateResource, REQUEST)

#define UpdateTableObjectsAsync(...)  SubmitAsync(&LakeFormationClient::UpdateTableObjects, __VA_ARGS__)
#define UpdateTableObjectsCallable(REQUEST)  SubmitCallable(&LakeFormationClient::UpdateTableObjects, REQUEST)

#define UpdateTableStorageOptimizerAsync(...)  SubmitAsync(&LakeFormationClient::UpdateTableStorageOptimizer, __VA_ARGS__)
#define UpdateTableStorageOptimizerCallable(REQUEST)  SubmitCallable(&LakeFormationClient::UpdateTableStorageOptimizer, REQUEST)

