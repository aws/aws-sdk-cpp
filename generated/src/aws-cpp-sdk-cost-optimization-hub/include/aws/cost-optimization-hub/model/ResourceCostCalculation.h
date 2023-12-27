/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ResourcePricing.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_COSTOPTIMIZATIONHUB_API ResourceCostCalculation();
    AWS_COSTOPTIMIZATIONHUB_API ResourceCostCalculation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ResourceCostCalculation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Pricing details of the resource recommendation.</p>
     */
    inline const ResourcePricing& GetPricing() const{ return m_pricing; }

    /**
     * <p>Pricing details of the resource recommendation.</p>
     */
    inline bool PricingHasBeenSet() const { return m_pricingHasBeenSet; }

    /**
     * <p>Pricing details of the resource recommendation.</p>
     */
    inline void SetPricing(const ResourcePricing& value) { m_pricingHasBeenSet = true; m_pricing = value; }

    /**
     * <p>Pricing details of the resource recommendation.</p>
     */
    inline void SetPricing(ResourcePricing&& value) { m_pricingHasBeenSet = true; m_pricing = std::move(value); }

    /**
     * <p>Pricing details of the resource recommendation.</p>
     */
    inline ResourceCostCalculation& WithPricing(const ResourcePricing& value) { SetPricing(value); return *this;}

    /**
     * <p>Pricing details of the resource recommendation.</p>
     */
    inline ResourceCostCalculation& WithPricing(ResourcePricing&& value) { SetPricing(std::move(value)); return *this;}


    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline const Aws::Vector<Usage>& GetUsages() const{ return m_usages; }

    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline bool UsagesHasBeenSet() const { return m_usagesHasBeenSet; }

    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline void SetUsages(const Aws::Vector<Usage>& value) { m_usagesHasBeenSet = true; m_usages = value; }

    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline void SetUsages(Aws::Vector<Usage>&& value) { m_usagesHasBeenSet = true; m_usages = std::move(value); }

    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline ResourceCostCalculation& WithUsages(const Aws::Vector<Usage>& value) { SetUsages(value); return *this;}

    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline ResourceCostCalculation& WithUsages(Aws::Vector<Usage>&& value) { SetUsages(std::move(value)); return *this;}

    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline ResourceCostCalculation& AddUsages(const Usage& value) { m_usagesHasBeenSet = true; m_usages.push_back(value); return *this; }

    /**
     * <p>Usage details of the resource recommendation.</p>
     */
    inline ResourceCostCalculation& AddUsages(Usage&& value) { m_usagesHasBeenSet = true; m_usages.push_back(std::move(value)); return *this; }

  private:

    ResourcePricing m_pricing;
    bool m_pricingHasBeenSet = false;

    Aws::Vector<Usage> m_usages;
    bool m_usagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
