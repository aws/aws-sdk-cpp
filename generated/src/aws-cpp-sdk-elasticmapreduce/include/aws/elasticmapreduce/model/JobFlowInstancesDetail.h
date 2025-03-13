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
    AWS_EMR_API JobFlowInstancesDetail() = default;
    AWS_EMR_API JobFlowInstancesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API JobFlowInstancesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 master node instance type.</p>
     */
    inline const Aws::String& GetMasterInstanceType() const { return m_masterInstanceType; }
    inline bool MasterInstanceTypeHasBeenSet() const { return m_masterInstanceTypeHasBeenSet; }
    template<typename MasterInstanceTypeT = Aws::String>
    void SetMasterInstanceType(MasterInstanceTypeT&& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = std::forward<MasterInstanceTypeT>(value); }
    template<typename MasterInstanceTypeT = Aws::String>
    JobFlowInstancesDetail& WithMasterInstanceType(MasterInstanceTypeT&& value) { SetMasterInstanceType(std::forward<MasterInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline const Aws::String& GetMasterPublicDnsName() const { return m_masterPublicDnsName; }
    inline bool MasterPublicDnsNameHasBeenSet() const { return m_masterPublicDnsNameHasBeenSet; }
    template<typename MasterPublicDnsNameT = Aws::String>
    void SetMasterPublicDnsName(MasterPublicDnsNameT&& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = std::forward<MasterPublicDnsNameT>(value); }
    template<typename MasterPublicDnsNameT = Aws::String>
    JobFlowInstancesDetail& WithMasterPublicDnsName(MasterPublicDnsNameT&& value) { SetMasterPublicDnsName(std::forward<MasterPublicDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance identifier of the master node.</p>
     */
    inline const Aws::String& GetMasterInstanceId() const { return m_masterInstanceId; }
    inline bool MasterInstanceIdHasBeenSet() const { return m_masterInstanceIdHasBeenSet; }
    template<typename MasterInstanceIdT = Aws::String>
    void SetMasterInstanceId(MasterInstanceIdT&& value) { m_masterInstanceIdHasBeenSet = true; m_masterInstanceId = std::forward<MasterInstanceIdT>(value); }
    template<typename MasterInstanceIdT = Aws::String>
    JobFlowInstancesDetail& WithMasterInstanceId(MasterInstanceIdT&& value) { SetMasterInstanceId(std::forward<MasterInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 core and task node instance type.</p>
     */
    inline const Aws::String& GetSlaveInstanceType() const { return m_slaveInstanceType; }
    inline bool SlaveInstanceTypeHasBeenSet() const { return m_slaveInstanceTypeHasBeenSet; }
    template<typename SlaveInstanceTypeT = Aws::String>
    void SetSlaveInstanceType(SlaveInstanceTypeT&& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = std::forward<SlaveInstanceTypeT>(value); }
    template<typename SlaveInstanceTypeT = Aws::String>
    JobFlowInstancesDetail& WithSlaveInstanceType(SlaveInstanceTypeT&& value) { SetSlaveInstanceType(std::forward<SlaveInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon EC2 instances in the cluster. If the value is 1, the
     * same instance serves as both the master and core and task node. If the value is
     * greater than 1, one instance is the master node and all others are core and task
     * nodes.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline JobFlowInstancesDetail& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the instance groups in a cluster.</p>
     */
    inline const Aws::Vector<InstanceGroupDetail>& GetInstanceGroups() const { return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    template<typename InstanceGroupsT = Aws::Vector<InstanceGroupDetail>>
    void SetInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::forward<InstanceGroupsT>(value); }
    template<typename InstanceGroupsT = Aws::Vector<InstanceGroupDetail>>
    JobFlowInstancesDetail& WithInstanceGroups(InstanceGroupsT&& value) { SetInstanceGroups(std::forward<InstanceGroupsT>(value)); return *this;}
    template<typename InstanceGroupsT = InstanceGroupDetail>
    JobFlowInstancesDetail& AddInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.emplace_back(std::forward<InstanceGroupsT>(value)); return *this; }
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
    inline int GetNormalizedInstanceHours() const { return m_normalizedInstanceHours; }
    inline bool NormalizedInstanceHoursHasBeenSet() const { return m_normalizedInstanceHoursHasBeenSet; }
    inline void SetNormalizedInstanceHours(int value) { m_normalizedInstanceHoursHasBeenSet = true; m_normalizedInstanceHours = value; }
    inline JobFlowInstancesDetail& WithNormalizedInstanceHours(int value) { SetNormalizedInstanceHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon EC2 key pair that can be used to connect to the master
     * node using SSH.</p>
     */
    inline const Aws::String& GetEc2KeyName() const { return m_ec2KeyName; }
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }
    template<typename Ec2KeyNameT = Aws::String>
    void SetEc2KeyName(Ec2KeyNameT&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::forward<Ec2KeyNameT>(value); }
    template<typename Ec2KeyNameT = Aws::String>
    JobFlowInstancesDetail& WithEc2KeyName(Ec2KeyNameT&& value) { SetEc2KeyName(std::forward<Ec2KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For clusters launched within Amazon Virtual Private Cloud, this is the
     * identifier of the subnet where the cluster was launched.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const { return m_ec2SubnetId; }
    inline bool Ec2SubnetIdHasBeenSet() const { return m_ec2SubnetIdHasBeenSet; }
    template<typename Ec2SubnetIdT = Aws::String>
    void SetEc2SubnetId(Ec2SubnetIdT&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = std::forward<Ec2SubnetIdT>(value); }
    template<typename Ec2SubnetIdT = Aws::String>
    JobFlowInstancesDetail& WithEc2SubnetId(Ec2SubnetIdT&& value) { SetEc2SubnetId(std::forward<Ec2SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 Availability Zone for the cluster.</p>
     */
    inline const PlacementType& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = PlacementType>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = PlacementType>
    JobFlowInstancesDetail& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cluster should remain available after completing all
     * steps.</p>
     */
    inline bool GetKeepJobFlowAliveWhenNoSteps() const { return m_keepJobFlowAliveWhenNoSteps; }
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
    inline bool GetTerminationProtected() const { return m_terminationProtected; }
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }
    inline JobFlowInstancesDetail& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EMR should gracefully replace core nodes that have
     * degraded within the cluster.</p>
     */
    inline bool GetUnhealthyNodeReplacement() const { return m_unhealthyNodeReplacement; }
    inline bool UnhealthyNodeReplacementHasBeenSet() const { return m_unhealthyNodeReplacementHasBeenSet; }
    inline void SetUnhealthyNodeReplacement(bool value) { m_unhealthyNodeReplacementHasBeenSet = true; m_unhealthyNodeReplacement = value; }
    inline JobFlowInstancesDetail& WithUnhealthyNodeReplacement(bool value) { SetUnhealthyNodeReplacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Hadoop version for the cluster.</p>
     */
    inline const Aws::String& GetHadoopVersion() const { return m_hadoopVersion; }
    inline bool HadoopVersionHasBeenSet() const { return m_hadoopVersionHasBeenSet; }
    template<typename HadoopVersionT = Aws::String>
    void SetHadoopVersion(HadoopVersionT&& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = std::forward<HadoopVersionT>(value); }
    template<typename HadoopVersionT = Aws::String>
    JobFlowInstancesDetail& WithHadoopVersion(HadoopVersionT&& value) { SetHadoopVersion(std::forward<HadoopVersionT>(value)); return *this;}
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

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<InstanceGroupDetail> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    int m_normalizedInstanceHours{0};
    bool m_normalizedInstanceHoursHasBeenSet = false;

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet = false;

    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet = false;

    PlacementType m_placement;
    bool m_placementHasBeenSet = false;

    bool m_keepJobFlowAliveWhenNoSteps{false};
    bool m_keepJobFlowAliveWhenNoStepsHasBeenSet = false;

    bool m_terminationProtected{false};
    bool m_terminationProtectedHasBeenSet = false;

    bool m_unhealthyNodeReplacement{false};
    bool m_unhealthyNodeReplacementHasBeenSet = false;

    Aws::String m_hadoopVersion;
    bool m_hadoopVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
