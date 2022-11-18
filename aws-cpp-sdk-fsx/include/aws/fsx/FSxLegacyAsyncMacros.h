/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateFileSystemAliasesAsync(...)  SubmitAsync(&FSxClient::AssociateFileSystemAliases, __VA_ARGS__)
#define AssociateFileSystemAliasesCallable(REQUEST)  SubmitCallable(&FSxClient::AssociateFileSystemAliases, REQUEST)

#define CancelDataRepositoryTaskAsync(...)  SubmitAsync(&FSxClient::CancelDataRepositoryTask, __VA_ARGS__)
#define CancelDataRepositoryTaskCallable(REQUEST)  SubmitCallable(&FSxClient::CancelDataRepositoryTask, REQUEST)

#define CopyBackupAsync(...)  SubmitAsync(&FSxClient::CopyBackup, __VA_ARGS__)
#define CopyBackupCallable(REQUEST)  SubmitCallable(&FSxClient::CopyBackup, REQUEST)

#define CreateBackupAsync(...)  SubmitAsync(&FSxClient::CreateBackup, __VA_ARGS__)
#define CreateBackupCallable(REQUEST)  SubmitCallable(&FSxClient::CreateBackup, REQUEST)

#define CreateDataRepositoryAssociationAsync(...)  SubmitAsync(&FSxClient::CreateDataRepositoryAssociation, __VA_ARGS__)
#define CreateDataRepositoryAssociationCallable(REQUEST)  SubmitCallable(&FSxClient::CreateDataRepositoryAssociation, REQUEST)

#define CreateDataRepositoryTaskAsync(...)  SubmitAsync(&FSxClient::CreateDataRepositoryTask, __VA_ARGS__)
#define CreateDataRepositoryTaskCallable(REQUEST)  SubmitCallable(&FSxClient::CreateDataRepositoryTask, REQUEST)

#define CreateFileCacheAsync(...)  SubmitAsync(&FSxClient::CreateFileCache, __VA_ARGS__)
#define CreateFileCacheCallable(REQUEST)  SubmitCallable(&FSxClient::CreateFileCache, REQUEST)

#define CreateFileSystemAsync(...)  SubmitAsync(&FSxClient::CreateFileSystem, __VA_ARGS__)
#define CreateFileSystemCallable(REQUEST)  SubmitCallable(&FSxClient::CreateFileSystem, REQUEST)

#define CreateFileSystemFromBackupAsync(...)  SubmitAsync(&FSxClient::CreateFileSystemFromBackup, __VA_ARGS__)
#define CreateFileSystemFromBackupCallable(REQUEST)  SubmitCallable(&FSxClient::CreateFileSystemFromBackup, REQUEST)

#define CreateSnapshotAsync(...)  SubmitAsync(&FSxClient::CreateSnapshot, __VA_ARGS__)
#define CreateSnapshotCallable(REQUEST)  SubmitCallable(&FSxClient::CreateSnapshot, REQUEST)

#define CreateStorageVirtualMachineAsync(...)  SubmitAsync(&FSxClient::CreateStorageVirtualMachine, __VA_ARGS__)
#define CreateStorageVirtualMachineCallable(REQUEST)  SubmitCallable(&FSxClient::CreateStorageVirtualMachine, REQUEST)

#define CreateVolumeAsync(...)  SubmitAsync(&FSxClient::CreateVolume, __VA_ARGS__)
#define CreateVolumeCallable(REQUEST)  SubmitCallable(&FSxClient::CreateVolume, REQUEST)

#define CreateVolumeFromBackupAsync(...)  SubmitAsync(&FSxClient::CreateVolumeFromBackup, __VA_ARGS__)
#define CreateVolumeFromBackupCallable(REQUEST)  SubmitCallable(&FSxClient::CreateVolumeFromBackup, REQUEST)

#define DeleteBackupAsync(...)  SubmitAsync(&FSxClient::DeleteBackup, __VA_ARGS__)
#define DeleteBackupCallable(REQUEST)  SubmitCallable(&FSxClient::DeleteBackup, REQUEST)

#define DeleteDataRepositoryAssociationAsync(...)  SubmitAsync(&FSxClient::DeleteDataRepositoryAssociation, __VA_ARGS__)
#define DeleteDataRepositoryAssociationCallable(REQUEST)  SubmitCallable(&FSxClient::DeleteDataRepositoryAssociation, REQUEST)

#define DeleteFileCacheAsync(...)  SubmitAsync(&FSxClient::DeleteFileCache, __VA_ARGS__)
#define DeleteFileCacheCallable(REQUEST)  SubmitCallable(&FSxClient::DeleteFileCache, REQUEST)

#define DeleteFileSystemAsync(...)  SubmitAsync(&FSxClient::DeleteFileSystem, __VA_ARGS__)
#define DeleteFileSystemCallable(REQUEST)  SubmitCallable(&FSxClient::DeleteFileSystem, REQUEST)

#define DeleteSnapshotAsync(...)  SubmitAsync(&FSxClient::DeleteSnapshot, __VA_ARGS__)
#define DeleteSnapshotCallable(REQUEST)  SubmitCallable(&FSxClient::DeleteSnapshot, REQUEST)

#define DeleteStorageVirtualMachineAsync(...)  SubmitAsync(&FSxClient::DeleteStorageVirtualMachine, __VA_ARGS__)
#define DeleteStorageVirtualMachineCallable(REQUEST)  SubmitCallable(&FSxClient::DeleteStorageVirtualMachine, REQUEST)

