/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/LaunchTemplateSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameServerGroupAutoScalingPolicy.h>
#include <aws/gamelift/model/BalancingStrategy.h>
#include <aws/gamelift/model/GameServerProtectionPolicy.h>
#include <aws/gamelift/model/InstanceDefinition.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateGameServerGroupRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateGameServerGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGameServerGroup"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline CreateGameServerGroupRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline CreateGameServerGroupRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the new game server group. This value is used to generate
     * unique ARN identifiers for the Amazon EC2 Auto Scaling group and the Amazon
     * GameLift FleetIQ game server group. The name must be unique per Region per
     * Amazon Web Services account.</p>
     */
    inline CreateGameServerGroupRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


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
    inline CreateGameServerGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline CreateGameServerGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access your Amazon EC2 Auto
     * Scaling groups.</p>
     */
    inline CreateGameServerGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The minimum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and Amazon EC2 do not
     * scale down the group below this minimum. In production, this value should be set
     * to at least 1. After the Auto Scaling group is created, update this value
     * directly in the Auto Scaling group using the Amazon Web Services console or
     * APIs.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and Amazon EC2 do not
     * scale down the group below this minimum. In production, this value should be set
     * to at least 1. After the Auto Scaling group is created, update this value
     * directly in the Auto Scaling group using the Amazon Web Services console or
     * APIs.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and Amazon EC2 do not
     * scale down the group below this minimum. In production, this value should be set
     * to at least 1. After the Auto Scaling group is created, update this value
     * directly in the Auto Scaling group using the Amazon Web Services console or
     * APIs.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and Amazon EC2 do not
     * scale down the group below this minimum. In production, this value should be set
     * to at least 1. After the Auto Scaling group is created, update this value
     * directly in the Auto Scaling group using the Amazon Web Services console or
     * APIs.</p>
     */
    inline CreateGameServerGroupRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and EC2 do not scale up
     * the group above this maximum. After the Auto Scaling group is created, update
     * this value directly in the Auto Scaling group using the Amazon Web Services
     * console or APIs.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and EC2 do not scale up
     * the group above this maximum. After the Auto Scaling group is created, update
     * this value directly in the Auto Scaling group using the Amazon Web Services
     * console or APIs.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and EC2 do not scale up
     * the group above this maximum. After the Auto Scaling group is created, update
     * this value directly in the Auto Scaling group using the Amazon Web Services
     * console or APIs.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum number of instances allowed in the Amazon EC2 Auto Scaling group.
     * During automatic scaling events, Amazon GameLift FleetIQ and EC2 do not scale up
     * the group above this maximum. After the Auto Scaling group is created, update
     * this value directly in the Auto Scaling group using the Amazon Web Services
     * console or APIs.</p>
     */
    inline CreateGameServerGroupRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The Amazon EC2 launch template that contains configuration settings and game
     * server code to be deployed to all instances in the game server group. You can
     * specify the template using either the template name or ID. For help with
     * creating a launch template, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating
     * a Launch Template for an Auto Scaling Group</a> in the <i>Amazon Elastic Compute
     * Cloud Auto Scaling User Guide</i>. After the Auto Scaling group is created,
     * update this value directly in the Auto Scaling group using the Amazon Web
     * Services console or APIs.</p>  <p>If you specify network interfaces in
     * your launch template, you must explicitly set the property
     * <code>AssociatePublicIpAddress</code> to "true". If no network interface is
     * specified in the launch template, Amazon GameLift FleetIQ uses your account's
     * default VPC.</p> 
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The Amazon EC2 launch template that contains configuration settings and game
     * server code to be deployed to all instances in the game server group. You can
     * specify the template using either the template name or ID. For help with
     * creating a launch template, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating
     * a Launch Template for an Auto Scaling Group</a> in the <i>Amazon Elastic Compute
     * Cloud Auto Scaling User Guide</i>. After the Auto Scaling group is created,
     * update this value directly in the Auto Scaling group using the Amazon Web
     * Services console or APIs.</p>  <p>If you specify network interfaces in
     * your launch template, you must explicitly set the property
     * <code>AssociatePublicIpAddress</code> to "true". If no network interface is
     * specified in the launch template, Amazon GameLift FleetIQ uses your account's
     * default VPC.</p> 
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The Amazon EC2 launch template that contains configuration settings and game
     * server code to be deployed to all instances in the game server group. You can
     * specify the template using either the template name or ID. For help with
     * creating a launch template, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating
     * a Launch Template for an Auto Scaling Group</a> in the <i>Amazon Elastic Compute
     * Cloud Auto Scaling User Guide</i>. After the Auto Scaling group is created,
     * update this value directly in the Auto Scaling group using the Amazon Web
     * Services console or APIs.</p>  <p>If you specify network interfaces in
     * your launch template, you must explicitly set the property
     * <code>AssociatePublicIpAddress</code> to "true". If no network interface is
     * specified in the launch template, Amazon GameLift FleetIQ uses your account's
     * default VPC.</p> 
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The Amazon EC2 launch template that contains configuration settings and game
     * server code to be deployed to all instances in the game server group. You can
     * specify the template using either the template name or ID. For help with
     * creating a launch template, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating
     * a Launch Template for an Auto Scaling Group</a> in the <i>Amazon Elastic Compute
     * Cloud Auto Scaling User Guide</i>. After the Auto Scaling group is created,
     * update this value directly in the Auto Scaling group using the Amazon Web
     * Services console or APIs.</p>  <p>If you specify network interfaces in
     * your launch template, you must explicitly set the property
     * <code>AssociatePublicIpAddress</code> to "true". If no network interface is
     * specified in the launch template, Amazon GameLift FleetIQ uses your account's
     * default VPC.</p> 
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The Amazon EC2 launch template that contains configuration settings and game
     * server code to be deployed to all instances in the game server group. You can
     * specify the template using either the template name or ID. For help with
     * creating a launch template, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating
     * a Launch Template for an Auto Scaling Group</a> in the <i>Amazon Elastic Compute
     * Cloud Auto Scaling User Guide</i>. After the Auto Scaling group is created,
     * update this value directly in the Auto Scaling group using the Amazon Web
     * Services console or APIs.</p>  <p>If you specify network interfaces in
     * your launch template, you must explicitly set the property
     * <code>AssociatePublicIpAddress</code> to "true". If no network interface is
     * specified in the launch template, Amazon GameLift FleetIQ uses your account's
     * default VPC.</p> 
     */
    inline CreateGameServerGroupRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The Amazon EC2 launch template that contains configuration settings and game
     * server code to be deployed to all instances in the game server group. You can
     * specify the template using either the template name or ID. For help with
     * creating a launch template, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating
     * a Launch Template for an Auto Scaling Group</a> in the <i>Amazon Elastic Compute
     * Cloud Auto Scaling User Guide</i>. After the Auto Scaling group is created,
     * update this value directly in the Auto Scaling group using the Amazon Web
     * Services console or APIs.</p>  <p>If you specify network interfaces in
     * your launch template, you must explicitly set the property
     * <code>AssociatePublicIpAddress</code> to "true". If no network interface is
     * specified in the launch template, Amazon GameLift FleetIQ uses your account's
     * default VPC.</p> 
     */
    inline CreateGameServerGroupRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline const Aws::Vector<InstanceDefinition>& GetInstanceDefinitions() const{ return m_instanceDefinitions; }

    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline bool InstanceDefinitionsHasBeenSet() const { return m_instanceDefinitionsHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline void SetInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = value; }

    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline void SetInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions = std::move(value); }

    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline CreateGameServerGroupRequest& WithInstanceDefinitions(const Aws::Vector<InstanceDefinition>& value) { SetInstanceDefinitions(value); return *this;}

    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline CreateGameServerGroupRequest& WithInstanceDefinitions(Aws::Vector<InstanceDefinition>&& value) { SetInstanceDefinitions(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline CreateGameServerGroupRequest& AddInstanceDefinitions(const InstanceDefinition& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 instance types and sizes to use in the Auto Scaling group. The
     * instance definitions must specify at least two different instance types that are
     * supported by Amazon GameLift FleetIQ. For more information on instance types,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">EC2
     * Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. You
     * can optionally specify capacity weighting for each instance type. If no weight
     * value is specified for an instance type, it is set to the default value "1". For
     * more information about capacity weighting, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">
     * Instance Weighting for Amazon EC2 Auto Scaling</a> in the Amazon EC2 Auto
     * Scaling User Guide.</p>
     */
    inline CreateGameServerGroupRequest& AddInstanceDefinitions(InstanceDefinition&& value) { m_instanceDefinitionsHasBeenSet = true; m_instanceDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration settings to define a scaling policy for the Auto Scaling group
     * that is optimized for game hosting. The scaling policy uses the metric
     * <code>"PercentUtilizedGameServers"</code> to maintain a buffer of idle game
     * servers that can immediately accommodate new games and players. After the Auto
     * Scaling group is created, update this value directly in the Auto Scaling group
     * using the Amazon Web Services console or APIs.</p>
     */
    inline const GameServerGroupAutoScalingPolicy& GetAutoScalingPolicy() const{ return m_autoScalingPolicy; }

    /**
     * <p>Configuration settings to define a scaling policy for the Auto Scaling group
     * that is optimized for game hosting. The scaling policy uses the metric
     * <code>"PercentUtilizedGameServers"</code> to maintain a buffer of idle game
     * servers that can immediately accommodate new games and players. After the Auto
     * Scaling group is created, update this value directly in the Auto Scaling group
     * using the Amazon Web Services console or APIs.</p>
     */
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }

    /**
     * <p>Configuration settings to define a scaling policy for the Auto Scaling group
     * that is optimized for game hosting. The scaling policy uses the metric
     * <code>"PercentUtilizedGameServers"</code> to maintain a buffer of idle game
     * servers that can immediately accommodate new games and players. After the Auto
     * Scaling group is created, update this value directly in the Auto Scaling group
     * using the Amazon Web Services console or APIs.</p>
     */
    inline void SetAutoScalingPolicy(const GameServerGroupAutoScalingPolicy& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = value; }

    /**
     * <p>Configuration settings to define a scaling policy for the Auto Scaling group
     * that is optimized for game hosting. The scaling policy uses the metric
     * <code>"PercentUtilizedGameServers"</code> to maintain a buffer of idle game
     * servers that can immediately accommodate new games and players. After the Auto
     * Scaling group is created, update this value directly in the Auto Scaling group
     * using the Amazon Web Services console or APIs.</p>
     */
    inline void SetAutoScalingPolicy(GameServerGroupAutoScalingPolicy&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::move(value); }

    /**
     * <p>Configuration settings to define a scaling policy for the Auto Scaling group
     * that is optimized for game hosting. The scaling policy uses the metric
     * <code>"PercentUtilizedGameServers"</code> to maintain a buffer of idle game
     * servers that can immediately accommodate new games and players. After the Auto
     * Scaling group is created, update this value directly in the Auto Scaling group
     * using the Amazon Web Services console or APIs.</p>
     */
    inline CreateGameServerGroupRequest& WithAutoScalingPolicy(const GameServerGroupAutoScalingPolicy& value) { SetAutoScalingPolicy(value); return *this;}

    /**
     * <p>Configuration settings to define a scaling policy for the Auto Scaling group
     * that is optimized for game hosting. The scaling policy uses the metric
     * <code>"PercentUtilizedGameServers"</code> to maintain a buffer of idle game
     * servers that can immediately accommodate new games and players. After the Auto
     * Scaling group is created, update this value directly in the Auto Scaling group
     * using the Amazon Web Services console or APIs.</p>
     */
    inline CreateGameServerGroupRequest& WithAutoScalingPolicy(GameServerGroupAutoScalingPolicy&& value) { SetAutoScalingPolicy(std::move(value)); return *this;}


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
    inline CreateGameServerGroupRequest& WithBalancingStrategy(const BalancingStrategy& value) { SetBalancingStrategy(value); return *this;}

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
    inline CreateGameServerGroupRequest& WithBalancingStrategy(BalancingStrategy&& value) { SetBalancingStrategy(std::move(value)); return *this;}


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
    inline CreateGameServerGroupRequest& WithGameServerProtectionPolicy(const GameServerProtectionPolicy& value) { SetGameServerProtectionPolicy(value); return *this;}

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
    inline CreateGameServerGroupRequest& WithGameServerProtectionPolicy(GameServerProtectionPolicy&& value) { SetGameServerProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnets() const{ return m_vpcSubnets; }

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline bool VpcSubnetsHasBeenSet() const { return m_vpcSubnetsHasBeenSet; }

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline void SetVpcSubnets(const Aws::Vector<Aws::String>& value) { m_vpcSubnetsHasBeenSet = true; m_vpcSubnets = value; }

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline void SetVpcSubnets(Aws::Vector<Aws::String>&& value) { m_vpcSubnetsHasBeenSet = true; m_vpcSubnets = std::move(value); }

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline CreateGameServerGroupRequest& WithVpcSubnets(const Aws::Vector<Aws::String>& value) { SetVpcSubnets(value); return *this;}

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline CreateGameServerGroupRequest& WithVpcSubnets(Aws::Vector<Aws::String>&& value) { SetVpcSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline CreateGameServerGroupRequest& AddVpcSubnets(const Aws::String& value) { m_vpcSubnetsHasBeenSet = true; m_vpcSubnets.push_back(value); return *this; }

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline CreateGameServerGroupRequest& AddVpcSubnets(Aws::String&& value) { m_vpcSubnetsHasBeenSet = true; m_vpcSubnets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of virtual private cloud (VPC) subnets to use with instances in the
     * game server group. By default, all Amazon GameLift FleetIQ-supported
     * Availability Zones are used. You can use this parameter to specify VPCs that
     * you've set up. This property cannot be updated after the game server group is
     * created, and the corresponding Auto Scaling group will always use the property
     * value that is set with this request, even if the Auto Scaling group is updated
     * directly.</p>
     */
    inline CreateGameServerGroupRequest& AddVpcSubnets(const char* value) { m_vpcSubnetsHasBeenSet = true; m_vpcSubnets.push_back(value); return *this; }


    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateGameServerGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateGameServerGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateGameServerGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new game server group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management, and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateGameServerGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    Aws::Vector<InstanceDefinition> m_instanceDefinitions;
    bool m_instanceDefinitionsHasBeenSet = false;

    GameServerGroupAutoScalingPolicy m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet = false;

    BalancingStrategy m_balancingStrategy;
    bool m_balancingStrategyHasBeenSet = false;

    GameServerProtectionPolicy m_gameServerProtectionPolicy;
    bool m_gameServerProtectionPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSubnets;
    bool m_vpcSubnetsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
