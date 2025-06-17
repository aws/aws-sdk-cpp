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
#include <aws/core/utils/UUID.h>

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
    AWS_BACKUP_API CreateBackupSelectionRequest() = default;

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
    inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
    template<typename BackupPlanIdT = Aws::String>
    void SetBackupPlanId(BackupPlanIdT&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::forward<BackupPlanIdT>(value); }
    template<typename BackupPlanIdT = Aws::String>
    CreateBackupSelectionRequest& WithBackupPlanId(BackupPlanIdT&& value) { SetBackupPlanId(std::forward<BackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of a request to assign a set of resources to a backup plan.</p>
     */
    inline const BackupSelection& GetBackupSelection() const { return m_backupSelection; }
    inline bool BackupSelectionHasBeenSet() const { return m_backupSelectionHasBeenSet; }
    template<typename BackupSelectionT = BackupSelection>
    void SetBackupSelection(BackupSelectionT&& value) { m_backupSelectionHasBeenSet = true; m_backupSelection = std::forward<BackupSelectionT>(value); }
    template<typename BackupSelectionT = BackupSelection>
    CreateBackupSelectionRequest& WithBackupSelection(BackupSelectionT&& value) { SetBackupSelection(std::forward<BackupSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    CreateBackupSelectionRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    BackupSelection m_backupSelection;
    bool m_backupSelectionHasBeenSet = false;

    Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creatorRequestIdHasBeenSet = true;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
