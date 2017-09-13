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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Connection.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetConnectionsResult
  {
  public:
    GetConnectionsResult();
    GetConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline const Aws::Vector<Connection>& GetConnectionList() const{ return m_connectionList; }

    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline void SetConnectionList(const Aws::Vector<Connection>& value) { m_connectionList = value; }

    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline void SetConnectionList(Aws::Vector<Connection>&& value) { m_connectionList = std::move(value); }

    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline GetConnectionsResult& WithConnectionList(const Aws::Vector<Connection>& value) { SetConnectionList(value); return *this;}

    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline GetConnectionsResult& WithConnectionList(Aws::Vector<Connection>&& value) { SetConnectionList(std::move(value)); return *this;}

    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline GetConnectionsResult& AddConnectionList(const Connection& value) { m_connectionList.push_back(value); return *this; }

    /**
     * <p>A list of requested connection definitions.</p>
     */
    inline GetConnectionsResult& AddConnectionList(Connection&& value) { m_connectionList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline GetConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline GetConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the list of connections returned does not include
     * the last of the filtered connections.</p>
     */
    inline GetConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Connection> m_connectionList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
