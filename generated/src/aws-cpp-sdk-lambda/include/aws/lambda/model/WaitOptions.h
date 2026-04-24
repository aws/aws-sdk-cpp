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
 * <p>Specifies how long to pause the durable execution.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/WaitOptions">AWS
 * API Reference</a></p>
 */
class WaitOptions {
 public:
  AWS_LAMBDA_API WaitOptions() = default;
  AWS_LAMBDA_API WaitOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API WaitOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration to wait, in seconds.</p>
   */
  inline int GetWaitSeconds() const { return m_waitSeconds; }
  inline bool WaitSecondsHasBeenSet() const { return m_waitSecondsHasBeenSet; }
  inline void SetWaitSeconds(int value) {
    m_waitSecondsHasBeenSet = true;
    m_waitSeconds = value;
  }
  inline WaitOptions& WithWaitSeconds(int value) {
    SetWaitSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_waitSeconds{0};
  bool m_waitSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
