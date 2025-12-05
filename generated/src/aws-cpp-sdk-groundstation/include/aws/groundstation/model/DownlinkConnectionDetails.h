/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ConnectionDetails.h>
#include <aws/groundstation/model/RangedConnectionDetails.h>

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
 * <p>Connection details for Ground Station to Agent and Agent to
 * customer</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DownlinkConnectionDetails">AWS
 * API Reference</a></p>
 */
class DownlinkConnectionDetails {
 public:
  AWS_GROUNDSTATION_API DownlinkConnectionDetails() = default;
  AWS_GROUNDSTATION_API DownlinkConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API DownlinkConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const RangedConnectionDetails& GetAgentIpAndPortAddress() const { return m_agentIpAndPortAddress; }
  inline bool AgentIpAndPortAddressHasBeenSet() const { return m_agentIpAndPortAddressHasBeenSet; }
  template <typename AgentIpAndPortAddressT = RangedConnectionDetails>
  void SetAgentIpAndPortAddress(AgentIpAndPortAddressT&& value) {
    m_agentIpAndPortAddressHasBeenSet = true;
    m_agentIpAndPortAddress = std::forward<AgentIpAndPortAddressT>(value);
  }
  template <typename AgentIpAndPortAddressT = RangedConnectionDetails>
  DownlinkConnectionDetails& WithAgentIpAndPortAddress(AgentIpAndPortAddressT&& value) {
    SetAgentIpAndPortAddress(std::forward<AgentIpAndPortAddressT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ConnectionDetails& GetEgressAddressAndPort() const { return m_egressAddressAndPort; }
  inline bool EgressAddressAndPortHasBeenSet() const { return m_egressAddressAndPortHasBeenSet; }
  template <typename EgressAddressAndPortT = ConnectionDetails>
  void SetEgressAddressAndPort(EgressAddressAndPortT&& value) {
    m_egressAddressAndPortHasBeenSet = true;
    m_egressAddressAndPort = std::forward<EgressAddressAndPortT>(value);
  }
  template <typename EgressAddressAndPortT = ConnectionDetails>
  DownlinkConnectionDetails& WithEgressAddressAndPort(EgressAddressAndPortT&& value) {
    SetEgressAddressAndPort(std::forward<EgressAddressAndPortT>(value));
    return *this;
  }
  ///@}
 private:
  RangedConnectionDetails m_agentIpAndPortAddress;

  ConnectionDetails m_egressAddressAndPort;
  bool m_agentIpAndPortAddressHasBeenSet = false;
  bool m_egressAddressAndPortHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
