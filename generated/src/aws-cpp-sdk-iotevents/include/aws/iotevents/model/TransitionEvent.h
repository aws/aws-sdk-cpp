/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/Action.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Specifies the actions performed and the next state entered when a
   * <code>condition</code> evaluates to TRUE.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/TransitionEvent">AWS
   * API Reference</a></p>
   */
  class TransitionEvent
  {
  public:
    AWS_IOTEVENTS_API TransitionEvent() = default;
    AWS_IOTEVENTS_API TransitionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API TransitionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transition event.</p>
     */
    inline const Aws::String& GetEventName() const { return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    template<typename EventNameT = Aws::String>
    void SetEventName(EventNameT&& value) { m_eventNameHasBeenSet = true; m_eventName = std::forward<EventNameT>(value); }
    template<typename EventNameT = Aws::String>
    TransitionEvent& WithEventName(EventNameT&& value) { SetEventName(std::forward<EventNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. A Boolean expression that when TRUE causes the actions to be
     * performed and the <code>nextState</code> to be entered.</p>
     */
    inline const Aws::String& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::String>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::String>
    TransitionEvent& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to be performed.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Action>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Action>>
    TransitionEvent& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Action>
    TransitionEvent& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next state to enter.</p>
     */
    inline const Aws::String& GetNextState() const { return m_nextState; }
    inline bool NextStateHasBeenSet() const { return m_nextStateHasBeenSet; }
    template<typename NextStateT = Aws::String>
    void SetNextState(NextStateT&& value) { m_nextStateHasBeenSet = true; m_nextState = std::forward<NextStateT>(value); }
    template<typename NextStateT = Aws::String>
    TransitionEvent& WithNextState(NextStateT&& value) { SetNextState(std::forward<NextStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_nextState;
    bool m_nextStateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
