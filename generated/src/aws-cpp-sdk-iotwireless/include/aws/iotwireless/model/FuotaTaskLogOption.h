/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/FuotaTaskType.h>
#include <aws/iotwireless/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/FuotaTaskEventLogOption.h>
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
   * <p>The log options for fuota tasks and can be used to set log levels for a
   * specific type of fuota task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/FuotaTaskLogOption">AWS
   * API Reference</a></p>
   */
  class FuotaTaskLogOption
  {
  public:
    AWS_IOTWIRELESS_API FuotaTaskLogOption();
    AWS_IOTWIRELESS_API FuotaTaskLogOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API FuotaTaskLogOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fuota task type.</p>
     */
    inline const FuotaTaskType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FuotaTaskType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FuotaTaskType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FuotaTaskLogOption& WithType(const FuotaTaskType& value) { SetType(value); return *this;}
    inline FuotaTaskLogOption& WithType(FuotaTaskType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }
    inline FuotaTaskLogOption& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline FuotaTaskLogOption& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FuotaTaskEventLogOption>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Vector<FuotaTaskEventLogOption>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Vector<FuotaTaskEventLogOption>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline FuotaTaskLogOption& WithEvents(const Aws::Vector<FuotaTaskEventLogOption>& value) { SetEvents(value); return *this;}
    inline FuotaTaskLogOption& WithEvents(Aws::Vector<FuotaTaskEventLogOption>&& value) { SetEvents(std::move(value)); return *this;}
    inline FuotaTaskLogOption& AddEvents(const FuotaTaskEventLogOption& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    inline FuotaTaskLogOption& AddEvents(FuotaTaskEventLogOption&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }
    ///@}
  private:

    FuotaTaskType m_type;
    bool m_typeHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    Aws::Vector<FuotaTaskEventLogOption> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
