/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/OpenSearchReservedInstancesConfiguration.h>
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
   * <p>The OpenSearch reserved instances recommendation details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/OpenSearchReservedInstances">AWS
   * API Reference</a></p>
   */
  class OpenSearchReservedInstances
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API OpenSearchReservedInstances();
    AWS_COSTOPTIMIZATIONHUB_API OpenSearchReservedInstances(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API OpenSearchReservedInstances& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OpenSearch reserved instances configuration used for recommendations.</p>
     */
    inline const OpenSearchReservedInstancesConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The OpenSearch reserved instances configuration used for recommendations.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The OpenSearch reserved instances configuration used for recommendations.</p>
     */
    inline void SetConfiguration(const OpenSearchReservedInstancesConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The OpenSearch reserved instances configuration used for recommendations.</p>
     */
    inline void SetConfiguration(OpenSearchReservedInstancesConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The OpenSearch reserved instances configuration used for recommendations.</p>
     */
    inline OpenSearchReservedInstances& WithConfiguration(const OpenSearchReservedInstancesConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The OpenSearch reserved instances configuration used for recommendations.</p>
     */
    inline OpenSearchReservedInstances& WithConfiguration(OpenSearchReservedInstancesConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


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
    inline OpenSearchReservedInstances& WithCostCalculation(const ReservedInstancesCostCalculation& value) { SetCostCalculation(value); return *this;}

    /**
     * <p>Cost impact of the purchase recommendation.</p>
     */
    inline OpenSearchReservedInstances& WithCostCalculation(ReservedInstancesCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}

  private:

    OpenSearchReservedInstancesConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ReservedInstancesCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
