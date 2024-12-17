/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/IndexStatus.h>
#include <aws/backup/model/Index.h>
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
  class UpdateRecoveryPointIndexSettingsResult
  {
  public:
    AWS_BACKUP_API UpdateRecoveryPointIndexSettingsResult();
    AWS_BACKUP_API UpdateRecoveryPointIndexSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API UpdateRecoveryPointIndexSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }
    inline UpdateRecoveryPointIndexSettingsResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
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
    inline UpdateRecoveryPointIndexSettingsResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status for the backup index associated with the specified
     * recovery point.</p> <p>Statuses are: <code>PENDING</code> | <code>ACTIVE</code>
     * | <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatus = value; }
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatus = std::move(value); }
    inline UpdateRecoveryPointIndexSettingsResult& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Index can have 1 of 2 possible values, either <code>ENABLED</code> or
     * <code>DISABLED</code>.</p> <p>A value of <code>ENABLED</code> means a backup
     * index for an eligible <code>ACTIVE</code> recovery point has been created.</p>
     * <p>A value of <code>DISABLED</code> means a backup index was deleted.</p>
     */
    inline const Index& GetIndex() const{ return m_index; }
    inline void SetIndex(const Index& value) { m_index = value; }
    inline void SetIndex(Index&& value) { m_index = std::move(value); }
    inline UpdateRecoveryPointIndexSettingsResult& WithIndex(const Index& value) { SetIndex(value); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithIndex(Index&& value) { SetIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRecoveryPointIndexSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRecoveryPointIndexSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;

    Aws::String m_recoveryPointArn;

    IndexStatus m_indexStatus;

    Index m_index;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
