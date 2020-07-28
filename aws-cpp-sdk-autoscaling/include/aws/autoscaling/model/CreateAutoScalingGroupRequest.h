/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
#include <aws/autoscaling/model/MixedInstancesPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/LifecycleHookSpecification.h>
#include <aws/autoscaling/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class AWS_AUTOSCALING_API CreateAutoScalingGroupRequest : public AutoScalingRequest
  {
  public:
    CreateAutoScalingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoScalingGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group. This name must be unique per Region per
     * account.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }

    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch configuration to use when an instance is launched. To
     * get the launch configuration name, use the <a>DescribeLaunchConfigurations</a>
     * API operation. New launch configurations can be created with the
     * <a>CreateLaunchConfiguration</a> API.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}


    /**
     * <p>Parameters used to specify the launch template and version to use when an
     * instance is launched.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_LaunchTemplateSpecification.html">LaunchTemplateSpecification</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>You can
     * alternatively associate a launch template to the Auto Scaling group by using the
     * <code>MixedInstancesPolicy</code> parameter.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>Parameters used to specify the launch template and version to use when an
     * instance is launched.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_LaunchTemplateSpecification.html">LaunchTemplateSpecification</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>You can
     * alternatively associate a launch template to the Auto Scaling group by using the
     * <code>MixedInstancesPolicy</code> parameter.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>Parameters used to specify the launch template and version to use when an
     * instance is launched.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_LaunchTemplateSpecification.html">LaunchTemplateSpecification</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>You can
     * alternatively associate a launch template to the Auto Scaling group by using the
     * <code>MixedInstancesPolicy</code> parameter.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>Parameters used to specify the launch template and version to use when an
     * instance is launched.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_LaunchTemplateSpecification.html">LaunchTemplateSpecification</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>You can
     * alternatively associate a launch template to the Auto Scaling group by using the
     * <code>MixedInstancesPolicy</code> parameter.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>Parameters used to specify the launch template and version to use when an
     * instance is launched.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_LaunchTemplateSpecification.html">LaunchTemplateSpecification</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>You can
     * alternatively associate a launch template to the Auto Scaling group by using the
     * <code>MixedInstancesPolicy</code> parameter.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>Parameters used to specify the launch template and version to use when an
     * instance is launched.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_LaunchTemplateSpecification.html">LaunchTemplateSpecification</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p> <p>You can
     * alternatively associate a launch template to the Auto Scaling group by using the
     * <code>MixedInstancesPolicy</code> parameter.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>An embedded object that specifies a mixed instances policy. The required
     * parameters must be specified. If optional parameters are unspecified, their
     * default values are used.</p> <p>The policy includes parameters that not only
     * define the distribution of On-Demand Instances and Spot Instances, the maximum
     * price to pay for Spot Instances, and how the Auto Scaling group allocates
     * instance types to fulfill On-Demand and Spot capacity, but also the parameters
     * that specify the instance configuration information—the launch template and
     * instance types.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_MixedInstancesPolicy.html">MixedInstancesPolicy</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto
     * Scaling Groups with Multiple Instance Types and Purchase Options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline const MixedInstancesPolicy& GetMixedInstancesPolicy() const{ return m_mixedInstancesPolicy; }

    /**
     * <p>An embedded object that specifies a mixed instances policy. The required
     * parameters must be specified. If optional parameters are unspecified, their
     * default values are used.</p> <p>The policy includes parameters that not only
     * define the distribution of On-Demand Instances and Spot Instances, the maximum
     * price to pay for Spot Instances, and how the Auto Scaling group allocates
     * instance types to fulfill On-Demand and Spot capacity, but also the parameters
     * that specify the instance configuration information—the launch template and
     * instance types.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_MixedInstancesPolicy.html">MixedInstancesPolicy</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto
     * Scaling Groups with Multiple Instance Types and Purchase Options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }

    /**
     * <p>An embedded object that specifies a mixed instances policy. The required
     * parameters must be specified. If optional parameters are unspecified, their
     * default values are used.</p> <p>The policy includes parameters that not only
     * define the distribution of On-Demand Instances and Spot Instances, the maximum
     * price to pay for Spot Instances, and how the Auto Scaling group allocates
     * instance types to fulfill On-Demand and Spot capacity, but also the parameters
     * that specify the instance configuration information—the launch template and
     * instance types.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_MixedInstancesPolicy.html">MixedInstancesPolicy</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto
     * Scaling Groups with Multiple Instance Types and Purchase Options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetMixedInstancesPolicy(const MixedInstancesPolicy& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = value; }

    /**
     * <p>An embedded object that specifies a mixed instances policy. The required
     * parameters must be specified. If optional parameters are unspecified, their
     * default values are used.</p> <p>The policy includes parameters that not only
     * define the distribution of On-Demand Instances and Spot Instances, the maximum
     * price to pay for Spot Instances, and how the Auto Scaling group allocates
     * instance types to fulfill On-Demand and Spot capacity, but also the parameters
     * that specify the instance configuration information—the launch template and
     * instance types.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_MixedInstancesPolicy.html">MixedInstancesPolicy</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto
     * Scaling Groups with Multiple Instance Types and Purchase Options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetMixedInstancesPolicy(MixedInstancesPolicy&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::move(value); }

    /**
     * <p>An embedded object that specifies a mixed instances policy. The required
     * parameters must be specified. If optional parameters are unspecified, their
     * default values are used.</p> <p>The policy includes parameters that not only
     * define the distribution of On-Demand Instances and Spot Instances, the maximum
     * price to pay for Spot Instances, and how the Auto Scaling group allocates
     * instance types to fulfill On-Demand and Spot capacity, but also the parameters
     * that specify the instance configuration information—the launch template and
     * instance types.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_MixedInstancesPolicy.html">MixedInstancesPolicy</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto
     * Scaling Groups with Multiple Instance Types and Purchase Options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithMixedInstancesPolicy(const MixedInstancesPolicy& value) { SetMixedInstancesPolicy(value); return *this;}

    /**
     * <p>An embedded object that specifies a mixed instances policy. The required
     * parameters must be specified. If optional parameters are unspecified, their
     * default values are used.</p> <p>The policy includes parameters that not only
     * define the distribution of On-Demand Instances and Spot Instances, the maximum
     * price to pay for Spot Instances, and how the Auto Scaling group allocates
     * instance types to fulfill On-Demand and Spot capacity, but also the parameters
     * that specify the instance configuration information—the launch template and
     * instance types.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_MixedInstancesPolicy.html">MixedInstancesPolicy</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto
     * Scaling Groups with Multiple Instance Types and Purchase Options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithMixedInstancesPolicy(MixedInstancesPolicy&& value) { SetMixedInstancesPolicy(std::move(value)); return *this;}


    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * To get the instance ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * API operation.</p> <p>When you specify an ID of an instance, Amazon EC2 Auto
     * Scaling creates a new launch configuration and associates it with the group.
     * This launch configuration derives its attributes from the specified instance,
     * except for the block device mapping.</p> <p>You must specify one of the
     * following parameters in your request: <code>LaunchConfigurationName</code>,
     * <code>LaunchTemplate</code>, <code>InstanceId</code>, or
     * <code>MixedInstancesPolicy</code>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The minimum size of the group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline CreateAutoScalingGroupRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum size of the group.</p>  <p>With a mixed instances policy
     * that uses instance weighting, Amazon EC2 Auto Scaling may need to go above
     * <code>MaxSize</code> to meet your capacity requirements. In this event, Amazon
     * EC2 Auto Scaling will never go above <code>MaxSize</code> by more than your
     * largest instance weight (weights that define how many units each instance
     * contributes to the desired capacity of the group).</p> 
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size of the group.</p>  <p>With a mixed instances policy
     * that uses instance weighting, Amazon EC2 Auto Scaling may need to go above
     * <code>MaxSize</code> to meet your capacity requirements. In this event, Amazon
     * EC2 Auto Scaling will never go above <code>MaxSize</code> by more than your
     * largest instance weight (weights that define how many units each instance
     * contributes to the desired capacity of the group).</p> 
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum size of the group.</p>  <p>With a mixed instances policy
     * that uses instance weighting, Amazon EC2 Auto Scaling may need to go above
     * <code>MaxSize</code> to meet your capacity requirements. In this event, Amazon
     * EC2 Auto Scaling will never go above <code>MaxSize</code> by more than your
     * largest instance weight (weights that define how many units each instance
     * contributes to the desired capacity of the group).</p> 
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size of the group.</p>  <p>With a mixed instances policy
     * that uses instance weighting, Amazon EC2 Auto Scaling may need to go above
     * <code>MaxSize</code> to meet your capacity requirements. In this event, Amazon
     * EC2 Auto Scaling will never go above <code>MaxSize</code> by more than your
     * largest instance weight (weights that define how many units each instance
     * contributes to the desired capacity of the group).</p> 
     */
    inline CreateAutoScalingGroupRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group at the
     * time of its creation and the capacity it attempts to maintain. It can scale
     * beyond this capacity if you configure automatic scaling.</p> <p>This number must
     * be greater than or equal to the minimum size of the group and less than or equal
     * to the maximum size of the group. If you do not specify a desired capacity, the
     * default is the minimum size of the group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group at the
     * time of its creation and the capacity it attempts to maintain. It can scale
     * beyond this capacity if you configure automatic scaling.</p> <p>This number must
     * be greater than or equal to the minimum size of the group and less than or equal
     * to the maximum size of the group. If you do not specify a desired capacity, the
     * default is the minimum size of the group.</p>
     */
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }

    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group at the
     * time of its creation and the capacity it attempts to maintain. It can scale
     * beyond this capacity if you configure automatic scaling.</p> <p>This number must
     * be greater than or equal to the minimum size of the group and less than or equal
     * to the maximum size of the group. If you do not specify a desired capacity, the
     * default is the minimum size of the group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group at the
     * time of its creation and the capacity it attempts to maintain. It can scale
     * beyond this capacity if you configure automatic scaling.</p> <p>This number must
     * be greater than or equal to the minimum size of the group and less than or equal
     * to the maximum size of the group. If you do not specify a desired capacity, the
     * default is the minimum size of the group.</p>
     */
    inline CreateAutoScalingGroupRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before
     * another scaling activity can start. The default value is <code>300</code>.</p>
     * <p>This setting applies when using simple scaling policies, but not when using
     * other scaling policies or scheduled scaling. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline int GetDefaultCooldown() const{ return m_defaultCooldown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before
     * another scaling activity can start. The default value is <code>300</code>.</p>
     * <p>This setting applies when using simple scaling policies, but not when using
     * other scaling policies or scheduled scaling. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool DefaultCooldownHasBeenSet() const { return m_defaultCooldownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before
     * another scaling activity can start. The default value is <code>300</code>.</p>
     * <p>This setting applies when using simple scaling policies, but not when using
     * other scaling policies or scheduled scaling. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetDefaultCooldown(int value) { m_defaultCooldownHasBeenSet = true; m_defaultCooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before
     * another scaling activity can start. The default value is <code>300</code>.</p>
     * <p>This setting applies when using simple scaling policies, but not when using
     * other scaling policies or scheduled scaling. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling
     * Cooldowns for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithDefaultCooldown(int value) { SetDefaultCooldown(value); return *this;}


    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline CreateAutoScalingGroupRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline CreateAutoScalingGroupRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p>
     * <p>Conditional: If your account supports EC2-Classic and VPC, this parameter is
     * required to launch instances into EC2-Classic.</p>
     */
    inline CreateAutoScalingGroupRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline void SetLoadBalancerNames(Aws::Vector<Aws::String>&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::move(value); }

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLoadBalancerNames(Aws::Vector<Aws::String>&& value) { SetLoadBalancerNames(std::move(value)); return *this;}

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLoadBalancerNames(Aws::String&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Classic Load Balancers associated with this Auto Scaling group. For
     * Application Load Balancers and Network Load Balancers, specify a list of target
     * groups using the <code>TargetGroupARNs</code> property instead.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupARNs() const{ return m_targetGroupARNs; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline bool TargetGroupARNsHasBeenSet() const { return m_targetGroupARNsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline void SetTargetGroupARNs(const Aws::Vector<Aws::String>& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline void SetTargetGroupARNs(Aws::Vector<Aws::String>&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTargetGroupARNs(const Aws::Vector<Aws::String>& value) { SetTargetGroupARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTargetGroupARNs(Aws::Vector<Aws::String>&& value) { SetTargetGroupARNs(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTargetGroupARNs(const Aws::String& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTargetGroupARNs(Aws::String&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups to associate with the
     * Auto Scaling group. Instances are registered as targets in a target group, and
     * traffic is routed to the target group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using
     * a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTargetGroupARNs(const char* value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(value); return *this; }


    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool HealthCheckTypeHasBeenSet() const { return m_healthCheckTypeHasBeenSet; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = std::move(value); }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(std::move(value)); return *this;}

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If
     * you configure an Auto Scaling group to use ELB health checks, it considers the
     * instance unhealthy if it fails either the EC2 status checks or the load balancer
     * health checks.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health
     * Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}


    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before
     * checking the health status of an EC2 instance that has come into service. During
     * this time, any health check failures for the instance are ignored. The default
     * value is <code>0</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html#health-check-grace-period">Health
     * Check Grace Period</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     * <p>Required if you are adding an <code>ELB</code> health check.</p>
     */
    inline int GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }

    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before
     * checking the health status of an EC2 instance that has come into service. During
     * this time, any health check failures for the instance are ignored. The default
     * value is <code>0</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html#health-check-grace-period">Health
     * Check Grace Period</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     * <p>Required if you are adding an <code>ELB</code> health check.</p>
     */
    inline bool HealthCheckGracePeriodHasBeenSet() const { return m_healthCheckGracePeriodHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before
     * checking the health status of an EC2 instance that has come into service. During
     * this time, any health check failures for the instance are ignored. The default
     * value is <code>0</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html#health-check-grace-period">Health
     * Check Grace Period</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     * <p>Required if you are adding an <code>ELB</code> health check.</p>
     */
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }

    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before
     * checking the health status of an EC2 instance that has come into service. During
     * this time, any health check failures for the instance are ignored. The default
     * value is <code>0</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html#health-check-grace-period">Health
     * Check Grace Period</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     * <p>Required if you are adding an <code>ELB</code> health check.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}


    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }

    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool PlacementGroupHasBeenSet() const { return m_placementGroupHasBeenSet; }

    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetPlacementGroup(Aws::String&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::move(value); }

    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }

    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the placement group into which to launch your instances, if any.
     * A placement group is a logical grouping of instances within a single
     * Availability Zone. You cannot specify multiple Availability Zones and a
     * placement group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}


    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline const Aws::String& GetVPCZoneIdentifier() const{ return m_vPCZoneIdentifier; }

    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline bool VPCZoneIdentifierHasBeenSet() const { return m_vPCZoneIdentifierHasBeenSet; }

    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline void SetVPCZoneIdentifier(const Aws::String& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline void SetVPCZoneIdentifier(Aws::String&& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = std::move(value); }

    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline void SetVPCZoneIdentifier(const char* value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier.assign(value); }

    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline CreateAutoScalingGroupRequest& WithVPCZoneIdentifier(const Aws::String& value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline CreateAutoScalingGroupRequest& WithVPCZoneIdentifier(Aws::String&& value) { SetVPCZoneIdentifier(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of subnet IDs for your virtual private cloud
     * (VPC).</p> <p>If you specify <code>VPCZoneIdentifier</code> with
     * <code>AvailabilityZones</code>, the subnets that you specify for this parameter
     * must reside in those Availability Zones.</p> <p>Conditional: If your account
     * supports EC2-Classic and VPC, this parameter is required to launch instances
     * into a VPC.</p>
     */
    inline CreateAutoScalingGroupRequest& WithVPCZoneIdentifier(const char* value) { SetVPCZoneIdentifier(value); return *this;}


    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const{ return m_terminationPolicies; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline bool TerminationPoliciesHasBeenSet() const { return m_terminationPoliciesHasBeenSet; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetTerminationPolicies(const Aws::Vector<Aws::String>& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetTerminationPolicies(Aws::Vector<Aws::String>&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = std::move(value); }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTerminationPolicies(const Aws::Vector<Aws::String>& value) { SetTerminationPolicies(value); return *this;}

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTerminationPolicies(Aws::Vector<Aws::String>&& value) { SetTerminationPolicies(std::move(value)); return *this;}

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTerminationPolicies(const Aws::String& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTerminationPolicies(Aws::String&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTerminationPolicies(const char* value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }


    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p> <p>For more information about
     * preventing instances from terminating on scale in, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool GetNewInstancesProtectedFromScaleIn() const{ return m_newInstancesProtectedFromScaleIn; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p> <p>For more information about
     * preventing instances from terminating on scale in, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool NewInstancesProtectedFromScaleInHasBeenSet() const { return m_newInstancesProtectedFromScaleInHasBeenSet; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p> <p>For more information about
     * preventing instances from terminating on scale in, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetNewInstancesProtectedFromScaleIn(bool value) { m_newInstancesProtectedFromScaleInHasBeenSet = true; m_newInstancesProtectedFromScaleIn = value; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p> <p>For more information about
     * preventing instances from terminating on scale in, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithNewInstancesProtectedFromScaleIn(bool value) { SetNewInstancesProtectedFromScaleIn(value); return *this;}


    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline const Aws::Vector<LifecycleHookSpecification>& GetLifecycleHookSpecificationList() const{ return m_lifecycleHookSpecificationList; }

    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline bool LifecycleHookSpecificationListHasBeenSet() const { return m_lifecycleHookSpecificationListHasBeenSet; }

    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline void SetLifecycleHookSpecificationList(const Aws::Vector<LifecycleHookSpecification>& value) { m_lifecycleHookSpecificationListHasBeenSet = true; m_lifecycleHookSpecificationList = value; }

    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline void SetLifecycleHookSpecificationList(Aws::Vector<LifecycleHookSpecification>&& value) { m_lifecycleHookSpecificationListHasBeenSet = true; m_lifecycleHookSpecificationList = std::move(value); }

    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLifecycleHookSpecificationList(const Aws::Vector<LifecycleHookSpecification>& value) { SetLifecycleHookSpecificationList(value); return *this;}

    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLifecycleHookSpecificationList(Aws::Vector<LifecycleHookSpecification>&& value) { SetLifecycleHookSpecificationList(std::move(value)); return *this;}

    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLifecycleHookSpecificationList(const LifecycleHookSpecification& value) { m_lifecycleHookSpecificationListHasBeenSet = true; m_lifecycleHookSpecificationList.push_back(value); return *this; }

    /**
     * <p>One or more lifecycle hooks.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLifecycleHookSpecificationList(LifecycleHookSpecification&& value) { m_lifecycleHookSpecificationListHasBeenSet = true; m_lifecycleHookSpecificationList.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags. You can tag your Auto Scaling group and propagate the tags
     * to the Amazon EC2 instances it launches.</p> <p>Tags are not propagated to
     * Amazon EBS volumes. To add tags to Amazon EBS volumes, specify the tags in a
     * launch template but use caution. If the launch template specifies an instance
     * tag with a key that is also specified for the Auto Scaling group, Amazon EC2
     * Auto Scaling overrides the value of that instance tag with the value specified
     * by the Auto Scaling group.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceLinkedRoleARN() const{ return m_serviceLinkedRoleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool ServiceLinkedRoleARNHasBeenSet() const { return m_serviceLinkedRoleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetServiceLinkedRoleARN(const Aws::String& value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetServiceLinkedRoleARN(Aws::String&& value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetServiceLinkedRoleARN(const char* value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithServiceLinkedRoleARN(const Aws::String& value) { SetServiceLinkedRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithServiceLinkedRoleARN(Aws::String&& value) { SetServiceLinkedRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other AWS services on your behalf. By default, Amazon
     * EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling,
     * which it creates if it does not exist. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked
     * Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithServiceLinkedRoleARN(const char* value) { SetServiceLinkedRoleARN(value); return *this;}


    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in service.
     * The default is null.</p> <p>This parameter is optional, but if you specify a
     * value for it, you must specify a value of at least 604,800 seconds (7 days). To
     * clear a previously set value, specify a new value of 0.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-max-instance-lifetime.html">Replacing
     * Auto Scaling Instances Based on Maximum Instance Lifetime</a> in the <i>Amazon
     * EC2 Auto Scaling User Guide</i>.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline int GetMaxInstanceLifetime() const{ return m_maxInstanceLifetime; }

    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in service.
     * The default is null.</p> <p>This parameter is optional, but if you specify a
     * value for it, you must specify a value of at least 604,800 seconds (7 days). To
     * clear a previously set value, specify a new value of 0.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-max-instance-lifetime.html">Replacing
     * Auto Scaling Instances Based on Maximum Instance Lifetime</a> in the <i>Amazon
     * EC2 Auto Scaling User Guide</i>.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline bool MaxInstanceLifetimeHasBeenSet() const { return m_maxInstanceLifetimeHasBeenSet; }

    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in service.
     * The default is null.</p> <p>This parameter is optional, but if you specify a
     * value for it, you must specify a value of at least 604,800 seconds (7 days). To
     * clear a previously set value, specify a new value of 0.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-max-instance-lifetime.html">Replacing
     * Auto Scaling Instances Based on Maximum Instance Lifetime</a> in the <i>Amazon
     * EC2 Auto Scaling User Guide</i>.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline void SetMaxInstanceLifetime(int value) { m_maxInstanceLifetimeHasBeenSet = true; m_maxInstanceLifetime = value; }

    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in service.
     * The default is null.</p> <p>This parameter is optional, but if you specify a
     * value for it, you must specify a value of at least 604,800 seconds (7 days). To
     * clear a previously set value, specify a new value of 0.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-max-instance-lifetime.html">Replacing
     * Auto Scaling Instances Based on Maximum Instance Lifetime</a> in the <i>Amazon
     * EC2 Auto Scaling User Guide</i>.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline CreateAutoScalingGroupRequest& WithMaxInstanceLifetime(int value) { SetMaxInstanceLifetime(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet;

    MixedInstancesPolicy m_mixedInstancesPolicy;
    bool m_mixedInstancesPolicyHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    int m_minSize;
    bool m_minSizeHasBeenSet;

    int m_maxSize;
    bool m_maxSizeHasBeenSet;

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet;

    int m_defaultCooldown;
    bool m_defaultCooldownHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet;

    Aws::Vector<Aws::String> m_targetGroupARNs;
    bool m_targetGroupARNsHasBeenSet;

    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet;

    int m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet;

    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet;

    Aws::String m_vPCZoneIdentifier;
    bool m_vPCZoneIdentifierHasBeenSet;

    Aws::Vector<Aws::String> m_terminationPolicies;
    bool m_terminationPoliciesHasBeenSet;

    bool m_newInstancesProtectedFromScaleIn;
    bool m_newInstancesProtectedFromScaleInHasBeenSet;

    Aws::Vector<LifecycleHookSpecification> m_lifecycleHookSpecificationList;
    bool m_lifecycleHookSpecificationListHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_serviceLinkedRoleARN;
    bool m_serviceLinkedRoleARNHasBeenSet;

    int m_maxInstanceLifetime;
    bool m_maxInstanceLifetimeHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
