/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/LogLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p> Configuration for event-based logging that specifies which event types to
 * log and their logging settings. Used for account-level logging overrides.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/LogEventConfiguration">AWS
 * API Reference</a></p>
 */
class LogEventConfiguration {
 public:
  AWS_IOT_API LogEventConfiguration() = default;
  AWS_IOT_API LogEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API LogEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of event to log. These include event types like Connect, Publish,
   * and Disconnect. </p>
   */
  inline const Aws::String& GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  template <typename EventTypeT = Aws::String>
  void SetEventType(EventTypeT&& value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = std::forward<EventTypeT>(value);
  }
  template <typename EventTypeT = Aws::String>
  LogEventConfiguration& WithEventType(EventTypeT&& value) {
    SetEventType(std::forward<EventTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The logging level for the specified event type. Determines the verbosity of
   * log messages generated for this event type. </p>
   */
  inline LogLevel GetLogLevel() const { return m_logLevel; }
  inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
  inline void SetLogLevel(LogLevel value) {
    m_logLevelHasBeenSet = true;
    m_logLevel = value;
  }
  inline LogEventConfiguration& WithLogLevel(LogLevel value) {
    SetLogLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> CloudWatch Log Group for event-based logging. Specifies where log events
   * should be sent. The log destination for event-based logging overrides default
   * Log Group for the specified event type and applies to all resources associated
   * with that event. </p>
   */
  inline const Aws::String& GetLogDestination() const { return m_logDestination; }
  inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }
  template <typename LogDestinationT = Aws::String>
  void SetLogDestination(LogDestinationT&& value) {
    m_logDestinationHasBeenSet = true;
    m_logDestination = std::forward<LogDestinationT>(value);
  }
  template <typename LogDestinationT = Aws::String>
  LogEventConfiguration& WithLogDestination(LogDestinationT&& value) {
    SetLogDestination(std::forward<LogDestinationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventType;

  LogLevel m_logLevel{LogLevel::NOT_SET};

  Aws::String m_logDestination;
  bool m_eventTypeHasBeenSet = false;
  bool m_logLevelHasBeenSet = false;
  bool m_logDestinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
