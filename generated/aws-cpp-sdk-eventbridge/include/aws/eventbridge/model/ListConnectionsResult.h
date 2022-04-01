/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/Connection.h>
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
namespace EventBridge
{
namespace Model
{
  class AWS_EVENTBRIDGE_API ListConnectionsResult
  {
  public:
    ListConnectionsResult();
    ListConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of connections objects that include details about the
     * connections.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>An array of connections objects that include details about the
     * connections.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }

    /**
     * <p>An array of connections objects that include details about the
     * connections.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = std::move(value); }

    /**
     * <p>An array of connections objects that include details about the
     * connections.</p>
     */
    inline ListConnectionsResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>An array of connections objects that include details about the
     * connections.</p>
     */
    inline ListConnectionsResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}

    /**
     * <p>An array of connections objects that include details about the
     * connections.</p>
     */
    inline ListConnectionsResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>An array of connections objects that include details about the
     * connections.</p>
     */
    inline ListConnectionsResult& AddConnections(Connection&& value) { m_connections.push_back(std::move(value)); return *this; }


    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Connection> m_connections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
