/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/InstanceMonitoring.h>
#include <aws/core/utils/DateTime.h>
#include <aws/autoscaling/model/InstanceMetadataOptions.h>
#include <aws/autoscaling/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a launch configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchConfiguration">AWS
   * API Reference</a></p>
   */
  class LaunchConfiguration
  {
  public:
    AWS_AUTOSCALING_API LaunchConfiguration();
    AWS_AUTOSCALING_API LaunchConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LaunchConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline LaunchConfiguration& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline LaunchConfiguration& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline LaunchConfiguration& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationARN() const{ return m_launchConfigurationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline bool LaunchConfigurationARNHasBeenSet() const { return m_launchConfigurationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationARN(const Aws::String& value) { m_launchConfigurationARNHasBeenSet = true; m_launchConfigurationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationARN(Aws::String&& value) { m_launchConfigurationARNHasBeenSet = true; m_launchConfigurationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationARN(const char* value) { m_launchConfigurationARNHasBeenSet = true; m_launchConfigurationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline LaunchConfiguration& WithLaunchConfigurationARN(const Aws::String& value) { SetLaunchConfigurationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline LaunchConfiguration& WithLaunchConfigurationARN(Aws::String&& value) { SetLaunchConfigurationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
     */
    inline LaunchConfiguration& WithLaunchConfigurationARN(const char* value) { SetLaunchConfigurationARN(value); return *this;}


    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Find
     * a Linux AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list that contains the security groups to assign to the instances in the
     * Auto Scaling group. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>Available for backward compatibility.</p>
     */
    inline const Aws::String& GetClassicLinkVPCId() const{ return m_classicLinkVPCId; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline bool ClassicLinkVPCIdHasBeenSet() const { return m_classicLinkVPCIdHasBeenSet; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline void SetClassicLinkVPCId(const Aws::String& value) { m_classicLinkVPCIdHasBeenSet = true; m_classicLinkVPCId = value; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline void SetClassicLinkVPCId(Aws::String&& value) { m_classicLinkVPCIdHasBeenSet = true; m_classicLinkVPCId = std::move(value); }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline void SetClassicLinkVPCId(const char* value) { m_classicLinkVPCIdHasBeenSet = true; m_classicLinkVPCId.assign(value); }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& WithClassicLinkVPCId(const Aws::String& value) { SetClassicLinkVPCId(value); return *this;}

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& WithClassicLinkVPCId(Aws::String&& value) { SetClassicLinkVPCId(std::move(value)); return *this;}

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& WithClassicLinkVPCId(const char* value) { SetClassicLinkVPCId(value); return *this;}


    /**
     * <p>Available for backward compatibility.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassicLinkVPCSecurityGroups() const{ return m_classicLinkVPCSecurityGroups; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline bool ClassicLinkVPCSecurityGroupsHasBeenSet() const { return m_classicLinkVPCSecurityGroupsHasBeenSet; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline void SetClassicLinkVPCSecurityGroups(const Aws::Vector<Aws::String>& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups = value; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline void SetClassicLinkVPCSecurityGroups(Aws::Vector<Aws::String>&& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups = std::move(value); }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& WithClassicLinkVPCSecurityGroups(const Aws::Vector<Aws::String>& value) { SetClassicLinkVPCSecurityGroups(value); return *this;}

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& WithClassicLinkVPCSecurityGroups(Aws::Vector<Aws::String>&& value) { SetClassicLinkVPCSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& AddClassicLinkVPCSecurityGroups(const Aws::String& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups.push_back(value); return *this; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& AddClassicLinkVPCSecurityGroups(Aws::String&& value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>Available for backward compatibility.</p>
     */
    inline LaunchConfiguration& AddClassicLinkVPCSecurityGroups(const char* value) { m_classicLinkVPCSecurityGroupsHasBeenSet = true; m_classicLinkVPCSecurityGroups.push_back(value); return *this; }


    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline LaunchConfiguration& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline LaunchConfiguration& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p>The user data to make available to the launched EC2 instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Linux) and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> (Windows). If you are using a command line tool,
     * base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide base64-encoded text. User data is limited to 16
     * KB.</p>
     */
    inline LaunchConfiguration& WithUserData(const char* value) { SetUserData(value); return *this;}


    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type for the instances. For information about available instance
     * types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available
     * instance types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


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
    inline LaunchConfiguration& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline LaunchConfiguration& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the kernel associated with the AMI.</p>
     */
    inline LaunchConfiguration& WithKernelId(const char* value) { SetKernelId(value); return *this;}


    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }

    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }

    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline LaunchConfiguration& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline LaunchConfiguration& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the RAM disk associated with the AMI.</p>
     */
    inline LaunchConfiguration& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mapping entries that define the block devices to attach to
     * the instances at launch. By default, the block devices specified in the block
     * device mapping for the AMI are used. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline LaunchConfiguration& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const InstanceMonitoring& GetInstanceMonitoring() const{ return m_instanceMonitoring; }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool InstanceMonitoringHasBeenSet() const { return m_instanceMonitoringHasBeenSet; }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetInstanceMonitoring(const InstanceMonitoring& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = value; }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetInstanceMonitoring(InstanceMonitoring&& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = std::move(value); }

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& WithInstanceMonitoring(const InstanceMonitoring& value) { SetInstanceMonitoring(value); return *this;}

    /**
     * <p>Controls whether instances in this group are launched with detailed
     * (<code>true</code>) or basic (<code>false</code>) monitoring.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/latest/userguide/enable-as-instance-metrics.html">Configure
     * Monitoring for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& WithInstanceMonitoring(InstanceMonitoring&& value) { SetInstanceMonitoring(std::move(value)); return *this;}


    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill
     * the request. Spot Instances are launched when the price you specify exceeds the
     * current Spot price. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Requesting
     * Spot Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}


    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetIamInstanceProfile(const Aws::String& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetIamInstanceProfile(Aws::String&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline void SetIamInstanceProfile(const char* value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile.assign(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithIamInstanceProfile(const Aws::String& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithIamInstanceProfile(Aws::String&& value) { SetIamInstanceProfile(std::move(value)); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the instance profile associated
     * with the IAM role for the instance. The instance profile contains the IAM role.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM
     * role for applications that run on Amazon EC2 instances</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithIamInstanceProfile(const char* value) { SetIamInstanceProfile(value); return *this;}


    /**
     * <p>The creation date and time for the launch configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The creation date and time for the launch configuration.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The creation date and time for the launch configuration.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The creation date and time for the launch configuration.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The creation date and time for the launch configuration.</p>
     */
    inline LaunchConfiguration& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The creation date and time for the launch configuration.</p>
     */
    inline LaunchConfiguration& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Specifies whether the launch configuration is optimized for EBS I/O
     * (<code>true</code>) or not (<code>false</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline LaunchConfiguration& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>Specifies whether to assign a public IPv4 address to the group's instances.
     * If the instance is launched into a default subnet, the default is to assign a
     * public IPv4 address, unless you disabled the option to assign a public IPv4
     * address on the subnet. If the instance is launched into a nondefault subnet, the
     * default is not to assign a public IPv4 address, unless you enabled the option to
     * assign a public IPv4 address on the subnet. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Specifies whether to assign a public IPv4 address to the group's instances.
     * If the instance is launched into a default subnet, the default is to assign a
     * public IPv4 address, unless you disabled the option to assign a public IPv4
     * address on the subnet. If the instance is launched into a nondefault subnet, the
     * default is not to assign a public IPv4 address, unless you enabled the option to
     * assign a public IPv4 address on the subnet. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>Specifies whether to assign a public IPv4 address to the group's instances.
     * If the instance is launched into a default subnet, the default is to assign a
     * public IPv4 address, unless you disabled the option to assign a public IPv4
     * address on the subnet. If the instance is launched into a nondefault subnet, the
     * default is not to assign a public IPv4 address, unless you enabled the option to
     * assign a public IPv4 address on the subnet. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Specifies whether to assign a public IPv4 address to the group's instances.
     * If the instance is launched into a default subnet, the default is to assign a
     * public IPv4 address, unless you disabled the option to assign a public IPv4
     * address on the subnet. If the instance is launched into a nondefault subnet, the
     * default is not to assign a public IPv4 address, unless you enabled the option to
     * assign a public IPv4 address on the subnet. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching
     * Auto Scaling instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetPlacementTenancy() const{ return m_placementTenancy; }

    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline bool PlacementTenancyHasBeenSet() const { return m_placementTenancyHasBeenSet; }

    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetPlacementTenancy(const Aws::String& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = value; }

    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetPlacementTenancy(Aws::String&& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = std::move(value); }

    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetPlacementTenancy(const char* value) { m_placementTenancyHasBeenSet = true; m_placementTenancy.assign(value); }

    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithPlacementTenancy(const Aws::String& value) { SetPlacementTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithPlacementTenancy(Aws::String&& value) { SetPlacementTenancy(std::move(value)); return *this;}

    /**
     * <p>The tenancy of the instance, either <code>default</code> or
     * <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs on
     * isolated, single-tenant hardware and can only be launched into a VPC.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-dedicated-instances.html">Configuring
     * instance tenancy with Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline LaunchConfiguration& WithPlacementTenancy(const char* value) { SetPlacementTenancy(value); return *this;}


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
    inline LaunchConfiguration& WithMetadataOptions(const InstanceMetadataOptions& value) { SetMetadataOptions(value); return *this;}

    /**
     * <p>The metadata options for the instances. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-config.html#launch-configurations-imds">Configuring
     * the Instance Metadata Options</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline LaunchConfiguration& WithMetadataOptions(InstanceMetadataOptions&& value) { SetMetadataOptions(std::move(value)); return *this;}

  private:

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    Aws::String m_launchConfigurationARN;
    bool m_launchConfigurationARNHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_classicLinkVPCId;
    bool m_classicLinkVPCIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_classicLinkVPCSecurityGroups;
    bool m_classicLinkVPCSecurityGroupsHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    InstanceMonitoring m_instanceMonitoring;
    bool m_instanceMonitoringHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    Aws::String m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::String m_placementTenancy;
    bool m_placementTenancyHasBeenSet = false;

    InstanceMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
