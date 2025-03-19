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
    AWS_DEADLINE_API GetBudgetRequest() = default;

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
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    GetBudgetRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const { return m_budgetId; }
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }
    template<typename BudgetIdT = Aws::String>
    void SetBudgetId(BudgetIdT&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::forward<BudgetIdT>(value); }
    template<typename BudgetIdT = Aws::String>
    GetBudgetRequest& WithBudgetId(BudgetIdT&& value) { SetBudgetId(std::forward<BudgetIdT>(value)); return *this;}
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
