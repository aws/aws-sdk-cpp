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
  class GetBackupPlanFromTemplateRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API GetBackupPlanFromTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackupPlanFromTemplate"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline const Aws::String& GetBackupPlanTemplateId() const { return m_backupPlanTemplateId; }
    inline bool BackupPlanTemplateIdHasBeenSet() const { return m_backupPlanTemplateIdHasBeenSet; }
    template<typename BackupPlanTemplateIdT = Aws::String>
    void SetBackupPlanTemplateId(BackupPlanTemplateIdT&& value) { m_backupPlanTemplateIdHasBeenSet = true; m_backupPlanTemplateId = std::forward<BackupPlanTemplateIdT>(value); }
    template<typename BackupPlanTemplateIdT = Aws::String>
    GetBackupPlanFromTemplateRequest& WithBackupPlanTemplateId(BackupPlanTemplateIdT&& value) { SetBackupPlanTemplateId(std::forward<BackupPlanTemplateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanTemplateId;
    bool m_backupPlanTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
