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
  class AWS_IOTEVENTS_API Event
  {
  public:
    Event();
    Event(Aws::Utils::Json::JsonView jsonValue);
    Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }

    /**
     * <p>The name of the event.</p>
     */
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }

    /**
     * <p>The name of the event.</p>
     */
    inline Event& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}

    /**
     * <p>The name of the event.</p>
     */
    inline Event& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}

    /**
     * <p>The name of the event.</p>
     */
    inline Event& WithEventName(const char* value) { SetEventName(value); return *this;}


    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }

    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }

    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline Event& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}

    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline Event& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>[Optional] The Boolean expression that when TRUE causes the
     * <code>actions</code> to be performed. If not present, the actions are performed
     * (=TRUE); if the expression result is not a Boolean value the actions are NOT
     * performed (=FALSE).</p>
     */
    inline Event& WithCondition(const char* value) { SetCondition(value); return *this;}


    /**
     * <p>The actions to be performed.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions to be performed.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions to be performed.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions to be performed.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions to be performed.</p>
     */
    inline Event& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions to be performed.</p>
     */
    inline Event& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions to be performed.</p>
     */
    inline Event& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions to be performed.</p>
     */
    inline Event& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet;

    Aws::String m_condition;
    bool m_conditionHasBeenSet;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
