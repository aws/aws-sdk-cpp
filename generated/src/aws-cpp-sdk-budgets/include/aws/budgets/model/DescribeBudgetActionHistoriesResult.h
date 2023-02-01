/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/ActionHistory.h>
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
  class DescribeBudgetActionHistoriesResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetActionHistoriesResult();
    AWS_BUDGETS_API DescribeBudgetActionHistoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetActionHistoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline const Aws::Vector<ActionHistory>& GetActionHistories() const{ return m_actionHistories; }

    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline void SetActionHistories(const Aws::Vector<ActionHistory>& value) { m_actionHistories = value; }

    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline void SetActionHistories(Aws::Vector<ActionHistory>&& value) { m_actionHistories = std::move(value); }

    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline DescribeBudgetActionHistoriesResult& WithActionHistories(const Aws::Vector<ActionHistory>& value) { SetActionHistories(value); return *this;}

    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline DescribeBudgetActionHistoriesResult& WithActionHistories(Aws::Vector<ActionHistory>&& value) { SetActionHistories(std::move(value)); return *this;}

    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline DescribeBudgetActionHistoriesResult& AddActionHistories(const ActionHistory& value) { m_actionHistories.push_back(value); return *this; }

    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline DescribeBudgetActionHistoriesResult& AddActionHistories(ActionHistory&& value) { m_actionHistories.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeBudgetActionHistoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeBudgetActionHistoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeBudgetActionHistoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ActionHistory> m_actionHistories;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
