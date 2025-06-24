/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameSessionPlacementState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/PriorityConfigurationOverride.h>
#include <aws/gamelift/model/GameProperty.h>
#include <aws/gamelift/model/PlayerLatency.h>
#include <aws/gamelift/model/PlacedPlayerSession.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents a potential game session placement, including the full details of
   * the original placement request and the current status. </p>  <p>If the
   * game session placement status is <code>PENDING</code>, the properties for game
   * session ID/ARN, region, IP address/DNS, and port aren't final. A game session is
   * not active and ready to accept players until placement status reaches
   * <code>FULFILLED</code>. When the placement is in <code>PENDING</code> status,
   * Amazon GameLift Servers may attempt to place a game session multiple times
   * before succeeding. With each attempt it creates a <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameSession">https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameSession</a>
   * object and updates this placement object with the new game session
   * properties.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionPlacement">AWS
   * API Reference</a></p>
   */
  class GameSessionPlacement
  {
  public:
    AWS_GAMELIFT_API GameSessionPlacement() = default;
    AWS_GAMELIFT_API GameSessionPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a game session placement.</p>
     */
    inline const Aws::String& GetPlacementId() const { return m_placementId; }
    inline bool PlacementIdHasBeenSet() const { return m_placementIdHasBeenSet; }
    template<typename PlacementIdT = Aws::String>
    void SetPlacementId(PlacementIdT&& value) { m_placementIdHasBeenSet = true; m_placementId = std::forward<PlacementIdT>(value); }
    template<typename PlacementIdT = Aws::String>
    GameSessionPlacement& WithPlacementId(PlacementIdT&& value) { SetPlacementId(std::forward<PlacementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline const Aws::String& GetGameSessionQueueName() const { return m_gameSessionQueueName; }
    inline bool GameSessionQueueNameHasBeenSet() const { return m_gameSessionQueueNameHasBeenSet; }
    template<typename GameSessionQueueNameT = Aws::String>
    void SetGameSessionQueueName(GameSessionQueueNameT&& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = std::forward<GameSessionQueueNameT>(value); }
    template<typename GameSessionQueueNameT = Aws::String>
    GameSessionPlacement& WithGameSessionQueueName(GameSessionQueueNameT&& value) { SetGameSessionQueueName(std::forward<GameSessionQueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the game session placement request.</p> <ul> <li> <p>
     * <b>PENDING</b> -- The placement request is in the queue waiting to be processed.
     * Game session properties are not yet final. </p> </li> <li> <p> <b>FULFILLED</b>
     * -- A new game session has been successfully placed. Game session properties are
     * now final.</p> </li> <li> <p> <b>CANCELLED</b> -- The placement request was
     * canceled.</p> </li> <li> <p> <b>TIMED_OUT</b> -- A new game session was not
     * successfully created before the time limit expired. You can resubmit the
     * placement request as needed.</p> </li> <li> <p> <b>FAILED</b> -- Amazon GameLift
     * Servers is not able to complete the process of placing the game session. Common
     * reasons are the game session terminated before the placement process was
     * completed, or an unexpected internal error.</p> </li> </ul>
     */
    inline GameSessionPlacementState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GameSessionPlacementState value) { m_statusHasBeenSet = true; m_status = value; }
    inline GameSessionPlacement& WithStatus(GameSessionPlacementState value) { SetStatus(value); return *this;}
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
    GameSessionPlacement& WithGameProperties(GamePropertiesT&& value) { SetGameProperties(std::forward<GamePropertiesT>(value)); return *this;}
    template<typename GamePropertiesT = GameProperty>
    GameSessionPlacement& AddGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.emplace_back(std::forward<GamePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const { return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline GameSessionPlacement& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
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
    GameSessionPlacement& WithGameSessionName(GameSessionNameT&& value) { SetGameSessionName(std::forward<GameSessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the game session. This value isn't final until
     * placement status is <code>FULFILLED</code>.</p>
     */
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    GameSessionPlacement& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the game session created by this placement request. This
     * identifier is unique across all Regions. This value isn't final until placement
     * status is <code>FULFILLED</code>.</p>
     */
    inline const Aws::String& GetGameSessionArn() const { return m_gameSessionArn; }
    inline bool GameSessionArnHasBeenSet() const { return m_gameSessionArnHasBeenSet; }
    template<typename GameSessionArnT = Aws::String>
    void SetGameSessionArn(GameSessionArnT&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::forward<GameSessionArnT>(value); }
    template<typename GameSessionArnT = Aws::String>
    GameSessionPlacement& WithGameSessionArn(GameSessionArnT&& value) { SetGameSessionArn(std::forward<GameSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Region where the game session created by this placement request
     * is running. This value isn't final until placement status is
     * <code>FULFILLED</code>.</p>
     */
    inline const Aws::String& GetGameSessionRegion() const { return m_gameSessionRegion; }
    inline bool GameSessionRegionHasBeenSet() const { return m_gameSessionRegionHasBeenSet; }
    template<typename GameSessionRegionT = Aws::String>
    void SetGameSessionRegion(GameSessionRegionT&& value) { m_gameSessionRegionHasBeenSet = true; m_gameSessionRegion = std::forward<GameSessionRegionT>(value); }
    template<typename GameSessionRegionT = Aws::String>
    GameSessionPlacement& WithGameSessionRegion(GameSessionRegionT&& value) { SetGameSessionRegion(std::forward<GameSessionRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of values, expressed in milliseconds, that indicates the amount of
     * latency that a player experiences when connected to Amazon Web Services
     * Regions.</p>
     */
    inline const Aws::Vector<PlayerLatency>& GetPlayerLatencies() const { return m_playerLatencies; }
    inline bool PlayerLatenciesHasBeenSet() const { return m_playerLatenciesHasBeenSet; }
    template<typename PlayerLatenciesT = Aws::Vector<PlayerLatency>>
    void SetPlayerLatencies(PlayerLatenciesT&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = std::forward<PlayerLatenciesT>(value); }
    template<typename PlayerLatenciesT = Aws::Vector<PlayerLatency>>
    GameSessionPlacement& WithPlayerLatencies(PlayerLatenciesT&& value) { SetPlayerLatencies(std::forward<PlayerLatenciesT>(value)); return *this;}
    template<typename PlayerLatenciesT = PlayerLatency>
    GameSessionPlacement& AddPlayerLatencies(PlayerLatenciesT&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.emplace_back(std::forward<PlayerLatenciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this request was placed in the queue. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GameSessionPlacement& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this request was completed, canceled, or timed
     * out.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GameSessionPlacement& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the game session. To connect to a Amazon GameLift Servers
     * game server, an app needs both the IP address and port number. This value isn't
     * final until placement status is <code>FULFILLED</code>. </p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    GameSessionPlacement& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    GameSessionPlacement& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the game session. To connect to a Amazon GameLift Servers
     * game server, an app needs both the IP address and port number. This value isn't
     * final until placement status is <code>FULFILLED</code>.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GameSessionPlacement& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of information on player sessions created in response to the
     * game session placement request. These player sessions are created only after a
     * new game session is successfully placed (placement status is
     * <code>FULFILLED</code>). This information includes the player ID, provided in
     * the placement request, and a corresponding player session ID.</p>
     */
    inline const Aws::Vector<PlacedPlayerSession>& GetPlacedPlayerSessions() const { return m_placedPlayerSessions; }
    inline bool PlacedPlayerSessionsHasBeenSet() const { return m_placedPlayerSessionsHasBeenSet; }
    template<typename PlacedPlayerSessionsT = Aws::Vector<PlacedPlayerSession>>
    void SetPlacedPlayerSessions(PlacedPlayerSessionsT&& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions = std::forward<PlacedPlayerSessionsT>(value); }
    template<typename PlacedPlayerSessionsT = Aws::Vector<PlacedPlayerSession>>
    GameSessionPlacement& WithPlacedPlayerSessions(PlacedPlayerSessionsT&& value) { SetPlacedPlayerSessions(std::forward<PlacedPlayerSessionsT>(value)); return *this;}
    template<typename PlacedPlayerSessionsT = PlacedPlayerSession>
    GameSessionPlacement& AddPlacedPlayerSessions(PlacedPlayerSessionsT&& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions.emplace_back(std::forward<PlacedPlayerSessionsT>(value)); return *this; }
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
    GameSessionPlacement& WithGameSessionData(GameSessionDataT&& value) { SetGameSessionData(std::forward<GameSessionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the matchmaking process for this game. Data is in JSON syntax,
     * formatted as a string. It identifies the matchmaking configuration used to
     * create the match, and contains data on all players assigned to the match,
     * including player attributes and team assignments. For more details on matchmaker
     * data, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-server.html#match-server-data">Match
     * Data</a>.</p>
     */
    inline const Aws::String& GetMatchmakerData() const { return m_matchmakerData; }
    inline bool MatchmakerDataHasBeenSet() const { return m_matchmakerDataHasBeenSet; }
    template<typename MatchmakerDataT = Aws::String>
    void SetMatchmakerData(MatchmakerDataT&& value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData = std::forward<MatchmakerDataT>(value); }
    template<typename MatchmakerDataT = Aws::String>
    GameSessionPlacement& WithMatchmakerData(MatchmakerDataT&& value) { SetMatchmakerData(std::forward<MatchmakerDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternative priority list of locations that's included with a game session
     * placement request. When provided, the list overrides a queue's location order
     * list for this game session placement request only. The list might include Amazon
     * Web Services Regions, local zones, and custom locations (for Anywhere fleets).
     * The fallback strategy tells Amazon GameLift Servers what action to take (if any)
     * in the event that it failed to place a new game session. </p>
     */
    inline const PriorityConfigurationOverride& GetPriorityConfigurationOverride() const { return m_priorityConfigurationOverride; }
    inline bool PriorityConfigurationOverrideHasBeenSet() const { return m_priorityConfigurationOverrideHasBeenSet; }
    template<typename PriorityConfigurationOverrideT = PriorityConfigurationOverride>
    void SetPriorityConfigurationOverride(PriorityConfigurationOverrideT&& value) { m_priorityConfigurationOverrideHasBeenSet = true; m_priorityConfigurationOverride = std::forward<PriorityConfigurationOverrideT>(value); }
    template<typename PriorityConfigurationOverrideT = PriorityConfigurationOverride>
    GameSessionPlacement& WithPriorityConfigurationOverride(PriorityConfigurationOverrideT&& value) { SetPriorityConfigurationOverride(std::forward<PriorityConfigurationOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_placementId;
    bool m_placementIdHasBeenSet = false;

    Aws::String m_gameSessionQueueName;
    bool m_gameSessionQueueNameHasBeenSet = false;

    GameSessionPlacementState m_status{GameSessionPlacementState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    int m_maximumPlayerSessionCount{0};
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    Aws::String m_gameSessionName;
    bool m_gameSessionNameHasBeenSet = false;

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_gameSessionArn;
    bool m_gameSessionArnHasBeenSet = false;

    Aws::String m_gameSessionRegion;
    bool m_gameSessionRegionHasBeenSet = false;

    Aws::Vector<PlayerLatency> m_playerLatencies;
    bool m_playerLatenciesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::Vector<PlacedPlayerSession> m_placedPlayerSessions;
    bool m_placedPlayerSessionsHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;

    Aws::String m_matchmakerData;
    bool m_matchmakerDataHasBeenSet = false;

    PriorityConfigurationOverride m_priorityConfigurationOverride;
    bool m_priorityConfigurationOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
