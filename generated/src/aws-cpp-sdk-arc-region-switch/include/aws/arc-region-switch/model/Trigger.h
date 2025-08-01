/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/WorkflowTargetAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/TriggerCondition.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Defines a condition that can automatically trigger the execution of a Region
   * switch plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Trigger">AWS
   * API Reference</a></p>
   */
  class Trigger
  {
  public:
    AWS_ARCREGIONSWITCH_API Trigger() = default;
    AWS_ARCREGIONSWITCH_API Trigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Trigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description for a trigger.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Trigger& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for a trigger.</p>
     */
    inline const Aws::String& GetTargetRegion() const { return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    template<typename TargetRegionT = Aws::String>
    void SetTargetRegion(TargetRegionT&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::forward<TargetRegionT>(value); }
    template<typename TargetRegionT = Aws::String>
    Trigger& WithTargetRegion(TargetRegionT&& value) { SetTargetRegion(std::forward<TargetRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform when the trigger fires. Valid values include ACTIVATE
     * and DEACTIVATE.</p>
     */
    inline WorkflowTargetAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(WorkflowTargetAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline Trigger& WithAction(WorkflowTargetAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions that must be met for the trigger to fire.</p>
     */
    inline const Aws::Vector<TriggerCondition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<TriggerCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<TriggerCondition>>
    Trigger& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = TriggerCondition>
    Trigger& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum time, in minutes, that must elapse between automatic executions
     * of the plan.</p>
     */
    inline int GetMinDelayMinutesBetweenExecutions() const { return m_minDelayMinutesBetweenExecutions; }
    inline bool MinDelayMinutesBetweenExecutionsHasBeenSet() const { return m_minDelayMinutesBetweenExecutionsHasBeenSet; }
    inline void SetMinDelayMinutesBetweenExecutions(int value) { m_minDelayMinutesBetweenExecutionsHasBeenSet = true; m_minDelayMinutesBetweenExecutions = value; }
    inline Trigger& WithMinDelayMinutesBetweenExecutions(int value) { SetMinDelayMinutesBetweenExecutions(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet = false;

    WorkflowTargetAction m_action{WorkflowTargetAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::Vector<TriggerCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    int m_minDelayMinutesBetweenExecutions{0};
    bool m_minDelayMinutesBetweenExecutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
