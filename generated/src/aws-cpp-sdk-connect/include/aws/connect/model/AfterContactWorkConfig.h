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
 * <p>Configuration settings for after contact work (ACW) timeout.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AfterContactWorkConfig">AWS
 * API Reference</a></p>
 */
class AfterContactWorkConfig {
 public:
  AWS_CONNECT_API AfterContactWorkConfig() = default;
  AWS_CONNECT_API AfterContactWorkConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AfterContactWorkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ACW timeout duration in seconds. Minimum: 1 second. Maximum: 2,000,000
   * seconds (24 days). Enter 0 for indefinite ACW time.</p>
   */
  inline int GetAfterContactWorkTimeLimit() const { return m_afterContactWorkTimeLimit; }
  inline bool AfterContactWorkTimeLimitHasBeenSet() const { return m_afterContactWorkTimeLimitHasBeenSet; }
  inline void SetAfterContactWorkTimeLimit(int value) {
    m_afterContactWorkTimeLimitHasBeenSet = true;
    m_afterContactWorkTimeLimit = value;
  }
  inline AfterContactWorkConfig& WithAfterContactWorkTimeLimit(int value) {
    SetAfterContactWorkTimeLimit(value);
    return *this;
  }
  ///@}
 private:
  int m_afterContactWorkTimeLimit{0};
  bool m_afterContactWorkTimeLimitHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
