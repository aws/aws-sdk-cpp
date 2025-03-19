/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class DeleteBackupPlanResult
  {
  public:
    AWS_BACKUP_API DeleteBackupPlanResult() = default;
    AWS_BACKUP_API DeleteBackupPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DeleteBackupPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
    template<typename BackupPlanIdT = Aws::String>
    void SetBackupPlanId(BackupPlanIdT&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::forward<BackupPlanIdT>(value); }
    template<typename BackupPlanIdT = Aws::String>
    DeleteBackupPlanResult& WithBackupPlanId(BackupPlanIdT&& value) { SetBackupPlanId(std::forward<BackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline const Aws::String& GetBackupPlanArn() const { return m_backupPlanArn; }
    template<typename BackupPlanArnT = Aws::String>
    void SetBackupPlanArn(BackupPlanArnT&& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = std::forward<BackupPlanArnT>(value); }
    template<typename BackupPlanArnT = Aws::String>
    DeleteBackupPlanResult& WithBackupPlanArn(BackupPlanArnT&& value) { SetBackupPlanArn(std::forward<BackupPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup plan is deleted, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>DeletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const { return m_deletionDate; }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    void SetDeletionDate(DeletionDateT&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::forward<DeletionDateT>(value); }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    DeleteBackupPlanResult& WithDeletionDate(DeletionDateT&& value) { SetDeletionDate(std::forward<DeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    DeleteBackupPlanResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteBackupPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::String m_backupPlanArn;
    bool m_backupPlanArnHasBeenSet = false;

    Aws::Utils::DateTime m_deletionDate{};
    bool m_deletionDateHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
