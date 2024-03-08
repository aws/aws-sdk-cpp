/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroupConfiguration.h>
#include <aws/cost-optimization-hub/model/ResourceCostCalculation.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The EC2 Auto Scaling group recommendation details.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Ec2AutoScalingGroup">AWS
   * API Reference</a></p>
   */
  class Ec2AutoScalingGroup
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Ec2AutoScalingGroup();
    AWS_COSTOPTIMIZATIONHUB_API Ec2AutoScalingGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Ec2AutoScalingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The EC2 Auto Scaling group configuration used for recommendations.</p>
     */
    inline const Ec2AutoScalingGroupConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The EC2 Auto Scaling group configuration used for recommendations.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The EC2 Auto Scaling group configuration used for recommendations.</p>
     */
    inline void SetConfiguration(const Ec2AutoScalingGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The EC2 Auto Scaling group configuration used for recommendations.</p>
     */
    inline void SetConfiguration(Ec2AutoScalingGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The EC2 Auto Scaling group configuration used for recommendations.</p>
     */
    inline Ec2AutoScalingGroup& WithConfiguration(const Ec2AutoScalingGroupConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The EC2 Auto Scaling group configuration used for recommendations.</p>
     */
    inline Ec2AutoScalingGroup& WithConfiguration(Ec2AutoScalingGroupConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline const ResourceCostCalculation& GetCostCalculation() const{ return m_costCalculation; }

    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }

    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline void SetCostCalculation(const ResourceCostCalculation& value) { m_costCalculationHasBeenSet = true; m_costCalculation = value; }

    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline void SetCostCalculation(ResourceCostCalculation&& value) { m_costCalculationHasBeenSet = true; m_costCalculation = std::move(value); }

    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline Ec2AutoScalingGroup& WithCostCalculation(const ResourceCostCalculation& value) { SetCostCalculation(value); return *this;}

    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline Ec2AutoScalingGroup& WithCostCalculation(ResourceCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}

  private:

    Ec2AutoScalingGroupConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ResourceCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
