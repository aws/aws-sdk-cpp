/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateBudgetActionResult
  {
  public:
    AWS_BUDGETS_API CreateBudgetActionResult();
    AWS_BUDGETS_API CreateBudgetActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API CreateBudgetActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }

    
    inline CreateBudgetActionResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline CreateBudgetActionResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline CreateBudgetActionResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetName.assign(value); }

    
    inline CreateBudgetActionResult& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline CreateBudgetActionResult& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline CreateBudgetActionResult& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionId = value; }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionId = std::move(value); }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline void SetActionId(const char* value) { m_actionId.assign(value); }

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline CreateBudgetActionResult& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline CreateBudgetActionResult& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p> A system-generated universally unique identifier (UUID) for the action. </p>
     */
    inline CreateBudgetActionResult& WithActionId(const char* value) { SetActionId(value); return *this;}

  private:

    Aws::String m_accountId;

    Aws::String m_budgetName;

    Aws::String m_actionId;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
