/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventError.h>
#include <aws/lambda/model/RetryDetails.h>

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
 * <p>Details about a step that failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/StepFailedDetails">AWS
 * API Reference</a></p>
 */
class StepFailedDetails {
 public:
  AWS_LAMBDA_API StepFailedDetails() = default;
  AWS_LAMBDA_API StepFailedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API StepFailedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about the step failure.</p>
   */
  inline const EventError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = EventError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = EventError>
  StepFailedDetails& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about retry attempts for this step operation.</p>
   */
  inline const RetryDetails& GetRetryDetails() const { return m_retryDetails; }
  inline bool RetryDetailsHasBeenSet() const { return m_retryDetailsHasBeenSet; }
  template <typename RetryDetailsT = RetryDetails>
  void SetRetryDetails(RetryDetailsT&& value) {
    m_retryDetailsHasBeenSet = true;
    m_retryDetails = std::forward<RetryDetailsT>(value);
  }
  template <typename RetryDetailsT = RetryDetails>
  StepFailedDetails& WithRetryDetails(RetryDetailsT&& value) {
    SetRetryDetails(std::forward<RetryDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  EventError m_error;
  bool m_errorHasBeenSet = false;

  RetryDetails m_retryDetails;
  bool m_retryDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
