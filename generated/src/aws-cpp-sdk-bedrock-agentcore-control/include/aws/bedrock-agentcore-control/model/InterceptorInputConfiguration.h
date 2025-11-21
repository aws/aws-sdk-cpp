/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p>The input configuration of the interceptor.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InterceptorInputConfiguration">AWS
 * API Reference</a></p>
 */
class InterceptorInputConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorInputConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether to pass request headers as input into the interceptor. When
   * set to true, request headers will be passed.</p>
   */
  inline bool GetPassRequestHeaders() const { return m_passRequestHeaders; }
  inline bool PassRequestHeadersHasBeenSet() const { return m_passRequestHeadersHasBeenSet; }
  inline void SetPassRequestHeaders(bool value) {
    m_passRequestHeadersHasBeenSet = true;
    m_passRequestHeaders = value;
  }
  inline InterceptorInputConfiguration& WithPassRequestHeaders(bool value) {
    SetPassRequestHeaders(value);
    return *this;
  }
  ///@}
 private:
  bool m_passRequestHeaders{false};
  bool m_passRequestHeadersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
