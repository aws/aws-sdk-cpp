/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_TRANSFER_API ListServersResult
  {
  public:
    ListServersResult();
    ListServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline ListServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline ListServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListServers</code>
     * operation, a <code>NextToken</code> parameter is returned in the output. In a
     * following command, you can pass in the <code>NextToken</code> parameter to
     * continue listing additional servers.</p>
     */
    inline ListServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of servers that were listed.</p>
     */
    inline const Aws::Vector<ListedServer>& GetServers() const{ return m_servers; }

    /**
     * <p>An array of servers that were listed.</p>
     */
    inline void SetServers(const Aws::Vector<ListedServer>& value) { m_servers = value; }

    /**
     * <p>An array of servers that were listed.</p>
     */
    inline void SetServers(Aws::Vector<ListedServer>&& value) { m_servers = std::move(value); }

    /**
     * <p>An array of servers that were listed.</p>
     */
    inline ListServersResult& WithServers(const Aws::Vector<ListedServer>& value) { SetServers(value); return *this;}

    /**
     * <p>An array of servers that were listed.</p>
     */
    inline ListServersResult& WithServers(Aws::Vector<ListedServer>&& value) { SetServers(std::move(value)); return *this;}

    /**
     * <p>An array of servers that were listed.</p>
     */
    inline ListServersResult& AddServers(const ListedServer& value) { m_servers.push_back(value); return *this; }

    /**
     * <p>An array of servers that were listed.</p>
     */
    inline ListServersResult& AddServers(ListedServer&& value) { m_servers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListedServer> m_servers;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
