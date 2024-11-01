/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DocDBElastic
{
namespace Model
{

  /**
   * <p>Retrieves the details of maintenance actions that are pending.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/PendingMaintenanceActionDetails">AWS
   * API Reference</a></p>
   */
  class PendingMaintenanceActionDetails
  {
  public:
    AWS_DOCDBELASTIC_API PendingMaintenanceActionDetails();
    AWS_DOCDBELASTIC_API PendingMaintenanceActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API PendingMaintenanceActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Displays the specific action of a pending maintenance action.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline PendingMaintenanceActionDetails& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline PendingMaintenanceActionDetails& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline PendingMaintenanceActionDetails& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>NEXT_MAINTENANCE</code> <code>optInType</code> requests are ignored.</p>
     */
    inline const Aws::String& GetAutoAppliedAfterDate() const{ return m_autoAppliedAfterDate; }
    inline bool AutoAppliedAfterDateHasBeenSet() const { return m_autoAppliedAfterDateHasBeenSet; }
    inline void SetAutoAppliedAfterDate(const Aws::String& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = value; }
    inline void SetAutoAppliedAfterDate(Aws::String&& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = std::move(value); }
    inline void SetAutoAppliedAfterDate(const char* value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate.assign(value); }
    inline PendingMaintenanceActionDetails& WithAutoAppliedAfterDate(const Aws::String& value) { SetAutoAppliedAfterDate(value); return *this;}
    inline PendingMaintenanceActionDetails& WithAutoAppliedAfterDate(Aws::String&& value) { SetAutoAppliedAfterDate(std::move(value)); return *this;}
    inline PendingMaintenanceActionDetails& WithAutoAppliedAfterDate(const char* value) { SetAutoAppliedAfterDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the effective date when the pending maintenance action is applied to
     * the resource.</p>
     */
    inline const Aws::String& GetCurrentApplyDate() const{ return m_currentApplyDate; }
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }
    inline void SetCurrentApplyDate(const Aws::String& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = value; }
    inline void SetCurrentApplyDate(Aws::String&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::move(value); }
    inline void SetCurrentApplyDate(const char* value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate.assign(value); }
    inline PendingMaintenanceActionDetails& WithCurrentApplyDate(const Aws::String& value) { SetCurrentApplyDate(value); return *this;}
    inline PendingMaintenanceActionDetails& WithCurrentApplyDate(Aws::String&& value) { SetCurrentApplyDate(std::move(value)); return *this;}
    inline PendingMaintenanceActionDetails& WithCurrentApplyDate(const char* value) { SetCurrentApplyDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a description providing more detail about the maintenance
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PendingMaintenanceActionDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PendingMaintenanceActionDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PendingMaintenanceActionDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>IMMEDIATE</code> <code>optInType</code> requests are ignored.</p>
     */
    inline const Aws::String& GetForcedApplyDate() const{ return m_forcedApplyDate; }
    inline bool ForcedApplyDateHasBeenSet() const { return m_forcedApplyDateHasBeenSet; }
    inline void SetForcedApplyDate(const Aws::String& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = value; }
    inline void SetForcedApplyDate(Aws::String&& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = std::move(value); }
    inline void SetForcedApplyDate(const char* value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate.assign(value); }
    inline PendingMaintenanceActionDetails& WithForcedApplyDate(const Aws::String& value) { SetForcedApplyDate(value); return *this;}
    inline PendingMaintenanceActionDetails& WithForcedApplyDate(Aws::String&& value) { SetForcedApplyDate(std::move(value)); return *this;}
    inline PendingMaintenanceActionDetails& WithForcedApplyDate(const char* value) { SetForcedApplyDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the type of <code>optInType</code> request that has been received
     * for the resource.</p>
     */
    inline const Aws::String& GetOptInStatus() const{ return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(const Aws::String& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline void SetOptInStatus(Aws::String&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }
    inline void SetOptInStatus(const char* value) { m_optInStatusHasBeenSet = true; m_optInStatus.assign(value); }
    inline PendingMaintenanceActionDetails& WithOptInStatus(const Aws::String& value) { SetOptInStatus(value); return *this;}
    inline PendingMaintenanceActionDetails& WithOptInStatus(Aws::String&& value) { SetOptInStatus(std::move(value)); return *this;}
    inline PendingMaintenanceActionDetails& WithOptInStatus(const char* value) { SetOptInStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_autoAppliedAfterDate;
    bool m_autoAppliedAfterDateHasBeenSet = false;

    Aws::String m_currentApplyDate;
    bool m_currentApplyDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_forcedApplyDate;
    bool m_forcedApplyDateHasBeenSet = false;

    Aws::String m_optInStatus;
    bool m_optInStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
