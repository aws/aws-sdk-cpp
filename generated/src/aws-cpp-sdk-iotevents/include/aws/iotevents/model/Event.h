﻿/**
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
   * <p>Specifies the <code>actions</code> to be performed when the
   * <code>condition</code> evaluates to TRUE.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/Event">AWS API
   * Reference</a></p>
   */
  class Event
  {
  public:
    AWS_IOTEVENTS_API Event();
    AWS_IOTEVENTS_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }
    inline Event& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}
    inline Event& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}
    inline Event& WithEventName(const char* value) { SetEventName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The Boolean expression that, when TRUE, causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE). If the expression result is not a Boolean value, the actions are not
     * performed (=FALSE).</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }
    inline Event& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}
    inline Event& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}
    inline Event& WithCondition(const char* value) { SetCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to be performed.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline Event& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline Event& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline Event& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline Event& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
