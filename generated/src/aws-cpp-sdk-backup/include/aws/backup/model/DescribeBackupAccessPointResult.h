/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/AccessPointStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {
class DescribeBackupAccessPointResult {
 public:
  AWS_BACKUP_API DescribeBackupAccessPointResult() = default;
  AWS_BACKUP_API DescribeBackupAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API DescribeBackupAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies the backup access
   * point.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  DescribeBackupAccessPointResult& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for the backup access point. After the backup access point reaches
   * the <code>AVAILABLE</code> status, this map contains
   * <code>S3AccessPointArn</code> and <code>S3AccessPointAlias</code>, which you use
   * with standard Amazon S3 read APIs to access the backup data. For continuous
   * recovery points, this map also contains <code>AccessPointInTime</code> (in
   * format <code>2021-11-27T03:30:27Z</code>). The access point provides access to
   * the content present in the backup at that specific time.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAccessPointMetadata() const { return m_accessPointMetadata; }
  template <typename AccessPointMetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetAccessPointMetadata(AccessPointMetadataT&& value) {
    m_accessPointMetadataHasBeenSet = true;
    m_accessPointMetadata = std::forward<AccessPointMetadataT>(value);
  }
  template <typename AccessPointMetadataT = Aws::Map<Aws::String, Aws::String>>
  DescribeBackupAccessPointResult& WithAccessPointMetadata(AccessPointMetadataT&& value) {
    SetAccessPointMetadata(std::forward<AccessPointMetadataT>(value));
    return *this;
  }
  template <typename AccessPointMetadataKeyT = Aws::String, typename AccessPointMetadataValueT = Aws::String>
  DescribeBackupAccessPointResult& AddAccessPointMetadata(AccessPointMetadataKeyT&& key, AccessPointMetadataValueT&& value) {
    m_accessPointMetadataHasBeenSet = true;
    m_accessPointMetadata.emplace(std::forward<AccessPointMetadataKeyT>(key), std::forward<AccessPointMetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the backup vault that contains the recovery
   * point.</p>
   */
  inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
  template <typename BackupVaultArnT = Aws::String>
  void SetBackupVaultArn(BackupVaultArnT&& value) {
    m_backupVaultArnHasBeenSet = true;
    m_backupVaultArn = std::forward<BackupVaultArnT>(value);
  }
  template <typename BackupVaultArnT = Aws::String>
  DescribeBackupAccessPointResult& WithBackupVaultArn(BackupVaultArnT&& value) {
    SetBackupVaultArn(std::forward<BackupVaultArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the backup vault that contains the recovery point.</p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  DescribeBackupAccessPointResult& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the backup access point was created, in Unix format
   * and Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeBackupAccessPointResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the backup access point.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeBackupAccessPointResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recovery point that the backup access
   * point provides access to.</p>
   */
  inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
  template <typename RecoveryPointArnT = Aws::String>
  void SetRecoveryPointArn(RecoveryPointArnT&& value) {
    m_recoveryPointArnHasBeenSet = true;
    m_recoveryPointArn = std::forward<RecoveryPointArnT>(value);
  }
  template <typename RecoveryPointArnT = Aws::String>
  DescribeBackupAccessPointResult& WithRecoveryPointArn(RecoveryPointArnT&& value) {
    SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that was backed up, such as an
   * Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  DescribeBackupAccessPointResult& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Amazon Web Services resource associated with the recovery point.
   * For example, <code>S3</code> for Amazon Simple Storage Service.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  DescribeBackupAccessPointResult& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the backup access point.</p>
   */
  inline AccessPointStatus GetStatus() const { return m_status; }
  inline void SetStatus(AccessPointStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeBackupAccessPointResult& WithStatus(AccessPointStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that provides additional detail about the status of the backup
   * access point, such as the reason a creation or deletion attempt failed.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  DescribeBackupAccessPointResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeBackupAccessPointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_accessPointArn;

  Aws::Map<Aws::String, Aws::String> m_accessPointMetadata;

  Aws::String m_backupVaultArn;

  Aws::String m_backupVaultName;

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_name;

  Aws::String m_recoveryPointArn;

  Aws::String m_resourceArn;

  Aws::String m_resourceType;

  AccessPointStatus m_status{AccessPointStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accessPointArnHasBeenSet = false;
  bool m_accessPointMetadataHasBeenSet = false;
  bool m_backupVaultArnHasBeenSet = false;
  bool m_backupVaultNameHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_recoveryPointArnHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
