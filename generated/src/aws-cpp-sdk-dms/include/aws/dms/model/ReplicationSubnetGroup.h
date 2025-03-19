/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Subnet.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a subnet group in response to a request by the
   * <code>DescribeReplicationSubnetGroups</code> operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationSubnetGroup">AWS
   * API Reference</a></p>
   */
  class ReplicationSubnetGroup
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationSubnetGroup() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationSubnetGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationSubnetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const { return m_replicationSubnetGroupIdentifier; }
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    void SetReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::forward<ReplicationSubnetGroupIdentifierT>(value); }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    ReplicationSubnetGroup& WithReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { SetReplicationSubnetGroupIdentifier(std::forward<ReplicationSubnetGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupDescription() const { return m_replicationSubnetGroupDescription; }
    inline bool ReplicationSubnetGroupDescriptionHasBeenSet() const { return m_replicationSubnetGroupDescriptionHasBeenSet; }
    template<typename ReplicationSubnetGroupDescriptionT = Aws::String>
    void SetReplicationSubnetGroupDescription(ReplicationSubnetGroupDescriptionT&& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = std::forward<ReplicationSubnetGroupDescriptionT>(value); }
    template<typename ReplicationSubnetGroupDescriptionT = Aws::String>
    ReplicationSubnetGroup& WithReplicationSubnetGroupDescription(ReplicationSubnetGroupDescriptionT&& value) { SetReplicationSubnetGroupDescription(std::forward<ReplicationSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    ReplicationSubnetGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const { return m_subnetGroupStatus; }
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }
    template<typename SubnetGroupStatusT = Aws::String>
    void SetSubnetGroupStatus(SubnetGroupStatusT&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::forward<SubnetGroupStatusT>(value); }
    template<typename SubnetGroupStatusT = Aws::String>
    ReplicationSubnetGroup& WithSubnetGroupStatus(SubnetGroupStatusT&& value) { SetSubnetGroupStatus(std::forward<SubnetGroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    ReplicationSubnetGroup& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Subnet>
    ReplicationSubnetGroup& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedNetworkTypes() const { return m_supportedNetworkTypes; }
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }
    template<typename SupportedNetworkTypesT = Aws::Vector<Aws::String>>
    void SetSupportedNetworkTypes(SupportedNetworkTypesT&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::forward<SupportedNetworkTypesT>(value); }
    template<typename SupportedNetworkTypesT = Aws::Vector<Aws::String>>
    ReplicationSubnetGroup& WithSupportedNetworkTypes(SupportedNetworkTypesT&& value) { SetSupportedNetworkTypes(std::forward<SupportedNetworkTypesT>(value)); return *this;}
    template<typename SupportedNetworkTypesT = Aws::String>
    ReplicationSubnetGroup& AddSupportedNetworkTypes(SupportedNetworkTypesT&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.emplace_back(std::forward<SupportedNetworkTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet = false;

    Aws::String m_replicationSubnetGroupDescription;
    bool m_replicationSubnetGroupDescriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetGroupStatus;
    bool m_subnetGroupStatusHasBeenSet = false;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedNetworkTypes;
    bool m_supportedNetworkTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
