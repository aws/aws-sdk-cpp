/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedServer.h>
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
  class ListServersResult
  {
  public:
    AWS_TRANSFER_API ListServersResult() = default;
    AWS_TRANSFER_API ListServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of servers that were listed.</p>
     */
    inline const Aws::Vector<ListedServer>& GetServers() const { return m_servers; }
    template<typename ServersT = Aws::Vector<ListedServer>>
    void SetServers(ServersT&& value) { m_serversHasBeenSet = true; m_servers = std::forward<ServersT>(value); }
    template<typename ServersT = Aws::Vector<ListedServer>>
    ListServersResult& WithServers(ServersT&& value) { SetServers(std::forward<ServersT>(value)); return *this;}
    template<typename ServersT = ListedServer>
    ListServersResult& AddServers(ServersT&& value) { m_serversHasBeenSet = true; m_servers.emplace_back(std::forward<ServersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListedServer> m_servers;
    bool m_serversHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
