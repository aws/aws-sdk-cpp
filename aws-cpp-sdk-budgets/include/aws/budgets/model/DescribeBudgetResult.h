﻿/*
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
   * Response of DescribeBudget<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API DescribeBudgetResult
  {
  public:
    DescribeBudgetResult();
    DescribeBudgetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBudgetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Budget& GetBudget() const{ return m_budget; }

    
    inline void SetBudget(const Budget& value) { m_budget = value; }

    
    inline void SetBudget(Budget&& value) { m_budget = value; }

    
    inline DescribeBudgetResult& WithBudget(const Budget& value) { SetBudget(value); return *this;}

    
    inline DescribeBudgetResult& WithBudget(Budget&& value) { SetBudget(value); return *this;}

  private:
    Budget m_budget;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
