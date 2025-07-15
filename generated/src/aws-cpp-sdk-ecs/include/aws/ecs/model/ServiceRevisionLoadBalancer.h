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
   * <p>The resolved load balancer configuration for a service revision. This
   * includes information about which target groups serve traffic and which listener
   * rules direct traffic to them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRevisionLoadBalancer">AWS
   * API Reference</a></p>
   */
  class ServiceRevisionLoadBalancer
  {
  public:
    AWS_ECS_API ServiceRevisionLoadBalancer() = default;
    AWS_ECS_API ServiceRevisionLoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceRevisionLoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target group associated with the
     * service revision.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const { return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    template<typename TargetGroupArnT = Aws::String>
    void SetTargetGroupArn(TargetGroupArnT&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::forward<TargetGroupArnT>(value); }
    template<typename TargetGroupArnT = Aws::String>
    ServiceRevisionLoadBalancer& WithTargetGroupArn(TargetGroupArnT&& value) { SetTargetGroupArn(std::forward<TargetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the production listener rule or listener
     * that directs traffic to the target group associated with the service
     * revision.</p>
     */
    inline const Aws::String& GetProductionListenerRule() const { return m_productionListenerRule; }
    inline bool ProductionListenerRuleHasBeenSet() const { return m_productionListenerRuleHasBeenSet; }
    template<typename ProductionListenerRuleT = Aws::String>
    void SetProductionListenerRule(ProductionListenerRuleT&& value) { m_productionListenerRuleHasBeenSet = true; m_productionListenerRule = std::forward<ProductionListenerRuleT>(value); }
    template<typename ProductionListenerRuleT = Aws::String>
    ServiceRevisionLoadBalancer& WithProductionListenerRule(ProductionListenerRuleT&& value) { SetProductionListenerRule(std::forward<ProductionListenerRuleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    Aws::String m_productionListenerRule;
    bool m_productionListenerRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
