/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/TrafficSplitEntry.h>
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
 * <p>A weighted configuration bundle override that splits traffic between multiple
 * bundle versions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/WeightedOverride">AWS
 * API Reference</a></p>
 */
class WeightedOverride {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API WeightedOverride() = default;
  AWS_BEDROCKAGENTCORECONTROL_API WeightedOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API WeightedOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The traffic split entries defining how traffic is distributed between
   * configuration bundle versions.</p>
   */
  inline const Aws::Vector<TrafficSplitEntry>& GetTrafficSplit() const { return m_trafficSplit; }
  inline bool TrafficSplitHasBeenSet() const { return m_trafficSplitHasBeenSet; }
  template <typename TrafficSplitT = Aws::Vector<TrafficSplitEntry>>
  void SetTrafficSplit(TrafficSplitT&& value) {
    m_trafficSplitHasBeenSet = true;
    m_trafficSplit = std::forward<TrafficSplitT>(value);
  }
  template <typename TrafficSplitT = Aws::Vector<TrafficSplitEntry>>
  WeightedOverride& WithTrafficSplit(TrafficSplitT&& value) {
    SetTrafficSplit(std::forward<TrafficSplitT>(value));
    return *this;
  }
  template <typename TrafficSplitT = TrafficSplitEntry>
  WeightedOverride& AddTrafficSplit(TrafficSplitT&& value) {
    m_trafficSplitHasBeenSet = true;
    m_trafficSplit.emplace_back(std::forward<TrafficSplitT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TrafficSplitEntry> m_trafficSplit;
  bool m_trafficSplitHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
