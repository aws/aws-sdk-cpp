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
   * <p>Node group (shard) configuration options when adding or removing replicas.
   * Each node group (shard) configuration has the following members: NodeGroupId,
   * NewReplicaCount, and PreferredAvailabilityZones. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ConfigureShard">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ConfigureShard
  {
  public:
    ConfigureShard();
    ConfigureShard(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConfigureShard& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }

    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }

    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }

    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }

    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline ConfigureShard& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline ConfigureShard& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}

    /**
     * <p>The 4-digit id for the node group you are configuring. For Redis (cluster
     * mode disabled) replication groups, the node group id is always 0001. To find a
     * Redis (cluster mode enabled)'s node group's (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline ConfigureShard& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}


    /**
     * <p>The number of replicas you want in this node group at the end of this
     * operation. The maximum value for <code>NewReplicaCount</code> is 5. The minimum
     * value depends upon the type of Redis replication group you are working with.</p>
     * <p>The minimum number of replicas in a shard or replication group is:</p> <ul>
     * <li> <p>Redis (cluster mode disabled)</p> <ul> <li> <p>If Multi-AZ with
     * Automatic Failover is enabled: 1</p> </li> <li> <p>If Multi-AZ with Automatic
     * Failover is not enable: 0</p> </li> </ul> </li> <li> <p>Redis (cluster mode
     * enabled): 0 (though you will not be able to failover to a replica if your
     * primary node fails)</p> </li> </ul>
     */
    inline int GetNewReplicaCount() const{ return m_newReplicaCount; }

    /**
     * <p>The number of replicas you want in this node group at the end of this
     * operation. The maximum value for <code>NewReplicaCount</code> is 5. The minimum
     * value depends upon the type of Redis replication group you are working with.</p>
     * <p>The minimum number of replicas in a shard or replication group is:</p> <ul>
     * <li> <p>Redis (cluster mode disabled)</p> <ul> <li> <p>If Multi-AZ with
     * Automatic Failover is enabled: 1</p> </li> <li> <p>If Multi-AZ with Automatic
     * Failover is not enable: 0</p> </li> </ul> </li> <li> <p>Redis (cluster mode
     * enabled): 0 (though you will not be able to failover to a replica if your
     * primary node fails)</p> </li> </ul>
     */
    inline bool NewReplicaCountHasBeenSet() const { return m_newReplicaCountHasBeenSet; }

    /**
     * <p>The number of replicas you want in this node group at the end of this
     * operation. The maximum value for <code>NewReplicaCount</code> is 5. The minimum
     * value depends upon the type of Redis replication group you are working with.</p>
     * <p>The minimum number of replicas in a shard or replication group is:</p> <ul>
     * <li> <p>Redis (cluster mode disabled)</p> <ul> <li> <p>If Multi-AZ with
     * Automatic Failover is enabled: 1</p> </li> <li> <p>If Multi-AZ with Automatic
     * Failover is not enable: 0</p> </li> </ul> </li> <li> <p>Redis (cluster mode
     * enabled): 0 (though you will not be able to failover to a replica if your
     * primary node fails)</p> </li> </ul>
     */
    inline void SetNewReplicaCount(int value) { m_newReplicaCountHasBeenSet = true; m_newReplicaCount = value; }

    /**
     * <p>The number of replicas you want in this node group at the end of this
     * operation. The maximum value for <code>NewReplicaCount</code> is 5. The minimum
     * value depends upon the type of Redis replication group you are working with.</p>
     * <p>The minimum number of replicas in a shard or replication group is:</p> <ul>
     * <li> <p>Redis (cluster mode disabled)</p> <ul> <li> <p>If Multi-AZ with
     * Automatic Failover is enabled: 1</p> </li> <li> <p>If Multi-AZ with Automatic
     * Failover is not enable: 0</p> </li> </ul> </li> <li> <p>Redis (cluster mode
     * enabled): 0 (though you will not be able to failover to a replica if your
     * primary node fails)</p> </li> </ul>
     */
    inline ConfigureShard& WithNewReplicaCount(int value) { SetNewReplicaCount(value); return *this;}


    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredAvailabilityZones() const{ return m_preferredAvailabilityZones; }

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline bool PreferredAvailabilityZonesHasBeenSet() const { return m_preferredAvailabilityZonesHasBeenSet; }

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline void SetPreferredAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = value; }

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline void SetPreferredAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = std::move(value); }

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline ConfigureShard& WithPreferredAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetPreferredAvailabilityZones(value); return *this;}

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline ConfigureShard& WithPreferredAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetPreferredAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline ConfigureShard& AddPreferredAvailabilityZones(const Aws::String& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline ConfigureShard& AddPreferredAvailabilityZones(Aws::String&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache for Redis
     * selects the availability zone for each of the replicas.</p>
     */
    inline ConfigureShard& AddPreferredAvailabilityZones(const char* value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(value); return *this; }

  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet;

    int m_newReplicaCount;
    bool m_newReplicaCountHasBeenSet;

    Aws::Vector<Aws::String> m_preferredAvailabilityZones;
    bool m_preferredAvailabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
