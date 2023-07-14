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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateGameSessionResult
  {
  public:
    CreateGameSessionResult();
    CreateGameSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGameSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
