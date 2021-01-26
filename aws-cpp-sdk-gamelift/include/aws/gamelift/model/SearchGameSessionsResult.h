/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API SearchGameSessionsResult
  {
  public:
    SearchGameSessionsResult();
    SearchGameSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchGameSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline const Aws::Vector<GameSession>& GetGameSessions() const{ return m_gameSessions; }

    /**
     * <p>A collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline void SetGameSessions(const Aws::Vector<GameSession>& value) { m_gameSessions = value; }

    /**
     * <p>A collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline void SetGameSessions(Aws::Vector<GameSession>&& value) { m_gameSessions = std::move(value); }

    /**
     * <p>A collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& WithGameSessions(const Aws::Vector<GameSession>& value) { SetGameSessions(value); return *this;}

    /**
     * <p>A collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& WithGameSessions(Aws::Vector<GameSession>&& value) { SetGameSessions(std::move(value)); return *this;}

    /**
     * <p>A collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& AddGameSessions(const GameSession& value) { m_gameSessions.push_back(value); return *this; }

    /**
     * <p>A collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& AddGameSessions(GameSession&& value) { m_gameSessions.push_back(std::move(value)); return *this; }


    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline SearchGameSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline SearchGameSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline SearchGameSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GameSession> m_gameSessions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
