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
 * <p>Specifies the settings that the gateway uses to send a streamed target
 * response to the interceptor in batches.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ResponseStreamingConfiguration">AWS
 * API Reference</a></p>
 */
class ResponseStreamingConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ResponseStreamingConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ResponseStreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ResponseStreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the maximum number of response events that the gateway sends to the
   * interceptor in one invocation. The interceptor's output for the first batch
   * determines the status code and headers of the response. The gateway ignores the
   * status code and headers that the interceptor returns for later batches.</p>
   */
  inline int GetMaxEventsPerInvocation() const { return m_maxEventsPerInvocation; }
  inline bool MaxEventsPerInvocationHasBeenSet() const { return m_maxEventsPerInvocationHasBeenSet; }
  inline void SetMaxEventsPerInvocation(int value) {
    m_maxEventsPerInvocationHasBeenSet = true;
    m_maxEventsPerInvocation = value;
  }
  inline ResponseStreamingConfiguration& WithMaxEventsPerInvocation(int value) {
    SetMaxEventsPerInvocation(value);
    return *this;
  }
  ///@}
 private:
  int m_maxEventsPerInvocation{0};
  bool m_maxEventsPerInvocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
