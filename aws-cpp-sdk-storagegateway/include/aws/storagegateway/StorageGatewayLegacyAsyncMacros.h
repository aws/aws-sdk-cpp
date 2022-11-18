/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ActivateGatewayAsync(...)  SubmitAsync(&StorageGatewayClient::ActivateGateway, __VA_ARGS__)
#define ActivateGatewayCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ActivateGateway, REQUEST)

#define AddCacheAsync(...)  SubmitAsync(&StorageGatewayClient::AddCache, __VA_ARGS__)
#define AddCacheCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::AddCache, REQUEST)

#define AddTagsToResourceAsync(...)  SubmitAsync(&StorageGatewayClient::AddTagsToResource, __VA_ARGS__)
#define AddTagsToResourceCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::AddTagsToResource, REQUEST)

#define AddUploadBufferAsync(...)  SubmitAsync(&StorageGatewayClient::AddUploadBuffer, __VA_ARGS__)
#define AddUploadBufferCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::AddUploadBuffer, REQUEST)

#define AddWorkingStorageAsync(...)  SubmitAsync(&StorageGatewayClient::AddWorkingStorage, __VA_ARGS__)
#define AddWorkingStorageCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::AddWorkingStorage, REQUEST)

#define AssignTapePoolAsync(...)  SubmitAsync(&StorageGatewayClient::AssignTapePool, __VA_ARGS__)
#define AssignTapePoolCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::AssignTapePool, REQUEST)

#define AssociateFileSystemAsync(...)  SubmitAsync(&StorageGatewayClient::AssociateFileSystem, __VA_ARGS__)
#define AssociateFileSystemCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::AssociateFileSystem, REQUEST)

#define AttachVolumeAsync(...)  SubmitAsync(&StorageGatewayClient::AttachVolume, __VA_ARGS__)
#define AttachVolumeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::AttachVolume, REQUEST)

#define CancelArchivalAsync(...)  SubmitAsync(&StorageGatewayClient::CancelArchival, __VA_ARGS__)
#define CancelArchivalCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CancelArchival, REQUEST)

#define CancelRetrievalAsync(...)  SubmitAsync(&StorageGatewayClient::CancelRetrieval, __VA_ARGS__)
#define CancelRetrievalCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CancelRetrieval, REQUEST)

#define CreateCachediSCSIVolumeAsync(...)  SubmitAsync(&StorageGatewayClient::CreateCachediSCSIVolume, __VA_ARGS__)
#define CreateCachediSCSIVolumeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateCachediSCSIVolume, REQUEST)

#define CreateNFSFileShareAsync(...)  SubmitAsync(&StorageGatewayClient::CreateNFSFileShare, __VA_ARGS__)
#define CreateNFSFileShareCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateNFSFileShare, REQUEST)

#define CreateSMBFileShareAsync(...)  SubmitAsync(&StorageGatewayClient::CreateSMBFileShare, __VA_ARGS__)
#define CreateSMBFileShareCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateSMBFileShare, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&StorageGatewayClient::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateSnapshot, REQUEST)

#define CreateSnapshotFromVolumeRecoveryPointAsync(...)  SubmitAsync(&StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint, __VA_ARGS__)
#define CreateSnapshotFromVolumeRecoveryPointCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint, REQUEST)

#define CreateStorediSCSIVolumeAsync(...)  SubmitAsync(&StorageGatewayClient::CreateStorediSCSIVolume, __VA_ARGS__)
#define CreateStorediSCSIVolumeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateStorediSCSIVolume, REQUEST)

#define CreateTapePoolAsync(...)  SubmitAsync(&StorageGatewayClient::CreateTapePool, __VA_ARGS__)
#define CreateTapePoolCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateTapePool, REQUEST)

#define CreateTapeWithBarcodeAsync(...)  SubmitAsync(&StorageGatewayClient::CreateTapeWithBarcode, __VA_ARGS__)
#define CreateTapeWithBarcodeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateTapeWithBarcode, REQUEST)

#define CreateTapesAsync(...)  SubmitAsync(&StorageGatewayClient::CreateTapes, __VA_ARGS__)
#define CreateTapesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::CreateTapes, REQUEST)

#define DeleteAutomaticTapeCreationPolicyAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteAutomaticTapeCreationPolicy, __VA_ARGS__)
#define DeleteAutomaticTapeCreationPolicyCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteAutomaticTapeCreationPolicy, REQUEST)

#define DeleteBandwidthRateLimitAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteBandwidthRateLimit, __VA_ARGS__)
#define DeleteBandwidthRateLimitCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteBandwidthRateLimit, REQUEST)

