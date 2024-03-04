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
#include <aws/fsx/model/CreateSnaplockConfiguration.h>
#include <aws/fsx/model/VolumeStyle.h>
#include <aws/fsx/model/CreateAggregateConfiguration.h>
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
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline const Aws::String& GetJunctionPath() const{ return m_junctionPath; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline bool JunctionPathHasBeenSet() const { return m_junctionPathHasBeenSet; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(const Aws::String& value) { m_junctionPathHasBeenSet = true; m_junctionPath = value; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(Aws::String&& value) { m_junctionPathHasBeenSet = true; m_junctionPath = std::move(value); }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(const char* value) { m_junctionPathHasBeenSet = true; m_junctionPath.assign(value); }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithJunctionPath(const Aws::String& value) { SetJunctionPath(value); return *this;}

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithJunctionPath(Aws::String&& value) { SetJunctionPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * This parameter is required. The <code>JunctionPath</code> must have a leading
     * forward slash, such as <code>/vol3</code>.</p>
     */
    inline CreateOntapVolumeConfiguration& WithJunctionPath(const char* value) { SetJunctionPath(value); return *this;}


    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> This is an advanced setting. For more
     * information, see the topic <a
     * href="https://docs.netapp.com/us-en/ontap/nfs-admin/security-styles-their-effects-concept.html">What
     * the security styles and their effects are</a> in the NetApp Documentation
     * Center.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style.html">Volume
     * security style</a> in the FSx for ONTAP User Guide.</p>
     */
    inline const SecurityStyle& GetSecurityStyle() const{ return m_securityStyle; }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> This is an advanced setting. For more
     * information, see the topic <a
     * href="https://docs.netapp.com/us-en/ontap/nfs-admin/security-styles-their-effects-concept.html">What
     * the security styles and their effects are</a> in the NetApp Documentation
     * Center.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style.html">Volume
     * security style</a> in the FSx for ONTAP User Guide.</p>
     */
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> This is an advanced setting. For more
     * information, see the topic <a
     * href="https://docs.netapp.com/us-en/ontap/nfs-admin/security-styles-their-effects-concept.html">What
     * the security styles and their effects are</a> in the NetApp Documentation
     * Center.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style.html">Volume
     * security style</a> in the FSx for ONTAP User Guide.</p>
     */
    inline void SetSecurityStyle(const SecurityStyle& value) { m_securityStyleHasBeenSet = true; m_securityStyle = value; }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> This is an advanced setting. For more
     * information, see the topic <a
     * href="https://docs.netapp.com/us-en/ontap/nfs-admin/security-styles-their-effects-concept.html">What
     * the security styles and their effects are</a> in the NetApp Documentation
     * Center.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style.html">Volume
     * security style</a> in the FSx for ONTAP User Guide.</p>
     */
    inline void SetSecurityStyle(SecurityStyle&& value) { m_securityStyleHasBeenSet = true; m_securityStyle = std::move(value); }

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> This is an advanced setting. For more
     * information, see the topic <a
     * href="https://docs.netapp.com/us-en/ontap/nfs-admin/security-styles-their-effects-concept.html">What
     * the security styles and their effects are</a> in the NetApp Documentation
     * Center.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style.html">Volume
     * security style</a> in the FSx for ONTAP User Guide.</p>
     */
    inline CreateOntapVolumeConfiguration& WithSecurityStyle(const SecurityStyle& value) { SetSecurityStyle(value); return *this;}

    /**
     * <p>Specifies the security style for the volume. If a volume's security style is
     * not specified, it is automatically set to the root volume's security style. The
     * security style determines the type of permissions that FSx for ONTAP uses to
     * control data access. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style">Volume
     * security style</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>. Specify
     * one of the following values:</p> <ul> <li> <p> <code>UNIX</code> if the file
     * system is managed by a UNIX administrator, the majority of users are NFS
     * clients, and an application accessing the data uses a UNIX user as the service
     * account. </p> </li> <li> <p> <code>NTFS</code> if the file system is managed by
     * a Windows administrator, the majority of users are SMB clients, and an
     * application accessing the data uses a Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> This is an advanced setting. For more
     * information, see the topic <a
     * href="https://docs.netapp.com/us-en/ontap/nfs-admin/security-styles-their-effects-concept.html">What
     * the security styles and their effects are</a> in the NetApp Documentation
     * Center.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style.html">Volume
     * security style</a> in the FSx for ONTAP User Guide.</p>
     */
    inline CreateOntapVolumeConfiguration& WithSecurityStyle(SecurityStyle&& value) { SetSecurityStyle(std::move(value)); return *this;}


    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume, or set to false to disable them.</p> <p>
     * <code>StorageEfficiencyEnabled</code> is required when creating a
     * <code>RW</code> volume (<code>OntapVolumeType</code> set to
     * <code>RW</code>).</p>
     */
    inline bool GetStorageEfficiencyEnabled() const{ return m_storageEfficiencyEnabled; }

    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume, or set to false to disable them.</p> <p>
     * <code>StorageEfficiencyEnabled</code> is required when creating a
     * <code>RW</code> volume (<code>OntapVolumeType</code> set to
     * <code>RW</code>).</p>
     */
    inline bool StorageEfficiencyEnabledHasBeenSet() const { return m_storageEfficiencyEnabledHasBeenSet; }

    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume, or set to false to disable them.</p> <p>
     * <code>StorageEfficiencyEnabled</code> is required when creating a
     * <code>RW</code> volume (<code>OntapVolumeType</code> set to
     * <code>RW</code>).</p>
     */
    inline void SetStorageEfficiencyEnabled(bool value) { m_storageEfficiencyEnabledHasBeenSet = true; m_storageEfficiencyEnabled = value; }

    /**
     * <p>Set to true to enable deduplication, compression, and compaction storage
     * efficiency features on the volume, or set to false to disable them.</p> <p>
     * <code>StorageEfficiencyEnabled</code> is required when creating a
     * <code>RW</code> volume (<code>OntapVolumeType</code> set to
     * <code>RW</code>).</p>
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
     * types</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * types</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * types</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * types</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * types</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * types</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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
     * policies</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
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


    /**
     * <p>Specifies the SnapLock configuration for an FSx for ONTAP volume. </p>
     */
    inline const CreateSnaplockConfiguration& GetSnaplockConfiguration() const{ return m_snaplockConfiguration; }

    /**
     * <p>Specifies the SnapLock configuration for an FSx for ONTAP volume. </p>
     */
    inline bool SnaplockConfigurationHasBeenSet() const { return m_snaplockConfigurationHasBeenSet; }

    /**
     * <p>Specifies the SnapLock configuration for an FSx for ONTAP volume. </p>
     */
    inline void SetSnaplockConfiguration(const CreateSnaplockConfiguration& value) { m_snaplockConfigurationHasBeenSet = true; m_snaplockConfiguration = value; }

    /**
     * <p>Specifies the SnapLock configuration for an FSx for ONTAP volume. </p>
     */
    inline void SetSnaplockConfiguration(CreateSnaplockConfiguration&& value) { m_snaplockConfigurationHasBeenSet = true; m_snaplockConfiguration = std::move(value); }

    /**
     * <p>Specifies the SnapLock configuration for an FSx for ONTAP volume. </p>
     */
    inline CreateOntapVolumeConfiguration& WithSnaplockConfiguration(const CreateSnaplockConfiguration& value) { SetSnaplockConfiguration(value); return *this;}

    /**
     * <p>Specifies the SnapLock configuration for an FSx for ONTAP volume. </p>
     */
    inline CreateOntapVolumeConfiguration& WithSnaplockConfiguration(CreateSnaplockConfiguration&& value) { SetSnaplockConfiguration(std::move(value)); return *this;}


    /**
     * <p>Use to specify the style of an ONTAP volume. FSx for ONTAP offers two styles
     * of volumes that you can use for different purposes, FlexVol and FlexGroup
     * volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-styles.html">Volume
     * styles</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline const VolumeStyle& GetVolumeStyle() const{ return m_volumeStyle; }

    /**
     * <p>Use to specify the style of an ONTAP volume. FSx for ONTAP offers two styles
     * of volumes that you can use for different purposes, FlexVol and FlexGroup
     * volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-styles.html">Volume
     * styles</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline bool VolumeStyleHasBeenSet() const { return m_volumeStyleHasBeenSet; }

    /**
     * <p>Use to specify the style of an ONTAP volume. FSx for ONTAP offers two styles
     * of volumes that you can use for different purposes, FlexVol and FlexGroup
     * volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-styles.html">Volume
     * styles</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline void SetVolumeStyle(const VolumeStyle& value) { m_volumeStyleHasBeenSet = true; m_volumeStyle = value; }

    /**
     * <p>Use to specify the style of an ONTAP volume. FSx for ONTAP offers two styles
     * of volumes that you can use for different purposes, FlexVol and FlexGroup
     * volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-styles.html">Volume
     * styles</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline void SetVolumeStyle(VolumeStyle&& value) { m_volumeStyleHasBeenSet = true; m_volumeStyle = std::move(value); }

    /**
     * <p>Use to specify the style of an ONTAP volume. FSx for ONTAP offers two styles
     * of volumes that you can use for different purposes, FlexVol and FlexGroup
     * volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-styles.html">Volume
     * styles</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline CreateOntapVolumeConfiguration& WithVolumeStyle(const VolumeStyle& value) { SetVolumeStyle(value); return *this;}

    /**
     * <p>Use to specify the style of an ONTAP volume. FSx for ONTAP offers two styles
     * of volumes that you can use for different purposes, FlexVol and FlexGroup
     * volumes. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-styles.html">Volume
     * styles</a> in the Amazon FSx for NetApp ONTAP User Guide.</p>
     */
    inline CreateOntapVolumeConfiguration& WithVolumeStyle(VolumeStyle&& value) { SetVolumeStyle(std::move(value)); return *this;}


    /**
     * <p>Use to specify configuration options for a volume’s storage aggregate or
     * aggregates.</p>
     */
    inline const CreateAggregateConfiguration& GetAggregateConfiguration() const{ return m_aggregateConfiguration; }

    /**
     * <p>Use to specify configuration options for a volume’s storage aggregate or
     * aggregates.</p>
     */
    inline bool AggregateConfigurationHasBeenSet() const { return m_aggregateConfigurationHasBeenSet; }

    /**
     * <p>Use to specify configuration options for a volume’s storage aggregate or
     * aggregates.</p>
     */
    inline void SetAggregateConfiguration(const CreateAggregateConfiguration& value) { m_aggregateConfigurationHasBeenSet = true; m_aggregateConfiguration = value; }

    /**
     * <p>Use to specify configuration options for a volume’s storage aggregate or
     * aggregates.</p>
     */
    inline void SetAggregateConfiguration(CreateAggregateConfiguration&& value) { m_aggregateConfigurationHasBeenSet = true; m_aggregateConfiguration = std::move(value); }

    /**
     * <p>Use to specify configuration options for a volume’s storage aggregate or
     * aggregates.</p>
     */
    inline CreateOntapVolumeConfiguration& WithAggregateConfiguration(const CreateAggregateConfiguration& value) { SetAggregateConfiguration(value); return *this;}

    /**
     * <p>Use to specify configuration options for a volume’s storage aggregate or
     * aggregates.</p>
     */
    inline CreateOntapVolumeConfiguration& WithAggregateConfiguration(CreateAggregateConfiguration&& value) { SetAggregateConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the configured size of the volume, in bytes.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>Specifies the configured size of the volume, in bytes.</p>
     */
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }

    /**
     * <p>Specifies the configured size of the volume, in bytes.</p>
     */
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }

    /**
     * <p>Specifies the configured size of the volume, in bytes.</p>
     */
    inline CreateOntapVolumeConfiguration& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}

  private:

    Aws::String m_junctionPath;
    bool m_junctionPathHasBeenSet = false;

    SecurityStyle m_securityStyle;
    bool m_securityStyleHasBeenSet = false;

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

    CreateSnaplockConfiguration m_snaplockConfiguration;
    bool m_snaplockConfigurationHasBeenSet = false;

    VolumeStyle m_volumeStyle;
    bool m_volumeStyleHasBeenSet = false;

    CreateAggregateConfiguration m_aggregateConfiguration;
    bool m_aggregateConfigurationHasBeenSet = false;

    long long m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
