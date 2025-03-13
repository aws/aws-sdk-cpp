/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Action.h>
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
  class UpdateBudgetActionResult
  {
  public:
    AWS_BUDGETS_API UpdateBudgetActionResult() = default;
    AWS_BUDGETS_API UpdateBudgetActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API UpdateBudgetActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UpdateBudgetActionResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBudgetName() const { return m_budgetName; }
    template<typename BudgetNameT = Aws::String>
    void SetBudgetName(BudgetNameT&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::forward<BudgetNameT>(value); }
    template<typename BudgetNameT = Aws::String>
    UpdateBudgetActionResult& WithBudgetName(BudgetNameT&& value) { SetBudgetName(std::forward<BudgetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The previous action resource information. </p>
     */
    inline const Action& GetOldAction() const { return m_oldAction; }
    template<typename OldActionT = Action>
    void SetOldAction(OldActionT&& value) { m_oldActionHasBeenSet = true; m_oldAction = std::forward<OldActionT>(value); }
    template<typename OldActionT = Action>
    UpdateBudgetActionResult& WithOldAction(OldActionT&& value) { SetOldAction(std::forward<OldActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated action resource information. </p>
     */
    inline const Action& GetNewAction() const { return m_newAction; }
    template<typename NewActionT = Action>
    void SetNewAction(NewActionT&& value) { m_newActionHasBeenSet = true; m_newAction = std::forward<NewActionT>(value); }
    template<typename NewActionT = Action>
    UpdateBudgetActionResult& WithNewAction(NewActionT&& value) { SetNewAction(std::forward<NewActionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBudgetActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    Action m_oldAction;
    bool m_oldActionHasBeenSet = false;

    Action m_newAction;
    bool m_newActionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
