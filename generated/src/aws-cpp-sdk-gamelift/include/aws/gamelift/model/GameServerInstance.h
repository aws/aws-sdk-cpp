/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerInstanceStatus.h>
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
   * groups.</b> </p> <p> Additional properties, including status, that describe an
   * EC2 instance in a game server group. Instance configurations are set with game
   * server group properties (see <code>DescribeGameServerGroup</code> and with the
   * EC2 launch template that was used when creating the game server group. </p>
   * <p>Retrieve game server instances for a game server group by calling
   * <code>DescribeGameServerInstances</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerInstance">AWS
   * API Reference</a></p>
   */
  class GameServerInstance
  {
  public:
    AWS_GAMELIFT_API GameServerInstance();
    AWS_GAMELIFT_API GameServerInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A developer-defined identifier for the game server group that includes the
     * game server instance. The name is unique for each Region in each Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }
    inline GameServerInstance& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}
    inline GameServerInstance& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}
    inline GameServerInstance& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generated unique identifier for the game server group that includes the
     * game server instance. </p>
     */
    inline const Aws::String& GetGameServerGroupArn() const{ return m_gameServerGroupArn; }
    inline bool GameServerGroupArnHasBeenSet() const { return m_gameServerGroupArnHasBeenSet; }
    inline void SetGameServerGroupArn(const Aws::String& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = value; }
    inline void SetGameServerGroupArn(Aws::String&& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = std::move(value); }
    inline void SetGameServerGroupArn(const char* value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn.assign(value); }
    inline GameServerInstance& WithGameServerGroupArn(const Aws::String& value) { SetGameServerGroupArn(value); return *this;}
    inline GameServerInstance& WithGameServerGroupArn(Aws::String&& value) { SetGameServerGroupArn(std::move(value)); return *this;}
    inline GameServerInstance& WithGameServerGroupArn(const char* value) { SetGameServerGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata. EC2 instance IDs use a 17-character
     * format, for example: <code>i-1234567890abcdef0</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline GameServerInstance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GameServerInstance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GameServerInstance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the game server instance</p>
     */
    inline const GameServerInstanceStatus& GetInstanceStatus() const{ return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    inline void SetInstanceStatus(const GameServerInstanceStatus& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }
    inline void SetInstanceStatus(GameServerInstanceStatus&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }
    inline GameServerInstance& WithInstanceStatus(const GameServerInstanceStatus& value) { SetInstanceStatus(value); return *this;}
    inline GameServerInstance& WithInstanceStatus(GameServerInstanceStatus&& value) { SetInstanceStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerGroupArn;
    bool m_gameServerGroupArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    GameServerInstanceStatus m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
