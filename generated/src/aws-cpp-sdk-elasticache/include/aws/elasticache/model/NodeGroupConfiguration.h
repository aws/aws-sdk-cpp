/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Node group (shard) configuration options. Each node group (shard)
   * configuration has the following: <code>Slots</code>,
   * <code>PrimaryAvailabilityZone</code>, <code>ReplicaAvailabilityZones</code>,
   * <code>ReplicaCount</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/NodeGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class NodeGroupConfiguration
  {
  public:
    AWS_ELASTICACHE_API NodeGroupConfiguration();
    AWS_ELASTICACHE_API NodeGroupConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeGroupConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Either the ElastiCache supplied 4-digit id or a user supplied id for the node
     * group these configuration values apply to.</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }
    inline NodeGroupConfiguration& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}
    inline NodeGroupConfiguration& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}
    inline NodeGroupConfiguration& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline const Aws::String& GetSlots() const{ return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    inline void SetSlots(const Aws::String& value) { m_slotsHasBeenSet = true; m_slots = value; }
    inline void SetSlots(Aws::String&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }
    inline void SetSlots(const char* value) { m_slotsHasBeenSet = true; m_slots.assign(value); }
    inline NodeGroupConfiguration& WithSlots(const Aws::String& value) { SetSlots(value); return *this;}
    inline NodeGroupConfiguration& WithSlots(Aws::String&& value) { SetSlots(std::move(value)); return *this;}
    inline NodeGroupConfiguration& WithSlots(const char* value) { SetSlots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of read replica nodes in this node group (shard).</p>
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }
    inline NodeGroupConfiguration& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline const Aws::String& GetPrimaryAvailabilityZone() const{ return m_primaryAvailabilityZone; }
    inline bool PrimaryAvailabilityZoneHasBeenSet() const { return m_primaryAvailabilityZoneHasBeenSet; }
    inline void SetPrimaryAvailabilityZone(const Aws::String& value) { m_primaryAvailabilityZoneHasBeenSet = true; m_primaryAvailabilityZone = value; }
    inline void SetPrimaryAvailabilityZone(Aws::String&& value) { m_primaryAvailabilityZoneHasBeenSet = true; m_primaryAvailabilityZone = std::move(value); }
    inline void SetPrimaryAvailabilityZone(const char* value) { m_primaryAvailabilityZoneHasBeenSet = true; m_primaryAvailabilityZone.assign(value); }
    inline NodeGroupConfiguration& WithPrimaryAvailabilityZone(const Aws::String& value) { SetPrimaryAvailabilityZone(value); return *this;}
    inline NodeGroupConfiguration& WithPrimaryAvailabilityZone(Aws::String&& value) { SetPrimaryAvailabilityZone(std::move(value)); return *this;}
    inline NodeGroupConfiguration& WithPrimaryAvailabilityZone(const char* value) { SetPrimaryAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicaAvailabilityZones() const{ return m_replicaAvailabilityZones; }
    inline bool ReplicaAvailabilityZonesHasBeenSet() const { return m_replicaAvailabilityZonesHasBeenSet; }
    inline void SetReplicaAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones = value; }
    inline void SetReplicaAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones = std::move(value); }
    inline NodeGroupConfiguration& WithReplicaAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetReplicaAvailabilityZones(value); return *this;}
    inline NodeGroupConfiguration& WithReplicaAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetReplicaAvailabilityZones(std::move(value)); return *this;}
    inline NodeGroupConfiguration& AddReplicaAvailabilityZones(const Aws::String& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones.push_back(value); return *this; }
    inline NodeGroupConfiguration& AddReplicaAvailabilityZones(Aws::String&& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones.push_back(std::move(value)); return *this; }
    inline NodeGroupConfiguration& AddReplicaAvailabilityZones(const char* value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outpost ARN of the primary node.</p>
     */
    inline const Aws::String& GetPrimaryOutpostArn() const{ return m_primaryOutpostArn; }
    inline bool PrimaryOutpostArnHasBeenSet() const { return m_primaryOutpostArnHasBeenSet; }
    inline void SetPrimaryOutpostArn(const Aws::String& value) { m_primaryOutpostArnHasBeenSet = true; m_primaryOutpostArn = value; }
    inline void SetPrimaryOutpostArn(Aws::String&& value) { m_primaryOutpostArnHasBeenSet = true; m_primaryOutpostArn = std::move(value); }
    inline void SetPrimaryOutpostArn(const char* value) { m_primaryOutpostArnHasBeenSet = true; m_primaryOutpostArn.assign(value); }
    inline NodeGroupConfiguration& WithPrimaryOutpostArn(const Aws::String& value) { SetPrimaryOutpostArn(value); return *this;}
    inline NodeGroupConfiguration& WithPrimaryOutpostArn(Aws::String&& value) { SetPrimaryOutpostArn(std::move(value)); return *this;}
    inline NodeGroupConfiguration& WithPrimaryOutpostArn(const char* value) { SetPrimaryOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARN of the node replicas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicaOutpostArns() const{ return m_replicaOutpostArns; }
    inline bool ReplicaOutpostArnsHasBeenSet() const { return m_replicaOutpostArnsHasBeenSet; }
    inline void SetReplicaOutpostArns(const Aws::Vector<Aws::String>& value) { m_replicaOutpostArnsHasBeenSet = true; m_replicaOutpostArns = value; }
    inline void SetReplicaOutpostArns(Aws::Vector<Aws::String>&& value) { m_replicaOutpostArnsHasBeenSet = true; m_replicaOutpostArns = std::move(value); }
    inline NodeGroupConfiguration& WithReplicaOutpostArns(const Aws::Vector<Aws::String>& value) { SetReplicaOutpostArns(value); return *this;}
    inline NodeGroupConfiguration& WithReplicaOutpostArns(Aws::Vector<Aws::String>&& value) { SetReplicaOutpostArns(std::move(value)); return *this;}
    inline NodeGroupConfiguration& AddReplicaOutpostArns(const Aws::String& value) { m_replicaOutpostArnsHasBeenSet = true; m_replicaOutpostArns.push_back(value); return *this; }
    inline NodeGroupConfiguration& AddReplicaOutpostArns(Aws::String&& value) { m_replicaOutpostArnsHasBeenSet = true; m_replicaOutpostArns.push_back(std::move(value)); return *this; }
    inline NodeGroupConfiguration& AddReplicaOutpostArns(const char* value) { m_replicaOutpostArnsHasBeenSet = true; m_replicaOutpostArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;

    int m_replicaCount;
    bool m_replicaCountHasBeenSet = false;

    Aws::String m_primaryAvailabilityZone;
    bool m_primaryAvailabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicaAvailabilityZones;
    bool m_replicaAvailabilityZonesHasBeenSet = false;

    Aws::String m_primaryOutpostArn;
    bool m_primaryOutpostArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicaOutpostArns;
    bool m_replicaOutpostArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
