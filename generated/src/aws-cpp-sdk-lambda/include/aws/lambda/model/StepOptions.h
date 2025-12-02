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
 * <p>Configuration options for a step operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/StepOptions">AWS
 * API Reference</a></p>
 */
class StepOptions {
 public:
  AWS_LAMBDA_API StepOptions() = default;
  AWS_LAMBDA_API StepOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API StepOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The delay in seconds before the next retry attempt.</p>
   */
  inline int GetNextAttemptDelaySeconds() const { return m_nextAttemptDelaySeconds; }
  inline bool NextAttemptDelaySecondsHasBeenSet() const { return m_nextAttemptDelaySecondsHasBeenSet; }
  inline void SetNextAttemptDelaySeconds(int value) {
    m_nextAttemptDelaySecondsHasBeenSet = true;
    m_nextAttemptDelaySeconds = value;
  }
  inline StepOptions& WithNextAttemptDelaySeconds(int value) {
    SetNextAttemptDelaySeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_nextAttemptDelaySeconds{0};
  bool m_nextAttemptDelaySecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
