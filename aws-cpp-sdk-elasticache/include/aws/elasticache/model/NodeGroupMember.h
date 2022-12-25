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
    AWS_ELASTICACHE_API NodeGroupMember();
    AWS_ELASTICACHE_API NodeGroupMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeGroupMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline NodeGroupMember& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline NodeGroupMember& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the cluster to which the node belongs.</p>
     */
    inline NodeGroupMember& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline const Aws::String& GetCacheNodeId() const{ return m_cacheNodeId; }

    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }

    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline void SetCacheNodeId(const Aws::String& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }

    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline void SetCacheNodeId(Aws::String&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::move(value); }

    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline void SetCacheNodeId(const char* value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId.assign(value); }

    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline NodeGroupMember& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}

    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline NodeGroupMember& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the node within its cluster. A node ID is a numeric identifier
     * (0001, 0002, etc.).</p>
     */
    inline NodeGroupMember& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}


    /**
     * <p>The information required for client programs to connect to a node for read
     * operations. The read endpoint is only applicable on Redis (cluster mode
     * disabled) clusters.</p>
     */
    inline const Endpoint& GetReadEndpoint() const{ return m_readEndpoint; }

    /**
     * <p>The information required for client programs to connect to a node for read
     * operations. The read endpoint is only applicable on Redis (cluster mode
     * disabled) clusters.</p>
     */
    inline bool ReadEndpointHasBeenSet() const { return m_readEndpointHasBeenSet; }

    /**
     * <p>The information required for client programs to connect to a node for read
     * operations. The read endpoint is only applicable on Redis (cluster mode
     * disabled) clusters.</p>
     */
    inline void SetReadEndpoint(const Endpoint& value) { m_readEndpointHasBeenSet = true; m_readEndpoint = value; }

    /**
     * <p>The information required for client programs to connect to a node for read
     * operations. The read endpoint is only applicable on Redis (cluster mode
     * disabled) clusters.</p>
     */
    inline void SetReadEndpoint(Endpoint&& value) { m_readEndpointHasBeenSet = true; m_readEndpoint = std::move(value); }

    /**
     * <p>The information required for client programs to connect to a node for read
     * operations. The read endpoint is only applicable on Redis (cluster mode
     * disabled) clusters.</p>
     */
    inline NodeGroupMember& WithReadEndpoint(const Endpoint& value) { SetReadEndpoint(value); return *this;}

    /**
     * <p>The information required for client programs to connect to a node for read
     * operations. The read endpoint is only applicable on Redis (cluster mode
     * disabled) clusters.</p>
     */
    inline NodeGroupMember& WithReadEndpoint(Endpoint&& value) { SetReadEndpoint(std::move(value)); return *this;}


    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const{ return m_preferredAvailabilityZone; }

    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline bool PreferredAvailabilityZoneHasBeenSet() const { return m_preferredAvailabilityZoneHasBeenSet; }

    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline void SetPreferredAvailabilityZone(const Aws::String& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = value; }

    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline void SetPreferredAvailabilityZone(Aws::String&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = std::move(value); }

    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline void SetPreferredAvailabilityZone(const char* value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone.assign(value); }

    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline NodeGroupMember& WithPreferredAvailabilityZone(const Aws::String& value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline NodeGroupMember& WithPreferredAvailabilityZone(Aws::String&& value) { SetPreferredAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone in which the node is located.</p>
     */
    inline NodeGroupMember& WithPreferredAvailabilityZone(const char* value) { SetPreferredAvailabilityZone(value); return *this;}


    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline const Aws::String& GetPreferredOutpostArn() const{ return m_preferredOutpostArn; }

    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline bool PreferredOutpostArnHasBeenSet() const { return m_preferredOutpostArnHasBeenSet; }

    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline void SetPreferredOutpostArn(const Aws::String& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = value; }

    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline void SetPreferredOutpostArn(Aws::String&& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = std::move(value); }

    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline void SetPreferredOutpostArn(const char* value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn.assign(value); }

    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline NodeGroupMember& WithPreferredOutpostArn(const Aws::String& value) { SetPreferredOutpostArn(value); return *this;}

    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline NodeGroupMember& WithPreferredOutpostArn(Aws::String&& value) { SetPreferredOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The outpost ARN of the node group member.</p>
     */
    inline NodeGroupMember& WithPreferredOutpostArn(const char* value) { SetPreferredOutpostArn(value); return *this;}


    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline const Aws::String& GetCurrentRole() const{ return m_currentRole; }

    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline bool CurrentRoleHasBeenSet() const { return m_currentRoleHasBeenSet; }

    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline void SetCurrentRole(const Aws::String& value) { m_currentRoleHasBeenSet = true; m_currentRole = value; }

    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline void SetCurrentRole(Aws::String&& value) { m_currentRoleHasBeenSet = true; m_currentRole = std::move(value); }

    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline void SetCurrentRole(const char* value) { m_currentRoleHasBeenSet = true; m_currentRole.assign(value); }

    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline NodeGroupMember& WithCurrentRole(const Aws::String& value) { SetCurrentRole(value); return *this;}

    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline NodeGroupMember& WithCurrentRole(Aws::String&& value) { SetCurrentRole(std::move(value)); return *this;}

    /**
     * <p>The role that is currently assigned to the node - <code>primary</code> or
     * <code>replica</code>. This member is only applicable for Redis (cluster mode
     * disabled) replication groups.</p>
     */
    inline NodeGroupMember& WithCurrentRole(const char* value) { SetCurrentRole(value); return *this;}

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
