/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/LambdaFunctionConfiguration.h>
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
   * <p>The Lambda function recommendation details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/LambdaFunction">AWS
   * API Reference</a></p>
   */
  class LambdaFunction
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API LambdaFunction();
    AWS_COSTOPTIMIZATIONHUB_API LambdaFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API LambdaFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Lambda function configuration used for recommendations.</p>
     */
    inline const LambdaFunctionConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The Lambda function configuration used for recommendations.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The Lambda function configuration used for recommendations.</p>
     */
    inline void SetConfiguration(const LambdaFunctionConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The Lambda function configuration used for recommendations.</p>
     */
    inline void SetConfiguration(LambdaFunctionConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The Lambda function configuration used for recommendations.</p>
     */
    inline LambdaFunction& WithConfiguration(const LambdaFunctionConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The Lambda function configuration used for recommendations.</p>
     */
    inline LambdaFunction& WithConfiguration(LambdaFunctionConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


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
    inline LambdaFunction& WithCostCalculation(const ResourceCostCalculation& value) { SetCostCalculation(value); return *this;}

    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline LambdaFunction& WithCostCalculation(ResourceCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}

  private:

    LambdaFunctionConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ResourceCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
