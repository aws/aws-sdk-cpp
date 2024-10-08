/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NodeGroupMember.h>
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
   * <p>Represents a collection of cache nodes in a replication group. One node in
   * the node group is the read/write primary node. All the other nodes are read-only
   * Replica nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/NodeGroup">AWS
   * API Reference</a></p>
   */
  class NodeGroup
  {
  public:
    AWS_ELASTICACHE_API NodeGroup();
    AWS_ELASTICACHE_API NodeGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the node group (shard). A Valkey or Redis OSS (cluster
     * mode disabled) replication group contains only 1 node group; therefore, the node
     * group ID is 0001. A Valkey or Redis OSS (cluster mode enabled) replication group
     * contains 1 to 90 node groups numbered 0001 to 0090. Optionally, the user can
     * provide the id for a node group. </p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }
    inline NodeGroup& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}
    inline NodeGroup& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}
    inline NodeGroup& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline NodeGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline NodeGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline NodeGroup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the primary node in this node group (shard).</p>
     */
    inline const Endpoint& GetPrimaryEndpoint() const{ return m_primaryEndpoint; }
    inline bool PrimaryEndpointHasBeenSet() const { return m_primaryEndpointHasBeenSet; }
    inline void SetPrimaryEndpoint(const Endpoint& value) { m_primaryEndpointHasBeenSet = true; m_primaryEndpoint = value; }
    inline void SetPrimaryEndpoint(Endpoint&& value) { m_primaryEndpointHasBeenSet = true; m_primaryEndpoint = std::move(value); }
    inline NodeGroup& WithPrimaryEndpoint(const Endpoint& value) { SetPrimaryEndpoint(value); return *this;}
    inline NodeGroup& WithPrimaryEndpoint(Endpoint&& value) { SetPrimaryEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the replica nodes in this node group (shard). This value is
     * read-only.</p>
     */
    inline const Endpoint& GetReaderEndpoint() const{ return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    inline void SetReaderEndpoint(const Endpoint& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = value; }
    inline void SetReaderEndpoint(Endpoint&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::move(value); }
    inline NodeGroup& WithReaderEndpoint(const Endpoint& value) { SetReaderEndpoint(value); return *this;}
    inline NodeGroup& WithReaderEndpoint(Endpoint&& value) { SetReaderEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keyspace for this node group (shard).</p>
     */
    inline const Aws::String& GetSlots() const{ return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    inline void SetSlots(const Aws::String& value) { m_slotsHasBeenSet = true; m_slots = value; }
    inline void SetSlots(Aws::String&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }
    inline void SetSlots(const char* value) { m_slotsHasBeenSet = true; m_slots.assign(value); }
    inline NodeGroup& WithSlots(const Aws::String& value) { SetSlots(value); return *this;}
    inline NodeGroup& WithSlots(Aws::String&& value) { SetSlots(std::move(value)); return *this;}
    inline NodeGroup& WithSlots(const char* value) { SetSlots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing information about individual nodes within the node group
     * (shard).</p>
     */
    inline const Aws::Vector<NodeGroupMember>& GetNodeGroupMembers() const{ return m_nodeGroupMembers; }
    inline bool NodeGroupMembersHasBeenSet() const { return m_nodeGroupMembersHasBeenSet; }
    inline void SetNodeGroupMembers(const Aws::Vector<NodeGroupMember>& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers = value; }
    inline void SetNodeGroupMembers(Aws::Vector<NodeGroupMember>&& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers = std::move(value); }
    inline NodeGroup& WithNodeGroupMembers(const Aws::Vector<NodeGroupMember>& value) { SetNodeGroupMembers(value); return *this;}
    inline NodeGroup& WithNodeGroupMembers(Aws::Vector<NodeGroupMember>&& value) { SetNodeGroupMembers(std::move(value)); return *this;}
    inline NodeGroup& AddNodeGroupMembers(const NodeGroupMember& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers.push_back(value); return *this; }
    inline NodeGroup& AddNodeGroupMembers(NodeGroupMember&& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Endpoint m_primaryEndpoint;
    bool m_primaryEndpointHasBeenSet = false;

    Endpoint m_readerEndpoint;
    bool m_readerEndpointHasBeenSet = false;

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::Vector<NodeGroupMember> m_nodeGroupMembers;
    bool m_nodeGroupMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
