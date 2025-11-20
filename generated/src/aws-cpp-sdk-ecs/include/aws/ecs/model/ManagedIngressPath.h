/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AccessType.h>
#include <aws/ecs/model/ManagedCertificate.h>
#include <aws/ecs/model/ManagedListener.h>
#include <aws/ecs/model/ManagedListenerRule.h>
#include <aws/ecs/model/ManagedLoadBalancer.h>
#include <aws/ecs/model/ManagedSecurityGroup.h>
#include <aws/ecs/model/ManagedTargetGroup.h>

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
 * <p>The entry point into the Express service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedIngressPath">AWS
 * API Reference</a></p>
 */
class ManagedIngressPath {
 public:
  AWS_ECS_API ManagedIngressPath() = default;
  AWS_ECS_API ManagedIngressPath(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedIngressPath& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of access to the endpoint for the Express service.</p>
   */
  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline ManagedIngressPath& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint for access to the Express service.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  ManagedIngressPath& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Application Load Balancer associated with the Express service.</p>
   */
  inline const ManagedLoadBalancer& GetLoadBalancer() const { return m_loadBalancer; }
  inline bool LoadBalancerHasBeenSet() const { return m_loadBalancerHasBeenSet; }
  template <typename LoadBalancerT = ManagedLoadBalancer>
  void SetLoadBalancer(LoadBalancerT&& value) {
    m_loadBalancerHasBeenSet = true;
    m_loadBalancer = std::forward<LoadBalancerT>(value);
  }
  template <typename LoadBalancerT = ManagedLoadBalancer>
  ManagedIngressPath& WithLoadBalancer(LoadBalancerT&& value) {
    SetLoadBalancer(std::forward<LoadBalancerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security groups associated with the Application Load Balancer.</p>
   */
  inline const Aws::Vector<ManagedSecurityGroup>& GetLoadBalancerSecurityGroups() const { return m_loadBalancerSecurityGroups; }
  inline bool LoadBalancerSecurityGroupsHasBeenSet() const { return m_loadBalancerSecurityGroupsHasBeenSet; }
  template <typename LoadBalancerSecurityGroupsT = Aws::Vector<ManagedSecurityGroup>>
  void SetLoadBalancerSecurityGroups(LoadBalancerSecurityGroupsT&& value) {
    m_loadBalancerSecurityGroupsHasBeenSet = true;
    m_loadBalancerSecurityGroups = std::forward<LoadBalancerSecurityGroupsT>(value);
  }
  template <typename LoadBalancerSecurityGroupsT = Aws::Vector<ManagedSecurityGroup>>
  ManagedIngressPath& WithLoadBalancerSecurityGroups(LoadBalancerSecurityGroupsT&& value) {
    SetLoadBalancerSecurityGroups(std::forward<LoadBalancerSecurityGroupsT>(value));
    return *this;
  }
  template <typename LoadBalancerSecurityGroupsT = ManagedSecurityGroup>
  ManagedIngressPath& AddLoadBalancerSecurityGroups(LoadBalancerSecurityGroupsT&& value) {
    m_loadBalancerSecurityGroupsHasBeenSet = true;
    m_loadBalancerSecurityGroups.emplace_back(std::forward<LoadBalancerSecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ACM certificate for the Express service's domain.</p>
   */
  inline const ManagedCertificate& GetCertificate() const { return m_certificate; }
  inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
  template <typename CertificateT = ManagedCertificate>
  void SetCertificate(CertificateT&& value) {
    m_certificateHasBeenSet = true;
    m_certificate = std::forward<CertificateT>(value);
  }
  template <typename CertificateT = ManagedCertificate>
  ManagedIngressPath& WithCertificate(CertificateT&& value) {
    SetCertificate(std::forward<CertificateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The listeners associated with the Application Load Balancer.</p>
   */
  inline const ManagedListener& GetListener() const { return m_listener; }
  inline bool ListenerHasBeenSet() const { return m_listenerHasBeenSet; }
  template <typename ListenerT = ManagedListener>
  void SetListener(ListenerT&& value) {
    m_listenerHasBeenSet = true;
    m_listener = std::forward<ListenerT>(value);
  }
  template <typename ListenerT = ManagedListener>
  ManagedIngressPath& WithListener(ListenerT&& value) {
    SetListener(std::forward<ListenerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The listener rules for the Application Load Balancer.</p>
   */
  inline const ManagedListenerRule& GetRule() const { return m_rule; }
  inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
  template <typename RuleT = ManagedListenerRule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = ManagedListenerRule>
  ManagedIngressPath& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target groups associated with the Application Load Balancer.</p>
   */
  inline const Aws::Vector<ManagedTargetGroup>& GetTargetGroups() const { return m_targetGroups; }
  inline bool TargetGroupsHasBeenSet() const { return m_targetGroupsHasBeenSet; }
  template <typename TargetGroupsT = Aws::Vector<ManagedTargetGroup>>
  void SetTargetGroups(TargetGroupsT&& value) {
    m_targetGroupsHasBeenSet = true;
    m_targetGroups = std::forward<TargetGroupsT>(value);
  }
  template <typename TargetGroupsT = Aws::Vector<ManagedTargetGroup>>
  ManagedIngressPath& WithTargetGroups(TargetGroupsT&& value) {
    SetTargetGroups(std::forward<TargetGroupsT>(value));
    return *this;
  }
  template <typename TargetGroupsT = ManagedTargetGroup>
  ManagedIngressPath& AddTargetGroups(TargetGroupsT&& value) {
    m_targetGroupsHasBeenSet = true;
    m_targetGroups.emplace_back(std::forward<TargetGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  AccessType m_accessType{AccessType::NOT_SET};
  bool m_accessTypeHasBeenSet = false;

  Aws::String m_endpoint;
  bool m_endpointHasBeenSet = false;

  ManagedLoadBalancer m_loadBalancer;
  bool m_loadBalancerHasBeenSet = false;

  Aws::Vector<ManagedSecurityGroup> m_loadBalancerSecurityGroups;
  bool m_loadBalancerSecurityGroupsHasBeenSet = false;

  ManagedCertificate m_certificate;
  bool m_certificateHasBeenSet = false;

  ManagedListener m_listener;
  bool m_listenerHasBeenSet = false;

  ManagedListenerRule m_rule;
  bool m_ruleHasBeenSet = false;

  Aws::Vector<ManagedTargetGroup> m_targetGroups;
  bool m_targetGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
