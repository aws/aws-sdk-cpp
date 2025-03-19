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
    AWS_BACKUP_API UpdateRestoreTestingSelectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRestoreTestingSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The restore testing plan name is required to update the indicated testing
     * plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const { return m_restoreTestingPlanName; }
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }
    template<typename RestoreTestingPlanNameT = Aws::String>
    void SetRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::forward<RestoreTestingPlanNameT>(value); }
    template<typename RestoreTestingPlanNameT = Aws::String>
    UpdateRestoreTestingSelectionRequest& WithRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { SetRestoreTestingPlanName(std::forward<RestoreTestingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update your restore testing selection, you can use either protected
     * resource ARNs or conditions, but not both. That is, if your selection has
     * <code>ProtectedResourceArns</code>, requesting an update with the parameter
     * <code>ProtectedResourceConditions</code> will be unsuccessful.</p>
     */
    inline const RestoreTestingSelectionForUpdate& GetRestoreTestingSelection() const { return m_restoreTestingSelection; }
    inline bool RestoreTestingSelectionHasBeenSet() const { return m_restoreTestingSelectionHasBeenSet; }
    template<typename RestoreTestingSelectionT = RestoreTestingSelectionForUpdate>
    void SetRestoreTestingSelection(RestoreTestingSelectionT&& value) { m_restoreTestingSelectionHasBeenSet = true; m_restoreTestingSelection = std::forward<RestoreTestingSelectionT>(value); }
    template<typename RestoreTestingSelectionT = RestoreTestingSelectionForUpdate>
    UpdateRestoreTestingSelectionRequest& WithRestoreTestingSelection(RestoreTestingSelectionT&& value) { SetRestoreTestingSelection(std::forward<RestoreTestingSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required restore testing selection name of the restore testing selection
     * you wish to update.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const { return m_restoreTestingSelectionName; }
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    void SetRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::forward<RestoreTestingSelectionNameT>(value); }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    UpdateRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { SetRestoreTestingSelectionName(std::forward<RestoreTestingSelectionNameT>(value)); return *this;}
    ///@}
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
