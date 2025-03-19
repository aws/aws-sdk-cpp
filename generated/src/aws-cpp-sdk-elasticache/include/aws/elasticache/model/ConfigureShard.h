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
   * <p>Node group (shard) configuration options when adding or removing replicas.
   * Each node group (shard) configuration has the following members: NodeGroupId,
   * NewReplicaCount, and PreferredAvailabilityZones. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ConfigureShard">AWS
   * API Reference</a></p>
   */
  class ConfigureShard
  {
  public:
    AWS_ELASTICACHE_API ConfigureShard() = default;
    AWS_ELASTICACHE_API ConfigureShard(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ConfigureShard& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The 4-digit id for the node group you are configuring. For Valkey or Redis
     * OSS (cluster mode disabled) replication groups, the node group id is always
     * 0001. To find a Valkey or Redis OSS (cluster mode enabled)'s node group's
     * (shard's) id, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/shard-find-id.html">Finding
     * a Shard's Id</a>.</p>
     */
    inline const Aws::String& GetNodeGroupId() const { return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    template<typename NodeGroupIdT = Aws::String>
    void SetNodeGroupId(NodeGroupIdT&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::forward<NodeGroupIdT>(value); }
    template<typename NodeGroupIdT = Aws::String>
    ConfigureShard& WithNodeGroupId(NodeGroupIdT&& value) { SetNodeGroupId(std::forward<NodeGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replicas you want in this node group at the end of this
     * operation. The maximum value for <code>NewReplicaCount</code> is 5. The minimum
     * value depends upon the type of Valkey or Redis OSS replication group you are
     * working with.</p> <p>The minimum number of replicas in a shard or replication
     * group is:</p> <ul> <li> <p>Valkey or Redis OSS (cluster mode disabled)</p> <ul>
     * <li> <p>If Multi-AZ: 1</p> </li> <li> <p>If Multi-AZ: 0</p> </li> </ul> </li>
     * <li> <p>Valkey or Redis OSS (cluster mode enabled): 0 (though you will not be
     * able to failover to a replica if your primary node fails)</p> </li> </ul>
     */
    inline int GetNewReplicaCount() const { return m_newReplicaCount; }
    inline bool NewReplicaCountHasBeenSet() const { return m_newReplicaCountHasBeenSet; }
    inline void SetNewReplicaCount(int value) { m_newReplicaCountHasBeenSet = true; m_newReplicaCount = value; }
    inline ConfigureShard& WithNewReplicaCount(int value) { SetNewReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>PreferredAvailabilityZone</code> strings that specify which
     * availability zones the replication group's nodes are to be in. The nummber of
     * <code>PreferredAvailabilityZone</code> values must equal the value of
     * <code>NewReplicaCount</code> plus 1 to account for the primary node. If this
     * member of <code>ReplicaConfiguration</code> is omitted, ElastiCache selects the
     * availability zone for each of the replicas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredAvailabilityZones() const { return m_preferredAvailabilityZones; }
    inline bool PreferredAvailabilityZonesHasBeenSet() const { return m_preferredAvailabilityZonesHasBeenSet; }
    template<typename PreferredAvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = std::forward<PreferredAvailabilityZonesT>(value); }
    template<typename PreferredAvailabilityZonesT = Aws::Vector<Aws::String>>
    ConfigureShard& WithPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { SetPreferredAvailabilityZones(std::forward<PreferredAvailabilityZonesT>(value)); return *this;}
    template<typename PreferredAvailabilityZonesT = Aws::String>
    ConfigureShard& AddPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.emplace_back(std::forward<PreferredAvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outpost ARNs in which the cache cluster is created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredOutpostArns() const { return m_preferredOutpostArns; }
    inline bool PreferredOutpostArnsHasBeenSet() const { return m_preferredOutpostArnsHasBeenSet; }
    template<typename PreferredOutpostArnsT = Aws::Vector<Aws::String>>
    void SetPreferredOutpostArns(PreferredOutpostArnsT&& value) { m_preferredOutpostArnsHasBeenSet = true; m_preferredOutpostArns = std::forward<PreferredOutpostArnsT>(value); }
    template<typename PreferredOutpostArnsT = Aws::Vector<Aws::String>>
    ConfigureShard& WithPreferredOutpostArns(PreferredOutpostArnsT&& value) { SetPreferredOutpostArns(std::forward<PreferredOutpostArnsT>(value)); return *this;}
    template<typename PreferredOutpostArnsT = Aws::String>
    ConfigureShard& AddPreferredOutpostArns(PreferredOutpostArnsT&& value) { m_preferredOutpostArnsHasBeenSet = true; m_preferredOutpostArns.emplace_back(std::forward<PreferredOutpostArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    int m_newReplicaCount{0};
    bool m_newReplicaCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredAvailabilityZones;
    bool m_preferredAvailabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredOutpostArns;
    bool m_preferredOutpostArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
