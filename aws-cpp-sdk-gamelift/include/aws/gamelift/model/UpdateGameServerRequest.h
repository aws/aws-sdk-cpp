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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerUtilizationStatus.h>
#include <aws/gamelift/model/GameServerHealthCheck.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API UpdateGameServerRequest : public GameLiftRequest
  {
  public:
    UpdateGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline UpdateGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline UpdateGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the game server group where the game server is running. Use
     * either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline UpdateGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline UpdateGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline UpdateGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the game server to be updated.</p>
     */
    inline UpdateGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}


    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline const Aws::String& GetGameServerData() const{ return m_gameServerData; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline void SetGameServerData(const Aws::String& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = value; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline void SetGameServerData(Aws::String&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::move(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline void SetGameServerData(const char* value) { m_gameServerDataHasBeenSet = true; m_gameServerData.assign(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline UpdateGameServerRequest& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline UpdateGameServerRequest& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>DescribeGameServer</a> or <a>ClaimGameServer</a>. </p>
     */
    inline UpdateGameServerRequest& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}


    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline const Aws::String& GetCustomSortKey() const{ return m_customSortKey; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline bool CustomSortKeyHasBeenSet() const { return m_customSortKeyHasBeenSet; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline void SetCustomSortKey(const Aws::String& value) { m_customSortKeyHasBeenSet = true; m_customSortKey = value; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline void SetCustomSortKey(Aws::String&& value) { m_customSortKeyHasBeenSet = true; m_customSortKey = std::move(value); }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline void SetCustomSortKey(const char* value) { m_customSortKeyHasBeenSet = true; m_customSortKey.assign(value); }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline UpdateGameServerRequest& WithCustomSortKey(const Aws::String& value) { SetCustomSortKey(value); return *this;}

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline UpdateGameServerRequest& WithCustomSortKey(Aws::String&& value) { SetCustomSortKey(std::move(value)); return *this;}

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline UpdateGameServerRequest& WithCustomSortKey(const char* value) { SetCustomSortKey(value); return *this;}


    /**
     * <p>Indicates whether the game server is available or is currently hosting
     * gameplay.</p>
     */
    inline const GameServerUtilizationStatus& GetUtilizationStatus() const{ return m_utilizationStatus; }

    /**
     * <p>Indicates whether the game server is available or is currently hosting
     * gameplay.</p>
     */
    inline bool UtilizationStatusHasBeenSet() const { return m_utilizationStatusHasBeenSet; }

    /**
     * <p>Indicates whether the game server is available or is currently hosting
     * gameplay.</p>
     */
    inline void SetUtilizationStatus(const GameServerUtilizationStatus& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = value; }

    /**
     * <p>Indicates whether the game server is available or is currently hosting
     * gameplay.</p>
     */
    inline void SetUtilizationStatus(GameServerUtilizationStatus&& value) { m_utilizationStatusHasBeenSet = true; m_utilizationStatus = std::move(value); }

    /**
     * <p>Indicates whether the game server is available or is currently hosting
     * gameplay.</p>
     */
    inline UpdateGameServerRequest& WithUtilizationStatus(const GameServerUtilizationStatus& value) { SetUtilizationStatus(value); return *this;}

    /**
     * <p>Indicates whether the game server is available or is currently hosting
     * gameplay.</p>
     */
    inline UpdateGameServerRequest& WithUtilizationStatus(GameServerUtilizationStatus&& value) { SetUtilizationStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates health status of the game server. An update that explicitly
     * includes this parameter updates the game server's <i>LastHealthCheckTime</i>
     * time stamp. </p>
     */
    inline const GameServerHealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>Indicates health status of the game server. An update that explicitly
     * includes this parameter updates the game server's <i>LastHealthCheckTime</i>
     * time stamp. </p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>Indicates health status of the game server. An update that explicitly
     * includes this parameter updates the game server's <i>LastHealthCheckTime</i>
     * time stamp. </p>
     */
    inline void SetHealthCheck(const GameServerHealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>Indicates health status of the game server. An update that explicitly
     * includes this parameter updates the game server's <i>LastHealthCheckTime</i>
     * time stamp. </p>
     */
    inline void SetHealthCheck(GameServerHealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>Indicates health status of the game server. An update that explicitly
     * includes this parameter updates the game server's <i>LastHealthCheckTime</i>
     * time stamp. </p>
     */
    inline UpdateGameServerRequest& WithHealthCheck(const GameServerHealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>Indicates health status of the game server. An update that explicitly
     * includes this parameter updates the game server's <i>LastHealthCheckTime</i>
     * time stamp. </p>
     */
    inline UpdateGameServerRequest& WithHealthCheck(GameServerHealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet;

    Aws::String m_customSortKey;
    bool m_customSortKeyHasBeenSet;

    GameServerUtilizationStatus m_utilizationStatus;
    bool m_utilizationStatusHasBeenSet;

    GameServerHealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
