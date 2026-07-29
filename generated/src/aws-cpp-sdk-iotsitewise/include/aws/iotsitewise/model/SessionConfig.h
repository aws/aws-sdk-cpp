/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/TimeInNanos.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Contains the session configuration for a session-type dataset.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/SessionConfig">AWS
 * API Reference</a></p>
 */
class SessionConfig {
 public:
  AWS_IOTSITEWISE_API SessionConfig() = default;
  AWS_IOTSITEWISE_API SessionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API SessionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The nanosecond-precision start time of the session.</p>
   */
  inline const TimeInNanos& GetSessionStartTimestamp() const { return m_sessionStartTimestamp; }
  inline bool SessionStartTimestampHasBeenSet() const { return m_sessionStartTimestampHasBeenSet; }
  template <typename SessionStartTimestampT = TimeInNanos>
  void SetSessionStartTimestamp(SessionStartTimestampT&& value) {
    m_sessionStartTimestampHasBeenSet = true;
    m_sessionStartTimestamp = std::forward<SessionStartTimestampT>(value);
  }
  template <typename SessionStartTimestampT = TimeInNanos>
  SessionConfig& WithSessionStartTimestamp(SessionStartTimestampT&& value) {
    SetSessionStartTimestamp(std::forward<SessionStartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The nanosecond-precision end time of the session.</p>
   */
  inline const TimeInNanos& GetSessionEndTimestamp() const { return m_sessionEndTimestamp; }
  inline bool SessionEndTimestampHasBeenSet() const { return m_sessionEndTimestampHasBeenSet; }
  template <typename SessionEndTimestampT = TimeInNanos>
  void SetSessionEndTimestamp(SessionEndTimestampT&& value) {
    m_sessionEndTimestampHasBeenSet = true;
    m_sessionEndTimestamp = std::forward<SessionEndTimestampT>(value);
  }
  template <typename SessionEndTimestampT = TimeInNanos>
  SessionConfig& WithSessionEndTimestamp(SessionEndTimestampT&& value) {
    SetSessionEndTimestamp(std::forward<SessionEndTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  TimeInNanos m_sessionStartTimestamp;

  TimeInNanos m_sessionEndTimestamp;
  bool m_sessionStartTimestampHasBeenSet = false;
  bool m_sessionEndTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
