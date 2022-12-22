/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a maintenance action pending for an DMS resource, including when
   * and how it will be applied. This data type is a response element to the
   * <code>DescribePendingMaintenanceActions</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/PendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class PendingMaintenanceAction
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API PendingMaintenanceAction();
    AWS_DATABASEMIGRATIONSERVICE_API PendingMaintenanceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API PendingMaintenanceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline PendingMaintenanceAction& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline PendingMaintenanceAction& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The type of pending maintenance action that is available for the
     * resource.</p>
     */
    inline PendingMaintenanceAction& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The date of the maintenance window when the action is to be applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoAppliedAfterDate() const{ return m_autoAppliedAfterDate; }

    /**
     * <p>The date of the maintenance window when the action is to be applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline bool AutoAppliedAfterDateHasBeenSet() const { return m_autoAppliedAfterDateHasBeenSet; }

    /**
     * <p>The date of the maintenance window when the action is to be applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline void SetAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = value; }

    /**
     * <p>The date of the maintenance window when the action is to be applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline void SetAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = std::move(value); }

    /**
     * <p>The date of the maintenance window when the action is to be applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { SetAutoAppliedAfterDate(value); return *this;}

    /**
     * <p>The date of the maintenance window when the action is to be applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { SetAutoAppliedAfterDate(std::move(value)); return *this;}


    /**
     * <p>The date when the maintenance action will be automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetForcedApplyDate() const{ return m_forcedApplyDate; }

    /**
     * <p>The date when the maintenance action will be automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline bool ForcedApplyDateHasBeenSet() const { return m_forcedApplyDateHasBeenSet; }

    /**
     * <p>The date when the maintenance action will be automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline void SetForcedApplyDate(const Aws::Utils::DateTime& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = value; }

    /**
     * <p>The date when the maintenance action will be automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline void SetForcedApplyDate(Aws::Utils::DateTime&& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = std::move(value); }

    /**
     * <p>The date when the maintenance action will be automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithForcedApplyDate(const Aws::Utils::DateTime& value) { SetForcedApplyDate(value); return *this;}

    /**
     * <p>The date when the maintenance action will be automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithForcedApplyDate(Aws::Utils::DateTime&& value) { SetForcedApplyDate(std::move(value)); return *this;}


    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline const Aws::String& GetOptInStatus() const{ return m_optInStatus; }

    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }

    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline void SetOptInStatus(const Aws::String& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }

    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline void SetOptInStatus(Aws::String&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }

    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline void SetOptInStatus(const char* value) { m_optInStatusHasBeenSet = true; m_optInStatus.assign(value); }

    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline PendingMaintenanceAction& WithOptInStatus(const Aws::String& value) { SetOptInStatus(value); return *this;}

    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline PendingMaintenanceAction& WithOptInStatus(Aws::String&& value) { SetOptInStatus(std::move(value)); return *this;}

    /**
     * <p>The type of opt-in request that has been received for the resource.</p>
     */
    inline PendingMaintenanceAction& WithOptInStatus(const char* value) { SetOptInStatus(value); return *this;}


    /**
     * <p>The effective date when the pending maintenance action will be applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API operation, and also the
     * <code>AutoAppliedAfterDate</code> and <code>ForcedApplyDate</code> parameter
     * values. This value is blank if an opt-in request has not been received and
     * nothing has been specified for <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCurrentApplyDate() const{ return m_currentApplyDate; }

    /**
     * <p>The effective date when the pending maintenance action will be applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API operation, and also the
     * <code>AutoAppliedAfterDate</code> and <code>ForcedApplyDate</code> parameter
     * values. This value is blank if an opt-in request has not been received and
     * nothing has been specified for <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }

    /**
     * <p>The effective date when the pending maintenance action will be applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API operation, and also the
     * <code>AutoAppliedAfterDate</code> and <code>ForcedApplyDate</code> parameter
     * values. This value is blank if an opt-in request has not been received and
     * nothing has been specified for <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline void SetCurrentApplyDate(const Aws::Utils::DateTime& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = value; }

    /**
     * <p>The effective date when the pending maintenance action will be applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API operation, and also the
     * <code>AutoAppliedAfterDate</code> and <code>ForcedApplyDate</code> parameter
     * values. This value is blank if an opt-in request has not been received and
     * nothing has been specified for <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline void SetCurrentApplyDate(Aws::Utils::DateTime&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::move(value); }

    /**
     * <p>The effective date when the pending maintenance action will be applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API operation, and also the
     * <code>AutoAppliedAfterDate</code> and <code>ForcedApplyDate</code> parameter
     * values. This value is blank if an opt-in request has not been received and
     * nothing has been specified for <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline PendingMaintenanceAction& WithCurrentApplyDate(const Aws::Utils::DateTime& value) { SetCurrentApplyDate(value); return *this;}

    /**
     * <p>The effective date when the pending maintenance action will be applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API operation, and also the
     * <code>AutoAppliedAfterDate</code> and <code>ForcedApplyDate</code> parameter
     * values. This value is blank if an opt-in request has not been received and
     * nothing has been specified for <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline PendingMaintenanceAction& WithCurrentApplyDate(Aws::Utils::DateTime&& value) { SetCurrentApplyDate(std::move(value)); return *this;}


    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description providing more detail about the maintenance action.</p>
     */
    inline PendingMaintenanceAction& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_autoAppliedAfterDate;
    bool m_autoAppliedAfterDateHasBeenSet = false;

    Aws::Utils::DateTime m_forcedApplyDate;
    bool m_forcedApplyDateHasBeenSet = false;

    Aws::String m_optInStatus;
    bool m_optInStatusHasBeenSet = false;

    Aws::Utils::DateTime m_currentApplyDate;
    bool m_currentApplyDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
