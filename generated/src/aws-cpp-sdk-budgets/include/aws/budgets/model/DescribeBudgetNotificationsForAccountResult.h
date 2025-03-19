/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/BudgetNotificationsForAccount.h>
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
  class DescribeBudgetNotificationsForAccountResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetNotificationsForAccountResult() = default;
    AWS_BUDGETS_API DescribeBudgetNotificationsForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetNotificationsForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline const Aws::Vector<BudgetNotificationsForAccount>& GetBudgetNotificationsForAccount() const { return m_budgetNotificationsForAccount; }
    template<typename BudgetNotificationsForAccountT = Aws::Vector<BudgetNotificationsForAccount>>
    void SetBudgetNotificationsForAccount(BudgetNotificationsForAccountT&& value) { m_budgetNotificationsForAccountHasBeenSet = true; m_budgetNotificationsForAccount = std::forward<BudgetNotificationsForAccountT>(value); }
    template<typename BudgetNotificationsForAccountT = Aws::Vector<BudgetNotificationsForAccount>>
    DescribeBudgetNotificationsForAccountResult& WithBudgetNotificationsForAccount(BudgetNotificationsForAccountT&& value) { SetBudgetNotificationsForAccount(std::forward<BudgetNotificationsForAccountT>(value)); return *this;}
    template<typename BudgetNotificationsForAccountT = BudgetNotificationsForAccount>
    DescribeBudgetNotificationsForAccountResult& AddBudgetNotificationsForAccount(BudgetNotificationsForAccountT&& value) { m_budgetNotificationsForAccountHasBeenSet = true; m_budgetNotificationsForAccount.emplace_back(std::forward<BudgetNotificationsForAccountT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBudgetNotificationsForAccountResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBudgetNotificationsForAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BudgetNotificationsForAccount> m_budgetNotificationsForAccount;
    bool m_budgetNotificationsForAccountHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
