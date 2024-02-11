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
    AWS_DATASYNC_API NetAppONTAPVolume();
    AWS_DATASYNC_API NetAppONTAPVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API NetAppONTAPVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume.</p>
     */
    inline const Aws::String& GetVolumeName() const{ return m_volumeName; }

    /**
     * <p>The name of the volume.</p>
     */
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }

    /**
     * <p>The name of the volume.</p>
     */
    inline void SetVolumeName(const Aws::String& value) { m_volumeNameHasBeenSet = true; m_volumeName = value; }

    /**
     * <p>The name of the volume.</p>
     */
    inline void SetVolumeName(Aws::String&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::move(value); }

    /**
     * <p>The name of the volume.</p>
     */
    inline void SetVolumeName(const char* value) { m_volumeNameHasBeenSet = true; m_volumeName.assign(value); }

    /**
     * <p>The name of the volume.</p>
     */
    inline NetAppONTAPVolume& WithVolumeName(const Aws::String& value) { SetVolumeName(value); return *this;}

    /**
     * <p>The name of the volume.</p>
     */
    inline NetAppONTAPVolume& WithVolumeName(Aws::String&& value) { SetVolumeName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume.</p>
     */
    inline NetAppONTAPVolume& WithVolumeName(const char* value) { SetVolumeName(value); return *this;}


    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline NetAppONTAPVolume& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline NetAppONTAPVolume& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of the volume.</p>
     */
    inline NetAppONTAPVolume& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The number of CIFS shares in the volume.</p>
     */
    inline long long GetCifsShareCount() const{ return m_cifsShareCount; }

    /**
     * <p>The number of CIFS shares in the volume.</p>
     */
    inline bool CifsShareCountHasBeenSet() const { return m_cifsShareCountHasBeenSet; }

    /**
     * <p>The number of CIFS shares in the volume.</p>
     */
    inline void SetCifsShareCount(long long value) { m_cifsShareCountHasBeenSet = true; m_cifsShareCount = value; }

    /**
     * <p>The number of CIFS shares in the volume.</p>
     */
    inline NetAppONTAPVolume& WithCifsShareCount(long long value) { SetCifsShareCount(value); return *this;}


    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline const Aws::String& GetSecurityStyle() const{ return m_securityStyle; }

    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }

    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline void SetSecurityStyle(const Aws::String& value) { m_securityStyleHasBeenSet = true; m_securityStyle = value; }

    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline void SetSecurityStyle(Aws::String&& value) { m_securityStyleHasBeenSet = true; m_securityStyle = std::move(value); }

    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline void SetSecurityStyle(const char* value) { m_securityStyleHasBeenSet = true; m_securityStyle.assign(value); }

    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline NetAppONTAPVolume& WithSecurityStyle(const Aws::String& value) { SetSecurityStyle(value); return *this;}

    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline NetAppONTAPVolume& WithSecurityStyle(Aws::String&& value) { SetSecurityStyle(std::move(value)); return *this;}

    /**
     * <p>The volume's security style (such as Unix or NTFS).</p>
     */
    inline NetAppONTAPVolume& WithSecurityStyle(const char* value) { SetSecurityStyle(value); return *this;}


    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline const Aws::String& GetSvmUuid() const{ return m_svmUuid; }

    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline bool SvmUuidHasBeenSet() const { return m_svmUuidHasBeenSet; }

    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline void SetSvmUuid(const Aws::String& value) { m_svmUuidHasBeenSet = true; m_svmUuid = value; }

    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline void SetSvmUuid(Aws::String&& value) { m_svmUuidHasBeenSet = true; m_svmUuid = std::move(value); }

    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline void SetSvmUuid(const char* value) { m_svmUuidHasBeenSet = true; m_svmUuid.assign(value); }

    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline NetAppONTAPVolume& WithSvmUuid(const Aws::String& value) { SetSvmUuid(value); return *this;}

    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline NetAppONTAPVolume& WithSvmUuid(Aws::String&& value) { SetSvmUuid(std::move(value)); return *this;}

    /**
     * <p>The UUID of the storage virtual machine (SVM) associated with the volume.</p>
     */
    inline NetAppONTAPVolume& WithSvmUuid(const char* value) { SetSvmUuid(value); return *this;}


    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline const Aws::String& GetSvmName() const{ return m_svmName; }

    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline bool SvmNameHasBeenSet() const { return m_svmNameHasBeenSet; }

    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline void SetSvmName(const Aws::String& value) { m_svmNameHasBeenSet = true; m_svmName = value; }

    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline void SetSvmName(Aws::String&& value) { m_svmNameHasBeenSet = true; m_svmName = std::move(value); }

    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline void SetSvmName(const char* value) { m_svmNameHasBeenSet = true; m_svmName.assign(value); }

    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline NetAppONTAPVolume& WithSvmName(const Aws::String& value) { SetSvmName(value); return *this;}

    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline NetAppONTAPVolume& WithSvmName(Aws::String&& value) { SetSvmName(std::move(value)); return *this;}

    /**
     * <p>The name of the SVM associated with the volume.</p>
     */
    inline NetAppONTAPVolume& WithSvmName(const char* value) { SetSvmName(value); return *this;}


    /**
     * <p>The storage space that's being used in the volume.</p>
     */
    inline long long GetCapacityUsed() const{ return m_capacityUsed; }

    /**
     * <p>The storage space that's being used in the volume.</p>
     */
    inline bool CapacityUsedHasBeenSet() const { return m_capacityUsedHasBeenSet; }

    /**
     * <p>The storage space that's being used in the volume.</p>
     */
    inline void SetCapacityUsed(long long value) { m_capacityUsedHasBeenSet = true; m_capacityUsed = value; }

    /**
     * <p>The storage space that's being used in the volume.</p>
     */
    inline NetAppONTAPVolume& WithCapacityUsed(long long value) { SetCapacityUsed(value); return *this;}


    /**
     * <p>The total storage space that's available in the volume.</p>
     */
    inline long long GetCapacityProvisioned() const{ return m_capacityProvisioned; }

    /**
     * <p>The total storage space that's available in the volume.</p>
     */
    inline bool CapacityProvisionedHasBeenSet() const { return m_capacityProvisionedHasBeenSet; }

    /**
     * <p>The total storage space that's available in the volume.</p>
     */
    inline void SetCapacityProvisioned(long long value) { m_capacityProvisionedHasBeenSet = true; m_capacityProvisioned = value; }

    /**
     * <p>The total storage space that's available in the volume.</p>
     */
    inline NetAppONTAPVolume& WithCapacityProvisioned(long long value) { SetCapacityProvisioned(value); return *this;}


    /**
     * <p>The storage space that's being used in the volume without accounting for
     * compression or deduplication.</p>
     */
    inline long long GetLogicalCapacityUsed() const{ return m_logicalCapacityUsed; }

    /**
     * <p>The storage space that's being used in the volume without accounting for
     * compression or deduplication.</p>
     */
    inline bool LogicalCapacityUsedHasBeenSet() const { return m_logicalCapacityUsedHasBeenSet; }

    /**
     * <p>The storage space that's being used in the volume without accounting for
     * compression or deduplication.</p>
     */
    inline void SetLogicalCapacityUsed(long long value) { m_logicalCapacityUsedHasBeenSet = true; m_logicalCapacityUsed = value; }

    /**
     * <p>The storage space that's being used in the volume without accounting for
     * compression or deduplication.</p>
     */
    inline NetAppONTAPVolume& WithLogicalCapacityUsed(long long value) { SetLogicalCapacityUsed(value); return *this;}


    /**
     * <p>The number of NFS volumes in the volume.</p>
     */
    inline bool GetNfsExported() const{ return m_nfsExported; }

    /**
     * <p>The number of NFS volumes in the volume.</p>
     */
    inline bool NfsExportedHasBeenSet() const { return m_nfsExportedHasBeenSet; }

    /**
     * <p>The number of NFS volumes in the volume.</p>
     */
    inline void SetNfsExported(bool value) { m_nfsExportedHasBeenSet = true; m_nfsExported = value; }

    /**
     * <p>The number of NFS volumes in the volume.</p>
     */
    inline NetAppONTAPVolume& WithNfsExported(bool value) { SetNfsExported(value); return *this;}


    /**
     * <p>The amount of storage in the volume that's being used for snapshots.</p>
     */
    inline long long GetSnapshotCapacityUsed() const{ return m_snapshotCapacityUsed; }

    /**
     * <p>The amount of storage in the volume that's being used for snapshots.</p>
     */
    inline bool SnapshotCapacityUsedHasBeenSet() const { return m_snapshotCapacityUsedHasBeenSet; }

    /**
     * <p>The amount of storage in the volume that's being used for snapshots.</p>
     */
    inline void SetSnapshotCapacityUsed(long long value) { m_snapshotCapacityUsedHasBeenSet = true; m_snapshotCapacityUsed = value; }

    /**
     * <p>The amount of storage in the volume that's being used for snapshots.</p>
     */
    inline NetAppONTAPVolume& WithSnapshotCapacityUsed(long long value) { SetSnapshotCapacityUsed(value); return *this;}


    /**
     * <p>The performance data that DataSync Discovery collects about the volume.</p>
     */
    inline const MaxP95Performance& GetMaxP95Performance() const{ return m_maxP95Performance; }

    /**
     * <p>The performance data that DataSync Discovery collects about the volume.</p>
     */
    inline bool MaxP95PerformanceHasBeenSet() const { return m_maxP95PerformanceHasBeenSet; }

    /**
     * <p>The performance data that DataSync Discovery collects about the volume.</p>
     */
    inline void SetMaxP95Performance(const MaxP95Performance& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = value; }

    /**
     * <p>The performance data that DataSync Discovery collects about the volume.</p>
     */
    inline void SetMaxP95Performance(MaxP95Performance&& value) { m_maxP95PerformanceHasBeenSet = true; m_maxP95Performance = std::move(value); }

    /**
     * <p>The performance data that DataSync Discovery collects about the volume.</p>
     */
    inline NetAppONTAPVolume& WithMaxP95Performance(const MaxP95Performance& value) { SetMaxP95Performance(value); return *this;}

    /**
     * <p>The performance data that DataSync Discovery collects about the volume.</p>
     */
    inline NetAppONTAPVolume& WithMaxP95Performance(MaxP95Performance&& value) { SetMaxP95Performance(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendationsHasBeenSet = true; m_recommendations = value; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::move(value); }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPVolume& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPVolume& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPVolume& AddRecommendations(const Recommendation& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services storage services that DataSync Discovery recommends
     * for the volume. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">Recommendations
     * provided by DataSync Discovery</a>.</p>
     */
    inline NetAppONTAPVolume& AddRecommendations(Recommendation&& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether DataSync Discovery recommendations for the volume are ready
     * to view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline const RecommendationStatus& GetRecommendationStatus() const{ return m_recommendationStatus; }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the volume are ready
     * to view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the volume are ready
     * to view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline void SetRecommendationStatus(const RecommendationStatus& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the volume are ready
     * to view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline void SetRecommendationStatus(RecommendationStatus&& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = std::move(value); }

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the volume are ready
     * to view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline NetAppONTAPVolume& WithRecommendationStatus(const RecommendationStatus& value) { SetRecommendationStatus(value); return *this;}

    /**
     * <p>Indicates whether DataSync Discovery recommendations for the volume are ready
     * to view, incomplete, or can't be determined.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#recommendation-statuses-table">Recommendation
     * statuses</a>.</p>
     */
    inline NetAppONTAPVolume& WithRecommendationStatus(RecommendationStatus&& value) { SetRecommendationStatus(std::move(value)); return *this;}


    /**
     * <p>The number of LUNs (logical unit numbers) in the volume.</p>
     */
    inline long long GetLunCount() const{ return m_lunCount; }

    /**
     * <p>The number of LUNs (logical unit numbers) in the volume.</p>
     */
    inline bool LunCountHasBeenSet() const { return m_lunCountHasBeenSet; }

    /**
     * <p>The number of LUNs (logical unit numbers) in the volume.</p>
     */
    inline void SetLunCount(long long value) { m_lunCountHasBeenSet = true; m_lunCount = value; }

    /**
     * <p>The number of LUNs (logical unit numbers) in the volume.</p>
     */
    inline NetAppONTAPVolume& WithLunCount(long long value) { SetLunCount(value); return *this;}

  private:

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    long long m_cifsShareCount;
    bool m_cifsShareCountHasBeenSet = false;

    Aws::String m_securityStyle;
    bool m_securityStyleHasBeenSet = false;

    Aws::String m_svmUuid;
    bool m_svmUuidHasBeenSet = false;

    Aws::String m_svmName;
    bool m_svmNameHasBeenSet = false;

    long long m_capacityUsed;
    bool m_capacityUsedHasBeenSet = false;

    long long m_capacityProvisioned;
    bool m_capacityProvisionedHasBeenSet = false;

    long long m_logicalCapacityUsed;
    bool m_logicalCapacityUsedHasBeenSet = false;

    bool m_nfsExported;
    bool m_nfsExportedHasBeenSet = false;

    long long m_snapshotCapacityUsed;
    bool m_snapshotCapacityUsedHasBeenSet = false;

    MaxP95Performance m_maxP95Performance;
    bool m_maxP95PerformanceHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    RecommendationStatus m_recommendationStatus;
    bool m_recommendationStatusHasBeenSet = false;

    long long m_lunCount;
    bool m_lunCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
