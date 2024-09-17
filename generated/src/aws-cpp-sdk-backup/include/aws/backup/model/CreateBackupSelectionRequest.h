/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/BackupSelection.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateBackupSelectionRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateBackupSelectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackupSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }
    inline CreateBackupSelectionRequest& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}
    inline CreateBackupSelectionRequest& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}
    inline CreateBackupSelectionRequest& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of a request to assign a set of resources to a backup plan.</p>
     */
    inline const BackupSelection& GetBackupSelection() const{ return m_backupSelection; }
    inline bool BackupSelectionHasBeenSet() const { return m_backupSelectionHasBeenSet; }
    inline void SetBackupSelection(const BackupSelection& value) { m_backupSelectionHasBeenSet = true; m_backupSelection = value; }
    inline void SetBackupSelection(BackupSelection&& value) { m_backupSelectionHasBeenSet = true; m_backupSelection = std::move(value); }
    inline CreateBackupSelectionRequest& WithBackupSelection(const BackupSelection& value) { SetBackupSelection(value); return *this;}
    inline CreateBackupSelectionRequest& WithBackupSelection(BackupSelection&& value) { SetBackupSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline CreateBackupSelectionRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline CreateBackupSelectionRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline CreateBackupSelectionRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    BackupSelection m_backupSelection;
    bool m_backupSelectionHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
