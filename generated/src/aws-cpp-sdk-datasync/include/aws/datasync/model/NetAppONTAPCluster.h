/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/MaxP95Performance.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/RecommendationStatus.h>
#include <aws/datasync/model/Recommendation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{

  /**
   * <p>The information that DataSync Discovery collects about an on-premises storage
   * system cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/NetAppONTAPCluster">AWS
   * API Reference</a></p>
   */
  class NetAppONTAPCluster
  {
  public:
    AWS_DATASYNC_API NetAppONTAPCluster() = default;
    AWS_DATASYNC_API NetAppONTAPCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API NetAppONTAPCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of CIFS shares in the cluster.</p>
     */
    inline long long GetCifsShareCount() const { return m_cifsShareCount; }
    inline bool CifsShareCountHasBeenSet() const { return m_cifsShareCountHasBeenSet; }
    inline void SetCifsShareCount(long long value) { m_cifsShareCountHasBeenSet = true; m_cifsShareCount = value; }
    inline NetAppONTAPCluster& WithCifsShareCount(long long value) { SetCifsShareCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of NFS volumes in the cluster.</p>
     */
    inline long long GetNfsExportedVolumes() const { return m_nfsExportedVolumes; }
    inline bool NfsExportedVolumesHasBeenSet() const { return m_nfsExportedVolumesHasBeenSet; }
    inline void SetNfsExportedVolumes(long long value) { m_nfsExportedVolumesHasBeenSet = true; m_nfsExportedVolumes = value; }
    inline NetAppONTAPCluster& WithNfsExportedVolumes(long long value) { SetNfsExportedVolumes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    NetAppONTAPCluster& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    NetAppONTAPCluster& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance data that DataSync Discovery collects about the cluster.</p>
     */
    inline const MaxP95Performance& GetMaxP95Performance() const { return m_maxP95Performance; }
    inline bool MaxP95PerformanceHasBeenSet() const { return m_maxP95PerformanceHasBeenSet; }
    template<typename MaxP95PerformanceT = MaxP95Performance>
    void SetMaxP95Performance(MaxP95PerformanceT&& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = std::forward<MaxP95PerformanceT>(value); }
    template<typename MaxP95PerformanceT = MaxP95Performance>
    NetAppONTAPCluster& WithMaxP95Performance(MaxP95PerformanceT&& value) { SetMaxP95Performance(std::forward<MaxP95PerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage space that's available in the cluster.</p>
     */
    inline long long GetClusterBlockStorageSize() const { return m_clusterBlockStorageSize; }
    inline bool ClusterBlockStorageSizeHasBeenSet() const { return m_clusterBlockStorageSizeHasBeenSet; }
    inline void SetClusterBlockStorageSize(long long value) { m_clusterBlockStorageSizeHasBeenSet = true; m_clusterBlockStorageSize = value; }
    inline NetAppONTAPCluster& WithClusterBlockStorageSize(long long value) { SetClusterBlockStorageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in a cluster.</p>
     */
    inline long long GetClusterBlockStorageUsed() const { return m_clusterBlockStorageUsed; }
    inline bool ClusterBlockStorageUsedHasBeenSet() const { return m_clusterBlockStorageUsedHasBeenSet; }
    inline void SetClusterBlockStorageUsed(long long value) { m_clusterBlockStorageUsedHasBeenSet = true; m_clusterBlockStorageUsed = value; }
    inline NetAppONTAPCluster& WithClusterBlockStorageUsed(long long value) { SetClusterBlockStorageUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in the cluster without accounting for
     * compression or deduplication.</p>
     */
    inline long long GetClusterBlockStorageLogicalUsed() const { return m_clusterBlockStorageLogicalUsed; }
    inline bool ClusterBlockStorageLogicalUsedHasBeenSet() const { return m_clusterBlockStorageLogicalUsedHasBeenSet; }
    inline void SetClusterBlockStorageLogicalUsed(long long value) { m_clusterBlockStorageLogicalUsedHasBeenSet = true; m_clusterBlockStorageLogicalUsed = value; }
    inline NetAppONTAPCluster& WithClusterBlockStorageLogicalUsed(long long value) { SetClusterBlockStorageLogicalUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    NetAppONTAPCluster& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = Recommendation>
    NetAppONTAPCluster& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether DataSync Discovery recommendations for the cluster are
     * ready to view, incomplete, or can't be determined.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline RecommendationStatus GetRecommendationStatus() const { return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(RecommendationStatus value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline NetAppONTAPCluster& WithRecommendationStatus(RecommendationStatus value) { SetRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of LUNs (logical unit numbers) in the cluster.</p>
     */
    inline long long GetLunCount() const { return m_lunCount; }
    inline bool LunCountHasBeenSet() const { return m_lunCountHasBeenSet; }
    inline void SetLunCount(long long value) { m_lunCountHasBeenSet = true; m_lunCount = value; }
    inline NetAppONTAPCluster& WithLunCount(long long value) { SetLunCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline long long GetClusterCloudStorageUsed() const { return m_clusterCloudStorageUsed; }
    inline bool ClusterCloudStorageUsedHasBeenSet() const { return m_clusterCloudStorageUsedHasBeenSet; }
    inline void SetClusterCloudStorageUsed(long long value) { m_clusterCloudStorageUsedHasBeenSet = true; m_clusterCloudStorageUsed = value; }
    inline NetAppONTAPCluster& WithClusterCloudStorageUsed(long long value) { SetClusterCloudStorageUsed(value); return *this;}
    ///@}
  private:

    long long m_cifsShareCount{0};
    bool m_cifsShareCountHasBeenSet = false;

    long long m_nfsExportedVolumes{0};
    bool m_nfsExportedVolumesHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    MaxP95Performance m_maxP95Performance;
    bool m_maxP95PerformanceHasBeenSet = false;

    long long m_clusterBlockStorageSize{0};
    bool m_clusterBlockStorageSizeHasBeenSet = false;

    long long m_clusterBlockStorageUsed{0};
    bool m_clusterBlockStorageUsedHasBeenSet = false;

    long long m_clusterBlockStorageLogicalUsed{0};
    bool m_clusterBlockStorageLogicalUsedHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    RecommendationStatus m_recommendationStatus{RecommendationStatus::NOT_SET};
    bool m_recommendationStatusHasBeenSet = false;

    long long m_lunCount{0};
    bool m_lunCountHasBeenSet = false;

    long long m_clusterCloudStorageUsed{0};
    bool m_clusterCloudStorageUsedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
