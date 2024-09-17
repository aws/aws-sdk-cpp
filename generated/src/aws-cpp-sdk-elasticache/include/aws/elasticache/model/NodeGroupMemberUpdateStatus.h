/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class NodeGroupMemberUpdateStatus
  {
  public:
    AWS_ELASTICACHE_API NodeGroupMemberUpdateStatus();
    AWS_ELASTICACHE_API NodeGroupMemberUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeGroupMemberUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The cache cluster ID</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }
    inline NodeGroupMemberUpdateStatus& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}
    inline NodeGroupMemberUpdateStatus& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline const Aws::String& GetCacheNodeId() const{ return m_cacheNodeId; }
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }
    inline void SetCacheNodeId(const Aws::String& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }
    inline void SetCacheNodeId(Aws::String&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::move(value); }
    inline void SetCacheNodeId(const char* value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId.assign(value); }
    inline NodeGroupMemberUpdateStatus& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(std::move(value)); return *this;}
    inline NodeGroupMemberUpdateStatus& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update status of the node</p>
     */
    inline const NodeUpdateStatus& GetNodeUpdateStatus() const{ return m_nodeUpdateStatus; }
    inline bool NodeUpdateStatusHasBeenSet() const { return m_nodeUpdateStatusHasBeenSet; }
    inline void SetNodeUpdateStatus(const NodeUpdateStatus& value) { m_nodeUpdateStatusHasBeenSet = true; m_nodeUpdateStatus = value; }
    inline void SetNodeUpdateStatus(NodeUpdateStatus&& value) { m_nodeUpdateStatusHasBeenSet = true; m_nodeUpdateStatus = std::move(value); }
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatus(const NodeUpdateStatus& value) { SetNodeUpdateStatus(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatus(NodeUpdateStatus&& value) { SetNodeUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion date of the node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeDeletionDate() const{ return m_nodeDeletionDate; }
    inline bool NodeDeletionDateHasBeenSet() const { return m_nodeDeletionDateHasBeenSet; }
    inline void SetNodeDeletionDate(const Aws::Utils::DateTime& value) { m_nodeDeletionDateHasBeenSet = true; m_nodeDeletionDate = value; }
    inline void SetNodeDeletionDate(Aws::Utils::DateTime&& value) { m_nodeDeletionDateHasBeenSet = true; m_nodeDeletionDate = std::move(value); }
    inline NodeGroupMemberUpdateStatus& WithNodeDeletionDate(const Aws::Utils::DateTime& value) { SetNodeDeletionDate(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithNodeDeletionDate(Aws::Utils::DateTime&& value) { SetNodeDeletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the update for a node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateStartDate() const{ return m_nodeUpdateStartDate; }
    inline bool NodeUpdateStartDateHasBeenSet() const { return m_nodeUpdateStartDateHasBeenSet; }
    inline void SetNodeUpdateStartDate(const Aws::Utils::DateTime& value) { m_nodeUpdateStartDateHasBeenSet = true; m_nodeUpdateStartDate = value; }
    inline void SetNodeUpdateStartDate(Aws::Utils::DateTime&& value) { m_nodeUpdateStartDateHasBeenSet = true; m_nodeUpdateStartDate = std::move(value); }
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStartDate(const Aws::Utils::DateTime& value) { SetNodeUpdateStartDate(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStartDate(Aws::Utils::DateTime&& value) { SetNodeUpdateStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the update for a node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateEndDate() const{ return m_nodeUpdateEndDate; }
    inline bool NodeUpdateEndDateHasBeenSet() const { return m_nodeUpdateEndDateHasBeenSet; }
    inline void SetNodeUpdateEndDate(const Aws::Utils::DateTime& value) { m_nodeUpdateEndDateHasBeenSet = true; m_nodeUpdateEndDate = value; }
    inline void SetNodeUpdateEndDate(Aws::Utils::DateTime&& value) { m_nodeUpdateEndDateHasBeenSet = true; m_nodeUpdateEndDate = std::move(value); }
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateEndDate(const Aws::Utils::DateTime& value) { SetNodeUpdateEndDate(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateEndDate(Aws::Utils::DateTime&& value) { SetNodeUpdateEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline const NodeUpdateInitiatedBy& GetNodeUpdateInitiatedBy() const{ return m_nodeUpdateInitiatedBy; }
    inline bool NodeUpdateInitiatedByHasBeenSet() const { return m_nodeUpdateInitiatedByHasBeenSet; }
    inline void SetNodeUpdateInitiatedBy(const NodeUpdateInitiatedBy& value) { m_nodeUpdateInitiatedByHasBeenSet = true; m_nodeUpdateInitiatedBy = value; }
    inline void SetNodeUpdateInitiatedBy(NodeUpdateInitiatedBy&& value) { m_nodeUpdateInitiatedByHasBeenSet = true; m_nodeUpdateInitiatedBy = std::move(value); }
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedBy(const NodeUpdateInitiatedBy& value) { SetNodeUpdateInitiatedBy(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedBy(NodeUpdateInitiatedBy&& value) { SetNodeUpdateInitiatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the update is triggered</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateInitiatedDate() const{ return m_nodeUpdateInitiatedDate; }
    inline bool NodeUpdateInitiatedDateHasBeenSet() const { return m_nodeUpdateInitiatedDateHasBeenSet; }
    inline void SetNodeUpdateInitiatedDate(const Aws::Utils::DateTime& value) { m_nodeUpdateInitiatedDateHasBeenSet = true; m_nodeUpdateInitiatedDate = value; }
    inline void SetNodeUpdateInitiatedDate(Aws::Utils::DateTime&& value) { m_nodeUpdateInitiatedDateHasBeenSet = true; m_nodeUpdateInitiatedDate = std::move(value); }
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedDate(const Aws::Utils::DateTime& value) { SetNodeUpdateInitiatedDate(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateInitiatedDate(Aws::Utils::DateTime&& value) { SetNodeUpdateInitiatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the NodeUpdateStatus was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateStatusModifiedDate() const{ return m_nodeUpdateStatusModifiedDate; }
    inline bool NodeUpdateStatusModifiedDateHasBeenSet() const { return m_nodeUpdateStatusModifiedDateHasBeenSet; }
    inline void SetNodeUpdateStatusModifiedDate(const Aws::Utils::DateTime& value) { m_nodeUpdateStatusModifiedDateHasBeenSet = true; m_nodeUpdateStatusModifiedDate = value; }
    inline void SetNodeUpdateStatusModifiedDate(Aws::Utils::DateTime&& value) { m_nodeUpdateStatusModifiedDateHasBeenSet = true; m_nodeUpdateStatusModifiedDate = std::move(value); }
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatusModifiedDate(const Aws::Utils::DateTime& value) { SetNodeUpdateStatusModifiedDate(value); return *this;}
    inline NodeGroupMemberUpdateStatus& WithNodeUpdateStatusModifiedDate(Aws::Utils::DateTime&& value) { SetNodeUpdateStatusModifiedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet = false;

    NodeUpdateStatus m_nodeUpdateStatus;
    bool m_nodeUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_nodeDeletionDate;
    bool m_nodeDeletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateStartDate;
    bool m_nodeUpdateStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateEndDate;
    bool m_nodeUpdateEndDateHasBeenSet = false;

    NodeUpdateInitiatedBy m_nodeUpdateInitiatedBy;
    bool m_nodeUpdateInitiatedByHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateInitiatedDate;
    bool m_nodeUpdateInitiatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateStatusModifiedDate;
    bool m_nodeUpdateStatusModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
