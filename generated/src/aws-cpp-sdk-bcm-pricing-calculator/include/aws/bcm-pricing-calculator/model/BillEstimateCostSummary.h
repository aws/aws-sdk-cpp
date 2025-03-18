/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/CostDifference.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Provides a summary of cost-related information for a bill estimate.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillEstimateCostSummary">AWS
   * API Reference</a></p>
   */
  class BillEstimateCostSummary
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCostSummary() = default;
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCostSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillEstimateCostSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The total difference in cost between the estimated and historical costs.
     * </p>
     */
    inline const CostDifference& GetTotalCostDifference() const { return m_totalCostDifference; }
    inline bool TotalCostDifferenceHasBeenSet() const { return m_totalCostDifferenceHasBeenSet; }
    template<typename TotalCostDifferenceT = CostDifference>
    void SetTotalCostDifference(TotalCostDifferenceT&& value) { m_totalCostDifferenceHasBeenSet = true; m_totalCostDifference = std::forward<TotalCostDifferenceT>(value); }
    template<typename TotalCostDifferenceT = CostDifference>
    BillEstimateCostSummary& WithTotalCostDifference(TotalCostDifferenceT&& value) { SetTotalCostDifference(std::forward<TotalCostDifferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A breakdown of cost differences by Amazon Web Services service. </p>
     */
    inline const Aws::Map<Aws::String, CostDifference>& GetServiceCostDifferences() const { return m_serviceCostDifferences; }
    inline bool ServiceCostDifferencesHasBeenSet() const { return m_serviceCostDifferencesHasBeenSet; }
    template<typename ServiceCostDifferencesT = Aws::Map<Aws::String, CostDifference>>
    void SetServiceCostDifferences(ServiceCostDifferencesT&& value) { m_serviceCostDifferencesHasBeenSet = true; m_serviceCostDifferences = std::forward<ServiceCostDifferencesT>(value); }
    template<typename ServiceCostDifferencesT = Aws::Map<Aws::String, CostDifference>>
    BillEstimateCostSummary& WithServiceCostDifferences(ServiceCostDifferencesT&& value) { SetServiceCostDifferences(std::forward<ServiceCostDifferencesT>(value)); return *this;}
    template<typename ServiceCostDifferencesKeyT = Aws::String, typename ServiceCostDifferencesValueT = CostDifference>
    BillEstimateCostSummary& AddServiceCostDifferences(ServiceCostDifferencesKeyT&& key, ServiceCostDifferencesValueT&& value) {
      m_serviceCostDifferencesHasBeenSet = true; m_serviceCostDifferences.emplace(std::forward<ServiceCostDifferencesKeyT>(key), std::forward<ServiceCostDifferencesValueT>(value)); return *this;
    }
    ///@}
  private:

    CostDifference m_totalCostDifference;
    bool m_totalCostDifferenceHasBeenSet = false;

    Aws::Map<Aws::String, CostDifference> m_serviceCostDifferences;
    bool m_serviceCostDifferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
