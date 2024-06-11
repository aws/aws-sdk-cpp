/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/PlayerSession.h>
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
  class CreatePlayerSessionsResult
  {
  public:
    AWS_GAMELIFT_API CreatePlayerSessionsResult();
    AWS_GAMELIFT_API CreatePlayerSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreatePlayerSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of player session objects created for the added players.</p>
     */
    inline const Aws::Vector<PlayerSession>& GetPlayerSessions() const{ return m_playerSessions; }
    inline void SetPlayerSessions(const Aws::Vector<PlayerSession>& value) { m_playerSessions = value; }
    inline void SetPlayerSessions(Aws::Vector<PlayerSession>&& value) { m_playerSessions = std::move(value); }
    inline CreatePlayerSessionsResult& WithPlayerSessions(const Aws::Vector<PlayerSession>& value) { SetPlayerSessions(value); return *this;}
    inline CreatePlayerSessionsResult& WithPlayerSessions(Aws::Vector<PlayerSession>&& value) { SetPlayerSessions(std::move(value)); return *this;}
    inline CreatePlayerSessionsResult& AddPlayerSessions(const PlayerSession& value) { m_playerSessions.push_back(value); return *this; }
    inline CreatePlayerSessionsResult& AddPlayerSessions(PlayerSession&& value) { m_playerSessions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePlayerSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePlayerSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePlayerSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PlayerSession> m_playerSessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
