/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/BalancingStrategy.h>
#include <aws/gamelift/model/GameServerProtectionPolicy.h>
#include <aws/gamelift/model/GameServerGroupStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/InstanceDefinition.h>
#include <aws/gamelift/model/GameServerGroupAction.h>
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
   * server groups.</b> </p> <p>Properties that describe a game server group
   * resource. A game server group manages certain properties related to a
   * corresponding Amazon EC2 Auto Scaling group. </p> <p>A game server group is
   * created by a successful call to <code>CreateGameServerGroup</code> and deleted
   * by calling <code>DeleteGameServerGroup</code>. Game server group activity can be
   * temporarily suspended and resumed by calling <code>SuspendGameServerGroup</code>
   * and <code>ResumeGameServerGroup</code>, respectively. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerGroup">AWS
   * API Reference</a></p>
   */
  class GameServerGroup
  {
  public:
    AWS_GAMELIFT_API GameServerGroup() = default;
    AWS_GAMELIFT_API GameServerGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServerGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * for each Region in each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const { return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    template<typename GameServerGroupNameT = Aws::String>
    void SetGameServerGroupName(GameServerGroupNameT&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::forward<GameServerGroupNameT>(value); }
    template<typename GameServerGroupNameT = Aws::String>
    GameServerGroup& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline const Aws::String& GetGameServerGroupArn() const { return m_gameServerGroupArn; }
    inline bool GameServerGroupArnHasBeenSet() const { return m_gameServerGroupArnHasBeenSet; }
    template<typename GameServerGroupArnT = Aws::String>
    void SetGameServerGroupArn(GameServerGroupArnT&& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = std::forward<GameServerGroupArnT>(value); }
    template<typename GameServerGroupArnT = Aws::String>
    GameServerGroup& WithGameServerGroupArn(GameServerGroupArnT&& value) { SetGameServerGroupArn(std::forward<GameServerGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift Servers to access your Amazon EC2
     * Auto Scaling groups.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GameServerGroup& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of Amazon EC2 instance types that Amazon GameLift Servers FleetIQ can
     * use when balancing and automatically scaling instances in the corresponding Auto
     * Scaling group. </p>
     */
    inline const Aws::Vector<InstanceDefinition>& GetInstanceDefinitions() const { return m_instanceDefinitions; }
    inline bool InstanceDefinitionsHasBeenSet() const { return m_instanceDefinitionsHasBeenSet; }
    template<typename InstanceDefinitionsT = Aws::Vector<InstanceDefinition>>
    void SetInstanceDefinitions(InstanceDefinitionsT&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = std::forward<InstanceDefinitionsT>(value); }
    template<typename InstanceDefinitionsT = Aws::Vector<InstanceDefinition>>
    GameServerGroup& WithInstanceDefinitions(InstanceDefinitionsT&& value) { SetInstanceDefinitions(std::forward<InstanceDefinitionsT>(value)); return *this;}
    template<typename InstanceDefinitionsT = InstanceDefinition>
    GameServerGroup& AddInstanceDefinitions(InstanceDefinitionsT&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.emplace_back(std::forward<InstanceDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates how Amazon GameLift Servers FleetIQ balances the use of Spot
     * Instances and On-Demand Instances in the game server group. Method options
     * include the following:</p> <ul> <li> <p> <code>SPOT_ONLY</code> - Only Spot
     * Instances are used in the game server group. If Spot Instances are unavailable
     * or not viable for game hosting, the game server group provides no hosting
     * capacity until Spot Instances can again be used. Until then, no new instances
     * are started, and the existing nonviable Spot Instances are terminated (after
     * current gameplay ends) and are not replaced.</p> </li> <li> <p>
     * <code>SPOT_PREFERRED</code> - (default value) Spot Instances are used whenever
     * available in the game server group. If Spot Instances are unavailable, the game
     * server group continues to provide hosting capacity by falling back to On-Demand
     * Instances. Existing nonviable Spot Instances are terminated (after current
     * gameplay ends) and are replaced with new On-Demand Instances.</p> </li> <li> <p>
     * <code>ON_DEMAND_ONLY</code> - Only On-Demand Instances are used in the game
     * server group. No Spot Instances are used, even when available, while this
     * balancing strategy is in force.</p> </li> </ul>
     */
    inline BalancingStrategy GetBalancingStrategy() const { return m_balancingStrategy; }
    inline bool BalancingStrategyHasBeenSet() const { return m_balancingStrategyHasBeenSet; }
    inline void SetBalancingStrategy(BalancingStrategy value) { m_balancingStrategyHasBeenSet = true; m_balancingStrategy = value; }
    inline GameServerGroup& WithBalancingStrategy(BalancingStrategy value) { SetBalancingStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running might be terminated during a scale-down event, causing players
     * to be dropped from the game. Protected instances cannot be terminated while
     * there are active game servers running except in the event of a forced game
     * server group deletion (see ). An exception to this is with Spot Instances, which
     * can be terminated by Amazon Web Services regardless of protection status. </p>
     */
    inline GameServerProtectionPolicy GetGameServerProtectionPolicy() const { return m_gameServerProtectionPolicy; }
    inline bool GameServerProtectionPolicyHasBeenSet() const { return m_gameServerProtectionPolicyHasBeenSet; }
    inline void SetGameServerProtectionPolicy(GameServerProtectionPolicy value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = value; }
    inline GameServerGroup& WithGameServerProtectionPolicy(GameServerProtectionPolicy value) { SetGameServerProtectionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generated unique ID for the Amazon EC2 Auto Scaling group that is
     * associated with this game server group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupArn() const { return m_autoScalingGroupArn; }
    inline bool AutoScalingGroupArnHasBeenSet() const { return m_autoScalingGroupArnHasBeenSet; }
    template<typename AutoScalingGroupArnT = Aws::String>
    void SetAutoScalingGroupArn(AutoScalingGroupArnT&& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = std::forward<AutoScalingGroupArnT>(value); }
    template<typename AutoScalingGroupArnT = Aws::String>
    GameServerGroup& WithAutoScalingGroupArn(AutoScalingGroupArnT&& value) { SetAutoScalingGroupArn(std::forward<AutoScalingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the game server group. Possible statuses include:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon GameLift Servers FleetIQ has validated
     * the <code>CreateGameServerGroup()</code> request. </p> </li> <li> <p>
     * <code>ACTIVATING</code> - Amazon GameLift Servers FleetIQ is setting up a game
     * server group, which includes creating an Auto Scaling group in your Amazon Web
     * Services account. </p> </li> <li> <p> <code>ACTIVE</code> - The game server
     * group has been successfully created. </p> </li> <li> <p>
     * <code>DELETE_SCHEDULED</code> - A request to delete the game server group has
     * been received. </p> </li> <li> <p> <code>DELETING</code> - Amazon GameLift
     * Servers FleetIQ has received a valid <code>DeleteGameServerGroup()</code>
     * request and is processing it. Amazon GameLift Servers FleetIQ must first
     * complete and release hosts before it deletes the Auto Scaling group and the game
     * server group. </p> </li> <li> <p> <code>DELETED</code> - The game server group
     * has been successfully deleted. </p> </li> <li> <p> <code>ERROR</code> - The
     * asynchronous processes of activating or deleting a game server group has failed,
     * resulting in an error state.</p> </li> </ul>
     */
    inline GameServerGroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GameServerGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GameServerGroup& WithStatus(GameServerGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the current game server group status. This
     * information might provide additional insight on groups that are in
     * <code>ERROR</code> status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GameServerGroup& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline const Aws::Vector<GameServerGroupAction>& GetSuspendedActions() const { return m_suspendedActions; }
    inline bool SuspendedActionsHasBeenSet() const { return m_suspendedActionsHasBeenSet; }
    template<typename SuspendedActionsT = Aws::Vector<GameServerGroupAction>>
    void SetSuspendedActions(SuspendedActionsT&& value) { m_suspendedActionsHasBeenSet = true; m_suspendedActions = std::forward<SuspendedActionsT>(value); }
    template<typename SuspendedActionsT = Aws::Vector<GameServerGroupAction>>
    GameServerGroup& WithSuspendedActions(SuspendedActionsT&& value) { SetSuspendedActions(std::forward<SuspendedActionsT>(value)); return *this;}
    inline GameServerGroup& AddSuspendedActions(GameServerGroupAction value) { m_suspendedActionsHasBeenSet = true; m_suspendedActions.push_back(value); return *this; }
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
    GameServerGroup& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this game server group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    GameServerGroup& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerGroupArn;
    bool m_gameServerGroupArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<InstanceDefinition> m_instanceDefinitions;
    bool m_instanceDefinitionsHasBeenSet = false;

    BalancingStrategy m_balancingStrategy{BalancingStrategy::NOT_SET};
    bool m_balancingStrategyHasBeenSet = false;

    GameServerProtectionPolicy m_gameServerProtectionPolicy{GameServerProtectionPolicy::NOT_SET};
    bool m_gameServerProtectionPolicyHasBeenSet = false;

    Aws::String m_autoScalingGroupArn;
    bool m_autoScalingGroupArnHasBeenSet = false;

    GameServerGroupStatus m_status{GameServerGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<GameServerGroupAction> m_suspendedActions;
    bool m_suspendedActionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
