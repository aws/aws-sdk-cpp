/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventResult.h>

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
 * <p>Details about a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/durable-functions.html">durable
 * execution</a> that succeeded.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ExecutionSucceededDetails">AWS
 * API Reference</a></p>
 */
class ExecutionSucceededDetails {
 public:
  AWS_LAMBDA_API ExecutionSucceededDetails() = default;
  AWS_LAMBDA_API ExecutionSucceededDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ExecutionSucceededDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ExecutionSucceededDetails& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}
 private:
  EventResult m_result;
  bool m_resultHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
