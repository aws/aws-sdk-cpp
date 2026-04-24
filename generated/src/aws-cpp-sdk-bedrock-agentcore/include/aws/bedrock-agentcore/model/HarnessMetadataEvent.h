/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessStreamMetrics.h>
#include <aws/bedrock-agentcore/model/HarnessTokenUsage.h>

#include <utility>

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
 * <p>Token usage and latency metrics for the invocation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessMetadataEvent">AWS
 * API Reference</a></p>
 */
class HarnessMetadataEvent {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessMetadataEvent() = default;
  AWS_BEDROCKAGENTCORE_API HarnessMetadataEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessMetadataEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Token usage counts.</p>
   */
  inline const HarnessTokenUsage& GetUsage() const { return m_usage; }
  inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
  template <typename UsageT = HarnessTokenUsage>
  void SetUsage(UsageT&& value) {
    m_usageHasBeenSet = true;
    m_usage = std::forward<UsageT>(value);
  }
  template <typename UsageT = HarnessTokenUsage>
  HarnessMetadataEvent& WithUsage(UsageT&& value) {
    SetUsage(std::forward<UsageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Latency metrics.</p>
   */
  inline const HarnessStreamMetrics& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = HarnessStreamMetrics>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = HarnessStreamMetrics>
  HarnessMetadataEvent& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessTokenUsage m_usage;

  HarnessStreamMetrics m_metrics;
  bool m_usageHasBeenSet = false;
  bool m_metricsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
