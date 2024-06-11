﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ReservedInstancesPricing.h>
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
   * <p>Cost impact of the purchase recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ReservedInstancesCostCalculation">AWS
   * API Reference</a></p>
   */
  class ReservedInstancesCostCalculation
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ReservedInstancesCostCalculation();
    AWS_COSTOPTIMIZATIONHUB_API ReservedInstancesCostCalculation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ReservedInstancesCostCalculation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Pricing details of the purchase recommendation.</p>
     */
    inline const ReservedInstancesPricing& GetPricing() const{ return m_pricing; }
    inline bool PricingHasBeenSet() const { return m_pricingHasBeenSet; }
    inline void SetPricing(const ReservedInstancesPricing& value) { m_pricingHasBeenSet = true; m_pricing = value; }
    inline void SetPricing(ReservedInstancesPricing&& value) { m_pricingHasBeenSet = true; m_pricing = std::move(value); }
    inline ReservedInstancesCostCalculation& WithPricing(const ReservedInstancesPricing& value) { SetPricing(value); return *this;}
    inline ReservedInstancesCostCalculation& WithPricing(ReservedInstancesPricing&& value) { SetPricing(std::move(value)); return *this;}
    ///@}
  private:

    ReservedInstancesPricing m_pricing;
    bool m_pricingHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
