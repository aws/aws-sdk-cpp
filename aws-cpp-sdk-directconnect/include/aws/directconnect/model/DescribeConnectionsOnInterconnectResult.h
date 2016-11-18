/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Connection.h>

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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>A structure containing a list of connections.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeConnectionsOnInterconnectResult
  {
  public:
    DescribeConnectionsOnInterconnectResult();
    DescribeConnectionsOnInterconnectResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConnectionsOnInterconnectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of connections.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>A list of connections.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }

    /**
     * <p>A list of connections.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = value; }

    /**
     * <p>A list of connections.</p>
     */
    inline DescribeConnectionsOnInterconnectResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of connections.</p>
     */
    inline DescribeConnectionsOnInterconnectResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of connections.</p>
     */
    inline DescribeConnectionsOnInterconnectResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>A list of connections.</p>
     */
    inline DescribeConnectionsOnInterconnectResult& AddConnections(Connection&& value) { m_connections.push_back(value); return *this; }

  private:
    Aws::Vector<Connection> m_connections;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
