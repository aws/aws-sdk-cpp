/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/EbsVolumeConfiguration.h>
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
   * <p>Describes the Amazon Elastic Block Store volume configuration of the current
   * and recommended resource configuration for a recommendation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/EbsVolume">AWS
   * API Reference</a></p>
   */
  class EbsVolume
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API EbsVolume();
    AWS_COSTOPTIMIZATIONHUB_API EbsVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API EbsVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Elastic Block Store volume configuration used for
     * recommendations.</p>
     */
    inline const EbsVolumeConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const EbsVolumeConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(EbsVolumeConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline EbsVolume& WithConfiguration(const EbsVolumeConfiguration& value) { SetConfiguration(value); return *this;}
    inline EbsVolume& WithConfiguration(EbsVolumeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline const ResourceCostCalculation& GetCostCalculation() const{ return m_costCalculation; }
    inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }
    inline void SetCostCalculation(const ResourceCostCalculation& value) { m_costCalculationHasBeenSet = true; m_costCalculation = value; }
    inline void SetCostCalculation(ResourceCostCalculation&& value) { m_costCalculationHasBeenSet = true; m_costCalculation = std::move(value); }
    inline EbsVolume& WithCostCalculation(const ResourceCostCalculation& value) { SetCostCalculation(value); return *this;}
    inline EbsVolume& WithCostCalculation(ResourceCostCalculation&& value) { SetCostCalculation(std::move(value)); return *this;}
    ///@}
  private:

    EbsVolumeConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ResourceCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
