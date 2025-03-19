/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/BackupSelection.h>
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
  class GetBackupSelectionResult
  {
  public:
    AWS_BACKUP_API GetBackupSelectionResult() = default;
    AWS_BACKUP_API GetBackupSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline const BackupSelection& GetBackupSelection() const { return m_backupSelection; }
    template<typename BackupSelectionT = BackupSelection>
    void SetBackupSelection(BackupSelectionT&& value) { m_backupSelectionHasBeenSet = true; m_backupSelection = std::forward<BackupSelectionT>(value); }
    template<typename BackupSelectionT = BackupSelection>
    GetBackupSelectionResult& WithBackupSelection(BackupSelectionT&& value) { SetBackupSelection(std::forward<BackupSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline const Aws::String& GetSelectionId() const { return m_selectionId; }
    template<typename SelectionIdT = Aws::String>
    void SetSelectionId(SelectionIdT&& value) { m_selectionIdHasBeenSet = true; m_selectionId = std::forward<SelectionIdT>(value); }
    template<typename SelectionIdT = Aws::String>
    GetBackupSelectionResult& WithSelectionId(SelectionIdT&& value) { SetSelectionId(std::forward<SelectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
    template<typename BackupPlanIdT = Aws::String>
    void SetBackupPlanId(BackupPlanIdT&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::forward<BackupPlanIdT>(value); }
    template<typename BackupPlanIdT = Aws::String>
    GetBackupSelectionResult& WithBackupPlanId(BackupPlanIdT&& value) { SetBackupPlanId(std::forward<BackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GetBackupSelectionResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    GetBackupSelectionResult& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBackupSelectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BackupSelection m_backupSelection;
    bool m_backupSelectionHasBeenSet = false;

    Aws::String m_selectionId;
    bool m_selectionIdHasBeenSet = false;

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
