/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ClusteringFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Configuration for periodic batch evaluation clustering, specifying how often
 * clustering jobs run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ClusteringConfig">AWS
 * API Reference</a></p>
 */
class ClusteringConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ClusteringConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ClusteringConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ClusteringConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of frequencies at which clustering batch evaluations are
   * triggered.</p>
   */
  inline const Aws::Vector<ClusteringFrequency>& GetFrequencies() const { return m_frequencies; }
  inline bool FrequenciesHasBeenSet() const { return m_frequenciesHasBeenSet; }
  template <typename FrequenciesT = Aws::Vector<ClusteringFrequency>>
  void SetFrequencies(FrequenciesT&& value) {
    m_frequenciesHasBeenSet = true;
    m_frequencies = std::forward<FrequenciesT>(value);
  }
  template <typename FrequenciesT = Aws::Vector<ClusteringFrequency>>
  ClusteringConfig& WithFrequencies(FrequenciesT&& value) {
    SetFrequencies(std::forward<FrequenciesT>(value));
    return *this;
  }
  inline ClusteringConfig& AddFrequencies(ClusteringFrequency value) {
    m_frequenciesHasBeenSet = true;
    m_frequencies.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ClusteringFrequency> m_frequencies;
  bool m_frequenciesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
