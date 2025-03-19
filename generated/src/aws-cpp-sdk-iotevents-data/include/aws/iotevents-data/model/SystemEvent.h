/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/EventType.h>
#include <aws/iotevents-data/model/StateChangeConfiguration.h>
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
   * <p>Contains information about alarm state changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/SystemEvent">AWS
   * API Reference</a></p>
   */
  class SystemEvent
  {
  public:
    AWS_IOTEVENTSDATA_API SystemEvent() = default;
    AWS_IOTEVENTSDATA_API SystemEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API SystemEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event type. If the value is <code>STATE_CHANGE</code>, the event contains
     * information about alarm state changes.</p>
     */
    inline EventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(EventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline SystemEvent& WithEventType(EventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline const StateChangeConfiguration& GetStateChangeConfiguration() const { return m_stateChangeConfiguration; }
    inline bool StateChangeConfigurationHasBeenSet() const { return m_stateChangeConfigurationHasBeenSet; }
    template<typename StateChangeConfigurationT = StateChangeConfiguration>
    void SetStateChangeConfiguration(StateChangeConfigurationT&& value) { m_stateChangeConfigurationHasBeenSet = true; m_stateChangeConfiguration = std::forward<StateChangeConfigurationT>(value); }
    template<typename StateChangeConfigurationT = StateChangeConfiguration>
    SystemEvent& WithStateChangeConfiguration(StateChangeConfigurationT&& value) { SetStateChangeConfiguration(std::forward<StateChangeConfigurationT>(value)); return *this;}
    ///@}
  private:

    EventType m_eventType{EventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    StateChangeConfiguration m_stateChangeConfiguration;
    bool m_stateChangeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
