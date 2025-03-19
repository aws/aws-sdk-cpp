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
  class DeleteRestoreTestingSelectionRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DeleteRestoreTestingSelectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRestoreTestingSelection"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required unique name of the restore testing plan that contains the restore
     * testing selection you wish to delete.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const { return m_restoreTestingPlanName; }
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }
    template<typename RestoreTestingPlanNameT = Aws::String>
    void SetRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::forward<RestoreTestingPlanNameT>(value); }
    template<typename RestoreTestingPlanNameT = Aws::String>
    DeleteRestoreTestingSelectionRequest& WithRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { SetRestoreTestingPlanName(std::forward<RestoreTestingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required unique name of the restore testing selection you wish to delete.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const { return m_restoreTestingSelectionName; }
    inline bool RestoreTestingSelectionNameHasBeenSet() const { return m_restoreTestingSelectionNameHasBeenSet; }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    void SetRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::forward<RestoreTestingSelectionNameT>(value); }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    DeleteRestoreTestingSelectionRequest& WithRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { SetRestoreTestingSelectionName(std::forward<RestoreTestingSelectionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

    Aws::String m_restoreTestingSelectionName;
    bool m_restoreTestingSelectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
