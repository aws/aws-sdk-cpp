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
    AWS_ELASTICACHE_API UpdateAction();
    AWS_ELASTICACHE_API UpdateAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UpdateAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the replication group</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline UpdateAction& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline UpdateAction& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline UpdateAction& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the cache cluster</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }
    inline UpdateAction& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}
    inline UpdateAction& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}
    inline UpdateAction& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }
    inline UpdateAction& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}
    inline UpdateAction& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}
    inline UpdateAction& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the update is first available</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateReleaseDate() const{ return m_serviceUpdateReleaseDate; }
    inline bool ServiceUpdateReleaseDateHasBeenSet() const { return m_serviceUpdateReleaseDateHasBeenSet; }
    inline void SetServiceUpdateReleaseDate(const Aws::Utils::DateTime& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = value; }
    inline void SetServiceUpdateReleaseDate(Aws::Utils::DateTime&& value) { m_serviceUpdateReleaseDateHasBeenSet = true; m_serviceUpdateReleaseDate = std::move(value); }
    inline UpdateAction& WithServiceUpdateReleaseDate(const Aws::Utils::DateTime& value) { SetServiceUpdateReleaseDate(value); return *this;}
    inline UpdateAction& WithServiceUpdateReleaseDate(Aws::Utils::DateTime&& value) { SetServiceUpdateReleaseDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the service update</p>
     */
    inline const ServiceUpdateSeverity& GetServiceUpdateSeverity() const{ return m_serviceUpdateSeverity; }
    inline bool ServiceUpdateSeverityHasBeenSet() const { return m_serviceUpdateSeverityHasBeenSet; }
    inline void SetServiceUpdateSeverity(const ServiceUpdateSeverity& value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = value; }
    inline void SetServiceUpdateSeverity(ServiceUpdateSeverity&& value) { m_serviceUpdateSeverityHasBeenSet = true; m_serviceUpdateSeverity = std::move(value); }
    inline UpdateAction& WithServiceUpdateSeverity(const ServiceUpdateSeverity& value) { SetServiceUpdateSeverity(value); return *this;}
    inline UpdateAction& WithServiceUpdateSeverity(ServiceUpdateSeverity&& value) { SetServiceUpdateSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline const ServiceUpdateStatus& GetServiceUpdateStatus() const{ return m_serviceUpdateStatus; }
    inline bool ServiceUpdateStatusHasBeenSet() const { return m_serviceUpdateStatusHasBeenSet; }
    inline void SetServiceUpdateStatus(const ServiceUpdateStatus& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = value; }
    inline void SetServiceUpdateStatus(ServiceUpdateStatus&& value) { m_serviceUpdateStatusHasBeenSet = true; m_serviceUpdateStatus = std::move(value); }
    inline UpdateAction& WithServiceUpdateStatus(const ServiceUpdateStatus& value) { SetServiceUpdateStatus(value); return *this;}
    inline UpdateAction& WithServiceUpdateStatus(ServiceUpdateStatus&& value) { SetServiceUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended date to apply the service update to ensure compliance. For
     * information on compliance, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/elasticache-compliance.html#elasticache-compliance-self-service">Self-Service
     * Security Updates for Compliance</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceUpdateRecommendedApplyByDate() const{ return m_serviceUpdateRecommendedApplyByDate; }
    inline bool ServiceUpdateRecommendedApplyByDateHasBeenSet() const { return m_serviceUpdateRecommendedApplyByDateHasBeenSet; }
    inline void SetServiceUpdateRecommendedApplyByDate(const Aws::Utils::DateTime& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = value; }
    inline void SetServiceUpdateRecommendedApplyByDate(Aws::Utils::DateTime&& value) { m_serviceUpdateRecommendedApplyByDateHasBeenSet = true; m_serviceUpdateRecommendedApplyByDate = std::move(value); }
    inline UpdateAction& WithServiceUpdateRecommendedApplyByDate(const Aws::Utils::DateTime& value) { SetServiceUpdateRecommendedApplyByDate(value); return *this;}
    inline UpdateAction& WithServiceUpdateRecommendedApplyByDate(Aws::Utils::DateTime&& value) { SetServiceUpdateRecommendedApplyByDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reflects the nature of the service update </p>
     */
    inline const ServiceUpdateType& GetServiceUpdateType() const{ return m_serviceUpdateType; }
    inline bool ServiceUpdateTypeHasBeenSet() const { return m_serviceUpdateTypeHasBeenSet; }
    inline void SetServiceUpdateType(const ServiceUpdateType& value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = value; }
    inline void SetServiceUpdateType(ServiceUpdateType&& value) { m_serviceUpdateTypeHasBeenSet = true; m_serviceUpdateType = std::move(value); }
    inline UpdateAction& WithServiceUpdateType(const ServiceUpdateType& value) { SetServiceUpdateType(value); return *this;}
    inline UpdateAction& WithServiceUpdateType(ServiceUpdateType&& value) { SetServiceUpdateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the service update is available to a replication group</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateActionAvailableDate() const{ return m_updateActionAvailableDate; }
    inline bool UpdateActionAvailableDateHasBeenSet() const { return m_updateActionAvailableDateHasBeenSet; }
    inline void SetUpdateActionAvailableDate(const Aws::Utils::DateTime& value) { m_updateActionAvailableDateHasBeenSet = true; m_updateActionAvailableDate = value; }
    inline void SetUpdateActionAvailableDate(Aws::Utils::DateTime&& value) { m_updateActionAvailableDateHasBeenSet = true; m_updateActionAvailableDate = std::move(value); }
    inline UpdateAction& WithUpdateActionAvailableDate(const Aws::Utils::DateTime& value) { SetUpdateActionAvailableDate(value); return *this;}
    inline UpdateAction& WithUpdateActionAvailableDate(Aws::Utils::DateTime&& value) { SetUpdateActionAvailableDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the update action</p>
     */
    inline const UpdateActionStatus& GetUpdateActionStatus() const{ return m_updateActionStatus; }
    inline bool UpdateActionStatusHasBeenSet() const { return m_updateActionStatusHasBeenSet; }
    inline void SetUpdateActionStatus(const UpdateActionStatus& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = value; }
    inline void SetUpdateActionStatus(UpdateActionStatus&& value) { m_updateActionStatusHasBeenSet = true; m_updateActionStatus = std::move(value); }
    inline UpdateAction& WithUpdateActionStatus(const UpdateActionStatus& value) { SetUpdateActionStatus(value); return *this;}
    inline UpdateAction& WithUpdateActionStatus(UpdateActionStatus&& value) { SetUpdateActionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the service update on the replication group</p>
     */
    inline const Aws::String& GetNodesUpdated() const{ return m_nodesUpdated; }
    inline bool NodesUpdatedHasBeenSet() const { return m_nodesUpdatedHasBeenSet; }
    inline void SetNodesUpdated(const Aws::String& value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated = value; }
    inline void SetNodesUpdated(Aws::String&& value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated = std::move(value); }
    inline void SetNodesUpdated(const char* value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated.assign(value); }
    inline UpdateAction& WithNodesUpdated(const Aws::String& value) { SetNodesUpdated(value); return *this;}
    inline UpdateAction& WithNodesUpdated(Aws::String&& value) { SetNodesUpdated(std::move(value)); return *this;}
    inline UpdateAction& WithNodesUpdated(const char* value) { SetNodesUpdated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the UpdateActionStatus was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateActionStatusModifiedDate() const{ return m_updateActionStatusModifiedDate; }
    inline bool UpdateActionStatusModifiedDateHasBeenSet() const { return m_updateActionStatusModifiedDateHasBeenSet; }
    inline void SetUpdateActionStatusModifiedDate(const Aws::Utils::DateTime& value) { m_updateActionStatusModifiedDateHasBeenSet = true; m_updateActionStatusModifiedDate = value; }
    inline void SetUpdateActionStatusModifiedDate(Aws::Utils::DateTime&& value) { m_updateActionStatusModifiedDateHasBeenSet = true; m_updateActionStatusModifiedDate = std::move(value); }
    inline UpdateAction& WithUpdateActionStatusModifiedDate(const Aws::Utils::DateTime& value) { SetUpdateActionStatusModifiedDate(value); return *this;}
    inline UpdateAction& WithUpdateActionStatusModifiedDate(Aws::Utils::DateTime&& value) { SetUpdateActionStatusModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If yes, all nodes in the replication group have been updated by the
     * recommended apply-by date. If no, at least one node in the replication group
     * have not been updated by the recommended apply-by date. If N/A, the replication
     * group was created after the recommended apply-by date.</p>
     */
    inline const SlaMet& GetSlaMet() const{ return m_slaMet; }
    inline bool SlaMetHasBeenSet() const { return m_slaMetHasBeenSet; }
    inline void SetSlaMet(const SlaMet& value) { m_slaMetHasBeenSet = true; m_slaMet = value; }
    inline void SetSlaMet(SlaMet&& value) { m_slaMetHasBeenSet = true; m_slaMet = std::move(value); }
    inline UpdateAction& WithSlaMet(const SlaMet& value) { SetSlaMet(value); return *this;}
    inline UpdateAction& WithSlaMet(SlaMet&& value) { SetSlaMet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update on the node group</p>
     */
    inline const Aws::Vector<NodeGroupUpdateStatus>& GetNodeGroupUpdateStatus() const{ return m_nodeGroupUpdateStatus; }
    inline bool NodeGroupUpdateStatusHasBeenSet() const { return m_nodeGroupUpdateStatusHasBeenSet; }
    inline void SetNodeGroupUpdateStatus(const Aws::Vector<NodeGroupUpdateStatus>& value) { m_nodeGroupUpdateStatusHasBeenSet = true; m_nodeGroupUpdateStatus = value; }
    inline void SetNodeGroupUpdateStatus(Aws::Vector<NodeGroupUpdateStatus>&& value) { m_nodeGroupUpdateStatusHasBeenSet = true; m_nodeGroupUpdateStatus = std::move(value); }
    inline UpdateAction& WithNodeGroupUpdateStatus(const Aws::Vector<NodeGroupUpdateStatus>& value) { SetNodeGroupUpdateStatus(value); return *this;}
    inline UpdateAction& WithNodeGroupUpdateStatus(Aws::Vector<NodeGroupUpdateStatus>&& value) { SetNodeGroupUpdateStatus(std::move(value)); return *this;}
    inline UpdateAction& AddNodeGroupUpdateStatus(const NodeGroupUpdateStatus& value) { m_nodeGroupUpdateStatusHasBeenSet = true; m_nodeGroupUpdateStatus.push_back(value); return *this; }
    inline UpdateAction& AddNodeGroupUpdateStatus(NodeGroupUpdateStatus&& value) { m_nodeGroupUpdateStatusHasBeenSet = true; m_nodeGroupUpdateStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the service update on the cache node</p>
     */
    inline const Aws::Vector<CacheNodeUpdateStatus>& GetCacheNodeUpdateStatus() const{ return m_cacheNodeUpdateStatus; }
    inline bool CacheNodeUpdateStatusHasBeenSet() const { return m_cacheNodeUpdateStatusHasBeenSet; }
    inline void SetCacheNodeUpdateStatus(const Aws::Vector<CacheNodeUpdateStatus>& value) { m_cacheNodeUpdateStatusHasBeenSet = true; m_cacheNodeUpdateStatus = value; }
    inline void SetCacheNodeUpdateStatus(Aws::Vector<CacheNodeUpdateStatus>&& value) { m_cacheNodeUpdateStatusHasBeenSet = true; m_cacheNodeUpdateStatus = std::move(value); }
    inline UpdateAction& WithCacheNodeUpdateStatus(const Aws::Vector<CacheNodeUpdateStatus>& value) { SetCacheNodeUpdateStatus(value); return *this;}
    inline UpdateAction& WithCacheNodeUpdateStatus(Aws::Vector<CacheNodeUpdateStatus>&& value) { SetCacheNodeUpdateStatus(std::move(value)); return *this;}
    inline UpdateAction& AddCacheNodeUpdateStatus(const CacheNodeUpdateStatus& value) { m_cacheNodeUpdateStatusHasBeenSet = true; m_cacheNodeUpdateStatus.push_back(value); return *this; }
    inline UpdateAction& AddCacheNodeUpdateStatus(CacheNodeUpdateStatus&& value) { m_cacheNodeUpdateStatusHasBeenSet = true; m_cacheNodeUpdateStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The estimated length of time for the update to complete</p>
     */
    inline const Aws::String& GetEstimatedUpdateTime() const{ return m_estimatedUpdateTime; }
    inline bool EstimatedUpdateTimeHasBeenSet() const { return m_estimatedUpdateTimeHasBeenSet; }
    inline void SetEstimatedUpdateTime(const Aws::String& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = value; }
    inline void SetEstimatedUpdateTime(Aws::String&& value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime = std::move(value); }
    inline void SetEstimatedUpdateTime(const char* value) { m_estimatedUpdateTimeHasBeenSet = true; m_estimatedUpdateTime.assign(value); }
    inline UpdateAction& WithEstimatedUpdateTime(const Aws::String& value) { SetEstimatedUpdateTime(value); return *this;}
    inline UpdateAction& WithEstimatedUpdateTime(Aws::String&& value) { SetEstimatedUpdateTime(std::move(value)); return *this;}
    inline UpdateAction& WithEstimatedUpdateTime(const char* value) { SetEstimatedUpdateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticache engine to which the update applies. Either Valkey, Redis OSS
     * or Memcached.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline UpdateAction& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline UpdateAction& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline UpdateAction& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateReleaseDate;
    bool m_serviceUpdateReleaseDateHasBeenSet = false;

    ServiceUpdateSeverity m_serviceUpdateSeverity;
    bool m_serviceUpdateSeverityHasBeenSet = false;

    ServiceUpdateStatus m_serviceUpdateStatus;
    bool m_serviceUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_serviceUpdateRecommendedApplyByDate;
    bool m_serviceUpdateRecommendedApplyByDateHasBeenSet = false;

    ServiceUpdateType m_serviceUpdateType;
    bool m_serviceUpdateTypeHasBeenSet = false;

    Aws::Utils::DateTime m_updateActionAvailableDate;
    bool m_updateActionAvailableDateHasBeenSet = false;

    UpdateActionStatus m_updateActionStatus;
    bool m_updateActionStatusHasBeenSet = false;

    Aws::String m_nodesUpdated;
    bool m_nodesUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_updateActionStatusModifiedDate;
    bool m_updateActionStatusModifiedDateHasBeenSet = false;

    SlaMet m_slaMet;
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
