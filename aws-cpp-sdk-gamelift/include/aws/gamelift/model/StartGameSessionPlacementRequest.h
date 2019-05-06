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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameProperty.h>
#include <aws/gamelift/model/PlayerLatency.h>
#include <aws/gamelift/model/DesiredPlayerSession.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacementInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API StartGameSessionPlacementRequest : public GameLiftRequest
  {
  public:
    StartGameSessionPlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartGameSessionPlacement"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline const Aws::String& GetPlacementId() const{ return m_placementId; }

    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline bool PlacementIdHasBeenSet() const { return m_placementIdHasBeenSet; }

    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline void SetPlacementId(const Aws::String& value) { m_placementIdHasBeenSet = true; m_placementId = value; }

    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline void SetPlacementId(Aws::String&& value) { m_placementIdHasBeenSet = true; m_placementId = std::move(value); }

    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline void SetPlacementId(const char* value) { m_placementIdHasBeenSet = true; m_placementId.assign(value); }

    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline StartGameSessionPlacementRequest& WithPlacementId(const Aws::String& value) { SetPlacementId(value); return *this;}

    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline StartGameSessionPlacementRequest& WithPlacementId(Aws::String&& value) { SetPlacementId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier to assign to the new game session placement. This value is
     * developer-defined. The value must be unique across all regions and cannot be
     * reused unless you are resubmitting a canceled or timed-out placement
     * request.</p>
     */
    inline StartGameSessionPlacementRequest& WithPlacementId(const char* value) { SetPlacementId(value); return *this;}


    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline const Aws::String& GetGameSessionQueueName() const{ return m_gameSessionQueueName; }

    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline bool GameSessionQueueNameHasBeenSet() const { return m_gameSessionQueueNameHasBeenSet; }

    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline void SetGameSessionQueueName(const Aws::String& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = value; }

    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline void SetGameSessionQueueName(Aws::String&& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = std::move(value); }

    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline void SetGameSessionQueueName(const char* value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName.assign(value); }

    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionQueueName(const Aws::String& value) { SetGameSessionQueueName(value); return *this;}

    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionQueueName(Aws::String&& value) { SetGameSessionQueueName(std::move(value)); return *this;}

    /**
     * <p>Name of the queue to use to place the new game session.</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionQueueName(const char* value) { SetGameSessionQueueName(value); return *this;}


    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }

    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::move(value); }

    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline StartGameSessionPlacementRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline StartGameSessionPlacementRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}

    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline StartGameSessionPlacementRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline StartGameSessionPlacementRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session.</p>
     */
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session.</p>
     */
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session.</p>
     */
    inline StartGameSessionPlacementRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}


    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetGameSessionName() const{ return m_gameSessionName; }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline bool GameSessionNameHasBeenSet() const { return m_gameSessionNameHasBeenSet; }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetGameSessionName(const Aws::String& value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName = value; }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetGameSessionName(Aws::String&& value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetGameSessionName(const char* value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName.assign(value); }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionName(const Aws::String& value) { SetGameSessionName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionName(Aws::String&& value) { SetGameSessionName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionName(const char* value) { SetGameSessionName(value); return *this;}


    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline const Aws::Vector<PlayerLatency>& GetPlayerLatencies() const{ return m_playerLatencies; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline bool PlayerLatenciesHasBeenSet() const { return m_playerLatenciesHasBeenSet; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline void SetPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = value; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline void SetPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = std::move(value); }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline StartGameSessionPlacementRequest& WithPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { SetPlayerLatencies(value); return *this;}

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline StartGameSessionPlacementRequest& WithPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { SetPlayerLatencies(std::move(value)); return *this;}

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline StartGameSessionPlacementRequest& AddPlayerLatencies(const PlayerLatency& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(value); return *this; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. This information is
     * used to try to place the new game session where it can offer the best possible
     * gameplay experience for the players. </p>
     */
    inline StartGameSessionPlacementRequest& AddPlayerLatencies(PlayerLatency&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(std::move(value)); return *this; }


    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline const Aws::Vector<DesiredPlayerSession>& GetDesiredPlayerSessions() const{ return m_desiredPlayerSessions; }

    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline bool DesiredPlayerSessionsHasBeenSet() const { return m_desiredPlayerSessionsHasBeenSet; }

    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline void SetDesiredPlayerSessions(const Aws::Vector<DesiredPlayerSession>& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions = value; }

    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline void SetDesiredPlayerSessions(Aws::Vector<DesiredPlayerSession>&& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions = std::move(value); }

    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline StartGameSessionPlacementRequest& WithDesiredPlayerSessions(const Aws::Vector<DesiredPlayerSession>& value) { SetDesiredPlayerSessions(value); return *this;}

    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline StartGameSessionPlacementRequest& WithDesiredPlayerSessions(Aws::Vector<DesiredPlayerSession>&& value) { SetDesiredPlayerSessions(std::move(value)); return *this;}

    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline StartGameSessionPlacementRequest& AddDesiredPlayerSessions(const DesiredPlayerSession& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions.push_back(value); return *this; }

    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline StartGameSessionPlacementRequest& AddDesiredPlayerSessions(DesiredPlayerSession&& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions.push_back(std::move(value)); return *this; }


    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline const Aws::String& GetGameSessionData() const{ return m_gameSessionData; }

    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline bool GameSessionDataHasBeenSet() const { return m_gameSessionDataHasBeenSet; }

    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameSessionData(const Aws::String& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = value; }

    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameSessionData(Aws::String&& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = std::move(value); }

    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameSessionData(const char* value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData.assign(value); }

    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionData(const Aws::String& value) { SetGameSessionData(value); return *this;}

    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionData(Aws::String&& value) { SetGameSessionData(std::move(value)); return *this;}

    /**
     * <p>Set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline StartGameSessionPlacementRequest& WithGameSessionData(const char* value) { SetGameSessionData(value); return *this;}

  private:

    Aws::String m_placementId;
    bool m_placementIdHasBeenSet;

    Aws::String m_gameSessionQueueName;
    bool m_gameSessionQueueNameHasBeenSet;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet;

    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet;

    Aws::String m_gameSessionName;
    bool m_gameSessionNameHasBeenSet;

    Aws::Vector<PlayerLatency> m_playerLatencies;
    bool m_playerLatenciesHasBeenSet;

    Aws::Vector<DesiredPlayerSession> m_desiredPlayerSessions;
    bool m_desiredPlayerSessionsHasBeenSet;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
