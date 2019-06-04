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
  class AWS_ELASTICACHE_API NodeGroupUpdateStatus
  {
  public:
    NodeGroupUpdateStatus();
    NodeGroupUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    NodeGroupUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the node group</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }

    /**
     * <p>The ID of the node group</p>
     */
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }

    /**
     * <p>The ID of the node group</p>
     */
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>The ID of the node group</p>
     */
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }

    /**
     * <p>The ID of the node group</p>
     */
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }

    /**
     * <p>The ID of the node group</p>
     */
    inline NodeGroupUpdateStatus& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>The ID of the node group</p>
     */
    inline NodeGroupUpdateStatus& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the node group</p>
     */
    inline NodeGroupUpdateStatus& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}


    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline const Aws::Vector<NodeGroupMemberUpdateStatus>& GetNodeGroupMemberUpdateStatus() const{ return m_nodeGroupMemberUpdateStatus; }

    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline bool NodeGroupMemberUpdateStatusHasBeenSet() const { return m_nodeGroupMemberUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline void SetNodeGroupMemberUpdateStatus(const Aws::Vector<NodeGroupMemberUpdateStatus>& value) { m_nodeGroupMemberUpdateStatusHasBeenSet = true; m_nodeGroupMemberUpdateStatus = value; }

    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline void SetNodeGroupMemberUpdateStatus(Aws::Vector<NodeGroupMemberUpdateStatus>&& value) { m_nodeGroupMemberUpdateStatusHasBeenSet = true; m_nodeGroupMemberUpdateStatus = std::move(value); }

    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline NodeGroupUpdateStatus& WithNodeGroupMemberUpdateStatus(const Aws::Vector<NodeGroupMemberUpdateStatus>& value) { SetNodeGroupMemberUpdateStatus(value); return *this;}

    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline NodeGroupUpdateStatus& WithNodeGroupMemberUpdateStatus(Aws::Vector<NodeGroupMemberUpdateStatus>&& value) { SetNodeGroupMemberUpdateStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline NodeGroupUpdateStatus& AddNodeGroupMemberUpdateStatus(const NodeGroupMemberUpdateStatus& value) { m_nodeGroupMemberUpdateStatusHasBeenSet = true; m_nodeGroupMemberUpdateStatus.push_back(value); return *this; }

    /**
     * <p>The status of the service update on the node group member</p>
     */
    inline NodeGroupUpdateStatus& AddNodeGroupMemberUpdateStatus(NodeGroupMemberUpdateStatus&& value) { m_nodeGroupMemberUpdateStatusHasBeenSet = true; m_nodeGroupMemberUpdateStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet;

    Aws::Vector<NodeGroupMemberUpdateStatus> m_nodeGroupMemberUpdateStatus;
    bool m_nodeGroupMemberUpdateStatusHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
