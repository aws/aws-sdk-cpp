/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/GameDetails.h>
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
namespace GameSparks
{
namespace Model
{
  class GetGameResult
  {
  public:
    AWS_GAMESPARKS_API GetGameResult();
    AWS_GAMESPARKS_API GetGameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetGameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetGameResult& WithGame(const GameDetails& value) { SetGame(value); return *this;}

    /**
     * <p>The details of the game.</p>
     */
    inline GetGameResult& WithGame(GameDetails&& value) { SetGame(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GameDetails m_game;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
