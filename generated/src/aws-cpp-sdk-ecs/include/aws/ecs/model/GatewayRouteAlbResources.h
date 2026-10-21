/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayRouteLoadBalancerSecurityGroup.h>

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
 * <p>The Application Load Balancer resources that a gateway manages for a
 * route.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayRouteAlbResources">AWS
 * API Reference</a></p>
 */
class GatewayRouteAlbResources {
 public:
  AWS_ECS_API GatewayRouteAlbResources() = default;
  AWS_ECS_API GatewayRouteAlbResources(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayRouteAlbResources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
   * certificate.</p>
   */
  inline const Aws::String& GetAcmCertificateArn() const { return m_acmCertificateArn; }
  inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }
  template <typename AcmCertificateArnT = Aws::String>
  void SetAcmCertificateArn(AcmCertificateArnT&& value) {
    m_acmCertificateArnHasBeenSet = true;
    m_acmCertificateArn = std::forward<AcmCertificateArnT>(value);
  }
  template <typename AcmCertificateArnT = Aws::String>
  GatewayRouteAlbResources& WithAcmCertificateArn(AcmCertificateArnT&& value) {
    SetAcmCertificateArn(std::forward<AcmCertificateArnT>(value));
    return *this;
  }
  ///@}

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
  GatewayRouteAlbResources& WithLoadBalancerArn(LoadBalancerArnT&& value) {
    SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the listener.</p>
   */
  inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
  inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
  template <typename ListenerArnT = Aws::String>
  void SetListenerArn(ListenerArnT&& value) {
    m_listenerArnHasBeenSet = true;
    m_listenerArn = std::forward<ListenerArnT>(value);
  }
  template <typename ListenerArnT = Aws::String>
  GatewayRouteAlbResources& WithListenerArn(ListenerArnT&& value) {
    SetListenerArn(std::forward<ListenerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the listener rule for production
   * traffic.</p>
   */
  inline const Aws::String& GetListenerRuleArn() const { return m_listenerRuleArn; }
  inline bool ListenerRuleArnHasBeenSet() const { return m_listenerRuleArnHasBeenSet; }
  template <typename ListenerRuleArnT = Aws::String>
  void SetListenerRuleArn(ListenerRuleArnT&& value) {
    m_listenerRuleArnHasBeenSet = true;
    m_listenerRuleArn = std::forward<ListenerRuleArnT>(value);
  }
  template <typename ListenerRuleArnT = Aws::String>
  GatewayRouteAlbResources& WithListenerRuleArn(ListenerRuleArnT&& value) {
    SetListenerRuleArn(std::forward<ListenerRuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the listener rules for test traffic.
   * There is one rule except when a test header configuration is being changed to
   * another.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTestListenerRuleArns() const { return m_testListenerRuleArns; }
  inline bool TestListenerRuleArnsHasBeenSet() const { return m_testListenerRuleArnsHasBeenSet; }
  template <typename TestListenerRuleArnsT = Aws::Vector<Aws::String>>
  void SetTestListenerRuleArns(TestListenerRuleArnsT&& value) {
    m_testListenerRuleArnsHasBeenSet = true;
    m_testListenerRuleArns = std::forward<TestListenerRuleArnsT>(value);
  }
  template <typename TestListenerRuleArnsT = Aws::Vector<Aws::String>>
  GatewayRouteAlbResources& WithTestListenerRuleArns(TestListenerRuleArnsT&& value) {
    SetTestListenerRuleArns(std::forward<TestListenerRuleArnsT>(value));
    return *this;
  }
  template <typename TestListenerRuleArnsT = Aws::String>
  GatewayRouteAlbResources& AddTestListenerRuleArns(TestListenerRuleArnsT&& value) {
    m_testListenerRuleArnsHasBeenSet = true;
    m_testListenerRuleArns.emplace_back(std::forward<TestListenerRuleArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security groups attached to the load balancer.</p>
   */
  inline const Aws::Vector<GatewayRouteLoadBalancerSecurityGroup>& GetLoadBalancerSecurityGroups() const {
    return m_loadBalancerSecurityGroups;
  }
  inline bool LoadBalancerSecurityGroupsHasBeenSet() const { return m_loadBalancerSecurityGroupsHasBeenSet; }
  template <typename LoadBalancerSecurityGroupsT = Aws::Vector<GatewayRouteLoadBalancerSecurityGroup>>
  void SetLoadBalancerSecurityGroups(LoadBalancerSecurityGroupsT&& value) {
    m_loadBalancerSecurityGroupsHasBeenSet = true;
    m_loadBalancerSecurityGroups = std::forward<LoadBalancerSecurityGroupsT>(value);
  }
  template <typename LoadBalancerSecurityGroupsT = Aws::Vector<GatewayRouteLoadBalancerSecurityGroup>>
  GatewayRouteAlbResources& WithLoadBalancerSecurityGroups(LoadBalancerSecurityGroupsT&& value) {
    SetLoadBalancerSecurityGroups(std::forward<LoadBalancerSecurityGroupsT>(value));
    return *this;
  }
  template <typename LoadBalancerSecurityGroupsT = GatewayRouteLoadBalancerSecurityGroup>
  GatewayRouteAlbResources& AddLoadBalancerSecurityGroups(LoadBalancerSecurityGroupsT&& value) {
    m_loadBalancerSecurityGroupsHasBeenSet = true;
    m_loadBalancerSecurityGroups.emplace_back(std::forward<LoadBalancerSecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service security group in which the
   * gateway manages the ingress rule for this route.</p>
   */
  inline const Aws::String& GetServiceSecurityGroupArn() const { return m_serviceSecurityGroupArn; }
  inline bool ServiceSecurityGroupArnHasBeenSet() const { return m_serviceSecurityGroupArnHasBeenSet; }
  template <typename ServiceSecurityGroupArnT = Aws::String>
  void SetServiceSecurityGroupArn(ServiceSecurityGroupArnT&& value) {
    m_serviceSecurityGroupArnHasBeenSet = true;
    m_serviceSecurityGroupArn = std::forward<ServiceSecurityGroupArnT>(value);
  }
  template <typename ServiceSecurityGroupArnT = Aws::String>
  GatewayRouteAlbResources& WithServiceSecurityGroupArn(ServiceSecurityGroupArnT&& value) {
    SetServiceSecurityGroupArn(std::forward<ServiceSecurityGroupArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmCertificateArn;

  Aws::String m_loadBalancerArn;

  Aws::String m_listenerArn;

  Aws::String m_listenerRuleArn;

  Aws::Vector<Aws::String> m_testListenerRuleArns;

  Aws::Vector<GatewayRouteLoadBalancerSecurityGroup> m_loadBalancerSecurityGroups;

  Aws::String m_serviceSecurityGroupArn;
  bool m_acmCertificateArnHasBeenSet = false;
  bool m_loadBalancerArnHasBeenSet = false;
  bool m_listenerArnHasBeenSet = false;
  bool m_listenerRuleArnHasBeenSet = false;
  bool m_testListenerRuleArnsHasBeenSet = false;
  bool m_loadBalancerSecurityGroupsHasBeenSet = false;
  bool m_serviceSecurityGroupArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
