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
  class UpdateGameResult
  {
  public:
    AWS_GAMESPARKS_API UpdateGameResult();
    AWS_GAMESPARKS_API UpdateGameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API UpdateGameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the game.</p>
     */
    inline const GameDetails& GetGame() const{ return m_game; }

    /**
     * <p>The details of the game.</p>
     */
    inline void SetGame(const GameDetails& value) { m_game = value; }

    /**
     * <p>The details of the game.</p>
     */
    inline void SetGame(GameDetails&& value) { m_game = std::move(value); }

    /**
     * <p>The details of the game.</p>
     */
    inline UpdateGameResult& WithGame(const GameDetails& value) { SetGame(value); return *this;}

    /**
     * <p>The details of the game.</p>
     */
    inline UpdateGameResult& WithGame(GameDetails&& value) { SetGame(std::move(value)); return *this;}

  private:

    GameDetails m_game;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
