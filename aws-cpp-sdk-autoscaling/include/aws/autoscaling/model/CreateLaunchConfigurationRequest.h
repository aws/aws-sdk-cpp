/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/InstanceMonitoring.h>
#include <aws/autoscaling/model/InstanceMetadataOptions.h>
#include <aws/autoscaling/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class AWS_AUTOSCALING_API CreateLaunchConfigurationRequest : public AutoScalingRequest
  {
  public:
    CreateLaunchConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchConfiguration"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline CreateLaunchConfigurationRequest& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline CreateLaunchConfigurationRequest& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch configuration. This name must be unique per Region per
     * account.</p>
     */
    inline CreateLaunchConfigurationRequest& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}


    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that was assigned during
     * registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>If
     * you do not specify <code>InstanceId</code>, you must specify
     * <code>ImageId</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group.</p> <p>[EC2-VPC] Specify the security group IDs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p> <p>[EC2-Classic] Specify either the security group names or the
     * security group IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
     * EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline const Aws::String& GetClassicLinkVPCId() const{ return m_classicLinkVPCId; }

    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline bool ClassicLinkVPCIdHasBeenSet() const { return m_classicLinkVPCIdHasBeenSet; }

    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline void SetClassicLinkVPCId(const Aws::String& value) { m_classicLinkVPCIdHasBeenSet = true; m_classicLinkVPCId = value; }

    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline void SetClassicLinkVPCId(Aws::String&& value) { m_classicLinkVPCIdHasBeenSet = true; m_classicLinkVPCId = std::move(value); }

    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline void SetClassicLinkVPCId(const char* value) { m_classicLinkVPCIdHasBeenSet = true; m_classicLinkVPCId.assign(value); }

    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline CreateLaunchConfigurationRequest& WithClassicLinkVPCId(const Aws::String& value) { SetClassicLinkVPCId(value); return *this;}

    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline CreateLaunchConfigurationRequest& WithClassicLinkVPCId(Aws::String&& value) { SetClassicLinkVPCId(std::move(value)); return *this;}

    /**
     * <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>This parameter can only be used if you are launching
     * EC2-Classic instances.</p>
     */
    inline CreateLaunchConfigurationRequest& WithClassicLinkVPCId(const char* value) { SetClassicLinkVPCId(value); return *this;}


    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassicLinkVPCSecurityGroups() const{ return m_classicLinkVPCSecurityGroups; }

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline bool ClassicLinkVPCSecurityGroupsHasBeenSet() const { return m_classicLinkVPCSecurityGroupsHasBeenSet; }

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline void SetClassicLinkVPCSecurityGroups(const Aws::Vector<Aws::String>& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups = value; }

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline void SetClassicLinkVPCSecurityGroups(Aws::Vector<Aws::String>&& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups = std::move(value); }

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline CreateLaunchConfigurationRequest& WithClassicLinkVPCSecurityGroups(const Aws::Vector<Aws::String>& value) { SetClassicLinkVPCSecurityGroups(value); return *this;}

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline CreateLaunchConfigurationRequest& WithClassicLinkVPCSecurityGroups(Aws::Vector<Aws::String>&& value) { SetClassicLinkVPCSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline CreateLaunchConfigurationRequest& AddClassicLinkVPCSecurityGroups(const Aws::String& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline CreateLaunchConfigurationRequest& AddClassicLinkVPCSecurityGroups(Aws::String&& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more security groups for the specified ClassicLink-enabled
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking
     * EC2-Classic instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify the <code>ClassicLinkVPCId</code> parameter,
     * you must specify this parameter.</p>
     */
    inline CreateLaunchConfigurationRequest& AddClassicLinkVPCSecurityGroups(const char* value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups.push_back(value); return *this; }


    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The Base64-encoded user data to make available to the launched EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance to use to create the launch configuration. The new
     * launch configuration derives attributes from the instance, except for the block
     * device mapping.</p> <p>To create a launch configuration with a block device
     * mapping or override any other instance attributes, specify them as part of the
     * same request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Creating
     * a launch configuration using an EC2 instance</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>If you do not specify <code>InstanceId</code>,
     * you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>Specifies the instance type of the EC2 instance.</p> <p>For information about
     * available instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i> </p>
     * <p>If you do not specify <code>InstanceId</code>, you must specify
     * <code>InstanceType</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline CreateLaunchConfigurationRequest& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline CreateLaunchConfigurationRequest& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline CreateLaunchConfigurationRequest& WithKernelId(const char* value) { SetKernelId(value); return *this;}


    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }

    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }

    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline CreateLaunchConfigurationRequest& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline CreateLaunchConfigurationRequest& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk to select.</p>
     */
    inline CreateLaunchConfigurationRequest& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>A block device mapping, which specifies the block devices for the instance.
     * You can specify virtual devices and EBS volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>The default
     * value is <code>true</code> (enabled).</p>  <p>When detailed
     * monitoring is enabled, Amazon CloudWatch generates metrics every minute and your
     * account is charged a fee. When you disable detailed monitoring, CloudWatch
     * generates metrics every 5 minutes. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> 
     */
    inline const InstanceMonitoring& GetInstanceMonitoring() const{ return m_instanceMonitoring; }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>The default
     * value is <code>true</code> (enabled).</p>  <p>When detailed
     * monitoring is enabled, Amazon CloudWatch generates metrics every minute and your
     * account is charged a fee. When you disable detailed monitoring, CloudWatch
     * generates metrics every 5 minutes. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> 
     */
    inline bool InstanceMonitoringHasBeenSet() const { return m_instanceMonitoringHasBeenSet; }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>The default
     * value is <code>true</code> (enabled).</p>  <p>When detailed
     * monitoring is enabled, Amazon CloudWatch generates metrics every minute and your
     * account is charged a fee. When you disable detailed monitoring, CloudWatch
     * generates metrics every 5 minutes. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> 
     */
    inline void SetInstanceMonitoring(const InstanceMonitoring& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = value; }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>The default
     * value is <code>true</code> (enabled).</p>  <p>When detailed
     * monitoring is enabled, Amazon CloudWatch generates metrics every minute and your
     * account is charged a fee. When you disable detailed monitoring, CloudWatch
     * generates metrics every 5 minutes. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> 
     */
    inline void SetInstanceMonitoring(InstanceMonitoring&& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = std::move(value); }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>The default
     * value is <code>true</code> (enabled).</p>  <p>When detailed
     * monitoring is enabled, Amazon CloudWatch generates metrics every minute and your
     * account is charged a fee. When you disable detailed monitoring, CloudWatch
     * generates metrics every 5 minutes. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> 
     */
    inline CreateLaunchConfigurationRequest& WithInstanceMonitoring(const InstanceMonitoring& value) { SetInstanceMonitoring(value); return *this;}

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>The default
     * value is <code>true</code> (enabled).</p>  <p>When detailed
     * monitoring is enabled, Amazon CloudWatch generates metrics every minute and your
     * account is charged a fee. When you disable detailed monitoring, CloudWatch
     * generates metrics every 5 minutes. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> 
     */
    inline CreateLaunchConfigurationRequest& WithInstanceMonitoring(InstanceMonitoring&& value) { SetInstanceMonitoring(std::move(value)); return *this;}


    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline CreateLaunchConfigurationRequest& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline CreateLaunchConfigurationRequest& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p> 
     * <p>When you change your maximum price by creating a new launch configuration,
     * running instances will continue to run as long as the maximum price for those
     * running instances is higher than the current Spot price.</p> 
     */
    inline CreateLaunchConfigurationRequest& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}


    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetIamInstanceProfile(const Aws::String& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetIamInstanceProfile(Aws::String&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetIamInstanceProfile(const char* value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile.assign(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithIamInstanceProfile(const Aws::String& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithIamInstanceProfile(Aws::String&& value) { SetIamInstanceProfile(std::move(value)); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM
     * role.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithIamInstanceProfile(const char* value) { SetIamInstanceProfile(value); return *this;}


    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). The optimization provides
     * dedicated throughput to Amazon EBS and an optimized configuration stack to
     * provide optimal I/O performance. This optimization is not available with all
     * instance types. Additional fees are incurred when you enable EBS optimization
     * for an instance type that is not EBS-optimized by default. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>The default value is <code>false</code>.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). The optimization provides
     * dedicated throughput to Amazon EBS and an optimized configuration stack to
     * provide optimal I/O performance. This optimization is not available with all
     * instance types. Additional fees are incurred when you enable EBS optimization
     * for an instance type that is not EBS-optimized by default. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>The default value is <code>false</code>.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). The optimization provides
     * dedicated throughput to Amazon EBS and an optimized configuration stack to
     * provide optimal I/O performance. This optimization is not available with all
     * instance types. Additional fees are incurred when you enable EBS optimization
     * for an instance type that is not EBS-optimized by default. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>The default value is <code>false</code>.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). The optimization provides
     * dedicated throughput to Amazon EBS and an optimized configuration stack to
     * provide optimal I/O performance. This optimization is not available with all
     * instance types. Additional fees are incurred when you enable EBS optimization
     * for an instance type that is not EBS-optimized by default. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>The default value is <code>false</code>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>For Auto Scaling groups that are running in a virtual private cloud (VPC),
     * specifies whether to assign a public IP address to the group's instances. If you
     * specify <code>true</code>, each instance in the Auto Scaling group receives a
     * unique public IP address. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify this parameter, you must specify at least one
     * subnet for <code>VPCZoneIdentifier</code> when you create your group.</p> 
     * <p>If the instance is launched into a default subnet, the default is to assign a
     * public IP address, unless you disabled the option to assign a public IP address
     * on the subnet. If the instance is launched into a nondefault subnet, the default
     * is not to assign a public IP address, unless you enabled the option to assign a
     * public IP address on the subnet.</p> 
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>For Auto Scaling groups that are running in a virtual private cloud (VPC),
     * specifies whether to assign a public IP address to the group's instances. If you
     * specify <code>true</code>, each instance in the Auto Scaling group receives a
     * unique public IP address. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify this parameter, you must specify at least one
     * subnet for <code>VPCZoneIdentifier</code> when you create your group.</p> 
     * <p>If the instance is launched into a default subnet, the default is to assign a
     * public IP address, unless you disabled the option to assign a public IP address
     * on the subnet. If the instance is launched into a nondefault subnet, the default
     * is not to assign a public IP address, unless you enabled the option to assign a
     * public IP address on the subnet.</p> 
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>For Auto Scaling groups that are running in a virtual private cloud (VPC),
     * specifies whether to assign a public IP address to the group's instances. If you
     * specify <code>true</code>, each instance in the Auto Scaling group receives a
     * unique public IP address. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify this parameter, you must specify at least one
     * subnet for <code>VPCZoneIdentifier</code> when you create your group.</p> 
     * <p>If the instance is launched into a default subnet, the default is to assign a
     * public IP address, unless you disabled the option to assign a public IP address
     * on the subnet. If the instance is launched into a nondefault subnet, the default
     * is not to assign a public IP address, unless you enabled the option to assign a
     * public IP address on the subnet.</p> 
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>For Auto Scaling groups that are running in a virtual private cloud (VPC),
     * specifies whether to assign a public IP address to the group's instances. If you
     * specify <code>true</code>, each instance in the Auto Scaling group receives a
     * unique public IP address. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p> <p>If you specify this parameter, you must specify at least one
     * subnet for <code>VPCZoneIdentifier</code> when you create your group.</p> 
     * <p>If the instance is launched into a default subnet, the default is to assign a
     * public IP address, unless you disabled the option to assign a public IP address
     * on the subnet. If the instance is launched into a nondefault subnet, the default
     * is not to assign a public IP address, unless you enabled the option to assign a
     * public IP address on the subnet.</p> 
     */
    inline CreateLaunchConfigurationRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline const Aws::String& GetPlacementTenancy() const{ return m_placementTenancy; }

    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline bool PlacementTenancyHasBeenSet() const { return m_placementTenancyHasBeenSet; }

    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline void SetPlacementTenancy(const Aws::String& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = value; }

    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline void SetPlacementTenancy(Aws::String&& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = std::move(value); }

    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline void SetPlacementTenancy(const char* value) { m_placementTenancyHasBeenSet = true; m_placementTenancy.assign(value); }

    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline CreateLaunchConfigurationRequest& WithPlacementTenancy(const Aws::String& value) { SetPlacementTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline CreateLaunchConfigurationRequest& WithPlacementTenancy(Aws::String&& value) { SetPlacementTenancy(std::move(value)); return *this;}

    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p> <p>To launch dedicated instances into a shared tenancy VPC (a VPC with
     * the instance placement tenancy attribute set to <code>default</code>), you must
     * set the value of this parameter to <code>dedicated</code>.</p> <p>If you specify
     * <code>PlacementTenancy</code>, you must specify at least one subnet for
     * <code>VPCZoneIdentifier</code> when you create your group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid Values: <code>default</code> |
     * <code>dedicated</code> </p>
     */
    inline CreateLaunchConfigurationRequest& WithPlacementTenancy(const char* value) { SetPlacementTenancy(value); return *this;}


    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
     * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const InstanceMetadataOptions& GetMetadataOptions() const{ return m_metadataOptions; }

    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
     * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }

    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
     * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetMetadataOptions(const InstanceMetadataOptions& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }

    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
     * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetMetadataOptions(InstanceMetadataOptions&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }

    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
     * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithMetadataOptions(const InstanceMetadataOptions& value) { SetMetadataOptions(value); return *this;}

    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
     * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateLaunchConfigurationRequest& WithMetadataOptions(InstanceMetadataOptions&& value) { SetMetadataOptions(std::move(value)); return *this;}

  private:

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_classicLinkVPCId;
    bool m_classicLinkVPCIdHasBeenSet;

    Aws::Vector<Aws::String> m_classicLinkVPCSecurityGroups;
    bool m_classicLinkVPCSecurityGroupsHasBeenSet;

    Aws::String m_userData;
    bool m_userDataHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    InstanceMonitoring m_instanceMonitoring;
    bool m_instanceMonitoringHasBeenSet;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet;

    Aws::String m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet;

    Aws::String m_placementTenancy;
    bool m_placementTenancyHasBeenSet;

    InstanceMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
