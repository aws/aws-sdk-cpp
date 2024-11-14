/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/FuotaTaskEvent.h>
#include <aws/iotwireless/model/LogLevel.h>
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
   * <p>The log options for a FUOTA task event and can be used to set log levels for
   * a specific fuota task event.</p> <p>For a LoRaWAN FuotaTask type, possible event
   * for a log message is <code>Fuota</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/FuotaTaskEventLogOption">AWS
   * API Reference</a></p>
   */
  class FuotaTaskEventLogOption
  {
  public:
    AWS_IOTWIRELESS_API FuotaTaskEventLogOption();
    AWS_IOTWIRELESS_API FuotaTaskEventLogOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API FuotaTaskEventLogOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FuotaTaskEvent& GetEvent() const{ return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(const FuotaTaskEvent& value) { m_eventHasBeenSet = true; m_event = value; }
    inline void SetEvent(FuotaTaskEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }
    inline FuotaTaskEventLogOption& WithEvent(const FuotaTaskEvent& value) { SetEvent(value); return *this;}
    inline FuotaTaskEventLogOption& WithEvent(FuotaTaskEvent&& value) { SetEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }
    inline FuotaTaskEventLogOption& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline FuotaTaskEventLogOption& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}
  private:

    FuotaTaskEvent m_event;
    bool m_eventHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
