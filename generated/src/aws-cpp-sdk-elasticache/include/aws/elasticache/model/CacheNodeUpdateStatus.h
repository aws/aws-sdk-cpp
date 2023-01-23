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
   * <p>The status of the service update on the cache node</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheNodeUpdateStatus">AWS
   * API Reference</a></p>
   */
  class CacheNodeUpdateStatus
  {
  public:
    AWS_ELASTICACHE_API CacheNodeUpdateStatus();
    AWS_ELASTICACHE_API CacheNodeUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheNodeUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline CacheNodeUpdateStatus& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline CacheNodeUpdateStatus& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(std::move(value)); return *this;}

    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline CacheNodeUpdateStatus& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}


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
    inline CacheNodeUpdateStatus& WithNodeUpdateStatus(const NodeUpdateStatus& value) { SetNodeUpdateStatus(value); return *this;}

    /**
     * <p>The update status of the node</p>
     */
    inline CacheNodeUpdateStatus& WithNodeUpdateStatus(NodeUpdateStatus&& value) { SetNodeUpdateStatus(std::move(value)); return *this;}


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
    inline CacheNodeUpdateStatus& WithNodeDeletionDate(const Aws::Utils::DateTime& value) { SetNodeDeletionDate(value); return *this;}

    /**
     * <p>The deletion date of the node</p>
     */
    inline CacheNodeUpdateStatus& WithNodeDeletionDate(Aws::Utils::DateTime&& value) { SetNodeDeletionDate(std::move(value)); return *this;}


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
    inline CacheNodeUpdateStatus& WithNodeUpdateStartDate(const Aws::Utils::DateTime& value) { SetNodeUpdateStartDate(value); return *this;}

    /**
     * <p>The start date of the update for a node</p>
     */
    inline CacheNodeUpdateStatus& WithNodeUpdateStartDate(Aws::Utils::DateTime&& value) { SetNodeUpdateStartDate(std::move(value)); return *this;}


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
    inline CacheNodeUpdateStatus& WithNodeUpdateEndDate(const Aws::Utils::DateTime& value) { SetNodeUpdateEndDate(value); return *this;}

    /**
     * <p>The end date of the update for a node</p>
     */
    inline CacheNodeUpdateStatus& WithNodeUpdateEndDate(Aws::Utils::DateTime&& value) { SetNodeUpdateEndDate(std::move(value)); return *this;}


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
    inline CacheNodeUpdateStatus& WithNodeUpdateInitiatedBy(const NodeUpdateInitiatedBy& value) { SetNodeUpdateInitiatedBy(value); return *this;}

    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline CacheNodeUpdateStatus& WithNodeUpdateInitiatedBy(NodeUpdateInitiatedBy&& value) { SetNodeUpdateInitiatedBy(std::move(value)); return *this;}


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
    inline CacheNodeUpdateStatus& WithNodeUpdateInitiatedDate(const Aws::Utils::DateTime& value) { SetNodeUpdateInitiatedDate(value); return *this;}

    /**
     * <p>The date when the update is triggered</p>
     */
    inline CacheNodeUpdateStatus& WithNodeUpdateInitiatedDate(Aws::Utils::DateTime&& value) { SetNodeUpdateInitiatedDate(std::move(value)); return *this;}


    /**
     * <p>The date when the NodeUpdateStatus was last modified&gt;</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateStatusModifiedDate() const{ return m_nodeUpdateStatusModifiedDate; }

    /**
     * <p>The date when the NodeUpdateStatus was last modified&gt;</p>
     */
    inline bool NodeUpdateStatusModifiedDateHasBeenSet() const { return m_nodeUpdateStatusModifiedDateHasBeenSet; }

    /**
     * <p>The date when the NodeUpdateStatus was last modified&gt;</p>
     */
    inline void SetNodeUpdateStatusModifiedDate(const Aws::Utils::DateTime& value) { m_nodeUpdateStatusModifiedDateHasBeenSet = true; m_nodeUpdateStatusModifiedDate = value; }

    /**
     * <p>The date when the NodeUpdateStatus was last modified&gt;</p>
     */
    inline void SetNodeUpdateStatusModifiedDate(Aws::Utils::DateTime&& value) { m_nodeUpdateStatusModifiedDateHasBeenSet = true; m_nodeUpdateStatusModifiedDate = std::move(value); }

    /**
     * <p>The date when the NodeUpdateStatus was last modified&gt;</p>
     */
    inline CacheNodeUpdateStatus& WithNodeUpdateStatusModifiedDate(const Aws::Utils::DateTime& value) { SetNodeUpdateStatusModifiedDate(value); return *this;}

    /**
     * <p>The date when the NodeUpdateStatus was last modified&gt;</p>
     */
    inline CacheNodeUpdateStatus& WithNodeUpdateStatusModifiedDate(Aws::Utils::DateTime&& value) { SetNodeUpdateStatusModifiedDate(std::move(value)); return *this;}

  private:

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
