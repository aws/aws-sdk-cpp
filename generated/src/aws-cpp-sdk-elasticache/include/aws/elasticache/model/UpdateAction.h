/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/ServiceUpdateSeverity.h>
#include <aws/elasticache/model/ServiceUpdateStatus.h>
#include <aws/elasticache/model/ServiceUpdateType.h>
#include <aws/elasticache/model/UpdateActionStatus.h>
#include <aws/elasticache/model/SlaMet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NodeGroupUpdateStatus.h>
#include <aws/elasticache/model/CacheNodeUpdateStatus.h>
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
   * <p>The status of the service update for a specific replication
   * group</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/UpdateAction">AWS
   * API Reference</a></p>
   */
  class UpdateAction
  {
  public:
    AWS_ELASTICACHE_API UpdateAction() = default;
    AWS_ELASTICACHE_API UpdateAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UpdateAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the replication group</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    UpdateAction& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the cache cluster</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    UpdateAction& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    UpdateAction& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the update is first available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateReleaseDate() const { return m_serviceUpdateReleaseDate; }
    inline bool ServiceUpdateReleaseDateHasBeenSet() const { return m_serviceUpdateReleaseDateHasBeenSet; }
    template<typename ServiceUpdateReleaseDateT = Aws::Utils::DateTime>
    void SetServiceUpdateReleaseDate(ServiceUpdateReleaseDateT&& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = std::forward<ServiceUpdateReleaseDateT>(value); }
    template<typename ServiceUpdateReleaseDateT = Aws::Utils::DateTime>
    UpdateAction& WithServiceUpdateReleaseDate(ServiceUpdateReleaseDateT&& value) { SetServiceUpdateReleaseDate(std::forward<ServiceUpdateReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the service update</p>
     */
    inline ServiceUpdateSeverity GetServiceUpdateSeverity() const { return m_serviceUpdateSeverity; }
    inline bool ServiceUpdateSeverityHasBeenSet() const { return m_serviceUpdateSeverityHasBeenSet; }
    inline void SetServiceUpdateSeverity(ServiceUpdateSeverity value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = value; }
    inline UpdateAction& WithServiceUpdateSeverity(ServiceUpdateSeverity value) { SetServiceUpdateSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdateStatus GetServiceUpdateStatus() const { return m_serviceUpdateStatus; }
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }
    inline void SetServiceUpdateStatus(ServiceUpdateStatus value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }
    inline UpdateAction& WithServiceUpdateStatus(ServiceUpdateStatus value) { SetServiceUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended date to apply the service update to ensure compliance. For
     * information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateRecommendedApplyByDate() const { return m_serviceUpdateRecommendedApplyByDate; }
    inline bool ServiceUpdateRecommendedApplyByDateHasBeenSet() const { return m_serviceUpdateRecommendedApplyByDateHasBeenSet; }
    template<typename ServiceUpdateRecommendedApplyByDateT = Aws::Utils::DateTime>
    void SetServiceUpdateRecommendedApplyByDate(ServiceUpdateRecommendedApplyByDateT&& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = std::forward<ServiceUpdateRecommendedApplyByDateT>(value); }
    template<typename ServiceUpdateRecommendedApplyByDateT = Aws::Utils::DateTime>
    UpdateAction& WithServiceUpdateRecommendedApplyByDate(ServiceUpdateRecommendedApplyByDateT&& value) { SetServiceUpdateRecommendedApplyByDate(std::forward<ServiceUpdateRecommendedApplyByDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reflects the nature of the service update </p>
     */
    inline ServiceUpdateType GetServiceUpdateType() const { return m_serviceUpdateType; }
    inline bool ServiceUpdateTypeHasBeenSet() const { return m_serviceUpdateTypeHasBeenSet; }
    inline void SetServiceUpdateType(ServiceUpdateType value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = value; }
    inline UpdateAction& WithServiceUpdateType(ServiceUpdateType value) { SetServiceUpdateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the service update is available to a replication group</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateActionAvailableDate() const { return m_updateActionAvailableDate; }
    inline bool UpdateActionAvailableDateHasBeenSet() const { return m_updateActionAvailableDateHasBeenSet; }
    template<typename UpdateActionAvailableDateT = Aws::Utils::DateTime>
    void SetUpdateActionAvailableDate(UpdateActionAvailableDateT&& value) { m_updateActionAvailableDateHasBeenSet = true; m_updateActionAvailableDate = std::forward<UpdateActionAvailableDateT>(value); }
    template<typename UpdateActionAvailableDateT = Aws::Utils::DateTime>
    UpdateAction& WithUpdateActionAvailableDate(UpdateActionAvailableDateT&& value) { SetUpdateActionAvailableDate(std::forward<UpdateActionAvailableDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the update action</p>
     */
    inline UpdateActionStatus GetUpdateActionStatus() const { return m_updateActionStatus; }
    inline bool UpdateActionStatusHasBeenSet() const { return m_updateActionStatusHasBeenSet; }
    inline void SetUpdateActionStatus(UpdateActionStatus value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = value; }
    inline UpdateAction& WithUpdateActionStatus(UpdateActionStatus value) { SetUpdateActionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the service update on the replication group</p>
     */
    inline const Aws::String& GetNodesUpdated() const { return m_nodesUpdated; }
    inline bool NodesUpdatedHasBeenSet() const { return m_nodesUpdatedHasBeenSet; }
    template<typename NodesUpdatedT = Aws::String>
    void SetNodesUpdated(NodesUpdatedT&& value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated = std::forward<NodesUpdatedT>(value); }
    template<typename NodesUpdatedT = Aws::String>
    UpdateAction& WithNodesUpdated(NodesUpdatedT&& value) { SetNodesUpdated(std::forward<NodesUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the UpdateActionStatus was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateActionStatusModifiedDate() const { return m_updateActionStatusModifiedDate; }
    inline bool UpdateActionStatusModifiedDateHasBeenSet() const { return m_updateActionStatusModifiedDateHasBeenSet; }
    template<typename UpdateActionStatusModifiedDateT = Aws::Utils::DateTime>
    void SetUpdateActionStatusModifiedDate(UpdateActionStatusModifiedDateT&& value) { m_updateActionStatusModifiedDateHasBeenSet = true; m_updateActionStatusModifiedDate = std::forward<UpdateActionStatusModifiedDateT>(value); }
    template<typename UpdateActionStatusModifiedDateT = Aws::Utils::DateTime>
    UpdateAction& WithUpdateActionStatusModifiedDate(UpdateActionStatusModifiedDateT&& value) { SetUpdateActionStatusModifiedDate(std::forward<UpdateActionStatusModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If yes, all nodes in the replication group have been updated by the
     * recommended apply-by date. If no, at least one node in the replication group
     * have not been updated by the recommended apply-by date. If N/A, the replication
     * group was created after the recommended apply-by date.</p>
     */
    inline SlaMet GetSlaMet() const { return m_slaMet; }
    inline bool SlaMetHasBeenSet() const { return m_slaMetHasBeenSet; }
    inline void SetSlaMet(SlaMet value) { m_slaMetHasBeenSet = true; m_slaMet = value; }
    inline UpdateAction& WithSlaMet(SlaMet value) { SetSlaMet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update on the node group</p>
     */
    inline const Aws::Vector<NodeGroupUpdateStatus>& GetNodeGroupUpdateStatus() const { return m_nodeGroupUpdateStatus; }
    inline bool NodeGroupUpdateStatusHasBeenSet() const { return m_nodeGroupUpdateStatusHasBeenSet; }
    template<typename NodeGroupUpdateStatusT = Aws::Vector<NodeGroupUpdateStatus>>
    void SetNodeGroupUpdateStatus(NodeGroupUpdateStatusT&& value) { m_nodeGroupUpdateStatusHasBeenSet = true; m_nodeGroupUpdateStatus = std::forward<NodeGroupUpdateStatusT>(value); }
    template<typename NodeGroupUpdateStatusT = Aws::Vector<NodeGroupUpdateStatus>>
    UpdateAction& WithNodeGroupUpdateStatus(NodeGroupUpdateStatusT&& value) { SetNodeGroupUpdateStatus(std::forward<NodeGroupUpdateStatusT>(value)); return *this;}
    template<typename NodeGroupUpdateStatusT = NodeGroupUpdateStatus>
    UpdateAction& AddNodeGroupUpdateStatus(NodeGroupUpdateStatusT&& value) { m_nodeGroupUpdateStatusHasBeenSet = true; m_nodeGroupUpdateStatus.emplace_back(std::forward<NodeGroupUpdateStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the service update on the cache node</p>
     */
    inline const Aws::Vector<CacheNodeUpdateStatus>& GetCacheNodeUpdateStatus() const { return m_cacheNodeUpdateStatus; }
    inline bool CacheNodeUpdateStatusHasBeenSet() const { return m_cacheNodeUpdateStatusHasBeenSet; }
    template<typename CacheNodeUpdateStatusT = Aws::Vector<CacheNodeUpdateStatus>>
    void SetCacheNodeUpdateStatus(CacheNodeUpdateStatusT&& value) { m_cacheNodeUpdateStatusHasBeenSet = true; m_cacheNodeUpdateStatus = std::forward<CacheNodeUpdateStatusT>(value); }
    template<typename CacheNodeUpdateStatusT = Aws::Vector<CacheNodeUpdateStatus>>
    UpdateAction& WithCacheNodeUpdateStatus(CacheNodeUpdateStatusT&& value) { SetCacheNodeUpdateStatus(std::forward<CacheNodeUpdateStatusT>(value)); return *this;}
    template<typename CacheNodeUpdateStatusT = CacheNodeUpdateStatus>
    UpdateAction& AddCacheNodeUpdateStatus(CacheNodeUpdateStatusT&& value) { m_cacheNodeUpdateStatusHasBeenSet = true; m_cacheNodeUpdateStatus.emplace_back(std::forward<CacheNodeUpdateStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The estimated length of time for the update to complete</p>
     */
    inline const Aws::String& GetEstimatedUpdateTime() const { return m_estimatedUpdateTime; }
    inline bool EstimatedUpdateTimeHasBeenSet() const { return m_estimatedUpdateTimeHasBeenSet; }
    template<typename EstimatedUpdateTimeT = Aws::String>
    void SetEstimatedUpdateTime(EstimatedUpdateTimeT&& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = std::forward<EstimatedUpdateTimeT>(value); }
    template<typename EstimatedUpdateTimeT = Aws::String>
    UpdateAction& WithEstimatedUpdateTime(EstimatedUpdateTimeT&& value) { SetEstimatedUpdateTime(std::forward<EstimatedUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine to which the update applies. Either Valkey, Redis OSS
     * or Memcached.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    UpdateAction& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateReleaseDate{};
    bool m_serviceUpdateReleaseDateHasBeenSet = false;

    ServiceUpdateSeverity m_serviceUpdateSeverity{ServiceUpdateSeverity::NOT_SET};
    bool m_serviceUpdateSeverityHasBeenSet = false;

    ServiceUpdateStatus m_serviceUpdateStatus{ServiceUpdateStatus::NOT_SET};
    bool m_serviceUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateRecommendedApplyByDate{};
    bool m_serviceUpdateRecommendedApplyByDateHasBeenSet = false;

    ServiceUpdateType m_serviceUpdateType{ServiceUpdateType::NOT_SET};
    bool m_serviceUpdateTypeHasBeenSet = false;

    Aws::Utils::DateTime m_updateActionAvailableDate{};
    bool m_updateActionAvailableDateHasBeenSet = false;

    UpdateActionStatus m_updateActionStatus{UpdateActionStatus::NOT_SET};
    bool m_updateActionStatusHasBeenSet = false;

    Aws::String m_nodesUpdated;
    bool m_nodesUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_updateActionStatusModifiedDate{};
    bool m_updateActionStatusModifiedDateHasBeenSet = false;

    SlaMet m_slaMet{SlaMet::NOT_SET};
    bool m_slaMetHasBeenSet = false;

    Aws::Vector<NodeGroupUpdateStatus> m_nodeGroupUpdateStatus;
    bool m_nodeGroupUpdateStatusHasBeenSet = false;

    Aws::Vector<CacheNodeUpdateStatus> m_cacheNodeUpdateStatus;
    bool m_cacheNodeUpdateStatusHasBeenSet = false;

    Aws::String m_estimatedUpdateTime;
    bool m_estimatedUpdateTimeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
