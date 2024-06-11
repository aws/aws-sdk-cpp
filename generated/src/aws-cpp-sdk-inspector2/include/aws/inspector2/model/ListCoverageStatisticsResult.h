﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Counts.h>
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
namespace Inspector2
{
namespace Model
{
  class ListCoverageStatisticsResult
  {
  public:
    AWS_INSPECTOR2_API ListCoverageStatisticsResult();
    AWS_INSPECTOR2_API ListCoverageStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCoverageStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array with the number for each group.</p>
     */
    inline const Aws::Vector<Counts>& GetCountsByGroup() const{ return m_countsByGroup; }
    inline void SetCountsByGroup(const Aws::Vector<Counts>& value) { m_countsByGroup = value; }
    inline void SetCountsByGroup(Aws::Vector<Counts>&& value) { m_countsByGroup = std::move(value); }
    inline ListCoverageStatisticsResult& WithCountsByGroup(const Aws::Vector<Counts>& value) { SetCountsByGroup(value); return *this;}
    inline ListCoverageStatisticsResult& WithCountsByGroup(Aws::Vector<Counts>&& value) { SetCountsByGroup(std::move(value)); return *this;}
    inline ListCoverageStatisticsResult& AddCountsByGroup(const Counts& value) { m_countsByGroup.push_back(value); return *this; }
    inline ListCoverageStatisticsResult& AddCountsByGroup(Counts&& value) { m_countsByGroup.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCoverageStatisticsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCoverageStatisticsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCoverageStatisticsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number for all groups.</p>
     */
    inline long long GetTotalCounts() const{ return m_totalCounts; }
    inline void SetTotalCounts(long long value) { m_totalCounts = value; }
    inline ListCoverageStatisticsResult& WithTotalCounts(long long value) { SetTotalCounts(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCoverageStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCoverageStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCoverageStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Counts> m_countsByGroup;

    Aws::String m_nextToken;

    long long m_totalCounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
