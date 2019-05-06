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
  class AWS_BACKUP_API GetBackupPlanFromJSONRequest : public BackupRequest
  {
  public:
    GetBackupPlanFromJSONRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackupPlanFromJSON"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline const Aws::String& GetBackupPlanTemplateJson() const{ return m_backupPlanTemplateJson; }

    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline bool BackupPlanTemplateJsonHasBeenSet() const { return m_backupPlanTemplateJsonHasBeenSet; }

    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline void SetBackupPlanTemplateJson(const Aws::String& value) { m_backupPlanTemplateJsonHasBeenSet = true; m_backupPlanTemplateJson = value; }

    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline void SetBackupPlanTemplateJson(Aws::String&& value) { m_backupPlanTemplateJsonHasBeenSet = true; m_backupPlanTemplateJson = std::move(value); }

    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline void SetBackupPlanTemplateJson(const char* value) { m_backupPlanTemplateJsonHasBeenSet = true; m_backupPlanTemplateJson.assign(value); }

    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline GetBackupPlanFromJSONRequest& WithBackupPlanTemplateJson(const Aws::String& value) { SetBackupPlanTemplateJson(value); return *this;}

    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline GetBackupPlanFromJSONRequest& WithBackupPlanTemplateJson(Aws::String&& value) { SetBackupPlanTemplateJson(std::move(value)); return *this;}

    /**
     * <p>A customer-supplied backup plan document in JSON format.</p>
     */
    inline GetBackupPlanFromJSONRequest& WithBackupPlanTemplateJson(const char* value) { SetBackupPlanTemplateJson(value); return *this;}

  private:

    Aws::String m_backupPlanTemplateJson;
    bool m_backupPlanTemplateJsonHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
