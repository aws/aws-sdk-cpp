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
   * Amazon GameLift may attempt to place a game session multiple times before
   * succeeding. With each attempt it creates a <a>GameSession</a> object and updates
   * this placement object with the new game session properties..</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionPlacement">AWS
   * API Reference</a></p>
   */
  class GameSessionPlacement
  {
  public:
    AWS_GAMELIFT_API GameSessionPlacement();
    AWS_GAMELIFT_API GameSessionPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a game session placement.</p>
     */
    inline const Aws::String& GetPlacementId() const{ return m_placementId; }
    inline bool PlacementIdHasBeenSet() const { return m_placementIdHasBeenSet; }
    inline void SetPlacementId(const Aws::String& value) { m_placementIdHasBeenSet = true; m_placementId = value; }
    inline void SetPlacementId(Aws::String&& value) { m_placementIdHasBeenSet = true; m_placementId = std::move(value); }
    inline void SetPlacementId(const char* value) { m_placementIdHasBeenSet = true; m_placementId.assign(value); }
    inline GameSessionPlacement& WithPlacementId(const Aws::String& value) { SetPlacementId(value); return *this;}
    inline GameSessionPlacement& WithPlacementId(Aws::String&& value) { SetPlacementId(std::move(value)); return *this;}
    inline GameSessionPlacement& WithPlacementId(const char* value) { SetPlacementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline const Aws::String& GetGameSessionQueueName() const{ return m_gameSessionQueueName; }
    inline bool GameSessionQueueNameHasBeenSet() const { return m_gameSessionQueueNameHasBeenSet; }
    inline void SetGameSessionQueueName(const Aws::String& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = value; }
    inline void SetGameSessionQueueName(Aws::String&& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = std::move(value); }
    inline void SetGameSessionQueueName(const char* value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName.assign(value); }
    inline GameSessionPlacement& WithGameSessionQueueName(const Aws::String& value) { SetGameSessionQueueName(value); return *this;}
    inline GameSessionPlacement& WithGameSessionQueueName(Aws::String&& value) { SetGameSessionQueueName(std::move(value)); return *this;}
    inline GameSessionPlacement& WithGameSessionQueueName(const char* value) { SetGameSessionQueueName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the game session placement request.</p> <ul> <li> <p>
     * <b>PENDING</b> -- The placement request is in the queue waiting to be processed.
     * Game session properties are not yet final. </p> </li> <li> <p> <b>FULFILLED</b>
     * -- A new game session has been successfully placed. Game session properties are
     * now final.</p> </li> <li> <p> <b>CANCELLED</b> -- The placement request was
     * canceled.</p> </li> <li> <p> <b>TIMED_OUT</b> -- A new game session was not
     * successfully created before the time limit expired. You can resubmit as a new
     * placement request as needed.</p> </li> <li> <p> <b>FAILED</b> -- Amazon GameLift
     * is not able to complete the process of placing the game session. Common reasons
     * are the game session terminated before the placement process was completed, or
     * an unexpected internal error.</p> </li> </ul>
     */
    inline const GameSessionPlacementState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GameSessionPlacementState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GameSessionPlacementState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GameSessionPlacement& WithStatus(const GameSessionPlacementState& value) { SetStatus(value); return *this;}
    inline GameSessionPlacement& WithStatus(GameSessionPlacementState&& value) { SetStatus(std::move(value)); return *this;}
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
    inline GameSessionPlacement& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}
    inline GameSessionPlacement& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}
    inline GameSessionPlacement& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }
    inline GameSessionPlacement& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline GameSessionPlacement& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
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
    inline GameSessionPlacement& WithGameSessionName(const Aws::String& value) { SetGameSessionName(value); return *this;}
    inline GameSessionPlacement& WithGameSessionName(Aws::String&& value) { SetGameSessionName(std::move(value)); return *this;}
    inline GameSessionPlacement& WithGameSessionName(const char* value) { SetGameSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the game session. This value isn't final until
     * placement status is <code>FULFILLED</code>.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }
    inline GameSessionPlacement& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}
    inline GameSessionPlacement& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}
    inline GameSessionPlacement& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the game session created by this placement request. This
     * identifier is unique across all Regions. This value isn't final until placement
     * status is <code>FULFILLED</code>.</p>
     */
    inline const Aws::String& GetGameSessionArn() const{ return m_gameSessionArn; }
    inline bool GameSessionArnHasBeenSet() const { return m_gameSessionArnHasBeenSet; }
    inline void SetGameSessionArn(const Aws::String& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = value; }
    inline void SetGameSessionArn(Aws::String&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::move(value); }
    inline void SetGameSessionArn(const char* value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn.assign(value); }
    inline GameSessionPlacement& WithGameSessionArn(const Aws::String& value) { SetGameSessionArn(value); return *this;}
    inline GameSessionPlacement& WithGameSessionArn(Aws::String&& value) { SetGameSessionArn(std::move(value)); return *this;}
    inline GameSessionPlacement& WithGameSessionArn(const char* value) { SetGameSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Region where the game session created by this placement request
     * is running. This value isn't final until placement status is
     * <code>FULFILLED</code>.</p>
     */
    inline const Aws::String& GetGameSessionRegion() const{ return m_gameSessionRegion; }
    inline bool GameSessionRegionHasBeenSet() const { return m_gameSessionRegionHasBeenSet; }
    inline void SetGameSessionRegion(const Aws::String& value) { m_gameSessionRegionHasBeenSet = true; m_gameSessionRegion = value; }
    inline void SetGameSessionRegion(Aws::String&& value) { m_gameSessionRegionHasBeenSet = true; m_gameSessionRegion = std::move(value); }
    inline void SetGameSessionRegion(const char* value) { m_gameSessionRegionHasBeenSet = true; m_gameSessionRegion.assign(value); }
    inline GameSessionPlacement& WithGameSessionRegion(const Aws::String& value) { SetGameSessionRegion(value); return *this;}
    inline GameSessionPlacement& WithGameSessionRegion(Aws::String&& value) { SetGameSessionRegion(std::move(value)); return *this;}
    inline GameSessionPlacement& WithGameSessionRegion(const char* value) { SetGameSessionRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of values, expressed in milliseconds, that indicates the amount of
     * latency that a player experiences when connected to @aws; Regions.</p>
     */
    inline const Aws::Vector<PlayerLatency>& GetPlayerLatencies() const{ return m_playerLatencies; }
    inline bool PlayerLatenciesHasBeenSet() const { return m_playerLatenciesHasBeenSet; }
    inline void SetPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = value; }
    inline void SetPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = std::move(value); }
    inline GameSessionPlacement& WithPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { SetPlayerLatencies(value); return *this;}
    inline GameSessionPlacement& WithPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { SetPlayerLatencies(std::move(value)); return *this;}
    inline GameSessionPlacement& AddPlayerLatencies(const PlayerLatency& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(value); return *this; }
    inline GameSessionPlacement& AddPlayerLatencies(PlayerLatency&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this request was placed in the queue. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GameSessionPlacement& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GameSessionPlacement& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this request was completed, canceled, or timed
     * out.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GameSessionPlacement& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GameSessionPlacement& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number. This value isn't final
     * until placement status is <code>FULFILLED</code>. </p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline GameSessionPlacement& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline GameSessionPlacement& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline GameSessionPlacement& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
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
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline GameSessionPlacement& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline GameSessionPlacement& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline GameSessionPlacement& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number. This value isn't final
     * until placement status is <code>FULFILLED</code>.</p>
     */
    inline int GetPort() const{ return m_port; }
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
    inline const Aws::Vector<PlacedPlayerSession>& GetPlacedPlayerSessions() const{ return m_placedPlayerSessions; }
    inline bool PlacedPlayerSessionsHasBeenSet() const { return m_placedPlayerSessionsHasBeenSet; }
    inline void SetPlacedPlayerSessions(const Aws::Vector<PlacedPlayerSession>& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions = value; }
    inline void SetPlacedPlayerSessions(Aws::Vector<PlacedPlayerSession>&& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions = std::move(value); }
    inline GameSessionPlacement& WithPlacedPlayerSessions(const Aws::Vector<PlacedPlayerSession>& value) { SetPlacedPlayerSessions(value); return *this;}
    inline GameSessionPlacement& WithPlacedPlayerSessions(Aws::Vector<PlacedPlayerSession>&& value) { SetPlacedPlayerSessions(std::move(value)); return *this;}
    inline GameSessionPlacement& AddPlacedPlayerSessions(const PlacedPlayerSession& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions.push_back(value); return *this; }
    inline GameSessionPlacement& AddPlacedPlayerSessions(PlacedPlayerSession&& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions.push_back(std::move(value)); return *this; }
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
    inline GameSessionPlacement& WithGameSessionData(const Aws::String& value) { SetGameSessionData(value); return *this;}
    inline GameSessionPlacement& WithGameSessionData(Aws::String&& value) { SetGameSessionData(std::move(value)); return *this;}
    inline GameSessionPlacement& WithGameSessionData(const char* value) { SetGameSessionData(value); return *this;}
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
    inline const Aws::String& GetMatchmakerData() const{ return m_matchmakerData; }
    inline bool MatchmakerDataHasBeenSet() const { return m_matchmakerDataHasBeenSet; }
    inline void SetMatchmakerData(const Aws::String& value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData = value; }
    inline void SetMatchmakerData(Aws::String&& value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData = std::move(value); }
    inline void SetMatchmakerData(const char* value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData.assign(value); }
    inline GameSessionPlacement& WithMatchmakerData(const Aws::String& value) { SetMatchmakerData(value); return *this;}
    inline GameSessionPlacement& WithMatchmakerData(Aws::String&& value) { SetMatchmakerData(std::move(value)); return *this;}
    inline GameSessionPlacement& WithMatchmakerData(const char* value) { SetMatchmakerData(value); return *this;}
    ///@}
  private:

    Aws::String m_placementId;
    bool m_placementIdHasBeenSet = false;

    Aws::String m_gameSessionQueueName;
    bool m_gameSessionQueueNameHasBeenSet = false;

    GameSessionPlacementState m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    int m_maximumPlayerSessionCount;
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

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::Vector<PlacedPlayerSession> m_placedPlayerSessions;
    bool m_placedPlayerSessionsHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;

    Aws::String m_matchmakerData;
    bool m_matchmakerDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
