/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ExecutionStatus.h>

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
 * <p>Information about a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/durable-functions.html">durable
 * execution</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Execution">AWS
 * API Reference</a></p>
 */
class Execution {
 public:
  AWS_LAMBDA_API Execution() = default;
  AWS_LAMBDA_API Execution(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Execution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the durable execution, if this execution is
   * a durable execution.</p>
   */
  inline const Aws::String& GetDurableExecutionArn() const { return m_durableExecutionArn; }
  inline bool DurableExecutionArnHasBeenSet() const { return m_durableExecutionArnHasBeenSet; }
  template <typename DurableExecutionArnT = Aws::String>
  void SetDurableExecutionArn(DurableExecutionArnT&& value) {
    m_durableExecutionArnHasBeenSet = true;
    m_durableExecutionArn = std::forward<DurableExecutionArnT>(value);
  }
  template <typename DurableExecutionArnT = Aws::String>
  Execution& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique name of the durable execution, if one was provided when the
   * execution was started.</p>
   */
  inline const Aws::String& GetDurableExecutionName() const { return m_durableExecutionName; }
  inline bool DurableExecutionNameHasBeenSet() const { return m_durableExecutionNameHasBeenSet; }
  template <typename DurableExecutionNameT = Aws::String>
  void SetDurableExecutionName(DurableExecutionNameT&& value) {
    m_durableExecutionNameHasBeenSet = true;
    m_durableExecutionName = std::forward<DurableExecutionNameT>(value);
  }
  template <typename DurableExecutionNameT = Aws::String>
  Execution& WithDurableExecutionName(DurableExecutionNameT&& value) {
    SetDurableExecutionName(std::forward<DurableExecutionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  Execution& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the durable execution.</p>
   */
  inline ExecutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Execution& WithStatus(ExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the durable execution started, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  Execution& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the durable execution ended, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
  inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  void SetEndTimestamp(EndTimestampT&& value) {
    m_endTimestampHasBeenSet = true;
    m_endTimestamp = std::forward<EndTimestampT>(value);
  }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  Execution& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_durableExecutionArn;
  bool m_durableExecutionArnHasBeenSet = false;

  Aws::String m_durableExecutionName;
  bool m_durableExecutionNameHasBeenSet = false;

  Aws::String m_functionArn;
  bool m_functionArnHasBeenSet = false;

  ExecutionStatus m_status{ExecutionStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_startTimestamp{};
  bool m_startTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_endTimestamp{};
  bool m_endTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
