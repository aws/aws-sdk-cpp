/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Configuration options for callback operations in durable executions,
 * including timeout settings and retry behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CallbackOptions">AWS
 * API Reference</a></p>
 */
class CallbackOptions {
 public:
  AWS_LAMBDA_API CallbackOptions() = default;
  AWS_LAMBDA_API CallbackOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CallbackOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timeout for the callback operation in seconds. If not specified or set to
   * 0, the callback has no timeout.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline CallbackOptions& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The heartbeat timeout for the callback operation, in seconds. If not
   * specified or set to 0, heartbeat timeout is disabled.</p>
   */
  inline int GetHeartbeatTimeoutSeconds() const { return m_heartbeatTimeoutSeconds; }
  inline bool HeartbeatTimeoutSecondsHasBeenSet() const { return m_heartbeatTimeoutSecondsHasBeenSet; }
  inline void SetHeartbeatTimeoutSeconds(int value) {
    m_heartbeatTimeoutSecondsHasBeenSet = true;
    m_heartbeatTimeoutSeconds = value;
  }
  inline CallbackOptions& WithHeartbeatTimeoutSeconds(int value) {
    SetHeartbeatTimeoutSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_timeoutSeconds{0};

  int m_heartbeatTimeoutSeconds{0};
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_heartbeatTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
