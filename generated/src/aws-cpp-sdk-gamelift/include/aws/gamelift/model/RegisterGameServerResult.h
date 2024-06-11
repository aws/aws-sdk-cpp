/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameServer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class RegisterGameServerResult
  {
  public:
    AWS_GAMELIFT_API RegisterGameServerResult();
    AWS_GAMELIFT_API RegisterGameServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API RegisterGameServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Object that describes the newly registered game server.</p>
     */
    inline const GameServer& GetGameServer() const{ return m_gameServer; }
    inline void SetGameServer(const GameServer& value) { m_gameServer = value; }
    inline void SetGameServer(GameServer&& value) { m_gameServer = std::move(value); }
    inline RegisterGameServerResult& WithGameServer(const GameServer& value) { SetGameServer(value); return *this;}
    inline RegisterGameServerResult& WithGameServer(GameServer&& value) { SetGameServer(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterGameServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterGameServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterGameServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GameServer m_gameServer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
