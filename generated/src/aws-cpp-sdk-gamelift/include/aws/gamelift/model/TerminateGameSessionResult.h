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
    AWS_GAMELIFT_API TerminateGameSessionResult();
    AWS_GAMELIFT_API TerminateGameSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API TerminateGameSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const GameSession& GetGameSession() const{ return m_gameSession; }
    inline void SetGameSession(const GameSession& value) { m_gameSession = value; }
    inline void SetGameSession(GameSession&& value) { m_gameSession = std::move(value); }
    inline TerminateGameSessionResult& WithGameSession(const GameSession& value) { SetGameSession(value); return *this;}
    inline TerminateGameSessionResult& WithGameSession(GameSession&& value) { SetGameSession(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TerminateGameSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TerminateGameSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TerminateGameSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GameSession m_gameSession;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
