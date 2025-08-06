/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/BudgetType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/budgets/model/CostTypes.h>
#include <aws/budgets/model/TimeUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/BudgetedAndActualAmounts.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>A history of the state of a budget at the end of the budget's specified time
   * period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/BudgetPerformanceHistory">AWS
   * API Reference</a></p>
   */
  class BudgetPerformanceHistory
  {
  public:
    AWS_BUDGETS_API BudgetPerformanceHistory() = default;
    AWS_BUDGETS_API BudgetPerformanceHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API BudgetPerformanceHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetBudgetName() const { return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    template<typename BudgetNameT = Aws::String>
    void SetBudgetName(BudgetNameT&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::forward<BudgetNameT>(value); }
    template<typename BudgetNameT = Aws::String>
    BudgetPerformanceHistory& WithBudgetName(BudgetNameT&& value) { SetBudgetName(std::forward<BudgetNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline BudgetType GetBudgetType() const { return m_budgetType; }
    inline bool BudgetTypeHasBeenSet() const { return m_budgetTypeHasBeenSet; }
    inline void SetBudgetType(BudgetType value) { m_budgetTypeHasBeenSet = true; m_budgetType = value; }
    inline BudgetPerformanceHistory& WithBudgetType(BudgetType value) { SetBudgetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetCostFilters() const { return m_costFilters; }
    inline bool CostFiltersHasBeenSet() const { return m_costFiltersHasBeenSet; }
    template<typename CostFiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetCostFilters(CostFiltersT&& value) { m_costFiltersHasBeenSet = true; m_costFilters = std::forward<CostFiltersT>(value); }
    template<typename CostFiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    BudgetPerformanceHistory& WithCostFilters(CostFiltersT&& value) { SetCostFilters(std::forward<CostFiltersT>(value)); return *this;}
    template<typename CostFiltersKeyT = Aws::String, typename CostFiltersValueT = Aws::Vector<Aws::String>>
    BudgetPerformanceHistory& AddCostFilters(CostFiltersKeyT&& key, CostFiltersValueT&& value) {
      m_costFiltersHasBeenSet = true; m_costFilters.emplace(std::forward<CostFiltersKeyT>(key), std::forward<CostFiltersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The history of the cost types for a budget during the specified time
     * period.</p>
     */
    inline const CostTypes& GetCostTypes() const { return m_costTypes; }
    inline bool CostTypesHasBeenSet() const { return m_costTypesHasBeenSet; }
    template<typename CostTypesT = CostTypes>
    void SetCostTypes(CostTypesT&& value) { m_costTypesHasBeenSet = true; m_costTypes = std::forward<CostTypesT>(value); }
    template<typename CostTypesT = CostTypes>
    BudgetPerformanceHistory& WithCostTypes(CostTypesT&& value) { SetCostTypes(std::forward<CostTypesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline TimeUnit GetTimeUnit() const { return m_timeUnit; }
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }
    inline void SetTimeUnit(TimeUnit value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }
    inline BudgetPerformanceHistory& WithTimeUnit(TimeUnit value) { SetTimeUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies a specific billing
     * view. The ARN is used to specify which particular billing view you want to
     * interact with or retrieve information from when making API calls related to
     * Amazon Web Services Billing and Cost Management features. The BillingViewArn can
     * be retrieved by calling the ListBillingViews API.</p>
     */
    inline const Aws::String& GetBillingViewArn() const { return m_billingViewArn; }
    inline bool BillingViewArnHasBeenSet() const { return m_billingViewArnHasBeenSet; }
    template<typename BillingViewArnT = Aws::String>
    void SetBillingViewArn(BillingViewArnT&& value) { m_billingViewArnHasBeenSet = true; m_billingViewArn = std::forward<BillingViewArnT>(value); }
    template<typename BillingViewArnT = Aws::String>
    BudgetPerformanceHistory& WithBillingViewArn(BillingViewArnT&& value) { SetBillingViewArn(std::forward<BillingViewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of amounts of cost or usage that you created budgets for, which are
     * compared to your actual costs or usage.</p>
     */
    inline const Aws::Vector<BudgetedAndActualAmounts>& GetBudgetedAndActualAmountsList() const { return m_budgetedAndActualAmountsList; }
    inline bool BudgetedAndActualAmountsListHasBeenSet() const { return m_budgetedAndActualAmountsListHasBeenSet; }
    template<typename BudgetedAndActualAmountsListT = Aws::Vector<BudgetedAndActualAmounts>>
    void SetBudgetedAndActualAmountsList(BudgetedAndActualAmountsListT&& value) { m_budgetedAndActualAmountsListHasBeenSet = true; m_budgetedAndActualAmountsList = std::forward<BudgetedAndActualAmountsListT>(value); }
    template<typename BudgetedAndActualAmountsListT = Aws::Vector<BudgetedAndActualAmounts>>
    BudgetPerformanceHistory& WithBudgetedAndActualAmountsList(BudgetedAndActualAmountsListT&& value) { SetBudgetedAndActualAmountsList(std::forward<BudgetedAndActualAmountsListT>(value)); return *this;}
    template<typename BudgetedAndActualAmountsListT = BudgetedAndActualAmounts>
    BudgetPerformanceHistory& AddBudgetedAndActualAmountsList(BudgetedAndActualAmountsListT&& value) { m_budgetedAndActualAmountsListHasBeenSet = true; m_budgetedAndActualAmountsList.emplace_back(std::forward<BudgetedAndActualAmountsListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    BudgetType m_budgetType{BudgetType::NOT_SET};
    bool m_budgetTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_costFilters;
    bool m_costFiltersHasBeenSet = false;

    CostTypes m_costTypes;
    bool m_costTypesHasBeenSet = false;

    TimeUnit m_timeUnit{TimeUnit::NOT_SET};
    bool m_timeUnitHasBeenSet = false;

    Aws::String m_billingViewArn;
    bool m_billingViewArnHasBeenSet = false;

    Aws::Vector<BudgetedAndActualAmounts> m_budgetedAndActualAmountsList;
    bool m_budgetedAndActualAmountsListHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
