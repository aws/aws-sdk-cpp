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
  class GetBackupSelectionRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API GetBackupSelectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackupSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }
    inline GetBackupSelectionRequest& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}
    inline GetBackupSelectionRequest& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}
    inline GetBackupSelectionRequest& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline const Aws::String& GetSelectionId() const{ return m_selectionId; }
    inline bool SelectionIdHasBeenSet() const { return m_selectionIdHasBeenSet; }
    inline void SetSelectionId(const Aws::String& value) { m_selectionIdHasBeenSet = true; m_selectionId = value; }
    inline void SetSelectionId(Aws::String&& value) { m_selectionIdHasBeenSet = true; m_selectionId = std::move(value); }
    inline void SetSelectionId(const char* value) { m_selectionIdHasBeenSet = true; m_selectionId.assign(value); }
    inline GetBackupSelectionRequest& WithSelectionId(const Aws::String& value) { SetSelectionId(value); return *this;}
    inline GetBackupSelectionRequest& WithSelectionId(Aws::String&& value) { SetSelectionId(std::move(value)); return *this;}
    inline GetBackupSelectionRequest& WithSelectionId(const char* value) { SetSelectionId(value); return *this;}
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
