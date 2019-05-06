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
  class AWS_BACKUP_API GetBackupPlanFromTemplateRequest : public BackupRequest
  {
  public:
    GetBackupPlanFromTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackupPlanFromTemplate"; }

    Aws::String SerializePayload() const override;


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
    inline GetBackupPlanFromTemplateRequest& WithBackupPlanTemplateId(const Aws::String& value) { SetBackupPlanTemplateId(value); return *this;}

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline GetBackupPlanFromTemplateRequest& WithBackupPlanTemplateId(Aws::String&& value) { SetBackupPlanTemplateId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a stored backup plan template.</p>
     */
    inline GetBackupPlanFromTemplateRequest& WithBackupPlanTemplateId(const char* value) { SetBackupPlanTemplateId(value); return *this;}

  private:

    Aws::String m_backupPlanTemplateId;
    bool m_backupPlanTemplateIdHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
