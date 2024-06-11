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
    AWS_COSTEXPLORER_API SavingsPlansCoverageData();
    AWS_COSTEXPLORER_API SavingsPlansCoverageData(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansCoverageData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline const Aws::String& GetSpendCoveredBySavingsPlans() const{ return m_spendCoveredBySavingsPlans; }
    inline bool SpendCoveredBySavingsPlansHasBeenSet() const { return m_spendCoveredBySavingsPlansHasBeenSet; }
    inline void SetSpendCoveredBySavingsPlans(const Aws::String& value) { m_spendCoveredBySavingsPlansHasBeenSet = true; m_spendCoveredBySavingsPlans = value; }
    inline void SetSpendCoveredBySavingsPlans(Aws::String&& value) { m_spendCoveredBySavingsPlansHasBeenSet = true; m_spendCoveredBySavingsPlans = std::move(value); }
    inline void SetSpendCoveredBySavingsPlans(const char* value) { m_spendCoveredBySavingsPlansHasBeenSet = true; m_spendCoveredBySavingsPlans.assign(value); }
    inline SavingsPlansCoverageData& WithSpendCoveredBySavingsPlans(const Aws::String& value) { SetSpendCoveredBySavingsPlans(value); return *this;}
    inline SavingsPlansCoverageData& WithSpendCoveredBySavingsPlans(Aws::String&& value) { SetSpendCoveredBySavingsPlans(std::move(value)); return *this;}
    inline SavingsPlansCoverageData& WithSpendCoveredBySavingsPlans(const char* value) { SetSpendCoveredBySavingsPlans(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline const Aws::String& GetOnDemandCost() const{ return m_onDemandCost; }
    inline bool OnDemandCostHasBeenSet() const { return m_onDemandCostHasBeenSet; }
    inline void SetOnDemandCost(const Aws::String& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = value; }
    inline void SetOnDemandCost(Aws::String&& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = std::move(value); }
    inline void SetOnDemandCost(const char* value) { m_onDemandCostHasBeenSet = true; m_onDemandCost.assign(value); }
    inline SavingsPlansCoverageData& WithOnDemandCost(const Aws::String& value) { SetOnDemandCost(value); return *this;}
    inline SavingsPlansCoverageData& WithOnDemandCost(Aws::String&& value) { SetOnDemandCost(std::move(value)); return *this;}
    inline SavingsPlansCoverageData& WithOnDemandCost(const char* value) { SetOnDemandCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline const Aws::String& GetTotalCost() const{ return m_totalCost; }
    inline bool TotalCostHasBeenSet() const { return m_totalCostHasBeenSet; }
    inline void SetTotalCost(const Aws::String& value) { m_totalCostHasBeenSet = true; m_totalCost = value; }
    inline void SetTotalCost(Aws::String&& value) { m_totalCostHasBeenSet = true; m_totalCost = std::move(value); }
    inline void SetTotalCost(const char* value) { m_totalCostHasBeenSet = true; m_totalCost.assign(value); }
    inline SavingsPlansCoverageData& WithTotalCost(const Aws::String& value) { SetTotalCost(value); return *this;}
    inline SavingsPlansCoverageData& WithTotalCost(Aws::String&& value) { SetTotalCost(std::move(value)); return *this;}
    inline SavingsPlansCoverageData& WithTotalCost(const char* value) { SetTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline const Aws::String& GetCoveragePercentage() const{ return m_coveragePercentage; }
    inline bool CoveragePercentageHasBeenSet() const { return m_coveragePercentageHasBeenSet; }
    inline void SetCoveragePercentage(const Aws::String& value) { m_coveragePercentageHasBeenSet = true; m_coveragePercentage = value; }
    inline void SetCoveragePercentage(Aws::String&& value) { m_coveragePercentageHasBeenSet = true; m_coveragePercentage = std::move(value); }
    inline void SetCoveragePercentage(const char* value) { m_coveragePercentageHasBeenSet = true; m_coveragePercentage.assign(value); }
    inline SavingsPlansCoverageData& WithCoveragePercentage(const Aws::String& value) { SetCoveragePercentage(value); return *this;}
    inline SavingsPlansCoverageData& WithCoveragePercentage(Aws::String&& value) { SetCoveragePercentage(std::move(value)); return *this;}
    inline SavingsPlansCoverageData& WithCoveragePercentage(const char* value) { SetCoveragePercentage(value); return *this;}
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
