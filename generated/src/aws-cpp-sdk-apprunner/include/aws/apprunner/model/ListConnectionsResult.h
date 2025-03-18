/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ConnectionSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListConnectionsResult
  {
  public:
    AWS_APPRUNNER_API ListConnectionsResult() = default;
    AWS_APPRUNNER_API ListConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline const Aws::Vector<ConnectionSummary>& GetConnectionSummaryList() const { return m_connectionSummaryList; }
    template<typename ConnectionSummaryListT = Aws::Vector<ConnectionSummary>>
    void SetConnectionSummaryList(ConnectionSummaryListT&& value) { m_connectionSummaryListHasBeenSet = true; m_connectionSummaryList = std::forward<ConnectionSummaryListT>(value); }
    template<typename ConnectionSummaryListT = Aws::Vector<ConnectionSummary>>
    ListConnectionsResult& WithConnectionSummaryList(ConnectionSummaryListT&& value) { SetConnectionSummaryList(std::forward<ConnectionSummaryListT>(value)); return *this;}
    template<typename ConnectionSummaryListT = ConnectionSummary>
    ListConnectionsResult& AddConnectionSummaryList(ConnectionSummaryListT&& value) { m_connectionSummaryListHasBeenSet = true; m_connectionSummaryList.emplace_back(std::forward<ConnectionSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionSummary> m_connectionSummaryList;
    bool m_connectionSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
