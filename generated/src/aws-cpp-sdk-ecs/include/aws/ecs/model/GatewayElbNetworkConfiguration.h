/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayElbIpAddressType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The network configuration for the load balancers that a gateway
 * manages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayElbNetworkConfiguration">AWS
 * API Reference</a></p>
 */
class GatewayElbNetworkConfiguration {
 public:
  AWS_ECS_API GatewayElbNetworkConfiguration() = default;
  AWS_ECS_API GatewayElbNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayElbNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of a security group that you provide to control inbound traffic to the
   * load balancers that the gateway manages. When you specify a security group, the
   * gateway doesn't create inbound rules on the security group it manages.</p>
   */
  inline const Aws::String& GetInboundSecurityGroup() const { return m_inboundSecurityGroup; }
  inline bool InboundSecurityGroupHasBeenSet() const { return m_inboundSecurityGroupHasBeenSet; }
  template <typename InboundSecurityGroupT = Aws::String>
  void SetInboundSecurityGroup(InboundSecurityGroupT&& value) {
    m_inboundSecurityGroupHasBeenSet = true;
    m_inboundSecurityGroup = std::forward<InboundSecurityGroupT>(value);
  }
  template <typename InboundSecurityGroupT = Aws::String>
  GatewayElbNetworkConfiguration& WithInboundSecurityGroup(InboundSecurityGroupT&& value) {
    SetInboundSecurityGroup(std::forward<InboundSecurityGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnets for the load balancers that the gateway manages. The default is
   * the subnets in the default VPC.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
  inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  void SetSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets = std::forward<SubnetsT>(value);
  }
  template <typename SubnetsT = Aws::Vector<Aws::String>>
  GatewayElbNetworkConfiguration& WithSubnets(SubnetsT&& value) {
    SetSubnets(std::forward<SubnetsT>(value));
    return *this;
  }
  template <typename SubnetsT = Aws::String>
  GatewayElbNetworkConfiguration& AddSubnets(SubnetsT&& value) {
    m_subnetsHasBeenSet = true;
    m_subnets.emplace_back(std::forward<SubnetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for the load balancers that the gateway manages. The
   * default is <code>dualstack</code>.</p>
   */
  inline GatewayElbIpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(GatewayElbIpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline GatewayElbNetworkConfiguration& WithIpAddressType(GatewayElbIpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_inboundSecurityGroup;

  Aws::Vector<Aws::String> m_subnets;

  GatewayElbIpAddressType m_ipAddressType{GatewayElbIpAddressType::NOT_SET};
  bool m_inboundSecurityGroupHasBeenSet = false;
  bool m_subnetsHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
