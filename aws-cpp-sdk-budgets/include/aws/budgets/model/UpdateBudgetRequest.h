/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * Request of UpdateBudget
   */
  class AWS_BUDGETS_API UpdateBudgetRequest : public BudgetsRequest
  {
  public:
    UpdateBudgetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline UpdateBudgetRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline UpdateBudgetRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    
    inline UpdateBudgetRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    
    inline const Budget& GetNewBudget() const{ return m_newBudget; }

    
    inline void SetNewBudget(const Budget& value) { m_newBudgetHasBeenSet = true; m_newBudget = value; }

    
    inline void SetNewBudget(Budget&& value) { m_newBudgetHasBeenSet = true; m_newBudget = value; }

    
    inline UpdateBudgetRequest& WithNewBudget(const Budget& value) { SetNewBudget(value); return *this;}

    
    inline UpdateBudgetRequest& WithNewBudget(Budget&& value) { SetNewBudget(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Budget m_newBudget;
    bool m_newBudgetHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
