/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreTestingSelectionForUpdate.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class UpdateRestoreTestingSelectionRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API UpdateRestoreTestingSelectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRestoreTestingSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }

    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = value; }

    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName.assign(value); }

    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    /**
     * <p>To update your restore testing selection, you can use either protected
     * resource ARNs or conditions, but not both. That is, if your selection has
     * <code>ProtectedResourceArns</code>, requesting an update with the parameter
     * <code>ProtectedResourceConditions</code> will be unsuccessful.</p>
     */
    inline const RestoreTestingSelectionForUpdate& GetRestoreTestingSelection() const{ return m_restoreTestingSelection; }

    /**
     * <p>To update your restore testing selection, you can use either protected
     * resource ARNs or conditions, but not both. That is, if your selection has
     * <code>ProtectedResourceArns</code>, requesting an update with the parameter
     * <code>ProtectedResourceConditions</code> will be unsuccessful.</p>
     */
    inline bool RestoreTestingSelectionHasBeenSet() const { return m_restoreTestingSelectionHasBeenSet; }

    /**
     * <p>To update your restore testing selection, you can use either protected
     * resource ARNs or conditions, but not both. That is, if your selection has
     * <code>ProtectedResourceArns</code>, requesting an update with the parameter
     * <code>ProtectedResourceConditions</code> will be unsuccessful.</p>
     */
    inline void SetRestoreTestingSelection(const RestoreTestingSelectionForUpdate& value) { m_restoreTestingSelectionHasBeenSet = true; m_restoreTestingSelection = value; }

    /**
     * <p>To update your restore testing selection, you can use either protected
     * resource ARNs or conditions, but not both. That is, if your selection has
     * <code>ProtectedResourceArns</code>, requesting an update with the parameter
     * <code>ProtectedResourceConditions</code> will be unsuccessful.</p>
     */
    inline void SetRestoreTestingSelection(RestoreTestingSelectionForUpdate&& value) { m_restoreTestingSelectionHasBeenSet = true; m_restoreTestingSelection = std::move(value); }

    /**
     * <p>To update your restore testing selection, you can use either protected
     * resource ARNs or conditions, but not both. That is, if your selection has
     * <code>ProtectedResourceArns</code>, requesting an update with the parameter
     * <code>ProtectedResourceConditions</code> will be unsuccessful.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingSelection(const RestoreTestingSelectionForUpdate& value) { SetRestoreTestingSelection(value); return *this;}

    /**
     * <p>To update your restore testing selection, you can use either protected
     * resource ARNs or conditions, but not both. That is, if your selection has
     * <code>ProtectedResourceArns</code>, requesting an update with the parameter
     * <code>ProtectedResourceConditions</code> will be unsuccessful.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingSelection(RestoreTestingSelectionForUpdate&& value) { SetRestoreTestingSelection(std::move(value)); return *this;}


    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }

    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }

    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = value; }

    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::move(value); }

    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName.assign(value); }

    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}

    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}

    /**
     * <p>This is the required restore testing selection name of the restore testing
     * selection you wish to update.</p>
     */
    inline UpdateRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}

  private:

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

    RestoreTestingSelectionForUpdate m_restoreTestingSelection;
    bool m_restoreTestingSelectionHasBeenSet = false;

    Aws::String m_restoreTestingSelectionName;
    bool m_restoreTestingSelectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
