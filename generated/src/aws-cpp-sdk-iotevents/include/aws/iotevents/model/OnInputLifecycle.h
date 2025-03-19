/**
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
    AWS_IOTEVENTS_API OnInputLifecycle() = default;
    AWS_IOTEVENTS_API OnInputLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API OnInputLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the actions performed when the <code>condition</code> evaluates to
     * TRUE.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<Event>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<Event>>
    OnInputLifecycle& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = Event>
    OnInputLifecycle& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the actions performed, and the next state entered, when a
     * <code>condition</code> evaluates to TRUE.</p>
     */
    inline const Aws::Vector<TransitionEvent>& GetTransitionEvents() const { return m_transitionEvents; }
    inline bool TransitionEventsHasBeenSet() const { return m_transitionEventsHasBeenSet; }
    template<typename TransitionEventsT = Aws::Vector<TransitionEvent>>
    void SetTransitionEvents(TransitionEventsT&& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents = std::forward<TransitionEventsT>(value); }
    template<typename TransitionEventsT = Aws::Vector<TransitionEvent>>
    OnInputLifecycle& WithTransitionEvents(TransitionEventsT&& value) { SetTransitionEvents(std::forward<TransitionEventsT>(value)); return *this;}
    template<typename TransitionEventsT = TransitionEvent>
    OnInputLifecycle& AddTransitionEvents(TransitionEventsT&& value) { m_transitionEventsHasBeenSet = true; m_transitionEvents.emplace_back(std::forward<TransitionEventsT>(value)); return *this; }
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
