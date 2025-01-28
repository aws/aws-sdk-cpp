/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/LimitSummary.h>
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
  class ListLimitsResult
  {
  public:
    AWS_DEADLINE_API ListLimitsResult();
    AWS_DEADLINE_API ListLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API ListLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of limits that the farm contains.</p>
     */
    inline const Aws::Vector<LimitSummary>& GetLimits() const{ return m_limits; }
    inline void SetLimits(const Aws::Vector<LimitSummary>& value) { m_limits = value; }
    inline void SetLimits(Aws::Vector<LimitSummary>&& value) { m_limits = std::move(value); }
    inline ListLimitsResult& WithLimits(const Aws::Vector<LimitSummary>& value) { SetLimits(value); return *this;}
    inline ListLimitsResult& WithLimits(Aws::Vector<LimitSummary>&& value) { SetLimits(std::move(value)); return *this;}
    inline ListLimitsResult& AddLimits(const LimitSummary& value) { m_limits.push_back(value); return *this; }
    inline ListLimitsResult& AddLimits(LimitSummary&& value) { m_limits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If Deadline Cloud returns <code>nextToken</code>, then there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain, then
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an HTTP 400 <code>ValidationException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLimitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLimitsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLimitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LimitSummary> m_limits;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
