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
   * <p> <b>This data type is used with the Amazon GameLift FleetIQ and game server
   * groups.</b> </p> <p>Properties describing a game server that is running on an
   * instance in a game server group. </p> <p>A game server is created by a
   * successful call to <code>RegisterGameServer</code> and deleted by calling
   * <code>DeregisterGameServer</code>. A game server is claimed to host a game
   * session by calling <code>ClaimGameServer</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServer">AWS
   * API Reference</a></p>
   */
  class GameServer
  {
  public:
    AWS_GAMELIFT_API GameServer();
    AWS_GAMELIFT_API GameServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline GameServer& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline GameServer& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline GameServer& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline const Aws::String& GetGameServerGroupArn() const{ return m_gameServerGroupArn; }

    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline bool GameServerGroupArnHasBeenSet() const { return m_gameServerGroupArnHasBeenSet; }

    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline void SetGameServerGroupArn(const Aws::String& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = value; }

    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline void SetGameServerGroupArn(Aws::String&& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = std::move(value); }

    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline void SetGameServerGroupArn(const char* value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn.assign(value); }

    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline GameServer& WithGameServerGroupArn(const Aws::String& value) { SetGameServerGroupArn(value); return *this;}

    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline GameServer& WithGameServerGroupArn(Aws::String&& value) { SetGameServerGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier for the game server group where the game server is
     * located.</p>
     */
    inline GameServer& WithGameServerGroupArn(const char* value) { SetGameServerGroupArn(value); return *this;}


    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline GameServer& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline GameServer& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an Amazon Web
     * Services account.</p>
     */
    inline GameServer& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}


    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline GameServer& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline GameServer& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline GameServer& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline const Aws::String& GetConnectionInfo() const{ return m_connectionInfo; }

    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline bool ConnectionInfoHasBeenSet() const { return m_connectionInfoHasBeenSet; }

    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline void SetConnectionInfo(const Aws::String& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = value; }

    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline void SetConnectionInfo(Aws::String&& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = std::move(value); }

    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline void SetConnectionInfo(const char* value) { m_connectionInfoHasBeenSet = true; m_connectionInfo.assign(value); }

    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline GameServer& WithConnectionInfo(const Aws::String& value) { SetConnectionInfo(value); return *this;}

    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline GameServer& WithConnectionInfo(Aws::String&& value) { SetConnectionInfo(std::move(value)); return *this;}

    /**
     * <p>The port and IP address that must be used to establish a client connection to
     * the game server.</p>
     */
    inline GameServer& WithConnectionInfo(const char* value) { SetConnectionInfo(value); return *this;}


    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline const Aws::String& GetGameServerData() const{ return m_gameServerData; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline void SetGameServerData(const Aws::String& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = value; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline void SetGameServerData(Aws::String&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::move(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline void SetGameServerData(const char* value) { m_gameServerDataHasBeenSet = true; m_gameServerData.assign(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline GameServer& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline GameServer& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * game servers.</p>
     */
    inline GameServer& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}


    /**
     * <p>Indicates when an available game server has been reserved for gameplay but
     * has not yet started hosting a game. Once it is claimed, the game server remains
     * in <code>CLAIMED</code> status for a maximum of one minute. During this time,
     * game clients connect to the game server to start the game and trigger the game
     * server to update its utilization status. After one minute, the game server claim
     * status reverts to null.</p>
     */
    inline const GameServerClaimStatus& GetClaimStatus() const{ return m_claimStatus; }

    /**
     * <p>Indicates when an available game server has been reserved for gameplay but
     * has not yet started hosting a game. Once it is claimed, the game server remains
     * in <code>CLAIMED</code> status for a maximum of one minute. During this time,
     * game clients connect to the game server to start the game and trigger the game
     * server to update its utilization status. After one minute, the game server claim
     * status reverts to null.</p>
     */
    inline bool ClaimStatusHasBeenSet() const { return m_claimStatusHasBeenSet; }

    /**
     * <p>Indicates when an available game server has been reserved for gameplay but
     * has not yet started hosting a game. Once it is claimed, the game server remains
     * in <code>CLAIMED</code> status for a maximum of one minute. During this time,
     * game clients connect to the game server to start the game and trigger the game
     * server to update its utilization status. After one minute, the game server claim
     * status reverts to null.</p>
     */
    inline void SetClaimStatus(const GameServerClaimStatus& value) { m_claimStatusHasBeenSet = true; m_claimStatus = value; }

    /**
     * <p>Indicates when an available game server has been reserved for gameplay but
     * has not yet started hosting a game. Once it is claimed, the game server remains
     * in <code>CLAIMED</code> status for a maximum of one minute. During this time,
     * game clients connect to the game server to start the game and trigger the game
     * server to update its utilization status. After one minute, the game server claim
     * status reverts to null.</p>
     */
    inline void SetClaimStatus(GameServerClaimStatus&& value) { m_claimStatusHasBeenSet = true; m_claimStatus = std::move(value); }

    /**
     * <p>Indicates when an available game server has been reserved for gameplay but
     * has not yet started hosting a game. Once it is claimed, the game server remains
     * in <code>CLAIMED</code> status for a maximum of one minute. During this time,
     * game clients connect to the game server to start the game and trigger the game
     * server to update its utilization status. After one minute, the game server claim
     * status reverts to null.</p>
     */
    inline GameServer& WithClaimStatus(const GameServerClaimStatus& value) { SetClaimStatus(value); return *this;}

    /**
     * <p>Indicates when an available game server has been reserved for gameplay but
     * has not yet started hosting a game. Once it is claimed, the game server remains
     * in <code>CLAIMED</code> status for a maximum of one minute. During this time,
     * game clients connect to the game server to start the game and trigger the game
     * server to update its utilization status. After one minute, the game server claim
     * status reverts to null.</p>
     */
    inline GameServer& WithClaimStatus(GameServerClaimStatus&& value) { SetClaimStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * game server is available to be claimed. A game server that has been claimed
     * remains in this status until it reports game hosting activity. </p> </li> <li>
     * <p> <code>UTILIZED</code> - The game server is currently hosting a game session
     * with players. </p> </li> </ul>
     */
    inline const GameServerUtilizationStatus& GetUtilizationStatus() const{ return m_utilizationStatus; }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * game server is available to be claimed. A game server that has been claimed
     * remains in this status until it reports game hosting activity. </p> </li> <li>
     * <p> <code>UTILIZED</code> - The game server is currently hosting a game session
     * with players. </p> </li> </ul>
     */
    inline bool UtilizationStatusHasBeenSet() const { return m_utilizationStatusHasBeenSet; }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * game server is available to be claimed. A game server that has been claimed
     * remains in this status until it reports game hosting activity. </p> </li> <li>
     * <p> <code>UTILIZED</code> - The game server is currently hosting a game session
     * with players. </p> </li> </ul>
     */
    inline void SetUtilizationStatus(const GameServerUtilizationStatus& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = value; }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * game server is available to be claimed. A game server that has been claimed
     * remains in this status until it reports game hosting activity. </p> </li> <li>
     * <p> <code>UTILIZED</code> - The game server is currently hosting a game session
     * with players. </p> </li> </ul>
     */
    inline void SetUtilizationStatus(GameServerUtilizationStatus&& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = std::move(value); }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * game server is available to be claimed. A game server that has been claimed
     * remains in this status until it reports game hosting activity. </p> </li> <li>
     * <p> <code>UTILIZED</code> - The game server is currently hosting a game session
     * with players. </p> </li> </ul>
     */
    inline GameServer& WithUtilizationStatus(const GameServerUtilizationStatus& value) { SetUtilizationStatus(value); return *this;}

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * game server is available to be claimed. A game server that has been claimed
     * remains in this status until it reports game hosting activity. </p> </li> <li>
     * <p> <code>UTILIZED</code> - The game server is currently hosting a game session
     * with players. </p> </li> </ul>
     */
    inline GameServer& WithUtilizationStatus(GameServerUtilizationStatus&& value) { SetUtilizationStatus(std::move(value)); return *this;}


    /**
     * <p>Timestamp that indicates when the game server registered. The format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationTime() const{ return m_registrationTime; }

    /**
     * <p>Timestamp that indicates when the game server registered. The format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool RegistrationTimeHasBeenSet() const { return m_registrationTimeHasBeenSet; }

    /**
     * <p>Timestamp that indicates when the game server registered. The format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetRegistrationTime(const Aws::Utils::DateTime& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = value; }

    /**
     * <p>Timestamp that indicates when the game server registered. The format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetRegistrationTime(Aws::Utils::DateTime&& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = std::move(value); }

    /**
     * <p>Timestamp that indicates when the game server registered. The format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline GameServer& WithRegistrationTime(const Aws::Utils::DateTime& value) { SetRegistrationTime(value); return *this;}

    /**
     * <p>Timestamp that indicates when the game server registered. The format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline GameServer& WithRegistrationTime(Aws::Utils::DateTime&& value) { SetRegistrationTime(std::move(value)); return *this;}


    /**
     * <p>Timestamp that indicates the last time the game server was claimed. The
     * format is a number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>). This value is used to calculate when a claimed
     * game server's status should revert to null.</p>
     */
    inline const Aws::Utils::DateTime& GetLastClaimTime() const{ return m_lastClaimTime; }

    /**
     * <p>Timestamp that indicates the last time the game server was claimed. The
     * format is a number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>). This value is used to calculate when a claimed
     * game server's status should revert to null.</p>
     */
    inline bool LastClaimTimeHasBeenSet() const { return m_lastClaimTimeHasBeenSet; }

    /**
     * <p>Timestamp that indicates the last time the game server was claimed. The
     * format is a number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>). This value is used to calculate when a claimed
     * game server's status should revert to null.</p>
     */
    inline void SetLastClaimTime(const Aws::Utils::DateTime& value) { m_lastClaimTimeHasBeenSet = true; m_lastClaimTime = value; }

    /**
     * <p>Timestamp that indicates the last time the game server was claimed. The
     * format is a number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>). This value is used to calculate when a claimed
     * game server's status should revert to null.</p>
     */
    inline void SetLastClaimTime(Aws::Utils::DateTime&& value) { m_lastClaimTimeHasBeenSet = true; m_lastClaimTime = std::move(value); }

    /**
     * <p>Timestamp that indicates the last time the game server was claimed. The
     * format is a number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>). This value is used to calculate when a claimed
     * game server's status should revert to null.</p>
     */
    inline GameServer& WithLastClaimTime(const Aws::Utils::DateTime& value) { SetLastClaimTime(value); return *this;}

    /**
     * <p>Timestamp that indicates the last time the game server was claimed. The
     * format is a number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>). This value is used to calculate when a claimed
     * game server's status should revert to null.</p>
     */
    inline GameServer& WithLastClaimTime(Aws::Utils::DateTime&& value) { SetLastClaimTime(std::move(value)); return *this;}


    /**
     * <p>Timestamp that indicates the last time the game server was updated with
     * health status. The format is a number expressed in Unix time as milliseconds
     * (for example <code>"1469498468.057"</code>). After game server registration,
     * this property is only changed when a game server update specifies a health check
     * value.</p>
     */
    inline const Aws::Utils::DateTime& GetLastHealthCheckTime() const{ return m_lastHealthCheckTime; }

    /**
     * <p>Timestamp that indicates the last time the game server was updated with
     * health status. The format is a number expressed in Unix time as milliseconds
     * (for example <code>"1469498468.057"</code>). After game server registration,
     * this property is only changed when a game server update specifies a health check
     * value.</p>
     */
    inline bool LastHealthCheckTimeHasBeenSet() const { return m_lastHealthCheckTimeHasBeenSet; }

    /**
     * <p>Timestamp that indicates the last time the game server was updated with
     * health status. The format is a number expressed in Unix time as milliseconds
     * (for example <code>"1469498468.057"</code>). After game server registration,
     * this property is only changed when a game server update specifies a health check
     * value.</p>
     */
    inline void SetLastHealthCheckTime(const Aws::Utils::DateTime& value) { m_lastHealthCheckTimeHasBeenSet = true; m_lastHealthCheckTime = value; }

    /**
     * <p>Timestamp that indicates the last time the game server was updated with
     * health status. The format is a number expressed in Unix time as milliseconds
     * (for example <code>"1469498468.057"</code>). After game server registration,
     * this property is only changed when a game server update specifies a health check
     * value.</p>
     */
    inline void SetLastHealthCheckTime(Aws::Utils::DateTime&& value) { m_lastHealthCheckTimeHasBeenSet = true; m_lastHealthCheckTime = std::move(value); }

    /**
     * <p>Timestamp that indicates the last time the game server was updated with
     * health status. The format is a number expressed in Unix time as milliseconds
     * (for example <code>"1469498468.057"</code>). After game server registration,
     * this property is only changed when a game server update specifies a health check
     * value.</p>
     */
    inline GameServer& WithLastHealthCheckTime(const Aws::Utils::DateTime& value) { SetLastHealthCheckTime(value); return *this;}

    /**
     * <p>Timestamp that indicates the last time the game server was updated with
     * health status. The format is a number expressed in Unix time as milliseconds
     * (for example <code>"1469498468.057"</code>). After game server registration,
     * this property is only changed when a game server update specifies a health check
     * value.</p>
     */
    inline GameServer& WithLastHealthCheckTime(Aws::Utils::DateTime&& value) { SetLastHealthCheckTime(std::move(value)); return *this;}

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

    GameServerClaimStatus m_claimStatus;
    bool m_claimStatusHasBeenSet = false;

    GameServerUtilizationStatus m_utilizationStatus;
    bool m_utilizationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_registrationTime;
    bool m_registrationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastClaimTime;
    bool m_lastClaimTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastHealthCheckTime;
    bool m_lastHealthCheckTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
