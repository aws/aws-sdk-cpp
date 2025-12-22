/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ErrorObject.h>

#include <utility>

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
 * <p>Details about a step operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/StepDetails">AWS
 * API Reference</a></p>
 */
class StepDetails {
 public:
  AWS_LAMBDA_API StepDetails() = default;
  AWS_LAMBDA_API StepDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API StepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current attempt number for this step.</p>
   */
  inline int GetAttempt() const { return m_attempt; }
  inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
  inline void SetAttempt(int value) {
    m_attemptHasBeenSet = true;
    m_attempt = value;
  }
  inline StepDetails& WithAttempt(int value) {
    SetAttempt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the next attempt is scheduled, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD). Only populated when the step is in a pending
   * state.</p>
   */
  inline const Aws::Utils::DateTime& GetNextAttemptTimestamp() const { return m_nextAttemptTimestamp; }
  inline bool NextAttemptTimestampHasBeenSet() const { return m_nextAttemptTimestampHasBeenSet; }
  template <typename NextAttemptTimestampT = Aws::Utils::DateTime>
  void SetNextAttemptTimestamp(NextAttemptTimestampT&& value) {
    m_nextAttemptTimestampHasBeenSet = true;
    m_nextAttemptTimestamp = std::forward<NextAttemptTimestampT>(value);
  }
  template <typename NextAttemptTimestampT = Aws::Utils::DateTime>
  StepDetails& WithNextAttemptTimestamp(NextAttemptTimestampT&& value) {
    SetNextAttemptTimestamp(std::forward<NextAttemptTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON response payload from the step operation.</p>
   */
  inline const Aws::String& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = Aws::String>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = Aws::String>
  StepDetails& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the step failure.</p>
   */
  inline const ErrorObject& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ErrorObject>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorObject>
  StepDetails& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  int m_attempt{0};

  Aws::Utils::DateTime m_nextAttemptTimestamp{};

  Aws::String m_result;

  ErrorObject m_error;
  bool m_attemptHasBeenSet = false;
  bool m_nextAttemptTimestampHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
