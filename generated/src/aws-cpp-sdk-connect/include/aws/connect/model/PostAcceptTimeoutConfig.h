/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Countdown timer configuration after the agent accepted the
 * contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PostAcceptTimeoutConfig">AWS
 * API Reference</a></p>
 */
class PostAcceptTimeoutConfig {
 public:
  AWS_CONNECT_API PostAcceptTimeoutConfig() = default;
  AWS_CONNECT_API PostAcceptTimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PostAcceptTimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Duration in seconds for the countdown timer after the agent accepted the
   * contact.</p>
   */
  inline int GetDurationInSeconds() const { return m_durationInSeconds; }
  inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
  inline void SetDurationInSeconds(int value) {
    m_durationInSecondsHasBeenSet = true;
    m_durationInSeconds = value;
  }
  inline PostAcceptTimeoutConfig& WithDurationInSeconds(int value) {
    SetDurationInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_durationInSeconds{0};
  bool m_durationInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
