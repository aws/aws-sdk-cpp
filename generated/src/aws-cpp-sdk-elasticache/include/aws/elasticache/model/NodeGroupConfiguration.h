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
    AWS_ELASTICACHE_API NodeGroupConfiguration() = default;
    AWS_ELASTICACHE_API NodeGroupConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeGroupConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Either the ElastiCache supplied 4-digit id or a user supplied id for the node
     * group these configuration values apply to.</p>
     */
    inline const Aws::String& GetNodeGroupId() const { return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    template<typename NodeGroupIdT = Aws::String>
    void SetNodeGroupId(NodeGroupIdT&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::forward<NodeGroupIdT>(value); }
    template<typename NodeGroupIdT = Aws::String>
    NodeGroupConfiguration& WithNodeGroupId(NodeGroupIdT&& value) { SetNodeGroupId(std::forward<NodeGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline const Aws::String& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::String>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::String>
    NodeGroupConfiguration& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of read replica nodes in this node group (shard).</p>
     */
    inline int GetReplicaCount() const { return m_replicaCount; }
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }
    inline NodeGroupConfiguration& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline const Aws::String& GetPrimaryAvailabilityZone() const { return m_primaryAvailabilityZone; }
    inline bool PrimaryAvailabilityZoneHasBeenSet() const { return m_primaryAvailabilityZoneHasBeenSet; }
    template<typename PrimaryAvailabilityZoneT = Aws::String>
    void SetPrimaryAvailabilityZone(PrimaryAvailabilityZoneT&& value) { m_primaryAvailabilityZoneHasBeenSet = true; m_primaryAvailabilityZone = std::forward<PrimaryAvailabilityZoneT>(value); }
    template<typename PrimaryAvailabilityZoneT = Aws::String>
    NodeGroupConfiguration& WithPrimaryAvailabilityZone(PrimaryAvailabilityZoneT&& value) { SetPrimaryAvailabilityZone(std::forward<PrimaryAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicaAvailabilityZones() const { return m_replicaAvailabilityZones; }
    inline bool ReplicaAvailabilityZonesHasBeenSet() const { return m_replicaAvailabilityZonesHasBeenSet; }
    template<typename ReplicaAvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetReplicaAvailabilityZones(ReplicaAvailabilityZonesT&& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones = std::forward<ReplicaAvailabilityZonesT>(value); }
    template<typename ReplicaAvailabilityZonesT = Aws::Vector<Aws::String>>
    NodeGroupConfiguration& WithReplicaAvailabilityZones(ReplicaAvailabilityZonesT&& value) { SetReplicaAvailabilityZones(std::forward<ReplicaAvailabilityZonesT>(value)); return *this;}
    template<typename ReplicaAvailabilityZonesT = Aws::String>
    NodeGroupConfiguration& AddReplicaAvailabilityZones(ReplicaAvailabilityZonesT&& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones.emplace_back(std::forward<ReplicaAvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outpost ARN of the primary node.</p>
     */
    inline const Aws::String& GetPrimaryOutpostArn() const { return m_primaryOutpostArn; }
    inline bool PrimaryOutpostArnHasBeenSet() const { return m_primaryOutpostArnHasBeenSet; }
    template<typename PrimaryOutpostArnT = Aws::String>
    void SetPrimaryOutpostArn(PrimaryOutpostArnT&& value) { m_primaryOutpostArnHasBeenSet = true; m_primaryOutpostArn = std::forward<PrimaryOutpostArnT>(value); }
    template<typename PrimaryOutpostArnT = Aws::String>
    NodeGroupConfiguration& WithPrimaryOutpostArn(PrimaryOutpostArnT&& value) { SetPrimaryOutpostArn(std::forward<PrimaryOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARN of the node replicas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicaOutpostArns() const { return m_replicaOutpostArns; }
    inline bool ReplicaOutpostArnsHasBeenSet() const { return m_replicaOutpostArnsHasBeenSet; }
    template<typename ReplicaOutpostArnsT = Aws::Vector<Aws::String>>
    void SetReplicaOutpostArns(ReplicaOutpostArnsT&& value) { m_replicaOutpostArnsHasBeenSet = true; m_replicaOutpostArns = std::forward<ReplicaOutpostArnsT>(value); }
    template<typename ReplicaOutpostArnsT = Aws::Vector<Aws::String>>
    NodeGroupConfiguration& WithReplicaOutpostArns(ReplicaOutpostArnsT&& value) { SetReplicaOutpostArns(std::forward<ReplicaOutpostArnsT>(value)); return *this;}
    template<typename ReplicaOutpostArnsT = Aws::String>
    NodeGroupConfiguration& AddReplicaOutpostArns(ReplicaOutpostArnsT&& value) { m_replicaOutpostArnsHasBeenSet = true; m_replicaOutpostArns.emplace_back(std::forward<ReplicaOutpostArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;

    int m_replicaCount{0};
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
