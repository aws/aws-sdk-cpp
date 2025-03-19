/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Specific coverage percentage, On-Demand costs, and spend covered by Savings
   * Plans, and total Savings Plans costs for an account.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansCoverageData">AWS
   * API Reference</a></p>
   */
  class SavingsPlansCoverageData
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansCoverageData() = default;
    AWS_COSTEXPLORER_API SavingsPlansCoverageData(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansCoverageData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline const Aws::String& GetSpendCoveredBySavingsPlans() const { return m_spendCoveredBySavingsPlans; }
    inline bool SpendCoveredBySavingsPlansHasBeenSet() const { return m_spendCoveredBySavingsPlansHasBeenSet; }
    template<typename SpendCoveredBySavingsPlansT = Aws::String>
    void SetSpendCoveredBySavingsPlans(SpendCoveredBySavingsPlansT&& value) { m_spendCoveredBySavingsPlansHasBeenSet = true; m_spendCoveredBySavingsPlans = std::forward<SpendCoveredBySavingsPlansT>(value); }
    template<typename SpendCoveredBySavingsPlansT = Aws::String>
    SavingsPlansCoverageData& WithSpendCoveredBySavingsPlans(SpendCoveredBySavingsPlansT&& value) { SetSpendCoveredBySavingsPlans(std::forward<SpendCoveredBySavingsPlansT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline const Aws::String& GetOnDemandCost() const { return m_onDemandCost; }
    inline bool OnDemandCostHasBeenSet() const { return m_onDemandCostHasBeenSet; }
    template<typename OnDemandCostT = Aws::String>
    void SetOnDemandCost(OnDemandCostT&& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = std::forward<OnDemandCostT>(value); }
    template<typename OnDemandCostT = Aws::String>
    SavingsPlansCoverageData& WithOnDemandCost(OnDemandCostT&& value) { SetOnDemandCost(std::forward<OnDemandCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline const Aws::String& GetTotalCost() const { return m_totalCost; }
    inline bool TotalCostHasBeenSet() const { return m_totalCostHasBeenSet; }
    template<typename TotalCostT = Aws::String>
    void SetTotalCost(TotalCostT&& value) { m_totalCostHasBeenSet = true; m_totalCost = std::forward<TotalCostT>(value); }
    template<typename TotalCostT = Aws::String>
    SavingsPlansCoverageData& WithTotalCost(TotalCostT&& value) { SetTotalCost(std::forward<TotalCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline const Aws::String& GetCoveragePercentage() const { return m_coveragePercentage; }
    inline bool CoveragePercentageHasBeenSet() const { return m_coveragePercentageHasBeenSet; }
    template<typename CoveragePercentageT = Aws::String>
    void SetCoveragePercentage(CoveragePercentageT&& value) { m_coveragePercentageHasBeenSet = true; m_coveragePercentage = std::forward<CoveragePercentageT>(value); }
    template<typename CoveragePercentageT = Aws::String>
    SavingsPlansCoverageData& WithCoveragePercentage(CoveragePercentageT&& value) { SetCoveragePercentage(std::forward<CoveragePercentageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spendCoveredBySavingsPlans;
    bool m_spendCoveredBySavingsPlansHasBeenSet = false;

    Aws::String m_onDemandCost;
    bool m_onDemandCostHasBeenSet = false;

    Aws::String m_totalCost;
    bool m_totalCostHasBeenSet = false;

    Aws::String m_coveragePercentage;
    bool m_coveragePercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
