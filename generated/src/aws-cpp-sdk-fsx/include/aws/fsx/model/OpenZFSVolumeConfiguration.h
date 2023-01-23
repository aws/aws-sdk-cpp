/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSDataCompressionType.h>
#include <aws/fsx/model/OpenZFSOriginSnapshotConfiguration.h>
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
   * <p>The configuration of an Amazon FSx for OpenZFS volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenZFSVolumeConfiguration
  {
  public:
    AWS_FSX_API OpenZFSVolumeConfiguration();
    AWS_FSX_API OpenZFSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the parent volume.</p>
     */
    inline const Aws::String& GetParentVolumeId() const{ return m_parentVolumeId; }

    /**
     * <p>The ID of the parent volume.</p>
     */
    inline bool ParentVolumeIdHasBeenSet() const { return m_parentVolumeIdHasBeenSet; }

    /**
     * <p>The ID of the parent volume.</p>
     */
    inline void SetParentVolumeId(const Aws::String& value) { m_parentVolumeIdHasBeenSet = true; m_parentVolumeId = value; }

    /**
     * <p>The ID of the parent volume.</p>
     */
    inline void SetParentVolumeId(Aws::String&& value) { m_parentVolumeIdHasBeenSet = true; m_parentVolumeId = std::move(value); }

    /**
     * <p>The ID of the parent volume.</p>
     */
    inline void SetParentVolumeId(const char* value) { m_parentVolumeIdHasBeenSet = true; m_parentVolumeId.assign(value); }

    /**
     * <p>The ID of the parent volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithParentVolumeId(const Aws::String& value) { SetParentVolumeId(value); return *this;}

    /**
     * <p>The ID of the parent volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithParentVolumeId(Aws::String&& value) { SetParentVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithParentVolumeId(const char* value) { SetParentVolumeId(value); return *this;}


    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline const Aws::String& GetVolumePath() const{ return m_volumePath; }

    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline bool VolumePathHasBeenSet() const { return m_volumePathHasBeenSet; }

    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline void SetVolumePath(const Aws::String& value) { m_volumePathHasBeenSet = true; m_volumePath = value; }

    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline void SetVolumePath(Aws::String&& value) { m_volumePathHasBeenSet = true; m_volumePath = std::move(value); }

    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline void SetVolumePath(const char* value) { m_volumePathHasBeenSet = true; m_volumePath.assign(value); }

    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline OpenZFSVolumeConfiguration& WithVolumePath(const Aws::String& value) { SetVolumePath(value); return *this;}

    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline OpenZFSVolumeConfiguration& WithVolumePath(Aws::String&& value) { SetVolumePath(std::move(value)); return *this;}

    /**
     * <p>The path to the volume from the root volume. For example,
     * <code>fsx/parentVolume/volume1</code>.</p>
     */
    inline OpenZFSVolumeConfiguration& WithVolumePath(const char* value) { SetVolumePath(value); return *this;}


    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline int GetStorageCapacityReservationGiB() const{ return m_storageCapacityReservationGiB; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline bool StorageCapacityReservationGiBHasBeenSet() const { return m_storageCapacityReservationGiBHasBeenSet; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline void SetStorageCapacityReservationGiB(int value) { m_storageCapacityReservationGiBHasBeenSet = true; m_storageCapacityReservationGiB = value; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline OpenZFSVolumeConfiguration& WithStorageCapacityReservationGiB(int value) { SetStorageCapacityReservationGiB(value); return *this;}


    /**
     * <p>The maximum amount of storage in gibibtyes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline int GetStorageCapacityQuotaGiB() const{ return m_storageCapacityQuotaGiB; }

    /**
     * <p>The maximum amount of storage in gibibtyes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline bool StorageCapacityQuotaGiBHasBeenSet() const { return m_storageCapacityQuotaGiBHasBeenSet; }

    /**
     * <p>The maximum amount of storage in gibibtyes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline void SetStorageCapacityQuotaGiB(int value) { m_storageCapacityQuotaGiBHasBeenSet = true; m_storageCapacityQuotaGiB = value; }

    /**
     * <p>The maximum amount of storage in gibibtyes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithStorageCapacityQuotaGiB(int value) { SetStorageCapacityQuotaGiB(value); return *this;}


    /**
     * <p>The record size of an OpenZFS volume, in kibibytes (KiB). Valid values are 4,
     * 8, 16, 32, 64, 128, 256, 512, or 1024 KiB. The default is 128 KiB. Most
     * workloads should use the default record size. For guidance on when to set a
     * custom record size, see the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline int GetRecordSizeKiB() const{ return m_recordSizeKiB; }

    /**
     * <p>The record size of an OpenZFS volume, in kibibytes (KiB). Valid values are 4,
     * 8, 16, 32, 64, 128, 256, 512, or 1024 KiB. The default is 128 KiB. Most
     * workloads should use the default record size. For guidance on when to set a
     * custom record size, see the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline bool RecordSizeKiBHasBeenSet() const { return m_recordSizeKiBHasBeenSet; }

    /**
     * <p>The record size of an OpenZFS volume, in kibibytes (KiB). Valid values are 4,
     * 8, 16, 32, 64, 128, 256, 512, or 1024 KiB. The default is 128 KiB. Most
     * workloads should use the default record size. For guidance on when to set a
     * custom record size, see the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline void SetRecordSizeKiB(int value) { m_recordSizeKiBHasBeenSet = true; m_recordSizeKiB = value; }

    /**
     * <p>The record size of an OpenZFS volume, in kibibytes (KiB). Valid values are 4,
     * 8, 16, 32, 64, 128, 256, 512, or 1024 KiB. The default is 128 KiB. Most
     * workloads should use the default record size. For guidance on when to set a
     * custom record size, see the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline OpenZFSVolumeConfiguration& WithRecordSizeKiB(int value) { SetRecordSizeKiB(value); return *this;}


    /**
     * <p>Specifies the method used to compress the data on the volume. The compression
     * type is <code>NONE</code> by default.</p> <ul> <li> <p> <code>NONE</code> -
     * Doesn't compress the data on the volume. <code>NONE</code> is the default.</p>
     * </li> <li> <p> <code>ZSTD</code> - Compresses the data in the volume using the
     * Zstandard (ZSTD) compression algorithm. Compared to LZ4, Z-Standard provides a
     * better compression ratio to minimize on-disk storage utilization.</p> </li> <li>
     * <p> <code>LZ4</code> - Compresses the data in the volume using the LZ4
     * compression algorithm. Compared to Z-Standard, LZ4 is less compute-intensive and
     * delivers higher write throughput speeds.</p> </li> </ul>
     */
    inline const OpenZFSDataCompressionType& GetDataCompressionType() const{ return m_dataCompressionType; }

    /**
     * <p>Specifies the method used to compress the data on the volume. The compression
     * type is <code>NONE</code> by default.</p> <ul> <li> <p> <code>NONE</code> -
     * Doesn't compress the data on the volume. <code>NONE</code> is the default.</p>
     * </li> <li> <p> <code>ZSTD</code> - Compresses the data in the volume using the
     * Zstandard (ZSTD) compression algorithm. Compared to LZ4, Z-Standard provides a
     * better compression ratio to minimize on-disk storage utilization.</p> </li> <li>
     * <p> <code>LZ4</code> - Compresses the data in the volume using the LZ4
     * compression algorithm. Compared to Z-Standard, LZ4 is less compute-intensive and
     * delivers higher write throughput speeds.</p> </li> </ul>
     */
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }

    /**
     * <p>Specifies the method used to compress the data on the volume. The compression
     * type is <code>NONE</code> by default.</p> <ul> <li> <p> <code>NONE</code> -
     * Doesn't compress the data on the volume. <code>NONE</code> is the default.</p>
     * </li> <li> <p> <code>ZSTD</code> - Compresses the data in the volume using the
     * Zstandard (ZSTD) compression algorithm. Compared to LZ4, Z-Standard provides a
     * better compression ratio to minimize on-disk storage utilization.</p> </li> <li>
     * <p> <code>LZ4</code> - Compresses the data in the volume using the LZ4
     * compression algorithm. Compared to Z-Standard, LZ4 is less compute-intensive and
     * delivers higher write throughput speeds.</p> </li> </ul>
     */
    inline void SetDataCompressionType(const OpenZFSDataCompressionType& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }

    /**
     * <p>Specifies the method used to compress the data on the volume. The compression
     * type is <code>NONE</code> by default.</p> <ul> <li> <p> <code>NONE</code> -
     * Doesn't compress the data on the volume. <code>NONE</code> is the default.</p>
     * </li> <li> <p> <code>ZSTD</code> - Compresses the data in the volume using the
     * Zstandard (ZSTD) compression algorithm. Compared to LZ4, Z-Standard provides a
     * better compression ratio to minimize on-disk storage utilization.</p> </li> <li>
     * <p> <code>LZ4</code> - Compresses the data in the volume using the LZ4
     * compression algorithm. Compared to Z-Standard, LZ4 is less compute-intensive and
     * delivers higher write throughput speeds.</p> </li> </ul>
     */
    inline void SetDataCompressionType(OpenZFSDataCompressionType&& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = std::move(value); }

    /**
     * <p>Specifies the method used to compress the data on the volume. The compression
     * type is <code>NONE</code> by default.</p> <ul> <li> <p> <code>NONE</code> -
     * Doesn't compress the data on the volume. <code>NONE</code> is the default.</p>
     * </li> <li> <p> <code>ZSTD</code> - Compresses the data in the volume using the
     * Zstandard (ZSTD) compression algorithm. Compared to LZ4, Z-Standard provides a
     * better compression ratio to minimize on-disk storage utilization.</p> </li> <li>
     * <p> <code>LZ4</code> - Compresses the data in the volume using the LZ4
     * compression algorithm. Compared to Z-Standard, LZ4 is less compute-intensive and
     * delivers higher write throughput speeds.</p> </li> </ul>
     */
    inline OpenZFSVolumeConfiguration& WithDataCompressionType(const OpenZFSDataCompressionType& value) { SetDataCompressionType(value); return *this;}

    /**
     * <p>Specifies the method used to compress the data on the volume. The compression
     * type is <code>NONE</code> by default.</p> <ul> <li> <p> <code>NONE</code> -
     * Doesn't compress the data on the volume. <code>NONE</code> is the default.</p>
     * </li> <li> <p> <code>ZSTD</code> - Compresses the data in the volume using the
     * Zstandard (ZSTD) compression algorithm. Compared to LZ4, Z-Standard provides a
     * better compression ratio to minimize on-disk storage utilization.</p> </li> <li>
     * <p> <code>LZ4</code> - Compresses the data in the volume using the LZ4
     * compression algorithm. Compared to Z-Standard, LZ4 is less compute-intensive and
     * delivers higher write throughput speeds.</p> </li> </ul>
     */
    inline OpenZFSVolumeConfiguration& WithDataCompressionType(OpenZFSDataCompressionType&& value) { SetDataCompressionType(std::move(value)); return *this;}


    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value.</p>
     */
    inline bool GetCopyTagsToSnapshots() const{ return m_copyTagsToSnapshots; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value.</p>
     */
    inline bool CopyTagsToSnapshotsHasBeenSet() const { return m_copyTagsToSnapshotsHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value.</p>
     */
    inline void SetCopyTagsToSnapshots(bool value) { m_copyTagsToSnapshotsHasBeenSet = true; m_copyTagsToSnapshots = value; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value.</p>
     */
    inline OpenZFSVolumeConfiguration& WithCopyTagsToSnapshots(bool value) { SetCopyTagsToSnapshots(value); return *this;}


    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline const OpenZFSOriginSnapshotConfiguration& GetOriginSnapshot() const{ return m_originSnapshot; }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline bool OriginSnapshotHasBeenSet() const { return m_originSnapshotHasBeenSet; }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline void SetOriginSnapshot(const OpenZFSOriginSnapshotConfiguration& value) { m_originSnapshotHasBeenSet = true; m_originSnapshot = value; }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline void SetOriginSnapshot(OpenZFSOriginSnapshotConfiguration&& value) { m_originSnapshotHasBeenSet = true; m_originSnapshot = std::move(value); }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithOriginSnapshot(const OpenZFSOriginSnapshotConfiguration& value) { SetOriginSnapshot(value); return *this;}

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithOriginSnapshot(OpenZFSOriginSnapshotConfiguration&& value) { SetOriginSnapshot(std::move(value)); return *this;}


    /**
     * <p>A Boolean value indicating whether the volume is read-only.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only.</p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only.</p>
     */
    inline OpenZFSVolumeConfiguration& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline const Aws::Vector<OpenZFSNfsExport>& GetNfsExports() const{ return m_nfsExports; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline bool NfsExportsHasBeenSet() const { return m_nfsExportsHasBeenSet; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline void SetNfsExports(const Aws::Vector<OpenZFSNfsExport>& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = value; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline void SetNfsExports(Aws::Vector<OpenZFSNfsExport>&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = std::move(value); }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline OpenZFSVolumeConfiguration& WithNfsExports(const Aws::Vector<OpenZFSNfsExport>& value) { SetNfsExports(value); return *this;}

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline OpenZFSVolumeConfiguration& WithNfsExports(Aws::Vector<OpenZFSNfsExport>&& value) { SetNfsExports(std::move(value)); return *this;}

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline OpenZFSVolumeConfiguration& AddNfsExports(const OpenZFSNfsExport& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.push_back(value); return *this; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system.</p>
     */
    inline OpenZFSVolumeConfiguration& AddNfsExports(OpenZFSNfsExport&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.push_back(std::move(value)); return *this; }


    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline const Aws::Vector<OpenZFSUserOrGroupQuota>& GetUserAndGroupQuotas() const{ return m_userAndGroupQuotas; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline bool UserAndGroupQuotasHasBeenSet() const { return m_userAndGroupQuotasHasBeenSet; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline void SetUserAndGroupQuotas(const Aws::Vector<OpenZFSUserOrGroupQuota>& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = value; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline void SetUserAndGroupQuotas(Aws::Vector<OpenZFSUserOrGroupQuota>&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = std::move(value); }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithUserAndGroupQuotas(const Aws::Vector<OpenZFSUserOrGroupQuota>& value) { SetUserAndGroupQuotas(value); return *this;}

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSVolumeConfiguration& WithUserAndGroupQuotas(Aws::Vector<OpenZFSUserOrGroupQuota>&& value) { SetUserAndGroupQuotas(std::move(value)); return *this;}

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSVolumeConfiguration& AddUserAndGroupQuotas(const OpenZFSUserOrGroupQuota& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.push_back(value); return *this; }

    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline OpenZFSVolumeConfiguration& AddUserAndGroupQuotas(OpenZFSUserOrGroupQuota&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline const Aws::String& GetRestoreToSnapshot() const{ return m_restoreToSnapshot; }

    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline bool RestoreToSnapshotHasBeenSet() const { return m_restoreToSnapshotHasBeenSet; }

    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline void SetRestoreToSnapshot(const Aws::String& value) { m_restoreToSnapshotHasBeenSet = true; m_restoreToSnapshot = value; }

    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline void SetRestoreToSnapshot(Aws::String&& value) { m_restoreToSnapshotHasBeenSet = true; m_restoreToSnapshot = std::move(value); }

    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline void SetRestoreToSnapshot(const char* value) { m_restoreToSnapshotHasBeenSet = true; m_restoreToSnapshot.assign(value); }

    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline OpenZFSVolumeConfiguration& WithRestoreToSnapshot(const Aws::String& value) { SetRestoreToSnapshot(value); return *this;}

    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline OpenZFSVolumeConfiguration& WithRestoreToSnapshot(Aws::String&& value) { SetRestoreToSnapshot(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the snapshot to which the volume was restored.</p>
     */
    inline OpenZFSVolumeConfiguration& WithRestoreToSnapshot(const char* value) { SetRestoreToSnapshot(value); return *this;}


    /**
     * <p>A Boolean value indicating whether snapshots between the current state and
     * the specified snapshot should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline bool GetDeleteIntermediateSnaphots() const{ return m_deleteIntermediateSnaphots; }

    /**
     * <p>A Boolean value indicating whether snapshots between the current state and
     * the specified snapshot should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline bool DeleteIntermediateSnaphotsHasBeenSet() const { return m_deleteIntermediateSnaphotsHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether snapshots between the current state and
     * the specified snapshot should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline void SetDeleteIntermediateSnaphots(bool value) { m_deleteIntermediateSnaphotsHasBeenSet = true; m_deleteIntermediateSnaphots = value; }

    /**
     * <p>A Boolean value indicating whether snapshots between the current state and
     * the specified snapshot should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline OpenZFSVolumeConfiguration& WithDeleteIntermediateSnaphots(bool value) { SetDeleteIntermediateSnaphots(value); return *this;}


    /**
     * <p>A Boolean value indicating whether dependent clone volumes created from
     * intermediate snapshots should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline bool GetDeleteClonedVolumes() const{ return m_deleteClonedVolumes; }

    /**
     * <p>A Boolean value indicating whether dependent clone volumes created from
     * intermediate snapshots should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline bool DeleteClonedVolumesHasBeenSet() const { return m_deleteClonedVolumesHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether dependent clone volumes created from
     * intermediate snapshots should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline void SetDeleteClonedVolumes(bool value) { m_deleteClonedVolumesHasBeenSet = true; m_deleteClonedVolumes = value; }

    /**
     * <p>A Boolean value indicating whether dependent clone volumes created from
     * intermediate snapshots should be deleted when a volume is restored from
     * snapshot.</p>
     */
    inline OpenZFSVolumeConfiguration& WithDeleteClonedVolumes(bool value) { SetDeleteClonedVolumes(value); return *this;}

  private:

    Aws::String m_parentVolumeId;
    bool m_parentVolumeIdHasBeenSet = false;

    Aws::String m_volumePath;
    bool m_volumePathHasBeenSet = false;

    int m_storageCapacityReservationGiB;
    bool m_storageCapacityReservationGiBHasBeenSet = false;

    int m_storageCapacityQuotaGiB;
    bool m_storageCapacityQuotaGiBHasBeenSet = false;

    int m_recordSizeKiB;
    bool m_recordSizeKiBHasBeenSet = false;

    OpenZFSDataCompressionType m_dataCompressionType;
    bool m_dataCompressionTypeHasBeenSet = false;

    bool m_copyTagsToSnapshots;
    bool m_copyTagsToSnapshotsHasBeenSet = false;

    OpenZFSOriginSnapshotConfiguration m_originSnapshot;
    bool m_originSnapshotHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    Aws::Vector<OpenZFSNfsExport> m_nfsExports;
    bool m_nfsExportsHasBeenSet = false;

    Aws::Vector<OpenZFSUserOrGroupQuota> m_userAndGroupQuotas;
    bool m_userAndGroupQuotasHasBeenSet = false;

    Aws::String m_restoreToSnapshot;
    bool m_restoreToSnapshotHasBeenSet = false;

    bool m_deleteIntermediateSnaphots;
    bool m_deleteIntermediateSnaphotsHasBeenSet = false;

    bool m_deleteClonedVolumes;
    bool m_deleteClonedVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