#define DeleteChapCredentialsAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteChapCredentials, __VA_ARGS__)
#define DeleteChapCredentialsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteChapCredentials, REQUEST)

#define DeleteFileShareAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteFileShare, __VA_ARGS__)
#define DeleteFileShareCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteFileShare, REQUEST)

#define DeleteGatewayAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteGateway, __VA_ARGS__)
#define DeleteGatewayCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteGateway, REQUEST)

#define DeleteSnapshotScheduleAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteSnapshotSchedule, __VA_ARGS__)
#define DeleteSnapshotScheduleCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteSnapshotSchedule, REQUEST)

#define DeleteTapeAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteTape, __VA_ARGS__)
#define DeleteTapeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteTape, REQUEST)

#define DeleteTapeArchiveAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteTapeArchive, __VA_ARGS__)
#define DeleteTapeArchiveCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteTapeArchive, REQUEST)

#define DeleteTapePoolAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteTapePool, __VA_ARGS__)
#define DeleteTapePoolCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteTapePool, REQUEST)

#define DeleteVolumeAsync(...)  SubmitAsync(&StorageGatewayClient::DeleteVolume, __VA_ARGS__)
#define DeleteVolumeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DeleteVolume, REQUEST)

#define DescribeAvailabilityMonitorTestAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeAvailabilityMonitorTest, __VA_ARGS__)
#define DescribeAvailabilityMonitorTestCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeAvailabilityMonitorTest, REQUEST)

#define DescribeBandwidthRateLimitAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeBandwidthRateLimit, __VA_ARGS__)
#define DescribeBandwidthRateLimitCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeBandwidthRateLimit, REQUEST)

#define DescribeBandwidthRateLimitScheduleAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeBandwidthRateLimitSchedule, __VA_ARGS__)
#define DescribeBandwidthRateLimitScheduleCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeBandwidthRateLimitSchedule, REQUEST)

#define DescribeCacheAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeCache, __VA_ARGS__)
#define DescribeCacheCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeCache, REQUEST)

#define DescribeCachediSCSIVolumesAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeCachediSCSIVolumes, __VA_ARGS__)
#define DescribeCachediSCSIVolumesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeCachediSCSIVolumes, REQUEST)

#define DescribeChapCredentialsAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeChapCredentials, __VA_ARGS__)
#define DescribeChapCredentialsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeChapCredentials, REQUEST)

#define DescribeFileSystemAssociationsAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeFileSystemAssociations, __VA_ARGS__)
#define DescribeFileSystemAssociationsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeFileSystemAssociations, REQUEST)

#define DescribeGatewayInformationAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeGatewayInformation, __VA_ARGS__)
#define DescribeGatewayInformationCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeGatewayInformation, REQUEST)

#define DescribeMaintenanceStartTimeAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeMaintenanceStartTime, __VA_ARGS__)
#define DescribeMaintenanceStartTimeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeMaintenanceStartTime, REQUEST)

#define DescribeNFSFileSharesAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeNFSFileShares, __VA_ARGS__)
#define DescribeNFSFileSharesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeNFSFileShares, REQUEST)

#define DescribeSMBFileSharesAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeSMBFileShares, __VA_ARGS__)
#define DescribeSMBFileSharesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeSMBFileShares, REQUEST)

#define DescribeSMBSettingsAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeSMBSettings, __VA_ARGS__)
#define DescribeSMBSettingsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeSMBSettings, REQUEST)

#define DescribeSnapshotScheduleAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeSnapshotSchedule, __VA_ARGS__)
#define DescribeSnapshotScheduleCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeSnapshotSchedule, REQUEST)

#define DescribeStorediSCSIVolumesAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeStorediSCSIVolumes, __VA_ARGS__)
#define DescribeStorediSCSIVolumesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeStorediSCSIVolumes, REQUEST)

#define DescribeTapeArchivesAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeTapeArchives, __VA_ARGS__)
#define DescribeTapeArchivesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeTapeArchives, REQUEST)

#define DescribeTapeRecoveryPointsAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeTapeRecoveryPoints, __VA_ARGS__)
#define DescribeTapeRecoveryPointsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeTapeRecoveryPoints, REQUEST)

#define DescribeTapesAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeTapes, __VA_ARGS__)
#define DescribeTapesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeTapes, REQUEST)

#define DescribeUploadBufferAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeUploadBuffer, __VA_ARGS__)
#define DescribeUploadBufferCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeUploadBuffer, REQUEST)

