/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/AppBundleSummary.h>
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
  class ListAppBundlesResult
  {
  public:
    AWS_APPFABRIC_API ListAppBundlesResult() = default;
    AWS_APPFABRIC_API ListAppBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API ListAppBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of app bundle summaries.</p>
     */
    inline const Aws::Vector<AppBundleSummary>& GetAppBundleSummaryList() const { return m_appBundleSummaryList; }
    template<typename AppBundleSummaryListT = Aws::Vector<AppBundleSummary>>
    void SetAppBundleSummaryList(AppBundleSummaryListT&& value) { m_appBundleSummaryListHasBeenSet = true; m_appBundleSummaryList = std::forward<AppBundleSummaryListT>(value); }
    template<typename AppBundleSummaryListT = Aws::Vector<AppBundleSummary>>
    ListAppBundlesResult& WithAppBundleSummaryList(AppBundleSummaryListT&& value) { SetAppBundleSummaryList(std::forward<AppBundleSummaryListT>(value)); return *this;}
    template<typename AppBundleSummaryListT = AppBundleSummary>
    ListAppBundlesResult& AddAppBundleSummaryList(AppBundleSummaryListT&& value) { m_appBundleSummaryListHasBeenSet = true; m_appBundleSummaryList.emplace_back(std::forward<AppBundleSummaryListT>(value)); return *this; }
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
    ListAppBundlesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppBundlesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppBundleSummary> m_appBundleSummaryList;
    bool m_appBundleSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
