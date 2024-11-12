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
   * <code>TERMINATED</code>. </p> <p>Amazon GameLift retains a game session resource
   * for 30 days after the game session ends. You can reuse idempotency token values
   * after this time. Game session logs are retained for 14 days.</p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSession">AWS
   * API Reference</a></p>
   */
  class GameSession
  {
  public:
    AWS_GAMELIFT_API GameSession();
    AWS_GAMELIFT_API GameSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the game session. A game session ARN has the
     * following format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }
    inline GameSession& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}
    inline GameSession& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}
    inline GameSession& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GameSession& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GameSession& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GameSession& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the fleet that the game session is running on.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline GameSession& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline GameSession& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline GameSession& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet that this game session is running on. </p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }
    inline GameSession& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline GameSession& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline GameSession& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline GameSession& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GameSession& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const{ return m_terminationTime; }
    inline bool TerminationTimeHasBeenSet() const { return m_terminationTimeHasBeenSet; }
    inline void SetTerminationTime(const Aws::Utils::DateTime& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }
    inline void SetTerminationTime(Aws::Utils::DateTime&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = std::move(value); }
    inline GameSession& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}
    inline GameSession& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline int GetCurrentPlayerSessionCount() const{ return m_currentPlayerSessionCount; }
    inline bool CurrentPlayerSessionCountHasBeenSet() const { return m_currentPlayerSessionCountHasBeenSet; }
    inline void SetCurrentPlayerSessionCount(int value) { m_currentPlayerSessionCountHasBeenSet = true; m_currentPlayerSessionCount = value; }
    inline GameSession& WithCurrentPlayerSessionCount(int value) { SetCurrentPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline GameSession& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the game session. A game session must have an
     * <code>ACTIVE</code> status to have player sessions.</p>
     */
    inline const GameSessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GameSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GameSessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GameSession& WithStatus(const GameSessionStatus& value) { SetStatus(value); return *this;}
    inline GameSession& WithStatus(GameSessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about game session status.
     * <code>INTERRUPTED</code> indicates that the game session was hosted on a spot
     * instance that was reclaimed, causing the active game session to be
     * terminated.</p>
     */
    inline const GameSessionStatusReason& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const GameSessionStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(GameSessionStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline GameSession& WithStatusReason(const GameSessionStatusReason& value) { SetStatusReason(value); return *this;}
    inline GameSession& WithStatusReason(GameSessionStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
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
    inline GameSession& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}
    inline GameSession& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}
    inline GameSession& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }
    inline GameSession& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address of the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline GameSession& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline GameSession& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline GameSession& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
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
    inline GameSession& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline GameSession& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline GameSession& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GameSession& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline const PlayerSessionCreationPolicy& GetPlayerSessionCreationPolicy() const{ return m_playerSessionCreationPolicy; }
    inline bool PlayerSessionCreationPolicyHasBeenSet() const { return m_playerSessionCreationPolicyHasBeenSet; }
    inline void SetPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = value; }
    inline void SetPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = std::move(value); }
    inline GameSession& WithPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { SetPlayerSessionCreationPolicy(value); return *this;}
    inline GameSession& WithPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { SetPlayerSessionCreationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }
    inline GameSession& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}
    inline GameSession& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}
    inline GameSession& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}
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
    inline GameSession& WithGameSessionData(const Aws::String& value) { SetGameSessionData(value); return *this;}
    inline GameSession& WithGameSessionData(Aws::String&& value) { SetGameSessionData(std::move(value)); return *this;}
    inline GameSession& WithGameSessionData(const char* value) { SetGameSessionData(value); return *this;}
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
    inline const Aws::String& GetMatchmakerData() const{ return m_matchmakerData; }
    inline bool MatchmakerDataHasBeenSet() const { return m_matchmakerDataHasBeenSet; }
    inline void SetMatchmakerData(const Aws::String& value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData = value; }
    inline void SetMatchmakerData(Aws::String&& value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData = std::move(value); }
    inline void SetMatchmakerData(const char* value) { m_matchmakerDataHasBeenSet = true; m_matchmakerData.assign(value); }
    inline GameSession& WithMatchmakerData(const Aws::String& value) { SetMatchmakerData(value); return *this;}
    inline GameSession& WithMatchmakerData(Aws::String&& value) { SetMatchmakerData(std::move(value)); return *this;}
    inline GameSession& WithMatchmakerData(const char* value) { SetMatchmakerData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet location where the game session is running. This value might
     * specify the fleet's home Region or a remote location. Location is expressed as
     * an Amazon Web Services Region code such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline GameSession& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline GameSession& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline GameSession& WithLocation(const char* value) { SetLocation(value); return *this;}
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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationTime;
    bool m_terminationTimeHasBeenSet = false;

    int m_currentPlayerSessionCount;
    bool m_currentPlayerSessionCountHasBeenSet = false;

    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    GameSessionStatus m_status;
    bool m_statusHasBeenSet = false;

    GameSessionStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    PlayerSessionCreationPolicy m_playerSessionCreationPolicy;
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
