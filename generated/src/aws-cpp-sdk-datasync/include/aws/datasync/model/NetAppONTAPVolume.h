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
   * <p>The information that DataSync Discovery collects about a volume in your
   * on-premises storage system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/NetAppONTAPVolume">AWS
   * API Reference</a></p>
   */
  class NetAppONTAPVolume
  {
  public:
    AWS_DATASYNC_API NetAppONTAPVolume() = default;
    AWS_DATASYNC_API NetAppONTAPVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API NetAppONTAPVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the volume.</p>
     */
    inline const Aws::String& GetVolumeName() const { return m_volumeName; }
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
    template<typename VolumeNameT = Aws::String>
    void SetVolumeName(VolumeNameT&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::forward<VolumeNameT>(value); }
    template<typename VolumeNameT = Aws::String>
    NetAppONTAPVolume& WithVolumeName(VolumeNameT&& value) { SetVolumeName(std::forward<VolumeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    NetAppONTAPVolume& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CIFS shares in the volume.</p>
     */
    inline long long GetCifsShareCount() const { return m_cifsShareCount; }
    inline bool CifsShareCountHasBeenSet() const { return m_cifsShareCountHasBeenSet; }
    inline void SetCifsShareCount(long long value) { m_cifsShareCountHasBeenSet = true; m_cifsShareCount = value; }
    inline NetAppONTAPVolume& WithCifsShareCount(long long value) { SetCifsShareCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline const Aws::String& GetSecurityStyle() const { return m_securityStyle; }
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }
    template<typename SecurityStyleT = Aws::String>
    void SetSecurityStyle(SecurityStyleT&& value) { m_securityStyleHasBeenSet = true; m_securityStyle = std::forward<SecurityStyleT>(value); }
    template<typename SecurityStyleT = Aws::String>
    NetAppONTAPVolume& WithSecurityStyle(SecurityStyleT&& value) { SetSecurityStyle(std::forward<SecurityStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline const Aws::String& GetSvmUuid() const { return m_svmUuid; }
    inline bool SvmUuidHasBeenSet() const { return m_svmUuidHasBeenSet; }
    template<typename SvmUuidT = Aws::String>
    void SetSvmUuid(SvmUuidT&& value) { m_svmUuidHasBeenSet = true; m_svmUuid = std::forward<SvmUuidT>(value); }
    template<typename SvmUuidT = Aws::String>
    NetAppONTAPVolume& WithSvmUuid(SvmUuidT&& value) { SetSvmUuid(std::forward<SvmUuidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline const Aws::String& GetSvmName() const { return m_svmName; }
    inline bool SvmNameHasBeenSet() const { return m_svmNameHasBeenSet; }
    template<typename SvmNameT = Aws::String>
    void SetSvmName(SvmNameT&& value) { m_svmNameHasBeenSet = true; m_svmName = std::forward<SvmNameT>(value); }
    template<typename SvmNameT = Aws::String>
    NetAppONTAPVolume& WithSvmName(SvmNameT&& value) { SetSvmName(std::forward<SvmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in the volume.</p>
     */
    inline long long GetCapacityUsed() const { return m_capacityUsed; }
    inline bool CapacityUsedHasBeenSet() const { return m_capacityUsedHasBeenSet; }
    inline void SetCapacityUsed(long long value) { m_capacityUsedHasBeenSet = true; m_capacityUsed = value; }
    inline NetAppONTAPVolume& WithCapacityUsed(long long value) { SetCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage space that's available in the volume.</p>
     */
    inline long long GetCapacityProvisioned() const { return m_capacityProvisioned; }
    inline bool CapacityProvisionedHasBeenSet() const { return m_capacityProvisionedHasBeenSet; }
    inline void SetCapacityProvisioned(long long value) { m_capacityProvisionedHasBeenSet = true; m_capacityProvisioned = value; }
    inline NetAppONTAPVolume& WithCapacityProvisioned(long long value) { SetCapacityProvisioned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage space that's being used in the volume without accounting for
     * compression or deduplication.</p>
     */
    inline long long GetLogicalCapacityUsed() const { return m_logicalCapacityUsed; }
    inline bool LogicalCapacityUsedHasBeenSet() const { return m_logicalCapacityUsedHasBeenSet; }
    inline void SetLogicalCapacityUsed(long long value) { m_logicalCapacityUsedHasBeenSet = true; m_logicalCapacityUsed = value; }
    inline NetAppONTAPVolume& WithLogicalCapacityUsed(long long value) { SetLogicalCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of NFS volumes in the volume.</p>
     */
    inline bool GetNfsExported() const { return m_nfsExported; }
    inline bool NfsExportedHasBeenSet() const { return m_nfsExportedHasBeenSet; }
    inline void SetNfsExported(bool value) { m_nfsExportedHasBeenSet = true; m_nfsExported = value; }
    inline NetAppONTAPVolume& WithNfsExported(bool value) { SetNfsExported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage in the volume that's being used for snapshots.</p>
     */
    inline long long GetSnapshotCapacityUsed() const { return m_snapshotCapacityUsed; }
    inline bool SnapshotCapacityUsedHasBeenSet() const { return m_snapshotCapacityUsedHasBeenSet; }
    inline void SetSnapshotCapacityUsed(long long value) { m_snapshotCapacityUsedHasBeenSet = true; m_snapshotCapacityUsed = value; }
    inline NetAppONTAPVolume& WithSnapshotCapacityUsed(long long value) { SetSnapshotCapacityUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance data that DataSync Discovery collects about the volume.</p>
     */
    inline const MaxP95Performance& GetMaxP95Performance() const { return m_maxP95Performance; }
    inline bool MaxP95PerformanceHasBeenSet() const { return m_maxP95PerformanceHasBeenSet; }
    template<typename MaxP95PerformanceT = MaxP95Performance>
    void SetMaxP95Performance(MaxP95PerformanceT&& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = std::forward<MaxP95PerformanceT>(value); }
    template<typename MaxP95PerformanceT = MaxP95Performance>
    NetAppONTAPVolume& WithMaxP95Performance(MaxP95PerformanceT&& value) { SetMaxP95Performance(std::forward<MaxP95PerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    NetAppONTAPVolume& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = Recommendation>
    NetAppONTAPVolume& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether DataSync Discovery recommendations for the volume are ready
     * to view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline RecommendationStatus GetRecommendationStatus() const { return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(RecommendationStatus value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline NetAppONTAPVolume& WithRecommendationStatus(RecommendationStatus value) { SetRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of LUNs (logical unit numbers) in the volume.</p>
     */
    inline long long GetLunCount() const { return m_lunCount; }
    inline bool LunCountHasBeenSet() const { return m_lunCountHasBeenSet; }
    inline void SetLunCount(long long value) { m_lunCountHasBeenSet = true; m_lunCount = value; }
    inline NetAppONTAPVolume& WithLunCount(long long value) { SetLunCount(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    long long m_cifsShareCount{0};
    bool m_cifsShareCountHasBeenSet = false;

    Aws::String m_securityStyle;
    bool m_securityStyleHasBeenSet = false;

    Aws::String m_svmUuid;
    bool m_svmUuidHasBeenSet = false;

    Aws::String m_svmName;
    bool m_svmNameHasBeenSet = false;

    long long m_capacityUsed{0};
    bool m_capacityUsedHasBeenSet = false;

    long long m_capacityProvisioned{0};
    bool m_capacityProvisionedHasBeenSet = false;

    long long m_logicalCapacityUsed{0};
    bool m_logicalCapacityUsedHasBeenSet = false;

    bool m_nfsExported{false};
    bool m_nfsExportedHasBeenSet = false;

    long long m_snapshotCapacityUsed{0};
    bool m_snapshotCapacityUsedHasBeenSet = false;

    MaxP95Performance m_maxP95Performance;
    bool m_maxP95PerformanceHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    RecommendationStatus m_recommendationStatus{RecommendationStatus::NOT_SET};
    bool m_recommendationStatusHasBeenSet = false;

    long long m_lunCount{0};
    bool m_lunCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
