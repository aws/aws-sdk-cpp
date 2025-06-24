/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameServerProtectionPolicy.h>
#include <aws/gamelift/model/BalancingStrategy.h>
#include <aws/gamelift/model/InstanceDefinition.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateGameServerGroupRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateGameServerGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameServerGroup"; }

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
    UpdateGameServerGroupRequest& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
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
    UpdateGameServerGroupRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift Servers FleetIQ. This updated list
     * replaces the entire current list of instance definitions for the game server
     * group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline const Aws::Vector<InstanceDefinition>& GetInstanceDefinitions() const { return m_instanceDefinitions; }
    inline bool InstanceDefinitionsHasBeenSet() const { return m_instanceDefinitionsHasBeenSet; }
    template<typename InstanceDefinitionsT = Aws::Vector<InstanceDefinition>>
    void SetInstanceDefinitions(InstanceDefinitionsT&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = std::forward<InstanceDefinitionsT>(value); }
    template<typename InstanceDefinitionsT = Aws::Vector<InstanceDefinition>>
    UpdateGameServerGroupRequest& WithInstanceDefinitions(InstanceDefinitionsT&& value) { SetInstanceDefinitions(std::forward<InstanceDefinitionsT>(value)); return *this;}
    template<typename InstanceDefinitionsT = InstanceDefinition>
    UpdateGameServerGroupRequest& AddInstanceDefinitions(InstanceDefinitionsT&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.emplace_back(std::forward<InstanceDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running might be terminated during a scale-down event, causing players
     * to be dropped from the game. Protected instances cannot be terminated while
     * there are active game servers running except in the event of a forced game
     * server group deletion (see ). An exception to this is with Spot Instances, which
     * can be terminated by Amazon Web Services regardless of protection status. This
     * property is set to <code>NO_PROTECTION</code> by default.</p>
     */
    inline GameServerProtectionPolicy GetGameServerProtectionPolicy() const { return m_gameServerProtectionPolicy; }
    inline bool GameServerProtectionPolicyHasBeenSet() const { return m_gameServerProtectionPolicyHasBeenSet; }
    inline void SetGameServerProtectionPolicy(GameServerProtectionPolicy value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = value; }
    inline UpdateGameServerGroupRequest& WithGameServerProtectionPolicy(GameServerProtectionPolicy value) { SetGameServerProtectionPolicy(value); return *this;}
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
    inline UpdateGameServerGroupRequest& WithBalancingStrategy(BalancingStrategy value) { SetBalancingStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<InstanceDefinition> m_instanceDefinitions;
    bool m_instanceDefinitionsHasBeenSet = false;

    GameServerProtectionPolicy m_gameServerProtectionPolicy{GameServerProtectionPolicy::NOT_SET};
    bool m_gameServerProtectionPolicyHasBeenSet = false;

    BalancingStrategy m_balancingStrategy{BalancingStrategy::NOT_SET};
    bool m_balancingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
