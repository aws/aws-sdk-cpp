/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of DescribeBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetRequest">AWS
   * API Reference</a></p>
   */
  class DescribeBudgetRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API DescribeBudgetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBudget"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want a
     * description of.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline DescribeBudgetRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline DescribeBudgetRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline DescribeBudgetRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the budget that you want a description of.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }
    inline DescribeBudgetRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}
    inline DescribeBudgetRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}
    inline DescribeBudgetRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
