/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SecurityStyle.h>
#include <aws/fsx/model/TieringPolicy.h>
#include <aws/fsx/model/InputOntapVolumeType.h>
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
   * <p>Specifies the configuration of the ONTAP volume that you are
   * creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateOntapVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateOntapVolumeConfiguration
  {
  public:
    AWS_FSX_API CreateOntapVolumeConfiguration();
    AWS_FSX_API CreateOntapVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateOntapVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline const Aws::String& GetJunctionPath() const{ return m_junctionPath; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline bool JunctionPathHasBeenSet() const { return m_junctionPathHasBeenSet; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(const Aws::String& value) { m_junctionPathHasBeenSet = true; m_junctionPath = value; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(Aws::String&& value) { m_junctionPathHasBeenSet = true; m_junctionPath = std::move(value); }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(const char* value) { m_junctionPathHasBeenSet = true; m_junctionPath.assign(value); }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithJunctionPath(const Aws::String& value) { SetJunctionPath(value); return *this;}

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithJunctionPath(Aws::String&& value) { SetJunctionPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithJunctionPath(const char* value) { SetJunctionPath(value); return *this;}


    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-volumes.html#volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> if the file system is managed by both UNIX and
     * Windows administrators and users consist of both NFS and SMB clients.</p> </li>
     * </ul>
     */
    inline const SecurityStyle& GetSecurityStyle() const{ return m_securityStyle; }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-volumes.html#volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> if the file system is managed by both UNIX and
     * Windows administrators and users consist of both NFS and SMB clients.</p> </li>
     * </ul>
     */
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-volumes.html#volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> if the file system is managed by both UNIX and
     * Windows administrators and users consist of both NFS and SMB clients.</p> </li>
     * </ul>
     */
    inline void SetSecurityStyle(const SecurityStyle& value) { m_securityStyleHasBeenSet = true; m_securityStyle = value; }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-volumes.html#volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> if the file system is managed by both UNIX and
     * Windows administrators and users consist of both NFS and SMB clients.</p> </li>
     * </ul>
     */
    inline void SetSecurityStyle(SecurityStyle&& value) { m_securityStyleHasBeenSet = true; m_securityStyle = std::move(value); }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-volumes.html#volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> if the file system is managed by both UNIX and
     * Windows administrators and users consist of both NFS and SMB clients.</p> </li>
     * </ul>
     */
    inline CreateOntapVolumeConfiguration& WithSecurityStyle(const SecurityStyle& value) { SetSecurityStyle(value); return *this;}

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-volumes.html#volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> if the file system is managed by both UNIX and
     * Windows administrators and users consist of both NFS and SMB clients.</p> </li>
     * </ul>
     */
    inline CreateOntapVolumeConfiguration& WithSecurityStyle(SecurityStyle&& value) { SetSecurityStyle(std::move(value)); return *this;}


    /**
     * <p>Specifies the size of the volume, in megabytes (MB), that you are
     * creating.</p>
     */
    inline int GetSizeInMegabytes() const{ return m_sizeInMegabytes; }

    /**
     * <p>Specifies the size of the volume, in megabytes (MB), that you are
     * creating.</p>
     */
    inline bool SizeInMegabytesHasBeenSet() const { return m_sizeInMegabytesHasBeenSet; }

    /**
     * <p>Specifies the size of the volume, in megabytes (MB), that you are
     * creating.</p>
     */
    inline void SetSizeInMegabytes(int value) { m_sizeInMegabytesHasBeenSet = true; m_sizeInMegabytes = value; }

    /**
     * <p>Specifies the size of the volume, in megabytes (MB), that you are
     * creating.</p>
     */
    inline CreateOntapVolumeConfiguration& WithSizeInMegabytes(int value) { SetSizeInMegabytes(value); return *this;}


    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume.</p>
     */
    inline bool GetStorageEfficiencyEnabled() const{ return m_storageEfficiencyEnabled; }

    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume.</p>
     */
    inline bool StorageEfficiencyEnabledHasBeenSet() const { return m_storageEfficiencyEnabledHasBeenSet; }

    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume.</p>
     */
    inline void SetStorageEfficiencyEnabled(bool value) { m_storageEfficiencyEnabledHasBeenSet = true; m_storageEfficiencyEnabled = value; }

    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume.</p>
     */
    inline CreateOntapVolumeConfiguration& WithStorageEfficiencyEnabled(bool value) { SetStorageEfficiencyEnabled(value); return *this;}


    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const{ return m_storageVirtualMachineId; }

    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }

    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline void SetStorageVirtualMachineId(const Aws::String& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = value; }

    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline void SetStorageVirtualMachineId(Aws::String&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::move(value); }

    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline void SetStorageVirtualMachineId(const char* value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId.assign(value); }

    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline CreateOntapVolumeConfiguration& WithStorageVirtualMachineId(const Aws::String& value) { SetStorageVirtualMachineId(value); return *this;}

    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline CreateOntapVolumeConfiguration& WithStorageVirtualMachineId(Aws::String&& value) { SetStorageVirtualMachineId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ONTAP SVM in which to create the volume.</p>
     */
    inline CreateOntapVolumeConfiguration& WithStorageVirtualMachineId(const char* value) { SetStorageVirtualMachineId(value); return *this;}


    
    inline const TieringPolicy& GetTieringPolicy() const{ return m_tieringPolicy; }

    
    inline bool TieringPolicyHasBeenSet() const { return m_tieringPolicyHasBeenSet; }

    
    inline void SetTieringPolicy(const TieringPolicy& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = value; }

    
    inline void SetTieringPolicy(TieringPolicy&& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = std::move(value); }

    
    inline CreateOntapVolumeConfiguration& WithTieringPolicy(const TieringPolicy& value) { SetTieringPolicy(value); return *this;}

    
    inline CreateOntapVolumeConfiguration& WithTieringPolicy(TieringPolicy&& value) { SetTieringPolicy(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of volume you are creating. Valid values are the
     * following:</p> <ul> <li> <p> <code>RW</code> specifies a read/write volume.
     * <code>RW</code> is the default.</p> </li> <li> <p> <code>DP</code> specifies a
     * data-protection volume. A <code>DP</code> volume is read-only and can be used as
     * the destination of a NetApp SnapMirror relationship.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-types">Volume
     * types</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline const InputOntapVolumeType& GetOntapVolumeType() const{ return m_ontapVolumeType; }

    /**
     * <p>Specifies the type of volume you are creating. Valid values are the
     * following:</p> <ul> <li> <p> <code>RW</code> specifies a read/write volume.
     * <code>RW</code> is the default.</p> </li> <li> <p> <code>DP</code> specifies a
     * data-protection volume. A <code>DP</code> volume is read-only and can be used as
     * the destination of a NetApp SnapMirror relationship.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-types">Volume
     * types</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline bool OntapVolumeTypeHasBeenSet() const { return m_ontapVolumeTypeHasBeenSet; }

    /**
     * <p>Specifies the type of volume you are creating. Valid values are the
     * following:</p> <ul> <li> <p> <code>RW</code> specifies a read/write volume.
     * <code>RW</code> is the default.</p> </li> <li> <p> <code>DP</code> specifies a
     * data-protection volume. A <code>DP</code> volume is read-only and can be used as
     * the destination of a NetApp SnapMirror relationship.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-types">Volume
     * types</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline void SetOntapVolumeType(const InputOntapVolumeType& value) { m_ontapVolumeTypeHasBeenSet = true; m_ontapVolumeType = value; }

    /**
     * <p>Specifies the type of volume you are creating. Valid values are the
     * following:</p> <ul> <li> <p> <code>RW</code> specifies a read/write volume.
     * <code>RW</code> is the default.</p> </li> <li> <p> <code>DP</code> specifies a
     * data-protection volume. A <code>DP</code> volume is read-only and can be used as
     * the destination of a NetApp SnapMirror relationship.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-types">Volume
     * types</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline void SetOntapVolumeType(InputOntapVolumeType&& value) { m_ontapVolumeTypeHasBeenSet = true; m_ontapVolumeType = std::move(value); }

    /**
     * <p>Specifies the type of volume you are creating. Valid values are the
     * following:</p> <ul> <li> <p> <code>RW</code> specifies a read/write volume.
     * <code>RW</code> is the default.</p> </li> <li> <p> <code>DP</code> specifies a
     * data-protection volume. A <code>DP</code> volume is read-only and can be used as
     * the destination of a NetApp SnapMirror relationship.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-types">Volume
     * types</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithOntapVolumeType(const InputOntapVolumeType& value) { SetOntapVolumeType(value); return *this;}

    /**
     * <p>Specifies the type of volume you are creating. Valid values are the
     * following:</p> <ul> <li> <p> <code>RW</code> specifies a read/write volume.
     * <code>RW</code> is the default.</p> </li> <li> <p> <code>DP</code> specifies a
     * data-protection volume. A <code>DP</code> volume is read-only and can be used as
     * the destination of a NetApp SnapMirror relationship.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-types">Volume
     * types</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithOntapVolumeType(InputOntapVolumeType&& value) { SetOntapVolumeType(std::move(value)); return *this;}


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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline const Aws::String& GetSnapshotPolicy() const{ return m_snapshotPolicy; }

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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline bool SnapshotPolicyHasBeenSet() const { return m_snapshotPolicyHasBeenSet; }

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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline void SetSnapshotPolicy(const Aws::String& value) { m_snapshotPolicyHasBeenSet = true; m_snapshotPolicy = value; }

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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline void SetSnapshotPolicy(Aws::String&& value) { m_snapshotPolicyHasBeenSet = true; m_snapshotPolicy = std::move(value); }

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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline void SetSnapshotPolicy(const char* value) { m_snapshotPolicyHasBeenSet = true; m_snapshotPolicy.assign(value); }

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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithSnapshotPolicy(const Aws::String& value) { SetSnapshotPolicy(value); return *this;}

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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithSnapshotPolicy(Aws::String&& value) { SetSnapshotPolicy(std::move(value)); return *this;}

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
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithSnapshotPolicy(const char* value) { SetSnapshotPolicy(value); return *this;}


    /**
     * <p>A boolean flag indicating whether tags for the volume should be copied to
     * backups. This value defaults to false. If it's set to true, all tags for the
     * volume are copied to all automatic and user-initiated backups where the user
     * doesn't specify tags. If this value is true, and you specify one or more tags,
     * only the specified tags are copied to backups. If you specify one or more tags
     * when creating a user-initiated backup, no tags are copied from the volume,
     * regardless of this value.</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>A boolean flag indicating whether tags for the volume should be copied to
     * backups. This value defaults to false. If it's set to true, all tags for the
     * volume are copied to all automatic and user-initiated backups where the user
     * doesn't specify tags. If this value is true, and you specify one or more tags,
     * only the specified tags are copied to backups. If you specify one or more tags
     * when creating a user-initiated backup, no tags are copied from the volume,
     * regardless of this value.</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether tags for the volume should be copied to
     * backups. This value defaults to false. If it's set to true, all tags for the
     * volume are copied to all automatic and user-initiated backups where the user
     * doesn't specify tags. If this value is true, and you specify one or more tags,
     * only the specified tags are copied to backups. If you specify one or more tags
     * when creating a user-initiated backup, no tags are copied from the volume,
     * regardless of this value.</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>A boolean flag indicating whether tags for the volume should be copied to
     * backups. This value defaults to false. If it's set to true, all tags for the
     * volume are copied to all automatic and user-initiated backups where the user
     * doesn't specify tags. If this value is true, and you specify one or more tags,
     * only the specified tags are copied to backups. If you specify one or more tags
     * when creating a user-initiated backup, no tags are copied from the volume,
     * regardless of this value.</p>
     */
    inline CreateOntapVolumeConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}

  private:

    Aws::String m_junctionPath;
    bool m_junctionPathHasBeenSet = false;

    SecurityStyle m_securityStyle;
    bool m_securityStyleHasBeenSet = false;

    int m_sizeInMegabytes;
    bool m_sizeInMegabytesHasBeenSet = false;

    bool m_storageEfficiencyEnabled;
    bool m_storageEfficiencyEnabledHasBeenSet = false;

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;

    TieringPolicy m_tieringPolicy;
    bool m_tieringPolicyHasBeenSet = false;

    InputOntapVolumeType m_ontapVolumeType;
    bool m_ontapVolumeTypeHasBeenSet = false;

    Aws::String m_snapshotPolicy;
    bool m_snapshotPolicyHasBeenSet = false;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
