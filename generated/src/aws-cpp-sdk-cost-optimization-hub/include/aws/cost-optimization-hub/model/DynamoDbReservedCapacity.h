/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/DynamoDbReservedCapacityConfiguration.h>
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
   * <p>The DynamoDB reserved capacity recommendation details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/DynamoDbReservedCapacity">AWS
   * API Reference</a></p>
   */
  class DynamoDbReservedCapacity
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API DynamoDbReservedCapacity() = default;
    AWS_COSTOPTIMIZATIONHUB_API DynamoDbReservedCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API DynamoDbReservedCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DynamoDB reserved capacity configuration used for recommendations.</p>
     */
    inline const DynamoDbReservedCapacityConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = DynamoDbReservedCapacityConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = DynamoDbReservedCapacityConfiguration>
    DynamoDbReservedCapacity& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ReservedInstancesCostCalculation& GetCostCalculation() const { return m_costCalculation; }
    inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }
    template<typename CostCalculationT = ReservedInstancesCostCalculation>
    void SetCostCalculation(CostCalculationT&& value) { m_costCalculationHasBeenSet = true; m_costCalculation = std::forward<CostCalculationT>(value); }
    template<typename CostCalculationT = ReservedInstancesCostCalculation>
    DynamoDbReservedCapacity& WithCostCalculation(CostCalculationT&& value) { SetCostCalculation(std::forward<CostCalculationT>(value)); return *this;}
    ///@}
  private:

    DynamoDbReservedCapacityConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ReservedInstancesCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
