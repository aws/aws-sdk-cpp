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
    AWS_ELASTICACHE_API CacheNodeUpdateStatus() = default;
    AWS_ELASTICACHE_API CacheNodeUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheNodeUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The node ID of the cache cluster</p>
     */
    inline const Aws::String& GetCacheNodeId() const { return m_cacheNodeId; }
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }
    template<typename CacheNodeIdT = Aws::String>
    void SetCacheNodeId(CacheNodeIdT&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::forward<CacheNodeIdT>(value); }
    template<typename CacheNodeIdT = Aws::String>
    CacheNodeUpdateStatus& WithCacheNodeId(CacheNodeIdT&& value) { SetCacheNodeId(std::forward<CacheNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update status of the node</p>
     */
    inline NodeUpdateStatus GetNodeUpdateStatus() const { return m_nodeUpdateStatus; }
    inline bool NodeUpdateStatusHasBeenSet() const { return m_nodeUpdateStatusHasBeenSet; }
    inline void SetNodeUpdateStatus(NodeUpdateStatus value) { m_nodeUpdateStatusHasBeenSet = true; m_nodeUpdateStatus = value; }
    inline CacheNodeUpdateStatus& WithNodeUpdateStatus(NodeUpdateStatus value) { SetNodeUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion date of the node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeDeletionDate() const { return m_nodeDeletionDate; }
    inline bool NodeDeletionDateHasBeenSet() const { return m_nodeDeletionDateHasBeenSet; }
    template<typename NodeDeletionDateT = Aws::Utils::DateTime>
    void SetNodeDeletionDate(NodeDeletionDateT&& value) { m_nodeDeletionDateHasBeenSet = true; m_nodeDeletionDate = std::forward<NodeDeletionDateT>(value); }
    template<typename NodeDeletionDateT = Aws::Utils::DateTime>
    CacheNodeUpdateStatus& WithNodeDeletionDate(NodeDeletionDateT&& value) { SetNodeDeletionDate(std::forward<NodeDeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the update for a node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateStartDate() const { return m_nodeUpdateStartDate; }
    inline bool NodeUpdateStartDateHasBeenSet() const { return m_nodeUpdateStartDateHasBeenSet; }
    template<typename NodeUpdateStartDateT = Aws::Utils::DateTime>
    void SetNodeUpdateStartDate(NodeUpdateStartDateT&& value) { m_nodeUpdateStartDateHasBeenSet = true; m_nodeUpdateStartDate = std::forward<NodeUpdateStartDateT>(value); }
    template<typename NodeUpdateStartDateT = Aws::Utils::DateTime>
    CacheNodeUpdateStatus& WithNodeUpdateStartDate(NodeUpdateStartDateT&& value) { SetNodeUpdateStartDate(std::forward<NodeUpdateStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the update for a node</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateEndDate() const { return m_nodeUpdateEndDate; }
    inline bool NodeUpdateEndDateHasBeenSet() const { return m_nodeUpdateEndDateHasBeenSet; }
    template<typename NodeUpdateEndDateT = Aws::Utils::DateTime>
    void SetNodeUpdateEndDate(NodeUpdateEndDateT&& value) { m_nodeUpdateEndDateHasBeenSet = true; m_nodeUpdateEndDate = std::forward<NodeUpdateEndDateT>(value); }
    template<typename NodeUpdateEndDateT = Aws::Utils::DateTime>
    CacheNodeUpdateStatus& WithNodeUpdateEndDate(NodeUpdateEndDateT&& value) { SetNodeUpdateEndDate(std::forward<NodeUpdateEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reflects whether the update was initiated by the customer or automatically
     * applied</p>
     */
    inline NodeUpdateInitiatedBy GetNodeUpdateInitiatedBy() const { return m_nodeUpdateInitiatedBy; }
    inline bool NodeUpdateInitiatedByHasBeenSet() const { return m_nodeUpdateInitiatedByHasBeenSet; }
    inline void SetNodeUpdateInitiatedBy(NodeUpdateInitiatedBy value) { m_nodeUpdateInitiatedByHasBeenSet = true; m_nodeUpdateInitiatedBy = value; }
    inline CacheNodeUpdateStatus& WithNodeUpdateInitiatedBy(NodeUpdateInitiatedBy value) { SetNodeUpdateInitiatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the update is triggered</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateInitiatedDate() const { return m_nodeUpdateInitiatedDate; }
    inline bool NodeUpdateInitiatedDateHasBeenSet() const { return m_nodeUpdateInitiatedDateHasBeenSet; }
    template<typename NodeUpdateInitiatedDateT = Aws::Utils::DateTime>
    void SetNodeUpdateInitiatedDate(NodeUpdateInitiatedDateT&& value) { m_nodeUpdateInitiatedDateHasBeenSet = true; m_nodeUpdateInitiatedDate = std::forward<NodeUpdateInitiatedDateT>(value); }
    template<typename NodeUpdateInitiatedDateT = Aws::Utils::DateTime>
    CacheNodeUpdateStatus& WithNodeUpdateInitiatedDate(NodeUpdateInitiatedDateT&& value) { SetNodeUpdateInitiatedDate(std::forward<NodeUpdateInitiatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the NodeUpdateStatus was last modified&gt;</p>
     */
    inline const Aws::Utils::DateTime& GetNodeUpdateStatusModifiedDate() const { return m_nodeUpdateStatusModifiedDate; }
    inline bool NodeUpdateStatusModifiedDateHasBeenSet() const { return m_nodeUpdateStatusModifiedDateHasBeenSet; }
    template<typename NodeUpdateStatusModifiedDateT = Aws::Utils::DateTime>
    void SetNodeUpdateStatusModifiedDate(NodeUpdateStatusModifiedDateT&& value) { m_nodeUpdateStatusModifiedDateHasBeenSet = true; m_nodeUpdateStatusModifiedDate = std::forward<NodeUpdateStatusModifiedDateT>(value); }
    template<typename NodeUpdateStatusModifiedDateT = Aws::Utils::DateTime>
    CacheNodeUpdateStatus& WithNodeUpdateStatusModifiedDate(NodeUpdateStatusModifiedDateT&& value) { SetNodeUpdateStatusModifiedDate(std::forward<NodeUpdateStatusModifiedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet = false;

    NodeUpdateStatus m_nodeUpdateStatus{NodeUpdateStatus::NOT_SET};
    bool m_nodeUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_nodeDeletionDate{};
    bool m_nodeDeletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateStartDate{};
    bool m_nodeUpdateStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateEndDate{};
    bool m_nodeUpdateEndDateHasBeenSet = false;

    NodeUpdateInitiatedBy m_nodeUpdateInitiatedBy{NodeUpdateInitiatedBy::NOT_SET};
    bool m_nodeUpdateInitiatedByHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateInitiatedDate{};
    bool m_nodeUpdateInitiatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_nodeUpdateStatusModifiedDate{};
    bool m_nodeUpdateStatusModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
