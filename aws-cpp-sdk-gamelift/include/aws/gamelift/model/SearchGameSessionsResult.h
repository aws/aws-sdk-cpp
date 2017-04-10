/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API SearchGameSessionsResult
  {
  public:
    SearchGameSessionsResult();
    SearchGameSessionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchGameSessionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline const Aws::Vector<GameSession>& GetGameSessions() const{ return m_gameSessions; }

    /**
     * <p>Collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline void SetGameSessions(const Aws::Vector<GameSession>& value) { m_gameSessions = value; }

    /**
     * <p>Collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline void SetGameSessions(Aws::Vector<GameSession>&& value) { m_gameSessions = std::move(value); }

    /**
     * <p>Collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& WithGameSessions(const Aws::Vector<GameSession>& value) { SetGameSessions(value); return *this;}

    /**
     * <p>Collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& WithGameSessions(Aws::Vector<GameSession>&& value) { SetGameSessions(std::move(value)); return *this;}

    /**
     * <p>Collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& AddGameSessions(const GameSession& value) { m_gameSessions.push_back(value); return *this; }

    /**
     * <p>Collection of objects containing game session properties for each session
     * matching the request.</p>
     */
    inline SearchGameSessionsResult& AddGameSessions(GameSession&& value) { m_gameSessions.push_back(std::move(value)); return *this; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline SearchGameSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline SearchGameSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
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
