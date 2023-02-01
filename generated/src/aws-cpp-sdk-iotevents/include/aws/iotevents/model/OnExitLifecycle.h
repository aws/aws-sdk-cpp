/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/Event.h>
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
   * <p>When exiting this state, perform these <code>actions</code> if the specified
   * <code>condition</code> is <code>TRUE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/OnExitLifecycle">AWS
   * API Reference</a></p>
   */
  class OnExitLifecycle
  {
  public:
    AWS_IOTEVENTS_API OnExitLifecycle();
    AWS_IOTEVENTS_API OnExitLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API OnExitLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline OnExitLifecycle& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline OnExitLifecycle& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline OnExitLifecycle& AddEvents(const Event& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>Specifies the <code>actions</code> that are performed when the state is
     * exited and the <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline OnExitLifecycle& AddEvents(Event&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
