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
#include <aws/elasticmapreduce/model/InstanceGroupDetail.h>

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
   * <p>Specify the type of Amazon EC2 instances to run the job flow on.</p>
   */
  class AWS_EMR_API JobFlowInstancesDetail
  {
  public:
    JobFlowInstancesDetail();
    JobFlowInstancesDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    JobFlowInstancesDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline const Aws::String& GetMasterInstanceType() const{ return m_masterInstanceType; }

    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline void SetMasterInstanceType(const Aws::String& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = value; }

    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline void SetMasterInstanceType(Aws::String&& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = value; }

    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline void SetMasterInstanceType(const char* value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType.assign(value); }

    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline JobFlowInstancesDetail& WithMasterInstanceType(const Aws::String& value) { SetMasterInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline JobFlowInstancesDetail& WithMasterInstanceType(Aws::String&& value) { SetMasterInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline JobFlowInstancesDetail& WithMasterInstanceType(const char* value) { SetMasterInstanceType(value); return *this;}

    /**
     * <p>The DNS name of the master node.</p>
     */
    inline const Aws::String& GetMasterPublicDnsName() const{ return m_masterPublicDnsName; }

    /**
     * <p>The DNS name of the master node.</p>
     */
    inline void SetMasterPublicDnsName(const Aws::String& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = value; }

    /**
     * <p>The DNS name of the master node.</p>
     */
    inline void SetMasterPublicDnsName(Aws::String&& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = value; }

    /**
     * <p>The DNS name of the master node.</p>
     */
    inline void SetMasterPublicDnsName(const char* value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName.assign(value); }

    /**
     * <p>The DNS name of the master node.</p>
     */
    inline JobFlowInstancesDetail& WithMasterPublicDnsName(const Aws::String& value) { SetMasterPublicDnsName(value); return *this;}

    /**
     * <p>The DNS name of the master node.</p>
     */
    inline JobFlowInstancesDetail& WithMasterPublicDnsName(Aws::String&& value) { SetMasterPublicDnsName(value); return *this;}

    /**
     * <p>The DNS name of the master node.</p>
     */
    inline JobFlowInstancesDetail& WithMasterPublicDnsName(const char* value) { SetMasterPublicDnsName(value); return *this;}

    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline const Aws::String& GetMasterInstanceId() const{ return m_masterInstanceId; }

    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline void SetMasterInstanceId(const Aws::String& value) { m_masterInstanceIdHasBeenSet = true; m_masterInstanceId = value; }

    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline void SetMasterInstanceId(Aws::String&& value) { m_masterInstanceIdHasBeenSet = true; m_masterInstanceId = value; }

    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline void SetMasterInstanceId(const char* value) { m_masterInstanceIdHasBeenSet = true; m_masterInstanceId.assign(value); }

    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline JobFlowInstancesDetail& WithMasterInstanceId(const Aws::String& value) { SetMasterInstanceId(value); return *this;}

    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline JobFlowInstancesDetail& WithMasterInstanceId(Aws::String&& value) { SetMasterInstanceId(value); return *this;}

    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline JobFlowInstancesDetail& WithMasterInstanceId(const char* value) { SetMasterInstanceId(value); return *this;}

    /**
     * <p>The Amazon EC2 slave node instance type.</p>
     */
    inline const Aws::String& GetSlaveInstanceType() const{ return m_slaveInstanceType; }

    /**
     * <p>The Amazon EC2 slave node instance type.</p>
     */
    inline void SetSlaveInstanceType(const Aws::String& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = value; }

    /**
     * <p>The Amazon EC2 slave node instance type.</p>
     */
    inline void SetSlaveInstanceType(Aws::String&& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = value; }

    /**
     * <p>The Amazon EC2 slave node instance type.</p>
     */
    inline void SetSlaveInstanceType(const char* value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType.assign(value); }

    /**
     * <p>The Amazon EC2 slave node instance type.</p>
     */
    inline JobFlowInstancesDetail& WithSlaveInstanceType(const Aws::String& value) { SetSlaveInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 slave node instance type.</p>
     */
    inline JobFlowInstancesDetail& WithSlaveInstanceType(Aws::String&& value) { SetSlaveInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 slave node instance type.</p>
     */
    inline JobFlowInstancesDetail& WithSlaveInstanceType(const char* value) { SetSlaveInstanceType(value); return *this;}

    /**
     * <p>The number of Amazon EC2 instances in the cluster. If the value is 1, the
     * same instance serves as both the master and slave node. If the value is greater
     * than 1, one instance is the master node and all others are slave nodes.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of Amazon EC2 instances in the cluster. If the value is 1, the
     * same instance serves as both the master and slave node. If the value is greater
     * than 1, one instance is the master node and all others are slave nodes.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of Amazon EC2 instances in the cluster. If the value is 1, the
     * same instance serves as both the master and slave node. If the value is greater
     * than 1, one instance is the master node and all others are slave nodes.</p>
     */
    inline JobFlowInstancesDetail& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

    /**
     * <p>Details about the job flow's instance groups.</p>
     */
    inline const Aws::Vector<InstanceGroupDetail>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>Details about the job flow's instance groups.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupDetail>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Details about the job flow's instance groups.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupDetail>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Details about the job flow's instance groups.</p>
     */
    inline JobFlowInstancesDetail& WithInstanceGroups(const Aws::Vector<InstanceGroupDetail>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Details about the job flow's instance groups.</p>
     */
    inline JobFlowInstancesDetail& WithInstanceGroups(Aws::Vector<InstanceGroupDetail>&& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Details about the job flow's instance groups.</p>
     */
    inline JobFlowInstancesDetail& AddInstanceGroups(const InstanceGroupDetail& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Details about the job flow's instance groups.</p>
     */
    inline JobFlowInstancesDetail& AddInstanceGroups(InstanceGroupDetail&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>An approximation of the cost of the job flow, represented in m1.small/hours.
     * This value is incremented once for every hour an m1.small runs. Larger instances
     * are weighted more, so an Amazon EC2 instance that is roughly four times more
     * expensive would result in the normalized instance hours being incremented by
     * four. This result is only an approximation and does not reflect the actual
     * billing rate.</p>
     */
    inline int GetNormalizedInstanceHours() const{ return m_normalizedInstanceHours; }

    /**
     * <p>An approximation of the cost of the job flow, represented in m1.small/hours.
     * This value is incremented once for every hour an m1.small runs. Larger instances
     * are weighted more, so an Amazon EC2 instance that is roughly four times more
     * expensive would result in the normalized instance hours being incremented by
     * four. This result is only an approximation and does not reflect the actual
     * billing rate.</p>
     */
    inline void SetNormalizedInstanceHours(int value) { m_normalizedInstanceHoursHasBeenSet = true; m_normalizedInstanceHours = value; }

    /**
     * <p>An approximation of the cost of the job flow, represented in m1.small/hours.
     * This value is incremented once for every hour an m1.small runs. Larger instances
     * are weighted more, so an Amazon EC2 instance that is roughly four times more
     * expensive would result in the normalized instance hours being incremented by
     * four. This result is only an approximation and does not reflect the actual
     * billing rate.</p>
     */
    inline JobFlowInstancesDetail& WithNormalizedInstanceHours(int value) { SetNormalizedInstanceHours(value); return *this;}

    /**
     * <p>The name of an Amazon EC2 key pair that can be used to ssh to the master node
     * of job flow.</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }

    /**
     * <p>The name of an Amazon EC2 key pair that can be used to ssh to the master node
     * of job flow.</p>
     */
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of an Amazon EC2 key pair that can be used to ssh to the master node
     * of job flow.</p>
     */
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of an Amazon EC2 key pair that can be used to ssh to the master node
     * of job flow.</p>
     */
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }

    /**
     * <p>The name of an Amazon EC2 key pair that can be used to ssh to the master node
     * of job flow.</p>
     */
    inline JobFlowInstancesDetail& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of an Amazon EC2 key pair that can be used to ssh to the master node
     * of job flow.</p>
     */
    inline JobFlowInstancesDetail& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of an Amazon EC2 key pair that can be used to ssh to the master node
     * of job flow.</p>
     */
    inline JobFlowInstancesDetail& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>For job flows launched within Amazon Virtual Private Cloud, this value
     * specifies the identifier of the subnet where the job flow was launched.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const{ return m_ec2SubnetId; }

    /**
     * <p>For job flows launched within Amazon Virtual Private Cloud, this value
     * specifies the identifier of the subnet where the job flow was launched.</p>
     */
    inline void SetEc2SubnetId(const Aws::String& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }

    /**
     * <p>For job flows launched within Amazon Virtual Private Cloud, this value
     * specifies the identifier of the subnet where the job flow was launched.</p>
     */
    inline void SetEc2SubnetId(Aws::String&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }

    /**
     * <p>For job flows launched within Amazon Virtual Private Cloud, this value
     * specifies the identifier of the subnet where the job flow was launched.</p>
     */
    inline void SetEc2SubnetId(const char* value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId.assign(value); }

    /**
     * <p>For job flows launched within Amazon Virtual Private Cloud, this value
     * specifies the identifier of the subnet where the job flow was launched.</p>
     */
    inline JobFlowInstancesDetail& WithEc2SubnetId(const Aws::String& value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>For job flows launched within Amazon Virtual Private Cloud, this value
     * specifies the identifier of the subnet where the job flow was launched.</p>
     */
    inline JobFlowInstancesDetail& WithEc2SubnetId(Aws::String&& value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>For job flows launched within Amazon Virtual Private Cloud, this value
     * specifies the identifier of the subnet where the job flow was launched.</p>
     */
    inline JobFlowInstancesDetail& WithEc2SubnetId(const char* value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone for the job flow.</p>
     */
    inline const PlacementType& GetPlacement() const{ return m_placement; }

    /**
     * <p>The Amazon EC2 Availability Zone for the job flow.</p>
     */
    inline void SetPlacement(const PlacementType& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The Amazon EC2 Availability Zone for the job flow.</p>
     */
    inline void SetPlacement(PlacementType&& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The Amazon EC2 Availability Zone for the job flow.</p>
     */
    inline JobFlowInstancesDetail& WithPlacement(const PlacementType& value) { SetPlacement(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone for the job flow.</p>
     */
    inline JobFlowInstancesDetail& WithPlacement(PlacementType&& value) { SetPlacement(value); return *this;}

    /**
     * <p>Specifies whether the job flow should terminate after completing all
     * steps.</p>
     */
    inline bool GetKeepJobFlowAliveWhenNoSteps() const{ return m_keepJobFlowAliveWhenNoSteps; }

    /**
     * <p>Specifies whether the job flow should terminate after completing all
     * steps.</p>
     */
    inline void SetKeepJobFlowAliveWhenNoSteps(bool value) { m_keepJobFlowAliveWhenNoStepsHasBeenSet = true; m_keepJobFlowAliveWhenNoSteps = value; }

    /**
     * <p>Specifies whether the job flow should terminate after completing all
     * steps.</p>
     */
    inline JobFlowInstancesDetail& WithKeepJobFlowAliveWhenNoSteps(bool value) { SetKeepJobFlowAliveWhenNoSteps(value); return *this;}

    /**
     * <p>Specifies whether the Amazon EC2 instances in the cluster are protected from
     * termination by API calls, user intervention, or in the event of a job flow
     * error.</p>
     */
    inline bool GetTerminationProtected() const{ return m_terminationProtected; }

    /**
     * <p>Specifies whether the Amazon EC2 instances in the cluster are protected from
     * termination by API calls, user intervention, or in the event of a job flow
     * error.</p>
     */
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }

    /**
     * <p>Specifies whether the Amazon EC2 instances in the cluster are protected from
     * termination by API calls, user intervention, or in the event of a job flow
     * error.</p>
     */
    inline JobFlowInstancesDetail& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}

    /**
     * <p>The Hadoop version for the job flow.</p>
     */
    inline const Aws::String& GetHadoopVersion() const{ return m_hadoopVersion; }

    /**
     * <p>The Hadoop version for the job flow.</p>
     */
    inline void SetHadoopVersion(const Aws::String& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = value; }

    /**
     * <p>The Hadoop version for the job flow.</p>
     */
    inline void SetHadoopVersion(Aws::String&& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = value; }

    /**
     * <p>The Hadoop version for the job flow.</p>
     */
    inline void SetHadoopVersion(const char* value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion.assign(value); }

    /**
     * <p>The Hadoop version for the job flow.</p>
     */
    inline JobFlowInstancesDetail& WithHadoopVersion(const Aws::String& value) { SetHadoopVersion(value); return *this;}

    /**
     * <p>The Hadoop version for the job flow.</p>
     */
    inline JobFlowInstancesDetail& WithHadoopVersion(Aws::String&& value) { SetHadoopVersion(value); return *this;}

    /**
     * <p>The Hadoop version for the job flow.</p>
     */
    inline JobFlowInstancesDetail& WithHadoopVersion(const char* value) { SetHadoopVersion(value); return *this;}

  private:
    Aws::String m_masterInstanceType;
    bool m_masterInstanceTypeHasBeenSet;
    Aws::String m_masterPublicDnsName;
    bool m_masterPublicDnsNameHasBeenSet;
    Aws::String m_masterInstanceId;
    bool m_masterInstanceIdHasBeenSet;
    Aws::String m_slaveInstanceType;
    bool m_slaveInstanceTypeHasBeenSet;
    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
    Aws::Vector<InstanceGroupDetail> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet;
    int m_normalizedInstanceHours;
    bool m_normalizedInstanceHoursHasBeenSet;
    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet;
    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet;
    PlacementType m_placement;
    bool m_placementHasBeenSet;
    bool m_keepJobFlowAliveWhenNoSteps;
    bool m_keepJobFlowAliveWhenNoStepsHasBeenSet;
    bool m_terminationProtected;
    bool m_terminationProtectedHasBeenSet;
    Aws::String m_hadoopVersion;
    bool m_hadoopVersionHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
