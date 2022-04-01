﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/BackupLifecycle.h>
#include <aws/fsx/model/BackupFailureDetails.h>
#include <aws/fsx/model/BackupType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/FileSystem.h>
#include <aws/fsx/model/ActiveDirectoryBackupAttributes.h>
#include <aws/fsx/model/ResourceType.h>
#include <aws/fsx/model/Volume.h>
#include <aws/fsx/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>A backup of an Amazon FSx for Windows File Server, Amazon FSx for Lustre file
   * system, Amazon FSx for NetApp ONTAP volume, or Amazon FSx for OpenZFS file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/Backup">AWS API
   * Reference</a></p>
   */
  class AWS_FSX_API Backup
  {
  public:
    Backup();
    Backup(Aws::Utils::Json::JsonView jsonValue);
    Backup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the backup.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The ID of the backup.</p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p>The ID of the backup.</p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p>The ID of the backup.</p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p>The ID of the backup.</p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p>The ID of the backup.</p>
     */
    inline Backup& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The ID of the backup.</p>
     */
    inline Backup& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the backup.</p>
     */
    inline Backup& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>The lifecycle status of the backup.</p> <ul> <li> <p> <code>AVAILABLE</code>
     * - The backup is fully available.</p> </li> <li> <p> <code>PENDING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx hasn't started
     * creating the backup.</p> </li> <li> <p> <code>CREATING</code> - Amazon FSx is
     * creating the backup.</p> </li> <li> <p> <code>TRANSFERRING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx is transferring
     * the backup to Amazon S3.</p> </li> <li> <p> <code>COPYING</code> - Amazon FSx is
     * copying the backup.</p> </li> <li> <p> <code>DELETED</code> - Amazon FSx deleted
     * the backup and it's no longer available.</p> </li> <li> <p> <code>FAILED</code>
     * - Amazon FSx couldn't finish the backup.</p> </li> </ul>
     */
    inline const BackupLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the backup.</p> <ul> <li> <p> <code>AVAILABLE</code>
     * - The backup is fully available.</p> </li> <li> <p> <code>PENDING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx hasn't started
     * creating the backup.</p> </li> <li> <p> <code>CREATING</code> - Amazon FSx is
     * creating the backup.</p> </li> <li> <p> <code>TRANSFERRING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx is transferring
     * the backup to Amazon S3.</p> </li> <li> <p> <code>COPYING</code> - Amazon FSx is
     * copying the backup.</p> </li> <li> <p> <code>DELETED</code> - Amazon FSx deleted
     * the backup and it's no longer available.</p> </li> <li> <p> <code>FAILED</code>
     * - Amazon FSx couldn't finish the backup.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle status of the backup.</p> <ul> <li> <p> <code>AVAILABLE</code>
     * - The backup is fully available.</p> </li> <li> <p> <code>PENDING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx hasn't started
     * creating the backup.</p> </li> <li> <p> <code>CREATING</code> - Amazon FSx is
     * creating the backup.</p> </li> <li> <p> <code>TRANSFERRING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx is transferring
     * the backup to Amazon S3.</p> </li> <li> <p> <code>COPYING</code> - Amazon FSx is
     * copying the backup.</p> </li> <li> <p> <code>DELETED</code> - Amazon FSx deleted
     * the backup and it's no longer available.</p> </li> <li> <p> <code>FAILED</code>
     * - Amazon FSx couldn't finish the backup.</p> </li> </ul>
     */
    inline void SetLifecycle(const BackupLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the backup.</p> <ul> <li> <p> <code>AVAILABLE</code>
     * - The backup is fully available.</p> </li> <li> <p> <code>PENDING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx hasn't started
     * creating the backup.</p> </li> <li> <p> <code>CREATING</code> - Amazon FSx is
     * creating the backup.</p> </li> <li> <p> <code>TRANSFERRING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx is transferring
     * the backup to Amazon S3.</p> </li> <li> <p> <code>COPYING</code> - Amazon FSx is
     * copying the backup.</p> </li> <li> <p> <code>DELETED</code> - Amazon FSx deleted
     * the backup and it's no longer available.</p> </li> <li> <p> <code>FAILED</code>
     * - Amazon FSx couldn't finish the backup.</p> </li> </ul>
     */
    inline void SetLifecycle(BackupLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the backup.</p> <ul> <li> <p> <code>AVAILABLE</code>
     * - The backup is fully available.</p> </li> <li> <p> <code>PENDING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx hasn't started
     * creating the backup.</p> </li> <li> <p> <code>CREATING</code> - Amazon FSx is
     * creating the backup.</p> </li> <li> <p> <code>TRANSFERRING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx is transferring
     * the backup to Amazon S3.</p> </li> <li> <p> <code>COPYING</code> - Amazon FSx is
     * copying the backup.</p> </li> <li> <p> <code>DELETED</code> - Amazon FSx deleted
     * the backup and it's no longer available.</p> </li> <li> <p> <code>FAILED</code>
     * - Amazon FSx couldn't finish the backup.</p> </li> </ul>
     */
    inline Backup& WithLifecycle(const BackupLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the backup.</p> <ul> <li> <p> <code>AVAILABLE</code>
     * - The backup is fully available.</p> </li> <li> <p> <code>PENDING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx hasn't started
     * creating the backup.</p> </li> <li> <p> <code>CREATING</code> - Amazon FSx is
     * creating the backup.</p> </li> <li> <p> <code>TRANSFERRING</code> - For
     * user-initiated backups on Lustre file systems only; Amazon FSx is transferring
     * the backup to Amazon S3.</p> </li> <li> <p> <code>COPYING</code> - Amazon FSx is
     * copying the backup.</p> </li> <li> <p> <code>DELETED</code> - Amazon FSx deleted
     * the backup and it's no longer available.</p> </li> <li> <p> <code>FAILED</code>
     * - Amazon FSx couldn't finish the backup.</p> </li> </ul>
     */
    inline Backup& WithLifecycle(BackupLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>Details explaining any failures that occurred when creating a backup.</p>
     */
    inline const BackupFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Details explaining any failures that occurred when creating a backup.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>Details explaining any failures that occurred when creating a backup.</p>
     */
    inline void SetFailureDetails(const BackupFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>Details explaining any failures that occurred when creating a backup.</p>
     */
    inline void SetFailureDetails(BackupFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>Details explaining any failures that occurred when creating a backup.</p>
     */
    inline Backup& WithFailureDetails(const BackupFailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Details explaining any failures that occurred when creating a backup.</p>
     */
    inline Backup& WithFailureDetails(BackupFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The type of the file-system backup.</p>
     */
    inline const BackupType& GetType() const{ return m_type; }

    /**
     * <p>The type of the file-system backup.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the file-system backup.</p>
     */
    inline void SetType(const BackupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the file-system backup.</p>
     */
    inline void SetType(BackupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the file-system backup.</p>
     */
    inline Backup& WithType(const BackupType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the file-system backup.</p>
     */
    inline Backup& WithType(BackupType&& value) { SetType(std::move(value)); return *this;}


    
    inline int GetProgressPercent() const{ return m_progressPercent; }

    
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    
    inline void SetProgressPercent(int value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    
    inline Backup& WithProgressPercent(int value) { SetProgressPercent(value); return *this;}


    /**
     * <p>The time when a particular backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when a particular backup was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when a particular backup was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when a particular backup was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when a particular backup was created.</p>
     */
    inline Backup& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when a particular backup was created.</p>
     */
    inline Backup& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline Backup& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline Backup& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
     * the Amazon FSx file system's data at rest. </p>
     */
    inline Backup& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline Backup& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline Backup& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
     */
    inline Backup& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline Backup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline Backup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline Backup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with a particular file system.</p>
     */
    inline Backup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata of the file system associated with the backup. This metadata is
     * persisted even if the file system is deleted.</p>
     */
    inline const FileSystem& GetFileSystem() const{ return m_fileSystem; }

    /**
     * <p>The metadata of the file system associated with the backup. This metadata is
     * persisted even if the file system is deleted.</p>
     */
    inline bool FileSystemHasBeenSet() const { return m_fileSystemHasBeenSet; }

    /**
     * <p>The metadata of the file system associated with the backup. This metadata is
     * persisted even if the file system is deleted.</p>
     */
    inline void SetFileSystem(const FileSystem& value) { m_fileSystemHasBeenSet = true; m_fileSystem = value; }

    /**
     * <p>The metadata of the file system associated with the backup. This metadata is
     * persisted even if the file system is deleted.</p>
     */
    inline void SetFileSystem(FileSystem&& value) { m_fileSystemHasBeenSet = true; m_fileSystem = std::move(value); }

    /**
     * <p>The metadata of the file system associated with the backup. This metadata is
     * persisted even if the file system is deleted.</p>
     */
    inline Backup& WithFileSystem(const FileSystem& value) { SetFileSystem(value); return *this;}

    /**
     * <p>The metadata of the file system associated with the backup. This metadata is
     * persisted even if the file system is deleted.</p>
     */
    inline Backup& WithFileSystem(FileSystem&& value) { SetFileSystem(std::move(value)); return *this;}


    /**
     * <p>The configuration of the self-managed Microsoft Active Directory directory to
     * which the Windows File Server instance is joined.</p>
     */
    inline const ActiveDirectoryBackupAttributes& GetDirectoryInformation() const{ return m_directoryInformation; }

    /**
     * <p>The configuration of the self-managed Microsoft Active Directory directory to
     * which the Windows File Server instance is joined.</p>
     */
    inline bool DirectoryInformationHasBeenSet() const { return m_directoryInformationHasBeenSet; }

    /**
     * <p>The configuration of the self-managed Microsoft Active Directory directory to
     * which the Windows File Server instance is joined.</p>
     */
    inline void SetDirectoryInformation(const ActiveDirectoryBackupAttributes& value) { m_directoryInformationHasBeenSet = true; m_directoryInformation = value; }

    /**
     * <p>The configuration of the self-managed Microsoft Active Directory directory to
     * which the Windows File Server instance is joined.</p>
     */
    inline void SetDirectoryInformation(ActiveDirectoryBackupAttributes&& value) { m_directoryInformationHasBeenSet = true; m_directoryInformation = std::move(value); }

    /**
     * <p>The configuration of the self-managed Microsoft Active Directory directory to
     * which the Windows File Server instance is joined.</p>
     */
    inline Backup& WithDirectoryInformation(const ActiveDirectoryBackupAttributes& value) { SetDirectoryInformation(value); return *this;}

    /**
     * <p>The configuration of the self-managed Microsoft Active Directory directory to
     * which the Windows File Server instance is joined.</p>
     */
    inline Backup& WithDirectoryInformation(ActiveDirectoryBackupAttributes&& value) { SetDirectoryInformation(std::move(value)); return *this;}


    
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    
    inline Backup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    
    inline Backup& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    
    inline Backup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    
    inline const Aws::String& GetSourceBackupId() const{ return m_sourceBackupId; }

    
    inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }

    
    inline void SetSourceBackupId(const Aws::String& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = value; }

    
    inline void SetSourceBackupId(Aws::String&& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = std::move(value); }

    
    inline void SetSourceBackupId(const char* value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId.assign(value); }

    
    inline Backup& WithSourceBackupId(const Aws::String& value) { SetSourceBackupId(value); return *this;}

    
    inline Backup& WithSourceBackupId(Aws::String&& value) { SetSourceBackupId(std::move(value)); return *this;}

    
    inline Backup& WithSourceBackupId(const char* value) { SetSourceBackupId(value); return *this;}


    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline const Aws::String& GetSourceBackupRegion() const{ return m_sourceBackupRegion; }

    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline bool SourceBackupRegionHasBeenSet() const { return m_sourceBackupRegionHasBeenSet; }

    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline void SetSourceBackupRegion(const Aws::String& value) { m_sourceBackupRegionHasBeenSet = true; m_sourceBackupRegion = value; }

    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline void SetSourceBackupRegion(Aws::String&& value) { m_sourceBackupRegionHasBeenSet = true; m_sourceBackupRegion = std::move(value); }

    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline void SetSourceBackupRegion(const char* value) { m_sourceBackupRegionHasBeenSet = true; m_sourceBackupRegion.assign(value); }

    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline Backup& WithSourceBackupRegion(const Aws::String& value) { SetSourceBackupRegion(value); return *this;}

    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline Backup& WithSourceBackupRegion(Aws::String&& value) { SetSourceBackupRegion(std::move(value)); return *this;}

    /**
     * <p>The source Region of the backup. Specifies the Region from where this backup
     * is copied.</p>
     */
    inline Backup& WithSourceBackupRegion(const char* value) { SetSourceBackupRegion(value); return *this;}


    /**
     * <p>Specifies the resource type that's backed up.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies the resource type that's backed up.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies the resource type that's backed up.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies the resource type that's backed up.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies the resource type that's backed up.</p>
     */
    inline Backup& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies the resource type that's backed up.</p>
     */
    inline Backup& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    
    inline const Volume& GetVolume() const{ return m_volume; }

    
    inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }

    
    inline void SetVolume(const Volume& value) { m_volumeHasBeenSet = true; m_volume = value; }

    
    inline void SetVolume(Volume&& value) { m_volumeHasBeenSet = true; m_volume = std::move(value); }

    
    inline Backup& WithVolume(const Volume& value) { SetVolume(value); return *this;}

    
    inline Backup& WithVolume(Volume&& value) { SetVolume(std::move(value)); return *this;}

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    BackupLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    BackupFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;

    BackupType m_type;
    bool m_typeHasBeenSet;

    int m_progressPercent;
    bool m_progressPercentHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    FileSystem m_fileSystem;
    bool m_fileSystemHasBeenSet;

    ActiveDirectoryBackupAttributes m_directoryInformation;
    bool m_directoryInformationHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet;

    Aws::String m_sourceBackupRegion;
    bool m_sourceBackupRegionHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Volume m_volume;
    bool m_volumeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
