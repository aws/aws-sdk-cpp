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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Provides information about the EC2 instances in a cluster grouped by
   * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
   */
  class AWS_EMR_API Ec2InstanceAttributes
  {
  public:
    Ec2InstanceAttributes();
    Ec2InstanceAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    Ec2InstanceAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline Ec2InstanceAttributes& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline Ec2InstanceAttributes& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline Ec2InstanceAttributes& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>To launch the job flow in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the job flow to launch. If you do not
     * specify this value, the job flow is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a job flow launched in a VPC.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const{ return m_ec2SubnetId; }

    /**
     * <p>To launch the job flow in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the job flow to launch. If you do not
     * specify this value, the job flow is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a job flow launched in a VPC.</p>
     */
    inline void SetEc2SubnetId(const Aws::String& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }

    /**
     * <p>To launch the job flow in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the job flow to launch. If you do not
     * specify this value, the job flow is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a job flow launched in a VPC.</p>
     */
    inline void SetEc2SubnetId(Aws::String&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }

    /**
     * <p>To launch the job flow in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the job flow to launch. If you do not
     * specify this value, the job flow is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a job flow launched in a VPC.</p>
     */
    inline void SetEc2SubnetId(const char* value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId.assign(value); }

    /**
     * <p>To launch the job flow in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the job flow to launch. If you do not
     * specify this value, the job flow is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a job flow launched in a VPC.</p>
     */
    inline Ec2InstanceAttributes& WithEc2SubnetId(const Aws::String& value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>To launch the job flow in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the job flow to launch. If you do not
     * specify this value, the job flow is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a job flow launched in a VPC.</p>
     */
    inline Ec2InstanceAttributes& WithEc2SubnetId(Aws::String&& value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>To launch the job flow in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the job flow to launch. If you do not
     * specify this value, the job flow is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a job flow launched in a VPC.</p>
     */
    inline Ec2InstanceAttributes& WithEc2SubnetId(const char* value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>The Availability Zone in which the cluster will run.</p>
     */
    inline const Aws::String& GetEc2AvailabilityZone() const{ return m_ec2AvailabilityZone; }

    /**
     * <p>The Availability Zone in which the cluster will run.</p>
     */
    inline void SetEc2AvailabilityZone(const Aws::String& value) { m_ec2AvailabilityZoneHasBeenSet = true; m_ec2AvailabilityZone = value; }

    /**
     * <p>The Availability Zone in which the cluster will run.</p>
     */
    inline void SetEc2AvailabilityZone(Aws::String&& value) { m_ec2AvailabilityZoneHasBeenSet = true; m_ec2AvailabilityZone = value; }

    /**
     * <p>The Availability Zone in which the cluster will run.</p>
     */
    inline void SetEc2AvailabilityZone(const char* value) { m_ec2AvailabilityZoneHasBeenSet = true; m_ec2AvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the cluster will run.</p>
     */
    inline Ec2InstanceAttributes& WithEc2AvailabilityZone(const Aws::String& value) { SetEc2AvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the cluster will run.</p>
     */
    inline Ec2InstanceAttributes& WithEc2AvailabilityZone(Aws::String&& value) { SetEc2AvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the cluster will run.</p>
     */
    inline Ec2InstanceAttributes& WithEc2AvailabilityZone(const char* value) { SetEc2AvailabilityZone(value); return *this;}

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline void SetIamInstanceProfile(const Aws::String& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline void SetIamInstanceProfile(Aws::String&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline void SetIamInstanceProfile(const char* value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile.assign(value); }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline Ec2InstanceAttributes& WithIamInstanceProfile(const Aws::String& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline Ec2InstanceAttributes& WithIamInstanceProfile(Aws::String&& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline Ec2InstanceAttributes& WithIamInstanceProfile(const char* value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline const Aws::String& GetEmrManagedMasterSecurityGroup() const{ return m_emrManagedMasterSecurityGroup; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline void SetEmrManagedMasterSecurityGroup(const Aws::String& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline void SetEmrManagedMasterSecurityGroup(Aws::String&& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline void SetEmrManagedMasterSecurityGroup(const char* value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup.assign(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedMasterSecurityGroup(const Aws::String& value) { SetEmrManagedMasterSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedMasterSecurityGroup(Aws::String&& value) { SetEmrManagedMasterSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedMasterSecurityGroup(const char* value) { SetEmrManagedMasterSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline const Aws::String& GetEmrManagedSlaveSecurityGroup() const{ return m_emrManagedSlaveSecurityGroup; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline void SetEmrManagedSlaveSecurityGroup(const Aws::String& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline void SetEmrManagedSlaveSecurityGroup(Aws::String&& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline void SetEmrManagedSlaveSecurityGroup(const char* value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup.assign(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedSlaveSecurityGroup(const Aws::String& value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedSlaveSecurityGroup(Aws::String&& value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedSlaveSecurityGroup(const char* value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline const Aws::String& GetServiceAccessSecurityGroup() const{ return m_serviceAccessSecurityGroup; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline void SetServiceAccessSecurityGroup(const Aws::String& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline void SetServiceAccessSecurityGroup(Aws::String&& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline void SetServiceAccessSecurityGroup(const char* value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup.assign(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline Ec2InstanceAttributes& WithServiceAccessSecurityGroup(const Aws::String& value) { SetServiceAccessSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline Ec2InstanceAttributes& WithServiceAccessSecurityGroup(Aws::String&& value) { SetServiceAccessSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline Ec2InstanceAttributes& WithServiceAccessSecurityGroup(const char* value) { SetServiceAccessSecurityGroup(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalMasterSecurityGroups() const{ return m_additionalMasterSecurityGroups; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline void SetAdditionalMasterSecurityGroups(const Aws::Vector<Aws::String>& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = value; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline void SetAdditionalMasterSecurityGroups(Aws::Vector<Aws::String>&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = value; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalMasterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalMasterSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalMasterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalMasterSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalMasterSecurityGroups(const Aws::String& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalMasterSecurityGroups(Aws::String&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalMasterSecurityGroups(const char* value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalSlaveSecurityGroups() const{ return m_additionalSlaveSecurityGroups; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline void SetAdditionalSlaveSecurityGroups(const Aws::Vector<Aws::String>& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = value; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline void SetAdditionalSlaveSecurityGroups(Aws::Vector<Aws::String>&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = value; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalSlaveSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalSlaveSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalSlaveSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalSlaveSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalSlaveSecurityGroups(const Aws::String& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalSlaveSecurityGroups(Aws::String&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalSlaveSecurityGroups(const char* value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

  private:
    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet;
    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet;
    Aws::String m_ec2AvailabilityZone;
    bool m_ec2AvailabilityZoneHasBeenSet;
    Aws::String m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;
    Aws::String m_emrManagedMasterSecurityGroup;
    bool m_emrManagedMasterSecurityGroupHasBeenSet;
    Aws::String m_emrManagedSlaveSecurityGroup;
    bool m_emrManagedSlaveSecurityGroupHasBeenSet;
    Aws::String m_serviceAccessSecurityGroup;
    bool m_serviceAccessSecurityGroupHasBeenSet;
    Aws::Vector<Aws::String> m_additionalMasterSecurityGroups;
    bool m_additionalMasterSecurityGroupsHasBeenSet;
    Aws::Vector<Aws::String> m_additionalSlaveSecurityGroups;
    bool m_additionalSlaveSecurityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