#define DescribeVTLDevicesAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeVTLDevices, __VA_ARGS__)
#define DescribeVTLDevicesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeVTLDevices, REQUEST)

#define DescribeWorkingStorageAsync(...)  SubmitAsync(&StorageGatewayClient::DescribeWorkingStorage, __VA_ARGS__)
#define DescribeWorkingStorageCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DescribeWorkingStorage, REQUEST)

#define DetachVolumeAsync(...)  SubmitAsync(&StorageGatewayClient::DetachVolume, __VA_ARGS__)
#define DetachVolumeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DetachVolume, REQUEST)

#define DisableGatewayAsync(...)  SubmitAsync(&StorageGatewayClient::DisableGateway, __VA_ARGS__)
#define DisableGatewayCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DisableGateway, REQUEST)

#define DisassociateFileSystemAsync(...)  SubmitAsync(&StorageGatewayClient::DisassociateFileSystem, __VA_ARGS__)
#define DisassociateFileSystemCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::DisassociateFileSystem, REQUEST)

#define JoinDomainAsync(...)  SubmitAsync(&StorageGatewayClient::JoinDomain, __VA_ARGS__)
#define JoinDomainCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::JoinDomain, REQUEST)

#define ListAutomaticTapeCreationPoliciesAsync(...)  SubmitAsync(&StorageGatewayClient::ListAutomaticTapeCreationPolicies, __VA_ARGS__)
#define ListAutomaticTapeCreationPoliciesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListAutomaticTapeCreationPolicies, REQUEST)

#define ListFileSharesAsync(...)  SubmitAsync(&StorageGatewayClient::ListFileShares, __VA_ARGS__)
#define ListFileSharesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListFileShares, REQUEST)

#define ListFileSystemAssociationsAsync(...)  SubmitAsync(&StorageGatewayClient::ListFileSystemAssociations, __VA_ARGS__)
#define ListFileSystemAssociationsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListFileSystemAssociations, REQUEST)

#define ListGatewaysAsync(...)  SubmitAsync(&StorageGatewayClient::ListGateways, __VA_ARGS__)
#define ListGatewaysCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListGateways, REQUEST)

#define ListLocalDisksAsync(...)  SubmitAsync(&StorageGatewayClient::ListLocalDisks, __VA_ARGS__)
#define ListLocalDisksCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListLocalDisks, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&StorageGatewayClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListTagsForResource, REQUEST)

#define ListTapePoolsAsync(...)  SubmitAsync(&StorageGatewayClient::ListTapePools, __VA_ARGS__)
#define ListTapePoolsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListTapePools, REQUEST)

#define ListTapesAsync(...)  SubmitAsync(&StorageGatewayClient::ListTapes, __VA_ARGS__)
#define ListTapesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListTapes, REQUEST)

#define ListVolumeInitiatorsAsync(...)  SubmitAsync(&StorageGatewayClient::ListVolumeInitiators, __VA_ARGS__)
#define ListVolumeInitiatorsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListVolumeInitiators, REQUEST)

#define ListVolumeRecoveryPointsAsync(...)  SubmitAsync(&StorageGatewayClient::ListVolumeRecoveryPoints, __VA_ARGS__)
#define ListVolumeRecoveryPointsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListVolumeRecoveryPoints, REQUEST)

#define ListVolumesAsync(...)  SubmitAsync(&StorageGatewayClient::ListVolumes, __VA_ARGS__)
#define ListVolumesCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ListVolumes, REQUEST)

#define NotifyWhenUploadedAsync(...)  SubmitAsync(&StorageGatewayClient::NotifyWhenUploaded, __VA_ARGS__)
#define NotifyWhenUploadedCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::NotifyWhenUploaded, REQUEST)

#define RefreshCacheAsync(...)  SubmitAsync(&StorageGatewayClient::RefreshCache, __VA_ARGS__)
#define RefreshCacheCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::RefreshCache, REQUEST)

#define RemoveTagsFromResourceAsync(...)  SubmitAsync(&StorageGatewayClient::RemoveTagsFromResource, __VA_ARGS__)
#define RemoveTagsFromResourceCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::RemoveTagsFromResource, REQUEST)

#define ResetCacheAsync(...)  SubmitAsync(&StorageGatewayClient::ResetCache, __VA_ARGS__)
#define ResetCacheCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ResetCache, REQUEST)

#define RetrieveTapeArchiveAsync(...)  SubmitAsync(&StorageGatewayClient::RetrieveTapeArchive, __VA_ARGS__)
#define RetrieveTapeArchiveCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::RetrieveTapeArchive, REQUEST)

