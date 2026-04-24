/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Details about a durable execution context.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ContextDetails">AWS
 * API Reference</a></p>
 */
class ContextDetails {
 public:
  AWS_LAMBDA_API ContextDetails() = default;
  AWS_LAMBDA_API ContextDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ContextDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the state data of child operations of this completed context should
   * be included in the invoke payload and <code>GetDurableExecutionState</code>
   * response.</p>
   */
  inline bool GetReplayChildren() const { return m_replayChildren; }
  inline bool ReplayChildrenHasBeenSet() const { return m_replayChildrenHasBeenSet; }
  inline void SetReplayChildren(bool value) {
    m_replayChildrenHasBeenSet = true;
    m_replayChildren = value;
  }
  inline ContextDetails& WithReplayChildren(bool value) {
    SetReplayChildren(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The response payload from the context.</p>
   */
  inline const Aws::String& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = Aws::String>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = Aws::String>
  ContextDetails& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the context failure.</p>
   */
  inline const ErrorObject& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ErrorObject>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorObject>
  ContextDetails& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_replayChildren{false};

  Aws::String m_result;

  ErrorObject m_error;
  bool m_replayChildrenHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
