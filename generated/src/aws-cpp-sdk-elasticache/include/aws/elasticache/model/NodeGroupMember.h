/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/Endpoint.h>
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
   * <p>Represents a single node within a node group (shard).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/NodeGroupMember">AWS
   * API Reference</a></p>
   */
  class NodeGroupMember
  {
  public:
    AWS_ELASTICACHE_API NodeGroupMember() = default;
    AWS_ELASTICACHE_API NodeGroupMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeGroupMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    NodeGroupMember& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline const Aws::String& GetCacheNodeId() const { return m_cacheNodeId; }
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }
    template<typename CacheNodeIdT = Aws::String>
    void SetCacheNodeId(CacheNodeIdT&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::forward<CacheNodeIdT>(value); }
    template<typename CacheNodeIdT = Aws::String>
    NodeGroupMember& WithCacheNodeId(CacheNodeIdT&& value) { SetCacheNodeId(std::forward<CacheNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information required for client programs to connect to a node for read
     * operations. The read endpoint is only applicable on Valkey or Redis OSS (cluster
     * mode disabled) clusters.</p>
     */
    inline const Endpoint& GetReadEndpoint() const { return m_readEndpoint; }
    inline bool ReadEndpointHasBeenSet() const { return m_readEndpointHasBeenSet; }
    template<typename ReadEndpointT = Endpoint>
    void SetReadEndpoint(ReadEndpointT&& value) { m_readEndpointHasBeenSet = true; m_readEndpoint = std::forward<ReadEndpointT>(value); }
    template<typename ReadEndpointT = Endpoint>
    NodeGroupMember& WithReadEndpoint(ReadEndpointT&& value) { SetReadEndpoint(std::forward<ReadEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const { return m_preferredAvailabilityZone; }
    inline bool PreferredAvailabilityZoneHasBeenSet() const { return m_preferredAvailabilityZoneHasBeenSet; }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    void SetPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = std::forward<PreferredAvailabilityZoneT>(value); }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    NodeGroupMember& WithPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { SetPreferredAvailabilityZone(std::forward<PreferredAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline const Aws::String& GetPreferredOutpostArn() const { return m_preferredOutpostArn; }
    inline bool PreferredOutpostArnHasBeenSet() const { return m_preferredOutpostArnHasBeenSet; }
    template<typename PreferredOutpostArnT = Aws::String>
    void SetPreferredOutpostArn(PreferredOutpostArnT&& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = std::forward<PreferredOutpostArnT>(value); }
    template<typename PreferredOutpostArnT = Aws::String>
    NodeGroupMember& WithPreferredOutpostArn(PreferredOutpostArnT&& value) { SetPreferredOutpostArn(std::forward<PreferredOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Valkey or Redis OSS
     * (cluster mode disabled) replication groups.</p>
     */
    inline const Aws::String& GetCurrentRole() const { return m_currentRole; }
    inline bool CurrentRoleHasBeenSet() const { return m_currentRoleHasBeenSet; }
    template<typename CurrentRoleT = Aws::String>
    void SetCurrentRole(CurrentRoleT&& value) { m_currentRoleHasBeenSet = true; m_currentRole = std::forward<CurrentRoleT>(value); }
    template<typename CurrentRoleT = Aws::String>
    NodeGroupMember& WithCurrentRole(CurrentRoleT&& value) { SetCurrentRole(std::forward<CurrentRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet = false;

    Endpoint m_readEndpoint;
    bool m_readEndpointHasBeenSet = false;

    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet = false;

    Aws::String m_preferredOutpostArn;
    bool m_preferredOutpostArnHasBeenSet = false;

    Aws::String m_currentRole;
    bool m_currentRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