#define RetrieveTapeRecoveryPointAsync(...)  SubmitAsync(&StorageGatewayClient::RetrieveTapeRecoveryPoint, __VA_ARGS__)
#define RetrieveTapeRecoveryPointCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::RetrieveTapeRecoveryPoint, REQUEST)

#define SetLocalConsolePasswordAsync(...)  SubmitAsync(&StorageGatewayClient::SetLocalConsolePassword, __VA_ARGS__)
#define SetLocalConsolePasswordCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::SetLocalConsolePassword, REQUEST)

#define SetSMBGuestPasswordAsync(...)  SubmitAsync(&StorageGatewayClient::SetSMBGuestPassword, __VA_ARGS__)
#define SetSMBGuestPasswordCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::SetSMBGuestPassword, REQUEST)

#define ShutdownGatewayAsync(...)  SubmitAsync(&StorageGatewayClient::ShutdownGateway, __VA_ARGS__)
#define ShutdownGatewayCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::ShutdownGateway, REQUEST)

#define StartAvailabilityMonitorTestAsync(...)  SubmitAsync(&StorageGatewayClient::StartAvailabilityMonitorTest, __VA_ARGS__)
#define StartAvailabilityMonitorTestCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::StartAvailabilityMonitorTest, REQUEST)

#define StartGatewayAsync(...)  SubmitAsync(&StorageGatewayClient::StartGateway, __VA_ARGS__)
#define StartGatewayCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::StartGateway, REQUEST)

#define UpdateAutomaticTapeCreationPolicyAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateAutomaticTapeCreationPolicy, __VA_ARGS__)
#define UpdateAutomaticTapeCreationPolicyCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateAutomaticTapeCreationPolicy, REQUEST)

#define UpdateBandwidthRateLimitAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateBandwidthRateLimit, __VA_ARGS__)
#define UpdateBandwidthRateLimitCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateBandwidthRateLimit, REQUEST)

#define UpdateBandwidthRateLimitScheduleAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateBandwidthRateLimitSchedule, __VA_ARGS__)
#define UpdateBandwidthRateLimitScheduleCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateBandwidthRateLimitSchedule, REQUEST)

#define UpdateChapCredentialsAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateChapCredentials, __VA_ARGS__)
#define UpdateChapCredentialsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateChapCredentials, REQUEST)

#define UpdateFileSystemAssociationAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateFileSystemAssociation, __VA_ARGS__)
#define UpdateFileSystemAssociationCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateFileSystemAssociation, REQUEST)

#define UpdateGatewayInformationAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateGatewayInformation, __VA_ARGS__)
#define UpdateGatewayInformationCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateGatewayInformation, REQUEST)

#define UpdateGatewaySoftwareNowAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateGatewaySoftwareNow, __VA_ARGS__)
#define UpdateGatewaySoftwareNowCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateGatewaySoftwareNow, REQUEST)

#define UpdateMaintenanceStartTimeAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateMaintenanceStartTime, __VA_ARGS__)
#define UpdateMaintenanceStartTimeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateMaintenanceStartTime, REQUEST)

#define UpdateNFSFileShareAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateNFSFileShare, __VA_ARGS__)
#define UpdateNFSFileShareCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateNFSFileShare, REQUEST)

#define UpdateSMBFileShareAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateSMBFileShare, __VA_ARGS__)
#define UpdateSMBFileShareCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateSMBFileShare, REQUEST)

#define UpdateSMBFileShareVisibilityAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateSMBFileShareVisibility, __VA_ARGS__)
#define UpdateSMBFileShareVisibilityCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateSMBFileShareVisibility, REQUEST)

#define UpdateSMBLocalGroupsAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateSMBLocalGroups, __VA_ARGS__)
#define UpdateSMBLocalGroupsCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateSMBLocalGroups, REQUEST)

#define UpdateSMBSecurityStrategyAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateSMBSecurityStrategy, __VA_ARGS__)
#define UpdateSMBSecurityStrategyCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateSMBSecurityStrategy, REQUEST)

#define UpdateSnapshotScheduleAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateSnapshotSchedule, __VA_ARGS__)
#define UpdateSnapshotScheduleCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateSnapshotSchedule, REQUEST)

#define UpdateVTLDeviceTypeAsync(...)  SubmitAsync(&StorageGatewayClient::UpdateVTLDeviceType, __VA_ARGS__)
#define UpdateVTLDeviceTypeCallable(REQUEST)  SubmitCallable(&StorageGatewayClient::UpdateVTLDeviceType, REQUEST)

