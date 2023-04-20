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
    AWS_GAMELIFT_API UpdateGameServerGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameServerGroup"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline UpdateGameServerGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline UpdateGameServerGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline UpdateGameServerGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline const Aws::Vector<InstanceDefinition>& GetInstanceDefinitions() const{ return m_instanceDefinitions; }

    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline bool InstanceDefinitionsHasBeenSet() const { return m_instanceDefinitionsHasBeenSet; }

    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline void SetInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = value; }

    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline void SetInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = std::move(value); }

    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline UpdateGameServerGroupRequest& WithInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { SetInstanceDefinitions(value); return *this;}

    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline UpdateGameServerGroupRequest& WithInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { SetInstanceDefinitions(std::move(value)); return *this;}

    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline UpdateGameServerGroupRequest& AddInstanceDefinitions(const InstanceDefinition& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(value); return *this; }

    /**
     * <p>An updated list of Amazon EC2 instance types to use in the Auto Scaling
     * group. The instance definitions must specify at least two different instance
     * types that are supported by Amazon GameLift FleetIQ. This updated list replaces
     * the entire current list of instance definitions for the game server group. For
     * more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>. You can optionally
     * specify capacity weighting for each instance type. If no weight value is
     * specified for an instance type, it is set to the default value "1". For more
     * information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline UpdateGameServerGroupRequest& AddInstanceDefinitions(InstanceDefinition&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(std::move(value)); return *this; }


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
    inline const GameServerProtectionPolicy& GetGameServerProtectionPolicy() const{ return m_gameServerProtectionPolicy; }

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
    inline bool GameServerProtectionPolicyHasBeenSet() const { return m_gameServerProtectionPolicyHasBeenSet; }

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
    inline void SetGameServerProtectionPolicy(const GameServerProtectionPolicy& value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = value; }

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
    inline void SetGameServerProtectionPolicy(GameServerProtectionPolicy&& value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = std::move(value); }

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
    inline UpdateGameServerGroupRequest& WithGameServerProtectionPolicy(const GameServerProtectionPolicy& value) { SetGameServerProtectionPolicy(value); return *this;}

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
    inline UpdateGameServerGroupRequest& WithGameServerProtectionPolicy(GameServerProtectionPolicy&& value) { SetGameServerProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>Indicates how Amazon GameLift FleetIQ balances the use of Spot Instances and
     * On-Demand Instances in the game server group. Method options include the
     * following:</p> <ul> <li> <p> <code>SPOT_ONLY</code> - Only Spot Instances are
     * used in the game server group. If Spot Instances are unavailable or not viable
     * for game hosting, the game server group provides no hosting capacity until Spot
     * Instances can again be used. Until then, no new instances are started, and the
     * existing nonviable Spot Instances are terminated (after current gameplay ends)
     * and are not replaced.</p> </li> <li> <p> <code>SPOT_PREFERRED</code> - (default
     * value) Spot Instances are used whenever available in the game server group. If
     * Spot Instances are unavailable, the game server group continues to provide
     * hosting capacity by falling back to On-Demand Instances. Existing nonviable Spot
     * Instances are terminated (after current gameplay ends) and are replaced with new
     * On-Demand Instances.</p> </li> <li> <p> <code>ON_DEMAND_ONLY</code> - Only
     * On-Demand Instances are used in the game server group. No Spot Instances are
     * used, even when available, while this balancing strategy is in force.</p> </li>
     * </ul>
     */
    inline const BalancingStrategy& GetBalancingStrategy() const{ return m_balancingStrategy; }

    /**
     * <p>Indicates how Amazon GameLift FleetIQ balances the use of Spot Instances and
     * On-Demand Instances in the game server group. Method options include the
     * following:</p> <ul> <li> <p> <code>SPOT_ONLY</code> - Only Spot Instances are
     * used in the game server group. If Spot Instances are unavailable or not viable
     * for game hosting, the game server group provides no hosting capacity until Spot
     * Instances can again be used. Until then, no new instances are started, and the
     * existing nonviable Spot Instances are terminated (after current gameplay ends)
     * and are not replaced.</p> </li> <li> <p> <code>SPOT_PREFERRED</code> - (default
     * value) Spot Instances are used whenever available in the game server group. If
     * Spot Instances are unavailable, the game server group continues to provide
     * hosting capacity by falling back to On-Demand Instances. Existing nonviable Spot
     * Instances are terminated (after current gameplay ends) and are replaced with new
     * On-Demand Instances.</p> </li> <li> <p> <code>ON_DEMAND_ONLY</code> - Only
     * On-Demand Instances are used in the game server group. No Spot Instances are
     * used, even when available, while this balancing strategy is in force.</p> </li>
     * </ul>
     */
    inline bool BalancingStrategyHasBeenSet() const { return m_balancingStrategyHasBeenSet; }

    /**
     * <p>Indicates how Amazon GameLift FleetIQ balances the use of Spot Instances and
     * On-Demand Instances in the game server group. Method options include the
     * following:</p> <ul> <li> <p> <code>SPOT_ONLY</code> - Only Spot Instances are
     * used in the game server group. If Spot Instances are unavailable or not viable
     * for game hosting, the game server group provides no hosting capacity until Spot
     * Instances can again be used. Until then, no new instances are started, and the
     * existing nonviable Spot Instances are terminated (after current gameplay ends)
     * and are not replaced.</p> </li> <li> <p> <code>SPOT_PREFERRED</code> - (default
     * value) Spot Instances are used whenever available in the game server group. If
     * Spot Instances are unavailable, the game server group continues to provide
     * hosting capacity by falling back to On-Demand Instances. Existing nonviable Spot
     * Instances are terminated (after current gameplay ends) and are replaced with new
     * On-Demand Instances.</p> </li> <li> <p> <code>ON_DEMAND_ONLY</code> - Only
     * On-Demand Instances are used in the game server group. No Spot Instances are
     * used, even when available, while this balancing strategy is in force.</p> </li>
     * </ul>
     */
    inline void SetBalancingStrategy(const BalancingStrategy& value) { m_balancingStrategyHasBeenSet = true; m_balancingStrategy = value; }

    /**
     * <p>Indicates how Amazon GameLift FleetIQ balances the use of Spot Instances and
     * On-Demand Instances in the game server group. Method options include the
     * following:</p> <ul> <li> <p> <code>SPOT_ONLY</code> - Only Spot Instances are
     * used in the game server group. If Spot Instances are unavailable or not viable
     * for game hosting, the game server group provides no hosting capacity until Spot
     * Instances can again be used. Until then, no new instances are started, and the
     * existing nonviable Spot Instances are terminated (after current gameplay ends)
     * and are not replaced.</p> </li> <li> <p> <code>SPOT_PREFERRED</code> - (default
     * value) Spot Instances are used whenever available in the game server group. If
     * Spot Instances are unavailable, the game server group continues to provide
     * hosting capacity by falling back to On-Demand Instances. Existing nonviable Spot
     * Instances are terminated (after current gameplay ends) and are replaced with new
     * On-Demand Instances.</p> </li> <li> <p> <code>ON_DEMAND_ONLY</code> - Only
     * On-Demand Instances are used in the game server group. No Spot Instances are
     * used, even when available, while this balancing strategy is in force.</p> </li>
     * </ul>
     */
    inline void SetBalancingStrategy(BalancingStrategy&& value) { m_balancingStrategyHasBeenSet = true; m_balancingStrategy = std::move(value); }

    /**
     * <p>Indicates how Amazon GameLift FleetIQ balances the use of Spot Instances and
     * On-Demand Instances in the game server group. Method options include the
     * following:</p> <ul> <li> <p> <code>SPOT_ONLY</code> - Only Spot Instances are
     * used in the game server group. If Spot Instances are unavailable or not viable
     * for game hosting, the game server group provides no hosting capacity until Spot
     * Instances can again be used. Until then, no new instances are started, and the
     * existing nonviable Spot Instances are terminated (after current gameplay ends)
     * and are not replaced.</p> </li> <li> <p> <code>SPOT_PREFERRED</code> - (default
     * value) Spot Instances are used whenever available in the game server group. If
     * Spot Instances are unavailable, the game server group continues to provide
     * hosting capacity by falling back to On-Demand Instances. Existing nonviable Spot
     * Instances are terminated (after current gameplay ends) and are replaced with new
     * On-Demand Instances.</p> </li> <li> <p> <code>ON_DEMAND_ONLY</code> - Only
     * On-Demand Instances are used in the game server group. No Spot Instances are
     * used, even when available, while this balancing strategy is in force.</p> </li>
     * </ul>
     */
    inline UpdateGameServerGroupRequest& WithBalancingStrategy(const BalancingStrategy& value) { SetBalancingStrategy(value); return *this;}

    /**
     * <p>Indicates how Amazon GameLift FleetIQ balances the use of Spot Instances and
     * On-Demand Instances in the game server group. Method options include the
     * following:</p> <ul> <li> <p> <code>SPOT_ONLY</code> - Only Spot Instances are
     * used in the game server group. If Spot Instances are unavailable or not viable
     * for game hosting, the game server group provides no hosting capacity until Spot
     * Instances can again be used. Until then, no new instances are started, and the
     * existing nonviable Spot Instances are terminated (after current gameplay ends)
     * and are not replaced.</p> </li> <li> <p> <code>SPOT_PREFERRED</code> - (default
     * value) Spot Instances are used whenever available in the game server group. If
     * Spot Instances are unavailable, the game server group continues to provide
     * hosting capacity by falling back to On-Demand Instances. Existing nonviable Spot
     * Instances are terminated (after current gameplay ends) and are replaced with new
     * On-Demand Instances.</p> </li> <li> <p> <code>ON_DEMAND_ONLY</code> - Only
     * On-Demand Instances are used in the game server group. No Spot Instances are
     * used, even when available, while this balancing strategy is in force.</p> </li>
     * </ul>
     */
    inline UpdateGameServerGroupRequest& WithBalancingStrategy(BalancingStrategy&& value) { SetBalancingStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<InstanceDefinition> m_instanceDefinitions;
    bool m_instanceDefinitionsHasBeenSet = false;

    GameServerProtectionPolicy m_gameServerProtectionPolicy;
    bool m_gameServerProtectionPolicyHasBeenSet = false;

    BalancingStrategy m_balancingStrategy;
    bool m_balancingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
