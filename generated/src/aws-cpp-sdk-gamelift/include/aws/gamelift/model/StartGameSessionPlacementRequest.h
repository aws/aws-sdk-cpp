/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class StartGameSessionPlacementRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API StartGameSessionPlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartGameSessionPlacement"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier to assign to the new game session placement. This value
     * is developer-defined. The value must be unique across all Regions and cannot be
     * reused.</p>
     */
    inline const Aws::String& GetPlacementId() const{ return m_placementId; }
    inline bool PlacementIdHasBeenSet() const { return m_placementIdHasBeenSet; }
    inline void SetPlacementId(const Aws::String& value) { m_placementIdHasBeenSet = true; m_placementId = value; }
    inline void SetPlacementId(Aws::String&& value) { m_placementIdHasBeenSet = true; m_placementId = std::move(value); }
    inline void SetPlacementId(const char* value) { m_placementIdHasBeenSet = true; m_placementId.assign(value); }
    inline StartGameSessionPlacementRequest& WithPlacementId(const Aws::String& value) { SetPlacementId(value); return *this;}
    inline StartGameSessionPlacementRequest& WithPlacementId(Aws::String&& value) { SetPlacementId(std::move(value)); return *this;}
    inline StartGameSessionPlacementRequest& WithPlacementId(const char* value) { SetPlacementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the queue to use to place the new game session. You can use either
     * the queue name or ARN value. </p>
     */
    inline const Aws::String& GetGameSessionQueueName() const{ return m_gameSessionQueueName; }
    inline bool GameSessionQueueNameHasBeenSet() const { return m_gameSessionQueueNameHasBeenSet; }
    inline void SetGameSessionQueueName(const Aws::String& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = value; }
    inline void SetGameSessionQueueName(Aws::String&& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = std::move(value); }
    inline void SetGameSessionQueueName(const char* value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName.assign(value); }
    inline StartGameSessionPlacementRequest& WithGameSessionQueueName(const Aws::String& value) { SetGameSessionQueueName(value); return *this;}
    inline StartGameSessionPlacementRequest& WithGameSessionQueueName(Aws::String&& value) { SetGameSessionQueueName(std::move(value)); return *this;}
    inline StartGameSessionPlacementRequest& WithGameSessionQueueName(const char* value) { SetGameSessionQueueName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs that can store custom data in a game session. For
     * example: <code>{"Key": "difficulty", "Value": "novice"}</code>.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::move(value); }
    inline StartGameSessionPlacementRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}
    inline StartGameSessionPlacementRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}
    inline StartGameSessionPlacementRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }
    inline StartGameSessionPlacementRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline StartGameSessionPlacementRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetGameSessionName() const{ return m_gameSessionName; }
    inline bool GameSessionNameHasBeenSet() const { return m_gameSessionNameHasBeenSet; }
    inline void SetGameSessionName(const Aws::String& value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName = value; }
    inline void SetGameSessionName(Aws::String&& value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName = std::move(value); }
    inline void SetGameSessionName(const char* value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName.assign(value); }
    inline StartGameSessionPlacementRequest& WithGameSessionName(const Aws::String& value) { SetGameSessionName(value); return *this;}
    inline StartGameSessionPlacementRequest& WithGameSessionName(Aws::String&& value) { SetGameSessionName(std::move(value)); return *this;}
    inline StartGameSessionPlacementRequest& WithGameSessionName(const char* value) { SetGameSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of values, expressed in milliseconds, that indicates the amount of
     * latency that a player experiences when connected to @aws; Regions. This
     * information is used to try to place the new game session where it can offer the
     * best possible gameplay experience for the players. </p>
     */
    inline const Aws::Vector<PlayerLatency>& GetPlayerLatencies() const{ return m_playerLatencies; }
    inline bool PlayerLatenciesHasBeenSet() const { return m_playerLatenciesHasBeenSet; }
    inline void SetPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = value; }
    inline void SetPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = std::move(value); }
    inline StartGameSessionPlacementRequest& WithPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { SetPlayerLatencies(value); return *this;}
    inline StartGameSessionPlacementRequest& WithPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { SetPlayerLatencies(std::move(value)); return *this;}
    inline StartGameSessionPlacementRequest& AddPlayerLatencies(const PlayerLatency& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(value); return *this; }
    inline StartGameSessionPlacementRequest& AddPlayerLatencies(PlayerLatency&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline const Aws::Vector<DesiredPlayerSession>& GetDesiredPlayerSessions() const{ return m_desiredPlayerSessions; }
    inline bool DesiredPlayerSessionsHasBeenSet() const { return m_desiredPlayerSessionsHasBeenSet; }
    inline void SetDesiredPlayerSessions(const Aws::Vector<DesiredPlayerSession>& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions = value; }
    inline void SetDesiredPlayerSessions(Aws::Vector<DesiredPlayerSession>&& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions = std::move(value); }
    inline StartGameSessionPlacementRequest& WithDesiredPlayerSessions(const Aws::Vector<DesiredPlayerSession>& value) { SetDesiredPlayerSessions(value); return *this;}
    inline StartGameSessionPlacementRequest& WithDesiredPlayerSessions(Aws::Vector<DesiredPlayerSession>&& value) { SetDesiredPlayerSessions(std::move(value)); return *this;}
    inline StartGameSessionPlacementRequest& AddDesiredPlayerSessions(const DesiredPlayerSession& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions.push_back(value); return *this; }
    inline StartGameSessionPlacementRequest& AddDesiredPlayerSessions(DesiredPlayerSession&& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session. For more information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a game session</a>.</p>
     */
    inline const Aws::String& GetGameSessionData() const{ return m_gameSessionData; }
    inline bool GameSessionDataHasBeenSet() const { return m_gameSessionDataHasBeenSet; }
    inline void SetGameSessionData(const Aws::String& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = value; }
    inline void SetGameSessionData(Aws::String&& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = std::move(value); }
    inline void SetGameSessionData(const char* value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData.assign(value); }
    inline StartGameSessionPlacementRequest& WithGameSessionData(const Aws::String& value) { SetGameSessionData(value); return *this;}
    inline StartGameSessionPlacementRequest& WithGameSessionData(Aws::String&& value) { SetGameSessionData(std::move(value)); return *this;}
    inline StartGameSessionPlacementRequest& WithGameSessionData(const char* value) { SetGameSessionData(value); return *this;}
    ///@}
  private:

    Aws::String m_placementId;
    bool m_placementIdHasBeenSet = false;

    Aws::String m_gameSessionQueueName;
    bool m_gameSessionQueueNameHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    Aws::String m_gameSessionName;
    bool m_gameSessionNameHasBeenSet = false;

    Aws::Vector<PlayerLatency> m_playerLatencies;
    bool m_playerLatenciesHasBeenSet = false;

    Aws::Vector<DesiredPlayerSession> m_desiredPlayerSessions;
    bool m_desiredPlayerSessionsHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
