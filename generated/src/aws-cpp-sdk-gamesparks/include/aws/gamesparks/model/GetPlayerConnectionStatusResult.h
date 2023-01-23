/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamesparks/model/Connection.h>
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
namespace GameSparks
{
namespace Model
{
  class GetPlayerConnectionStatusResult
  {
  public:
    AWS_GAMESPARKS_API GetPlayerConnectionStatusResult();
    AWS_GAMESPARKS_API GetPlayerConnectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetPlayerConnectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of connection ids, one for each connection in use by the player.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>The list of connection ids, one for each connection in use by the player.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }

    /**
     * <p>The list of connection ids, one for each connection in use by the player.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = std::move(value); }

    /**
     * <p>The list of connection ids, one for each connection in use by the player.</p>
     */
    inline GetPlayerConnectionStatusResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>The list of connection ids, one for each connection in use by the player.</p>
     */
    inline GetPlayerConnectionStatusResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}

    /**
     * <p>The list of connection ids, one for each connection in use by the player.</p>
     */
    inline GetPlayerConnectionStatusResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>The list of connection ids, one for each connection in use by the player.</p>
     */
    inline GetPlayerConnectionStatusResult& AddConnections(Connection&& value) { m_connections.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Connection> m_connections;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
