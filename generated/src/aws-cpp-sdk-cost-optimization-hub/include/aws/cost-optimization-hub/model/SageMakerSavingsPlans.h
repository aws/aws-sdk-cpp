﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/SageMakerSavingsPlansConfiguration.h>
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
   * <p>The SageMaker Savings Plans recommendation details.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/SageMakerSavingsPlans">AWS
   * API Reference</a></p>
   */
  class SageMakerSavingsPlans
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API SageMakerSavingsPlans();
    AWS_COSTOPTIMIZATIONHUB_API SageMakerSavingsPlans(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API SageMakerSavingsPlans& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SageMaker Savings Plans configuration used for recommendations.</p>
     */
    inline const SageMakerSavingsPlansConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const SageMakerSavingsPlansConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(SageMakerSavingsPlansConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline SageMakerSavingsPlans& WithConfiguration(const SageMakerSavingsPlansConfiguration& value) { SetConfiguration(value); return *this;}
    inline SageMakerSavingsPlans& WithConfiguration(SageMakerSavingsPlansConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost impact of the Savings Plans purchase recommendation.</p>
     */
    inline const SavingsPlansCostCalculation& GetCostCalculation() const{ return m_costCalculation; }
    inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }
    inline void SetCostCalculation(const SavingsPlansCostCalculation& value) { m_costCalculationHasBeenSet = true; m_costCalculation = value; }
    inline void SetCostCalculation(SavingsPlansCostCalculation&& value) { m_costCalculationHasBeenSet = true; m_costCalculation = std::move(value); }
    inline SageMakerSavingsPlans& WithCostCalculation(const SavingsPlansCostCalculation& value) { SetCostCalculation(value); return *this;}
    inline SageMakerSavingsPlans& WithCostCalculation(SavingsPlansCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}
    ///@}
  private:

    SageMakerSavingsPlansConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    SavingsPlansCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
