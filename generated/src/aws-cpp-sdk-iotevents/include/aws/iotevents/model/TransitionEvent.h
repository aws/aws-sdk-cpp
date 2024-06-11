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
    AWS_IOTEVENTS_API TransitionEvent();
    AWS_IOTEVENTS_API TransitionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API TransitionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transition event.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }
    inline TransitionEvent& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}
    inline TransitionEvent& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}
    inline TransitionEvent& WithEventName(const char* value) { SetEventName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. A Boolean expression that when TRUE causes the actions to be
     * performed and the <code>nextState</code> to be entered.</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }
    inline TransitionEvent& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}
    inline TransitionEvent& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}
    inline TransitionEvent& WithCondition(const char* value) { SetCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to be performed.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline TransitionEvent& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline TransitionEvent& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline TransitionEvent& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline TransitionEvent& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next state to enter.</p>
     */
    inline const Aws::String& GetNextState() const{ return m_nextState; }
    inline bool NextStateHasBeenSet() const { return m_nextStateHasBeenSet; }
    inline void SetNextState(const Aws::String& value) { m_nextStateHasBeenSet = true; m_nextState = value; }
    inline void SetNextState(Aws::String&& value) { m_nextStateHasBeenSet = true; m_nextState = std::move(value); }
    inline void SetNextState(const char* value) { m_nextStateHasBeenSet = true; m_nextState.assign(value); }
    inline TransitionEvent& WithNextState(const Aws::String& value) { SetNextState(value); return *this;}
    inline TransitionEvent& WithNextState(Aws::String&& value) { SetNextState(std::move(value)); return *this;}
    inline TransitionEvent& WithNextState(const char* value) { SetNextState(value); return *this;}
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
