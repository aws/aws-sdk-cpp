/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/AgentAction.h>
#include <aws/connectcampaignsv2/model/TimeoutConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>Preview config</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PreviewConfig">AWS
 * API Reference</a></p>
 */
class PreviewConfig {
 public:
  AWS_CONNECTCAMPAIGNSV2_API PreviewConfig() = default;
  AWS_CONNECTCAMPAIGNSV2_API PreviewConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API PreviewConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline double GetBandwidthAllocation() const { return m_bandwidthAllocation; }
  inline bool BandwidthAllocationHasBeenSet() const { return m_bandwidthAllocationHasBeenSet; }
  inline void SetBandwidthAllocation(double value) {
    m_bandwidthAllocationHasBeenSet = true;
    m_bandwidthAllocation = value;
  }
  inline PreviewConfig& WithBandwidthAllocation(double value) {
    SetBandwidthAllocation(value);
    return *this;
  }
  ///@}

  ///@{

  inline const TimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
  inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
  template <typename TimeoutConfigT = TimeoutConfig>
  void SetTimeoutConfig(TimeoutConfigT&& value) {
    m_timeoutConfigHasBeenSet = true;
    m_timeoutConfig = std::forward<TimeoutConfigT>(value);
  }
  template <typename TimeoutConfigT = TimeoutConfig>
  PreviewConfig& WithTimeoutConfig(TimeoutConfigT&& value) {
    SetTimeoutConfig(std::forward<TimeoutConfigT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<AgentAction>& GetAgentActions() const { return m_agentActions; }
  inline bool AgentActionsHasBeenSet() const { return m_agentActionsHasBeenSet; }
  template <typename AgentActionsT = Aws::Vector<AgentAction>>
  void SetAgentActions(AgentActionsT&& value) {
    m_agentActionsHasBeenSet = true;
    m_agentActions = std::forward<AgentActionsT>(value);
  }
  template <typename AgentActionsT = Aws::Vector<AgentAction>>
  PreviewConfig& WithAgentActions(AgentActionsT&& value) {
    SetAgentActions(std::forward<AgentActionsT>(value));
    return *this;
  }
  inline PreviewConfig& AddAgentActions(AgentAction value) {
    m_agentActionsHasBeenSet = true;
    m_agentActions.push_back(value);
    return *this;
  }
  ///@}
 private:
  double m_bandwidthAllocation{0.0};

  TimeoutConfig m_timeoutConfig;

  Aws::Vector<AgentAction> m_agentActions;
  bool m_bandwidthAllocationHasBeenSet = false;
  bool m_timeoutConfigHasBeenSet = false;
  bool m_agentActionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
