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
 * <p>Configuration that defines the scaling behavior for a Lambda Managed
 * Instances function, including the minimum and maximum number of execution
 * environments that can be provisioned.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionScalingConfig">AWS
 * API Reference</a></p>
 */
class FunctionScalingConfig {
 public:
  AWS_LAMBDA_API FunctionScalingConfig() = default;
  AWS_LAMBDA_API FunctionScalingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API FunctionScalingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum number of execution environments to maintain for the
   * function.</p>
   */
  inline int GetMinExecutionEnvironments() const { return m_minExecutionEnvironments; }
  inline bool MinExecutionEnvironmentsHasBeenSet() const { return m_minExecutionEnvironmentsHasBeenSet; }
  inline void SetMinExecutionEnvironments(int value) {
    m_minExecutionEnvironmentsHasBeenSet = true;
    m_minExecutionEnvironments = value;
  }
  inline FunctionScalingConfig& WithMinExecutionEnvironments(int value) {
    SetMinExecutionEnvironments(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of execution environments that can be provisioned for the
   * function.</p>
   */
  inline int GetMaxExecutionEnvironments() const { return m_maxExecutionEnvironments; }
  inline bool MaxExecutionEnvironmentsHasBeenSet() const { return m_maxExecutionEnvironmentsHasBeenSet; }
  inline void SetMaxExecutionEnvironments(int value) {
    m_maxExecutionEnvironmentsHasBeenSet = true;
    m_maxExecutionEnvironments = value;
  }
  inline FunctionScalingConfig& WithMaxExecutionEnvironments(int value) {
    SetMaxExecutionEnvironments(value);
    return *this;
  }
  ///@}
 private:
  int m_minExecutionEnvironments{0};
  bool m_minExecutionEnvironmentsHasBeenSet = false;

  int m_maxExecutionEnvironments{0};
  bool m_maxExecutionEnvironmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
