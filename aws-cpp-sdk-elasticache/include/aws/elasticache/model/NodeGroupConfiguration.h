/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_ELASTICACHE_API NodeGroupConfiguration
  {
  public:
    NodeGroupConfiguration();
    NodeGroupConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    NodeGroupConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline NodeGroupConfiguration& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline NodeGroupConfiguration& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline NodeGroupConfiguration& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}


    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline const Aws::String& GetSlots() const{ return m_slots; }

    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline void SetSlots(const Aws::String& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline void SetSlots(Aws::String&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline void SetSlots(const char* value) { m_slotsHasBeenSet = true; m_slots.assign(value); }

    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline NodeGroupConfiguration& WithSlots(const Aws::String& value) { SetSlots(value); return *this;}

    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline NodeGroupConfiguration& WithSlots(Aws::String&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format
     * <code>startkey-endkey</code>.</p> <p>Example: <code>"0-3999"</code> </p>
     */
    inline NodeGroupConfiguration& WithSlots(const char* value) { SetSlots(value); return *this;}


    /**
     * <p>The number of read replica nodes in this node group (shard).</p>
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }

    /**
     * <p>The number of read replica nodes in this node group (shard).</p>
     */
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }

    /**
     * <p>The number of read replica nodes in this node group (shard).</p>
     */
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }

    /**
     * <p>The number of read replica nodes in this node group (shard).</p>
     */
    inline NodeGroupConfiguration& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}


    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline const Aws::String& GetPrimaryAvailabilityZone() const{ return m_primaryAvailabilityZone; }

    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline bool PrimaryAvailabilityZoneHasBeenSet() const { return m_primaryAvailabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline void SetPrimaryAvailabilityZone(const Aws::String& value) { m_primaryAvailabilityZoneHasBeenSet = true; m_primaryAvailabilityZone = value; }

    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline void SetPrimaryAvailabilityZone(Aws::String&& value) { m_primaryAvailabilityZoneHasBeenSet = true; m_primaryAvailabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline void SetPrimaryAvailabilityZone(const char* value) { m_primaryAvailabilityZoneHasBeenSet = true; m_primaryAvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline NodeGroupConfiguration& WithPrimaryAvailabilityZone(const Aws::String& value) { SetPrimaryAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline NodeGroupConfiguration& WithPrimaryAvailabilityZone(Aws::String&& value) { SetPrimaryAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where the primary node of this node group (shard) is
     * launched.</p>
     */
    inline NodeGroupConfiguration& WithPrimaryAvailabilityZone(const char* value) { SetPrimaryAvailabilityZone(value); return *this;}


    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicaAvailabilityZones() const{ return m_replicaAvailabilityZones; }

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline bool ReplicaAvailabilityZonesHasBeenSet() const { return m_replicaAvailabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline void SetReplicaAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones = value; }

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline void SetReplicaAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline NodeGroupConfiguration& WithReplicaAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetReplicaAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline NodeGroupConfiguration& WithReplicaAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetReplicaAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline NodeGroupConfiguration& AddReplicaAvailabilityZones(const Aws::String& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline NodeGroupConfiguration& AddReplicaAvailabilityZones(Aws::String&& value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Availability Zones to be used for the read replicas. The number of
     * Availability Zones in this list must match the value of
     * <code>ReplicaCount</code> or <code>ReplicasPerNodeGroup</code> if not
     * specified.</p>
     */
    inline NodeGroupConfiguration& AddReplicaAvailabilityZones(const char* value) { m_replicaAvailabilityZonesHasBeenSet = true; m_replicaAvailabilityZones.push_back(value); return *this; }

  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet;

    Aws::String m_slots;
    bool m_slotsHasBeenSet;

    int m_replicaCount;
    bool m_replicaCountHasBeenSet;

    Aws::String m_primaryAvailabilityZone;
    bool m_primaryAvailabilityZoneHasBeenSet;

    Aws::Vector<Aws::String> m_replicaAvailabilityZones;
    bool m_replicaAvailabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
