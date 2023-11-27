/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ElastiCacheReservedInstancesConfiguration.h>
#include <aws/cost-optimization-hub/model/ReservedInstancesCostCalculation.h>
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
   * <p>The ElastiCache reserved instances recommendation details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ElastiCacheReservedInstances">AWS
   * API Reference</a></p>
   */
  class ElastiCacheReservedInstances
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ElastiCacheReservedInstances();
    AWS_COSTOPTIMIZATIONHUB_API ElastiCacheReservedInstances(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ElastiCacheReservedInstances& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ElastiCache reserved instances configuration used for
     * recommendations.</p>
     */
    inline const ElastiCacheReservedInstancesConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The ElastiCache reserved instances configuration used for
     * recommendations.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The ElastiCache reserved instances configuration used for
     * recommendations.</p>
     */
    inline void SetConfiguration(const ElastiCacheReservedInstancesConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The ElastiCache reserved instances configuration used for
     * recommendations.</p>
     */
    inline void SetConfiguration(ElastiCacheReservedInstancesConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The ElastiCache reserved instances configuration used for
     * recommendations.</p>
     */
    inline ElastiCacheReservedInstances& WithConfiguration(const ElastiCacheReservedInstancesConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The ElastiCache reserved instances configuration used for
     * recommendations.</p>
     */
    inline ElastiCacheReservedInstances& WithConfiguration(ElastiCacheReservedInstancesConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Cost impact of the purchase recommendation.</p>
     */
    inline const ReservedInstancesCostCalculation& GetCostCalculation() const{ return m_costCalculation; }

    /**
     * <p>Cost impact of the purchase recommendation.</p>
     */
    inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }

    /**
     * <p>Cost impact of the purchase recommendation.</p>
     */
    inline void SetCostCalculation(const ReservedInstancesCostCalculation& value) { m_costCalculationHasBeenSet = true; m_costCalculation = value; }

    /**
     * <p>Cost impact of the purchase recommendation.</p>
     */
    inline void SetCostCalculation(ReservedInstancesCostCalculation&& value) { m_costCalculationHasBeenSet = true; m_costCalculation = std::move(value); }

    /**
     * <p>Cost impact of the purchase recommendation.</p>
     */
    inline ElastiCacheReservedInstances& WithCostCalculation(const ReservedInstancesCostCalculation& value) { SetCostCalculation(value); return *this;}

    /**
     * <p>Cost impact of the purchase recommendation.</p>
     */
    inline ElastiCacheReservedInstances& WithCostCalculation(ReservedInstancesCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}

  private:

    ElastiCacheReservedInstancesConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ReservedInstancesCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
