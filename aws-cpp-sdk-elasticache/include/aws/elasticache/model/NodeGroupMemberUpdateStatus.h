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
#include <aws/elasticache/model/NodeUpdateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/NodeUpdateInitiatedBy.h>
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
   * <p>The status of the service update on the node group member </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/NodeGroupMemberUpdateStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API NodeGroupMemberUpdateStatus
  {
  public:
    NodeGroupMemberUpdateStatus();
    NodeGroupMemberUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    NodeGroupMemberUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The cache cluster ID</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The cache cluster ID</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>The cache cluster ID</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cache cluster ID</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>The cache cluster ID</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The cache cluster ID</p>
     */
    inline NodeGroupMemberUpdateStatus& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cache cluster ID</p>
     */
    inline NodeGroupMemberUpdateStatus& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>The cache cluster ID</p>
     */
    inline NodeGroupMemberUpdateStatus& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline const Aws::String& GetCacheNodeId() const{ return m_cacheNodeId; }

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline void SetCacheNodeId(const Aws::String& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline void SetCacheNodeId(Aws::String&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::move(value); }

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline void SetCacheNodeId(const char* value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId.assign(value); }

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline NodeGroupMemberUpdateStatus& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline NodeGroupMemberUpdateStatus& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(std::move(value)); return *this;}

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline NodeGroupMemberUpdateStatus& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}


    /**
     * <p>The update status of the node</p>
     */
    inline const NodeUpdateStatus& GetNodeUpdateStatus() const{ return m_nodeUpdateStatus; }

    /**
     * <p>The update status of the node</p>
     */
    inline bool NodeUpdateStatusHasBeenSet() const { return m_nodeUpdateStatusHasBeenSet; }

    /**
     * <p>The update status of the node</p>
     */
    inline void SetNodeUpdateStatus(const NodeUpdateStatus& value) { m_nodeUpdateStatusHasBeenSet = true; m_nodeUpdateStatus = value; }

    /**
     * <p>The update status of the node</p>
     */
    inline void SetNodeUpdateStatus(NodeUpdateStatus&& value) { m_nodeUpdateStatusHasBeenSet = true; m_nodeUpdateStatus = std::move(value); }

    /**
     * <p>The update status of the node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatus(const NodeUpdateStatus& value) { SetNodeUpdateStatus(value); return *this;}

    /**
     * <p>The update status of the node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatus(NodeUpdateStatus&& value) { SetNodeUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The deletion date of the node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeDeletionDate() const{ return m_nodeDeletionDate; }

    /**
     * <p>The deletion date of the node</p>
     */
    inline bool NodeDeletionDateHasBeenSet() const { return m_nodeDeletionDateHasBeenSet; }

    /**
     * <p>The deletion date of the node</p>
     */
    inline void SetNodeDeletionDate(const Aws::Utils::DateTime& value) { m_nodeDeletionDateHasBeenSet = true; m_nodeDeletionDate = value; }

    /**
     * <p>The deletion date of the node</p>
     */
    inline void SetNodeDeletionDate(Aws::Utils::DateTime&& value) { m_nodeDeletionDateHasBeenSet = true; m_nodeDeletionDate = std::move(value); }

    /**
     * <p>The deletion date of the node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeDeletionDate(const Aws::Utils::DateTime& value) { SetNodeDeletionDate(value); return *this;}

    /**
     * <p>The deletion date of the node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeDeletionDate(Aws::Utils::DateTime&& value) { SetNodeDeletionDate(std::move(value)); return *this;}


    /**
     * <p>The start date of the update for a node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateStartDate() const{ return m_nodeUpdateStartDate; }

    /**
     * <p>The start date of the update for a node</p>
     */
    inline bool NodeUpdateStartDateHasBeenSet() const { return m_nodeUpdateStartDateHasBeenSet; }

    /**
     * <p>The start date of the update for a node</p>
     */
    inline void SetNodeUpdateStartDate(const Aws::Utils::DateTime& value) { m_nodeUpdateStartDateHasBeenSet = true; m_nodeUpdateStartDate = value; }

    /**
     * <p>The start date of the update for a node</p>
     */
    inline void SetNodeUpdateStartDate(Aws::Utils::DateTime&& value) { m_nodeUpdateStartDateHasBeenSet = true; m_nodeUpdateStartDate = std::move(value); }

    /**
     * <p>The start date of the update for a node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStartDate(const Aws::Utils::DateTime& value) { SetNodeUpdateStartDate(value); return *this;}

    /**
     * <p>The start date of the update for a node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStartDate(Aws::Utils::DateTime&& value) { SetNodeUpdateStartDate(std::move(value)); return *this;}


    /**
     * <p>The end date of the update for a node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateEndDate() const{ return m_nodeUpdateEndDate; }

    /**
     * <p>The end date of the update for a node</p>
     */
    inline bool NodeUpdateEndDateHasBeenSet() const { return m_nodeUpdateEndDateHasBeenSet; }

    /**
     * <p>The end date of the update for a node</p>
     */
    inline void SetNodeUpdateEndDate(const Aws::Utils::DateTime& value) { m_nodeUpdateEndDateHasBeenSet = true; m_nodeUpdateEndDate = value; }

    /**
     * <p>The end date of the update for a node</p>
     */
    inline void SetNodeUpdateEndDate(Aws::Utils::DateTime&& value) { m_nodeUpdateEndDateHasBeenSet = true; m_nodeUpdateEndDate = std::move(value); }

    /**
     * <p>The end date of the update for a node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateEndDate(const Aws::Utils::DateTime& value) { SetNodeUpdateEndDate(value); return *this;}

    /**
     * <p>The end date of the update for a node</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateEndDate(Aws::Utils::DateTime&& value) { SetNodeUpdateEndDate(std::move(value)); return *this;}


    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline const NodeUpdateInitiatedBy& GetNodeUpdateInitiatedBy() const{ return m_nodeUpdateInitiatedBy; }

    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline bool NodeUpdateInitiatedByHasBeenSet() const { return m_nodeUpdateInitiatedByHasBeenSet; }

    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline void SetNodeUpdateInitiatedBy(const NodeUpdateInitiatedBy& value) { m_nodeUpdateInitiatedByHasBeenSet = true; m_nodeUpdateInitiatedBy = value; }

    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline void SetNodeUpdateInitiatedBy(NodeUpdateInitiatedBy&& value) { m_nodeUpdateInitiatedByHasBeenSet = true; m_nodeUpdateInitiatedBy = std::move(value); }

    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedBy(const NodeUpdateInitiatedBy& value) { SetNodeUpdateInitiatedBy(value); return *this;}

    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedBy(NodeUpdateInitiatedBy&& value) { SetNodeUpdateInitiatedBy(std::move(value)); return *this;}


    /**
     * <p>The date when the update is triggered</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateInitiatedDate() const{ return m_nodeUpdateInitiatedDate; }

    /**
     * <p>The date when the update is triggered</p>
     */
    inline bool NodeUpdateInitiatedDateHasBeenSet() const { return m_nodeUpdateInitiatedDateHasBeenSet; }

    /**
     * <p>The date when the update is triggered</p>
     */
    inline void SetNodeUpdateInitiatedDate(const Aws::Utils::DateTime& value) { m_nodeUpdateInitiatedDateHasBeenSet = true; m_nodeUpdateInitiatedDate = value; }

    /**
     * <p>The date when the update is triggered</p>
     */
    inline void SetNodeUpdateInitiatedDate(Aws::Utils::DateTime&& value) { m_nodeUpdateInitiatedDateHasBeenSet = true; m_nodeUpdateInitiatedDate = std::move(value); }

    /**
     * <p>The date when the update is triggered</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedDate(const Aws::Utils::DateTime& value) { SetNodeUpdateInitiatedDate(value); return *this;}

    /**
     * <p>The date when the update is triggered</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedDate(Aws::Utils::DateTime&& value) { SetNodeUpdateInitiatedDate(std::move(value)); return *this;}


    /**
     * <p>The date when the NodeUpdateStatus was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateStatusModifiedDate() const{ return m_nodeUpdateStatusModifiedDate; }

    /**
     * <p>The date when the NodeUpdateStatus was last modified</p>
     */
    inline bool NodeUpdateStatusModifiedDateHasBeenSet() const { return m_nodeUpdateStatusModifiedDateHasBeenSet; }

    /**
     * <p>The date when the NodeUpdateStatus was last modified</p>
     */
    inline void SetNodeUpdateStatusModifiedDate(const Aws::Utils::DateTime& value) { m_nodeUpdateStatusModifiedDateHasBeenSet = true; m_nodeUpdateStatusModifiedDate = value; }

    /**
     * <p>The date when the NodeUpdateStatus was last modified</p>
     */
    inline void SetNodeUpdateStatusModifiedDate(Aws::Utils::DateTime&& value) { m_nodeUpdateStatusModifiedDateHasBeenSet = true; m_nodeUpdateStatusModifiedDate = std::move(value); }

    /**
     * <p>The date when the NodeUpdateStatus was last modified</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatusModifiedDate(const Aws::Utils::DateTime& value) { SetNodeUpdateStatusModifiedDate(value); return *this;}

    /**
     * <p>The date when the NodeUpdateStatus was last modified</p>
     */
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatusModifiedDate(Aws::Utils::DateTime&& value) { SetNodeUpdateStatusModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;

    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet;

    NodeUpdateStatus m_nodeUpdateStatus;
    bool m_nodeUpdateStatusHasBeenSet;

    Aws::Utils::DateTime m_nodeDeletionDate;
    bool m_nodeDeletionDateHasBeenSet;

    Aws::Utils::DateTime m_nodeUpdateStartDate;
    bool m_nodeUpdateStartDateHasBeenSet;

    Aws::Utils::DateTime m_nodeUpdateEndDate;
    bool m_nodeUpdateEndDateHasBeenSet;

    NodeUpdateInitiatedBy m_nodeUpdateInitiatedBy;
    bool m_nodeUpdateInitiatedByHasBeenSet;

    Aws::Utils::DateTime m_nodeUpdateInitiatedDate;
    bool m_nodeUpdateInitiatedDateHasBeenSet;

    Aws::Utils::DateTime m_nodeUpdateStatusModifiedDate;
    bool m_nodeUpdateStatusModifiedDateHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
