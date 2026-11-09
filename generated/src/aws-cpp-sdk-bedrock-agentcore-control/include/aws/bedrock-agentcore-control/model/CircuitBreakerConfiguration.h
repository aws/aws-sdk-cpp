/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CircuitBreakerMode.h>

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
 * <p>Specifies whether the circuit breaker monitors failures for the targets in a
 * fallback chain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CircuitBreakerConfiguration">AWS
 * API Reference</a></p>
 */
class CircuitBreakerConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CircuitBreakerConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CircuitBreakerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CircuitBreakerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether you want the circuit breaker turned on. To turn it off, set
   * this value to <code>DISABLED</code>. The default is <code>ENABLED</code>.</p>
   */
  inline CircuitBreakerMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(CircuitBreakerMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline CircuitBreakerConfiguration& WithMode(CircuitBreakerMode value) {
    SetMode(value);
    return *this;
  }
  ///@}
 private:
  CircuitBreakerMode m_mode{CircuitBreakerMode::NOT_SET};
  bool m_modeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
