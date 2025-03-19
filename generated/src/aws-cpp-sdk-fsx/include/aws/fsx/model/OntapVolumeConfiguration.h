/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FlexCacheEndpointType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SecurityStyle.h>
#include <aws/fsx/model/TieringPolicy.h>
#include <aws/fsx/model/OntapVolumeType.h>
#include <aws/fsx/model/SnaplockConfiguration.h>
#include <aws/fsx/model/VolumeStyle.h>
#include <aws/fsx/model/AggregateConfiguration.h>
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
   * <p>The configuration of an Amazon FSx for NetApp ONTAP volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OntapVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class OntapVolumeConfiguration
  {
  public:
    AWS_FSX_API OntapVolumeConfiguration() = default;
    AWS_FSX_API OntapVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OntapVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the FlexCache endpoint type of the volume. Valid values are the
     * following:</p> <ul> <li> <p> <code>NONE</code> specifies that the volume doesn't
     * have a FlexCache configuration. <code>NONE</code> is the default.</p> </li> <li>
     * <p> <code>ORIGIN</code> specifies that the volume is the origin volume for a
     * FlexCache volume.</p> </li> <li> <p> <code>CACHE</code> specifies that the
     * volume is a FlexCache volume.</p> </li> </ul>
     */
    inline FlexCacheEndpointType GetFlexCacheEndpointType() const { return m_flexCacheEndpointType; }
    inline bool FlexCacheEndpointTypeHasBeenSet() const { return m_flexCacheEndpointTypeHasBeenSet; }
    inline void SetFlexCacheEndpointType(FlexCacheEndpointType value) { m_flexCacheEndpointTypeHasBeenSet = true; m_flexCacheEndpointType = value; }
    inline OntapVolumeConfiguration& WithFlexCacheEndpointType(FlexCacheEndpointType value) { SetFlexCacheEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline const Aws::String& GetJunctionPath() const { return m_junctionPath; }
    inline bool JunctionPathHasBeenSet() const { return m_junctionPathHasBeenSet; }
    template<typename JunctionPathT = Aws::String>
    void SetJunctionPath(JunctionPathT&& value) { m_junctionPathHasBeenSet = true; m_junctionPath = std::forward<JunctionPathT>(value); }
    template<typename JunctionPathT = Aws::String>
    OntapVolumeConfiguration& WithJunctionPath(JunctionPathT&& value) { SetJunctionPath(std::forward<JunctionPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline SecurityStyle GetSecurityStyle() const { return m_securityStyle; }
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }
    inline void SetSecurityStyle(SecurityStyle value) { m_securityStyleHasBeenSet = true; m_securityStyle = value; }
    inline OntapVolumeConfiguration& WithSecurityStyle(SecurityStyle value) { SetSecurityStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured size of the volume, in megabytes (MBs).</p>
     */
    inline int GetSizeInMegabytes() const { return m_sizeInMegabytes; }
    inline bool SizeInMegabytesHasBeenSet() const { return m_sizeInMegabytesHasBeenSet; }
    inline void SetSizeInMegabytes(int value) { m_sizeInMegabytesHasBeenSet = true; m_sizeInMegabytes = value; }
    inline OntapVolumeConfiguration& WithSizeInMegabytes(int value) { SetSizeInMegabytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume's storage efficiency setting.</p>
     */
    inline bool GetStorageEfficiencyEnabled() const { return m_storageEfficiencyEnabled; }
    inline bool StorageEfficiencyEnabledHasBeenSet() const { return m_storageEfficiencyEnabledHasBeenSet; }
    inline void SetStorageEfficiencyEnabled(bool value) { m_storageEfficiencyEnabledHasBeenSet = true; m_storageEfficiencyEnabled = value; }
    inline OntapVolumeConfiguration& WithStorageEfficiencyEnabled(bool value) { SetStorageEfficiencyEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
    template<typename StorageVirtualMachineIdT = Aws::String>
    void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value); }
    template<typename StorageVirtualMachineIdT = Aws::String>
    OntapVolumeConfiguration& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag indicating whether this volume is the root volume for its
     * storage virtual machine (SVM). Only one volume on an SVM can be the root volume.
     * This value defaults to <code>false</code>. If this value is <code>true</code>,
     * then this is the SVM root volume.</p> <p>This flag is useful when you're
     * deleting an SVM, because you must first delete all non-root volumes. This flag,
     * when set to <code>false</code>, helps you identify which volumes to delete
     * before you can delete the SVM.</p>
     */
    inline bool GetStorageVirtualMachineRoot() const { return m_storageVirtualMachineRoot; }
    inline bool StorageVirtualMachineRootHasBeenSet() const { return m_storageVirtualMachineRootHasBeenSet; }
    inline void SetStorageVirtualMachineRoot(bool value) { m_storageVirtualMachineRootHasBeenSet = true; m_storageVirtualMachineRoot = value; }
    inline OntapVolumeConfiguration& WithStorageVirtualMachineRoot(bool value) { SetStorageVirtualMachineRoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume's <code>TieringPolicy</code> setting.</p>
     */
    inline const TieringPolicy& GetTieringPolicy() const { return m_tieringPolicy; }
    inline bool TieringPolicyHasBeenSet() const { return m_tieringPolicyHasBeenSet; }
    template<typename TieringPolicyT = TieringPolicy>
    void SetTieringPolicy(TieringPolicyT&& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = std::forward<TieringPolicyT>(value); }
    template<typename TieringPolicyT = TieringPolicy>
    OntapVolumeConfiguration& WithTieringPolicy(TieringPolicyT&& value) { SetTieringPolicy(std::forward<TieringPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline const Aws::String& GetUUID() const { return m_uUID; }
    inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
    template<typename UUIDT = Aws::String>
    void SetUUID(UUIDT&& value) { m_uUIDHasBeenSet = true; m_uUID = std::forward<UUIDT>(value); }
    template<typename UUIDT = Aws::String>
    OntapVolumeConfiguration& WithUUID(UUIDT&& value) { SetUUID(std::forward<UUIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of volume. Valid values are the following:</p> <ul> <li>
     * <p> <code>RW</code> specifies a read/write volume. <code>RW</code> is the
     * default.</p> </li> <li> <p> <code>DP</code> specifies a data-protection volume.
     * You can protect data by replicating it to data-protection mirror copies. If a
     * disaster occurs, you can use these data-protection mirror copies to recover
     * data.</p> </li> <li> <p> <code>LS</code> specifies a load-sharing mirror volume.
     * A load-sharing mirror reduces the network traffic to a FlexVol volume by
     * providing additional read-only access to clients.</p> </li> </ul>
     */
    inline OntapVolumeType GetOntapVolumeType() const { return m_ontapVolumeType; }
    inline bool OntapVolumeTypeHasBeenSet() const { return m_ontapVolumeTypeHasBeenSet; }
    inline void SetOntapVolumeType(OntapVolumeType value) { m_ontapVolumeTypeHasBeenSet = true; m_ontapVolumeType = value; }
    inline OntapVolumeConfiguration& WithOntapVolumeType(OntapVolumeType value) { SetOntapVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the snapshot policy for the volume. There are three built-in
     * snapshot policies:</p> <ul> <li> <p> <code>default</code>: This is the default
     * policy. A maximum of six hourly snapshots taken five minutes past the hour. A
     * maximum of two daily snapshots taken Monday through Saturday at 10 minutes after
     * midnight. A maximum of two weekly snapshots taken every Sunday at 15 minutes
     * after midnight.</p> </li> <li> <p> <code>default-1weekly</code>: This policy is
     * the same as the <code>default</code> policy except that it only retains one
     * snapshot from the weekly schedule.</p> </li> <li> <p> <code>none</code>: This
     * policy does not take any snapshots. This policy can be assigned to volumes to
     * prevent automatic snapshots from being taken.</p> </li> </ul> <p>You can also
     * provide the name of a custom policy that you created with the ONTAP CLI or REST
     * API.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snapshots-ontap.html#snapshot-policies">Snapshot
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline const Aws::String& GetSnapshotPolicy() const { return m_snapshotPolicy; }
    inline bool SnapshotPolicyHasBeenSet() const { return m_snapshotPolicyHasBeenSet; }
    template<typename SnapshotPolicyT = Aws::String>
    void SetSnapshotPolicy(SnapshotPolicyT&& value) { m_snapshotPolicyHasBeenSet = true; m_snapshotPolicy = std::forward<SnapshotPolicyT>(value); }
    template<typename SnapshotPolicyT = Aws::String>
    OntapVolumeConfiguration& WithSnapshotPolicy(SnapshotPolicyT&& value) { SetSnapshotPolicy(std::forward<SnapshotPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether tags for the volume should be copied to
     * backups. This value defaults to false. If it's set to true, all tags for the
     * volume are copied to all automatic and user-initiated backups where the user
     * doesn't specify tags. If this value is true, and you specify one or more tags,
     * only the specified tags are copied to backups. If you specify one or more tags
     * when creating a user-initiated backup, no tags are copied from the volume,
     * regardless of this value.</p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline OntapVolumeConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SnapLock configuration object for an FSx for ONTAP SnapLock volume. </p>
     */
    inline const SnaplockConfiguration& GetSnaplockConfiguration() const { return m_snaplockConfiguration; }
    inline bool SnaplockConfigurationHasBeenSet() const { return m_snaplockConfigurationHasBeenSet; }
    template<typename SnaplockConfigurationT = SnaplockConfiguration>
    void SetSnaplockConfiguration(SnaplockConfigurationT&& value) { m_snaplockConfigurationHasBeenSet = true; m_snaplockConfiguration = std::forward<SnaplockConfigurationT>(value); }
    template<typename SnaplockConfigurationT = SnaplockConfiguration>
    OntapVolumeConfiguration& WithSnaplockConfiguration(SnaplockConfigurationT&& value) { SetSnaplockConfiguration(std::forward<SnaplockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to specify the style of an ONTAP volume. For more information about
     * FlexVols and FlexGroups, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-types.html">Volume
     * types</a> in Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline VolumeStyle GetVolumeStyle() const { return m_volumeStyle; }
    inline bool VolumeStyleHasBeenSet() const { return m_volumeStyleHasBeenSet; }
    inline void SetVolumeStyle(VolumeStyle value) { m_volumeStyleHasBeenSet = true; m_volumeStyle = value; }
    inline OntapVolumeConfiguration& WithVolumeStyle(VolumeStyle value) { SetVolumeStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure specifies configuration options for a volume’s storage
     * aggregate or aggregates.</p>
     */
    inline const AggregateConfiguration& GetAggregateConfiguration() const { return m_aggregateConfiguration; }
    inline bool AggregateConfigurationHasBeenSet() const { return m_aggregateConfigurationHasBeenSet; }
    template<typename AggregateConfigurationT = AggregateConfiguration>
    void SetAggregateConfiguration(AggregateConfigurationT&& value) { m_aggregateConfigurationHasBeenSet = true; m_aggregateConfiguration = std::forward<AggregateConfigurationT>(value); }
    template<typename AggregateConfigurationT = AggregateConfiguration>
    OntapVolumeConfiguration& WithAggregateConfiguration(AggregateConfigurationT&& value) { SetAggregateConfiguration(std::forward<AggregateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured size of the volume, in bytes.</p>
     */
    inline long long GetSizeInBytes() const { return m_sizeInBytes; }
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline OntapVolumeConfiguration& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}
  private:

    FlexCacheEndpointType m_flexCacheEndpointType{FlexCacheEndpointType::NOT_SET};
    bool m_flexCacheEndpointTypeHasBeenSet = false;

    Aws::String m_junctionPath;
    bool m_junctionPathHasBeenSet = false;

    SecurityStyle m_securityStyle{SecurityStyle::NOT_SET};
    bool m_securityStyleHasBeenSet = false;

    int m_sizeInMegabytes{0};
    bool m_sizeInMegabytesHasBeenSet = false;

    bool m_storageEfficiencyEnabled{false};
    bool m_storageEfficiencyEnabledHasBeenSet = false;

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;

    bool m_storageVirtualMachineRoot{false};
    bool m_storageVirtualMachineRootHasBeenSet = false;

    TieringPolicy m_tieringPolicy;
    bool m_tieringPolicyHasBeenSet = false;

    Aws::String m_uUID;
    bool m_uUIDHasBeenSet = false;

    OntapVolumeType m_ontapVolumeType{OntapVolumeType::NOT_SET};
    bool m_ontapVolumeTypeHasBeenSet = false;

    Aws::String m_snapshotPolicy;
    bool m_snapshotPolicyHasBeenSet = false;

    bool m_copyTagsToBackups{false};
    bool m_copyTagsToBackupsHasBeenSet = false;

    SnaplockConfiguration m_snaplockConfiguration;
    bool m_snaplockConfigurationHasBeenSet = false;

    VolumeStyle m_volumeStyle{VolumeStyle::NOT_SET};
    bool m_volumeStyleHasBeenSet = false;

    AggregateConfiguration m_aggregateConfiguration;
    bool m_aggregateConfigurationHasBeenSet = false;

    long long m_sizeInBytes{0};
    bool m_sizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
