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
  class AWS_BACKUP_API GetBackupSelectionRequest : public BackupRequest
  {
  public:
    GetBackupSelectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackupSelection"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupSelectionRequest& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupSelectionRequest& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupSelectionRequest& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline const Aws::String& GetSelectionId() const{ return m_selectionId; }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline bool SelectionIdHasBeenSet() const { return m_selectionIdHasBeenSet; }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(const Aws::String& value) { m_selectionIdHasBeenSet = true; m_selectionId = value; }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(Aws::String&& value) { m_selectionIdHasBeenSet = true; m_selectionId = std::move(value); }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(const char* value) { m_selectionIdHasBeenSet = true; m_selectionId.assign(value); }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline GetBackupSelectionRequest& WithSelectionId(const Aws::String& value) { SetSelectionId(value); return *this;}

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline GetBackupSelectionRequest& WithSelectionId(Aws::String&& value) { SetSelectionId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline GetBackupSelectionRequest& WithSelectionId(const char* value) { SetSelectionId(value); return *this;}

  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet;

    Aws::String m_selectionId;
    bool m_selectionIdHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
