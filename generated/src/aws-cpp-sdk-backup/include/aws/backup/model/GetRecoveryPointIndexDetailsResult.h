/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/IndexStatus.h>
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
  class GetRecoveryPointIndexDetailsResult
  {
  public:
    AWS_BACKUP_API GetRecoveryPointIndexDetailsResult() = default;
    AWS_BACKUP_API GetRecoveryPointIndexDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRecoveryPointIndexDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    GetRecoveryPointIndexDetailsResult& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies the backup vault where the recovery point
     * index is stored.</p> <p>For example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    GetRecoveryPointIndexDetailsResult& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of the Amazon Resource Name (ARN) that uniquely identifies the
     * source resource.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const { return m_sourceResourceArn; }
    template<typename SourceResourceArnT = Aws::String>
    void SetSourceResourceArn(SourceResourceArnT&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::forward<SourceResourceArnT>(value); }
    template<typename SourceResourceArnT = Aws::String>
    GetRecoveryPointIndexDetailsResult& WithSourceResourceArn(SourceResourceArnT&& value) { SetSourceResourceArn(std::forward<SourceResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup index was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexCreationDate() const { return m_indexCreationDate; }
    template<typename IndexCreationDateT = Aws::Utils::DateTime>
    void SetIndexCreationDate(IndexCreationDateT&& value) { m_indexCreationDateHasBeenSet = true; m_indexCreationDate = std::forward<IndexCreationDateT>(value); }
    template<typename IndexCreationDateT = Aws::Utils::DateTime>
    GetRecoveryPointIndexDetailsResult& WithIndexCreationDate(IndexCreationDateT&& value) { SetIndexCreationDate(std::forward<IndexCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup index was deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexDeletionDate() const { return m_indexDeletionDate; }
    template<typename IndexDeletionDateT = Aws::Utils::DateTime>
    void SetIndexDeletionDate(IndexDeletionDateT&& value) { m_indexDeletionDateHasBeenSet = true; m_indexDeletionDate = std::forward<IndexDeletionDateT>(value); }
    template<typename IndexDeletionDateT = Aws::Utils::DateTime>
    GetRecoveryPointIndexDetailsResult& WithIndexDeletionDate(IndexDeletionDateT&& value) { SetIndexDeletionDate(std::forward<IndexDeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup index finished creation, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexCompletionDate() const { return m_indexCompletionDate; }
    template<typename IndexCompletionDateT = Aws::Utils::DateTime>
    void SetIndexCompletionDate(IndexCompletionDateT&& value) { m_indexCompletionDateHasBeenSet = true; m_indexCompletionDate = std::forward<IndexCompletionDateT>(value); }
    template<typename IndexCompletionDateT = Aws::Utils::DateTime>
    GetRecoveryPointIndexDetailsResult& WithIndexCompletionDate(IndexCompletionDateT&& value) { SetIndexCompletionDate(std::forward<IndexCompletionDateT>(value)); return *this;}
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
    inline GetRecoveryPointIndexDetailsResult& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of a backup index associated with
     * the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const { return m_indexStatusMessage; }
    template<typename IndexStatusMessageT = Aws::String>
    void SetIndexStatusMessage(IndexStatusMessageT&& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = std::forward<IndexStatusMessageT>(value); }
    template<typename IndexStatusMessageT = Aws::String>
    GetRecoveryPointIndexDetailsResult& WithIndexStatusMessage(IndexStatusMessageT&& value) { SetIndexStatusMessage(std::forward<IndexStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Count of items within the backup index associated with the recovery
     * point.</p>
     */
    inline long long GetTotalItemsIndexed() const { return m_totalItemsIndexed; }
    inline void SetTotalItemsIndexed(long long value) { m_totalItemsIndexedHasBeenSet = true; m_totalItemsIndexed = value; }
    inline GetRecoveryPointIndexDetailsResult& WithTotalItemsIndexed(long long value) { SetTotalItemsIndexed(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecoveryPointIndexDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_indexCreationDate{};
    bool m_indexCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_indexDeletionDate{};
    bool m_indexDeletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_indexCompletionDate{};
    bool m_indexCompletionDateHasBeenSet = false;

    IndexStatus m_indexStatus{IndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;

    Aws::String m_indexStatusMessage;
    bool m_indexStatusMessageHasBeenSet = false;

    long long m_totalItemsIndexed{0};
    bool m_totalItemsIndexedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
