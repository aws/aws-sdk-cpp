﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Budget.h>
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
  /**
   * <p> Response of DescribeBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetResponse">AWS
   * API Reference</a></p>
   */
  class DescribeBudgetResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetResult();
    AWS_BUDGETS_API DescribeBudgetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the budget.</p>
     */
    inline const Budget& GetBudget() const{ return m_budget; }
    inline void SetBudget(const Budget& value) { m_budget = value; }
    inline void SetBudget(Budget&& value) { m_budget = std::move(value); }
    inline DescribeBudgetResult& WithBudget(const Budget& value) { SetBudget(value); return *this;}
    inline DescribeBudgetResult& WithBudget(Budget&& value) { SetBudget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBudgetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBudgetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBudgetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Budget m_budget;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
