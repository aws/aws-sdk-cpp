/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/PriorityConfigurationOverride.h>
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
    AWS_GAMELIFT_API StartGameSessionPlacementRequest() = default;

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
    inline const Aws::String& GetPlacementId() const { return m_placementId; }
    inline bool PlacementIdHasBeenSet() const { return m_placementIdHasBeenSet; }
    template<typename PlacementIdT = Aws::String>
    void SetPlacementId(PlacementIdT&& value) { m_placementIdHasBeenSet = true; m_placementId = std::forward<PlacementIdT>(value); }
    template<typename PlacementIdT = Aws::String>
    StartGameSessionPlacementRequest& WithPlacementId(PlacementIdT&& value) { SetPlacementId(std::forward<PlacementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the queue to use to place the new game session. You can use either
     * the queue name or ARN value. </p>
     */
    inline const Aws::String& GetGameSessionQueueName() const { return m_gameSessionQueueName; }
    inline bool GameSessionQueueNameHasBeenSet() const { return m_gameSessionQueueNameHasBeenSet; }
    template<typename GameSessionQueueNameT = Aws::String>
    void SetGameSessionQueueName(GameSessionQueueNameT&& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = std::forward<GameSessionQueueNameT>(value); }
    template<typename GameSessionQueueNameT = Aws::String>
    StartGameSessionPlacementRequest& WithGameSessionQueueName(GameSessionQueueNameT&& value) { SetGameSessionQueueName(std::forward<GameSessionQueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs that can store custom data in a game session. For
     * example: <code>{"Key": "difficulty", "Value": "novice"}</code>.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const { return m_gameProperties; }
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }
    template<typename GamePropertiesT = Aws::Vector<GameProperty>>
    void SetGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::forward<GamePropertiesT>(value); }
    template<typename GamePropertiesT = Aws::Vector<GameProperty>>
    StartGameSessionPlacementRequest& WithGameProperties(GamePropertiesT&& value) { SetGameProperties(std::forward<GamePropertiesT>(value)); return *this;}
    template<typename GamePropertiesT = GameProperty>
    StartGameSessionPlacementRequest& AddGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.emplace_back(std::forward<GamePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const { return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline StartGameSessionPlacementRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetGameSessionName() const { return m_gameSessionName; }
    inline bool GameSessionNameHasBeenSet() const { return m_gameSessionNameHasBeenSet; }
    template<typename GameSessionNameT = Aws::String>
    void SetGameSessionName(GameSessionNameT&& value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName = std::forward<GameSessionNameT>(value); }
    template<typename GameSessionNameT = Aws::String>
    StartGameSessionPlacementRequest& WithGameSessionName(GameSessionNameT&& value) { SetGameSessionName(std::forward<GameSessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of values, expressed in milliseconds, that indicates the amount of
     * latency that a player experiences when connected to Amazon Web Services Regions.
     * This information is used to try to place the new game session where it can offer
     * the best possible gameplay experience for the players. </p>
     */
    inline const Aws::Vector<PlayerLatency>& GetPlayerLatencies() const { return m_playerLatencies; }
    inline bool PlayerLatenciesHasBeenSet() const { return m_playerLatenciesHasBeenSet; }
    template<typename PlayerLatenciesT = Aws::Vector<PlayerLatency>>
    void SetPlayerLatencies(PlayerLatenciesT&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = std::forward<PlayerLatenciesT>(value); }
    template<typename PlayerLatenciesT = Aws::Vector<PlayerLatency>>
    StartGameSessionPlacementRequest& WithPlayerLatencies(PlayerLatenciesT&& value) { SetPlayerLatencies(std::forward<PlayerLatenciesT>(value)); return *this;}
    template<typename PlayerLatenciesT = PlayerLatency>
    StartGameSessionPlacementRequest& AddPlayerLatencies(PlayerLatenciesT&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.emplace_back(std::forward<PlayerLatenciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set of information on each player to create a player session for.</p>
     */
    inline const Aws::Vector<DesiredPlayerSession>& GetDesiredPlayerSessions() const { return m_desiredPlayerSessions; }
    inline bool DesiredPlayerSessionsHasBeenSet() const { return m_desiredPlayerSessionsHasBeenSet; }
    template<typename DesiredPlayerSessionsT = Aws::Vector<DesiredPlayerSession>>
    void SetDesiredPlayerSessions(DesiredPlayerSessionsT&& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions = std::forward<DesiredPlayerSessionsT>(value); }
    template<typename DesiredPlayerSessionsT = Aws::Vector<DesiredPlayerSession>>
    StartGameSessionPlacementRequest& WithDesiredPlayerSessions(DesiredPlayerSessionsT&& value) { SetDesiredPlayerSessions(std::forward<DesiredPlayerSessionsT>(value)); return *this;}
    template<typename DesiredPlayerSessionsT = DesiredPlayerSession>
    StartGameSessionPlacementRequest& AddDesiredPlayerSessions(DesiredPlayerSessionsT&& value) { m_desiredPlayerSessionsHasBeenSet = true; m_desiredPlayerSessions.emplace_back(std::forward<DesiredPlayerSessionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session. For more information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a game session</a>.</p>
     */
    inline const Aws::String& GetGameSessionData() const { return m_gameSessionData; }
    inline bool GameSessionDataHasBeenSet() const { return m_gameSessionDataHasBeenSet; }
    template<typename GameSessionDataT = Aws::String>
    void SetGameSessionData(GameSessionDataT&& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = std::forward<GameSessionDataT>(value); }
    template<typename GameSessionDataT = Aws::String>
    StartGameSessionPlacementRequest& WithGameSessionData(GameSessionDataT&& value) { SetGameSessionData(std::forward<GameSessionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prioritized list of locations to use for the game session placement and
     * instructions on how to use it. This list overrides a queue's prioritized
     * location list for this game session placement request only. You can include
     * Amazon Web Services Regions, local zones, and custom locations (for Anywhere
     * fleets). You can choose to limit placements to locations on the override list
     * only, or you can prioritize locations on the override list first and then fall
     * back to the queue's other locations if needed. Choose a fallback strategy to use
     * in the event that Amazon GameLift Servers fails to place a game session in any
     * of the locations on the priority override list. </p>
     */
    inline const PriorityConfigurationOverride& GetPriorityConfigurationOverride() const { return m_priorityConfigurationOverride; }
    inline bool PriorityConfigurationOverrideHasBeenSet() const { return m_priorityConfigurationOverrideHasBeenSet; }
    template<typename PriorityConfigurationOverrideT = PriorityConfigurationOverride>
    void SetPriorityConfigurationOverride(PriorityConfigurationOverrideT&& value) { m_priorityConfigurationOverrideHasBeenSet = true; m_priorityConfigurationOverride = std::forward<PriorityConfigurationOverrideT>(value); }
    template<typename PriorityConfigurationOverrideT = PriorityConfigurationOverride>
    StartGameSessionPlacementRequest& WithPriorityConfigurationOverride(PriorityConfigurationOverrideT&& value) { SetPriorityConfigurationOverride(std::forward<PriorityConfigurationOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_placementId;
    bool m_placementIdHasBeenSet = false;

    Aws::String m_gameSessionQueueName;
    bool m_gameSessionQueueNameHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    int m_maximumPlayerSessionCount{0};
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    Aws::String m_gameSessionName;
    bool m_gameSessionNameHasBeenSet = false;

    Aws::Vector<PlayerLatency> m_playerLatencies;
    bool m_playerLatenciesHasBeenSet = false;

    Aws::Vector<DesiredPlayerSession> m_desiredPlayerSessions;
    bool m_desiredPlayerSessionsHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;

    PriorityConfigurationOverride m_priorityConfigurationOverride;
    bool m_priorityConfigurationOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
