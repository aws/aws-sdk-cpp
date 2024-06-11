﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{

  /**
   * <p>An object specifying metadata associated with a backup plan
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupPlanTemplatesListMember">AWS
   * API Reference</a></p>
   */
  class BackupPlanTemplatesListMember
  {
  public:
    AWS_BACKUP_API BackupPlanTemplatesListMember();
    AWS_BACKUP_API BackupPlanTemplatesListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupPlanTemplatesListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline const Aws::String& GetBackupPlanTemplateId() const{ return m_backupPlanTemplateId; }
    inline bool BackupPlanTemplateIdHasBeenSet() const { return m_backupPlanTemplateIdHasBeenSet; }
    inline void SetBackupPlanTemplateId(const Aws::String& value) { m_backupPlanTemplateIdHasBeenSet = true; m_backupPlanTemplateId = value; }
    inline void SetBackupPlanTemplateId(Aws::String&& value) { m_backupPlanTemplateIdHasBeenSet = true; m_backupPlanTemplateId = std::move(value); }
    inline void SetBackupPlanTemplateId(const char* value) { m_backupPlanTemplateIdHasBeenSet = true; m_backupPlanTemplateId.assign(value); }
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateId(const Aws::String& value) { SetBackupPlanTemplateId(value); return *this;}
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateId(Aws::String&& value) { SetBackupPlanTemplateId(std::move(value)); return *this;}
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateId(const char* value) { SetBackupPlanTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline const Aws::String& GetBackupPlanTemplateName() const{ return m_backupPlanTemplateName; }
    inline bool BackupPlanTemplateNameHasBeenSet() const { return m_backupPlanTemplateNameHasBeenSet; }
    inline void SetBackupPlanTemplateName(const Aws::String& value) { m_backupPlanTemplateNameHasBeenSet = true; m_backupPlanTemplateName = value; }
    inline void SetBackupPlanTemplateName(Aws::String&& value) { m_backupPlanTemplateNameHasBeenSet = true; m_backupPlanTemplateName = std::move(value); }
    inline void SetBackupPlanTemplateName(const char* value) { m_backupPlanTemplateNameHasBeenSet = true; m_backupPlanTemplateName.assign(value); }
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateName(const Aws::String& value) { SetBackupPlanTemplateName(value); return *this;}
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateName(Aws::String&& value) { SetBackupPlanTemplateName(std::move(value)); return *this;}
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateName(const char* value) { SetBackupPlanTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanTemplateId;
    bool m_backupPlanTemplateIdHasBeenSet = false;

    Aws::String m_backupPlanTemplateName;
    bool m_backupPlanTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
