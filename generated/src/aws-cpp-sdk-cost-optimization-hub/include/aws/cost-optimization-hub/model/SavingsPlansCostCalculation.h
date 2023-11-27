/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/SavingsPlansPricing.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/SavingsPlansCostCalculation">AWS
   * API Reference</a></p>
   */
  class SavingsPlansCostCalculation
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API SavingsPlansCostCalculation();
    AWS_COSTOPTIMIZATIONHUB_API SavingsPlansCostCalculation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API SavingsPlansCostCalculation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Pricing details of the purchase recommendation.</p>
     */
    inline const SavingsPlansPricing& GetPricing() const{ return m_pricing; }

    /**
     * <p>Pricing details of the purchase recommendation.</p>
     */
    inline bool PricingHasBeenSet() const { return m_pricingHasBeenSet; }

    /**
     * <p>Pricing details of the purchase recommendation.</p>
     */
    inline void SetPricing(const SavingsPlansPricing& value) { m_pricingHasBeenSet = true; m_pricing = value; }

    /**
     * <p>Pricing details of the purchase recommendation.</p>
     */
    inline void SetPricing(SavingsPlansPricing&& value) { m_pricingHasBeenSet = true; m_pricing = std::move(value); }

    /**
     * <p>Pricing details of the purchase recommendation.</p>
     */
    inline SavingsPlansCostCalculation& WithPricing(const SavingsPlansPricing& value) { SetPricing(value); return *this;}

    /**
     * <p>Pricing details of the purchase recommendation.</p>
     */
    inline SavingsPlansCostCalculation& WithPricing(SavingsPlansPricing&& value) { SetPricing(std::move(value)); return *this;}

  private:

    SavingsPlansPricing m_pricing;
    bool m_pricingHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
