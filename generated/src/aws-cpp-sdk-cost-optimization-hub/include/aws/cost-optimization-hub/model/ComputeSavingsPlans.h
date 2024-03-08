/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ComputeSavingsPlansConfiguration.h>
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
   * <p>The Compute Savings Plans recommendation details.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ComputeSavingsPlans">AWS
   * API Reference</a></p>
   */
  class ComputeSavingsPlans
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ComputeSavingsPlans();
    AWS_COSTOPTIMIZATIONHUB_API ComputeSavingsPlans(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ComputeSavingsPlans& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration details of the Compute Savings Plans to purchase.</p>
     */
    inline const ComputeSavingsPlansConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Configuration details of the Compute Savings Plans to purchase.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Configuration details of the Compute Savings Plans to purchase.</p>
     */
    inline void SetConfiguration(const ComputeSavingsPlansConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Configuration details of the Compute Savings Plans to purchase.</p>
     */
    inline void SetConfiguration(ComputeSavingsPlansConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Configuration details of the Compute Savings Plans to purchase.</p>
     */
    inline ComputeSavingsPlans& WithConfiguration(const ComputeSavingsPlansConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration details of the Compute Savings Plans to purchase.</p>
     */
    inline ComputeSavingsPlans& WithConfiguration(ComputeSavingsPlansConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


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
    inline ComputeSavingsPlans& WithCostCalculation(const SavingsPlansCostCalculation& value) { SetCostCalculation(value); return *this;}

    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline ComputeSavingsPlans& WithCostCalculation(SavingsPlansCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}

  private:

    ComputeSavingsPlansConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    SavingsPlansCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
