/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventInput.h>

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
 * <p>Details about a durable execution that started.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ExecutionStartedDetails">AWS
 * API Reference</a></p>
 */
class ExecutionStartedDetails {
 public:
  AWS_LAMBDA_API ExecutionStartedDetails() = default;
  AWS_LAMBDA_API ExecutionStartedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ExecutionStartedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The input payload provided for the durable execution.</p>
   */
  inline const EventInput& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = EventInput>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = EventInput>
  ExecutionStartedDetails& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount of time that the durable execution is allowed to run, in
   * seconds.</p>
   */
  inline int GetExecutionTimeout() const { return m_executionTimeout; }
  inline bool ExecutionTimeoutHasBeenSet() const { return m_executionTimeoutHasBeenSet; }
  inline void SetExecutionTimeout(int value) {
    m_executionTimeoutHasBeenSet = true;
    m_executionTimeout = value;
  }
  inline ExecutionStartedDetails& WithExecutionTimeout(int value) {
    SetExecutionTimeout(value);
    return *this;
  }
  ///@}
 private:
  EventInput m_input;
  bool m_inputHasBeenSet = false;

  int m_executionTimeout{0};
  bool m_executionTimeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
