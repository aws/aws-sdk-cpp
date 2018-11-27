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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/ServerCatalogStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/Server.h>
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
namespace SMS
{
namespace Model
{
  class AWS_SMS_API GetServersResult
  {
  public:
    GetServersResult();
    GetServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time when the server was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The time when the server was last modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }

    /**
     * <p>The time when the server was last modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }

    /**
     * <p>The time when the server was last modified.</p>
     */
    inline GetServersResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The time when the server was last modified.</p>
     */
    inline GetServersResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>The status of the server catalog.</p>
     */
    inline const ServerCatalogStatus& GetServerCatalogStatus() const{ return m_serverCatalogStatus; }

    /**
     * <p>The status of the server catalog.</p>
     */
    inline void SetServerCatalogStatus(const ServerCatalogStatus& value) { m_serverCatalogStatus = value; }

    /**
     * <p>The status of the server catalog.</p>
     */
    inline void SetServerCatalogStatus(ServerCatalogStatus&& value) { m_serverCatalogStatus = std::move(value); }

    /**
     * <p>The status of the server catalog.</p>
     */
    inline GetServersResult& WithServerCatalogStatus(const ServerCatalogStatus& value) { SetServerCatalogStatus(value); return *this;}

    /**
     * <p>The status of the server catalog.</p>
     */
    inline GetServersResult& WithServerCatalogStatus(ServerCatalogStatus&& value) { SetServerCatalogStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the servers.</p>
     */
    inline const Aws::Vector<Server>& GetServerList() const{ return m_serverList; }

    /**
     * <p>Information about the servers.</p>
     */
    inline void SetServerList(const Aws::Vector<Server>& value) { m_serverList = value; }

    /**
     * <p>Information about the servers.</p>
     */
    inline void SetServerList(Aws::Vector<Server>&& value) { m_serverList = std::move(value); }

    /**
     * <p>Information about the servers.</p>
     */
    inline GetServersResult& WithServerList(const Aws::Vector<Server>& value) { SetServerList(value); return *this;}

    /**
     * <p>Information about the servers.</p>
     */
    inline GetServersResult& WithServerList(Aws::Vector<Server>&& value) { SetServerList(std::move(value)); return *this;}

    /**
     * <p>Information about the servers.</p>
     */
    inline GetServersResult& AddServerList(const Server& value) { m_serverList.push_back(value); return *this; }

    /**
     * <p>Information about the servers.</p>
     */
    inline GetServersResult& AddServerList(Server&& value) { m_serverList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastModifiedOn;

    ServerCatalogStatus m_serverCatalogStatus;

    Aws::Vector<Server> m_serverList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
