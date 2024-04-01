/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class DeleteBudgetRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API DeleteBudgetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBudget"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }

    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }

    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline void SetBudgetId(const Aws::String& value) { m_budgetIdHasBeenSet = true; m_budgetId = value; }

    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline void SetBudgetId(Aws::String&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::move(value); }

    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline void SetBudgetId(const char* value) { m_budgetIdHasBeenSet = true; m_budgetId.assign(value); }

    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline DeleteBudgetRequest& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}

    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline DeleteBudgetRequest& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}

    /**
     * <p>The budget ID of the budget to delete.</p>
     */
    inline DeleteBudgetRequest& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}


    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline DeleteBudgetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline DeleteBudgetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the farm to remove from the budget.</p>
     */
    inline DeleteBudgetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}

  private:

    Aws::String m_budgetId;
    bool m_budgetIdHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
