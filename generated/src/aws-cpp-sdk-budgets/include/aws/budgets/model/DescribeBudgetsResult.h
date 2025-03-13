/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Budget.h>
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
   * <p> Response of DescribeBudgets </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeBudgetsResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetsResult() = default;
    AWS_BUDGETS_API DescribeBudgetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of budgets.</p>
     */
    inline const Aws::Vector<Budget>& GetBudgets() const { return m_budgets; }
    template<typename BudgetsT = Aws::Vector<Budget>>
    void SetBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets = std::forward<BudgetsT>(value); }
    template<typename BudgetsT = Aws::Vector<Budget>>
    DescribeBudgetsResult& WithBudgets(BudgetsT&& value) { SetBudgets(std::forward<BudgetsT>(value)); return *this;}
    template<typename BudgetsT = Budget>
    DescribeBudgetsResult& AddBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets.emplace_back(std::forward<BudgetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBudgetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBudgetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Budget> m_budgets;
    bool m_budgetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