#define DeleteVolumeAsync(...)  SubmitAsync(&FSxClient::DeleteVolume, __VA_ARGS__)
#define DeleteVolumeCallable(REQUEST)  SubmitCallable(&FSxClient::DeleteVolume, REQUEST)

#define DescribeBackupsAsync(...)  SubmitAsync(&FSxClient::DescribeBackups, __VA_ARGS__)
#define DescribeBackupsCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeBackups, REQUEST)

#define DescribeDataRepositoryAssociationsAsync(...)  SubmitAsync(&FSxClient::DescribeDataRepositoryAssociations, __VA_ARGS__)
#define DescribeDataRepositoryAssociationsCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeDataRepositoryAssociations, REQUEST)

#define DescribeDataRepositoryTasksAsync(...)  SubmitAsync(&FSxClient::DescribeDataRepositoryTasks, __VA_ARGS__)
#define DescribeDataRepositoryTasksCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeDataRepositoryTasks, REQUEST)

#define DescribeFileCachesAsync(...)  SubmitAsync(&FSxClient::DescribeFileCaches, __VA_ARGS__)
#define DescribeFileCachesCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeFileCaches, REQUEST)

#define DescribeFileSystemAliasesAsync(...)  SubmitAsync(&FSxClient::DescribeFileSystemAliases, __VA_ARGS__)
#define DescribeFileSystemAliasesCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeFileSystemAliases, REQUEST)

#define DescribeFileSystemsAsync(...)  SubmitAsync(&FSxClient::DescribeFileSystems, __VA_ARGS__)
#define DescribeFileSystemsCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeFileSystems, REQUEST)

#define DescribeSnapshotsAsync(...)  SubmitAsync(&FSxClient::DescribeSnapshots, __VA_ARGS__)
#define DescribeSnapshotsCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeSnapshots, REQUEST)

#define DescribeStorageVirtualMachinesAsync(...)  SubmitAsync(&FSxClient::DescribeStorageVirtualMachines, __VA_ARGS__)
#define DescribeStorageVirtualMachinesCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeStorageVirtualMachines, REQUEST)

#define DescribeVolumesAsync(...)  SubmitAsync(&FSxClient::DescribeVolumes, __VA_ARGS__)
#define DescribeVolumesCallable(REQUEST)  SubmitCallable(&FSxClient::DescribeVolumes, REQUEST)

#define DisassociateFileSystemAliasesAsync(...)  SubmitAsync(&FSxClient::DisassociateFileSystemAliases, __VA_ARGS__)
#define DisassociateFileSystemAliasesCallable(REQUEST)  SubmitCallable(&FSxClient::DisassociateFileSystemAliases, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&FSxClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&FSxClient::ListTagsForResource, REQUEST)

#define ReleaseFileSystemNfsV3LocksAsync(...)  SubmitAsync(&FSxClient::ReleaseFileSystemNfsV3Locks, __VA_ARGS__)
#define ReleaseFileSystemNfsV3LocksCallable(REQUEST)  SubmitCallable(&FSxClient::ReleaseFileSystemNfsV3Locks, REQUEST)

#define RestoreVolumeFromSnapshotAsync(...)  SubmitAsync(&FSxClient::RestoreVolumeFromSnapshot, __VA_ARGS__)
#define RestoreVolumeFromSnapshotCallable(REQUEST)  SubmitCallable(&FSxClient::RestoreVolumeFromSnapshot, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&FSxClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&FSxClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&FSxClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&FSxClient::UntagResource, REQUEST)

#define UpdateDataRepositoryAssociationAsync(...)  SubmitAsync(&FSxClient::UpdateDataRepositoryAssociation, __VA_ARGS__)
#define UpdateDataRepositoryAssociationCallable(REQUEST)  SubmitCallable(&FSxClient::UpdateDataRepositoryAssociation, REQUEST)

#define UpdateFileCacheAsync(...)  SubmitAsync(&FSxClient::UpdateFileCache, __VA_ARGS__)
#define UpdateFileCacheCallable(REQUEST)  SubmitCallable(&FSxClient::UpdateFileCache, REQUEST)

#define UpdateFileSystemAsync(...)  SubmitAsync(&FSxClient::UpdateFileSystem, __VA_ARGS__)
#define UpdateFileSystemCallable(REQUEST)  SubmitCallable(&FSxClient::UpdateFileSystem, REQUEST)

#define UpdateSnapshotAsync(...)  SubmitAsync(&FSxClient::UpdateSnapshot, __VA_ARGS__)
#define UpdateSnapshotCallable(REQUEST)  SubmitCallable(&FSxClient::UpdateSnapshot, REQUEST)

#define UpdateStorageVirtualMachineAsync(...)  SubmitAsync(&FSxClient::UpdateStorageVirtualMachine, __VA_ARGS__)
#define UpdateStorageVirtualMachineCallable(REQUEST)  SubmitCallable(&FSxClient::UpdateStorageVirtualMachine, REQUEST)

#define UpdateVolumeAsync(...)  SubmitAsync(&FSxClient::UpdateVolume, __VA_ARGS__)
#define UpdateVolumeCallable(REQUEST)  SubmitCallable(&FSxClient::UpdateVolume, REQUEST)

