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
  class ResumeGameServerGroupRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ResumeGameServerGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResumeGameServerGroup"; }

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
    ResumeGameServerGroupRequest& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activity to resume for this game server group.</p>
     */
    inline const Aws::Vector<GameServerGroupAction>& GetResumeActions() const { return m_resumeActions; }
    inline bool ResumeActionsHasBeenSet() const { return m_resumeActionsHasBeenSet; }
    template<typename ResumeActionsT = Aws::Vector<GameServerGroupAction>>
    void SetResumeActions(ResumeActionsT&& value) { m_resumeActionsHasBeenSet = true; m_resumeActions = std::forward<ResumeActionsT>(value); }
    template<typename ResumeActionsT = Aws::Vector<GameServerGroupAction>>
    ResumeGameServerGroupRequest& WithResumeActions(ResumeActionsT&& value) { SetResumeActions(std::forward<ResumeActionsT>(value)); return *this;}
    inline ResumeGameServerGroupRequest& AddResumeActions(GameServerGroupAction value) { m_resumeActionsHasBeenSet = true; m_resumeActions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::Vector<GameServerGroupAction> m_resumeActions;
    bool m_resumeActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
