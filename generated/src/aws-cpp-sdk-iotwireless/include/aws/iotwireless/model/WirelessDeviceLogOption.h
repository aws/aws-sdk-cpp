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
    AWS_IOTWIRELESS_API WirelessDeviceLogOption();
    AWS_IOTWIRELESS_API WirelessDeviceLogOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessDeviceLogOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The wireless device type.</p>
     */
    inline const WirelessDeviceType& GetType() const{ return m_type; }

    /**
     * <p>The wireless device type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(const WirelessDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The wireless device type.</p>
     */
    inline void SetType(WirelessDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The wireless device type.</p>
     */
    inline WirelessDeviceLogOption& WithType(const WirelessDeviceType& value) { SetType(value); return *this;}

    /**
     * <p>The wireless device type.</p>
     */
    inline WirelessDeviceLogOption& WithType(WirelessDeviceType&& value) { SetType(std::move(value)); return *this;}


    
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    
    inline WirelessDeviceLogOption& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    
    inline WirelessDeviceLogOption& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    
    inline const Aws::Vector<WirelessDeviceEventLogOption>& GetEvents() const{ return m_events; }

    
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    
    inline void SetEvents(const Aws::Vector<WirelessDeviceEventLogOption>& value) { m_eventsHasBeenSet = true; m_events = value; }

    
    inline void SetEvents(Aws::Vector<WirelessDeviceEventLogOption>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    
    inline WirelessDeviceLogOption& WithEvents(const Aws::Vector<WirelessDeviceEventLogOption>& value) { SetEvents(value); return *this;}

    
    inline WirelessDeviceLogOption& WithEvents(Aws::Vector<WirelessDeviceEventLogOption>&& value) { SetEvents(std::move(value)); return *this;}

    
    inline WirelessDeviceLogOption& AddEvents(const WirelessDeviceEventLogOption& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    
    inline WirelessDeviceLogOption& AddEvents(WirelessDeviceEventLogOption&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    WirelessDeviceType m_type;
    bool m_typeHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    Aws::Vector<WirelessDeviceEventLogOption> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
