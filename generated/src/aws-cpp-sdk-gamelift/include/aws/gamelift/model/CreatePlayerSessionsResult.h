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
    AWS_GAMELIFT_API CreatePlayerSessionsResult() = default;
    AWS_GAMELIFT_API CreatePlayerSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreatePlayerSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of player session objects created for the added players.</p>
     */
    inline const Aws::Vector<PlayerSession>& GetPlayerSessions() const { return m_playerSessions; }
    template<typename PlayerSessionsT = Aws::Vector<PlayerSession>>
    void SetPlayerSessions(PlayerSessionsT&& value) { m_playerSessionsHasBeenSet = true; m_playerSessions = std::forward<PlayerSessionsT>(value); }
    template<typename PlayerSessionsT = Aws::Vector<PlayerSession>>
    CreatePlayerSessionsResult& WithPlayerSessions(PlayerSessionsT&& value) { SetPlayerSessions(std::forward<PlayerSessionsT>(value)); return *this;}
    template<typename PlayerSessionsT = PlayerSession>
    CreatePlayerSessionsResult& AddPlayerSessions(PlayerSessionsT&& value) { m_playerSessionsHasBeenSet = true; m_playerSessions.emplace_back(std::forward<PlayerSessionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePlayerSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PlayerSession> m_playerSessions;
    bool m_playerSessionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
