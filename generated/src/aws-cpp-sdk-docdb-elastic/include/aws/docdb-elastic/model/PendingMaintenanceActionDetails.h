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
    AWS_DOCDBELASTIC_API PendingMaintenanceActionDetails() = default;
    AWS_DOCDBELASTIC_API PendingMaintenanceActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API PendingMaintenanceActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Displays the specific action of a pending maintenance action.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    PendingMaintenanceActionDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the date of the maintenance window when the action is applied. The
     * maintenance action is applied to the resource during its first maintenance
     * window after this date. If this date is specified, any
     * <code>NEXT_MAINTENANCE</code> <code>optInType</code> requests are ignored.</p>
     */
    inline const Aws::String& GetAutoAppliedAfterDate() const { return m_autoAppliedAfterDate; }
    inline bool AutoAppliedAfterDateHasBeenSet() const { return m_autoAppliedAfterDateHasBeenSet; }
    template<typename AutoAppliedAfterDateT = Aws::String>
    void SetAutoAppliedAfterDate(AutoAppliedAfterDateT&& value) { m_autoAppliedAfterDateHasBeenSet = true; m_autoAppliedAfterDate = std::forward<AutoAppliedAfterDateT>(value); }
    template<typename AutoAppliedAfterDateT = Aws::String>
    PendingMaintenanceActionDetails& WithAutoAppliedAfterDate(AutoAppliedAfterDateT&& value) { SetAutoAppliedAfterDate(std::forward<AutoAppliedAfterDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the effective date when the pending maintenance action is applied to
     * the resource.</p>
     */
    inline const Aws::String& GetCurrentApplyDate() const { return m_currentApplyDate; }
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }
    template<typename CurrentApplyDateT = Aws::String>
    void SetCurrentApplyDate(CurrentApplyDateT&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::forward<CurrentApplyDateT>(value); }
    template<typename CurrentApplyDateT = Aws::String>
    PendingMaintenanceActionDetails& WithCurrentApplyDate(CurrentApplyDateT&& value) { SetCurrentApplyDate(std::forward<CurrentApplyDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a description providing more detail about the maintenance
     * action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PendingMaintenanceActionDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the date when the maintenance action is automatically applied. The
     * maintenance action is applied to the resource on this date regardless of the
     * maintenance window for the resource. If this date is specified, any
     * <code>IMMEDIATE</code> <code>optInType</code> requests are ignored.</p>
     */
    inline const Aws::String& GetForcedApplyDate() const { return m_forcedApplyDate; }
    inline bool ForcedApplyDateHasBeenSet() const { return m_forcedApplyDateHasBeenSet; }
    template<typename ForcedApplyDateT = Aws::String>
    void SetForcedApplyDate(ForcedApplyDateT&& value) { m_forcedApplyDateHasBeenSet = true; m_forcedApplyDate = std::forward<ForcedApplyDateT>(value); }
    template<typename ForcedApplyDateT = Aws::String>
    PendingMaintenanceActionDetails& WithForcedApplyDate(ForcedApplyDateT&& value) { SetForcedApplyDate(std::forward<ForcedApplyDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the type of <code>optInType</code> request that has been received
     * for the resource.</p>
     */
    inline const Aws::String& GetOptInStatus() const { return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    template<typename OptInStatusT = Aws::String>
    void SetOptInStatus(OptInStatusT&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::forward<OptInStatusT>(value); }
    template<typename OptInStatusT = Aws::String>
    PendingMaintenanceActionDetails& WithOptInStatus(OptInStatusT&& value) { SetOptInStatus(std::forward<OptInStatusT>(value)); return *this;}
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
