/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>An Application Load Balancer and its associated resources that a gateway
 * manages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ElbGatewayResources">AWS
 * API Reference</a></p>
 */
class ElbGatewayResources {
 public:
  AWS_ECS_API ElbGatewayResources() = default;
  AWS_ECS_API ElbGatewayResources(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ElbGatewayResources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
   */
  inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
  inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
  template <typename LoadBalancerArnT = Aws::String>
  void SetLoadBalancerArn(LoadBalancerArnT&& value) {
    m_loadBalancerArnHasBeenSet = true;
    m_loadBalancerArn = std::forward<LoadBalancerArnT>(value);
  }
  template <typename LoadBalancerArnT = Aws::String>
  ElbGatewayResources& WithLoadBalancerArn(LoadBalancerArnT&& value) {
    SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the listener on the load balancer.</p>
   */
  inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
  inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
  template <typename ListenerArnT = Aws::String>
  void SetListenerArn(ListenerArnT&& value) {
    m_listenerArnHasBeenSet = true;
    m_listenerArn = std::forward<ListenerArnT>(value);
  }
  template <typename ListenerArnT = Aws::String>
  ElbGatewayResources& WithListenerArn(ListenerArnT&& value) {
    SetListenerArn(std::forward<ListenerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the security group attached to the load balancer.</p>
   */
  inline const Aws::String& GetSecurityGroup() const { return m_securityGroup; }
  inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
  template <typename SecurityGroupT = Aws::String>
  void SetSecurityGroup(SecurityGroupT&& value) {
    m_securityGroupHasBeenSet = true;
    m_securityGroup = std::forward<SecurityGroupT>(value);
  }
  template <typename SecurityGroupT = Aws::String>
  ElbGatewayResources& WithSecurityGroup(SecurityGroupT&& value) {
    SetSecurityGroup(std::forward<SecurityGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the gateway routes that use this load
   * balancer for ingress.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGatewayRouteArns() const { return m_gatewayRouteArns; }
  inline bool GatewayRouteArnsHasBeenSet() const { return m_gatewayRouteArnsHasBeenSet; }
  template <typename GatewayRouteArnsT = Aws::Vector<Aws::String>>
  void SetGatewayRouteArns(GatewayRouteArnsT&& value) {
    m_gatewayRouteArnsHasBeenSet = true;
    m_gatewayRouteArns = std::forward<GatewayRouteArnsT>(value);
  }
  template <typename GatewayRouteArnsT = Aws::Vector<Aws::String>>
  ElbGatewayResources& WithGatewayRouteArns(GatewayRouteArnsT&& value) {
    SetGatewayRouteArns(std::forward<GatewayRouteArnsT>(value));
    return *this;
  }
  template <typename GatewayRouteArnsT = Aws::String>
  ElbGatewayResources& AddGatewayRouteArns(GatewayRouteArnsT&& value) {
    m_gatewayRouteArnsHasBeenSet = true;
    m_gatewayRouteArns.emplace_back(std::forward<GatewayRouteArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_loadBalancerArn;

  Aws::String m_listenerArn;

  Aws::String m_securityGroup;

  Aws::Vector<Aws::String> m_gatewayRouteArns;
  bool m_loadBalancerArnHasBeenSet = false;
  bool m_listenerArnHasBeenSet = false;
  bool m_securityGroupHasBeenSet = false;
  bool m_gatewayRouteArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
