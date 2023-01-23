/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/GameDetails.h>
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
  class CreateGameResult
  {
  public:
    AWS_GAMESPARKS_API CreateGameResult();
    AWS_GAMESPARKS_API CreateGameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API CreateGameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the game that was created.</p>
     */
    inline const GameDetails& GetGame() const{ return m_game; }

    /**
     * <p>Details about the game that was created.</p>
     */
    inline void SetGame(const GameDetails& value) { m_game = value; }

    /**
     * <p>Details about the game that was created.</p>
     */
    inline void SetGame(GameDetails&& value) { m_game = std::move(value); }

    /**
     * <p>Details about the game that was created.</p>
     */
    inline CreateGameResult& WithGame(const GameDetails& value) { SetGame(value); return *this;}

    /**
     * <p>Details about the game that was created.</p>
     */
    inline CreateGameResult& WithGame(GameDetails&& value) { SetGame(std::move(value)); return *this;}

  private:

    GameDetails m_game;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
