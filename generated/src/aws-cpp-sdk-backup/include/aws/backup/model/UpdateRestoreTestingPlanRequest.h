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
    AWS_BACKUP_API UpdateRestoreTestingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRestoreTestingPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the body of a restore testing plan.</p>
     */
    inline const RestoreTestingPlanForUpdate& GetRestoreTestingPlan() const{ return m_restoreTestingPlan; }

    /**
     * <p>Specifies the body of a restore testing plan.</p>
     */
    inline bool RestoreTestingPlanHasBeenSet() const { return m_restoreTestingPlanHasBeenSet; }

    /**
     * <p>Specifies the body of a restore testing plan.</p>
     */
    inline void SetRestoreTestingPlan(const RestoreTestingPlanForUpdate& value) { m_restoreTestingPlanHasBeenSet = true; m_restoreTestingPlan = value; }

    /**
     * <p>Specifies the body of a restore testing plan.</p>
     */
    inline void SetRestoreTestingPlan(RestoreTestingPlanForUpdate&& value) { m_restoreTestingPlanHasBeenSet = true; m_restoreTestingPlan = std::move(value); }

    /**
     * <p>Specifies the body of a restore testing plan.</p>
     */
    inline UpdateRestoreTestingPlanRequest& WithRestoreTestingPlan(const RestoreTestingPlanForUpdate& value) { SetRestoreTestingPlan(value); return *this;}

    /**
     * <p>Specifies the body of a restore testing plan.</p>
     */
    inline UpdateRestoreTestingPlanRequest& WithRestoreTestingPlan(RestoreTestingPlanForUpdate&& value) { SetRestoreTestingPlan(std::move(value)); return *this;}


    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }

    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = value; }

    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName.assign(value); }

    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline UpdateRestoreTestingPlanRequest& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline UpdateRestoreTestingPlanRequest& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>This is the restore testing plan name you wish to update.</p>
     */
    inline UpdateRestoreTestingPlanRequest& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}

  private:

    RestoreTestingPlanForUpdate m_restoreTestingPlan;
    bool m_restoreTestingPlanHasBeenSet = false;

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
