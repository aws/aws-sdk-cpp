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
 * <p>The advanced settings for VPC Lattice used in blue/green deployments. Specify
 * the alternate target group and listener rules required for traffic shifting
 * during blue/green deployments. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/blue-green-deployment-implementation.html">Required
 * resources for Amazon ECS blue/green deployments</a> in the <i>Amazon Elastic
 * Container Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/VpcLatticeAdvancedConfiguration">AWS
 * API Reference</a></p>
 */
class VpcLatticeAdvancedConfiguration {
 public:
  AWS_ECS_API VpcLatticeAdvancedConfiguration() = default;
  AWS_ECS_API VpcLatticeAdvancedConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API VpcLatticeAdvancedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the alternate target group associated with
   * the VPC Lattice Configuration for Amazon ECS blue/green deployments.</p>
   */
  inline const Aws::String& GetAlternateTargetGroupArn() const { return m_alternateTargetGroupArn; }
  inline bool AlternateTargetGroupArnHasBeenSet() const { return m_alternateTargetGroupArnHasBeenSet; }
  template <typename AlternateTargetGroupArnT = Aws::String>
  void SetAlternateTargetGroupArn(AlternateTargetGroupArnT&& value) {
    m_alternateTargetGroupArnHasBeenSet = true;
    m_alternateTargetGroupArn = std::forward<AlternateTargetGroupArnT>(value);
  }
  template <typename AlternateTargetGroupArnT = Aws::String>
  VpcLatticeAdvancedConfiguration& WithAlternateTargetGroupArn(AlternateTargetGroupArnT&& value) {
    SetAlternateTargetGroupArn(std::forward<AlternateTargetGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that identifies the production listener rule
   * or listener for routing production traffic.</p>
   */
  inline const Aws::String& GetProductionListenerRule() const { return m_productionListenerRule; }
  inline bool ProductionListenerRuleHasBeenSet() const { return m_productionListenerRuleHasBeenSet; }
  template <typename ProductionListenerRuleT = Aws::String>
  void SetProductionListenerRule(ProductionListenerRuleT&& value) {
    m_productionListenerRuleHasBeenSet = true;
    m_productionListenerRule = std::forward<ProductionListenerRuleT>(value);
  }
  template <typename ProductionListenerRuleT = Aws::String>
  VpcLatticeAdvancedConfiguration& WithProductionListenerRule(ProductionListenerRuleT&& value) {
    SetProductionListenerRule(std::forward<ProductionListenerRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that identifies the test listener rule or
   * listener for routing test traffic.</p>
   */
  inline const Aws::String& GetTestListenerRule() const { return m_testListenerRule; }
  inline bool TestListenerRuleHasBeenSet() const { return m_testListenerRuleHasBeenSet; }
  template <typename TestListenerRuleT = Aws::String>
  void SetTestListenerRule(TestListenerRuleT&& value) {
    m_testListenerRuleHasBeenSet = true;
    m_testListenerRule = std::forward<TestListenerRuleT>(value);
  }
  template <typename TestListenerRuleT = Aws::String>
  VpcLatticeAdvancedConfiguration& WithTestListenerRule(TestListenerRuleT&& value) {
    SetTestListenerRule(std::forward<TestListenerRuleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alternateTargetGroupArn;

  Aws::String m_productionListenerRule;

  Aws::String m_testListenerRule;
  bool m_alternateTargetGroupArnHasBeenSet = false;
  bool m_productionListenerRuleHasBeenSet = false;
  bool m_testListenerRuleHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
