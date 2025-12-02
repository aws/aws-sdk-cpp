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
 * <p>Information about retry attempts for an operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RetryDetails">AWS
 * API Reference</a></p>
 */
class RetryDetails {
 public:
  AWS_LAMBDA_API RetryDetails() = default;
  AWS_LAMBDA_API RetryDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API RetryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current attempt number for this operation.</p>
   */
  inline int GetCurrentAttempt() const { return m_currentAttempt; }
  inline bool CurrentAttemptHasBeenSet() const { return m_currentAttemptHasBeenSet; }
  inline void SetCurrentAttempt(int value) {
    m_currentAttemptHasBeenSet = true;
    m_currentAttempt = value;
  }
  inline RetryDetails& WithCurrentAttempt(int value) {
    SetCurrentAttempt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The delay before the next retry attempt, in seconds.</p>
   */
  inline int GetNextAttemptDelaySeconds() const { return m_nextAttemptDelaySeconds; }
  inline bool NextAttemptDelaySecondsHasBeenSet() const { return m_nextAttemptDelaySecondsHasBeenSet; }
  inline void SetNextAttemptDelaySeconds(int value) {
    m_nextAttemptDelaySecondsHasBeenSet = true;
    m_nextAttemptDelaySeconds = value;
  }
  inline RetryDetails& WithNextAttemptDelaySeconds(int value) {
    SetNextAttemptDelaySeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_currentAttempt{0};
  bool m_currentAttemptHasBeenSet = false;

  int m_nextAttemptDelaySeconds{0};
  bool m_nextAttemptDelaySecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
