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
    AWS_TRANSFER_API ListWebAppsResult();
    AWS_TRANSFER_API ListWebAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListWebAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provide this value for the <code>NextToken</code> parameter in a subsequent
     * command to continue listing additional web apps.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWebAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWebAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWebAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns, for each listed web app, a structure that contains details for the
     * web app.</p>
     */
    inline const Aws::Vector<ListedWebApp>& GetWebApps() const{ return m_webApps; }
    inline void SetWebApps(const Aws::Vector<ListedWebApp>& value) { m_webApps = value; }
    inline void SetWebApps(Aws::Vector<ListedWebApp>&& value) { m_webApps = std::move(value); }
    inline ListWebAppsResult& WithWebApps(const Aws::Vector<ListedWebApp>& value) { SetWebApps(value); return *this;}
    inline ListWebAppsResult& WithWebApps(Aws::Vector<ListedWebApp>&& value) { SetWebApps(std::move(value)); return *this;}
    inline ListWebAppsResult& AddWebApps(const ListedWebApp& value) { m_webApps.push_back(value); return *this; }
    inline ListWebAppsResult& AddWebApps(ListedWebApp&& value) { m_webApps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWebAppsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWebAppsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWebAppsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListedWebApp> m_webApps;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
