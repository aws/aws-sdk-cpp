/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventResult.h>
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
 * <p>Details about a step that succeeded.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/StepSucceededDetails">AWS
 * API Reference</a></p>
 */
class StepSucceededDetails {
 public:
  AWS_LAMBDA_API StepSucceededDetails() = default;
  AWS_LAMBDA_API StepSucceededDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API StepSucceededDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The response payload from the successful operation.</p>
   */
  inline const EventResult& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = EventResult>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = EventResult>
  StepSucceededDetails& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
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
  StepSucceededDetails& WithRetryDetails(RetryDetailsT&& value) {
    SetRetryDetails(std::forward<RetryDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  EventResult m_result;
  bool m_resultHasBeenSet = false;

  RetryDetails m_retryDetails;
  bool m_retryDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
