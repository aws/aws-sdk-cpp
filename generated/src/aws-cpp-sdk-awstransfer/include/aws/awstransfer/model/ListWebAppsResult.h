/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedWebApp.h>
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
namespace Transfer
{
namespace Model
{
  class ListWebAppsResult
  {
  public:
    AWS_TRANSFER_API ListWebAppsResult() = default;
    AWS_TRANSFER_API ListWebAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListWebAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provide this value for the <code>NextToken</code> parameter in a subsequent
     * command to continue listing additional web apps.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWebAppsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns, for each listed web app, a structure that contains details for the
     * web app.</p>
     */
    inline const Aws::Vector<ListedWebApp>& GetWebApps() const { return m_webApps; }
    template<typename WebAppsT = Aws::Vector<ListedWebApp>>
    void SetWebApps(WebAppsT&& value) { m_webAppsHasBeenSet = true; m_webApps = std::forward<WebAppsT>(value); }
    template<typename WebAppsT = Aws::Vector<ListedWebApp>>
    ListWebAppsResult& WithWebApps(WebAppsT&& value) { SetWebApps(std::forward<WebAppsT>(value)); return *this;}
    template<typename WebAppsT = ListedWebApp>
    ListWebAppsResult& AddWebApps(WebAppsT&& value) { m_webAppsHasBeenSet = true; m_webApps.emplace_back(std::forward<WebAppsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWebAppsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListedWebApp> m_webApps;
    bool m_webAppsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
