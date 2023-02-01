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
    AWS_BUDGETS_API DescribeBudgetNotificationsForAccountResult();
    AWS_BUDGETS_API DescribeBudgetNotificationsForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetNotificationsForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline const Aws::Vector<BudgetNotificationsForAccount>& GetBudgetNotificationsForAccount() const{ return m_budgetNotificationsForAccount; }

    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline void SetBudgetNotificationsForAccount(const Aws::Vector<BudgetNotificationsForAccount>& value) { m_budgetNotificationsForAccount = value; }

    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline void SetBudgetNotificationsForAccount(Aws::Vector<BudgetNotificationsForAccount>&& value) { m_budgetNotificationsForAccount = std::move(value); }

    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline DescribeBudgetNotificationsForAccountResult& WithBudgetNotificationsForAccount(const Aws::Vector<BudgetNotificationsForAccount>& value) { SetBudgetNotificationsForAccount(value); return *this;}

    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline DescribeBudgetNotificationsForAccountResult& WithBudgetNotificationsForAccount(Aws::Vector<BudgetNotificationsForAccount>&& value) { SetBudgetNotificationsForAccount(std::move(value)); return *this;}

    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline DescribeBudgetNotificationsForAccountResult& AddBudgetNotificationsForAccount(const BudgetNotificationsForAccount& value) { m_budgetNotificationsForAccount.push_back(value); return *this; }

    /**
     * <p> A list of budget names and associated notifications for an account. </p>
     */
    inline DescribeBudgetNotificationsForAccountResult& AddBudgetNotificationsForAccount(BudgetNotificationsForAccount&& value) { m_budgetNotificationsForAccount.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeBudgetNotificationsForAccountResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeBudgetNotificationsForAccountResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeBudgetNotificationsForAccountResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BudgetNotificationsForAccount> m_budgetNotificationsForAccount;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
