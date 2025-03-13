/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TrafficDistributionGroupUserSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListTrafficDistributionGroupUsersResult
  {
  public:
    AWS_CONNECT_API ListTrafficDistributionGroupUsersResult() = default;
    AWS_CONNECT_API ListTrafficDistributionGroupUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListTrafficDistributionGroupUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrafficDistributionGroupUsersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline const Aws::Vector<TrafficDistributionGroupUserSummary>& GetTrafficDistributionGroupUserSummaryList() const { return m_trafficDistributionGroupUserSummaryList; }
    template<typename TrafficDistributionGroupUserSummaryListT = Aws::Vector<TrafficDistributionGroupUserSummary>>
    void SetTrafficDistributionGroupUserSummaryList(TrafficDistributionGroupUserSummaryListT&& value) { m_trafficDistributionGroupUserSummaryListHasBeenSet = true; m_trafficDistributionGroupUserSummaryList = std::forward<TrafficDistributionGroupUserSummaryListT>(value); }
    template<typename TrafficDistributionGroupUserSummaryListT = Aws::Vector<TrafficDistributionGroupUserSummary>>
    ListTrafficDistributionGroupUsersResult& WithTrafficDistributionGroupUserSummaryList(TrafficDistributionGroupUserSummaryListT&& value) { SetTrafficDistributionGroupUserSummaryList(std::forward<TrafficDistributionGroupUserSummaryListT>(value)); return *this;}
    template<typename TrafficDistributionGroupUserSummaryListT = TrafficDistributionGroupUserSummary>
    ListTrafficDistributionGroupUsersResult& AddTrafficDistributionGroupUserSummaryList(TrafficDistributionGroupUserSummaryListT&& value) { m_trafficDistributionGroupUserSummaryListHasBeenSet = true; m_trafficDistributionGroupUserSummaryList.emplace_back(std::forward<TrafficDistributionGroupUserSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrafficDistributionGroupUsersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TrafficDistributionGroupUserSummary> m_trafficDistributionGroupUserSummaryList;
    bool m_trafficDistributionGroupUserSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
