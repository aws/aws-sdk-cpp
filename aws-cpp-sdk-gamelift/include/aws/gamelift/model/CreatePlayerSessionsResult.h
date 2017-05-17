/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/PlayerSession.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreatePlayerSessionsResult
  {
  public:
    CreatePlayerSessionsResult();
    CreatePlayerSessionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePlayerSessionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Collection of player session objects created for the added players.</p>
     */
    inline const Aws::Vector<PlayerSession>& GetPlayerSessions() const{ return m_playerSessions; }

    /**
     * <p>Collection of player session objects created for the added players.</p>
     */
    inline void SetPlayerSessions(const Aws::Vector<PlayerSession>& value) { m_playerSessions = value; }

    /**
     * <p>Collection of player session objects created for the added players.</p>
     */
    inline void SetPlayerSessions(Aws::Vector<PlayerSession>&& value) { m_playerSessions = std::move(value); }

    /**
     * <p>Collection of player session objects created for the added players.</p>
     */
    inline CreatePlayerSessionsResult& WithPlayerSessions(const Aws::Vector<PlayerSession>& value) { SetPlayerSessions(value); return *this;}

    /**
     * <p>Collection of player session objects created for the added players.</p>
     */
    inline CreatePlayerSessionsResult& WithPlayerSessions(Aws::Vector<PlayerSession>&& value) { SetPlayerSessions(std::move(value)); return *this;}

    /**
     * <p>Collection of player session objects created for the added players.</p>
     */
    inline CreatePlayerSessionsResult& AddPlayerSessions(const PlayerSession& value) { m_playerSessions.push_back(value); return *this; }

    /**
     * <p>Collection of player session objects created for the added players.</p>
     */
    inline CreatePlayerSessionsResult& AddPlayerSessions(PlayerSession&& value) { m_playerSessions.push_back(std::move(value)); return *this; }

  private:
    Aws::Vector<PlayerSession> m_playerSessions;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
