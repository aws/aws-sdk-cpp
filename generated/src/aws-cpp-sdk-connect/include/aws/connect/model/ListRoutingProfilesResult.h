/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RoutingProfileSummary.h>
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
  class ListRoutingProfilesResult
  {
  public:
    AWS_CONNECT_API ListRoutingProfilesResult() = default;
    AWS_CONNECT_API ListRoutingProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRoutingProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the routing profiles.</p>
     */
    inline const Aws::Vector<RoutingProfileSummary>& GetRoutingProfileSummaryList() const { return m_routingProfileSummaryList; }
    template<typename RoutingProfileSummaryListT = Aws::Vector<RoutingProfileSummary>>
    void SetRoutingProfileSummaryList(RoutingProfileSummaryListT&& value) { m_routingProfileSummaryListHasBeenSet = true; m_routingProfileSummaryList = std::forward<RoutingProfileSummaryListT>(value); }
    template<typename RoutingProfileSummaryListT = Aws::Vector<RoutingProfileSummary>>
    ListRoutingProfilesResult& WithRoutingProfileSummaryList(RoutingProfileSummaryListT&& value) { SetRoutingProfileSummaryList(std::forward<RoutingProfileSummaryListT>(value)); return *this;}
    template<typename RoutingProfileSummaryListT = RoutingProfileSummary>
    ListRoutingProfilesResult& AddRoutingProfileSummaryList(RoutingProfileSummaryListT&& value) { m_routingProfileSummaryListHasBeenSet = true; m_routingProfileSummaryList.emplace_back(std::forward<RoutingProfileSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoutingProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoutingProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RoutingProfileSummary> m_routingProfileSummaryList;
    bool m_routingProfileSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
