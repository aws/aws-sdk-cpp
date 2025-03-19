/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/backup/model/RestoreTestingPlanForUpdate.h>
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
  class UpdateRestoreTestingPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API UpdateRestoreTestingPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRestoreTestingPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the body of a restore testing plan.</p>
     */
    inline const RestoreTestingPlanForUpdate& GetRestoreTestingPlan() const { return m_restoreTestingPlan; }
    inline bool RestoreTestingPlanHasBeenSet() const { return m_restoreTestingPlanHasBeenSet; }
    template<typename RestoreTestingPlanT = RestoreTestingPlanForUpdate>
    void SetRestoreTestingPlan(RestoreTestingPlanT&& value) { m_restoreTestingPlanHasBeenSet = true; m_restoreTestingPlan = std::forward<RestoreTestingPlanT>(value); }
    template<typename RestoreTestingPlanT = RestoreTestingPlanForUpdate>
    UpdateRestoreTestingPlanRequest& WithRestoreTestingPlan(RestoreTestingPlanT&& value) { SetRestoreTestingPlan(std::forward<RestoreTestingPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the restore testing plan name.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const { return m_restoreTestingPlanName; }
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }
    template<typename RestoreTestingPlanNameT = Aws::String>
    void SetRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::forward<RestoreTestingPlanNameT>(value); }
    template<typename RestoreTestingPlanNameT = Aws::String>
    UpdateRestoreTestingPlanRequest& WithRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { SetRestoreTestingPlanName(std::forward<RestoreTestingPlanNameT>(value)); return *this;}
    ///@}
  private:

    RestoreTestingPlanForUpdate m_restoreTestingPlan;
    bool m_restoreTestingPlanHasBeenSet = false;

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
