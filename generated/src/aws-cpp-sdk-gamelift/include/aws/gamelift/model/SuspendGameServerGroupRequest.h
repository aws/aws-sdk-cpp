/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameServerGroupAction.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class SuspendGameServerGroupRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API SuspendGameServerGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SuspendGameServerGroup"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const { return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    template<typename GameServerGroupNameT = Aws::String>
    void SetGameServerGroupName(GameServerGroupNameT&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::forward<GameServerGroupNameT>(value); }
    template<typename GameServerGroupNameT = Aws::String>
    SuspendGameServerGroupRequest& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activity to suspend for this game server group.</p>
     */
    inline const Aws::Vector<GameServerGroupAction>& GetSuspendActions() const { return m_suspendActions; }
    inline bool SuspendActionsHasBeenSet() const { return m_suspendActionsHasBeenSet; }
    template<typename SuspendActionsT = Aws::Vector<GameServerGroupAction>>
    void SetSuspendActions(SuspendActionsT&& value) { m_suspendActionsHasBeenSet = true; m_suspendActions = std::forward<SuspendActionsT>(value); }
    template<typename SuspendActionsT = Aws::Vector<GameServerGroupAction>>
    SuspendGameServerGroupRequest& WithSuspendActions(SuspendActionsT&& value) { SetSuspendActions(std::forward<SuspendActionsT>(value)); return *this;}
    inline SuspendGameServerGroupRequest& AddSuspendActions(GameServerGroupAction value) { m_suspendActionsHasBeenSet = true; m_suspendActions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::Vector<GameServerGroupAction> m_suspendActions;
    bool m_suspendActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
