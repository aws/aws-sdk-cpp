/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameSession.h>
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
  class TerminateGameSessionResult
  {
  public:
    AWS_GAMELIFT_API TerminateGameSessionResult() = default;
    AWS_GAMELIFT_API TerminateGameSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API TerminateGameSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const GameSession& GetGameSession() const { return m_gameSession; }
    template<typename GameSessionT = GameSession>
    void SetGameSession(GameSessionT&& value) { m_gameSessionHasBeenSet = true; m_gameSession = std::forward<GameSessionT>(value); }
    template<typename GameSessionT = GameSession>
    TerminateGameSessionResult& WithGameSession(GameSessionT&& value) { SetGameSession(std::forward<GameSessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TerminateGameSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GameSession m_gameSession;
    bool m_gameSessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
