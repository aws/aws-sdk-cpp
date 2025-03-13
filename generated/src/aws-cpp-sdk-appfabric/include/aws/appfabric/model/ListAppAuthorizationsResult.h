/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/AppAuthorizationSummary.h>
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
namespace AppFabric
{
namespace Model
{
  class ListAppAuthorizationsResult
  {
  public:
    AWS_APPFABRIC_API ListAppAuthorizationsResult() = default;
    AWS_APPFABRIC_API ListAppAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API ListAppAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline const Aws::Vector<AppAuthorizationSummary>& GetAppAuthorizationSummaryList() const { return m_appAuthorizationSummaryList; }
    template<typename AppAuthorizationSummaryListT = Aws::Vector<AppAuthorizationSummary>>
    void SetAppAuthorizationSummaryList(AppAuthorizationSummaryListT&& value) { m_appAuthorizationSummaryListHasBeenSet = true; m_appAuthorizationSummaryList = std::forward<AppAuthorizationSummaryListT>(value); }
    template<typename AppAuthorizationSummaryListT = Aws::Vector<AppAuthorizationSummary>>
    ListAppAuthorizationsResult& WithAppAuthorizationSummaryList(AppAuthorizationSummaryListT&& value) { SetAppAuthorizationSummaryList(std::forward<AppAuthorizationSummaryListT>(value)); return *this;}
    template<typename AppAuthorizationSummaryListT = AppAuthorizationSummary>
    ListAppAuthorizationsResult& AddAppAuthorizationSummaryList(AppAuthorizationSummaryListT&& value) { m_appAuthorizationSummaryListHasBeenSet = true; m_appAuthorizationSummaryList.emplace_back(std::forward<AppAuthorizationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppAuthorizationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppAuthorizationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppAuthorizationSummary> m_appAuthorizationSummaryList;
    bool m_appAuthorizationSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
