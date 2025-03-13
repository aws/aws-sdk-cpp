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
    AWS_ELASTICACHE_API NodeGroup() = default;
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
    inline const Aws::String& GetNodeGroupId() const { return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    template<typename NodeGroupIdT = Aws::String>
    void SetNodeGroupId(NodeGroupIdT&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::forward<NodeGroupIdT>(value); }
    template<typename NodeGroupIdT = Aws::String>
    NodeGroup& WithNodeGroupId(NodeGroupIdT&& value) { SetNodeGroupId(std::forward<NodeGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    NodeGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the primary node in this node group (shard).</p>
     */
    inline const Endpoint& GetPrimaryEndpoint() const { return m_primaryEndpoint; }
    inline bool PrimaryEndpointHasBeenSet() const { return m_primaryEndpointHasBeenSet; }
    template<typename PrimaryEndpointT = Endpoint>
    void SetPrimaryEndpoint(PrimaryEndpointT&& value) { m_primaryEndpointHasBeenSet = true; m_primaryEndpoint = std::forward<PrimaryEndpointT>(value); }
    template<typename PrimaryEndpointT = Endpoint>
    NodeGroup& WithPrimaryEndpoint(PrimaryEndpointT&& value) { SetPrimaryEndpoint(std::forward<PrimaryEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the replica nodes in this node group (shard). This value is
     * read-only.</p>
     */
    inline const Endpoint& GetReaderEndpoint() const { return m_readerEndpoint; }
    inline bool ReaderEndpointHasBeenSet() const { return m_readerEndpointHasBeenSet; }
    template<typename ReaderEndpointT = Endpoint>
    void SetReaderEndpoint(ReaderEndpointT&& value) { m_readerEndpointHasBeenSet = true; m_readerEndpoint = std::forward<ReaderEndpointT>(value); }
    template<typename ReaderEndpointT = Endpoint>
    NodeGroup& WithReaderEndpoint(ReaderEndpointT&& value) { SetReaderEndpoint(std::forward<ReaderEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keyspace for this node group (shard).</p>
     */
    inline const Aws::String& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::String>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::String>
    NodeGroup& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing information about individual nodes within the node group
     * (shard).</p>
     */
    inline const Aws::Vector<NodeGroupMember>& GetNodeGroupMembers() const { return m_nodeGroupMembers; }
    inline bool NodeGroupMembersHasBeenSet() const { return m_nodeGroupMembersHasBeenSet; }
    template<typename NodeGroupMembersT = Aws::Vector<NodeGroupMember>>
    void SetNodeGroupMembers(NodeGroupMembersT&& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers = std::forward<NodeGroupMembersT>(value); }
    template<typename NodeGroupMembersT = Aws::Vector<NodeGroupMember>>
    NodeGroup& WithNodeGroupMembers(NodeGroupMembersT&& value) { SetNodeGroupMembers(std::forward<NodeGroupMembersT>(value)); return *this;}
    template<typename NodeGroupMembersT = NodeGroupMember>
    NodeGroup& AddNodeGroupMembers(NodeGroupMembersT&& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers.emplace_back(std::forward<NodeGroupMembersT>(value)); return *this; }
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
