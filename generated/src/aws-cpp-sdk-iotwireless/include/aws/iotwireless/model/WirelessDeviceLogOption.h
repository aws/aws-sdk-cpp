/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessDeviceEventLogOption.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The log options for wireless devices and can be used to set log levels for a
   * specific type of wireless device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WirelessDeviceLogOption">AWS
   * API Reference</a></p>
   */
  class WirelessDeviceLogOption
  {
  public:
    AWS_IOTWIRELESS_API WirelessDeviceLogOption() = default;
    AWS_IOTWIRELESS_API WirelessDeviceLogOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessDeviceLogOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The wireless device type.</p>
     */
    inline WirelessDeviceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WirelessDeviceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline WirelessDeviceLogOption& WithType(WirelessDeviceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline WirelessDeviceLogOption& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<WirelessDeviceEventLogOption>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<WirelessDeviceEventLogOption>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<WirelessDeviceEventLogOption>>
    WirelessDeviceLogOption& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = WirelessDeviceEventLogOption>
    WirelessDeviceLogOption& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}
  private:

    WirelessDeviceType m_type{WirelessDeviceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    Aws::Vector<WirelessDeviceEventLogOption> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
