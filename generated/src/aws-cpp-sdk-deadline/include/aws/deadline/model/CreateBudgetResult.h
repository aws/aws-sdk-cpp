/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateBudgetResult
  {
  public:
    AWS_DEADLINE_API CreateBudgetResult();
    AWS_DEADLINE_API CreateBudgetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateBudgetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }

    /**
     * <p>The budget ID.</p>
     */
    inline void SetBudgetId(const Aws::String& value) { m_budgetId = value; }

    /**
     * <p>The budget ID.</p>
     */
    inline void SetBudgetId(Aws::String&& value) { m_budgetId = std::move(value); }

    /**
     * <p>The budget ID.</p>
     */
    inline void SetBudgetId(const char* value) { m_budgetId.assign(value); }

    /**
     * <p>The budget ID.</p>
     */
    inline CreateBudgetResult& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}

    /**
     * <p>The budget ID.</p>
     */
    inline CreateBudgetResult& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}

    /**
     * <p>The budget ID.</p>
     */
    inline CreateBudgetResult& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateBudgetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateBudgetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateBudgetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_budgetId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
