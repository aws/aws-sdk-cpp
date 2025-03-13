/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/LineageNodeSummary.h>
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
namespace DataZone
{
namespace Model
{
  class ListLineageNodeHistoryResult
  {
  public:
    AWS_DATAZONE_API ListLineageNodeHistoryResult() = default;
    AWS_DATAZONE_API ListLineageNodeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListLineageNodeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the number of history items is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of items, the response includes a pagination token named
     * NextToken. You can specify this NextToken value in a subsequent call to
     * ListLineageNodeHistory to list the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLineageNodeHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes returned by the ListLineageNodeHistory action.</p>
     */
    inline const Aws::Vector<LineageNodeSummary>& GetNodes() const { return m_nodes; }
    template<typename NodesT = Aws::Vector<LineageNodeSummary>>
    void SetNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes = std::forward<NodesT>(value); }
    template<typename NodesT = Aws::Vector<LineageNodeSummary>>
    ListLineageNodeHistoryResult& WithNodes(NodesT&& value) { SetNodes(std::forward<NodesT>(value)); return *this;}
    template<typename NodesT = LineageNodeSummary>
    ListLineageNodeHistoryResult& AddNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes.emplace_back(std::forward<NodesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLineageNodeHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LineageNodeSummary> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
