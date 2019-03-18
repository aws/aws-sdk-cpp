/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BACKUP_API BackupPlanTemplatesListMember
  {
  public:
    BackupPlanTemplatesListMember();
    BackupPlanTemplatesListMember(Aws::Utils::Json::JsonView jsonValue);
    BackupPlanTemplatesListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline const Aws::String& GetBackupPlanTemplateId() const{ return m_backupPlanTemplateId; }

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline bool BackupPlanTemplateIdHasBeenSet() const { return m_backupPlanTemplateIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline void SetBackupPlanTemplateId(const Aws::String& value) { m_backupPlanTemplateIdHasBeenSet = true; m_backupPlanTemplateId = value; }

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline void SetBackupPlanTemplateId(Aws::String&& value) { m_backupPlanTemplateIdHasBeenSet = true; m_backupPlanTemplateId = std::move(value); }

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline void SetBackupPlanTemplateId(const char* value) { m_backupPlanTemplateIdHasBeenSet = true; m_backupPlanTemplateId.assign(value); }

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateId(const Aws::String& value) { SetBackupPlanTemplateId(value); return *this;}

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateId(Aws::String&& value) { SetBackupPlanTemplateId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateId(const char* value) { SetBackupPlanTemplateId(value); return *this;}


    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline const Aws::String& GetBackupPlanTemplateName() const{ return m_backupPlanTemplateName; }

    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline bool BackupPlanTemplateNameHasBeenSet() const { return m_backupPlanTemplateNameHasBeenSet; }

    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline void SetBackupPlanTemplateName(const Aws::String& value) { m_backupPlanTemplateNameHasBeenSet = true; m_backupPlanTemplateName = value; }

    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline void SetBackupPlanTemplateName(Aws::String&& value) { m_backupPlanTemplateNameHasBeenSet = true; m_backupPlanTemplateName = std::move(value); }

    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline void SetBackupPlanTemplateName(const char* value) { m_backupPlanTemplateNameHasBeenSet = true; m_backupPlanTemplateName.assign(value); }

    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateName(const Aws::String& value) { SetBackupPlanTemplateName(value); return *this;}

    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateName(Aws::String&& value) { SetBackupPlanTemplateName(std::move(value)); return *this;}

    /**
     * <p>The optional display name of a backup plan template.</p>
     */
    inline BackupPlanTemplatesListMember& WithBackupPlanTemplateName(const char* value) { SetBackupPlanTemplateName(value); return *this;}

  private:

    Aws::String m_backupPlanTemplateId;
    bool m_backupPlanTemplateIdHasBeenSet;

    Aws::String m_backupPlanTemplateName;
    bool m_backupPlanTemplateNameHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
