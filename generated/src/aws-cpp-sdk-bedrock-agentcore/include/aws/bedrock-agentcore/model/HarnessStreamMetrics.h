/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Latency metrics for the invocation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessStreamMetrics">AWS
 * API Reference</a></p>
 */
class HarnessStreamMetrics {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessStreamMetrics() = default;
  AWS_BEDROCKAGENTCORE_API HarnessStreamMetrics(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessStreamMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The end-to-end latency of the invocation in milliseconds.</p>
   */
  inline long long GetLatencyMs() const { return m_latencyMs; }
  inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }
  inline void SetLatencyMs(long long value) {
    m_latencyMsHasBeenSet = true;
    m_latencyMs = value;
  }
  inline HarnessStreamMetrics& WithLatencyMs(long long value) {
    SetLatencyMs(value);
    return *this;
  }
  ///@}
 private:
  long long m_latencyMs{0};
  bool m_latencyMsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
