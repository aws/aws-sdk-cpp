/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSDataCompressionType.h>
#include <aws/fsx/model/CreateOpenZFSOriginSnapshotConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/OpenZFSNfsExport.h>
#include <aws/fsx/model/OpenZFSUserOrGroupQuota.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Specifies the configuration of the Amazon FSx for OpenZFS volume that you are
   * creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateOpenZFSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateOpenZFSVolumeConfiguration
  {
  public:
    AWS_FSX_API CreateOpenZFSVolumeConfiguration() = default;
    AWS_FSX_API CreateOpenZFSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateOpenZFSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the volume to use as the parent volume of the volume that you are
     * creating.</p>
     */
    inline const Aws::String& GetParentVolumeId() const { return m_parentVolumeId; }
    inline bool ParentVolumeIdHasBeenSet() const { return m_parentVolumeIdHasBeenSet; }
    template<typename ParentVolumeIdT = Aws::String>
    void SetParentVolumeId(ParentVolumeIdT&& value) { m_parentVolumeIdHasBeenSet = true; m_parentVolumeId = std::forward<ParentVolumeIdT>(value); }
    template<typename ParentVolumeIdT = Aws::String>
    CreateOpenZFSVolumeConfiguration& WithParentVolumeId(ParentVolumeIdT&& value) { SetParentVolumeId(std::forward<ParentVolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of storage in gibibytes (GiB) to reserve from the parent
     * volume. Setting <code>StorageCapacityReservationGiB</code> guarantees that the
     * specified amount of storage space on the parent volume will always be available
     * for the volume. You can't reserve more storage than the parent volume has. To
     * <i>not</i> specify a storage capacity reservation, set this to <code>0</code> or
     * <code>-1</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/managing-volumes.html#volume-properties">Volume
     * properties</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline int GetStorageCapacityReservationGiB() const { return m_storageCapacityReservationGiB; }
    inline bool StorageCapacityReservationGiBHasBeenSet() const { return m_storageCapacityReservationGiBHasBeenSet; }
    inline void SetStorageCapacityReservationGiB(int value) { m_storageCapacityReservationGiBHasBeenSet = true; m_storageCapacityReservationGiB = value; }
    inline CreateOpenZFSVolumeConfiguration& WithStorageCapacityReservationGiB(int value) { SetStorageCapacityReservationGiB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the maximum storage size in gibibytes (GiB) for the volume. You can
     * specify a quota that is larger than the storage on the parent volume. A volume
     * quota limits the amount of storage that the volume can consume to the configured
     * amount, but does not guarantee the space will be available on the parent volume.
     * To guarantee quota space, you must also set
     * <code>StorageCapacityReservationGiB</code>. To <i>not</i> specify a storage
     * capacity quota, set this to <code>-1</code>. </p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/managing-volumes.html#volume-properties">Volume
     * properties</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline int GetStorageCapacityQuotaGiB() const { return m_storageCapacityQuotaGiB; }
    inline bool StorageCapacityQuotaGiBHasBeenSet() const { return m_storageCapacityQuotaGiBHasBeenSet; }
    inline void SetStorageCapacityQuotaGiB(int value) { m_storageCapacityQuotaGiBHasBeenSet = true; m_storageCapacityQuotaGiB = value; }
    inline CreateOpenZFSVolumeConfiguration& WithStorageCapacityQuotaGiB(int value) { SetStorageCapacityQuotaGiB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the suggested block size for a volume in a ZFS dataset, in
     * kibibytes (KiB). For file systems using the Intelligent-Tiering storage class,
     * valid values are 128, 256, 512, 1024, 2048, or 4096 KiB, with a default of 1024
     * KiB. For all other file systems, valid values are 4, 8, 16, 32, 64, 128, 256,
     * 512, or 1024 KiB, with a default of 128 KiB. We recommend using the default
     * setting for the majority of use cases. Generally, workloads that write in fixed
     * small or large record sizes may benefit from setting a custom record size, like
     * database workloads (small record size) or media streaming workloads (large
     * record size). For additional guidance on when to set a custom record size, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#record-size-performance">
     * ZFS Record size</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline int GetRecordSizeKiB() const { return m_recordSizeKiB; }
    inline bool RecordSizeKiBHasBeenSet() const { return m_recordSizeKiBHasBeenSet; }
    inline void SetRecordSizeKiB(int value) { m_recordSizeKiBHasBeenSet = true; m_recordSizeKiB = value; }
    inline CreateOpenZFSVolumeConfiguration& WithRecordSizeKiB(int value) { SetRecordSizeKiB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the method used to compress the data on the volume. The compression
     * type is <code>NONE</code> by default.</p> <ul> <li> <p> <code>NONE</code> -
     * Doesn't compress the data on the volume. <code>NONE</code> is the default.</p>
     * </li> <li> <p> <code>ZSTD</code> - Compresses the data in the volume using the
     * Zstandard (ZSTD) compression algorithm. ZSTD compression provides a higher level
     * of data compression and higher read throughput performance than LZ4
     * compression.</p> </li> <li> <p> <code>LZ4</code> - Compresses the data in the
     * volume using the LZ4 compression algorithm. LZ4 compression provides a lower
     * level of compression and higher write throughput performance than ZSTD
     * compression.</p> </li> </ul> <p>For more information about volume compression
     * types and the performance of your Amazon FSx for OpenZFS file system, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#performance-tips-zfs">
     * Tips for maximizing performance</a> File system and volume settings in the
     * <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline OpenZFSDataCompressionType GetDataCompressionType() const { return m_dataCompressionType; }
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }
    inline void SetDataCompressionType(OpenZFSDataCompressionType value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }
    inline CreateOpenZFSVolumeConfiguration& WithDataCompressionType(OpenZFSDataCompressionType value) { SetDataCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If this value is set
     * to <code>true</code>, and you do not specify any tags, all tags for the original
     * volume are copied over to snapshots. If this value is set to <code>true</code>,
     * and you do specify one or more tags, only the specified tags for the original
     * volume are copied over to snapshots. If you specify one or more tags when
     * creating a new snapshot, no tags are copied over from the original volume,
     * regardless of this value. </p>
     */
    inline bool GetCopyTagsToSnapshots() const { return m_copyTagsToSnapshots; }
    inline bool CopyTagsToSnapshotsHasBeenSet() const { return m_copyTagsToSnapshotsHasBeenSet; }
    inline void SetCopyTagsToSnapshots(bool value) { m_copyTagsToSnapshotsHasBeenSet = true; m_copyTagsToSnapshots = value; }
    inline CreateOpenZFSVolumeConfiguration& WithCopyTagsToSnapshots(bool value) { SetCopyTagsToSnapshots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline const CreateOpenZFSOriginSnapshotConfiguration& GetOriginSnapshot() const { return m_originSnapshot; }
    inline bool OriginSnapshotHasBeenSet() const { return m_originSnapshotHasBeenSet; }
    template<typename OriginSnapshotT = CreateOpenZFSOriginSnapshotConfiguration>
    void SetOriginSnapshot(OriginSnapshotT&& value) { m_originSnapshotHasBeenSet = true; m_originSnapshot = std::forward<OriginSnapshotT>(value); }
    template<typename OriginSnapshotT = CreateOpenZFSOriginSnapshotConfiguration>
    CreateOpenZFSVolumeConfiguration& WithOriginSnapshot(OriginSnapshotT&& value) { SetOriginSnapshot(std::forward<OriginSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the volume is read-only.</p>
     */
    inline bool GetReadOnly() const { return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline CreateOpenZFSVolumeConfiguration& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline const Aws::Vector<OpenZFSNfsExport>& GetNfsExports() const { return m_nfsExports; }
    inline bool NfsExportsHasBeenSet() const { return m_nfsExportsHasBeenSet; }
    template<typename NfsExportsT = Aws::Vector<OpenZFSNfsExport>>
    void SetNfsExports(NfsExportsT&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = std::forward<NfsExportsT>(value); }
    template<typename NfsExportsT = Aws::Vector<OpenZFSNfsExport>>
    CreateOpenZFSVolumeConfiguration& WithNfsExports(NfsExportsT&& value) { SetNfsExports(std::forward<NfsExportsT>(value)); return *this;}
    template<typename NfsExportsT = OpenZFSNfsExport>
    CreateOpenZFSVolumeConfiguration& AddNfsExports(NfsExportsT&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.emplace_back(std::forward<NfsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configures how much storage users and groups can use on the volume.</p>
     */
    inline const Aws::Vector<OpenZFSUserOrGroupQuota>& GetUserAndGroupQuotas() const { return m_userAndGroupQuotas; }
    inline bool UserAndGroupQuotasHasBeenSet() const { return m_userAndGroupQuotasHasBeenSet; }
    template<typename UserAndGroupQuotasT = Aws::Vector<OpenZFSUserOrGroupQuota>>
    void SetUserAndGroupQuotas(UserAndGroupQuotasT&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = std::forward<UserAndGroupQuotasT>(value); }
    template<typename UserAndGroupQuotasT = Aws::Vector<OpenZFSUserOrGroupQuota>>
    CreateOpenZFSVolumeConfiguration& WithUserAndGroupQuotas(UserAndGroupQuotasT&& value) { SetUserAndGroupQuotas(std::forward<UserAndGroupQuotasT>(value)); return *this;}
    template<typename UserAndGroupQuotasT = OpenZFSUserOrGroupQuota>
    CreateOpenZFSVolumeConfiguration& AddUserAndGroupQuotas(UserAndGroupQuotasT&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.emplace_back(std::forward<UserAndGroupQuotasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_parentVolumeId;
    bool m_parentVolumeIdHasBeenSet = false;

    int m_storageCapacityReservationGiB{0};
    bool m_storageCapacityReservationGiBHasBeenSet = false;

    int m_storageCapacityQuotaGiB{0};
    bool m_storageCapacityQuotaGiBHasBeenSet = false;

    int m_recordSizeKiB{0};
    bool m_recordSizeKiBHasBeenSet = false;

    OpenZFSDataCompressionType m_dataCompressionType{OpenZFSDataCompressionType::NOT_SET};
    bool m_dataCompressionTypeHasBeenSet = false;

    bool m_copyTagsToSnapshots{false};
    bool m_copyTagsToSnapshotsHasBeenSet = false;

    CreateOpenZFSOriginSnapshotConfiguration m_originSnapshot;
    bool m_originSnapshotHasBeenSet = false;

    bool m_readOnly{false};
    bool m_readOnlyHasBeenSet = false;

    Aws::Vector<OpenZFSNfsExport> m_nfsExports;
    bool m_nfsExportsHasBeenSet = false;

    Aws::Vector<OpenZFSUserOrGroupQuota> m_userAndGroupQuotas;
    bool m_userAndGroupQuotasHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
