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
    AWS_DATASYNC_API NetAppONTAPCluster();
    AWS_DATASYNC_API NetAppONTAPCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API NetAppONTAPCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of CIFS shares in the cluster.</p>
     */
    inline long long GetCifsShareCount() const{ return m_cifsShareCount; }

    /**
     * <p>The number of CIFS shares in the cluster.</p>
     */
    inline bool CifsShareCountHasBeenSet() const { return m_cifsShareCountHasBeenSet; }

    /**
     * <p>The number of CIFS shares in the cluster.</p>
     */
    inline void SetCifsShareCount(long long value) { m_cifsShareCountHasBeenSet = true; m_cifsShareCount = value; }

    /**
     * <p>The number of CIFS shares in the cluster.</p>
     */
    inline NetAppONTAPCluster& WithCifsShareCount(long long value) { SetCifsShareCount(value); return *this;}


    /**
     * <p>The number of NFS volumes in the cluster.</p>
     */
    inline long long GetNfsExportedVolumes() const{ return m_nfsExportedVolumes; }

    /**
     * <p>The number of NFS volumes in the cluster.</p>
     */
    inline bool NfsExportedVolumesHasBeenSet() const { return m_nfsExportedVolumesHasBeenSet; }

    /**
     * <p>The number of NFS volumes in the cluster.</p>
     */
    inline void SetNfsExportedVolumes(long long value) { m_nfsExportedVolumesHasBeenSet = true; m_nfsExportedVolumes = value; }

    /**
     * <p>The number of NFS volumes in the cluster.</p>
     */
    inline NetAppONTAPCluster& WithNfsExportedVolumes(long long value) { SetNfsExportedVolumes(value); return *this;}


    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline NetAppONTAPCluster& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline NetAppONTAPCluster& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of the cluster.</p>
     */
    inline NetAppONTAPCluster& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline NetAppONTAPCluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline NetAppONTAPCluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline NetAppONTAPCluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The performance data that DataSync Discovery collects about the cluster.</p>
     */
    inline const MaxP95Performance& GetMaxP95Performance() const{ return m_maxP95Performance; }

    /**
     * <p>The performance data that DataSync Discovery collects about the cluster.</p>
     */
    inline bool MaxP95PerformanceHasBeenSet() const { return m_maxP95PerformanceHasBeenSet; }

    /**
     * <p>The performance data that DataSync Discovery collects about the cluster.</p>
     */
    inline void SetMaxP95Performance(const MaxP95Performance& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = value; }

    /**
     * <p>The performance data that DataSync Discovery collects about the cluster.</p>
     */
    inline void SetMaxP95Performance(MaxP95Performance&& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = std::move(value); }

    /**
     * <p>The performance data that DataSync Discovery collects about the cluster.</p>
     */
    inline NetAppONTAPCluster& WithMaxP95Performance(const MaxP95Performance& value) { SetMaxP95Performance(value); return *this;}

    /**
     * <p>The performance data that DataSync Discovery collects about the cluster.</p>
     */
    inline NetAppONTAPCluster& WithMaxP95Performance(MaxP95Performance&& value) { SetMaxP95Performance(std::move(value)); return *this;}


    /**
     * <p>The total storage space that's available in the cluster.</p>
     */
    inline long long GetClusterBlockStorageSize() const{ return m_clusterBlockStorageSize; }

    /**
     * <p>The total storage space that's available in the cluster.</p>
     */
    inline bool ClusterBlockStorageSizeHasBeenSet() const { return m_clusterBlockStorageSizeHasBeenSet; }

    /**
     * <p>The total storage space that's available in the cluster.</p>
     */
    inline void SetClusterBlockStorageSize(long long value) { m_clusterBlockStorageSizeHasBeenSet = true; m_clusterBlockStorageSize = value; }

    /**
     * <p>The total storage space that's available in the cluster.</p>
     */
    inline NetAppONTAPCluster& WithClusterBlockStorageSize(long long value) { SetClusterBlockStorageSize(value); return *this;}


    /**
     * <p>The storage space that's being used in a cluster.</p>
     */
    inline long long GetClusterBlockStorageUsed() const{ return m_clusterBlockStorageUsed; }

    /**
     * <p>The storage space that's being used in a cluster.</p>
     */
    inline bool ClusterBlockStorageUsedHasBeenSet() const { return m_clusterBlockStorageUsedHasBeenSet; }

    /**
     * <p>The storage space that's being used in a cluster.</p>
     */
    inline void SetClusterBlockStorageUsed(long long value) { m_clusterBlockStorageUsedHasBeenSet = true; m_clusterBlockStorageUsed = value; }

    /**
     * <p>The storage space that's being used in a cluster.</p>
     */
    inline NetAppONTAPCluster& WithClusterBlockStorageUsed(long long value) { SetClusterBlockStorageUsed(value); return *this;}


    /**
     * <p>The storage space that's being used in the cluster without accounting for
     * compression or deduplication.</p>
     */
    inline long long GetClusterBlockStorageLogicalUsed() const{ return m_clusterBlockStorageLogicalUsed; }

    /**
     * <p>The storage space that's being used in the cluster without accounting for
     * compression or deduplication.</p>
     */
    inline bool ClusterBlockStorageLogicalUsedHasBeenSet() const { return m_clusterBlockStorageLogicalUsedHasBeenSet; }

    /**
     * <p>The storage space that's being used in the cluster without accounting for
     * compression or deduplication.</p>
     */
    inline void SetClusterBlockStorageLogicalUsed(long long value) { m_clusterBlockStorageLogicalUsedHasBeenSet = true; m_clusterBlockStorageLogicalUsed = value; }

    /**
     * <p>The storage space that's being used in the cluster without accounting for
     * compression or deduplication.</p>
     */
    inline NetAppONTAPCluster& WithClusterBlockStorageLogicalUsed(long long value) { SetClusterBlockStorageLogicalUsed(value); return *this;}


    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendationsHasBeenSet = true; m_recommendations = value; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::move(value); }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPCluster& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPCluster& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPCluster& AddRecommendations(const Recommendation& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPCluster& AddRecommendations(Recommendation&& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether DataSync Discovery recommendations for the cluster are
     * ready to view, incomplete, or can't be determined.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline const RecommendationStatus& GetRecommendationStatus() const{ return m_recommendationStatus; }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the cluster are
     * ready to view, incomplete, or can't be determined.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the cluster are
     * ready to view, incomplete, or can't be determined.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline void SetRecommendationStatus(const RecommendationStatus& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the cluster are
     * ready to view, incomplete, or can't be determined.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline void SetRecommendationStatus(RecommendationStatus&& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = std::move(value); }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the cluster are
     * ready to view, incomplete, or can't be determined.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline NetAppONTAPCluster& WithRecommendationStatus(const RecommendationStatus& value) { SetRecommendationStatus(value); return *this;}

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the cluster are
     * ready to view, incomplete, or can't be determined.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline NetAppONTAPCluster& WithRecommendationStatus(RecommendationStatus&& value) { SetRecommendationStatus(std::move(value)); return *this;}


    /**
     * <p>The number of LUNs (logical unit numbers) in the cluster.</p>
     */
    inline long long GetLunCount() const{ return m_lunCount; }

    /**
     * <p>The number of LUNs (logical unit numbers) in the cluster.</p>
     */
    inline bool LunCountHasBeenSet() const { return m_lunCountHasBeenSet; }

    /**
     * <p>The number of LUNs (logical unit numbers) in the cluster.</p>
     */
    inline void SetLunCount(long long value) { m_lunCountHasBeenSet = true; m_lunCount = value; }

    /**
     * <p>The number of LUNs (logical unit numbers) in the cluster.</p>
     */
    inline NetAppONTAPCluster& WithLunCount(long long value) { SetLunCount(value); return *this;}


    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline long long GetClusterCloudStorageUsed() const{ return m_clusterCloudStorageUsed; }

    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline bool ClusterCloudStorageUsedHasBeenSet() const { return m_clusterCloudStorageUsedHasBeenSet; }

    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline void SetClusterCloudStorageUsed(long long value) { m_clusterCloudStorageUsedHasBeenSet = true; m_clusterCloudStorageUsed = value; }

    /**
     * <p>The amount of space in the cluster that's in cloud storage (for example, if
     * you're using data tiering).</p>
     */
    inline NetAppONTAPCluster& WithClusterCloudStorageUsed(long long value) { SetClusterCloudStorageUsed(value); return *this;}

  private:

    long long m_cifsShareCount;
    bool m_cifsShareCountHasBeenSet = false;

    long long m_nfsExportedVolumes;
    bool m_nfsExportedVolumesHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    MaxP95Performance m_maxP95Performance;
    bool m_maxP95PerformanceHasBeenSet = false;

    long long m_clusterBlockStorageSize;
    bool m_clusterBlockStorageSizeHasBeenSet = false;

    long long m_clusterBlockStorageUsed;
    bool m_clusterBlockStorageUsedHasBeenSet = false;

    long long m_clusterBlockStorageLogicalUsed;
    bool m_clusterBlockStorageLogicalUsedHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    RecommendationStatus m_recommendationStatus;
    bool m_recommendationStatusHasBeenSet = false;

    long long m_lunCount;
    bool m_lunCountHasBeenSet = false;

    long long m_clusterCloudStorageUsed;
    bool m_clusterCloudStorageUsedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
