﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Action.h>
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
  class AWS_BUDGETS_API DeleteBudgetActionResult
  {
  public:
    DeleteBudgetActionResult();
    DeleteBudgetActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteBudgetActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }

    
    inline DeleteBudgetActionResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline DeleteBudgetActionResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline DeleteBudgetActionResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetName.assign(value); }

    
    inline DeleteBudgetActionResult& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline DeleteBudgetActionResult& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline DeleteBudgetActionResult& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    
    inline const Action& GetAction() const{ return m_action; }

    
    inline void SetAction(const Action& value) { m_action = value; }

    
    inline void SetAction(Action&& value) { m_action = std::move(value); }

    
    inline DeleteBudgetActionResult& WithAction(const Action& value) { SetAction(value); return *this;}

    
    inline DeleteBudgetActionResult& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;

    Aws::String m_budgetName;

    Action m_action;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
