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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Provides information about a pending maintenance action for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API PendingMaintenanceAction
  {
  public:
    PendingMaintenanceAction();
    PendingMaintenanceAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    PendingMaintenanceAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline PendingMaintenanceAction& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline PendingMaintenanceAction& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The type of pending maintenance action that is available for the resource.
     * Valid actions are <code>system-update</code>, <code>db-upgrade</code>, and
     * <code>hardware-maintenance</code>.</p>
     */
    inline PendingMaintenanceAction& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoAppliedAfterDate() const{ return m_autoAppliedAfterDate; }

    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline bool AutoAppliedAfterDateHasBeenSet() const { return m_autoAppliedAfterDateHasBeenSet; }

    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline void SetAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = value; }

    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline void SetAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = std::move(value); }

    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(const Aws::Utils::DateTime& value) { SetAutoAppliedAfterDate(value); return *this;}

    /**
     * <p>The date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>next-maintenance</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithAutoAppliedAfterDate(Aws::Utils::DateTime&& value) { SetAutoAppliedAfterDate(std::move(value)); return *this;}


    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetForcedApplyDate() const{ return m_forcedApplyDate; }

    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline bool ForcedApplyDateHasBeenSet() const { return m_forcedApplyDateHasBeenSet; }

    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline void SetForcedApplyDate(const Aws::Utils::DateTime& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = value; }

    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline void SetForcedApplyDate(Aws::Utils::DateTime&& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = std::move(value); }

    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithForcedApplyDate(const Aws::Utils::DateTime& value) { SetForcedApplyDate(value); return *this;}

    /**
     * <p>The date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>immediate</code> opt-in requests are ignored.</p>
     */
    inline PendingMaintenanceAction& WithForcedApplyDate(Aws::Utils::DateTime&& value) { SetForcedApplyDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline const Aws::String& GetOptInStatus() const{ return m_optInStatus; }

    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }

    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline void SetOptInStatus(const Aws::String& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }

    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline void SetOptInStatus(Aws::String&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }

    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline void SetOptInStatus(const char* value) { m_optInStatusHasBeenSet = true; m_optInStatus.assign(value); }

    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline PendingMaintenanceAction& WithOptInStatus(const Aws::String& value) { SetOptInStatus(value); return *this;}

    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline PendingMaintenanceAction& WithOptInStatus(Aws::String&& value) { SetOptInStatus(std::move(value)); return *this;}

    /**
     * <p>Indicates the type of opt-in request that has been received for the
     * resource.</p>
     */
    inline PendingMaintenanceAction& WithOptInStatus(const char* value) { SetOptInStatus(value); return *this;}


    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API, the
     * <code>AutoAppliedAfterDate</code>, and the <code>ForcedApplyDate</code>. This
     * value is blank if an opt-in request has not been received and nothing has been
     * specified as <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCurrentApplyDate() const{ return m_currentApplyDate; }

    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API, the
     * <code>AutoAppliedAfterDate</code>, and the <code>ForcedApplyDate</code>. This
     * value is blank if an opt-in request has not been received and nothing has been
     * specified as <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }

    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API, the
     * <code>AutoAppliedAfterDate</code>, and the <code>ForcedApplyDate</code>. This
     * value is blank if an opt-in request has not been received and nothing has been
     * specified as <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline void SetCurrentApplyDate(const Aws::Utils::DateTime& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = value; }

    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API, the
     * <code>AutoAppliedAfterDate</code>, and the <code>ForcedApplyDate</code>. This
     * value is blank if an opt-in request has not been received and nothing has been
     * specified as <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline void SetCurrentApplyDate(Aws::Utils::DateTime&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::move(value); }

    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API, the
     * <code>AutoAppliedAfterDate</code>, and the <code>ForcedApplyDate</code>. This
     * value is blank if an opt-in request has not been received and nothing has been
     * specified as <code>AutoAppliedAfterDate</code> or
     * <code>ForcedApplyDate</code>.</p>
     */
    inline PendingMaintenanceAction& WithCurrentApplyDate(const Aws::Utils::DateTime& value) { SetCurrentApplyDate(value); return *this;}

    /**
     * <p>The effective date when the pending maintenance action is applied to the
     * resource. This date takes into account opt-in requests received from the
     * <code>ApplyPendingMaintenanceAction</code> API, the
     * <code>AutoAppliedAfterDate</code>, and the <code>ForcedApplyDate</code>. This
     * value is blank if an opt-in request has not been received and nothing has been
     * specified as <code>AutoAppliedAfterDate</code> or
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
    bool m_actionHasBeenSet;

    Aws::Utils::DateTime m_autoAppliedAfterDate;
    bool m_autoAppliedAfterDateHasBeenSet;

    Aws::Utils::DateTime m_forcedApplyDate;
    bool m_forcedApplyDateHasBeenSet;

    Aws::String m_optInStatus;
    bool m_optInStatusHasBeenSet;

    Aws::Utils::DateTime m_currentApplyDate;
    bool m_currentApplyDateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
