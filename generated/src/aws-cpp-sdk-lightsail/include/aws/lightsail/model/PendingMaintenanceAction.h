/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a pending database maintenance action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PendingMaintenanceAction">AWS
   * API Reference</a></p>
   */
  class PendingMaintenanceAction
  {
  public:
    AWS_LIGHTSAIL_API PendingMaintenanceAction() = default;
    AWS_LIGHTSAIL_API PendingMaintenanceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API PendingMaintenanceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of pending database maintenance action.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    PendingMaintenanceAction& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional detail about the pending database maintenance action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PendingMaintenanceAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective date of the pending database maintenance action.</p>
     */
    inline const Aws::Utils::DateTime& GetCurrentApplyDate() const { return m_currentApplyDate; }
    inline bool CurrentApplyDateHasBeenSet() const { return m_currentApplyDateHasBeenSet; }
    template<typename CurrentApplyDateT = Aws::Utils::DateTime>
    void SetCurrentApplyDate(CurrentApplyDateT&& value) { m_currentApplyDateHasBeenSet = true; m_currentApplyDate = std::forward<CurrentApplyDateT>(value); }
    template<typename CurrentApplyDateT = Aws::Utils::DateTime>
    PendingMaintenanceAction& WithCurrentApplyDate(CurrentApplyDateT&& value) { SetCurrentApplyDate(std::forward<CurrentApplyDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_currentApplyDate{};
    bool m_currentApplyDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
