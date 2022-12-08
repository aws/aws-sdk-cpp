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


    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline const Aws::String& GetSpendCoveredBySavingsPlans() const{ return m_spendCoveredBySavingsPlans; }

    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline bool SpendCoveredBySavingsPlansHasBeenSet() const { return m_spendCoveredBySavingsPlansHasBeenSet; }

    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline void SetSpendCoveredBySavingsPlans(const Aws::String& value) { m_spendCoveredBySavingsPlansHasBeenSet = true; m_spendCoveredBySavingsPlans = value; }

    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline void SetSpendCoveredBySavingsPlans(Aws::String&& value) { m_spendCoveredBySavingsPlansHasBeenSet = true; m_spendCoveredBySavingsPlans = std::move(value); }

    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline void SetSpendCoveredBySavingsPlans(const char* value) { m_spendCoveredBySavingsPlansHasBeenSet = true; m_spendCoveredBySavingsPlans.assign(value); }

    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline SavingsPlansCoverageData& WithSpendCoveredBySavingsPlans(const Aws::String& value) { SetSpendCoveredBySavingsPlans(value); return *this;}

    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline SavingsPlansCoverageData& WithSpendCoveredBySavingsPlans(Aws::String&& value) { SetSpendCoveredBySavingsPlans(std::move(value)); return *this;}

    /**
     * <p>The amount of your Amazon Web Services usage that's covered by a Savings
     * Plans.</p>
     */
    inline SavingsPlansCoverageData& WithSpendCoveredBySavingsPlans(const char* value) { SetSpendCoveredBySavingsPlans(value); return *this;}


    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline const Aws::String& GetOnDemandCost() const{ return m_onDemandCost; }

    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline bool OnDemandCostHasBeenSet() const { return m_onDemandCostHasBeenSet; }

    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline void SetOnDemandCost(const Aws::String& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = value; }

    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline void SetOnDemandCost(Aws::String&& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = std::move(value); }

    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline void SetOnDemandCost(const char* value) { m_onDemandCostHasBeenSet = true; m_onDemandCost.assign(value); }

    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline SavingsPlansCoverageData& WithOnDemandCost(const Aws::String& value) { SetOnDemandCost(value); return *this;}

    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline SavingsPlansCoverageData& WithOnDemandCost(Aws::String&& value) { SetOnDemandCost(std::move(value)); return *this;}

    /**
     * <p>The cost of your Amazon Web Services usage at the public On-Demand rate.</p>
     */
    inline SavingsPlansCoverageData& WithOnDemandCost(const char* value) { SetOnDemandCost(value); return *this;}


    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline const Aws::String& GetTotalCost() const{ return m_totalCost; }

    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline bool TotalCostHasBeenSet() const { return m_totalCostHasBeenSet; }

    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline void SetTotalCost(const Aws::String& value) { m_totalCostHasBeenSet = true; m_totalCost = value; }

    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline void SetTotalCost(Aws::String&& value) { m_totalCostHasBeenSet = true; m_totalCost = std::move(value); }

    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline void SetTotalCost(const char* value) { m_totalCostHasBeenSet = true; m_totalCost.assign(value); }

    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline SavingsPlansCoverageData& WithTotalCost(const Aws::String& value) { SetTotalCost(value); return *this;}

    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline SavingsPlansCoverageData& WithTotalCost(Aws::String&& value) { SetTotalCost(std::move(value)); return *this;}

    /**
     * <p>The total cost of your Amazon Web Services usage, regardless of your purchase
     * option.</p>
     */
    inline SavingsPlansCoverageData& WithTotalCost(const char* value) { SetTotalCost(value); return *this;}


    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline const Aws::String& GetCoveragePercentage() const{ return m_coveragePercentage; }

    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline bool CoveragePercentageHasBeenSet() const { return m_coveragePercentageHasBeenSet; }

    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline void SetCoveragePercentage(const Aws::String& value) { m_coveragePercentageHasBeenSet = true; m_coveragePercentage = value; }

    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline void SetCoveragePercentage(Aws::String&& value) { m_coveragePercentageHasBeenSet = true; m_coveragePercentage = std::move(value); }

    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline void SetCoveragePercentage(const char* value) { m_coveragePercentageHasBeenSet = true; m_coveragePercentage.assign(value); }

    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline SavingsPlansCoverageData& WithCoveragePercentage(const Aws::String& value) { SetCoveragePercentage(value); return *this;}

    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline SavingsPlansCoverageData& WithCoveragePercentage(Aws::String&& value) { SetCoveragePercentage(std::move(value)); return *this;}

    /**
     * <p>The percentage of your existing Savings Plans covered usage, divided by all
     * of your eligible Savings Plans usage in an account (or set of accounts).</p>
     */
    inline SavingsPlansCoverageData& WithCoveragePercentage(const char* value) { SetCoveragePercentage(value); return *this;}

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
