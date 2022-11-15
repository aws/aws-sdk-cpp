/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SecurityStyle.h>
#include <aws/fsx/model/TieringPolicy.h>
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
  class AWS_FSX_API CreateOntapVolumeConfiguration
  {
  public:
    CreateOntapVolumeConfiguration();
    CreateOntapVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CreateOntapVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
