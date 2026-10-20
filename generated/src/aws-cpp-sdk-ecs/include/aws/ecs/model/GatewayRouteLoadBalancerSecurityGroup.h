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
 * <p>A security group attached to the load balancer for a gateway
 * route.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayRouteLoadBalancerSecurityGroup">AWS
 * API Reference</a></p>
 */
class GatewayRouteLoadBalancerSecurityGroup {
 public:
  AWS_ECS_API GatewayRouteLoadBalancerSecurityGroup() = default;
  AWS_ECS_API GatewayRouteLoadBalancerSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayRouteLoadBalancerSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the security group.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GatewayRouteLoadBalancerSecurityGroup& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the security group rules.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRuleArns() const { return m_ruleArns; }
  inline bool RuleArnsHasBeenSet() const { return m_ruleArnsHasBeenSet; }
  template <typename RuleArnsT = Aws::Vector<Aws::String>>
  void SetRuleArns(RuleArnsT&& value) {
    m_ruleArnsHasBeenSet = true;
    m_ruleArns = std::forward<RuleArnsT>(value);
  }
  template <typename RuleArnsT = Aws::Vector<Aws::String>>
  GatewayRouteLoadBalancerSecurityGroup& WithRuleArns(RuleArnsT&& value) {
    SetRuleArns(std::forward<RuleArnsT>(value));
    return *this;
  }
  template <typename RuleArnsT = Aws::String>
  GatewayRouteLoadBalancerSecurityGroup& AddRuleArns(RuleArnsT&& value) {
    m_ruleArnsHasBeenSet = true;
    m_ruleArns.emplace_back(std::forward<RuleArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Vector<Aws::String> m_ruleArns;
  bool m_arnHasBeenSet = false;
  bool m_ruleArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
