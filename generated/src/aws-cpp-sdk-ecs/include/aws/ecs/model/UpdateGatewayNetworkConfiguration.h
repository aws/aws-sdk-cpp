/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

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
 * <p>The mutable network configuration for the load balancers that a gateway
 * manages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateGatewayNetworkConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateGatewayNetworkConfiguration {
 public:
  AWS_ECS_API UpdateGatewayNetworkConfiguration() = default;
  AWS_ECS_API UpdateGatewayNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API UpdateGatewayNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  UpdateGatewayNetworkConfiguration& WithInboundSecurityGroup(InboundSecurityGroupT&& value) {
    SetInboundSecurityGroup(std::forward<InboundSecurityGroupT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inboundSecurityGroup;
  bool m_inboundSecurityGroupHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
