/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/PlacementType.h>
#include <aws/elasticmapreduce/model/InstanceGroupDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Specify the type of Amazon EC2 instances that the cluster (job flow) runs
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/JobFlowInstancesDetail">AWS
   * API Reference</a></p>
   */
  class JobFlowInstancesDetail
  {
  public:
    AWS_EMR_API JobFlowInstancesDetail();
    AWS_EMR_API JobFlowInstancesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API JobFlowInstancesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline const Aws::String& GetMasterInstanceType() const{ return m_masterInstanceType; }
    inline bool MasterInstanceTypeHasBeenSet() const { return m_masterInstanceTypeHasBeenSet; }
    inline void SetMasterInstanceType(const Aws::String& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = value; }
    inline void SetMasterInstanceType(Aws::String&& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = std::move(value); }
    inline void SetMasterInstanceType(const char* value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType.assign(value); }
    inline JobFlowInstancesDetail& WithMasterInstanceType(const Aws::String& value) { SetMasterInstanceType(value); return *this;}
    inline JobFlowInstancesDetail& WithMasterInstanceType(Aws::String&& value) { SetMasterInstanceType(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& WithMasterInstanceType(const char* value) { SetMasterInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline const Aws::String& GetMasterPublicDnsName() const{ return m_masterPublicDnsName; }
    inline bool MasterPublicDnsNameHasBeenSet() const { return m_masterPublicDnsNameHasBeenSet; }
    inline void SetMasterPublicDnsName(const Aws::String& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = value; }
    inline void SetMasterPublicDnsName(Aws::String&& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = std::move(value); }
    inline void SetMasterPublicDnsName(const char* value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName.assign(value); }
    inline JobFlowInstancesDetail& WithMasterPublicDnsName(const Aws::String& value) { SetMasterPublicDnsName(value); return *this;}
    inline JobFlowInstancesDetail& WithMasterPublicDnsName(Aws::String&& value) { SetMasterPublicDnsName(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& WithMasterPublicDnsName(const char* value) { SetMasterPublicDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline const Aws::String& GetMasterInstanceId() const{ return m_masterInstanceId; }
    inline bool MasterInstanceIdHasBeenSet() const { return m_masterInstanceIdHasBeenSet; }
    inline void SetMasterInstanceId(const Aws::String& value) { m_masterInstanceIdHasBeenSet = true; m_masterInstanceId = value; }
    inline void SetMasterInstanceId(Aws::String&& value) { m_masterInstanceIdHasBeenSet = true; m_masterInstanceId = std::move(value); }
    inline void SetMasterInstanceId(const char* value) { m_masterInstanceIdHasBeenSet = true; m_masterInstanceId.assign(value); }
    inline JobFlowInstancesDetail& WithMasterInstanceId(const Aws::String& value) { SetMasterInstanceId(value); return *this;}
    inline JobFlowInstancesDetail& WithMasterInstanceId(Aws::String&& value) { SetMasterInstanceId(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& WithMasterInstanceId(const char* value) { SetMasterInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 core and task node instance type.</p>
     */
    inline const Aws::String& GetSlaveInstanceType() const{ return m_slaveInstanceType; }
    inline bool SlaveInstanceTypeHasBeenSet() const { return m_slaveInstanceTypeHasBeenSet; }
    inline void SetSlaveInstanceType(const Aws::String& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = value; }
    inline void SetSlaveInstanceType(Aws::String&& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = std::move(value); }
    inline void SetSlaveInstanceType(const char* value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType.assign(value); }
    inline JobFlowInstancesDetail& WithSlaveInstanceType(const Aws::String& value) { SetSlaveInstanceType(value); return *this;}
    inline JobFlowInstancesDetail& WithSlaveInstanceType(Aws::String&& value) { SetSlaveInstanceType(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& WithSlaveInstanceType(const char* value) { SetSlaveInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon EC2 instances in the cluster. If the value is 1, the
     * same instance serves as both the master and core and task node. If the value is
     * greater than 1, one instance is the master node and all others are core and task
     * nodes.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline JobFlowInstancesDetail& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the instance groups in a cluster.</p>
     */
    inline const Aws::Vector<InstanceGroupDetail>& GetInstanceGroups() const{ return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupDetail>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupDetail>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }
    inline JobFlowInstancesDetail& WithInstanceGroups(const Aws::Vector<InstanceGroupDetail>& value) { SetInstanceGroups(value); return *this;}
    inline JobFlowInstancesDetail& WithInstanceGroups(Aws::Vector<InstanceGroupDetail>&& value) { SetInstanceGroups(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& AddInstanceGroups(const InstanceGroupDetail& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }
    inline JobFlowInstancesDetail& AddInstanceGroups(InstanceGroupDetail&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is increased one time for every hour that an m1.small instance runs.
     * Larger instances are weighted more heavily, so an Amazon EC2 instance that is
     * roughly four times more expensive would result in the normalized instance hours
     * being increased incrementally four times. This result is only an approximation
     * and does not reflect the actual billing rate.</p>
     */
    inline int GetNormalizedInstanceHours() const{ return m_normalizedInstanceHours; }
    inline bool NormalizedInstanceHoursHasBeenSet() const { return m_normalizedInstanceHoursHasBeenSet; }
    inline void SetNormalizedInstanceHours(int value) { m_normalizedInstanceHoursHasBeenSet = true; m_normalizedInstanceHours = value; }
    inline JobFlowInstancesDetail& WithNormalizedInstanceHours(int value) { SetNormalizedInstanceHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon EC2 key pair that can be used to connect to the master
     * node using SSH.</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::move(value); }
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }
    inline JobFlowInstancesDetail& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}
    inline JobFlowInstancesDetail& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For clusters launched within Amazon Virtual Private Cloud, this is the
     * identifier of the subnet where the cluster was launched.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const{ return m_ec2SubnetId; }
    inline bool Ec2SubnetIdHasBeenSet() const { return m_ec2SubnetIdHasBeenSet; }
    inline void SetEc2SubnetId(const Aws::String& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }
    inline void SetEc2SubnetId(Aws::String&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = std::move(value); }
    inline void SetEc2SubnetId(const char* value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId.assign(value); }
    inline JobFlowInstancesDetail& WithEc2SubnetId(const Aws::String& value) { SetEc2SubnetId(value); return *this;}
    inline JobFlowInstancesDetail& WithEc2SubnetId(Aws::String&& value) { SetEc2SubnetId(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& WithEc2SubnetId(const char* value) { SetEc2SubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.</p>
     */
    inline const PlacementType& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const PlacementType& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(PlacementType&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline JobFlowInstancesDetail& WithPlacement(const PlacementType& value) { SetPlacement(value); return *this;}
    inline JobFlowInstancesDetail& WithPlacement(PlacementType&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cluster should remain available after completing all
     * steps.</p>
     */
    inline bool GetKeepJobFlowAliveWhenNoSteps() const{ return m_keepJobFlowAliveWhenNoSteps; }
    inline bool KeepJobFlowAliveWhenNoStepsHasBeenSet() const { return m_keepJobFlowAliveWhenNoStepsHasBeenSet; }
    inline void SetKeepJobFlowAliveWhenNoSteps(bool value) { m_keepJobFlowAliveWhenNoStepsHasBeenSet = true; m_keepJobFlowAliveWhenNoSteps = value; }
    inline JobFlowInstancesDetail& WithKeepJobFlowAliveWhenNoSteps(bool value) { SetKeepJobFlowAliveWhenNoSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Amazon EC2 instances in the cluster are protected from
     * termination by API calls, user intervention, or in the event of a job-flow
     * error.</p>
     */
    inline bool GetTerminationProtected() const{ return m_terminationProtected; }
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }
    inline JobFlowInstancesDetail& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EMR should gracefully replace core nodes that have
     * degraded within the cluster.</p>
     */
    inline bool GetUnhealthyNodeReplacement() const{ return m_unhealthyNodeReplacement; }
    inline bool UnhealthyNodeReplacementHasBeenSet() const { return m_unhealthyNodeReplacementHasBeenSet; }
    inline void SetUnhealthyNodeReplacement(bool value) { m_unhealthyNodeReplacementHasBeenSet = true; m_unhealthyNodeReplacement = value; }
    inline JobFlowInstancesDetail& WithUnhealthyNodeReplacement(bool value) { SetUnhealthyNodeReplacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Hadoop version for the cluster.</p>
     */
    inline const Aws::String& GetHadoopVersion() const{ return m_hadoopVersion; }
    inline bool HadoopVersionHasBeenSet() const { return m_hadoopVersionHasBeenSet; }
    inline void SetHadoopVersion(const Aws::String& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = value; }
    inline void SetHadoopVersion(Aws::String&& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = std::move(value); }
    inline void SetHadoopVersion(const char* value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion.assign(value); }
    inline JobFlowInstancesDetail& WithHadoopVersion(const Aws::String& value) { SetHadoopVersion(value); return *this;}
    inline JobFlowInstancesDetail& WithHadoopVersion(Aws::String&& value) { SetHadoopVersion(std::move(value)); return *this;}
    inline JobFlowInstancesDetail& WithHadoopVersion(const char* value) { SetHadoopVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_masterInstanceType;
    bool m_masterInstanceTypeHasBeenSet = false;

    Aws::String m_masterPublicDnsName;
    bool m_masterPublicDnsNameHasBeenSet = false;

    Aws::String m_masterInstanceId;
    bool m_masterInstanceIdHasBeenSet = false;

    Aws::String m_slaveInstanceType;
    bool m_slaveInstanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<InstanceGroupDetail> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    int m_normalizedInstanceHours;
    bool m_normalizedInstanceHoursHasBeenSet = false;

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet = false;

    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet = false;

    PlacementType m_placement;
    bool m_placementHasBeenSet = false;

    bool m_keepJobFlowAliveWhenNoSteps;
    bool m_keepJobFlowAliveWhenNoStepsHasBeenSet = false;

    bool m_terminationProtected;
    bool m_terminationProtectedHasBeenSet = false;

    bool m_unhealthyNodeReplacement;
    bool m_unhealthyNodeReplacementHasBeenSet = false;

    Aws::String m_hadoopVersion;
    bool m_hadoopVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
