/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/ExecutionType.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   */
  class ExecuteBudgetActionRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API ExecuteBudgetActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteBudgetAction"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline ExecuteBudgetActionRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline ExecuteBudgetActionRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline ExecuteBudgetActionRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline ExecuteBudgetActionRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline ExecuteBudgetActionRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline ExecuteBudgetActionRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline ExecuteBudgetActionRequest& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline ExecuteBudgetActionRequest& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline ExecuteBudgetActionRequest& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p> The type of execution. </p>
     */
    inline const ExecutionType& GetExecutionType() const{ return m_executionType; }

    /**
     * <p> The type of execution. </p>
     */
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }

    /**
     * <p> The type of execution. </p>
     */
    inline void SetExecutionType(const ExecutionType& value) { m_executionTypeHasBeenSet = true; m_executionType = value; }

    /**
     * <p> The type of execution. </p>
     */
    inline void SetExecutionType(ExecutionType&& value) { m_executionTypeHasBeenSet = true; m_executionType = std::move(value); }

    /**
     * <p> The type of execution. </p>
     */
    inline ExecuteBudgetActionRequest& WithExecutionType(const ExecutionType& value) { SetExecutionType(value); return *this;}

    /**
     * <p> The type of execution. </p>
     */
    inline ExecuteBudgetActionRequest& WithExecutionType(ExecutionType&& value) { SetExecutionType(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    ExecutionType m_executionType;
    bool m_executionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
