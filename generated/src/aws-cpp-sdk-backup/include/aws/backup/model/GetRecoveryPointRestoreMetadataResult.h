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
    AWS_BACKUP_API GetRecoveryPointRestoreMetadataResult();
    AWS_BACKUP_API GetRecoveryPointRestoreMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRecoveryPointRestoreMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }
    inline GetRecoveryPointRestoreMetadataResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }
    inline GetRecoveryPointRestoreMetadataResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of metadata key-value pairs that describe the original configuration
     * of the backed-up resource. These values vary depending on the service that is
     * being restored.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRestoreMetadata() const{ return m_restoreMetadata; }
    inline void SetRestoreMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_restoreMetadata = value; }
    inline void SetRestoreMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_restoreMetadata = std::move(value); }
    inline GetRecoveryPointRestoreMetadataResult& WithRestoreMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetRestoreMetadata(value); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithRestoreMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetRestoreMetadata(std::move(value)); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const Aws::String& key, const Aws::String& value) { m_restoreMetadata.emplace(key, value); return *this; }
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(Aws::String&& key, const Aws::String& value) { m_restoreMetadata.emplace(std::move(key), value); return *this; }
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const Aws::String& key, Aws::String&& value) { m_restoreMetadata.emplace(key, std::move(value)); return *this; }
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(Aws::String&& key, Aws::String&& value) { m_restoreMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const char* key, Aws::String&& value) { m_restoreMetadata.emplace(key, std::move(value)); return *this; }
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(Aws::String&& key, const char* value) { m_restoreMetadata.emplace(std::move(key), value); return *this; }
    inline GetRecoveryPointRestoreMetadataResult& AddRestoreMetadata(const char* key, const char* value) { m_restoreMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type of the recovery point.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }
    inline GetRecoveryPointRestoreMetadataResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRecoveryPointRestoreMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRecoveryPointRestoreMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultArn;

    Aws::String m_recoveryPointArn;

    Aws::Map<Aws::String, Aws::String> m_restoreMetadata;

    Aws::String m_resourceType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
