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
  class GetBudgetRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetBudgetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBudget"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID of the farm connected to the budget.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline GetBudgetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetBudgetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetBudgetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }
    inline void SetBudgetId(const Aws::String& value) { m_budgetIdHasBeenSet = true; m_budgetId = value; }
    inline void SetBudgetId(Aws::String&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::move(value); }
    inline void SetBudgetId(const char* value) { m_budgetIdHasBeenSet = true; m_budgetId.assign(value); }
    inline GetBudgetRequest& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}
    inline GetBudgetRequest& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}
    inline GetBudgetRequest& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_budgetId;
    bool m_budgetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
