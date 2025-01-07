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
    AWS_BACKUP_API GetRecoveryPointIndexDetailsResult();
    AWS_BACKUP_API GetRecoveryPointIndexDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRecoveryPointIndexDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }
    inline GetRecoveryPointIndexDetailsResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies the backup vault where the recovery point
     * index is stored.</p> <p>For example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }
    inline GetRecoveryPointIndexDetailsResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of the Amazon Resource Name (ARN) that uniquely identifies the
     * source resource.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const{ return m_sourceResourceArn; }
    inline void SetSourceResourceArn(const Aws::String& value) { m_sourceResourceArn = value; }
    inline void SetSourceResourceArn(Aws::String&& value) { m_sourceResourceArn = std::move(value); }
    inline void SetSourceResourceArn(const char* value) { m_sourceResourceArn.assign(value); }
    inline GetRecoveryPointIndexDetailsResult& WithSourceResourceArn(const Aws::String& value) { SetSourceResourceArn(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithSourceResourceArn(Aws::String&& value) { SetSourceResourceArn(std::move(value)); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithSourceResourceArn(const char* value) { SetSourceResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup index was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexCreationDate() const{ return m_indexCreationDate; }
    inline void SetIndexCreationDate(const Aws::Utils::DateTime& value) { m_indexCreationDate = value; }
    inline void SetIndexCreationDate(Aws::Utils::DateTime&& value) { m_indexCreationDate = std::move(value); }
    inline GetRecoveryPointIndexDetailsResult& WithIndexCreationDate(const Aws::Utils::DateTime& value) { SetIndexCreationDate(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithIndexCreationDate(Aws::Utils::DateTime&& value) { SetIndexCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup index was deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexDeletionDate() const{ return m_indexDeletionDate; }
    inline void SetIndexDeletionDate(const Aws::Utils::DateTime& value) { m_indexDeletionDate = value; }
    inline void SetIndexDeletionDate(Aws::Utils::DateTime&& value) { m_indexDeletionDate = std::move(value); }
    inline GetRecoveryPointIndexDetailsResult& WithIndexDeletionDate(const Aws::Utils::DateTime& value) { SetIndexDeletionDate(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithIndexDeletionDate(Aws::Utils::DateTime&& value) { SetIndexDeletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup index finished creation, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexCompletionDate() const{ return m_indexCompletionDate; }
    inline void SetIndexCompletionDate(const Aws::Utils::DateTime& value) { m_indexCompletionDate = value; }
    inline void SetIndexCompletionDate(Aws::Utils::DateTime&& value) { m_indexCompletionDate = std::move(value); }
    inline GetRecoveryPointIndexDetailsResult& WithIndexCompletionDate(const Aws::Utils::DateTime& value) { SetIndexCompletionDate(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithIndexCompletionDate(Aws::Utils::DateTime&& value) { SetIndexCompletionDate(std::move(value)); return *this;}
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
    inline GetRecoveryPointIndexDetailsResult& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of a backup index associated with
     * the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const{ return m_indexStatusMessage; }
    inline void SetIndexStatusMessage(const Aws::String& value) { m_indexStatusMessage = value; }
    inline void SetIndexStatusMessage(Aws::String&& value) { m_indexStatusMessage = std::move(value); }
    inline void SetIndexStatusMessage(const char* value) { m_indexStatusMessage.assign(value); }
    inline GetRecoveryPointIndexDetailsResult& WithIndexStatusMessage(const Aws::String& value) { SetIndexStatusMessage(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithIndexStatusMessage(Aws::String&& value) { SetIndexStatusMessage(std::move(value)); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithIndexStatusMessage(const char* value) { SetIndexStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Count of items within the backup index associated with the recovery
     * point.</p>
     */
    inline long long GetTotalItemsIndexed() const{ return m_totalItemsIndexed; }
    inline void SetTotalItemsIndexed(long long value) { m_totalItemsIndexed = value; }
    inline GetRecoveryPointIndexDetailsResult& WithTotalItemsIndexed(long long value) { SetTotalItemsIndexed(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRecoveryPointIndexDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRecoveryPointIndexDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;

    Aws::String m_backupVaultArn;

    Aws::String m_sourceResourceArn;

    Aws::Utils::DateTime m_indexCreationDate;

    Aws::Utils::DateTime m_indexDeletionDate;

    Aws::Utils::DateTime m_indexCompletionDate;

    IndexStatus m_indexStatus;

    Aws::String m_indexStatusMessage;

    long long m_totalItemsIndexed;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
