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
#include <aws/elasticmapreduce/model/PlacementType.h>
#include <aws/elasticmapreduce/model/InstanceGroupConfig.h>

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
   * <p>A description of the Amazon EC2 instance running the job flow. A valid
   * JobFlowInstancesConfig must contain at least InstanceGroups, which is the
   * recommended configuration. However, a valid alternative is to have
   * MasterInstanceType, SlaveInstanceType, and InstanceCount (all three must be
   * present).</p>
   */
  class AWS_EMR_API JobFlowInstancesConfig
  {
  public:
    JobFlowInstancesConfig();
    JobFlowInstancesConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    JobFlowInstancesConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The EC2 instance type of the master node.</p>
     */
    inline const Aws::String& GetMasterInstanceType() const{ return m_masterInstanceType; }

    /**
     * <p>The EC2 instance type of the master node.</p>
     */
    inline void SetMasterInstanceType(const Aws::String& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = value; }

    /**
     * <p>The EC2 instance type of the master node.</p>
     */
    inline void SetMasterInstanceType(Aws::String&& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = value; }

    /**
     * <p>The EC2 instance type of the master node.</p>
     */
    inline void SetMasterInstanceType(const char* value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType.assign(value); }

    /**
     * <p>The EC2 instance type of the master node.</p>
     */
    inline JobFlowInstancesConfig& WithMasterInstanceType(const Aws::String& value) { SetMasterInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type of the master node.</p>
     */
    inline JobFlowInstancesConfig& WithMasterInstanceType(Aws::String&& value) { SetMasterInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type of the master node.</p>
     */
    inline JobFlowInstancesConfig& WithMasterInstanceType(const char* value) { SetMasterInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type of the slave nodes.</p>
     */
    inline const Aws::String& GetSlaveInstanceType() const{ return m_slaveInstanceType; }

    /**
     * <p>The EC2 instance type of the slave nodes.</p>
     */
    inline void SetSlaveInstanceType(const Aws::String& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = value; }

    /**
     * <p>The EC2 instance type of the slave nodes.</p>
     */
    inline void SetSlaveInstanceType(Aws::String&& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = value; }

    /**
     * <p>The EC2 instance type of the slave nodes.</p>
     */
    inline void SetSlaveInstanceType(const char* value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType.assign(value); }

    /**
     * <p>The EC2 instance type of the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& WithSlaveInstanceType(const Aws::String& value) { SetSlaveInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type of the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& WithSlaveInstanceType(Aws::String&& value) { SetSlaveInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type of the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& WithSlaveInstanceType(const char* value) { SetSlaveInstanceType(value); return *this;}

    /**
     * <p>The number of Amazon EC2 instances used to execute the job flow.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of Amazon EC2 instances used to execute the job flow.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of Amazon EC2 instances used to execute the job flow.</p>
     */
    inline JobFlowInstancesConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

    /**
     * <p>Configuration for the job flow's instance groups.</p>
     */
    inline const Aws::Vector<InstanceGroupConfig>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>Configuration for the job flow's instance groups.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Configuration for the job flow's instance groups.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Configuration for the job flow's instance groups.</p>
     */
    inline JobFlowInstancesConfig& WithInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Configuration for the job flow's instance groups.</p>
     */
    inline JobFlowInstancesConfig& WithInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Configuration for the job flow's instance groups.</p>
     */
    inline JobFlowInstancesConfig& AddInstanceGroups(const InstanceGroupConfig& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Configuration for the job flow's instance groups.</p>
     */
    inline JobFlowInstancesConfig& AddInstanceGroups(InstanceGroupConfig&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>The name of the Amazon EC2 key pair that can be used to ssh to the master
     * node as the user called "hadoop."</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }

    /**
     * <p>The name of the Amazon EC2 key pair that can be used to ssh to the master
     * node as the user called "hadoop."</p>
     */
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of the Amazon EC2 key pair that can be used to ssh to the master
     * node as the user called "hadoop."</p>
     */
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of the Amazon EC2 key pair that can be used to ssh to the master
     * node as the user called "hadoop."</p>
     */
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }

    /**
     * <p>The name of the Amazon EC2 key pair that can be used to ssh to the master
     * node as the user called "hadoop."</p>
     */
    inline JobFlowInstancesConfig& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 key pair that can be used to ssh to the master
     * node as the user called "hadoop."</p>
     */
    inline JobFlowInstancesConfig& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 key pair that can be used to ssh to the master
     * node as the user called "hadoop."</p>
     */
    inline JobFlowInstancesConfig& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The Availability Zone the job flow will run in.</p>
     */
    inline const PlacementType& GetPlacement() const{ return m_placement; }

    /**
     * <p>The Availability Zone the job flow will run in.</p>
     */
    inline void SetPlacement(const PlacementType& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The Availability Zone the job flow will run in.</p>
     */
    inline void SetPlacement(PlacementType&& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The Availability Zone the job flow will run in.</p>
     */
    inline JobFlowInstancesConfig& WithPlacement(const PlacementType& value) { SetPlacement(value); return *this;}

    /**
     * <p>The Availability Zone the job flow will run in.</p>
     */
    inline JobFlowInstancesConfig& WithPlacement(PlacementType&& value) { SetPlacement(value); return *this;}

    /**
     * <p>Specifies whether the job flow should be kept alive after completing all
     * steps.</p>
     */
    inline bool GetKeepJobFlowAliveWhenNoSteps() const{ return m_keepJobFlowAliveWhenNoSteps; }

    /**
     * <p>Specifies whether the job flow should be kept alive after completing all
     * steps.</p>
     */
    inline void SetKeepJobFlowAliveWhenNoSteps(bool value) { m_keepJobFlowAliveWhenNoStepsHasBeenSet = true; m_keepJobFlowAliveWhenNoSteps = value; }

    /**
     * <p>Specifies whether the job flow should be kept alive after completing all
     * steps.</p>
     */
    inline JobFlowInstancesConfig& WithKeepJobFlowAliveWhenNoSteps(bool value) { SetKeepJobFlowAliveWhenNoSteps(value); return *this;}

    /**
     * <p>Specifies whether to lock the job flow to prevent the Amazon EC2 instances
     * from being terminated by API call, user intervention, or in the event of a job
     * flow error.</p>
     */
    inline bool GetTerminationProtected() const{ return m_terminationProtected; }

    /**
     * <p>Specifies whether to lock the job flow to prevent the Amazon EC2 instances
     * from being terminated by API call, user intervention, or in the event of a job
     * flow error.</p>
     */
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }

    /**
     * <p>Specifies whether to lock the job flow to prevent the Amazon EC2 instances
     * from being terminated by API call, user intervention, or in the event of a job
     * flow error.</p>
     */
    inline JobFlowInstancesConfig& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}

    /**
     * <p>The Hadoop version for the job flow. Valid inputs are "0.18" (deprecated),
     * "0.20" (deprecated), "0.20.205" (deprecated), "1.0.3", "2.2.0", or "2.4.0". If
     * you do not set this value, the default of 0.18 is used, unless the AmiVersion
     * parameter is set in the RunJobFlow call, in which case the default version of
     * Hadoop for that AMI version is used.</p>
     */
    inline const Aws::String& GetHadoopVersion() const{ return m_hadoopVersion; }

    /**
     * <p>The Hadoop version for the job flow. Valid inputs are "0.18" (deprecated),
     * "0.20" (deprecated), "0.20.205" (deprecated), "1.0.3", "2.2.0", or "2.4.0". If
     * you do not set this value, the default of 0.18 is used, unless the AmiVersion
     * parameter is set in the RunJobFlow call, in which case the default version of
     * Hadoop for that AMI version is used.</p>
     */
    inline void SetHadoopVersion(const Aws::String& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = value; }

    /**
     * <p>The Hadoop version for the job flow. Valid inputs are "0.18" (deprecated),
     * "0.20" (deprecated), "0.20.205" (deprecated), "1.0.3", "2.2.0", or "2.4.0". If
     * you do not set this value, the default of 0.18 is used, unless the AmiVersion
     * parameter is set in the RunJobFlow call, in which case the default version of
     * Hadoop for that AMI version is used.</p>
     */
    inline void SetHadoopVersion(Aws::String&& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = value; }

    /**
     * <p>The Hadoop version for the job flow. Valid inputs are "0.18" (deprecated),
     * "0.20" (deprecated), "0.20.205" (deprecated), "1.0.3", "2.2.0", or "2.4.0". If
     * you do not set this value, the default of 0.18 is used, unless the AmiVersion
     * parameter is set in the RunJobFlow call, in which case the default version of
     * Hadoop for that AMI version is used.</p>
     */
    inline void SetHadoopVersion(const char* value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion.assign(value); }

    /**
     * <p>The Hadoop version for the job flow. Valid inputs are "0.18" (deprecated),
     * "0.20" (deprecated), "0.20.205" (deprecated), "1.0.3", "2.2.0", or "2.4.0". If
     * you do not set this value, the default of 0.18 is used, unless the AmiVersion
     * parameter is set in the RunJobFlow call, in which case the default version of
     * Hadoop for that AMI version is used.</p>
     */
    inline JobFlowInstancesConfig& WithHadoopVersion(const Aws::String& value) { SetHadoopVersion(value); return *this;}

    /**
     * <p>The Hadoop version for the job flow. Valid inputs are "0.18" (deprecated),
     * "0.20" (deprecated), "0.20.205" (deprecated), "1.0.3", "2.2.0", or "2.4.0". If
     * you do not set this value, the default of 0.18 is used, unless the AmiVersion
     * parameter is set in the RunJobFlow call, in which case the default version of
     * Hadoop for that AMI version is used.</p>
     */
    inline JobFlowInstancesConfig& WithHadoopVersion(Aws::String&& value) { SetHadoopVersion(value); return *this;}

    /**
     * <p>The Hadoop version for the job flow. Valid inputs are "0.18" (deprecated),
     * "0.20" (deprecated), "0.20.205" (deprecated), "1.0.3", "2.2.0", or "2.4.0". If
     * you do not set this value, the default of 0.18 is used, unless the AmiVersion
     * parameter is set in the RunJobFlow call, in which case the default version of
     * Hadoop for that AMI version is used.</p>
     */
    inline JobFlowInstancesConfig& WithHadoopVersion(const char* value) { SetHadoopVersion(value); return *this;}

    /**
     * <p>To launch the job flow in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the job flow
     * to launch. If you do not specify this value, the job flow is launched in the
     * normal Amazon Web Services cloud, outside of an Amazon VPC.</p> <p>Amazon VPC
     * currently does not support cluster compute quadruple extra large (cc1.4xlarge)
     * instances. Thus you cannot specify the cc1.4xlarge instance type for nodes of a
     * job flow launched in a Amazon VPC.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const{ return m_ec2SubnetId; }

    /**
     * <p>To launch the job flow in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the job flow
     * to launch. If you do not specify this value, the job flow is launched in the
     * normal Amazon Web Services cloud, outside of an Amazon VPC.</p> <p>Amazon VPC
     * currently does not support cluster compute quadruple extra large (cc1.4xlarge)
     * instances. Thus you cannot specify the cc1.4xlarge instance type for nodes of a
     * job flow launched in a Amazon VPC.</p>
     */
    inline void SetEc2SubnetId(const Aws::String& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }

    /**
     * <p>To launch the job flow in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the job flow
     * to launch. If you do not specify this value, the job flow is launched in the
     * normal Amazon Web Services cloud, outside of an Amazon VPC.</p> <p>Amazon VPC
     * currently does not support cluster compute quadruple extra large (cc1.4xlarge)
     * instances. Thus you cannot specify the cc1.4xlarge instance type for nodes of a
     * job flow launched in a Amazon VPC.</p>
     */
    inline void SetEc2SubnetId(Aws::String&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }

    /**
     * <p>To launch the job flow in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the job flow
     * to launch. If you do not specify this value, the job flow is launched in the
     * normal Amazon Web Services cloud, outside of an Amazon VPC.</p> <p>Amazon VPC
     * currently does not support cluster compute quadruple extra large (cc1.4xlarge)
     * instances. Thus you cannot specify the cc1.4xlarge instance type for nodes of a
     * job flow launched in a Amazon VPC.</p>
     */
    inline void SetEc2SubnetId(const char* value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId.assign(value); }

    /**
     * <p>To launch the job flow in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the job flow
     * to launch. If you do not specify this value, the job flow is launched in the
     * normal Amazon Web Services cloud, outside of an Amazon VPC.</p> <p>Amazon VPC
     * currently does not support cluster compute quadruple extra large (cc1.4xlarge)
     * instances. Thus you cannot specify the cc1.4xlarge instance type for nodes of a
     * job flow launched in a Amazon VPC.</p>
     */
    inline JobFlowInstancesConfig& WithEc2SubnetId(const Aws::String& value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>To launch the job flow in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the job flow
     * to launch. If you do not specify this value, the job flow is launched in the
     * normal Amazon Web Services cloud, outside of an Amazon VPC.</p> <p>Amazon VPC
     * currently does not support cluster compute quadruple extra large (cc1.4xlarge)
     * instances. Thus you cannot specify the cc1.4xlarge instance type for nodes of a
     * job flow launched in a Amazon VPC.</p>
     */
    inline JobFlowInstancesConfig& WithEc2SubnetId(Aws::String&& value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>To launch the job flow in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the job flow
     * to launch. If you do not specify this value, the job flow is launched in the
     * normal Amazon Web Services cloud, outside of an Amazon VPC.</p> <p>Amazon VPC
     * currently does not support cluster compute quadruple extra large (cc1.4xlarge)
     * instances. Thus you cannot specify the cc1.4xlarge instance type for nodes of a
     * job flow launched in a Amazon VPC.</p>
     */
    inline JobFlowInstancesConfig& WithEc2SubnetId(const char* value) { SetEc2SubnetId(value); return *this;}

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
    inline JobFlowInstancesConfig& WithEmrManagedMasterSecurityGroup(const Aws::String& value) { SetEmrManagedMasterSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline JobFlowInstancesConfig& WithEmrManagedMasterSecurityGroup(Aws::String&& value) { SetEmrManagedMasterSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline JobFlowInstancesConfig& WithEmrManagedMasterSecurityGroup(const char* value) { SetEmrManagedMasterSecurityGroup(value); return *this;}

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
    inline JobFlowInstancesConfig& WithEmrManagedSlaveSecurityGroup(const Aws::String& value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& WithEmrManagedSlaveSecurityGroup(Aws::String&& value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& WithEmrManagedSlaveSecurityGroup(const char* value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}

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
    inline JobFlowInstancesConfig& WithServiceAccessSecurityGroup(const Aws::String& value) { SetServiceAccessSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline JobFlowInstancesConfig& WithServiceAccessSecurityGroup(Aws::String&& value) { SetServiceAccessSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline JobFlowInstancesConfig& WithServiceAccessSecurityGroup(const char* value) { SetServiceAccessSecurityGroup(value); return *this;}

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
    inline JobFlowInstancesConfig& WithAdditionalMasterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalMasterSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline JobFlowInstancesConfig& WithAdditionalMasterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalMasterSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline JobFlowInstancesConfig& AddAdditionalMasterSecurityGroups(const Aws::String& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline JobFlowInstancesConfig& AddAdditionalMasterSecurityGroups(Aws::String&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline JobFlowInstancesConfig& AddAdditionalMasterSecurityGroups(const char* value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }

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
    inline JobFlowInstancesConfig& WithAdditionalSlaveSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalSlaveSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& WithAdditionalSlaveSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalSlaveSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& AddAdditionalSlaveSecurityGroups(const Aws::String& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& AddAdditionalSlaveSecurityGroups(Aws::String&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the slave nodes.</p>
     */
    inline JobFlowInstancesConfig& AddAdditionalSlaveSecurityGroups(const char* value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

  private:
    Aws::String m_masterInstanceType;
    bool m_masterInstanceTypeHasBeenSet;
    Aws::String m_slaveInstanceType;
    bool m_slaveInstanceTypeHasBeenSet;
    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
    Aws::Vector<InstanceGroupConfig> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet;
    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet;
    PlacementType m_placement;
    bool m_placementHasBeenSet;
    bool m_keepJobFlowAliveWhenNoSteps;
    bool m_keepJobFlowAliveWhenNoStepsHasBeenSet;
    bool m_terminationProtected;
    bool m_terminationProtectedHasBeenSet;
    Aws::String m_hadoopVersion;
    bool m_hadoopVersionHasBeenSet;
    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet;
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
