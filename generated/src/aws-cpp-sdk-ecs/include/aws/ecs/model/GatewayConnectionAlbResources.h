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
 * <p>The Application Load Balancer resources that a gateway created and manages
 * for a connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConnectionAlbResources">AWS
 * API Reference</a></p>
 */
class GatewayConnectionAlbResources {
 public:
  AWS_ECS_API GatewayConnectionAlbResources() = default;
  AWS_ECS_API GatewayConnectionAlbResources(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConnectionAlbResources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
   * certificate that is attached to the load balancer listener.</p>
   */
  inline const Aws::String& GetAcmCertificateArn() const { return m_acmCertificateArn; }
  inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }
  template <typename AcmCertificateArnT = Aws::String>
  void SetAcmCertificateArn(AcmCertificateArnT&& value) {
    m_acmCertificateArnHasBeenSet = true;
    m_acmCertificateArn = std::forward<AcmCertificateArnT>(value);
  }
  template <typename AcmCertificateArnT = Aws::String>
  GatewayConnectionAlbResources& WithAcmCertificateArn(AcmCertificateArnT&& value) {
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
  GatewayConnectionAlbResources& WithLoadBalancerArn(LoadBalancerArnT&& value) {
    SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the security groups that the gateway
   * attaches to the load balancer.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLoadBalancerSecurityGroupArns() const { return m_loadBalancerSecurityGroupArns; }
  inline bool LoadBalancerSecurityGroupArnsHasBeenSet() const { return m_loadBalancerSecurityGroupArnsHasBeenSet; }
  template <typename LoadBalancerSecurityGroupArnsT = Aws::Vector<Aws::String>>
  void SetLoadBalancerSecurityGroupArns(LoadBalancerSecurityGroupArnsT&& value) {
    m_loadBalancerSecurityGroupArnsHasBeenSet = true;
    m_loadBalancerSecurityGroupArns = std::forward<LoadBalancerSecurityGroupArnsT>(value);
  }
  template <typename LoadBalancerSecurityGroupArnsT = Aws::Vector<Aws::String>>
  GatewayConnectionAlbResources& WithLoadBalancerSecurityGroupArns(LoadBalancerSecurityGroupArnsT&& value) {
    SetLoadBalancerSecurityGroupArns(std::forward<LoadBalancerSecurityGroupArnsT>(value));
    return *this;
  }
  template <typename LoadBalancerSecurityGroupArnsT = Aws::String>
  GatewayConnectionAlbResources& AddLoadBalancerSecurityGroupArns(LoadBalancerSecurityGroupArnsT&& value) {
    m_loadBalancerSecurityGroupArnsHasBeenSet = true;
    m_loadBalancerSecurityGroupArns.emplace_back(std::forward<LoadBalancerSecurityGroupArnsT>(value));
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
  GatewayConnectionAlbResources& WithListenerArn(ListenerArnT&& value) {
    SetListenerArn(std::forward<ListenerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the listener rule that routes production
   * traffic to the service.</p>
   */
  inline const Aws::String& GetListenerRuleArn() const { return m_listenerRuleArn; }
  inline bool ListenerRuleArnHasBeenSet() const { return m_listenerRuleArnHasBeenSet; }
  template <typename ListenerRuleArnT = Aws::String>
  void SetListenerRuleArn(ListenerRuleArnT&& value) {
    m_listenerRuleArnHasBeenSet = true;
    m_listenerRuleArn = std::forward<ListenerRuleArnT>(value);
  }
  template <typename ListenerRuleArnT = Aws::String>
  GatewayConnectionAlbResources& WithListenerRuleArn(ListenerRuleArnT&& value) {
    SetListenerRuleArn(std::forward<ListenerRuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the listener rule that routes test traffic
   * to the service during progressive deployments.</p>
   */
  inline const Aws::String& GetTestListenerRuleArn() const { return m_testListenerRuleArn; }
  inline bool TestListenerRuleArnHasBeenSet() const { return m_testListenerRuleArnHasBeenSet; }
  template <typename TestListenerRuleArnT = Aws::String>
  void SetTestListenerRuleArn(TestListenerRuleArnT&& value) {
    m_testListenerRuleArnHasBeenSet = true;
    m_testListenerRuleArn = std::forward<TestListenerRuleArnT>(value);
  }
  template <typename TestListenerRuleArnT = Aws::String>
  GatewayConnectionAlbResources& WithTestListenerRuleArn(TestListenerRuleArnT&& value) {
    SetTestListenerRuleArn(std::forward<TestListenerRuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the target group that receives production
   * traffic.</p>
   */
  inline const Aws::String& GetTargetGroupArn() const { return m_targetGroupArn; }
  inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
  template <typename TargetGroupArnT = Aws::String>
  void SetTargetGroupArn(TargetGroupArnT&& value) {
    m_targetGroupArnHasBeenSet = true;
    m_targetGroupArn = std::forward<TargetGroupArnT>(value);
  }
  template <typename TargetGroupArnT = Aws::String>
  GatewayConnectionAlbResources& WithTargetGroupArn(TargetGroupArnT&& value) {
    SetTargetGroupArn(std::forward<TargetGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the alternate target group that the gateway
   * uses during progressive deployments.</p>
   */
  inline const Aws::String& GetAlternateTargetGroupArn() const { return m_alternateTargetGroupArn; }
  inline bool AlternateTargetGroupArnHasBeenSet() const { return m_alternateTargetGroupArnHasBeenSet; }
  template <typename AlternateTargetGroupArnT = Aws::String>
  void SetAlternateTargetGroupArn(AlternateTargetGroupArnT&& value) {
    m_alternateTargetGroupArnHasBeenSet = true;
    m_alternateTargetGroupArn = std::forward<AlternateTargetGroupArnT>(value);
  }
  template <typename AlternateTargetGroupArnT = Aws::String>
  GatewayConnectionAlbResources& WithAlternateTargetGroupArn(AlternateTargetGroupArnT&& value) {
    SetAlternateTargetGroupArn(std::forward<AlternateTargetGroupArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmCertificateArn;

  Aws::String m_loadBalancerArn;

  Aws::Vector<Aws::String> m_loadBalancerSecurityGroupArns;

  Aws::String m_listenerArn;

  Aws::String m_listenerRuleArn;

  Aws::String m_testListenerRuleArn;

  Aws::String m_targetGroupArn;

  Aws::String m_alternateTargetGroupArn;
  bool m_acmCertificateArnHasBeenSet = false;
  bool m_loadBalancerArnHasBeenSet = false;
  bool m_loadBalancerSecurityGroupArnsHasBeenSet = false;
  bool m_listenerArnHasBeenSet = false;
  bool m_listenerRuleArnHasBeenSet = false;
  bool m_testListenerRuleArnHasBeenSet = false;
  bool m_targetGroupArnHasBeenSet = false;
  bool m_alternateTargetGroupArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
