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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/Event.h>
#include <aws/iotevents/model/TransitionEvent.h>
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
   * <p>Specifies the actions performed when the <code>condition</code> evaluates to
   * TRUE.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/OnInputLifecycle">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API OnInputLifecycle
  {
  public:
    OnInputLifecycle();
    OnInputLifecycle(Aws::Utils::Json::JsonView jsonValue);
    OnInputLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline OnInputLifecycle& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline OnInputLifecycle& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline OnInputLifecycle& AddEvents(const Event& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline OnInputLifecycle& AddEvents(Event&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline const Aws::Vector<TransitionEvent>& GetTransitionEvents() const{ return m_transitionEvents; }

    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline bool TransitionEventsHasBeenSet() const { return m_transitionEventsHasBeenSet; }

    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline void SetTransitionEvents(const Aws::Vector<TransitionEvent>& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents = value; }

    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline void SetTransitionEvents(Aws::Vector<TransitionEvent>&& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents = std::move(value); }

    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline OnInputLifecycle& WithTransitionEvents(const Aws::Vector<TransitionEvent>& value) { SetTransitionEvents(value); return *this;}

    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline OnInputLifecycle& WithTransitionEvents(Aws::Vector<TransitionEvent>&& value) { SetTransitionEvents(std::move(value)); return *this;}

    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline OnInputLifecycle& AddTransitionEvents(const TransitionEvent& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents.push_back(value); return *this; }

    /**
     * <p>Specifies the actions performed and the next state entered when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline OnInputLifecycle& AddTransitionEvents(TransitionEvent&& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet;

    Aws::Vector<TransitionEvent> m_transitionEvents;
    bool m_transitionEventsHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
