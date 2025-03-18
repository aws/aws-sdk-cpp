/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NodeGroupMemberUpdateStatus.h>
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
   * <p>The status of the service update on the node group </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/NodeGroupUpdateStatus">AWS
   * API Reference</a></p>
   */
  class NodeGroupUpdateStatus
  {
  public:
    AWS_ELASTICACHE_API NodeGroupUpdateStatus() = default;
    AWS_ELASTICACHE_API NodeGroupUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeGroupUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the node group</p>
     */
    inline const Aws::String& GetNodeGroupId() const { return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    template<typename NodeGroupIdT = Aws::String>
    void SetNodeGroupId(NodeGroupIdT&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::forward<NodeGroupIdT>(value); }
    template<typename NodeGroupIdT = Aws::String>
    NodeGroupUpdateStatus& WithNodeGroupId(NodeGroupIdT&& value) { SetNodeGroupId(std::forward<NodeGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline const Aws::Vector<NodeGroupMemberUpdateStatus>& GetNodeGroupMemberUpdateStatus() const { return m_nodeGroupMemberUpdateStatus; }
    inline bool NodeGroupMemberUpdateStatusHasBeenSet() const { return m_nodeGroupMemberUpdateStatusHasBeenSet; }
    template<typename NodeGroupMemberUpdateStatusT = Aws::Vector<NodeGroupMemberUpdateStatus>>
    void SetNodeGroupMemberUpdateStatus(NodeGroupMemberUpdateStatusT&& value) { m_nodeGroupMemberUpdateStatusHasBeenSet = true; m_nodeGroupMemberUpdateStatus = std::forward<NodeGroupMemberUpdateStatusT>(value); }
    template<typename NodeGroupMemberUpdateStatusT = Aws::Vector<NodeGroupMemberUpdateStatus>>
    NodeGroupUpdateStatus& WithNodeGroupMemberUpdateStatus(NodeGroupMemberUpdateStatusT&& value) { SetNodeGroupMemberUpdateStatus(std::forward<NodeGroupMemberUpdateStatusT>(value)); return *this;}
    template<typename NodeGroupMemberUpdateStatusT = NodeGroupMemberUpdateStatus>
    NodeGroupUpdateStatus& AddNodeGroupMemberUpdateStatus(NodeGroupMemberUpdateStatusT&& value) { m_nodeGroupMemberUpdateStatusHasBeenSet = true; m_nodeGroupMemberUpdateStatus.emplace_back(std::forward<NodeGroupMemberUpdateStatusT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    Aws::Vector<NodeGroupMemberUpdateStatus> m_nodeGroupMemberUpdateStatus;
    bool m_nodeGroupMemberUpdateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
