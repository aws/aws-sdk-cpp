/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/GameSessionStatus.h>
#include <aws/gamelift/model/GameSessionStatusReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/PlayerSessionCreationPolicy.h>
#include <aws/gamelift/model/GameProperty.h>
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
   * <p>Properties describing a game session.</p> <p>A game session in ACTIVE status
   * can host players. When a game session ends, its status is set to
   * <code>TERMINATED</code>. </p> <p>Amazon GameLift Servers retains a game session
   * resource for 30 days after the game session ends. You can reuse idempotency
   * token values after this time. Game session logs are retained for 14 days.</p>
   * <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSession">AWS
   * API Reference</a></p>
   */
  class GameSession
  {
  public:
    AWS_GAMELIFT_API GameSession() = default;
    AWS_GAMELIFT_API GameSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the game session. A game session ARN has the
     * following format: <code>arn:aws:gamelift:&lt;location&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    GameSession& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GameSession& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the fleet that the game session is running on.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    GameSession& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet that this game session is running on. </p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    GameSession& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GameSession& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const { return m_terminationTime; }
    inline bool TerminationTimeHasBeenSet() const { return m_terminationTimeHasBeenSet; }
    template<typename TerminationTimeT = Aws::Utils::DateTime>
    void SetTerminationTime(TerminationTimeT&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = std::forward<TerminationTimeT>(value); }
    template<typename TerminationTimeT = Aws::Utils::DateTime>
    GameSession& WithTerminationTime(TerminationTimeT&& value) { SetTerminationTime(std::forward<TerminationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline int GetCurrentPlayerSessionCount() const { return m_currentPlayerSessionCount; }
    inline bool CurrentPlayerSessionCountHasBeenSet() const { return m_currentPlayerSessionCountHasBeenSet; }
    inline void SetCurrentPlayerSessionCount(int value) { m_currentPlayerSessionCountHasBeenSet = true; m_currentPlayerSessionCount = value; }
    inline GameSession& WithCurrentPlayerSessionCount(int value) { SetCurrentPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const { return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline GameSession& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the game session. A game session must have an
     * <code>ACTIVE</code> status to have player sessions.</p>
     */
    inline GameSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GameSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GameSession& WithStatus(GameSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about game session status. </p> <ul> <li> <p>
     * <code>INTERRUPTED</code> -- The game session was hosted on an EC2 Spot instance
     * that was reclaimed, causing the active game session to be stopped.</p> </li>
     * <li> <p> <code>TRIGGERED_ON_PROCESS_TERMINATE</code> – The game session was
     * stopped by calling <code>TerminateGameSession</code> with the termination mode
     * <code>TRIGGER_ON_PROCESS_TERMINATE</code>. </p> </li> <li> <p>
     * <code>FORCE_TERMINATED</code> – The game session was stopped by calling
     * <code>TerminateGameSession</code> with the termination mode
     * <code>FORCE_TERMINATE</code>. </p> </li> </ul> <p/>
     */
    inline GameSessionStatusReason GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(GameSessionStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline GameSession& WithStatusReason(GameSessionStatusReason value) { SetStatusReason(value); return *this;}
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
    GameSession& WithGameProperties(GamePropertiesT&& value) { SetGameProperties(std::forward<GamePropertiesT>(value)); return *this;}
    template<typename GamePropertiesT = GameProperty>
    GameSession& AddGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.emplace_back(std::forward<GamePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address of the game session. To connect to a Amazon GameLift Servers
     * game server, an app needs both the IP address and port number.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    GameSession& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
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
    GameSession& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the game session. To connect to a Amazon GameLift Servers
     * game server, an app needs both the IP address and port number.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GameSession& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the game session is accepting new players.</p>
     */
    inline PlayerSessionCreationPolicy GetPlayerSessionCreationPolicy() const { return m_playerSessionCreationPolicy; }
    inline bool PlayerSessionCreationPolicyHasBeenSet() const { return m_playerSessionCreationPolicyHasBeenSet; }
    inline void SetPlayerSessionCreationPolicy(PlayerSessionCreationPolicy value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = value; }
    inline GameSession& WithPlayerSessionCreationPolicy(PlayerSessionCreationPolicy value) { SetPlayerSessionCreationPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline const Aws::String& GetCreatorId() const { return m_creatorId; }
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }
    template<typename CreatorIdT = Aws::String>
    void SetCreatorId(CreatorIdT&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::forward<CreatorIdT>(value); }
    template<typename CreatorIdT = Aws::String>
    GameSession& WithCreatorId(CreatorIdT&& value) { SetCreatorId(std::forward<CreatorIdT>(value)); return *this;}
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
    GameSession& WithGameSessionData(GameSessionDataT&& value) { SetGameSessionData(std::forward<GameSessionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the matchmaking process that resulted in the game session,
     * if matchmaking was used. Data is in JSON syntax, formatted as a string.
     * Information includes the matchmaker ID as well as player attributes and team
     * assignments. For more details on matchmaker data, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-server.html#match-server-data">Match
     * Data</a>. Matchmaker data is updated whenever new players are added during a
     * successful backfill (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartMatchBackfill.html">StartMatchBackfill</a>).
     * </p>
     */
    inline const Aws::String& GetMatchmakerData() const { return m_matchmakerData; }
    inline bool MatchmakerDataHasBeenSet() const { return m_matchmakerDataHasBeenSet; }
    template<typename MatchmakerDataT = Aws::String>
    void SetMatchmakerData(MatchmakerDataT&& value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData = std::forward<MatchmakerDataT>(value); }
    template<typename MatchmakerDataT = Aws::String>
    GameSession& WithMatchmakerData(MatchmakerDataT&& value) { SetMatchmakerData(std::forward<MatchmakerDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet location where the game session is running. This value might
     * specify the fleet's home Region or a remote location. Location is expressed as
     * an Amazon Web Services Region code such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    GameSession& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationTime{};
    bool m_terminationTimeHasBeenSet = false;

    int m_currentPlayerSessionCount{0};
    bool m_currentPlayerSessionCountHasBeenSet = false;

    int m_maximumPlayerSessionCount{0};
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    GameSessionStatus m_status{GameSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    GameSessionStatusReason m_statusReason{GameSessionStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    PlayerSessionCreationPolicy m_playerSessionCreationPolicy{PlayerSessionCreationPolicy::NOT_SET};
    bool m_playerSessionCreationPolicyHasBeenSet = false;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;

    Aws::String m_matchmakerData;
    bool m_matchmakerDataHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
