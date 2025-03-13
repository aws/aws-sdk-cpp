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
  class GetBackupPlanFromJSONRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API GetBackupPlanFromJSONRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackupPlanFromJSON"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline const Aws::String& GetBackupPlanTemplateJson() const { return m_backupPlanTemplateJson; }
    inline bool BackupPlanTemplateJsonHasBeenSet() const { return m_backupPlanTemplateJsonHasBeenSet; }
    template<typename BackupPlanTemplateJsonT = Aws::String>
    void SetBackupPlanTemplateJson(BackupPlanTemplateJsonT&& value) { m_backupPlanTemplateJsonHasBeenSet = true; m_backupPlanTemplateJson = std::forward<BackupPlanTemplateJsonT>(value); }
    template<typename BackupPlanTemplateJsonT = Aws::String>
    GetBackupPlanFromJSONRequest& WithBackupPlanTemplateJson(BackupPlanTemplateJsonT&& value) { SetBackupPlanTemplateJson(std::forward<BackupPlanTemplateJsonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanTemplateJson;
    bool m_backupPlanTemplateJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
