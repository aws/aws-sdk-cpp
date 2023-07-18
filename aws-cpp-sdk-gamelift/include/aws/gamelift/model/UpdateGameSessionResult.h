﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateGameSessionResult
  {
  public:
    UpdateGameSessionResult();
    UpdateGameSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateGameSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated game session properties.</p>
     */
    inline const GameSession& GetGameSession() const{ return m_gameSession; }

    /**
     * <p>The updated game session properties.</p>
     */
    inline void SetGameSession(const GameSession& value) { m_gameSession = value; }

    /**
     * <p>The updated game session properties.</p>
     */
    inline void SetGameSession(GameSession&& value) { m_gameSession = std::move(value); }

    /**
     * <p>The updated game session properties.</p>
     */
    inline UpdateGameSessionResult& WithGameSession(const GameSession& value) { SetGameSession(value); return *this;}

    /**
     * <p>The updated game session properties.</p>
     */
    inline UpdateGameSessionResult& WithGameSession(GameSession&& value) { SetGameSession(std::move(value)); return *this;}

  private:

    GameSession m_gameSession;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
