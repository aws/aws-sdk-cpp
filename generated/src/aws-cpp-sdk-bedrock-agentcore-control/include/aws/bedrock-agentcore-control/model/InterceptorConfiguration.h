/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LambdaInterceptorConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The interceptor configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InterceptorConfiguration">AWS
 * API Reference</a></p>
 */
class InterceptorConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The details of the lambda function used for the interceptor.</p>
   */
  inline const LambdaInterceptorConfiguration& GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  template <typename LambdaT = LambdaInterceptorConfiguration>
  void SetLambda(LambdaT&& value) {
    m_lambdaHasBeenSet = true;
    m_lambda = std::forward<LambdaT>(value);
  }
  template <typename LambdaT = LambdaInterceptorConfiguration>
  InterceptorConfiguration& WithLambda(LambdaT&& value) {
    SetLambda(std::forward<LambdaT>(value));
    return *this;
  }
  ///@}
 private:
  LambdaInterceptorConfiguration m_lambda;
  bool m_lambdaHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
