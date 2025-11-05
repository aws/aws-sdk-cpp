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
 * <p>Connection details for customer to Agent and Agent to Ground
 * Station</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UplinkConnectionDetails">AWS
 * API Reference</a></p>
 */
class UplinkConnectionDetails {
 public:
  AWS_GROUNDSTATION_API UplinkConnectionDetails() = default;
  AWS_GROUNDSTATION_API UplinkConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API UplinkConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const ConnectionDetails& GetIngressAddressAndPort() const { return m_ingressAddressAndPort; }
  inline bool IngressAddressAndPortHasBeenSet() const { return m_ingressAddressAndPortHasBeenSet; }
  template <typename IngressAddressAndPortT = ConnectionDetails>
  void SetIngressAddressAndPort(IngressAddressAndPortT&& value) {
    m_ingressAddressAndPortHasBeenSet = true;
    m_ingressAddressAndPort = std::forward<IngressAddressAndPortT>(value);
  }
  template <typename IngressAddressAndPortT = ConnectionDetails>
  UplinkConnectionDetails& WithIngressAddressAndPort(IngressAddressAndPortT&& value) {
    SetIngressAddressAndPort(std::forward<IngressAddressAndPortT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RangedConnectionDetails& GetAgentIpAndPortAddress() const { return m_agentIpAndPortAddress; }
  inline bool AgentIpAndPortAddressHasBeenSet() const { return m_agentIpAndPortAddressHasBeenSet; }
  template <typename AgentIpAndPortAddressT = RangedConnectionDetails>
  void SetAgentIpAndPortAddress(AgentIpAndPortAddressT&& value) {
    m_agentIpAndPortAddressHasBeenSet = true;
    m_agentIpAndPortAddress = std::forward<AgentIpAndPortAddressT>(value);
  }
  template <typename AgentIpAndPortAddressT = RangedConnectionDetails>
  UplinkConnectionDetails& WithAgentIpAndPortAddress(AgentIpAndPortAddressT&& value) {
    SetAgentIpAndPortAddress(std::forward<AgentIpAndPortAddressT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectionDetails m_ingressAddressAndPort;
  bool m_ingressAddressAndPortHasBeenSet = false;

  RangedConnectionDetails m_agentIpAndPortAddress;
  bool m_agentIpAndPortAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
