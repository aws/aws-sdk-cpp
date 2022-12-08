/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/GameSummary.h>
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
  class ListGamesResult
  {
  public:
    AWS_GAMESPARKS_API ListGamesResult();
    AWS_GAMESPARKS_API ListGamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ListGamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of games.</p>
     */
    inline const Aws::Vector<GameSummary>& GetGames() const{ return m_games; }

    /**
     * <p>The list of games.</p>
     */
    inline void SetGames(const Aws::Vector<GameSummary>& value) { m_games = value; }

    /**
     * <p>The list of games.</p>
     */
    inline void SetGames(Aws::Vector<GameSummary>&& value) { m_games = std::move(value); }

    /**
     * <p>The list of games.</p>
     */
    inline ListGamesResult& WithGames(const Aws::Vector<GameSummary>& value) { SetGames(value); return *this;}

    /**
     * <p>The list of games.</p>
     */
    inline ListGamesResult& WithGames(Aws::Vector<GameSummary>&& value) { SetGames(std::move(value)); return *this;}

    /**
     * <p>The list of games.</p>
     */
    inline ListGamesResult& AddGames(const GameSummary& value) { m_games.push_back(value); return *this; }

    /**
     * <p>The list of games.</p>
     */
    inline ListGamesResult& AddGames(GameSummary&& value) { m_games.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListGamesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListGamesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListGamesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GameSummary> m_games;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
