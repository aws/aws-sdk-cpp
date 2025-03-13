/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TrafficDistributionGroupSummary.h>
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
  class ListTrafficDistributionGroupsResult
  {
  public:
    AWS_CONNECT_API ListTrafficDistributionGroupsResult() = default;
    AWS_CONNECT_API ListTrafficDistributionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListTrafficDistributionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrafficDistributionGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline const Aws::Vector<TrafficDistributionGroupSummary>& GetTrafficDistributionGroupSummaryList() const { return m_trafficDistributionGroupSummaryList; }
    template<typename TrafficDistributionGroupSummaryListT = Aws::Vector<TrafficDistributionGroupSummary>>
    void SetTrafficDistributionGroupSummaryList(TrafficDistributionGroupSummaryListT&& value) { m_trafficDistributionGroupSummaryListHasBeenSet = true; m_trafficDistributionGroupSummaryList = std::forward<TrafficDistributionGroupSummaryListT>(value); }
    template<typename TrafficDistributionGroupSummaryListT = Aws::Vector<TrafficDistributionGroupSummary>>
    ListTrafficDistributionGroupsResult& WithTrafficDistributionGroupSummaryList(TrafficDistributionGroupSummaryListT&& value) { SetTrafficDistributionGroupSummaryList(std::forward<TrafficDistributionGroupSummaryListT>(value)); return *this;}
    template<typename TrafficDistributionGroupSummaryListT = TrafficDistributionGroupSummary>
    ListTrafficDistributionGroupsResult& AddTrafficDistributionGroupSummaryList(TrafficDistributionGroupSummaryListT&& value) { m_trafficDistributionGroupSummaryListHasBeenSet = true; m_trafficDistributionGroupSummaryList.emplace_back(std::forward<TrafficDistributionGroupSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrafficDistributionGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TrafficDistributionGroupSummary> m_trafficDistributionGroupSummaryList;
    bool m_trafficDistributionGroupSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
