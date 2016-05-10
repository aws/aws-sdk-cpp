/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NodeGroupMember.h>

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
   * <p>Represents a collection of cache nodes in a replication group.</p>
   */
  class AWS_ELASTICACHE_API NodeGroup
  {
  public:
    NodeGroup();
    NodeGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    NodeGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The identifier for the node group. A replication group contains only one node
     * group; therefore, the node group ID is 0001.</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }

    /**
     * <p>The identifier for the node group. A replication group contains only one node
     * group; therefore, the node group ID is 0001.</p>
     */
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>The identifier for the node group. A replication group contains only one node
     * group; therefore, the node group ID is 0001.</p>
     */
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>The identifier for the node group. A replication group contains only one node
     * group; therefore, the node group ID is 0001.</p>
     */
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }

    /**
     * <p>The identifier for the node group. A replication group contains only one node
     * group; therefore, the node group ID is 0001.</p>
     */
    inline NodeGroup& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>The identifier for the node group. A replication group contains only one node
     * group; therefore, the node group ID is 0001.</p>
     */
    inline NodeGroup& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>The identifier for the node group. A replication group contains only one node
     * group; therefore, the node group ID is 0001.</p>
     */
    inline NodeGroup& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>The current state of this replication group - <i>creating</i>,
     * <i>available</i>, etc.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of this replication group - <i>creating</i>,
     * <i>available</i>, etc.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of this replication group - <i>creating</i>,
     * <i>available</i>, etc.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of this replication group - <i>creating</i>,
     * <i>available</i>, etc.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current state of this replication group - <i>creating</i>,
     * <i>available</i>, etc.</p>
     */
    inline NodeGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of this replication group - <i>creating</i>,
     * <i>available</i>, etc.</p>
     */
    inline NodeGroup& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of this replication group - <i>creating</i>,
     * <i>available</i>, etc.</p>
     */
    inline NodeGroup& WithStatus(const char* value) { SetStatus(value); return *this;}

    
    inline const Endpoint& GetPrimaryEndpoint() const{ return m_primaryEndpoint; }

    
    inline void SetPrimaryEndpoint(const Endpoint& value) { m_primaryEndpointHasBeenSet = true; m_primaryEndpoint = value; }

    
    inline void SetPrimaryEndpoint(Endpoint&& value) { m_primaryEndpointHasBeenSet = true; m_primaryEndpoint = value; }

    
    inline NodeGroup& WithPrimaryEndpoint(const Endpoint& value) { SetPrimaryEndpoint(value); return *this;}

    
    inline NodeGroup& WithPrimaryEndpoint(Endpoint&& value) { SetPrimaryEndpoint(value); return *this;}

    /**
     * <p>A list containing information about individual nodes within the node
     * group.</p>
     */
    inline const Aws::Vector<NodeGroupMember>& GetNodeGroupMembers() const{ return m_nodeGroupMembers; }

    /**
     * <p>A list containing information about individual nodes within the node
     * group.</p>
     */
    inline void SetNodeGroupMembers(const Aws::Vector<NodeGroupMember>& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers = value; }

    /**
     * <p>A list containing information about individual nodes within the node
     * group.</p>
     */
    inline void SetNodeGroupMembers(Aws::Vector<NodeGroupMember>&& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers = value; }

    /**
     * <p>A list containing information about individual nodes within the node
     * group.</p>
     */
    inline NodeGroup& WithNodeGroupMembers(const Aws::Vector<NodeGroupMember>& value) { SetNodeGroupMembers(value); return *this;}

    /**
     * <p>A list containing information about individual nodes within the node
     * group.</p>
     */
    inline NodeGroup& WithNodeGroupMembers(Aws::Vector<NodeGroupMember>&& value) { SetNodeGroupMembers(value); return *this;}

    /**
     * <p>A list containing information about individual nodes within the node
     * group.</p>
     */
    inline NodeGroup& AddNodeGroupMembers(const NodeGroupMember& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers.push_back(value); return *this; }

    /**
     * <p>A list containing information about individual nodes within the node
     * group.</p>
     */
    inline NodeGroup& AddNodeGroupMembers(NodeGroupMember&& value) { m_nodeGroupMembersHasBeenSet = true; m_nodeGroupMembers.push_back(value); return *this; }

  private:
    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Endpoint m_primaryEndpoint;
    bool m_primaryEndpointHasBeenSet;
    Aws::Vector<NodeGroupMember> m_nodeGroupMembers;
    bool m_nodeGroupMembersHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
