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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/Connector.h>
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
  class AWS_SMS_API GetConnectorsResult
  {
  public:
    GetConnectorsResult();
    GetConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the registered connectors.</p>
     */
    inline const Aws::Vector<Connector>& GetConnectorList() const{ return m_connectorList; }

    /**
     * <p>Information about the registered connectors.</p>
     */
    inline void SetConnectorList(const Aws::Vector<Connector>& value) { m_connectorList = value; }

    /**
     * <p>Information about the registered connectors.</p>
     */
    inline void SetConnectorList(Aws::Vector<Connector>&& value) { m_connectorList = std::move(value); }

    /**
     * <p>Information about the registered connectors.</p>
     */
    inline GetConnectorsResult& WithConnectorList(const Aws::Vector<Connector>& value) { SetConnectorList(value); return *this;}

    /**
     * <p>Information about the registered connectors.</p>
     */
    inline GetConnectorsResult& WithConnectorList(Aws::Vector<Connector>&& value) { SetConnectorList(std::move(value)); return *this;}

    /**
     * <p>Information about the registered connectors.</p>
     */
    inline GetConnectorsResult& AddConnectorList(const Connector& value) { m_connectorList.push_back(value); return *this; }

    /**
     * <p>Information about the registered connectors.</p>
     */
    inline GetConnectorsResult& AddConnectorList(Connector&& value) { m_connectorList.push_back(std::move(value)); return *this; }


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
    inline GetConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Connector> m_connectorList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
