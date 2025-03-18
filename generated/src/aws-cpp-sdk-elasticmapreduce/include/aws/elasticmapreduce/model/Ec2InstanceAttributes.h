/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides information about the Amazon EC2 instances in a cluster grouped by
   * category. For example, key name, subnet ID, IAM instance profile, and so
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Ec2InstanceAttributes">AWS
   * API Reference</a></p>
   */
  class Ec2InstanceAttributes
  {
  public:
    AWS_EMR_API Ec2InstanceAttributes() = default;
    AWS_EMR_API Ec2InstanceAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Ec2InstanceAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline const Aws::String& GetEc2KeyName() const { return m_ec2KeyName; }
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }
    template<typename Ec2KeyNameT = Aws::String>
    void SetEc2KeyName(Ec2KeyNameT&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::forward<Ec2KeyNameT>(value); }
    template<typename Ec2KeyNameT = Aws::String>
    Ec2InstanceAttributes& WithEc2KeyName(Ec2KeyNameT&& value) { SetEc2KeyName(std::forward<Ec2KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this parameter to the identifier of the Amazon VPC subnet where you want
     * the cluster to launch. If you do not specify this value, and your account
     * supports EC2-Classic, the cluster launches in EC2-Classic.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const { return m_ec2SubnetId; }
    inline bool Ec2SubnetIdHasBeenSet() const { return m_ec2SubnetIdHasBeenSet; }
    template<typename Ec2SubnetIdT = Aws::String>
    void SetEc2SubnetId(Ec2SubnetIdT&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = std::forward<Ec2SubnetIdT>(value); }
    template<typename Ec2SubnetIdT = Aws::String>
    Ec2InstanceAttributes& WithEc2SubnetId(Ec2SubnetIdT&& value) { SetEc2SubnetId(std::forward<Ec2SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch Amazon
     * EC2 cluster instances. Subnets must exist within the same VPC. Amazon EMR
     * chooses the Amazon EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and Region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedEc2SubnetIds() const { return m_requestedEc2SubnetIds; }
    inline bool RequestedEc2SubnetIdsHasBeenSet() const { return m_requestedEc2SubnetIdsHasBeenSet; }
    template<typename RequestedEc2SubnetIdsT = Aws::Vector<Aws::String>>
    void SetRequestedEc2SubnetIds(RequestedEc2SubnetIdsT&& value) { m_requestedEc2SubnetIdsHasBeenSet = true; m_requestedEc2SubnetIds = std::forward<RequestedEc2SubnetIdsT>(value); }
    template<typename RequestedEc2SubnetIdsT = Aws::Vector<Aws::String>>
    Ec2InstanceAttributes& WithRequestedEc2SubnetIds(RequestedEc2SubnetIdsT&& value) { SetRequestedEc2SubnetIds(std::forward<RequestedEc2SubnetIdsT>(value)); return *this;}
    template<typename RequestedEc2SubnetIdsT = Aws::String>
    Ec2InstanceAttributes& AddRequestedEc2SubnetIds(RequestedEc2SubnetIdsT&& value) { m_requestedEc2SubnetIdsHasBeenSet = true; m_requestedEc2SubnetIds.emplace_back(std::forward<RequestedEc2SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline const Aws::String& GetEc2AvailabilityZone() const { return m_ec2AvailabilityZone; }
    inline bool Ec2AvailabilityZoneHasBeenSet() const { return m_ec2AvailabilityZoneHasBeenSet; }
    template<typename Ec2AvailabilityZoneT = Aws::String>
    void SetEc2AvailabilityZone(Ec2AvailabilityZoneT&& value) { m_ec2AvailabilityZoneHasBeenSet = true; m_ec2AvailabilityZone = std::forward<Ec2AvailabilityZoneT>(value); }
    template<typename Ec2AvailabilityZoneT = Aws::String>
    Ec2InstanceAttributes& WithEc2AvailabilityZone(Ec2AvailabilityZoneT&& value) { SetEc2AvailabilityZone(std::forward<Ec2AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch Amazon EC2 cluster instances when
     * the EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedEc2AvailabilityZones() const { return m_requestedEc2AvailabilityZones; }
    inline bool RequestedEc2AvailabilityZonesHasBeenSet() const { return m_requestedEc2AvailabilityZonesHasBeenSet; }
    template<typename RequestedEc2AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetRequestedEc2AvailabilityZones(RequestedEc2AvailabilityZonesT&& value) { m_requestedEc2AvailabilityZonesHasBeenSet = true; m_requestedEc2AvailabilityZones = std::forward<RequestedEc2AvailabilityZonesT>(value); }
    template<typename RequestedEc2AvailabilityZonesT = Aws::Vector<Aws::String>>
    Ec2InstanceAttributes& WithRequestedEc2AvailabilityZones(RequestedEc2AvailabilityZonesT&& value) { SetRequestedEc2AvailabilityZones(std::forward<RequestedEc2AvailabilityZonesT>(value)); return *this;}
    template<typename RequestedEc2AvailabilityZonesT = Aws::String>
    Ec2InstanceAttributes& AddRequestedEc2AvailabilityZones(RequestedEc2AvailabilityZonesT&& value) { m_requestedEc2AvailabilityZonesHasBeenSet = true; m_requestedEc2AvailabilityZones.emplace_back(std::forward<RequestedEc2AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that was specified when the cluster was launched. The Amazon EC2
     * instances of the cluster assume this role.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = Aws::String>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = Aws::String>
    Ec2InstanceAttributes& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline const Aws::String& GetEmrManagedMasterSecurityGroup() const { return m_emrManagedMasterSecurityGroup; }
    inline bool EmrManagedMasterSecurityGroupHasBeenSet() const { return m_emrManagedMasterSecurityGroupHasBeenSet; }
    template<typename EmrManagedMasterSecurityGroupT = Aws::String>
    void SetEmrManagedMasterSecurityGroup(EmrManagedMasterSecurityGroupT&& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = std::forward<EmrManagedMasterSecurityGroupT>(value); }
    template<typename EmrManagedMasterSecurityGroupT = Aws::String>
    Ec2InstanceAttributes& WithEmrManagedMasterSecurityGroup(EmrManagedMasterSecurityGroupT&& value) { SetEmrManagedMasterSecurityGroup(std::forward<EmrManagedMasterSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline const Aws::String& GetEmrManagedSlaveSecurityGroup() const { return m_emrManagedSlaveSecurityGroup; }
    inline bool EmrManagedSlaveSecurityGroupHasBeenSet() const { return m_emrManagedSlaveSecurityGroupHasBeenSet; }
    template<typename EmrManagedSlaveSecurityGroupT = Aws::String>
    void SetEmrManagedSlaveSecurityGroup(EmrManagedSlaveSecurityGroupT&& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = std::forward<EmrManagedSlaveSecurityGroupT>(value); }
    template<typename EmrManagedSlaveSecurityGroupT = Aws::String>
    Ec2InstanceAttributes& WithEmrManagedSlaveSecurityGroup(EmrManagedSlaveSecurityGroupT&& value) { SetEmrManagedSlaveSecurityGroup(std::forward<EmrManagedSlaveSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline const Aws::String& GetServiceAccessSecurityGroup() const { return m_serviceAccessSecurityGroup; }
    inline bool ServiceAccessSecurityGroupHasBeenSet() const { return m_serviceAccessSecurityGroupHasBeenSet; }
    template<typename ServiceAccessSecurityGroupT = Aws::String>
    void SetServiceAccessSecurityGroup(ServiceAccessSecurityGroupT&& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = std::forward<ServiceAccessSecurityGroupT>(value); }
    template<typename ServiceAccessSecurityGroupT = Aws::String>
    Ec2InstanceAttributes& WithServiceAccessSecurityGroup(ServiceAccessSecurityGroupT&& value) { SetServiceAccessSecurityGroup(std::forward<ServiceAccessSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalMasterSecurityGroups() const { return m_additionalMasterSecurityGroups; }
    inline bool AdditionalMasterSecurityGroupsHasBeenSet() const { return m_additionalMasterSecurityGroupsHasBeenSet; }
    template<typename AdditionalMasterSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetAdditionalMasterSecurityGroups(AdditionalMasterSecurityGroupsT&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = std::forward<AdditionalMasterSecurityGroupsT>(value); }
    template<typename AdditionalMasterSecurityGroupsT = Aws::Vector<Aws::String>>
    Ec2InstanceAttributes& WithAdditionalMasterSecurityGroups(AdditionalMasterSecurityGroupsT&& value) { SetAdditionalMasterSecurityGroups(std::forward<AdditionalMasterSecurityGroupsT>(value)); return *this;}
    template<typename AdditionalMasterSecurityGroupsT = Aws::String>
    Ec2InstanceAttributes& AddAdditionalMasterSecurityGroups(AdditionalMasterSecurityGroupsT&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.emplace_back(std::forward<AdditionalMasterSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalSlaveSecurityGroups() const { return m_additionalSlaveSecurityGroups; }
    inline bool AdditionalSlaveSecurityGroupsHasBeenSet() const { return m_additionalSlaveSecurityGroupsHasBeenSet; }
    template<typename AdditionalSlaveSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetAdditionalSlaveSecurityGroups(AdditionalSlaveSecurityGroupsT&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = std::forward<AdditionalSlaveSecurityGroupsT>(value); }
    template<typename AdditionalSlaveSecurityGroupsT = Aws::Vector<Aws::String>>
    Ec2InstanceAttributes& WithAdditionalSlaveSecurityGroups(AdditionalSlaveSecurityGroupsT&& value) { SetAdditionalSlaveSecurityGroups(std::forward<AdditionalSlaveSecurityGroupsT>(value)); return *this;}
    template<typename AdditionalSlaveSecurityGroupsT = Aws::String>
    Ec2InstanceAttributes& AddAdditionalSlaveSecurityGroups(AdditionalSlaveSecurityGroupsT&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.emplace_back(std::forward<AdditionalSlaveSecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet = false;

    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedEc2SubnetIds;
    bool m_requestedEc2SubnetIdsHasBeenSet = false;

    Aws::String m_ec2AvailabilityZone;
    bool m_ec2AvailabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_requestedEc2AvailabilityZones;
    bool m_requestedEc2AvailabilityZonesHasBeenSet = false;

    Aws::String m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::String m_emrManagedMasterSecurityGroup;
    bool m_emrManagedMasterSecurityGroupHasBeenSet = false;

    Aws::String m_emrManagedSlaveSecurityGroup;
    bool m_emrManagedSlaveSecurityGroupHasBeenSet = false;

    Aws::String m_serviceAccessSecurityGroup;
    bool m_serviceAccessSecurityGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalMasterSecurityGroups;
    bool m_additionalMasterSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalSlaveSecurityGroups;
    bool m_additionalSlaveSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
