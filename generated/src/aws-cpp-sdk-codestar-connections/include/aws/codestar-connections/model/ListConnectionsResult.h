/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/Connection.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class ListConnectionsResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListConnectionsResult();
    AWS_CODESTARCONNECTIONS_API ListConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API ListConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of connections and the details for each connection, such as status,
     * owner, and provider type.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = std::move(value); }
    inline ListConnectionsResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}
    inline ListConnectionsResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}
    inline ListConnectionsResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }
    inline ListConnectionsResult& AddConnections(Connection&& value) { m_connections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used in the next <code>ListConnections</code> call. To
     * view all items in the list, continue to call this operation with each subsequent
     * token until no more <code>nextToken</code> values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConnectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConnectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConnectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Connection> m_connections;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
