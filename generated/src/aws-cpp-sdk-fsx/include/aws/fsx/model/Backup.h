/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/ActiveDirectoryBackupAttributes.h>
#include <aws/fsx/model/BackupFailureDetails.h>
#include <aws/fsx/model/BackupLifecycle.h>
#include <aws/fsx/model/BackupType.h>
#include <aws/fsx/model/FileSystem.h>
#include <aws/fsx/model/ResourceType.h>
#include <aws/fsx/model/Tag.h>
#include <aws/fsx/model/Volume.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>A backup of an Amazon FSx for Windows File Server, Amazon FSx for Lustre file
 * system, Amazon FSx for NetApp ONTAP volume, or Amazon FSx for OpenZFS file
 * system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/Backup">AWS API
 * Reference</a></p>
 */
class Backup {
 public:
  AWS_FSX_API Backup() = default;
  AWS_FSX_API Backup(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Backup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the backup.</p>
   */
  inline const Aws::String& GetBackupId() const { return m_backupId; }
  inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
  template <typename BackupIdT = Aws::String>
  void SetBackupId(BackupIdT&& value) {
    m_backupIdHasBeenSet = true;
    m_backupId = std::forward<BackupIdT>(value);
  }
  template <typename BackupIdT = Aws::String>
  Backup& WithBackupId(BackupIdT&& value) {
    SetBackupId(std::forward<BackupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
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
  inline BackupLifecycle GetLifecycle() const { return m_lifecycle; }
  inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
  inline void SetLifecycle(BackupLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline Backup& WithLifecycle(BackupLifecycle value) {
    SetLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details explaining any failures that occurred when creating a backup.</p>
   */
  inline const BackupFailureDetails& GetFailureDetails() const { return m_failureDetails; }
  inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
  template <typename FailureDetailsT = BackupFailureDetails>
  void SetFailureDetails(FailureDetailsT&& value) {
    m_failureDetailsHasBeenSet = true;
    m_failureDetails = std::forward<FailureDetailsT>(value);
  }
  template <typename FailureDetailsT = BackupFailureDetails>
  Backup& WithFailureDetails(FailureDetailsT&& value) {
    SetFailureDetails(std::forward<FailureDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the file-system backup.</p>
   */
  inline BackupType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(BackupType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Backup& WithType(BackupType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetProgressPercent() const { return m_progressPercent; }
  inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
  inline void SetProgressPercent(int value) {
    m_progressPercentHasBeenSet = true;
    m_progressPercent = value;
  }
  inline Backup& WithProgressPercent(int value) {
    SetProgressPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when a particular backup was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  Backup& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Key Management Service (KMS) key used to encrypt the backup of
   * the Amazon FSx file system's data at rest. </p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  Backup& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the backup resource.</p>
   */
  inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
  inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
  template <typename ResourceARNT = Aws::String>
  void SetResourceARN(ResourceARNT&& value) {
    m_resourceARNHasBeenSet = true;
    m_resourceARN = std::forward<ResourceARNT>(value);
  }
  template <typename ResourceARNT = Aws::String>
  Backup& WithResourceARN(ResourceARNT&& value) {
    SetResourceARN(std::forward<ResourceARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with a particular file system.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  Backup& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  Backup& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata of the file system associated with the backup. This metadata is
   * persisted even if the file system is deleted.</p>
   */
  inline const FileSystem& GetFileSystem() const { return m_fileSystem; }
  inline bool FileSystemHasBeenSet() const { return m_fileSystemHasBeenSet; }
  template <typename FileSystemT = FileSystem>
  void SetFileSystem(FileSystemT&& value) {
    m_fileSystemHasBeenSet = true;
    m_fileSystem = std::forward<FileSystemT>(value);
  }
  template <typename FileSystemT = FileSystem>
  Backup& WithFileSystem(FileSystemT&& value) {
    SetFileSystem(std::forward<FileSystemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the self-managed Microsoft Active Directory directory to
   * which the Windows File Server instance is joined.</p>
   */
  inline const ActiveDirectoryBackupAttributes& GetDirectoryInformation() const { return m_directoryInformation; }
  inline bool DirectoryInformationHasBeenSet() const { return m_directoryInformationHasBeenSet; }
  template <typename DirectoryInformationT = ActiveDirectoryBackupAttributes>
  void SetDirectoryInformation(DirectoryInformationT&& value) {
    m_directoryInformationHasBeenSet = true;
    m_directoryInformation = std::forward<DirectoryInformationT>(value);
  }
  template <typename DirectoryInformationT = ActiveDirectoryBackupAttributes>
  Backup& WithDirectoryInformation(DirectoryInformationT&& value) {
    SetDirectoryInformation(std::forward<DirectoryInformationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  Backup& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSourceBackupId() const { return m_sourceBackupId; }
  inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }
  template <typename SourceBackupIdT = Aws::String>
  void SetSourceBackupId(SourceBackupIdT&& value) {
    m_sourceBackupIdHasBeenSet = true;
    m_sourceBackupId = std::forward<SourceBackupIdT>(value);
  }
  template <typename SourceBackupIdT = Aws::String>
  Backup& WithSourceBackupId(SourceBackupIdT&& value) {
    SetSourceBackupId(std::forward<SourceBackupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source Region of the backup. Specifies the Region from where this backup
   * is copied.</p>
   */
  inline const Aws::String& GetSourceBackupRegion() const { return m_sourceBackupRegion; }
  inline bool SourceBackupRegionHasBeenSet() const { return m_sourceBackupRegionHasBeenSet; }
  template <typename SourceBackupRegionT = Aws::String>
  void SetSourceBackupRegion(SourceBackupRegionT&& value) {
    m_sourceBackupRegionHasBeenSet = true;
    m_sourceBackupRegion = std::forward<SourceBackupRegionT>(value);
  }
  template <typename SourceBackupRegionT = Aws::String>
  Backup& WithSourceBackupRegion(SourceBackupRegionT&& value) {
    SetSourceBackupRegion(std::forward<SourceBackupRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the resource type that's backed up.</p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline Backup& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Volume& GetVolume() const { return m_volume; }
  inline bool VolumeHasBeenSet() const { return m_volumeHasBeenSet; }
  template <typename VolumeT = Volume>
  void SetVolume(VolumeT&& value) {
    m_volumeHasBeenSet = true;
    m_volume = std::forward<VolumeT>(value);
  }
  template <typename VolumeT = Volume>
  Backup& WithVolume(VolumeT&& value) {
    SetVolume(std::forward<VolumeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The size of the backup in bytes. This represents the amount of data that the
   * file system would contain if you restore this backup. </p>
   */
  inline long long GetSizeInBytes() const { return m_sizeInBytes; }
  inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
  inline void SetSizeInBytes(long long value) {
    m_sizeInBytesHasBeenSet = true;
    m_sizeInBytes = value;
  }
  inline Backup& WithSizeInBytes(long long value) {
    SetSizeInBytes(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_backupId;

  BackupLifecycle m_lifecycle{BackupLifecycle::NOT_SET};

  BackupFailureDetails m_failureDetails;

  BackupType m_type{BackupType::NOT_SET};

  int m_progressPercent{0};

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_kmsKeyId;

  Aws::String m_resourceARN;

  Aws::Vector<Tag> m_tags;

  FileSystem m_fileSystem;

  ActiveDirectoryBackupAttributes m_directoryInformation;

  Aws::String m_ownerId;

  Aws::String m_sourceBackupId;

  Aws::String m_sourceBackupRegion;

  ResourceType m_resourceType{ResourceType::NOT_SET};

  Volume m_volume;

  long long m_sizeInBytes{0};
  bool m_backupIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_failureDetailsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_progressPercentHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_resourceARNHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_fileSystemHasBeenSet = false;
  bool m_directoryInformationHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_sourceBackupIdHasBeenSet = false;
  bool m_sourceBackupRegionHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_volumeHasBeenSet = false;
  bool m_sizeInBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
