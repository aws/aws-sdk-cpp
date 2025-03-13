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
    AWS_BACKUP_API UpdateRecoveryPointIndexSettingsResult() = default;
    AWS_BACKUP_API UpdateRecoveryPointIndexSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API UpdateRecoveryPointIndexSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    UpdateRecoveryPointIndexSettingsResult& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
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
    UpdateRecoveryPointIndexSettingsResult& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status for the backup index associated with the specified
     * recovery point.</p> <p>Statuses are: <code>PENDING</code> | <code>ACTIVE</code>
     * | <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline IndexStatus GetIndexStatus() const { return m_indexStatus; }
    inline void SetIndexStatus(IndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline UpdateRecoveryPointIndexSettingsResult& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Index can have 1 of 2 possible values, either <code>ENABLED</code> or
     * <code>DISABLED</code>.</p> <p>A value of <code>ENABLED</code> means a backup
     * index for an eligible <code>ACTIVE</code> recovery point has been created.</p>
     * <p>A value of <code>DISABLED</code> means a backup index was deleted.</p>
     */
    inline Index GetIndex() const { return m_index; }
    inline void SetIndex(Index value) { m_indexHasBeenSet = true; m_index = value; }
    inline UpdateRecoveryPointIndexSettingsResult& WithIndex(Index value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRecoveryPointIndexSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    IndexStatus m_indexStatus{IndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;

    Index m_index{Index::NOT_SET};
    bool m_indexHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
