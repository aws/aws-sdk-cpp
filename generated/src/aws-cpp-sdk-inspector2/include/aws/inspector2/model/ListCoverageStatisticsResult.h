/**
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
    AWS_INSPECTOR2_API ListCoverageStatisticsResult() = default;
    AWS_INSPECTOR2_API ListCoverageStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCoverageStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array with the number for each group.</p>
     */
    inline const Aws::Vector<Counts>& GetCountsByGroup() const { return m_countsByGroup; }
    template<typename CountsByGroupT = Aws::Vector<Counts>>
    void SetCountsByGroup(CountsByGroupT&& value) { m_countsByGroupHasBeenSet = true; m_countsByGroup = std::forward<CountsByGroupT>(value); }
    template<typename CountsByGroupT = Aws::Vector<Counts>>
    ListCoverageStatisticsResult& WithCountsByGroup(CountsByGroupT&& value) { SetCountsByGroup(std::forward<CountsByGroupT>(value)); return *this;}
    template<typename CountsByGroupT = Counts>
    ListCoverageStatisticsResult& AddCountsByGroup(CountsByGroupT&& value) { m_countsByGroupHasBeenSet = true; m_countsByGroup.emplace_back(std::forward<CountsByGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number for all groups.</p>
     */
    inline long long GetTotalCounts() const { return m_totalCounts; }
    inline void SetTotalCounts(long long value) { m_totalCountsHasBeenSet = true; m_totalCounts = value; }
    inline ListCoverageStatisticsResult& WithTotalCounts(long long value) { SetTotalCounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCoverageStatisticsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCoverageStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Counts> m_countsByGroup;
    bool m_countsByGroupHasBeenSet = false;

    long long m_totalCounts{0};
    bool m_totalCountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
