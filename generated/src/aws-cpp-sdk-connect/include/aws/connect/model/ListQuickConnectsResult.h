/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QuickConnectSummary.h>
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
  class ListQuickConnectsResult
  {
  public:
    AWS_CONNECT_API ListQuickConnectsResult() = default;
    AWS_CONNECT_API ListQuickConnectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListQuickConnectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the quick connects.</p>
     */
    inline const Aws::Vector<QuickConnectSummary>& GetQuickConnectSummaryList() const { return m_quickConnectSummaryList; }
    template<typename QuickConnectSummaryListT = Aws::Vector<QuickConnectSummary>>
    void SetQuickConnectSummaryList(QuickConnectSummaryListT&& value) { m_quickConnectSummaryListHasBeenSet = true; m_quickConnectSummaryList = std::forward<QuickConnectSummaryListT>(value); }
    template<typename QuickConnectSummaryListT = Aws::Vector<QuickConnectSummary>>
    ListQuickConnectsResult& WithQuickConnectSummaryList(QuickConnectSummaryListT&& value) { SetQuickConnectSummaryList(std::forward<QuickConnectSummaryListT>(value)); return *this;}
    template<typename QuickConnectSummaryListT = QuickConnectSummary>
    ListQuickConnectsResult& AddQuickConnectSummaryList(QuickConnectSummaryListT&& value) { m_quickConnectSummaryListHasBeenSet = true; m_quickConnectSummaryList.emplace_back(std::forward<QuickConnectSummaryListT>(value)); return *this; }
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
    ListQuickConnectsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQuickConnectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QuickConnectSummary> m_quickConnectSummaryList;
    bool m_quickConnectSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
