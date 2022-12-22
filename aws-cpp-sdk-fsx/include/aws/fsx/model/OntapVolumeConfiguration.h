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
    AWS_FSX_API OntapVolumeConfiguration();
    AWS_FSX_API OntapVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OntapVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the FlexCache endpoint type of the volume. Valid values are the
     * following:</p> <ul> <li> <p> <code>NONE</code> specifies that the volume doesn't
     * have a FlexCache configuration. <code>NONE</code> is the default.</p> </li> <li>
     * <p> <code>ORIGIN</code> specifies that the volume is the origin volume for a
     * FlexCache volume.</p> </li> <li> <p> <code>CACHE</code> specifies that the
     * volume is a FlexCache volume.</p> </li> </ul>
     */
    inline const FlexCacheEndpointType& GetFlexCacheEndpointType() const{ return m_flexCacheEndpointType; }

    /**
     * <p>Specifies the FlexCache endpoint type of the volume. Valid values are the
     * following:</p> <ul> <li> <p> <code>NONE</code> specifies that the volume doesn't
     * have a FlexCache configuration. <code>NONE</code> is the default.</p> </li> <li>
     * <p> <code>ORIGIN</code> specifies that the volume is the origin volume for a
     * FlexCache volume.</p> </li> <li> <p> <code>CACHE</code> specifies that the
     * volume is a FlexCache volume.</p> </li> </ul>
     */
    inline bool FlexCacheEndpointTypeHasBeenSet() const { return m_flexCacheEndpointTypeHasBeenSet; }

    /**
     * <p>Specifies the FlexCache endpoint type of the volume. Valid values are the
     * following:</p> <ul> <li> <p> <code>NONE</code> specifies that the volume doesn't
     * have a FlexCache configuration. <code>NONE</code> is the default.</p> </li> <li>
     * <p> <code>ORIGIN</code> specifies that the volume is the origin volume for a
     * FlexCache volume.</p> </li> <li> <p> <code>CACHE</code> specifies that the
     * volume is a FlexCache volume.</p> </li> </ul>
     */
    inline void SetFlexCacheEndpointType(const FlexCacheEndpointType& value) { m_flexCacheEndpointTypeHasBeenSet = true; m_flexCacheEndpointType = value; }

    /**
     * <p>Specifies the FlexCache endpoint type of the volume. Valid values are the
     * following:</p> <ul> <li> <p> <code>NONE</code> specifies that the volume doesn't
     * have a FlexCache configuration. <code>NONE</code> is the default.</p> </li> <li>
     * <p> <code>ORIGIN</code> specifies that the volume is the origin volume for a
     * FlexCache volume.</p> </li> <li> <p> <code>CACHE</code> specifies that the
     * volume is a FlexCache volume.</p> </li> </ul>
     */
    inline void SetFlexCacheEndpointType(FlexCacheEndpointType&& value) { m_flexCacheEndpointTypeHasBeenSet = true; m_flexCacheEndpointType = std::move(value); }

    /**
     * <p>Specifies the FlexCache endpoint type of the volume. Valid values are the
     * following:</p> <ul> <li> <p> <code>NONE</code> specifies that the volume doesn't
     * have a FlexCache configuration. <code>NONE</code> is the default.</p> </li> <li>
     * <p> <code>ORIGIN</code> specifies that the volume is the origin volume for a
     * FlexCache volume.</p> </li> <li> <p> <code>CACHE</code> specifies that the
     * volume is a FlexCache volume.</p> </li> </ul>
     */
    inline OntapVolumeConfiguration& WithFlexCacheEndpointType(const FlexCacheEndpointType& value) { SetFlexCacheEndpointType(value); return *this;}

    /**
     * <p>Specifies the FlexCache endpoint type of the volume. Valid values are the
     * following:</p> <ul> <li> <p> <code>NONE</code> specifies that the volume doesn't
     * have a FlexCache configuration. <code>NONE</code> is the default.</p> </li> <li>
     * <p> <code>ORIGIN</code> specifies that the volume is the origin volume for a
     * FlexCache volume.</p> </li> <li> <p> <code>CACHE</code> specifies that the
     * volume is a FlexCache volume.</p> </li> </ul>
     */
    inline OntapVolumeConfiguration& WithFlexCacheEndpointType(FlexCacheEndpointType&& value) { SetFlexCacheEndpointType(std::move(value)); return *this;}


    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline const Aws::String& GetJunctionPath() const{ return m_junctionPath; }

    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline bool JunctionPathHasBeenSet() const { return m_junctionPathHasBeenSet; }

    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline void SetJunctionPath(const Aws::String& value) { m_junctionPathHasBeenSet = true; m_junctionPath = value; }

    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline void SetJunctionPath(Aws::String&& value) { m_junctionPathHasBeenSet = true; m_junctionPath = std::move(value); }

    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline void SetJunctionPath(const char* value) { m_junctionPathHasBeenSet = true; m_junctionPath.assign(value); }

    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline OntapVolumeConfiguration& WithJunctionPath(const Aws::String& value) { SetJunctionPath(value); return *this;}

    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline OntapVolumeConfiguration& WithJunctionPath(Aws::String&& value) { SetJunctionPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the directory that network-attached storage (NAS) clients use to
     * mount the volume, along with the storage virtual machine (SVM) Domain Name
     * System (DNS) name or IP address. You can create a <code>JunctionPath</code>
     * directly below a parent volume junction or on a directory within a volume. A
     * <code>JunctionPath</code> for a volume named <code>vol3</code> might be
     * <code>/vol1/vol2/vol3</code>, or <code>/vol1/dir2/vol3</code>, or even
     * <code>/dir1/dir2/vol3</code>.</p>
     */
    inline OntapVolumeConfiguration& WithJunctionPath(const char* value) { SetJunctionPath(value); return *this;}


    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline const SecurityStyle& GetSecurityStyle() const{ return m_securityStyle; }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline void SetSecurityStyle(const SecurityStyle& value) { m_securityStyleHasBeenSet = true; m_securityStyle = value; }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline void SetSecurityStyle(SecurityStyle&& value) { m_securityStyleHasBeenSet = true; m_securityStyle = std::move(value); }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline OntapVolumeConfiguration& WithSecurityStyle(const SecurityStyle& value) { SetSecurityStyle(value); return *this;}

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline OntapVolumeConfiguration& WithSecurityStyle(SecurityStyle&& value) { SetSecurityStyle(std::move(value)); return *this;}


    /**
     * <p>The configured size of the volume, in megabytes (MBs).</p>
     */
    inline int GetSizeInMegabytes() const{ return m_sizeInMegabytes; }

    /**
     * <p>The configured size of the volume, in megabytes (MBs).</p>
     */
    inline bool SizeInMegabytesHasBeenSet() const { return m_sizeInMegabytesHasBeenSet; }

    /**
     * <p>The configured size of the volume, in megabytes (MBs).</p>
     */
    inline void SetSizeInMegabytes(int value) { m_sizeInMegabytesHasBeenSet = true; m_sizeInMegabytes = value; }

    /**
     * <p>The configured size of the volume, in megabytes (MBs).</p>
     */
    inline OntapVolumeConfiguration& WithSizeInMegabytes(int value) { SetSizeInMegabytes(value); return *this;}


    /**
     * <p>The volume's storage efficiency setting.</p>
     */
    inline bool GetStorageEfficiencyEnabled() const{ return m_storageEfficiencyEnabled; }

    /**
     * <p>The volume's storage efficiency setting.</p>
     */
    inline bool StorageEfficiencyEnabledHasBeenSet() const { return m_storageEfficiencyEnabledHasBeenSet; }

    /**
     * <p>The volume's storage efficiency setting.</p>
     */
    inline void SetStorageEfficiencyEnabled(bool value) { m_storageEfficiencyEnabledHasBeenSet = true; m_storageEfficiencyEnabled = value; }

    /**
     * <p>The volume's storage efficiency setting.</p>
     */
    inline OntapVolumeConfiguration& WithStorageEfficiencyEnabled(bool value) { SetStorageEfficiencyEnabled(value); return *this;}


    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const{ return m_storageVirtualMachineId; }

    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }

    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline void SetStorageVirtualMachineId(const Aws::String& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = value; }

    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline void SetStorageVirtualMachineId(Aws::String&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::move(value); }

    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline void SetStorageVirtualMachineId(const char* value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId.assign(value); }

    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline OntapVolumeConfiguration& WithStorageVirtualMachineId(const Aws::String& value) { SetStorageVirtualMachineId(value); return *this;}

    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline OntapVolumeConfiguration& WithStorageVirtualMachineId(Aws::String&& value) { SetStorageVirtualMachineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume's storage virtual machine.</p>
     */
    inline OntapVolumeConfiguration& WithStorageVirtualMachineId(const char* value) { SetStorageVirtualMachineId(value); return *this;}


    /**
     * <p>A Boolean flag indicating whether this volume is the root volume for its
     * storage virtual machine (SVM). Only one volume on an SVM can be the root volume.
     * This value defaults to <code>false</code>. If this value is <code>true</code>,
     * then this is the SVM root volume.</p> <p>This flag is useful when you're
     * deleting an SVM, because you must first delete all non-root volumes. This flag,
     * when set to <code>false</code>, helps you identify which volumes to delete
     * before you can delete the SVM.</p>
     */
    inline bool GetStorageVirtualMachineRoot() const{ return m_storageVirtualMachineRoot; }

    /**
     * <p>A Boolean flag indicating whether this volume is the root volume for its
     * storage virtual machine (SVM). Only one volume on an SVM can be the root volume.
     * This value defaults to <code>false</code>. If this value is <code>true</code>,
     * then this is the SVM root volume.</p> <p>This flag is useful when you're
     * deleting an SVM, because you must first delete all non-root volumes. This flag,
     * when set to <code>false</code>, helps you identify which volumes to delete
     * before you can delete the SVM.</p>
     */
    inline bool StorageVirtualMachineRootHasBeenSet() const { return m_storageVirtualMachineRootHasBeenSet; }

    /**
     * <p>A Boolean flag indicating whether this volume is the root volume for its
     * storage virtual machine (SVM). Only one volume on an SVM can be the root volume.
     * This value defaults to <code>false</code>. If this value is <code>true</code>,
     * then this is the SVM root volume.</p> <p>This flag is useful when you're
     * deleting an SVM, because you must first delete all non-root volumes. This flag,
     * when set to <code>false</code>, helps you identify which volumes to delete
     * before you can delete the SVM.</p>
     */
    inline void SetStorageVirtualMachineRoot(bool value) { m_storageVirtualMachineRootHasBeenSet = true; m_storageVirtualMachineRoot = value; }

    /**
     * <p>A Boolean flag indicating whether this volume is the root volume for its
     * storage virtual machine (SVM). Only one volume on an SVM can be the root volume.
     * This value defaults to <code>false</code>. If this value is <code>true</code>,
     * then this is the SVM root volume.</p> <p>This flag is useful when you're
     * deleting an SVM, because you must first delete all non-root volumes. This flag,
     * when set to <code>false</code>, helps you identify which volumes to delete
     * before you can delete the SVM.</p>
     */
    inline OntapVolumeConfiguration& WithStorageVirtualMachineRoot(bool value) { SetStorageVirtualMachineRoot(value); return *this;}


    /**
     * <p>The volume's <code>TieringPolicy</code> setting.</p>
     */
    inline const TieringPolicy& GetTieringPolicy() const{ return m_tieringPolicy; }

    /**
     * <p>The volume's <code>TieringPolicy</code> setting.</p>
     */
    inline bool TieringPolicyHasBeenSet() const { return m_tieringPolicyHasBeenSet; }

    /**
     * <p>The volume's <code>TieringPolicy</code> setting.</p>
     */
    inline void SetTieringPolicy(const TieringPolicy& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = value; }

    /**
     * <p>The volume's <code>TieringPolicy</code> setting.</p>
     */
    inline void SetTieringPolicy(TieringPolicy&& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = std::move(value); }

    /**
     * <p>The volume's <code>TieringPolicy</code> setting.</p>
     */
    inline OntapVolumeConfiguration& WithTieringPolicy(const TieringPolicy& value) { SetTieringPolicy(value); return *this;}

    /**
     * <p>The volume's <code>TieringPolicy</code> setting.</p>
     */
    inline OntapVolumeConfiguration& WithTieringPolicy(TieringPolicy&& value) { SetTieringPolicy(std::move(value)); return *this;}


    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }

    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUIDHasBeenSet = true; m_uUID = std::move(value); }

    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline void SetUUID(const char* value) { m_uUIDHasBeenSet = true; m_uUID.assign(value); }

    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline OntapVolumeConfiguration& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline OntapVolumeConfiguration& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The volume's universally unique identifier (UUID).</p>
     */
    inline OntapVolumeConfiguration& WithUUID(const char* value) { SetUUID(value); return *this;}


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
    inline const OntapVolumeType& GetOntapVolumeType() const{ return m_ontapVolumeType; }

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
    inline bool OntapVolumeTypeHasBeenSet() const { return m_ontapVolumeTypeHasBeenSet; }

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
    inline void SetOntapVolumeType(const OntapVolumeType& value) { m_ontapVolumeTypeHasBeenSet = true; m_ontapVolumeType = value; }

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
    inline void SetOntapVolumeType(OntapVolumeType&& value) { m_ontapVolumeTypeHasBeenSet = true; m_ontapVolumeType = std::move(value); }

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
    inline OntapVolumeConfiguration& WithOntapVolumeType(const OntapVolumeType& value) { SetOntapVolumeType(value); return *this;}

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
    inline OntapVolumeConfiguration& WithOntapVolumeType(OntapVolumeType&& value) { SetOntapVolumeType(std::move(value)); return *this;}


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
    inline OntapVolumeConfiguration& WithSnapshotPolicy(const Aws::String& value) { SetSnapshotPolicy(value); return *this;}

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
    inline OntapVolumeConfiguration& WithSnapshotPolicy(Aws::String&& value) { SetSnapshotPolicy(std::move(value)); return *this;}

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
    inline OntapVolumeConfiguration& WithSnapshotPolicy(const char* value) { SetSnapshotPolicy(value); return *this;}


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
    inline OntapVolumeConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}

  private:

    FlexCacheEndpointType m_flexCacheEndpointType;
    bool m_flexCacheEndpointTypeHasBeenSet = false;

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

    bool m_storageVirtualMachineRoot;
    bool m_storageVirtualMachineRootHasBeenSet = false;

    TieringPolicy m_tieringPolicy;
    bool m_tieringPolicyHasBeenSet = false;

    Aws::String m_uUID;
    bool m_uUIDHasBeenSet = false;

    OntapVolumeType m_ontapVolumeType;
    bool m_ontapVolumeTypeHasBeenSet = false;

    Aws::String m_snapshotPolicy;
    bool m_snapshotPolicyHasBeenSet = false;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
