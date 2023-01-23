/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameSession.h>
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
  class CreateGameSessionResult
  {
  public:
    AWS_GAMELIFT_API CreateGameSessionResult();
    AWS_GAMELIFT_API CreateGameSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateGameSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object that describes the newly created game session record.</p>
     */
    inline const GameSession& GetGameSession() const{ return m_gameSession; }

    /**
     * <p>Object that describes the newly created game session record.</p>
     */
    inline void SetGameSession(const GameSession& value) { m_gameSession = value; }

    /**
     * <p>Object that describes the newly created game session record.</p>
     */
    inline void SetGameSession(GameSession&& value) { m_gameSession = std::move(value); }

    /**
     * <p>Object that describes the newly created game session record.</p>
     */
    inline CreateGameSessionResult& WithGameSession(const GameSession& value) { SetGameSession(value); return *this;}

    /**
     * <p>Object that describes the newly created game session record.</p>
     */
    inline CreateGameSessionResult& WithGameSession(GameSession&& value) { SetGameSession(std::move(value)); return *this;}

  private:

    GameSession m_gameSession;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
