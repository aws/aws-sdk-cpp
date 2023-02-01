/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessGatewayType.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessGatewayEventLogOption.h>
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
   * <p>The log options for wireless gateways and can be used to set log levels for a
   * specific type of wireless gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WirelessGatewayLogOption">AWS
   * API Reference</a></p>
   */
  class WirelessGatewayLogOption
  {
  public:
    AWS_IOTWIRELESS_API WirelessGatewayLogOption();
    AWS_IOTWIRELESS_API WirelessGatewayLogOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessGatewayLogOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const WirelessGatewayType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const WirelessGatewayType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(WirelessGatewayType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline WirelessGatewayLogOption& WithType(const WirelessGatewayType& value) { SetType(value); return *this;}

    
    inline WirelessGatewayLogOption& WithType(WirelessGatewayType&& value) { SetType(std::move(value)); return *this;}


    
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    
    inline WirelessGatewayLogOption& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    
    inline WirelessGatewayLogOption& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    
    inline const Aws::Vector<WirelessGatewayEventLogOption>& GetEvents() const{ return m_events; }

    
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    
    inline void SetEvents(const Aws::Vector<WirelessGatewayEventLogOption>& value) { m_eventsHasBeenSet = true; m_events = value; }

    
    inline void SetEvents(Aws::Vector<WirelessGatewayEventLogOption>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    
    inline WirelessGatewayLogOption& WithEvents(const Aws::Vector<WirelessGatewayEventLogOption>& value) { SetEvents(value); return *this;}

    
    inline WirelessGatewayLogOption& WithEvents(Aws::Vector<WirelessGatewayEventLogOption>&& value) { SetEvents(std::move(value)); return *this;}

    
    inline WirelessGatewayLogOption& AddEvents(const WirelessGatewayEventLogOption& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    
    inline WirelessGatewayLogOption& AddEvents(WirelessGatewayEventLogOption&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    WirelessGatewayType m_type;
    bool m_typeHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    Aws::Vector<WirelessGatewayEventLogOption> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
