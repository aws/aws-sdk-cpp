/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/Ec2InstanceSavingsPlansConfiguration.h>
#include <aws/cost-optimization-hub/model/SavingsPlansCostCalculation.h>
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
   * <p>The EC2 instance Savings Plans recommendation details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Ec2InstanceSavingsPlans">AWS
   * API Reference</a></p>
   */
  class Ec2InstanceSavingsPlans
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlans();
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlans(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlans& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The EC2 instance Savings Plans configuration used for recommendations.</p>
     */
    inline const Ec2InstanceSavingsPlansConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The EC2 instance Savings Plans configuration used for recommendations.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The EC2 instance Savings Plans configuration used for recommendations.</p>
     */
    inline void SetConfiguration(const Ec2InstanceSavingsPlansConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The EC2 instance Savings Plans configuration used for recommendations.</p>
     */
    inline void SetConfiguration(Ec2InstanceSavingsPlansConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The EC2 instance Savings Plans configuration used for recommendations.</p>
     */
    inline Ec2InstanceSavingsPlans& WithConfiguration(const Ec2InstanceSavingsPlansConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The EC2 instance Savings Plans configuration used for recommendations.</p>
     */
    inline Ec2InstanceSavingsPlans& WithConfiguration(Ec2InstanceSavingsPlansConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline const SavingsPlansCostCalculation& GetCostCalculation() const{ return m_costCalculation; }

    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }

    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline void SetCostCalculation(const SavingsPlansCostCalculation& value) { m_costCalculationHasBeenSet = true; m_costCalculation = value; }

    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline void SetCostCalculation(SavingsPlansCostCalculation&& value) { m_costCalculationHasBeenSet = true; m_costCalculation = std::move(value); }

    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline Ec2InstanceSavingsPlans& WithCostCalculation(const SavingsPlansCostCalculation& value) { SetCostCalculation(value); return *this;}

    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline Ec2InstanceSavingsPlans& WithCostCalculation(SavingsPlansCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}

  private:

    Ec2InstanceSavingsPlansConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    SavingsPlansCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
