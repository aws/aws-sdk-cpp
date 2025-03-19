/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/Graph.h>
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
namespace Detective
{
namespace Model
{
  class ListGraphsResult
  {
  public:
    AWS_DETECTIVE_API ListGraphsResult() = default;
    AWS_DETECTIVE_API ListGraphsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListGraphsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of behavior graphs that the account is an administrator account
     * for.</p>
     */
    inline const Aws::Vector<Graph>& GetGraphList() const { return m_graphList; }
    template<typename GraphListT = Aws::Vector<Graph>>
    void SetGraphList(GraphListT&& value) { m_graphListHasBeenSet = true; m_graphList = std::forward<GraphListT>(value); }
    template<typename GraphListT = Aws::Vector<Graph>>
    ListGraphsResult& WithGraphList(GraphListT&& value) { SetGraphList(std::forward<GraphListT>(value)); return *this;}
    template<typename GraphListT = Graph>
    ListGraphsResult& AddGraphList(GraphListT&& value) { m_graphListHasBeenSet = true; m_graphList.emplace_back(std::forward<GraphListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more behavior graphs remaining in the results, then this is the
     * pagination token to use to request the next page of behavior graphs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGraphsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGraphsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Graph> m_graphList;
    bool m_graphListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
