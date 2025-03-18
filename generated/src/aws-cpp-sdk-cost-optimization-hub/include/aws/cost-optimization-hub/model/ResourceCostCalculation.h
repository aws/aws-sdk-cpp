/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cost-optimization-hub/model/ResourcePricing.h>
#include <aws/cost-optimization-hub/model/Usage.h>
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
   * <p>Cost impact of the resource recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ResourceCostCalculation">AWS
   * API Reference</a></p>
   */
  class ResourceCostCalculation
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ResourceCostCalculation() = default;
    AWS_COSTOPTIMIZATIONHUB_API ResourceCostCalculation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ResourceCostCalculation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline const Aws::Vector<Usage>& GetUsages() const { return m_usages; }
    inline bool UsagesHasBeenSet() const { return m_usagesHasBeenSet; }
    template<typename UsagesT = Aws::Vector<Usage>>
    void SetUsages(UsagesT&& value) { m_usagesHasBeenSet = true; m_usages = std::forward<UsagesT>(value); }
    template<typename UsagesT = Aws::Vector<Usage>>
    ResourceCostCalculation& WithUsages(UsagesT&& value) { SetUsages(std::forward<UsagesT>(value)); return *this;}
    template<typename UsagesT = Usage>
    ResourceCostCalculation& AddUsages(UsagesT&& value) { m_usagesHasBeenSet = true; m_usages.emplace_back(std::forward<UsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pricing details of the resource recommendation.</p>
     */
    inline const ResourcePricing& GetPricing() const { return m_pricing; }
    inline bool PricingHasBeenSet() const { return m_pricingHasBeenSet; }
    template<typename PricingT = ResourcePricing>
    void SetPricing(PricingT&& value) { m_pricingHasBeenSet = true; m_pricing = std::forward<PricingT>(value); }
    template<typename PricingT = ResourcePricing>
    ResourceCostCalculation& WithPricing(PricingT&& value) { SetPricing(std::forward<PricingT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Usage> m_usages;
    bool m_usagesHasBeenSet = false;

    ResourcePricing m_pricing;
    bool m_pricingHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
