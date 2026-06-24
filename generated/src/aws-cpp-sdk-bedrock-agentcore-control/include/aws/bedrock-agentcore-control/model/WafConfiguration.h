/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/WafFailureMode.h>

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
 * <p>The Amazon Web Services WAF configuration for the gateway. This configuration
 * controls how the gateway behaves when the associated web ACL cannot be
 * evaluated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/WafConfiguration">AWS
 * API Reference</a></p>
 */
class WafConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API WafConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API WafConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API WafConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The failure mode that determines how the gateway handles requests when Amazon
   * Web Services WAF is unreachable or times out. Valid values include:</p> <ul>
   * <li> <p> <code>FAIL_CLOSE</code> - The gateway blocks requests when Amazon Web
   * Services WAF cannot be evaluated.</p> </li> <li> <p> <code>FAIL_OPEN</code> -
   * The gateway allows requests when Amazon Web Services WAF cannot be
   * evaluated.</p> </li> </ul>
   */
  inline WafFailureMode GetFailureMode() const { return m_failureMode; }
  inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
  inline void SetFailureMode(WafFailureMode value) {
    m_failureModeHasBeenSet = true;
    m_failureMode = value;
  }
  inline WafConfiguration& WithFailureMode(WafFailureMode value) {
    SetFailureMode(value);
    return *this;
  }
  ///@}
 private:
  WafFailureMode m_failureMode{WafFailureMode::NOT_SET};
  bool m_failureModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
