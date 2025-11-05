/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/DownlinkConnectionDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Dataflow details for a downlink endpoint</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DownlinkDataflowDetails">AWS
 * API Reference</a></p>
 */
class DownlinkDataflowDetails {
 public:
  AWS_GROUNDSTATION_API DownlinkDataflowDetails() = default;
  AWS_GROUNDSTATION_API DownlinkDataflowDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API DownlinkDataflowDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Downlink connection details for customer to Agent and Agent to Ground
   * Station</p>
   */
  inline const DownlinkConnectionDetails& GetAgentConnectionDetails() const { return m_agentConnectionDetails; }
  inline bool AgentConnectionDetailsHasBeenSet() const { return m_agentConnectionDetailsHasBeenSet; }
  template <typename AgentConnectionDetailsT = DownlinkConnectionDetails>
  void SetAgentConnectionDetails(AgentConnectionDetailsT&& value) {
    m_agentConnectionDetailsHasBeenSet = true;
    m_agentConnectionDetails = std::forward<AgentConnectionDetailsT>(value);
  }
  template <typename AgentConnectionDetailsT = DownlinkConnectionDetails>
  DownlinkDataflowDetails& WithAgentConnectionDetails(AgentConnectionDetailsT&& value) {
    SetAgentConnectionDetails(std::forward<AgentConnectionDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  DownlinkConnectionDetails m_agentConnectionDetails;
  bool m_agentConnectionDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
