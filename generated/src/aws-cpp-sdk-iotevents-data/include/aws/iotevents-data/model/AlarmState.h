/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/AlarmStateName.h>
#include <aws/iotevents-data/model/RuleEvaluation.h>
#include <aws/iotevents-data/model/CustomerAction.h>
#include <aws/iotevents-data/model/SystemEvent.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Contains information about the current state of the alarm.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/AlarmState">AWS
   * API Reference</a></p>
   */
  class AlarmState
  {
  public:
    AWS_IOTEVENTSDATA_API AlarmState() = default;
    AWS_IOTEVENTSDATA_API AlarmState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API AlarmState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the alarm state. The state name can be one of the following
     * values:</p> <ul> <li> <p> <code>DISABLED</code> - When the alarm is in the
     * <code>DISABLED</code> state, it isn't ready to evaluate data. To enable the
     * alarm, you must change the alarm to the <code>NORMAL</code> state.</p> </li>
     * <li> <p> <code>NORMAL</code> - When the alarm is in the <code>NORMAL</code>
     * state, it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVE</code> - If
     * the alarm is in the <code>ACTIVE</code> state, the alarm is invoked.</p> </li>
     * <li> <p> <code>ACKNOWLEDGED</code> - When the alarm is in the
     * <code>ACKNOWLEDGED</code> state, the alarm was invoked and you acknowledged the
     * alarm.</p> </li> <li> <p> <code>SNOOZE_DISABLED</code> - When the alarm is in
     * the <code>SNOOZE_DISABLED</code> state, the alarm is disabled for a specified
     * period of time. After the snooze time, the alarm automatically changes to the
     * <code>NORMAL</code> state. </p> </li> <li> <p> <code>LATCHED</code> - When the
     * alarm is in the <code>LATCHED</code> state, the alarm was invoked. However, the
     * data that the alarm is currently evaluating is within the specified range. To
     * change the alarm to the <code>NORMAL</code> state, you must acknowledge the
     * alarm.</p> </li> </ul>
     */
    inline AlarmStateName GetStateName() const { return m_stateName; }
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }
    inline void SetStateName(AlarmStateName value) { m_stateNameHasBeenSet = true; m_stateName = value; }
    inline AlarmState& WithStateName(AlarmStateName value) { SetStateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information needed to evaluate data.</p>
     */
    inline const RuleEvaluation& GetRuleEvaluation() const { return m_ruleEvaluation; }
    inline bool RuleEvaluationHasBeenSet() const { return m_ruleEvaluationHasBeenSet; }
    template<typename RuleEvaluationT = RuleEvaluation>
    void SetRuleEvaluation(RuleEvaluationT&& value) { m_ruleEvaluationHasBeenSet = true; m_ruleEvaluation = std::forward<RuleEvaluationT>(value); }
    template<typename RuleEvaluationT = RuleEvaluation>
    AlarmState& WithRuleEvaluation(RuleEvaluationT&& value) { SetRuleEvaluation(std::forward<RuleEvaluationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the action that you can take to respond to the
     * alarm.</p>
     */
    inline const CustomerAction& GetCustomerAction() const { return m_customerAction; }
    inline bool CustomerActionHasBeenSet() const { return m_customerActionHasBeenSet; }
    template<typename CustomerActionT = CustomerAction>
    void SetCustomerAction(CustomerActionT&& value) { m_customerActionHasBeenSet = true; m_customerAction = std::forward<CustomerActionT>(value); }
    template<typename CustomerActionT = CustomerAction>
    AlarmState& WithCustomerAction(CustomerActionT&& value) { SetCustomerAction(std::forward<CustomerActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about alarm state changes.</p>
     */
    inline const SystemEvent& GetSystemEvent() const { return m_systemEvent; }
    inline bool SystemEventHasBeenSet() const { return m_systemEventHasBeenSet; }
    template<typename SystemEventT = SystemEvent>
    void SetSystemEvent(SystemEventT&& value) { m_systemEventHasBeenSet = true; m_systemEvent = std::forward<SystemEventT>(value); }
    template<typename SystemEventT = SystemEvent>
    AlarmState& WithSystemEvent(SystemEventT&& value) { SetSystemEvent(std::forward<SystemEventT>(value)); return *this;}
    ///@}
  private:

    AlarmStateName m_stateName{AlarmStateName::NOT_SET};
    bool m_stateNameHasBeenSet = false;

    RuleEvaluation m_ruleEvaluation;
    bool m_ruleEvaluationHasBeenSet = false;

    CustomerAction m_customerAction;
    bool m_customerActionHasBeenSet = false;

    SystemEvent m_systemEvent;
    bool m_systemEventHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
