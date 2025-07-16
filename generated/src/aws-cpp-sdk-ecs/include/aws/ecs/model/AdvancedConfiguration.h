/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The advanced settings for a load balancer used in blue/green deployments.
   * Specify the alternate target group, listener rules, and IAM role required for
   * traffic shifting during blue/green deployments. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/blue-green-deployment-implementation.html">Required
   * resources for Amazon ECS blue/green deployments</a> in the <i>Amazon Elastic
   * Container Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AdvancedConfiguration">AWS
   * API Reference</a></p>
   */
  class AdvancedConfiguration
  {
  public:
    AWS_ECS_API AdvancedConfiguration() = default;
    AWS_ECS_API AdvancedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AdvancedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alternate target group for Amazon ECS
     * blue/green deployments.</p>
     */
    inline const Aws::String& GetAlternateTargetGroupArn() const { return m_alternateTargetGroupArn; }
    inline bool AlternateTargetGroupArnHasBeenSet() const { return m_alternateTargetGroupArnHasBeenSet; }
    template<typename AlternateTargetGroupArnT = Aws::String>
    void SetAlternateTargetGroupArn(AlternateTargetGroupArnT&& value) { m_alternateTargetGroupArnHasBeenSet = true; m_alternateTargetGroupArn = std::forward<AlternateTargetGroupArnT>(value); }
    template<typename AlternateTargetGroupArnT = Aws::String>
    AdvancedConfiguration& WithAlternateTargetGroupArn(AlternateTargetGroupArnT&& value) { SetAlternateTargetGroupArn(std::forward<AlternateTargetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that that identifies the production listener
     * rule (in the case of an Application Load Balancer) or listener (in the case for
     * an Network Load Balancer) for routing production traffic.</p>
     */
    inline const Aws::String& GetProductionListenerRule() const { return m_productionListenerRule; }
    inline bool ProductionListenerRuleHasBeenSet() const { return m_productionListenerRuleHasBeenSet; }
    template<typename ProductionListenerRuleT = Aws::String>
    void SetProductionListenerRule(ProductionListenerRuleT&& value) { m_productionListenerRuleHasBeenSet = true; m_productionListenerRule = std::forward<ProductionListenerRuleT>(value); }
    template<typename ProductionListenerRuleT = Aws::String>
    AdvancedConfiguration& WithProductionListenerRule(ProductionListenerRuleT&& value) { SetProductionListenerRule(std::forward<ProductionListenerRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies ) that identifies the test
     * listener rule (in the case of an Application Load Balancer) or listener (in the
     * case for an Network Load Balancer) for routing test traffic.</p>
     */
    inline const Aws::String& GetTestListenerRule() const { return m_testListenerRule; }
    inline bool TestListenerRuleHasBeenSet() const { return m_testListenerRuleHasBeenSet; }
    template<typename TestListenerRuleT = Aws::String>
    void SetTestListenerRule(TestListenerRuleT&& value) { m_testListenerRuleHasBeenSet = true; m_testListenerRule = std::forward<TestListenerRuleT>(value); }
    template<typename TestListenerRuleT = Aws::String>
    AdvancedConfiguration& WithTestListenerRule(TestListenerRuleT&& value) { SetTestListenerRule(std::forward<TestListenerRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon ECS
     * permission to call the Elastic Load Balancing APIs for you.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AdvancedConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alternateTargetGroupArn;
    bool m_alternateTargetGroupArnHasBeenSet = false;

    Aws::String m_productionListenerRule;
    bool m_productionListenerRuleHasBeenSet = false;

    Aws::String m_testListenerRule;
    bool m_testListenerRuleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
