﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/OpenZFSDataCompressionType.h>
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
   * <p>The configuration of an Amazon FSx for OpenZFS root volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSCreateRootVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenZFSCreateRootVolumeConfiguration
  {
  public:
    AWS_FSX_API OpenZFSCreateRootVolumeConfiguration() = default;
    AWS_FSX_API OpenZFSCreateRootVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSCreateRootVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the record size of an OpenZFS root volume, in kibibytes (KiB).
     * Valid values are 4, 8, 16, 32, 64, 128, 256, 512, or 1024 KiB. The default is
     * 128 KiB. Most workloads should use the default record size. Database workflows
     * can benefit from a smaller record size, while streaming workflows can benefit
     * from a larger record size. For additional guidance on setting a custom record
     * size, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#performance-tips-zfs">
     * Tips for maximizing performance</a> in the <i>Amazon FSx for OpenZFS User
     * Guide</i>.</p>
     */
    inline int GetRecordSizeKiB() const { return m_recordSizeKiB; }
    inline bool RecordSizeKiBHasBeenSet() const { return m_recordSizeKiBHasBeenSet; }
    inline void SetRecordSizeKiB(int value) { m_recordSizeKiBHasBeenSet = true; m_recordSizeKiB = value; }
    inline OpenZFSCreateRootVolumeConfiguration& WithRecordSizeKiB(int value) { SetRecordSizeKiB(value); return *this;}
    ///@}

    ///@{
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
    inline OpenZFSDataCompressionType GetDataCompressionType() const { return m_dataCompressionType; }
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }
    inline void SetDataCompressionType(OpenZFSDataCompressionType value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }
    inline OpenZFSCreateRootVolumeConfiguration& WithDataCompressionType(OpenZFSDataCompressionType value) { SetDataCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object for mounting a file system.</p>
     */
    inline const Aws::Vector<OpenZFSNfsExport>& GetNfsExports() const { return m_nfsExports; }
    inline bool NfsExportsHasBeenSet() const { return m_nfsExportsHasBeenSet; }
    template<typename NfsExportsT = Aws::Vector<OpenZFSNfsExport>>
    void SetNfsExports(NfsExportsT&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = std::forward<NfsExportsT>(value); }
    template<typename NfsExportsT = Aws::Vector<OpenZFSNfsExport>>
    OpenZFSCreateRootVolumeConfiguration& WithNfsExports(NfsExportsT&& value) { SetNfsExports(std::forward<NfsExportsT>(value)); return *this;}
    template<typename NfsExportsT = OpenZFSNfsExport>
    OpenZFSCreateRootVolumeConfiguration& AddNfsExports(NfsExportsT&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.emplace_back(std::forward<NfsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object specifying how much storage users or groups can use on the
     * volume.</p>
     */
    inline const Aws::Vector<OpenZFSUserOrGroupQuota>& GetUserAndGroupQuotas() const { return m_userAndGroupQuotas; }
    inline bool UserAndGroupQuotasHasBeenSet() const { return m_userAndGroupQuotasHasBeenSet; }
    template<typename UserAndGroupQuotasT = Aws::Vector<OpenZFSUserOrGroupQuota>>
    void SetUserAndGroupQuotas(UserAndGroupQuotasT&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = std::forward<UserAndGroupQuotasT>(value); }
    template<typename UserAndGroupQuotasT = Aws::Vector<OpenZFSUserOrGroupQuota>>
    OpenZFSCreateRootVolumeConfiguration& WithUserAndGroupQuotas(UserAndGroupQuotasT&& value) { SetUserAndGroupQuotas(std::forward<UserAndGroupQuotasT>(value)); return *this;}
    template<typename UserAndGroupQuotasT = OpenZFSUserOrGroupQuota>
    OpenZFSCreateRootVolumeConfiguration& AddUserAndGroupQuotas(UserAndGroupQuotasT&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.emplace_back(std::forward<UserAndGroupQuotasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots of the volume. This value defaults to <code>false</code>. If it's set
     * to <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool GetCopyTagsToSnapshots() const { return m_copyTagsToSnapshots; }
    inline bool CopyTagsToSnapshotsHasBeenSet() const { return m_copyTagsToSnapshotsHasBeenSet; }
    inline void SetCopyTagsToSnapshots(bool value) { m_copyTagsToSnapshotsHasBeenSet = true; m_copyTagsToSnapshots = value; }
    inline OpenZFSCreateRootVolumeConfiguration& WithCopyTagsToSnapshots(bool value) { SetCopyTagsToSnapshots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the volume is read-only. Setting this
     * value to <code>true</code> can be useful after you have completed changes to a
     * volume and no longer want changes to occur. </p>
     */
    inline bool GetReadOnly() const { return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline OpenZFSCreateRootVolumeConfiguration& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}
  private:

    int m_recordSizeKiB{0};
    bool m_recordSizeKiBHasBeenSet = false;

    OpenZFSDataCompressionType m_dataCompressionType{OpenZFSDataCompressionType::NOT_SET};
    bool m_dataCompressionTypeHasBeenSet = false;

    Aws::Vector<OpenZFSNfsExport> m_nfsExports;
    bool m_nfsExportsHasBeenSet = false;

    Aws::Vector<OpenZFSUserOrGroupQuota> m_userAndGroupQuotas;
    bool m_userAndGroupQuotasHasBeenSet = false;

    bool m_copyTagsToSnapshots{false};
    bool m_copyTagsToSnapshotsHasBeenSet = false;

    bool m_readOnly{false};
    bool m_readOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
