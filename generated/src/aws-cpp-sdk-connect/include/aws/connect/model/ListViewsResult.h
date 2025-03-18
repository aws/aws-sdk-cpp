/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ViewSummary.h>
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
  class ListViewsResult
  {
  public:
    AWS_CONNECT_API ListViewsResult() = default;
    AWS_CONNECT_API ListViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of view summaries.</p>
     */
    inline const Aws::Vector<ViewSummary>& GetViewsSummaryList() const { return m_viewsSummaryList; }
    template<typename ViewsSummaryListT = Aws::Vector<ViewSummary>>
    void SetViewsSummaryList(ViewsSummaryListT&& value) { m_viewsSummaryListHasBeenSet = true; m_viewsSummaryList = std::forward<ViewsSummaryListT>(value); }
    template<typename ViewsSummaryListT = Aws::Vector<ViewSummary>>
    ListViewsResult& WithViewsSummaryList(ViewsSummaryListT&& value) { SetViewsSummaryList(std::forward<ViewsSummaryListT>(value)); return *this;}
    template<typename ViewsSummaryListT = ViewSummary>
    ListViewsResult& AddViewsSummaryList(ViewsSummaryListT&& value) { m_viewsSummaryListHasBeenSet = true; m_viewsSummaryList.emplace_back(std::forward<ViewsSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListViewsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListViewsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ViewSummary> m_viewsSummaryList;
    bool m_viewsSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
