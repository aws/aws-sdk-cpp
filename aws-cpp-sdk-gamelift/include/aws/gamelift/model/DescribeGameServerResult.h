/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameServer.h>
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
namespace GameLift
{
namespace Model
{
  class DescribeGameServerResult
  {
  public:
    AWS_GAMELIFT_API DescribeGameServerResult();
    AWS_GAMELIFT_API DescribeGameServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeGameServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object that describes the requested game server.</p>
     */
    inline const GameServer& GetGameServer() const{ return m_gameServer; }

    /**
     * <p>Object that describes the requested game server.</p>
     */
    inline void SetGameServer(const GameServer& value) { m_gameServer = value; }

    /**
     * <p>Object that describes the requested game server.</p>
     */
    inline void SetGameServer(GameServer&& value) { m_gameServer = std::move(value); }

    /**
     * <p>Object that describes the requested game server.</p>
     */
    inline DescribeGameServerResult& WithGameServer(const GameServer& value) { SetGameServer(value); return *this;}

    /**
     * <p>Object that describes the requested game server.</p>
     */
    inline DescribeGameServerResult& WithGameServer(GameServer&& value) { SetGameServer(std::move(value)); return *this;}

  private:

    GameServer m_gameServer;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
