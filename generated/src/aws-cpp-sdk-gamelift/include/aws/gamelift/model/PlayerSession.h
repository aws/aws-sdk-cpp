/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/PlayerSessionStatus.h>
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
   * <p>Represents a player session. Player sessions are created either for a
   * specific game session, or as part of a game session placement or matchmaking
   * request. A player session can represents a reserved player slot in a game
   * session (when status is <code>RESERVED</code>) or actual player activity in a
   * game session (when status is <code>ACTIVE</code>). A player session object,
   * including player data, is automatically passed to a game session when the player
   * connects to the game session and is validated. After the game session ends,
   * player sessions information is retained for 30 days and then removed.</p> <p>
   * <b>Related actions</b> </p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlayerSession">AWS
   * API Reference</a></p>
   */
  class PlayerSession
  {
  public:
    AWS_GAMELIFT_API PlayerSession() = default;
    AWS_GAMELIFT_API PlayerSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PlayerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a player session.</p>
     */
    inline const Aws::String& GetPlayerSessionId() const { return m_playerSessionId; }
    inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }
    template<typename PlayerSessionIdT = Aws::String>
    void SetPlayerSessionId(PlayerSessionIdT&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = std::forward<PlayerSessionIdT>(value); }
    template<typename PlayerSessionIdT = Aws::String>
    PlayerSession& WithPlayerSessionId(PlayerSessionIdT&& value) { SetPlayerSessionId(std::forward<PlayerSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player that is associated with this player
     * session.</p>
     */
    inline const Aws::String& GetPlayerId() const { return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    template<typename PlayerIdT = Aws::String>
    void SetPlayerId(PlayerIdT&& value) { m_playerIdHasBeenSet = true; m_playerId = std::forward<PlayerIdT>(value); }
    template<typename PlayerIdT = Aws::String>
    PlayerSession& WithPlayerId(PlayerIdT&& value) { SetPlayerId(std::forward<PlayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    PlayerSession& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the fleet that the player's game session is running
     * on.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    PlayerSession& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet that the player's game session is running on.
     * </p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    PlayerSession& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
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
    PlayerSession& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    PlayerSession& WithTerminationTime(TerminationTimeT&& value) { SetTerminationTime(std::forward<TerminationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the player session.</p> <p>Possible player session statuses
     * include the following:</p> <ul> <li> <p> <b>RESERVED</b> -- The player session
     * request has been received, but the player has not yet connected to the server
     * process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> -- The player
     * has been validated by the server process and is currently connected.</p> </li>
     * <li> <p> <b>COMPLETED</b> -- The player connection has been dropped.</p> </li>
     * <li> <p> <b>TIMEDOUT</b> -- A player session request was received, but the
     * player did not connect and/or was not validated within the timeout limit (60
     * seconds).</p> </li> </ul>
     */
    inline PlayerSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PlayerSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PlayerSession& WithStatus(PlayerSessionStatus value) { SetStatus(value); return *this;}
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
    PlayerSession& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
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
    PlayerSession& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift Servers
     * server process, an app needs both the IP address and port number.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline PlayerSession& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Developer-defined information related to a player. Amazon GameLift Servers
     * does not use this data, so it can be formatted as needed for use in the game.
     * </p>
     */
    inline const Aws::String& GetPlayerData() const { return m_playerData; }
    inline bool PlayerDataHasBeenSet() const { return m_playerDataHasBeenSet; }
    template<typename PlayerDataT = Aws::String>
    void SetPlayerData(PlayerDataT&& value) { m_playerDataHasBeenSet = true; m_playerData = std::forward<PlayerDataT>(value); }
    template<typename PlayerDataT = Aws::String>
    PlayerSession& WithPlayerData(PlayerDataT&& value) { SetPlayerData(std::forward<PlayerDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet = false;

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationTime{};
    bool m_terminationTimeHasBeenSet = false;

    PlayerSessionStatus m_status{PlayerSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_playerData;
    bool m_playerDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
