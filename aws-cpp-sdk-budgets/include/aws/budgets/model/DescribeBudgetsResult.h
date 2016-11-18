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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Budget.h>

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
  /**
   * Response of DescribeBudgets
   */
  class AWS_BUDGETS_API DescribeBudgetsResult
  {
  public:
    DescribeBudgetsResult();
    DescribeBudgetsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBudgetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<Budget>& GetBudgets() const{ return m_budgets; }

    
    inline void SetBudgets(const Aws::Vector<Budget>& value) { m_budgets = value; }

    
    inline void SetBudgets(Aws::Vector<Budget>&& value) { m_budgets = value; }

    
    inline DescribeBudgetsResult& WithBudgets(const Aws::Vector<Budget>& value) { SetBudgets(value); return *this;}

    
    inline DescribeBudgetsResult& WithBudgets(Aws::Vector<Budget>&& value) { SetBudgets(value); return *this;}

    
    inline DescribeBudgetsResult& AddBudgets(const Budget& value) { m_budgets.push_back(value); return *this; }

    
    inline DescribeBudgetsResult& AddBudgets(Budget&& value) { m_budgets.push_back(value); return *this; }

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeBudgetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeBudgetsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    
    inline DescribeBudgetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Budget> m_budgets;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
