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
   * <code>condition</code> is TRUE.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/OnExitLifecycle">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API OnExitLifecycle
  {
  public:
    OnExitLifecycle();
    OnExitLifecycle(Aws::Utils::Json::JsonView jsonValue);
    OnExitLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline OnExitLifecycle& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline OnExitLifecycle& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline OnExitLifecycle& AddEvents(const Event& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>Specifies the actions that are performed when the state is exited and the
     * <code>condition</code> is TRUE.</p>
     */
    inline OnExitLifecycle& AddEvents(Event&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Event> m_events;
    bool m_eventsHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
