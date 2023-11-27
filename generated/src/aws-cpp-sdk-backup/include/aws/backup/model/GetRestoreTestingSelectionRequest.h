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
  class GetRestoreTestingSelectionRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API GetRestoreTestingSelectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRestoreTestingSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }

    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = value; }

    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName.assign(value); }

    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline GetRestoreTestingSelectionRequest& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline GetRestoreTestingSelectionRequest& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>Required unique name of the restore testing plan.</p>
     */
    inline GetRestoreTestingSelectionRequest& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }

    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }

    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = value; }

    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::move(value); }

    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName.assign(value); }

    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline GetRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}

    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline GetRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}

    /**
     * <p>Required unique name of the restore testing selection.</p>
     */
    inline GetRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}

  private:

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

    Aws::String m_restoreTestingSelectionName;
    bool m_restoreTestingSelectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
