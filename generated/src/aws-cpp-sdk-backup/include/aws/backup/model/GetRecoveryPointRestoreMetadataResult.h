/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class GetRecoveryPointRestoreMetadataResult
  {
  public:
    AWS_BACKUP_API GetRecoveryPointRestoreMetadataResult() = default;
    AWS_BACKUP_API GetRecoveryPointRestoreMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRecoveryPointRestoreMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    GetRecoveryPointRestoreMetadataResult& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    GetRecoveryPointRestoreMetadataResult& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of metadata key-value pairs that describe the original configuration
     * of the backed-up resource. These values vary depending on the service that is
     * being restored.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRestoreMetadata() const { return m_restoreMetadata; }
    template<typename RestoreMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetRestoreMetadata(RestoreMetadataT&& value) { m_restoreMetadataHasBeenSet = true; m_restoreMetadata = std::forward<RestoreMetadataT>(value); }
    template<typename RestoreMetadataT = Aws::Map<Aws::String, Aws::String>>
    GetRecoveryPointRestoreMetadataResult& WithRestoreMetadata(RestoreMetadataT&& value) { SetRestoreMetadata(std::forward<RestoreMetadataT>(value)); return *this;}
    template<typename RestoreMetadataKeyT = Aws::String, typename RestoreMetadataValueT = Aws::String>
    GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(RestoreMetadataKeyT&& key, RestoreMetadataValueT&& value) {
      m_restoreMetadataHasBeenSet = true; m_restoreMetadata.emplace(std::forward<RestoreMetadataKeyT>(key), std::forward<RestoreMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The resource type of the recovery point.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    GetRecoveryPointRestoreMetadataResult& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecoveryPointRestoreMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_restoreMetadata;
    bool m_restoreMetadataHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
