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
   * <p> <b>This data type is part of Amazon GameLift FleetIQ with game server
   * groups, which is in preview release and is subject to change.</b> </p>
   * <p>Properties describing a game server group resource. A game server group
   * manages certain properties of a corresponding EC2 Auto Scaling group. </p> <p>A
   * game server group is created by a successful call to
   * <a>CreateGameServerGroup</a> and deleted by calling
   * <a>DeleteGameServerGroup</a>. Game server group activity can be temporarily
   * suspended and resumed by calling <a>SuspendGameServerGroup</a> and
   * <a>ResumeGameServerGroup</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerGroup">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameServerGroup
  {
  public:
    GameServerGroup();
    GameServerGroup(Aws::Utils::Json::JsonView jsonValue);
    GameServerGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline GameServerGroup& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline GameServerGroup& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>A developer-defined identifier for the game server group. The name is unique
     * per Region per AWS account.</p>
     */
    inline GameServerGroup& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline const Aws::String& GetGameServerGroupArn() const{ return m_gameServerGroupArn; }

    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline bool GameServerGroupArnHasBeenSet() const { return m_gameServerGroupArnHasBeenSet; }

    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline void SetGameServerGroupArn(const Aws::String& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = value; }

    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline void SetGameServerGroupArn(Aws::String&& value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn = std::move(value); }

    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline void SetGameServerGroupArn(const char* value) { m_gameServerGroupArnHasBeenSet = true; m_gameServerGroupArn.assign(value); }

    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline GameServerGroup& WithGameServerGroupArn(const Aws::String& value) { SetGameServerGroupArn(value); return *this;}

    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline GameServerGroup& WithGameServerGroupArn(Aws::String&& value) { SetGameServerGroupArn(std::move(value)); return *this;}

    /**
     * <p>A generated unique ID for the game server group.</p>
     */
    inline GameServerGroup& WithGameServerGroupArn(const char* value) { SetGameServerGroupArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline GameServerGroup& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline GameServerGroup& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline GameServerGroup& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline const Aws::Vector<InstanceDefinition>& GetInstanceDefinitions() const{ return m_instanceDefinitions; }

    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline bool InstanceDefinitionsHasBeenSet() const { return m_instanceDefinitionsHasBeenSet; }

    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline void SetInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = value; }

    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline void SetInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = std::move(value); }

    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline GameServerGroup& WithInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { SetInstanceDefinitions(value); return *this;}

    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline GameServerGroup& WithInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { SetInstanceDefinitions(std::move(value)); return *this;}

    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline GameServerGroup& AddInstanceDefinitions(const InstanceDefinition& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(value); return *this; }

    /**
     * <p>The set of EC2 instance types that GameLift FleetIQ can use when rebalancing
     * and autoscaling instances in the group. </p>
     */
    inline GameServerGroup& AddInstanceDefinitions(InstanceDefinition&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The fallback balancing method to use for the game server group when Spot
     * instances in a Region become unavailable or are not viable for game hosting.
     * Once triggered, this method remains active until Spot instances can once again
     * be used. Method options include:</p> <ul> <li> <p>SPOT_ONLY -- If Spot instances
     * are unavailable, the game server group provides no hosting capacity. No new
     * instances are started, and the existing nonviable Spot instances are terminated
     * (once current gameplay ends) and not replaced.</p> </li> <li> <p>SPOT_PREFERRED
     * -- If Spot instances are unavailable, the game server group continues to provide
     * hosting capacity by using On-Demand instances. Existing nonviable Spot instances
     * are terminated (once current gameplay ends) and replaced with new On-Demand
     * instances. </p> </li> </ul>
     */
    inline const BalancingStrategy& GetBalancingStrategy() const{ return m_balancingStrategy; }

    /**
     * <p>The fallback balancing method to use for the game server group when Spot
     * instances in a Region become unavailable or are not viable for game hosting.
     * Once triggered, this method remains active until Spot instances can once again
     * be used. Method options include:</p> <ul> <li> <p>SPOT_ONLY -- If Spot instances
     * are unavailable, the game server group provides no hosting capacity. No new
     * instances are started, and the existing nonviable Spot instances are terminated
     * (once current gameplay ends) and not replaced.</p> </li> <li> <p>SPOT_PREFERRED
     * -- If Spot instances are unavailable, the game server group continues to provide
     * hosting capacity by using On-Demand instances. Existing nonviable Spot instances
     * are terminated (once current gameplay ends) and replaced with new On-Demand
     * instances. </p> </li> </ul>
     */
    inline bool BalancingStrategyHasBeenSet() const { return m_balancingStrategyHasBeenSet; }

    /**
     * <p>The fallback balancing method to use for the game server group when Spot
     * instances in a Region become unavailable or are not viable for game hosting.
     * Once triggered, this method remains active until Spot instances can once again
     * be used. Method options include:</p> <ul> <li> <p>SPOT_ONLY -- If Spot instances
     * are unavailable, the game server group provides no hosting capacity. No new
     * instances are started, and the existing nonviable Spot instances are terminated
     * (once current gameplay ends) and not replaced.</p> </li> <li> <p>SPOT_PREFERRED
     * -- If Spot instances are unavailable, the game server group continues to provide
     * hosting capacity by using On-Demand instances. Existing nonviable Spot instances
     * are terminated (once current gameplay ends) and replaced with new On-Demand
     * instances. </p> </li> </ul>
     */
    inline void SetBalancingStrategy(const BalancingStrategy& value) { m_balancingStrategyHasBeenSet = true; m_balancingStrategy = value; }

    /**
     * <p>The fallback balancing method to use for the game server group when Spot
     * instances in a Region become unavailable or are not viable for game hosting.
     * Once triggered, this method remains active until Spot instances can once again
     * be used. Method options include:</p> <ul> <li> <p>SPOT_ONLY -- If Spot instances
     * are unavailable, the game server group provides no hosting capacity. No new
     * instances are started, and the existing nonviable Spot instances are terminated
     * (once current gameplay ends) and not replaced.</p> </li> <li> <p>SPOT_PREFERRED
     * -- If Spot instances are unavailable, the game server group continues to provide
     * hosting capacity by using On-Demand instances. Existing nonviable Spot instances
     * are terminated (once current gameplay ends) and replaced with new On-Demand
     * instances. </p> </li> </ul>
     */
    inline void SetBalancingStrategy(BalancingStrategy&& value) { m_balancingStrategyHasBeenSet = true; m_balancingStrategy = std::move(value); }

    /**
     * <p>The fallback balancing method to use for the game server group when Spot
     * instances in a Region become unavailable or are not viable for game hosting.
     * Once triggered, this method remains active until Spot instances can once again
     * be used. Method options include:</p> <ul> <li> <p>SPOT_ONLY -- If Spot instances
     * are unavailable, the game server group provides no hosting capacity. No new
     * instances are started, and the existing nonviable Spot instances are terminated
     * (once current gameplay ends) and not replaced.</p> </li> <li> <p>SPOT_PREFERRED
     * -- If Spot instances are unavailable, the game server group continues to provide
     * hosting capacity by using On-Demand instances. Existing nonviable Spot instances
     * are terminated (once current gameplay ends) and replaced with new On-Demand
     * instances. </p> </li> </ul>
     */
    inline GameServerGroup& WithBalancingStrategy(const BalancingStrategy& value) { SetBalancingStrategy(value); return *this;}

    /**
     * <p>The fallback balancing method to use for the game server group when Spot
     * instances in a Region become unavailable or are not viable for game hosting.
     * Once triggered, this method remains active until Spot instances can once again
     * be used. Method options include:</p> <ul> <li> <p>SPOT_ONLY -- If Spot instances
     * are unavailable, the game server group provides no hosting capacity. No new
     * instances are started, and the existing nonviable Spot instances are terminated
     * (once current gameplay ends) and not replaced.</p> </li> <li> <p>SPOT_PREFERRED
     * -- If Spot instances are unavailable, the game server group continues to provide
     * hosting capacity by using On-Demand instances. Existing nonviable Spot instances
     * are terminated (once current gameplay ends) and replaced with new On-Demand
     * instances. </p> </li> </ul>
     */
    inline GameServerGroup& WithBalancingStrategy(BalancingStrategy&& value) { SetBalancingStrategy(std::move(value)); return *this;}


    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may be terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running except in the event of a forced game server
     * group deletion (see <a>DeleteGameServerGroup</a>). An exception to this is Spot
     * Instances, which may be terminated by AWS regardless of protection status.</p>
     */
    inline const GameServerProtectionPolicy& GetGameServerProtectionPolicy() const{ return m_gameServerProtectionPolicy; }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may be terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running except in the event of a forced game server
     * group deletion (see <a>DeleteGameServerGroup</a>). An exception to this is Spot
     * Instances, which may be terminated by AWS regardless of protection status.</p>
     */
    inline bool GameServerProtectionPolicyHasBeenSet() const { return m_gameServerProtectionPolicyHasBeenSet; }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may be terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running except in the event of a forced game server
     * group deletion (see <a>DeleteGameServerGroup</a>). An exception to this is Spot
     * Instances, which may be terminated by AWS regardless of protection status.</p>
     */
    inline void SetGameServerProtectionPolicy(const GameServerProtectionPolicy& value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = value; }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may be terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running except in the event of a forced game server
     * group deletion (see <a>DeleteGameServerGroup</a>). An exception to this is Spot
     * Instances, which may be terminated by AWS regardless of protection status.</p>
     */
    inline void SetGameServerProtectionPolicy(GameServerProtectionPolicy&& value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = std::move(value); }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may be terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running except in the event of a forced game server
     * group deletion (see <a>DeleteGameServerGroup</a>). An exception to this is Spot
     * Instances, which may be terminated by AWS regardless of protection status.</p>
     */
    inline GameServerGroup& WithGameServerProtectionPolicy(const GameServerProtectionPolicy& value) { SetGameServerProtectionPolicy(value); return *this;}

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may be terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running except in the event of a forced game server
     * group deletion (see <a>DeleteGameServerGroup</a>). An exception to this is Spot
     * Instances, which may be terminated by AWS regardless of protection status.</p>
     */
    inline GameServerGroup& WithGameServerProtectionPolicy(GameServerProtectionPolicy&& value) { SetGameServerProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupArn() const{ return m_autoScalingGroupArn; }

    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline bool AutoScalingGroupArnHasBeenSet() const { return m_autoScalingGroupArnHasBeenSet; }

    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline void SetAutoScalingGroupArn(const Aws::String& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = value; }

    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline void SetAutoScalingGroupArn(Aws::String&& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = std::move(value); }

    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline void SetAutoScalingGroupArn(const char* value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn.assign(value); }

    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline GameServerGroup& WithAutoScalingGroupArn(const Aws::String& value) { SetAutoScalingGroupArn(value); return *this;}

    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline GameServerGroup& WithAutoScalingGroupArn(Aws::String&& value) { SetAutoScalingGroupArn(std::move(value)); return *this;}

    /**
     * <p>A generated unique ID for the EC2 Auto Scaling group with is associated with
     * this game server group.</p>
     */
    inline GameServerGroup& WithAutoScalingGroupArn(const char* value) { SetAutoScalingGroupArn(value); return *this;}


    /**
     * <p>The current status of the game server group. Possible statuses include:</p>
     * <ul> <li> <p> NEW - GameLift FleetIQ has validated the
     * <code>CreateGameServerGroup()</code> request. </p> </li> <li> <p>ACTIVATING -
     * GameLift FleetIQ is setting up a game server group, which includes creating an
     * autoscaling group in your AWS account. </p> </li> <li> <p>ACTIVE - The game
     * server group has been successfully created. </p> </li> <li> <p>DELETE_SCHEDULED
     * - A request to delete the game server group has been received. </p> </li> <li>
     * <p>DELETING - GameLift FleetIQ has received a valid
     * <code>DeleteGameServerGroup()</code> request and is processing it. GameLift
     * FleetIQ must first complete and release hosts before it deletes the autoscaling
     * group and the game server group. </p> </li> <li> <p>DELETED - The game server
     * group has been successfully deleted. </p> </li> <li> <p>ERROR - The asynchronous
     * processes of activating or deleting a game server group has failed, resulting in
     * an error state.</p> </li> </ul>
     */
    inline const GameServerGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the game server group. Possible statuses include:</p>
     * <ul> <li> <p> NEW - GameLift FleetIQ has validated the
     * <code>CreateGameServerGroup()</code> request. </p> </li> <li> <p>ACTIVATING -
     * GameLift FleetIQ is setting up a game server group, which includes creating an
     * autoscaling group in your AWS account. </p> </li> <li> <p>ACTIVE - The game
     * server group has been successfully created. </p> </li> <li> <p>DELETE_SCHEDULED
     * - A request to delete the game server group has been received. </p> </li> <li>
     * <p>DELETING - GameLift FleetIQ has received a valid
     * <code>DeleteGameServerGroup()</code> request and is processing it. GameLift
     * FleetIQ must first complete and release hosts before it deletes the autoscaling
     * group and the game server group. </p> </li> <li> <p>DELETED - The game server
     * group has been successfully deleted. </p> </li> <li> <p>ERROR - The asynchronous
     * processes of activating or deleting a game server group has failed, resulting in
     * an error state.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the game server group. Possible statuses include:</p>
     * <ul> <li> <p> NEW - GameLift FleetIQ has validated the
     * <code>CreateGameServerGroup()</code> request. </p> </li> <li> <p>ACTIVATING -
     * GameLift FleetIQ is setting up a game server group, which includes creating an
     * autoscaling group in your AWS account. </p> </li> <li> <p>ACTIVE - The game
     * server group has been successfully created. </p> </li> <li> <p>DELETE_SCHEDULED
     * - A request to delete the game server group has been received. </p> </li> <li>
     * <p>DELETING - GameLift FleetIQ has received a valid
     * <code>DeleteGameServerGroup()</code> request and is processing it. GameLift
     * FleetIQ must first complete and release hosts before it deletes the autoscaling
     * group and the game server group. </p> </li> <li> <p>DELETED - The game server
     * group has been successfully deleted. </p> </li> <li> <p>ERROR - The asynchronous
     * processes of activating or deleting a game server group has failed, resulting in
     * an error state.</p> </li> </ul>
     */
    inline void SetStatus(const GameServerGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the game server group. Possible statuses include:</p>
     * <ul> <li> <p> NEW - GameLift FleetIQ has validated the
     * <code>CreateGameServerGroup()</code> request. </p> </li> <li> <p>ACTIVATING -
     * GameLift FleetIQ is setting up a game server group, which includes creating an
     * autoscaling group in your AWS account. </p> </li> <li> <p>ACTIVE - The game
     * server group has been successfully created. </p> </li> <li> <p>DELETE_SCHEDULED
     * - A request to delete the game server group has been received. </p> </li> <li>
     * <p>DELETING - GameLift FleetIQ has received a valid
     * <code>DeleteGameServerGroup()</code> request and is processing it. GameLift
     * FleetIQ must first complete and release hosts before it deletes the autoscaling
     * group and the game server group. </p> </li> <li> <p>DELETED - The game server
     * group has been successfully deleted. </p> </li> <li> <p>ERROR - The asynchronous
     * processes of activating or deleting a game server group has failed, resulting in
     * an error state.</p> </li> </ul>
     */
    inline void SetStatus(GameServerGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the game server group. Possible statuses include:</p>
     * <ul> <li> <p> NEW - GameLift FleetIQ has validated the
     * <code>CreateGameServerGroup()</code> request. </p> </li> <li> <p>ACTIVATING -
     * GameLift FleetIQ is setting up a game server group, which includes creating an
     * autoscaling group in your AWS account. </p> </li> <li> <p>ACTIVE - The game
     * server group has been successfully created. </p> </li> <li> <p>DELETE_SCHEDULED
     * - A request to delete the game server group has been received. </p> </li> <li>
     * <p>DELETING - GameLift FleetIQ has received a valid
     * <code>DeleteGameServerGroup()</code> request and is processing it. GameLift
     * FleetIQ must first complete and release hosts before it deletes the autoscaling
     * group and the game server group. </p> </li> <li> <p>DELETED - The game server
     * group has been successfully deleted. </p> </li> <li> <p>ERROR - The asynchronous
     * processes of activating or deleting a game server group has failed, resulting in
     * an error state.</p> </li> </ul>
     */
    inline GameServerGroup& WithStatus(const GameServerGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the game server group. Possible statuses include:</p>
     * <ul> <li> <p> NEW - GameLift FleetIQ has validated the
     * <code>CreateGameServerGroup()</code> request. </p> </li> <li> <p>ACTIVATING -
     * GameLift FleetIQ is setting up a game server group, which includes creating an
     * autoscaling group in your AWS account. </p> </li> <li> <p>ACTIVE - The game
     * server group has been successfully created. </p> </li> <li> <p>DELETE_SCHEDULED
     * - A request to delete the game server group has been received. </p> </li> <li>
     * <p>DELETING - GameLift FleetIQ has received a valid
     * <code>DeleteGameServerGroup()</code> request and is processing it. GameLift
     * FleetIQ must first complete and release hosts before it deletes the autoscaling
     * group and the game server group. </p> </li> <li> <p>DELETED - The game server
     * group has been successfully deleted. </p> </li> <li> <p>ERROR - The asynchronous
     * processes of activating or deleting a game server group has failed, resulting in
     * an error state.</p> </li> </ul>
     */
    inline GameServerGroup& WithStatus(GameServerGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline GameServerGroup& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline GameServerGroup& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>Additional information about the current game server group status. This
     * information may provide additional insight on groups that in ERROR status.</p>
     */
    inline GameServerGroup& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline const Aws::Vector<GameServerGroupAction>& GetSuspendedActions() const{ return m_suspendedActions; }

    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline bool SuspendedActionsHasBeenSet() const { return m_suspendedActionsHasBeenSet; }

    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline void SetSuspendedActions(const Aws::Vector<GameServerGroupAction>& value) { m_suspendedActionsHasBeenSet = true; m_suspendedActions = value; }

    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline void SetSuspendedActions(Aws::Vector<GameServerGroupAction>&& value) { m_suspendedActionsHasBeenSet = true; m_suspendedActions = std::move(value); }

    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline GameServerGroup& WithSuspendedActions(const Aws::Vector<GameServerGroupAction>& value) { SetSuspendedActions(value); return *this;}

    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline GameServerGroup& WithSuspendedActions(Aws::Vector<GameServerGroupAction>&& value) { SetSuspendedActions(std::move(value)); return *this;}

    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline GameServerGroup& AddSuspendedActions(const GameServerGroupAction& value) { m_suspendedActionsHasBeenSet = true; m_suspendedActions.push_back(value); return *this; }

    /**
     * <p>A list of activities that are currently suspended for this game server group.
     * If this property is empty, all activities are occurring.</p>
     */
    inline GameServerGroup& AddSuspendedActions(GameServerGroupAction&& value) { m_suspendedActionsHasBeenSet = true; m_suspendedActions.push_back(std::move(value)); return *this; }


    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline GameServerGroup& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline GameServerGroup& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp indicating when this game server group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A time stamp indicating when this game server group was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this game server group was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>A time stamp indicating when this game server group was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this game server group was last updated.</p>
     */
    inline GameServerGroup& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this game server group was last updated.</p>
     */
    inline GameServerGroup& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::String m_gameServerGroupArn;
    bool m_gameServerGroupArnHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<InstanceDefinition> m_instanceDefinitions;
    bool m_instanceDefinitionsHasBeenSet;

    BalancingStrategy m_balancingStrategy;
    bool m_balancingStrategyHasBeenSet;

    GameServerProtectionPolicy m_gameServerProtectionPolicy;
    bool m_gameServerProtectionPolicyHasBeenSet;

    Aws::String m_autoScalingGroupArn;
    bool m_autoScalingGroupArnHasBeenSet;

    GameServerGroupStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    Aws::Vector<GameServerGroupAction> m_suspendedActions;
    bool m_suspendedActionsHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
