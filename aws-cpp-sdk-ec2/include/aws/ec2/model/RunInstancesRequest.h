/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/Placement.h>
#include <aws/ec2/model/RunInstancesMonitoringEnabled.h>
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/ec2/model/IamInstanceProfileSpecification.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/InstanceNetworkInterfaceSpecification.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RunInstances.</p>
   */
  class AWS_EC2_API RunInstancesRequest : public EC2Request
  {
  public:
    RunInstancesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline RunInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>.</p>
     */
    inline RunInstancesRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>.</p>
     */
    inline RunInstancesRequest& WithImageId(Aws::String&& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>.</p>
     */
    inline RunInstancesRequest& WithImageId(const char* value) { SetImageId(value); return *this;}

    /**
     * <p>The minimum number of instances to launch. If you specify a minimum that is
     * more instances than Amazon EC2 can launch in the target Availability Zone,
     * Amazon EC2 launches no instances.</p> <p>Constraints: Between 1 and the maximum
     * number you're allowed for the specified instance type. For more information
     * about the default limits, and how to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 General FAQ.</p>
     */
    inline int GetMinCount() const{ return m_minCount; }

    /**
     * <p>The minimum number of instances to launch. If you specify a minimum that is
     * more instances than Amazon EC2 can launch in the target Availability Zone,
     * Amazon EC2 launches no instances.</p> <p>Constraints: Between 1 and the maximum
     * number you're allowed for the specified instance type. For more information
     * about the default limits, and how to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 General FAQ.</p>
     */
    inline void SetMinCount(int value) { m_minCountHasBeenSet = true; m_minCount = value; }

    /**
     * <p>The minimum number of instances to launch. If you specify a minimum that is
     * more instances than Amazon EC2 can launch in the target Availability Zone,
     * Amazon EC2 launches no instances.</p> <p>Constraints: Between 1 and the maximum
     * number you're allowed for the specified instance type. For more information
     * about the default limits, and how to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 General FAQ.</p>
     */
    inline RunInstancesRequest& WithMinCount(int value) { SetMinCount(value); return *this;}

    /**
     * <p>The maximum number of instances to launch. If you specify more instances than
     * Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches the
     * largest possible number of instances above <code>MinCount</code>.</p>
     * <p>Constraints: Between 1 and the maximum number you're allowed for the
     * specified instance type. For more information about the default limits, and how
     * to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 FAQ.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }

    /**
     * <p>The maximum number of instances to launch. If you specify more instances than
     * Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches the
     * largest possible number of instances above <code>MinCount</code>.</p>
     * <p>Constraints: Between 1 and the maximum number you're allowed for the
     * specified instance type. For more information about the default limits, and how
     * to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 FAQ.</p>
     */
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }

    /**
     * <p>The maximum number of instances to launch. If you specify more instances than
     * Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches the
     * largest possible number of instances above <code>MinCount</code>.</p>
     * <p>Constraints: Between 1 and the maximum number you're allowed for the
     * specified instance type. For more information about the default limits, and how
     * to request an increase, see <a
     * href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How
     * many instances can I run in Amazon EC2</a> in the Amazon EC2 FAQ.</p>
     */
    inline RunInstancesRequest& WithMaxCount(int value) { SetMaxCount(value); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RunInstancesRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RunInstancesRequest& WithKeyName(Aws::String&& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair. You can create a key pair using
     * <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p> <important> <p>If you do not
     * specify a key pair, you can't connect to the instance unless you choose an AMI
     * that is configured to allow users another way to log in.</p> </important>
     */
    inline RunInstancesRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault
     * VPC, you must use security group IDs instead.</p> <p>Default: Amazon EC2 uses
     * the default security group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. You can create a security group using
     * <a>CreateSecurityGroup</a>.</p> <p>Default: Amazon EC2 uses the default security
     * group.</p>
     */
    inline RunInstancesRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Data to configure the instance, or a script to run during instance launch.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). For API calls, the text must be base64-encoded. For
     * command line tools, the encoding is performed for you, and you can load the text
     * from a file.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p>Data to configure the instance, or a script to run during instance launch.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). For API calls, the text must be base64-encoded. For
     * command line tools, the encoding is performed for you, and you can load the text
     * from a file.</p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>Data to configure the instance, or a script to run during instance launch.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). For API calls, the text must be base64-encoded. For
     * command line tools, the encoding is performed for you, and you can load the text
     * from a file.</p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>Data to configure the instance, or a script to run during instance launch.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). For API calls, the text must be base64-encoded. For
     * command line tools, the encoding is performed for you, and you can load the text
     * from a file.</p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p>Data to configure the instance, or a script to run during instance launch.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). For API calls, the text must be base64-encoded. For
     * command line tools, the encoding is performed for you, and you can load the text
     * from a file.</p>
     */
    inline RunInstancesRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p>Data to configure the instance, or a script to run during instance launch.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). For API calls, the text must be base64-encoded. For
     * command line tools, the encoding is performed for you, and you can load the text
     * from a file.</p>
     */
    inline RunInstancesRequest& WithUserData(Aws::String&& value) { SetUserData(value); return *this;}

    /**
     * <p>Data to configure the instance, or a script to run during instance launch.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running
     * Commands on Your Linux Instance at Launch</a> (Linux) and <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding
     * User Data</a> (Windows). For API calls, the text must be base64-encoded. For
     * command line tools, the encoding is performed for you, and you can load the text
     * from a file.</p>
     */
    inline RunInstancesRequest& WithUserData(const char* value) { SetUserData(value); return *this;}

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code></p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code></p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code></p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code></p>
     */
    inline RunInstancesRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>Default:
     * <code>m1.small</code></p>
     */
    inline RunInstancesRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The placement for the instance.</p>
     */
    inline const Placement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The placement for the instance.</p>
     */
    inline void SetPlacement(const Placement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement for the instance.</p>
     */
    inline void SetPlacement(Placement&& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The placement for the instance.</p>
     */
    inline RunInstancesRequest& WithPlacement(const Placement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The placement for the instance.</p>
     */
    inline RunInstancesRequest& WithPlacement(Placement&& value) { SetPlacement(value); return *this;}

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithKernelId(Aws::String&& value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the kernel.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithKernelId(const char* value) { SetKernelId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithRamdiskId(Aws::String&& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The ID of the RAM disk.</p> <important> <p>We recommend that you use PV-GRUB
     * instead of kernels and RAM disks. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">
     * PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * </important>
     */
    inline RunInstancesRequest& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The block device mapping.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mapping.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mapping.</p>
     */
    inline RunInstancesRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping.</p>
     */
    inline RunInstancesRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mapping.</p>
     */
    inline RunInstancesRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mapping.</p>
     */
    inline RunInstancesRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const RunInstancesMonitoringEnabled& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(const RunInstancesMonitoringEnabled& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(RunInstancesMonitoringEnabled&& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline RunInstancesRequest& WithMonitoring(const RunInstancesMonitoringEnabled& value) { SetMonitoring(value); return *this;}

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline RunInstancesRequest& WithMonitoring(RunInstancesMonitoringEnabled&& value) { SetMonitoring(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline RunInstancesRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline RunInstancesRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
     */
    inline RunInstancesRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. If you
     * set this parameter to <code>true</code> and then later want to be able to
     * terminate the instance, you must first change the value of the
     * <code>disableApiTermination</code> attribute to <code>false</code> using
     * <a>ModifyInstanceAttribute</a>. Alternatively, if you set
     * <code>InstanceInitiatedShutdownBehavior</code> to <code>terminate</code>, you
     * can terminate the instance by running the shutdown command from the
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. If you
     * set this parameter to <code>true</code> and then later want to be able to
     * terminate the instance, you must first change the value of the
     * <code>disableApiTermination</code> attribute to <code>false</code> using
     * <a>ModifyInstanceAttribute</a>. Alternatively, if you set
     * <code>InstanceInitiatedShutdownBehavior</code> to <code>terminate</code>, you
     * can terminate the instance by running the shutdown command from the
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p>If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API; otherwise, you can. If you
     * set this parameter to <code>true</code> and then later want to be able to
     * terminate the instance, you must first change the value of the
     * <code>disableApiTermination</code> attribute to <code>false</code> using
     * <a>ModifyInstanceAttribute</a>. Alternatively, if you set
     * <code>InstanceInitiatedShutdownBehavior</code> to <code>terminate</code>, you
     * can terminate the instance by running the shutdown command from the
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline RunInstancesRequest& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code></p>
     */
    inline const ShutdownBehavior& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code></p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code></p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code></p>
     */
    inline RunInstancesRequest& WithInstanceInitiatedShutdownBehavior(const ShutdownBehavior& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>Indicates whether an instance stops or terminates when you initiate shutdown
     * from the instance (using the operating system command for system shutdown).</p>
     * <p>Default: <code>stop</code></p>
     */
    inline RunInstancesRequest& WithInstanceInitiatedShutdownBehavior(ShutdownBehavior&& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p>[EC2-VPC] The primary IP address. You must specify a value from the IP
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. Therefore, you can't specify this parameter if
     * <code>PrivateIpAddresses.n.Primary</code> is set to <code>true</code> and
     * <code>PrivateIpAddresses.n.PrivateIpAddress</code> is set to an IP address. </p>
     * <p>Default: We select an IP address from the IP address range of the subnet.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>[EC2-VPC] The primary IP address. You must specify a value from the IP
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. Therefore, you can't specify this parameter if
     * <code>PrivateIpAddresses.n.Primary</code> is set to <code>true</code> and
     * <code>PrivateIpAddresses.n.PrivateIpAddress</code> is set to an IP address. </p>
     * <p>Default: We select an IP address from the IP address range of the subnet.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>[EC2-VPC] The primary IP address. You must specify a value from the IP
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. Therefore, you can't specify this parameter if
     * <code>PrivateIpAddresses.n.Primary</code> is set to <code>true</code> and
     * <code>PrivateIpAddresses.n.PrivateIpAddress</code> is set to an IP address. </p>
     * <p>Default: We select an IP address from the IP address range of the subnet.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>[EC2-VPC] The primary IP address. You must specify a value from the IP
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. Therefore, you can't specify this parameter if
     * <code>PrivateIpAddresses.n.Primary</code> is set to <code>true</code> and
     * <code>PrivateIpAddresses.n.PrivateIpAddress</code> is set to an IP address. </p>
     * <p>Default: We select an IP address from the IP address range of the subnet.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>[EC2-VPC] The primary IP address. You must specify a value from the IP
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. Therefore, you can't specify this parameter if
     * <code>PrivateIpAddresses.n.Primary</code> is set to <code>true</code> and
     * <code>PrivateIpAddresses.n.PrivateIpAddress</code> is set to an IP address. </p>
     * <p>Default: We select an IP address from the IP address range of the subnet.</p>
     */
    inline RunInstancesRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>[EC2-VPC] The primary IP address. You must specify a value from the IP
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. Therefore, you can't specify this parameter if
     * <code>PrivateIpAddresses.n.Primary</code> is set to <code>true</code> and
     * <code>PrivateIpAddresses.n.PrivateIpAddress</code> is set to an IP address. </p>
     * <p>Default: We select an IP address from the IP address range of the subnet.</p>
     */
    inline RunInstancesRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>[EC2-VPC] The primary IP address. You must specify a value from the IP
     * address range of the subnet.</p> <p>Only one private IP address can be
     * designated as primary. Therefore, you can't specify this parameter if
     * <code>PrivateIpAddresses.n.Primary</code> is set to <code>true</code> and
     * <code>PrivateIpAddresses.n.PrivateIpAddress</code> is set to an IP address. </p>
     * <p>Default: We select an IP address from the IP address range of the subnet.</p>
     */
    inline RunInstancesRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline RunInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline RunInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline RunInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline RunInstancesRequest& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline RunInstancesRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline RunInstancesRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterfaceSpecification>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterfaceSpecification>&& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& AddNetworkInterfaces(const InstanceNetworkInterfaceSpecification& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>One or more network interfaces.</p>
     */
    inline RunInstancesRequest& AddNetworkInterfaces(InstanceNetworkInterfaceSpecification&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline const IamInstanceProfileSpecification& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(const IamInstanceProfileSpecification& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline void SetIamInstanceProfile(IamInstanceProfileSpecification&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM instance profile.</p>
     */
    inline RunInstancesRequest& WithIamInstanceProfile(const IamInstanceProfileSpecification& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM instance profile.</p>
     */
    inline RunInstancesRequest& WithIamInstanceProfile(IamInstanceProfileSpecification&& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS-optimized
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS-optimized
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for EBS I/O. This optimization
     * provides dedicated throughput to Amazon EBS and an optimized configuration stack
     * to provide optimal EBS I/O performance. This optimization isn't available with
     * all instance types. Additional usage charges apply when using an EBS-optimized
     * instance.</p> <p>Default: <code>false</code></p>
     */
    inline RunInstancesRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;
    int m_minCount;
    bool m_minCountHasBeenSet;
    int m_maxCount;
    bool m_maxCountHasBeenSet;
    Aws::String m_keyName;
    bool m_keyNameHasBeenSet;
    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;
    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
    Aws::String m_userData;
    bool m_userDataHasBeenSet;
    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;
    Placement m_placement;
    bool m_placementHasBeenSet;
    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;
    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;
    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;
    RunInstancesMonitoringEnabled m_monitoring;
    bool m_monitoringHasBeenSet;
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet;
    ShutdownBehavior m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet;
    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet;
    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;
    IamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;
    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
