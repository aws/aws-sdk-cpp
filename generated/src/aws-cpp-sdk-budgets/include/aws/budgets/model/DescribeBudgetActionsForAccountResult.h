﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeBudgetActionsForAccountResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetActionsForAccountResult();
    AWS_BUDGETS_API DescribeBudgetActionsForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetActionsForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of the budget action resources information. </p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actions = std::move(value); }
    inline DescribeBudgetActionsForAccountResult& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline DescribeBudgetActionsForAccountResult& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline DescribeBudgetActionsForAccountResult& AddActions(const Action& value) { m_actions.push_back(value); return *this; }
    inline DescribeBudgetActionsForAccountResult& AddActions(Action&& value) { m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeBudgetActionsForAccountResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeBudgetActionsForAccountResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeBudgetActionsForAccountResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBudgetActionsForAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBudgetActionsForAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBudgetActionsForAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Action> m_actions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
