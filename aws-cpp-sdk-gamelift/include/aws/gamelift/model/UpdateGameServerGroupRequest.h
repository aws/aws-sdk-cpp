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
  class AWS_GAMELIFT_API UpdateGameServerGroupRequest : public GameLiftRequest
  {
  public:
    UpdateGameServerGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameServerGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the game server group to update. Use either the
     * <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


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
    inline UpdateGameServerGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline UpdateGameServerGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your EC2 Auto Scaling
     * groups. The submitted role is validated to ensure that it contains the necessary
     * permissions for game server groups.</p>
     */
    inline UpdateGameServerGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline const Aws::Vector<InstanceDefinition>& GetInstanceDefinitions() const{ return m_instanceDefinitions; }

    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline bool InstanceDefinitionsHasBeenSet() const { return m_instanceDefinitionsHasBeenSet; }

    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline void SetInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = value; }

    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline void SetInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = std::move(value); }

    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline UpdateGameServerGroupRequest& WithInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { SetInstanceDefinitions(value); return *this;}

    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline UpdateGameServerGroupRequest& WithInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { SetInstanceDefinitions(std::move(value)); return *this;}

    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline UpdateGameServerGroupRequest& AddInstanceDefinitions(const InstanceDefinition& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(value); return *this; }

    /**
     * <p>An updated list of EC2 instance types to use when creating instances in the
     * group. The instance definition must specify instance types that are supported by
     * GameLift FleetIQ, and must include at least two instance types. This updated
     * list replaces the entire current list of instance definitions for the game
     * server group. For more information on instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon EC2 User Guide</i>..</p>
     */
    inline UpdateGameServerGroupRequest& AddInstanceDefinitions(InstanceDefinition&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may by terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running. An exception to this is Spot Instances, which
     * may be terminated by AWS regardless of protection status. This property is set
     * to NO_PROTECTION by default.</p>
     */
    inline const GameServerProtectionPolicy& GetGameServerProtectionPolicy() const{ return m_gameServerProtectionPolicy; }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may by terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running. An exception to this is Spot Instances, which
     * may be terminated by AWS regardless of protection status. This property is set
     * to NO_PROTECTION by default.</p>
     */
    inline bool GameServerProtectionPolicyHasBeenSet() const { return m_gameServerProtectionPolicyHasBeenSet; }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may by terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running. An exception to this is Spot Instances, which
     * may be terminated by AWS regardless of protection status. This property is set
     * to NO_PROTECTION by default.</p>
     */
    inline void SetGameServerProtectionPolicy(const GameServerProtectionPolicy& value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = value; }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may by terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running. An exception to this is Spot Instances, which
     * may be terminated by AWS regardless of protection status. This property is set
     * to NO_PROTECTION by default.</p>
     */
    inline void SetGameServerProtectionPolicy(GameServerProtectionPolicy&& value) { m_gameServerProtectionPolicyHasBeenSet = true; m_gameServerProtectionPolicy = std::move(value); }

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may by terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running. An exception to this is Spot Instances, which
     * may be terminated by AWS regardless of protection status. This property is set
     * to NO_PROTECTION by default.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerProtectionPolicy(const GameServerProtectionPolicy& value) { SetGameServerProtectionPolicy(value); return *this;}

    /**
     * <p>A flag that indicates whether instances in the game server group are
     * protected from early termination. Unprotected instances that have active game
     * servers running may by terminated during a scale-down event, causing players to
     * be dropped from the game. Protected instances cannot be terminated while there
     * are active game servers running. An exception to this is Spot Instances, which
     * may be terminated by AWS regardless of protection status. This property is set
     * to NO_PROTECTION by default.</p>
     */
    inline UpdateGameServerGroupRequest& WithGameServerProtectionPolicy(GameServerProtectionPolicy&& value) { SetGameServerProtectionPolicy(std::move(value)); return *this;}


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
    inline UpdateGameServerGroupRequest& WithBalancingStrategy(const BalancingStrategy& value) { SetBalancingStrategy(value); return *this;}

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
    inline UpdateGameServerGroupRequest& WithBalancingStrategy(BalancingStrategy&& value) { SetBalancingStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<InstanceDefinition> m_instanceDefinitions;
    bool m_instanceDefinitionsHasBeenSet;

    GameServerProtectionPolicy m_gameServerProtectionPolicy;
    bool m_gameServerProtectionPolicyHasBeenSet;

    BalancingStrategy m_balancingStrategy;
    bool m_balancingStrategyHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
