/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BUDGETS_API UpdateBudgetRequest : public BudgetsRequest
  {
  public:
    UpdateBudgetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBudget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline UpdateBudgetRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline UpdateBudgetRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget that you want
     * to update.</p>
     */
    inline UpdateBudgetRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The budget that you want to update your budget to.</p>
     */
    inline const Budget& GetNewBudget() const{ return m_newBudget; }

    /**
     * <p>The budget that you want to update your budget to.</p>
     */
    inline bool NewBudgetHasBeenSet() const { return m_newBudgetHasBeenSet; }

    /**
     * <p>The budget that you want to update your budget to.</p>
     */
    inline void SetNewBudget(const Budget& value) { m_newBudgetHasBeenSet = true; m_newBudget = value; }

    /**
     * <p>The budget that you want to update your budget to.</p>
     */
    inline void SetNewBudget(Budget&& value) { m_newBudgetHasBeenSet = true; m_newBudget = std::move(value); }

    /**
     * <p>The budget that you want to update your budget to.</p>
     */
    inline UpdateBudgetRequest& WithNewBudget(const Budget& value) { SetNewBudget(value); return *this;}

    /**
     * <p>The budget that you want to update your budget to.</p>
     */
    inline UpdateBudgetRequest& WithNewBudget(Budget&& value) { SetNewBudget(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Budget m_newBudget;
    bool m_newBudgetHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
