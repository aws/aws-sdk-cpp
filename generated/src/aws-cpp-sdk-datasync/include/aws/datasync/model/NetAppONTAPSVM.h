/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/MaxP95Performance.h>
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
   * <p>The information that DataSync Discovery collects about a storage virtual
   * machine (SVM) in your on-premises storage system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/NetAppONTAPSVM">AWS
   * API Reference</a></p>
   */
  class NetAppONTAPSVM
  {
  public:
    AWS_DATASYNC_API NetAppONTAPSVM();
    AWS_DATASYNC_API NetAppONTAPSVM(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API NetAppONTAPSVM& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the cluster associated with the
     * SVM.</p>
     */
    inline const Aws::String& GetClusterUuid() const{ return m_clusterUuid; }
    inline bool ClusterUuidHasBeenSet() const { return m_clusterUuidHasBeenSet; }
    inline void SetClusterUuid(const Aws::String& value) { m_clusterUuidHasBeenSet = true; m_clusterUuid = value; }
    inline void SetClusterUuid(Aws::String&& value) { m_clusterUuidHasBeenSet = true; m_clusterUuid = std::move(value); }
    inline void SetClusterUuid(const char* value) { m_clusterUuidHasBeenSet = true; m_clusterUuid.assign(value); }
    inline NetAppONTAPSVM& WithClusterUuid(const Aws::String& value) { SetClusterUuid(value); return *this;}
    inline NetAppONTAPSVM& WithClusterUuid(Aws::String&& value) { SetClusterUuid(std::move(value)); return *this;}
    inline NetAppONTAPSVM& WithClusterUuid(const char* value) { SetClusterUuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UUID of the SVM.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline NetAppONTAPSVM& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline NetAppONTAPSVM& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline NetAppONTAPSVM& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SVM</p>
     */
    inline const Aws::String& GetSvmName() const{ return m_svmName; }
    inline bool SvmNameHasBeenSet() const { return m_svmNameHasBeenSet; }
    inline void SetSvmName(const Aws::String& value) { m_svmNameHasBeenSet = true; m_svmName = value; }
    inline void SetSvmName(Aws::String&& value) { m_svmNameHasBeenSet = true; m_svmName = std::move(value); }
    inline void SetSvmName(const char* value) { m_svmNameHasBeenSet = true; m_svmName.assign(value); }
    inline NetAppONTAPSVM& WithSvmName(const Aws::String& value) { SetSvmName(value); return *this;}
    inline NetAppONTAPSVM& WithSvmName(Aws::String&& value) { SetSvmName(std::move(value)); return *this;}
    inline NetAppONTAPSVM& WithSvmName(const char* value) { SetSvmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CIFS shares in the SVM.</p>
     */
    inline long long GetCifsShareCount() const{ return m_cifsShareCount; }
    inline bool CifsShareCountHasBeenSet() const { return m_cifsShareCountHasBeenSet; }
    inline void SetCifsShareCount(long long value) { m_cifsShareCountHasBeenSet = true; m_cifsShareCount = value; }
    inline NetAppONTAPSVM& WithCifsShareCount(long long value) { SetCifsShareCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer protocols (such as NFS) configured for the SVM.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledProtocols() const{ return m_enabledProtocols; }
    inline bool EnabledProtocolsHasBeenSet() const { return m_enabledProtocolsHasBeenSet; }
    inline void SetEnabledProtocols(const Aws::Vector<Aws::String>& value) { m_enabledProtocolsHasBeenSet = true; m_enabledProtocols = value; }
    inline void SetEnabledProtocols(Aws::Vector<Aws::String>&& value) { m_enabledProtocolsHasBeenSet = true; m_enabledProtocols = std::move(value); }
    inline NetAppONTAPSVM& WithEnabledProtocols(const Aws::Vector<Aws::String>& value) { SetEnabledProtocols(value); return *this;}
    inline NetAppONTAPSVM& WithEnabledProtocols(Aws::Vector<Aws::String>&& value) { SetEnabledProtocols(std::move(value)); return *this;}
    inline NetAppONTAPSVM& AddEnabledProtocols(const Aws::String& value) { m_enabledProtocolsHasBeenSet = true; m_enabledProtocols.push_back(value); return *this; }
    inline NetAppONTAPSVM& AddEnabledProtocols(Aws::String&& value) { m_enabledProtocolsHasBeenSet = true; m_enabledProtocols.push_back(std::move(value)); return *this; }
    inline NetAppONTAPSVM& AddEnabledProtocols(const char* value) { m_enabledProtocolsHasBeenSet = true; m_enabledProtocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in the SVM.</p>
     */
    inline long long GetTotalCapacityUsed() const{ return m_totalCapacityUsed; }
    inline bool TotalCapacityUsedHasBeenSet() const { return m_totalCapacityUsedHasBeenSet; }
    inline void SetTotalCapacityUsed(long long value) { m_totalCapacityUsedHasBeenSet = true; m_totalCapacityUsed = value; }
    inline NetAppONTAPSVM& WithTotalCapacityUsed(long long value) { SetTotalCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage space that's available in the SVM.</p>
     */
    inline long long GetTotalCapacityProvisioned() const{ return m_totalCapacityProvisioned; }
    inline bool TotalCapacityProvisionedHasBeenSet() const { return m_totalCapacityProvisionedHasBeenSet; }
    inline void SetTotalCapacityProvisioned(long long value) { m_totalCapacityProvisionedHasBeenSet = true; m_totalCapacityProvisioned = value; }
    inline NetAppONTAPSVM& WithTotalCapacityProvisioned(long long value) { SetTotalCapacityProvisioned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in the SVM without accounting for
     * compression or deduplication.</p>
     */
    inline long long GetTotalLogicalCapacityUsed() const{ return m_totalLogicalCapacityUsed; }
    inline bool TotalLogicalCapacityUsedHasBeenSet() const { return m_totalLogicalCapacityUsedHasBeenSet; }
    inline void SetTotalLogicalCapacityUsed(long long value) { m_totalLogicalCapacityUsedHasBeenSet = true; m_totalLogicalCapacityUsed = value; }
    inline NetAppONTAPSVM& WithTotalLogicalCapacityUsed(long long value) { SetTotalLogicalCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance data that DataSync Discovery collects about the SVM.</p>
     */
    inline const MaxP95Performance& GetMaxP95Performance() const{ return m_maxP95Performance; }
    inline bool MaxP95PerformanceHasBeenSet() const { return m_maxP95PerformanceHasBeenSet; }
    inline void SetMaxP95Performance(const MaxP95Performance& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = value; }
    inline void SetMaxP95Performance(MaxP95Performance&& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = std::move(value); }
    inline NetAppONTAPSVM& WithMaxP95Performance(const MaxP95Performance& value) { SetMaxP95Performance(value); return *this;}
    inline NetAppONTAPSVM& WithMaxP95Performance(MaxP95Performance&& value) { SetMaxP95Performance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the SVM. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendationsHasBeenSet = true; m_recommendations = value; }
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::move(value); }
    inline NetAppONTAPSVM& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}
    inline NetAppONTAPSVM& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}
    inline NetAppONTAPSVM& AddRecommendations(const Recommendation& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(value); return *this; }
    inline NetAppONTAPSVM& AddRecommendations(Recommendation&& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of NFS volumes in the SVM.</p>
     */
    inline long long GetNfsExportedVolumes() const{ return m_nfsExportedVolumes; }
    inline bool NfsExportedVolumesHasBeenSet() const { return m_nfsExportedVolumesHasBeenSet; }
    inline void SetNfsExportedVolumes(long long value) { m_nfsExportedVolumesHasBeenSet = true; m_nfsExportedVolumes = value; }
    inline NetAppONTAPSVM& WithNfsExportedVolumes(long long value) { SetNfsExportedVolumes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DataSync Discovery recommendations for the SVM are ready to
     * view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline const RecommendationStatus& GetRecommendationStatus() const{ return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(const RecommendationStatus& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline void SetRecommendationStatus(RecommendationStatus&& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = std::move(value); }
    inline NetAppONTAPSVM& WithRecommendationStatus(const RecommendationStatus& value) { SetRecommendationStatus(value); return *this;}
    inline NetAppONTAPSVM& WithRecommendationStatus(RecommendationStatus&& value) { SetRecommendationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in the SVM that's being used for snapshots.</p>
     */
    inline long long GetTotalSnapshotCapacityUsed() const{ return m_totalSnapshotCapacityUsed; }
    inline bool TotalSnapshotCapacityUsedHasBeenSet() const { return m_totalSnapshotCapacityUsedHasBeenSet; }
    inline void SetTotalSnapshotCapacityUsed(long long value) { m_totalSnapshotCapacityUsedHasBeenSet = true; m_totalSnapshotCapacityUsed = value; }
    inline NetAppONTAPSVM& WithTotalSnapshotCapacityUsed(long long value) { SetTotalSnapshotCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of LUNs (logical unit numbers) in the SVM.</p>
     */
    inline long long GetLunCount() const{ return m_lunCount; }
    inline bool LunCountHasBeenSet() const { return m_lunCountHasBeenSet; }
    inline void SetLunCount(long long value) { m_lunCountHasBeenSet = true; m_lunCount = value; }
    inline NetAppONTAPSVM& WithLunCount(long long value) { SetLunCount(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterUuid;
    bool m_clusterUuidHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_svmName;
    bool m_svmNameHasBeenSet = false;

    long long m_cifsShareCount;
    bool m_cifsShareCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledProtocols;
    bool m_enabledProtocolsHasBeenSet = false;

    long long m_totalCapacityUsed;
    bool m_totalCapacityUsedHasBeenSet = false;

    long long m_totalCapacityProvisioned;
    bool m_totalCapacityProvisionedHasBeenSet = false;

    long long m_totalLogicalCapacityUsed;
    bool m_totalLogicalCapacityUsedHasBeenSet = false;

    MaxP95Performance m_maxP95Performance;
    bool m_maxP95PerformanceHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    long long m_nfsExportedVolumes;
    bool m_nfsExportedVolumesHasBeenSet = false;

    RecommendationStatus m_recommendationStatus;
    bool m_recommendationStatusHasBeenSet = false;

    long long m_totalSnapshotCapacityUsed;
    bool m_totalSnapshotCapacityUsedHasBeenSet = false;

    long long m_lunCount;
    bool m_lunCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
