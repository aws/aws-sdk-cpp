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
 * <p>Configuration settings for <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/durable-functions.html">durable
 * functions</a>, including execution timeout and retention period for execution
 * history.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DurableConfig">AWS
 * API Reference</a></p>
 */
class DurableConfig {
 public:
  AWS_LAMBDA_API DurableConfig() = default;
  AWS_LAMBDA_API DurableConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API DurableConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of days to retain execution history after a durable execution
   * completes. After this period, execution history is no longer available through
   * the GetDurableExecutionHistory API.</p>
   */
  inline int GetRetentionPeriodInDays() const { return m_retentionPeriodInDays; }
  inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }
  inline void SetRetentionPeriodInDays(int value) {
    m_retentionPeriodInDaysHasBeenSet = true;
    m_retentionPeriodInDays = value;
  }
  inline DurableConfig& WithRetentionPeriodInDays(int value) {
    SetRetentionPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time (in seconds) that a durable execution can run before timing
   * out. This timeout applies to the entire durable execution, not individual
   * function invocations.</p>
   */
  inline int GetExecutionTimeout() const { return m_executionTimeout; }
  inline bool ExecutionTimeoutHasBeenSet() const { return m_executionTimeoutHasBeenSet; }
  inline void SetExecutionTimeout(int value) {
    m_executionTimeoutHasBeenSet = true;
    m_executionTimeout = value;
  }
  inline DurableConfig& WithExecutionTimeout(int value) {
    SetExecutionTimeout(value);
    return *this;
  }
  ///@}
 private:
  int m_retentionPeriodInDays{0};

  int m_executionTimeout{0};
  bool m_retentionPeriodInDaysHasBeenSet = false;
  bool m_executionTimeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
