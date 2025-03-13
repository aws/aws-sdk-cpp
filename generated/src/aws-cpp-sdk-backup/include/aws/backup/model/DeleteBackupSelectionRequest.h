/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DeleteBackupSelectionRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DeleteBackupSelectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBackupSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
    template<typename BackupPlanIdT = Aws::String>
    void SetBackupPlanId(BackupPlanIdT&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::forward<BackupPlanIdT>(value); }
    template<typename BackupPlanIdT = Aws::String>
    DeleteBackupSelectionRequest& WithBackupPlanId(BackupPlanIdT&& value) { SetBackupPlanId(std::forward<BackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline const Aws::String& GetSelectionId() const { return m_selectionId; }
    inline bool SelectionIdHasBeenSet() const { return m_selectionIdHasBeenSet; }
    template<typename SelectionIdT = Aws::String>
    void SetSelectionId(SelectionIdT&& value) { m_selectionIdHasBeenSet = true; m_selectionId = std::forward<SelectionIdT>(value); }
    template<typename SelectionIdT = Aws::String>
    DeleteBackupSelectionRequest& WithSelectionId(SelectionIdT&& value) { SetSelectionId(std::forward<SelectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::String m_selectionId;
    bool m_selectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
