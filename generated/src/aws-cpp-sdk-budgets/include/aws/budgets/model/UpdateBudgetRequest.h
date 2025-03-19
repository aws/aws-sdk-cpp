/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Budget.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of UpdateBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudgetRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBudgetRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API UpdateBudgetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBudget"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UpdateBudgetRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget that you want to update your budget to.</p>
     */
    inline const Budget& GetNewBudget() const { return m_newBudget; }
    inline bool NewBudgetHasBeenSet() const { return m_newBudgetHasBeenSet; }
    template<typename NewBudgetT = Budget>
    void SetNewBudget(NewBudgetT&& value) { m_newBudgetHasBeenSet = true; m_newBudget = std::forward<NewBudgetT>(value); }
    template<typename NewBudgetT = Budget>
    UpdateBudgetRequest& WithNewBudget(NewBudgetT&& value) { SetNewBudget(std::forward<NewBudgetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Budget m_newBudget;
    bool m_newBudgetHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
