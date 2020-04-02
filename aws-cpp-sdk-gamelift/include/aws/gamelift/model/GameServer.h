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
   * <p> <b>This data type is part of Amazon GameLift FleetIQ with game server
   * groups, which is in preview release and is subject to change.</b> </p>
   * <p>Properties describing a game server resource. </p> <p>A game server resource
   * is created by a successful call to <a>RegisterGameServer</a> and deleted by
   * calling <a>DeregisterGameServer</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServer">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameServer
  {
  public:
    GameServer();
    GameServer(Aws::Utils::Json::JsonView jsonValue);
    GameServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
     */
    inline GameServer& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
     */
    inline GameServer& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>The name identifier for the game server group where the game server is
     * located.</p>
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
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline GameServer& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline GameServer& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server. Game server IDs are
     * developer-defined and are unique across all game server groups in an AWS
     * account.</p>
     */
    inline GameServer& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}


    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
     */
    inline GameServer& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
     */
    inline GameServer& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is located.</p>
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
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline const Aws::String& GetGameServerData() const{ return m_gameServerData; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline void SetGameServerData(const Aws::String& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = value; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline void SetGameServerData(Aws::String&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::move(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline void SetGameServerData(const char* value) { m_gameServerDataHasBeenSet = true; m_gameServerData.assign(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline GameServer& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline GameServer& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service in response to requests
     * <a>ListGameServers</a> or <a>ClaimGameServer</a>. This property can be updated
     * using <a>UpdateGameServer</a>.</p>
     */
    inline GameServer& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}


    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline const Aws::String& GetCustomSortKey() const{ return m_customSortKey; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline bool CustomSortKeyHasBeenSet() const { return m_customSortKeyHasBeenSet; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline void SetCustomSortKey(const Aws::String& value) { m_customSortKeyHasBeenSet = true; m_customSortKey = value; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline void SetCustomSortKey(Aws::String&& value) { m_customSortKeyHasBeenSet = true; m_customSortKey = std::move(value); }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline void SetCustomSortKey(const char* value) { m_customSortKeyHasBeenSet = true; m_customSortKey.assign(value); }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline GameServer& WithCustomSortKey(const Aws::String& value) { SetCustomSortKey(value); return *this;}

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline GameServer& WithCustomSortKey(Aws::String&& value) { SetCustomSortKey(std::move(value)); return *this;}

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * when calling <a>ListGameServers</a>. Custom sort keys are developer-defined.
     * This property can be updated using <a>UpdateGameServer</a>.</p>
     */
    inline GameServer& WithCustomSortKey(const char* value) { SetCustomSortKey(value); return *this;}


    /**
     * <p>Indicates when an available game server has been reserved but has not yet
     * started hosting a game. Once it is claimed, game server remains in CLAIMED
     * status for a maximum of one minute. During this time, game clients must connect
     * to the game server and start the game, which triggers the game server to update
     * its utilization status. After one minute, the game server claim status reverts
     * to null.</p>
     */
    inline const GameServerClaimStatus& GetClaimStatus() const{ return m_claimStatus; }

    /**
     * <p>Indicates when an available game server has been reserved but has not yet
     * started hosting a game. Once it is claimed, game server remains in CLAIMED
     * status for a maximum of one minute. During this time, game clients must connect
     * to the game server and start the game, which triggers the game server to update
     * its utilization status. After one minute, the game server claim status reverts
     * to null.</p>
     */
    inline bool ClaimStatusHasBeenSet() const { return m_claimStatusHasBeenSet; }

    /**
     * <p>Indicates when an available game server has been reserved but has not yet
     * started hosting a game. Once it is claimed, game server remains in CLAIMED
     * status for a maximum of one minute. During this time, game clients must connect
     * to the game server and start the game, which triggers the game server to update
     * its utilization status. After one minute, the game server claim status reverts
     * to null.</p>
     */
    inline void SetClaimStatus(const GameServerClaimStatus& value) { m_claimStatusHasBeenSet = true; m_claimStatus = value; }

    /**
     * <p>Indicates when an available game server has been reserved but has not yet
     * started hosting a game. Once it is claimed, game server remains in CLAIMED
     * status for a maximum of one minute. During this time, game clients must connect
     * to the game server and start the game, which triggers the game server to update
     * its utilization status. After one minute, the game server claim status reverts
     * to null.</p>
     */
    inline void SetClaimStatus(GameServerClaimStatus&& value) { m_claimStatusHasBeenSet = true; m_claimStatus = std::move(value); }

    /**
     * <p>Indicates when an available game server has been reserved but has not yet
     * started hosting a game. Once it is claimed, game server remains in CLAIMED
     * status for a maximum of one minute. During this time, game clients must connect
     * to the game server and start the game, which triggers the game server to update
     * its utilization status. After one minute, the game server claim status reverts
     * to null.</p>
     */
    inline GameServer& WithClaimStatus(const GameServerClaimStatus& value) { SetClaimStatus(value); return *this;}

    /**
     * <p>Indicates when an available game server has been reserved but has not yet
     * started hosting a game. Once it is claimed, game server remains in CLAIMED
     * status for a maximum of one minute. During this time, game clients must connect
     * to the game server and start the game, which triggers the game server to update
     * its utilization status. After one minute, the game server claim status reverts
     * to null.</p>
     */
    inline GameServer& WithClaimStatus(GameServerClaimStatus&& value) { SetClaimStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p>AVAILABLE - The game server is
     * available to be claimed. A game server that has been claimed remains in this
     * status until it reports game hosting activity. </p> </li> <li> <p>IN_USE - The
     * game server is currently hosting a game session with players. </p> </li> </ul>
     */
    inline const GameServerUtilizationStatus& GetUtilizationStatus() const{ return m_utilizationStatus; }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p>AVAILABLE - The game server is
     * available to be claimed. A game server that has been claimed remains in this
     * status until it reports game hosting activity. </p> </li> <li> <p>IN_USE - The
     * game server is currently hosting a game session with players. </p> </li> </ul>
     */
    inline bool UtilizationStatusHasBeenSet() const { return m_utilizationStatusHasBeenSet; }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p>AVAILABLE - The game server is
     * available to be claimed. A game server that has been claimed remains in this
     * status until it reports game hosting activity. </p> </li> <li> <p>IN_USE - The
     * game server is currently hosting a game session with players. </p> </li> </ul>
     */
    inline void SetUtilizationStatus(const GameServerUtilizationStatus& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = value; }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p>AVAILABLE - The game server is
     * available to be claimed. A game server that has been claimed remains in this
     * status until it reports game hosting activity. </p> </li> <li> <p>IN_USE - The
     * game server is currently hosting a game session with players. </p> </li> </ul>
     */
    inline void SetUtilizationStatus(GameServerUtilizationStatus&& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = std::move(value); }

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p>AVAILABLE - The game server is
     * available to be claimed. A game server that has been claimed remains in this
     * status until it reports game hosting activity. </p> </li> <li> <p>IN_USE - The
     * game server is currently hosting a game session with players. </p> </li> </ul>
     */
    inline GameServer& WithUtilizationStatus(const GameServerUtilizationStatus& value) { SetUtilizationStatus(value); return *this;}

    /**
     * <p>Indicates whether the game server is currently available for new games or is
     * busy. Possible statuses include:</p> <ul> <li> <p>AVAILABLE - The game server is
     * available to be claimed. A game server that has been claimed remains in this
     * status until it reports game hosting activity. </p> </li> <li> <p>IN_USE - The
     * game server is currently hosting a game session with players. </p> </li> </ul>
     */
    inline GameServer& WithUtilizationStatus(GameServerUtilizationStatus&& value) { SetUtilizationStatus(std::move(value)); return *this;}


    /**
     * <p>Time stamp indicating when the game server resource was created with a
     * <a>RegisterGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationTime() const{ return m_registrationTime; }

    /**
     * <p>Time stamp indicating when the game server resource was created with a
     * <a>RegisterGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057").</p>
     */
    inline bool RegistrationTimeHasBeenSet() const { return m_registrationTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating when the game server resource was created with a
     * <a>RegisterGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057").</p>
     */
    inline void SetRegistrationTime(const Aws::Utils::DateTime& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = value; }

    /**
     * <p>Time stamp indicating when the game server resource was created with a
     * <a>RegisterGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057").</p>
     */
    inline void SetRegistrationTime(Aws::Utils::DateTime&& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when the game server resource was created with a
     * <a>RegisterGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057").</p>
     */
    inline GameServer& WithRegistrationTime(const Aws::Utils::DateTime& value) { SetRegistrationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when the game server resource was created with a
     * <a>RegisterGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057").</p>
     */
    inline GameServer& WithRegistrationTime(Aws::Utils::DateTime&& value) { SetRegistrationTime(std::move(value)); return *this;}


    /**
     * <p>Time stamp indicating the last time the game server was claimed with a
     * <a>ClaimGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057"). This value is used to calculate
     * when the game server's claim status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastClaimTime() const{ return m_lastClaimTime; }

    /**
     * <p>Time stamp indicating the last time the game server was claimed with a
     * <a>ClaimGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057"). This value is used to calculate
     * when the game server's claim status.</p>
     */
    inline bool LastClaimTimeHasBeenSet() const { return m_lastClaimTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating the last time the game server was claimed with a
     * <a>ClaimGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057"). This value is used to calculate
     * when the game server's claim status.</p>
     */
    inline void SetLastClaimTime(const Aws::Utils::DateTime& value) { m_lastClaimTimeHasBeenSet = true; m_lastClaimTime = value; }

    /**
     * <p>Time stamp indicating the last time the game server was claimed with a
     * <a>ClaimGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057"). This value is used to calculate
     * when the game server's claim status.</p>
     */
    inline void SetLastClaimTime(Aws::Utils::DateTime&& value) { m_lastClaimTimeHasBeenSet = true; m_lastClaimTime = std::move(value); }

    /**
     * <p>Time stamp indicating the last time the game server was claimed with a
     * <a>ClaimGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057"). This value is used to calculate
     * when the game server's claim status.</p>
     */
    inline GameServer& WithLastClaimTime(const Aws::Utils::DateTime& value) { SetLastClaimTime(value); return *this;}

    /**
     * <p>Time stamp indicating the last time the game server was claimed with a
     * <a>ClaimGameServer</a> request. Format is a number expressed in Unix time as
     * milliseconds (for example "1469498468.057"). This value is used to calculate
     * when the game server's claim status.</p>
     */
    inline GameServer& WithLastClaimTime(Aws::Utils::DateTime&& value) { SetLastClaimTime(std::move(value)); return *this;}


    /**
     * <p>Time stamp indicating the last time the game server was updated with health
     * status using an <a>UpdateGameServer</a> request. Format is a number expressed in
     * Unix time as milliseconds (for example "1469498468.057"). After game server
     * registration, this property is only changed when a game server update specifies
     * a health check value.</p>
     */
    inline const Aws::Utils::DateTime& GetLastHealthCheckTime() const{ return m_lastHealthCheckTime; }

    /**
     * <p>Time stamp indicating the last time the game server was updated with health
     * status using an <a>UpdateGameServer</a> request. Format is a number expressed in
     * Unix time as milliseconds (for example "1469498468.057"). After game server
     * registration, this property is only changed when a game server update specifies
     * a health check value.</p>
     */
    inline bool LastHealthCheckTimeHasBeenSet() const { return m_lastHealthCheckTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating the last time the game server was updated with health
     * status using an <a>UpdateGameServer</a> request. Format is a number expressed in
     * Unix time as milliseconds (for example "1469498468.057"). After game server
     * registration, this property is only changed when a game server update specifies
     * a health check value.</p>
     */
    inline void SetLastHealthCheckTime(const Aws::Utils::DateTime& value) { m_lastHealthCheckTimeHasBeenSet = true; m_lastHealthCheckTime = value; }

    /**
     * <p>Time stamp indicating the last time the game server was updated with health
     * status using an <a>UpdateGameServer</a> request. Format is a number expressed in
     * Unix time as milliseconds (for example "1469498468.057"). After game server
     * registration, this property is only changed when a game server update specifies
     * a health check value.</p>
     */
    inline void SetLastHealthCheckTime(Aws::Utils::DateTime&& value) { m_lastHealthCheckTimeHasBeenSet = true; m_lastHealthCheckTime = std::move(value); }

    /**
     * <p>Time stamp indicating the last time the game server was updated with health
     * status using an <a>UpdateGameServer</a> request. Format is a number expressed in
     * Unix time as milliseconds (for example "1469498468.057"). After game server
     * registration, this property is only changed when a game server update specifies
     * a health check value.</p>
     */
    inline GameServer& WithLastHealthCheckTime(const Aws::Utils::DateTime& value) { SetLastHealthCheckTime(value); return *this;}

    /**
     * <p>Time stamp indicating the last time the game server was updated with health
     * status using an <a>UpdateGameServer</a> request. Format is a number expressed in
     * Unix time as milliseconds (for example "1469498468.057"). After game server
     * registration, this property is only changed when a game server update specifies
     * a health check value.</p>
     */
    inline GameServer& WithLastHealthCheckTime(Aws::Utils::DateTime&& value) { SetLastHealthCheckTime(std::move(value)); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::String m_gameServerGroupArn;
    bool m_gameServerGroupArnHasBeenSet;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_connectionInfo;
    bool m_connectionInfoHasBeenSet;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet;

    Aws::String m_customSortKey;
    bool m_customSortKeyHasBeenSet;

    GameServerClaimStatus m_claimStatus;
    bool m_claimStatusHasBeenSet;

    GameServerUtilizationStatus m_utilizationStatus;
    bool m_utilizationStatusHasBeenSet;

    Aws::Utils::DateTime m_registrationTime;
    bool m_registrationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastClaimTime;
    bool m_lastClaimTimeHasBeenSet;

    Aws::Utils::DateTime m_lastHealthCheckTime;
    bool m_lastHealthCheckTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
