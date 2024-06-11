﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OnInputLifecycle
  {
  public:
    AWS_IOTEVENTS_API OnInputLifecycle();
    AWS_IOTEVENTS_API OnInputLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API OnInputLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Vector<Event>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Vector<Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline OnInputLifecycle& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}
    inline OnInputLifecycle& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}
    inline OnInputLifecycle& AddEvents(const Event& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    inline OnInputLifecycle& AddEvents(Event&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the actions performed, and the next state entered, when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline const Aws::Vector<TransitionEvent>& GetTransitionEvents() const{ return m_transitionEvents; }
    inline bool TransitionEventsHasBeenSet() const { return m_transitionEventsHasBeenSet; }
    inline void SetTransitionEvents(const Aws::Vector<TransitionEvent>& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents = value; }
    inline void SetTransitionEvents(Aws::Vector<TransitionEvent>&& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents = std::move(value); }
    inline OnInputLifecycle& WithTransitionEvents(const Aws::Vector<TransitionEvent>& value) { SetTransitionEvents(value); return *this;}
    inline OnInputLifecycle& WithTransitionEvents(Aws::Vector<TransitionEvent>&& value) { SetTransitionEvents(std::move(value)); return *this;}
    inline OnInputLifecycle& AddTransitionEvents(const TransitionEvent& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents.push_back(value); return *this; }
    inline OnInputLifecycle& AddTransitionEvents(TransitionEvent&& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::Vector<TransitionEvent> m_transitionEvents;
    bool m_transitionEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
