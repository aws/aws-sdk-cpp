/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Budget.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{
  /**
   * <p> Response of DescribeBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetResponse">AWS
   * API Reference</a></p>
   */
  class DescribeBudgetResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetResult() = default;
    AWS_BUDGETS_API DescribeBudgetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the budget.</p>
     */
    inline const Budget& GetBudget() const { return m_budget; }
    template<typename BudgetT = Budget>
    void SetBudget(BudgetT&& value) { m_budgetHasBeenSet = true; m_budget = std::forward<BudgetT>(value); }
    template<typename BudgetT = Budget>
    DescribeBudgetResult& WithBudget(BudgetT&& value) { SetBudget(std::forward<BudgetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBudgetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Budget m_budget;
    bool m_budgetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
