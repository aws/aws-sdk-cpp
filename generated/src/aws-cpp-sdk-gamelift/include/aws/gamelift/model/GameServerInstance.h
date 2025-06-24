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
   * <p> <b>This data type is used with the Amazon GameLift Servers FleetIQ and game
   * server groups.</b> </p> <p> Additional properties, including status, that
   * describe an EC2 instance in a game server group. Instance configurations are set
   * with game server group properties (see <code>DescribeGameServerGroup</code> and
   * with the EC2 launch template that was used when creating the game server group.
   * </p> <p>Retrieve game server instances for a game server group by calling
   * <code>DescribeGameServerInstances</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerInstance">AWS
   * API Reference</a></p>
   */
  class GameServerInstance
  {
  public:
    AWS_GAMELIFT_API GameServerInstance() = default;
    AWS_GAMELIFT_API GameServerInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A developer-defined identifier for the game server group that includes the
     * game server instance. The name is unique for each Region in each Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const { return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    template<typename GameServerGroupNameT = Aws::String>
    void SetGameServerGroupName(GameServerGroupNameT&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::forward<GameServerGroupNameT>(value); }
    template<typename GameServerGroupNameT = Aws::String>
    GameServerInstance& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generated unique identifier for the game server group that includes the
     * game server instance. </p>
     */
    inline const Aws::String& GetGameServerGroupArn() const { return m_gameServerGroupArn; }
    inline bool GameServerGroupArnHasBeenSet() const { return m_gameServerGroupArnHasBeenSet; }
    template<typename GameServerGroupArnT = Aws::String>
    void SetGameServerGroupArn(GameServerGroupArnT&& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = std::forward<GameServerGroupArnT>(value); }
    template<typename GameServerGroupArnT = Aws::String>
    GameServerInstance& WithGameServerGroupArn(GameServerGroupArnT&& value) { SetGameServerGroupArn(std::forward<GameServerGroupArnT>(value)); return *this;}
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
    GameServerInstance& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the game server instance</p>
     */
    inline GameServerInstanceStatus GetInstanceStatus() const { return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    inline void SetInstanceStatus(GameServerInstanceStatus value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }
    inline GameServerInstance& WithInstanceStatus(GameServerInstanceStatus value) { SetInstanceStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerGroupArn;
    bool m_gameServerGroupArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    GameServerInstanceStatus m_instanceStatus{GameServerInstanceStatus::NOT_SET};
    bool m_instanceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
