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
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationSubnetGroup();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationSubnetGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationSubnetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const{ return m_replicationSubnetGroupIdentifier; }

    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const Aws::String& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = value; }

    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(Aws::String&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::move(value); }

    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const char* value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier.assign(value); }

    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithReplicationSubnetGroupIdentifier(const Aws::String& value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithReplicationSubnetGroupIdentifier(Aws::String&& value) { SetReplicationSubnetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the replication instance subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithReplicationSubnetGroupIdentifier(const char* value) { SetReplicationSubnetGroupIdentifier(value); return *this;}


    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupDescription() const{ return m_replicationSubnetGroupDescription; }

    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline bool ReplicationSubnetGroupDescriptionHasBeenSet() const { return m_replicationSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(const Aws::String& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = value; }

    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(Aws::String&& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = std::move(value); }

    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(const char* value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription.assign(value); }

    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithReplicationSubnetGroupDescription(const Aws::String& value) { SetReplicationSubnetGroupDescription(value); return *this;}

    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithReplicationSubnetGroupDescription(Aws::String&& value) { SetReplicationSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the replication subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithReplicationSubnetGroupDescription(const char* value) { SetReplicationSubnetGroupDescription(value); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ReplicationSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ReplicationSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ReplicationSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The status of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const{ return m_subnetGroupStatus; }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline void SetSubnetGroupStatus(const Aws::String& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = value; }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline void SetSubnetGroupStatus(Aws::String&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::move(value); }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline void SetSubnetGroupStatus(const char* value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus.assign(value); }

    /**
     * <p>The status of the subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithSubnetGroupStatus(const Aws::String& value) { SetSubnetGroupStatus(value); return *this;}

    /**
     * <p>The status of the subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithSubnetGroupStatus(Aws::String&& value) { SetSubnetGroupStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithSubnetGroupStatus(const char* value) { SetSubnetGroupStatus(value); return *this;}


    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline ReplicationSubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline ReplicationSubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The subnets that are in the subnet group.</p>
     */
    inline ReplicationSubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }


    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedNetworkTypes() const{ return m_supportedNetworkTypes; }

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline void SetSupportedNetworkTypes(const Aws::Vector<Aws::String>& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = value; }

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline void SetSupportedNetworkTypes(Aws::Vector<Aws::String>&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::move(value); }

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline ReplicationSubnetGroup& WithSupportedNetworkTypes(const Aws::Vector<Aws::String>& value) { SetSupportedNetworkTypes(value); return *this;}

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline ReplicationSubnetGroup& WithSupportedNetworkTypes(Aws::Vector<Aws::String>&& value) { SetSupportedNetworkTypes(std::move(value)); return *this;}

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline ReplicationSubnetGroup& AddSupportedNetworkTypes(const Aws::String& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline ReplicationSubnetGroup& AddSupportedNetworkTypes(Aws::String&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addressing protocol supported by the subnet group. This is used by a
     * replication instance with values such as IPv4 only or Dual-stack that supports
     * both IPv4 and IPv6 addressing. IPv6 only is not yet supported.</p>
     */
    inline ReplicationSubnetGroup& AddSupportedNetworkTypes(const char* value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }

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
