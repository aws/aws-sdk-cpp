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
    AWS_DATASYNC_API NetAppONTAPSVM() = default;
    AWS_DATASYNC_API NetAppONTAPSVM(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API NetAppONTAPSVM& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the cluster associated with the
     * SVM.</p>
     */
    inline const Aws::String& GetClusterUuid() const { return m_clusterUuid; }
    inline bool ClusterUuidHasBeenSet() const { return m_clusterUuidHasBeenSet; }
    template<typename ClusterUuidT = Aws::String>
    void SetClusterUuid(ClusterUuidT&& value) { m_clusterUuidHasBeenSet = true; m_clusterUuid = std::forward<ClusterUuidT>(value); }
    template<typename ClusterUuidT = Aws::String>
    NetAppONTAPSVM& WithClusterUuid(ClusterUuidT&& value) { SetClusterUuid(std::forward<ClusterUuidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UUID of the SVM.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    NetAppONTAPSVM& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SVM</p>
     */
    inline const Aws::String& GetSvmName() const { return m_svmName; }
    inline bool SvmNameHasBeenSet() const { return m_svmNameHasBeenSet; }
    template<typename SvmNameT = Aws::String>
    void SetSvmName(SvmNameT&& value) { m_svmNameHasBeenSet = true; m_svmName = std::forward<SvmNameT>(value); }
    template<typename SvmNameT = Aws::String>
    NetAppONTAPSVM& WithSvmName(SvmNameT&& value) { SetSvmName(std::forward<SvmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CIFS shares in the SVM.</p>
     */
    inline long long GetCifsShareCount() const { return m_cifsShareCount; }
    inline bool CifsShareCountHasBeenSet() const { return m_cifsShareCountHasBeenSet; }
    inline void SetCifsShareCount(long long value) { m_cifsShareCountHasBeenSet = true; m_cifsShareCount = value; }
    inline NetAppONTAPSVM& WithCifsShareCount(long long value) { SetCifsShareCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer protocols (such as NFS) configured for the SVM.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledProtocols() const { return m_enabledProtocols; }
    inline bool EnabledProtocolsHasBeenSet() const { return m_enabledProtocolsHasBeenSet; }
    template<typename EnabledProtocolsT = Aws::Vector<Aws::String>>
    void SetEnabledProtocols(EnabledProtocolsT&& value) { m_enabledProtocolsHasBeenSet = true; m_enabledProtocols = std::forward<EnabledProtocolsT>(value); }
    template<typename EnabledProtocolsT = Aws::Vector<Aws::String>>
    NetAppONTAPSVM& WithEnabledProtocols(EnabledProtocolsT&& value) { SetEnabledProtocols(std::forward<EnabledProtocolsT>(value)); return *this;}
    template<typename EnabledProtocolsT = Aws::String>
    NetAppONTAPSVM& AddEnabledProtocols(EnabledProtocolsT&& value) { m_enabledProtocolsHasBeenSet = true; m_enabledProtocols.emplace_back(std::forward<EnabledProtocolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in the SVM.</p>
     */
    inline long long GetTotalCapacityUsed() const { return m_totalCapacityUsed; }
    inline bool TotalCapacityUsedHasBeenSet() const { return m_totalCapacityUsedHasBeenSet; }
    inline void SetTotalCapacityUsed(long long value) { m_totalCapacityUsedHasBeenSet = true; m_totalCapacityUsed = value; }
    inline NetAppONTAPSVM& WithTotalCapacityUsed(long long value) { SetTotalCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage space that's available in the SVM.</p>
     */
    inline long long GetTotalCapacityProvisioned() const { return m_totalCapacityProvisioned; }
    inline bool TotalCapacityProvisionedHasBeenSet() const { return m_totalCapacityProvisionedHasBeenSet; }
    inline void SetTotalCapacityProvisioned(long long value) { m_totalCapacityProvisionedHasBeenSet = true; m_totalCapacityProvisioned = value; }
    inline NetAppONTAPSVM& WithTotalCapacityProvisioned(long long value) { SetTotalCapacityProvisioned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in the SVM without accounting for
     * compression or deduplication.</p>
     */
    inline long long GetTotalLogicalCapacityUsed() const { return m_totalLogicalCapacityUsed; }
    inline bool TotalLogicalCapacityUsedHasBeenSet() const { return m_totalLogicalCapacityUsedHasBeenSet; }
    inline void SetTotalLogicalCapacityUsed(long long value) { m_totalLogicalCapacityUsedHasBeenSet = true; m_totalLogicalCapacityUsed = value; }
    inline NetAppONTAPSVM& WithTotalLogicalCapacityUsed(long long value) { SetTotalLogicalCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance data that DataSync Discovery collects about the SVM.</p>
     */
    inline const MaxP95Performance& GetMaxP95Performance() const { return m_maxP95Performance; }
    inline bool MaxP95PerformanceHasBeenSet() const { return m_maxP95PerformanceHasBeenSet; }
    template<typename MaxP95PerformanceT = MaxP95Performance>
    void SetMaxP95Performance(MaxP95PerformanceT&& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = std::forward<MaxP95PerformanceT>(value); }
    template<typename MaxP95PerformanceT = MaxP95Performance>
    NetAppONTAPSVM& WithMaxP95Performance(MaxP95PerformanceT&& value) { SetMaxP95Performance(std::forward<MaxP95PerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the SVM. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    NetAppONTAPSVM& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = Recommendation>
    NetAppONTAPSVM& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of NFS volumes in the SVM.</p>
     */
    inline long long GetNfsExportedVolumes() const { return m_nfsExportedVolumes; }
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
    inline RecommendationStatus GetRecommendationStatus() const { return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(RecommendationStatus value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline NetAppONTAPSVM& WithRecommendationStatus(RecommendationStatus value) { SetRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in the SVM that's being used for snapshots.</p>
     */
    inline long long GetTotalSnapshotCapacityUsed() const { return m_totalSnapshotCapacityUsed; }
    inline bool TotalSnapshotCapacityUsedHasBeenSet() const { return m_totalSnapshotCapacityUsedHasBeenSet; }
    inline void SetTotalSnapshotCapacityUsed(long long value) { m_totalSnapshotCapacityUsedHasBeenSet = true; m_totalSnapshotCapacityUsed = value; }
    inline NetAppONTAPSVM& WithTotalSnapshotCapacityUsed(long long value) { SetTotalSnapshotCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of LUNs (logical unit numbers) in the SVM.</p>
     */
    inline long long GetLunCount() const { return m_lunCount; }
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

    long long m_cifsShareCount{0};
    bool m_cifsShareCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledProtocols;
    bool m_enabledProtocolsHasBeenSet = false;

    long long m_totalCapacityUsed{0};
    bool m_totalCapacityUsedHasBeenSet = false;

    long long m_totalCapacityProvisioned{0};
    bool m_totalCapacityProvisionedHasBeenSet = false;

    long long m_totalLogicalCapacityUsed{0};
    bool m_totalLogicalCapacityUsedHasBeenSet = false;

    MaxP95Performance m_maxP95Performance;
    bool m_maxP95PerformanceHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    long long m_nfsExportedVolumes{0};
    bool m_nfsExportedVolumesHasBeenSet = false;

    RecommendationStatus m_recommendationStatus{RecommendationStatus::NOT_SET};
    bool m_recommendationStatusHasBeenSet = false;

    long long m_totalSnapshotCapacityUsed{0};
    bool m_totalSnapshotCapacityUsedHasBeenSet = false;

    long long m_lunCount{0};
    bool m_lunCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
