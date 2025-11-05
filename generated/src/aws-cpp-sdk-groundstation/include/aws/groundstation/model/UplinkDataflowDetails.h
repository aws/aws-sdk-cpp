/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/UplinkConnectionDetails.h>

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
 * <p>Dataflow details for an uplink endpoint</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UplinkDataflowDetails">AWS
 * API Reference</a></p>
 */
class UplinkDataflowDetails {
 public:
  AWS_GROUNDSTATION_API UplinkDataflowDetails() = default;
  AWS_GROUNDSTATION_API UplinkDataflowDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API UplinkDataflowDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Uplink connection details for customer to Agent and Agent to Ground
   * Station</p>
   */
  inline const UplinkConnectionDetails& GetAgentConnectionDetails() const { return m_agentConnectionDetails; }
  inline bool AgentConnectionDetailsHasBeenSet() const { return m_agentConnectionDetailsHasBeenSet; }
  template <typename AgentConnectionDetailsT = UplinkConnectionDetails>
  void SetAgentConnectionDetails(AgentConnectionDetailsT&& value) {
    m_agentConnectionDetailsHasBeenSet = true;
    m_agentConnectionDetails = std::forward<AgentConnectionDetailsT>(value);
  }
  template <typename AgentConnectionDetailsT = UplinkConnectionDetails>
  UplinkDataflowDetails& WithAgentConnectionDetails(AgentConnectionDetailsT&& value) {
    SetAgentConnectionDetails(std::forward<AgentConnectionDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  UplinkConnectionDetails m_agentConnectionDetails;
  bool m_agentConnectionDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
