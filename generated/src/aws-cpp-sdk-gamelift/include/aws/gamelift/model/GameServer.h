/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerClaimStatus.h>
#include <aws/gamelift/model/GameServerUtilizationStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> <b>This data type is used with the Amazon GameLift Servers FleetIQ and game
   * server groups.</b> </p> <p>Properties describing a game server that is running
   * on an instance in a game server group. </p> <p>A game server is created by a
   * successful call to <code>RegisterGameServer</code> and deleted by calling
   * <code>DeregisterGameServer</code>. A game server is claimed to host a game
   * session by calling <code>ClaimGameServer</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServer">AWS
   * API Reference</a></p>
   */
  class GameServer
  {
  public:
    AWS_GAMELIFT_API GameServer() = default;
    AWS_GAMELIFT_API GameServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const { return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    template<typename GameServerGroupNameT = Aws::String>
    void SetGameServerGroupName(GameServerGroupNameT&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::forward<GameServerGroupNameT>(value); }
    template<typename GameServerGroupNameT = Aws::String>
    GameServer& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline const Aws::String& GetGameServerGroupArn() const { return m_gameServerGroupArn; }
    inline bool GameServerGroupArnHasBeenSet() const { return m_gameServerGroupArnHasBeenSet; }
    template<typename GameServerGroupArnT = Aws::String>
    void SetGameServerGroupArn(GameServerGroupArnT&& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = std::forward<GameServerGroupArnT>(value); }
    template<typename GameServerGroupArnT = Aws::String>
    GameServer& WithGameServerGroupArn(GameServerGroupArnT&& value) { SetGameServerGroupArn(std::forward<GameServerGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetGameServerId() const { return m_gameServerId; }
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }
    template<typename GameServerIdT = Aws::String>
    void SetGameServerId(GameServerIdT&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::forward<GameServerIdT>(value); }
    template<typename GameServerIdT = Aws::String>
    GameServer& WithGameServerId(GameServerIdT&& value) { SetGameServerId(std::forward<GameServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GameServer& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline const Aws::String& GetConnectionInfo() const { return m_connectionInfo; }
    inline bool ConnectionInfoHasBeenSet() const { return m_connectionInfoHasBeenSet; }
    template<typename ConnectionInfoT = Aws::String>
    void SetConnectionInfo(ConnectionInfoT&& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = std::forward<ConnectionInfoT>(value); }
    template<typename ConnectionInfoT = Aws::String>
    GameServer& WithConnectionInfo(ConnectionInfoT&& value) { SetConnectionInfo(std::forward<ConnectionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline const Aws::String& GetGameServerData() const { return m_gameServerData; }
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }
    template<typename GameServerDataT = Aws::String>
    void SetGameServerData(GameServerDataT&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::forward<GameServerDataT>(value); }
    template<typename GameServerDataT = Aws::String>
    GameServer& WithGameServerData(GameServerDataT&& value) { SetGameServerData(std::forward<GameServerDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when an available game server has been reserved for gameplay but
     * has not yet started hosting a game. Once it is claimed, the game server remains
     * in <code>CLAIMED</code> status for a maximum of one minute. During this time,
     * game clients connect to the game server to start the game and trigger the game
     * server to update its utilization status. After one minute, the game server claim
     * status reverts to null.</p>
     */
    inline GameServerClaimStatus GetClaimStatus() const { return m_claimStatus; }
    inline bool ClaimStatusHasBeenSet() const { return m_claimStatusHasBeenSet; }
    inline void SetClaimStatus(GameServerClaimStatus value) { m_claimStatusHasBeenSet = true; m_claimStatus = value; }
    inline GameServer& WithClaimStatus(GameServerClaimStatus value) { SetClaimStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * game server is available to be claimed. A game server that has been claimed
     * remains in this status until it reports game hosting activity. </p> </li> <li>
     * <p> <code>UTILIZED</code> - The game server is currently hosting a game session
     * with players. </p> </li> </ul>
     */
    inline GameServerUtilizationStatus GetUtilizationStatus() const { return m_utilizationStatus; }
    inline bool UtilizationStatusHasBeenSet() const { return m_utilizationStatusHasBeenSet; }
    inline void SetUtilizationStatus(GameServerUtilizationStatus value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = value; }
    inline GameServer& WithUtilizationStatus(GameServerUtilizationStatus value) { SetUtilizationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp that indicates when the game server registered. The format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationTime() const { return m_registrationTime; }
    inline bool RegistrationTimeHasBeenSet() const { return m_registrationTimeHasBeenSet; }
    template<typename RegistrationTimeT = Aws::Utils::DateTime>
    void SetRegistrationTime(RegistrationTimeT&& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = std::forward<RegistrationTimeT>(value); }
    template<typename RegistrationTimeT = Aws::Utils::DateTime>
    GameServer& WithRegistrationTime(RegistrationTimeT&& value) { SetRegistrationTime(std::forward<RegistrationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp that indicates the last time the game server was claimed. The
     * format is a number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>). This value is used to calculate when a claimed
     * game server's status should revert to null.</p>
     */
    inline const Aws::Utils::DateTime& GetLastClaimTime() const { return m_lastClaimTime; }
    inline bool LastClaimTimeHasBeenSet() const { return m_lastClaimTimeHasBeenSet; }
    template<typename LastClaimTimeT = Aws::Utils::DateTime>
    void SetLastClaimTime(LastClaimTimeT&& value) { m_lastClaimTimeHasBeenSet = true; m_lastClaimTime = std::forward<LastClaimTimeT>(value); }
    template<typename LastClaimTimeT = Aws::Utils::DateTime>
    GameServer& WithLastClaimTime(LastClaimTimeT&& value) { SetLastClaimTime(std::forward<LastClaimTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp that indicates the last time the game server was updated with
     * health status. The format is a number expressed in Unix time as milliseconds
     * (for example <code>"1469498468.057"</code>). After game server registration,
     * this property is only changed when a game server update specifies a health check
     * value.</p>
     */
    inline const Aws::Utils::DateTime& GetLastHealthCheckTime() const { return m_lastHealthCheckTime; }
    inline bool LastHealthCheckTimeHasBeenSet() const { return m_lastHealthCheckTimeHasBeenSet; }
    template<typename LastHealthCheckTimeT = Aws::Utils::DateTime>
    void SetLastHealthCheckTime(LastHealthCheckTimeT&& value) { m_lastHealthCheckTimeHasBeenSet = true; m_lastHealthCheckTime = std::forward<LastHealthCheckTimeT>(value); }
    template<typename LastHealthCheckTimeT = Aws::Utils::DateTime>
    GameServer& WithLastHealthCheckTime(LastHealthCheckTimeT&& value) { SetLastHealthCheckTime(std::forward<LastHealthCheckTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerGroupArn;
    bool m_gameServerGroupArnHasBeenSet = false;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_connectionInfo;
    bool m_connectionInfoHasBeenSet = false;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet = false;

    GameServerClaimStatus m_claimStatus{GameServerClaimStatus::NOT_SET};
    bool m_claimStatusHasBeenSet = false;

    GameServerUtilizationStatus m_utilizationStatus{GameServerUtilizationStatus::NOT_SET};
    bool m_utilizationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_registrationTime{};
    bool m_registrationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastClaimTime{};
    bool m_lastClaimTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastHealthCheckTime{};
    bool m_lastHealthCheckTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
