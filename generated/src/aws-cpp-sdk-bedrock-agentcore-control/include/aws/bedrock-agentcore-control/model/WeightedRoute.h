/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/TargetTrafficSplitEntry.h>
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
 * <p>A weighted route that splits traffic between multiple gateway
 * targets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/WeightedRoute">AWS
 * API Reference</a></p>
 */
class WeightedRoute {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API WeightedRoute() = default;
  AWS_BEDROCKAGENTCORECONTROL_API WeightedRoute(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API WeightedRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The traffic split entries defining how traffic is distributed between
   * targets.</p>
   */
  inline const Aws::Vector<TargetTrafficSplitEntry>& GetTrafficSplit() const { return m_trafficSplit; }
  inline bool TrafficSplitHasBeenSet() const { return m_trafficSplitHasBeenSet; }
  template <typename TrafficSplitT = Aws::Vector<TargetTrafficSplitEntry>>
  void SetTrafficSplit(TrafficSplitT&& value) {
    m_trafficSplitHasBeenSet = true;
    m_trafficSplit = std::forward<TrafficSplitT>(value);
  }
  template <typename TrafficSplitT = Aws::Vector<TargetTrafficSplitEntry>>
  WeightedRoute& WithTrafficSplit(TrafficSplitT&& value) {
    SetTrafficSplit(std::forward<TrafficSplitT>(value));
    return *this;
  }
  template <typename TrafficSplitT = TargetTrafficSplitEntry>
  WeightedRoute& AddTrafficSplit(TrafficSplitT&& value) {
    m_trafficSplitHasBeenSet = true;
    m_trafficSplit.emplace_back(std::forward<TrafficSplitT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TargetTrafficSplitEntry> m_trafficSplit;
  bool m_trafficSplitHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
