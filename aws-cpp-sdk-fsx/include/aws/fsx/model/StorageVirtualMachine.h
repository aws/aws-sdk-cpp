/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SvmActiveDirectoryConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fsx/model/SvmEndpoints.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/StorageVirtualMachineLifecycle.h>
#include <aws/fsx/model/StorageVirtualMachineSubtype.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/fsx/model/StorageVirtualMachineRootVolumeSecurityStyle.h>
#include <aws/fsx/model/Tag.h>
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
   * <p>Describes the Amazon FSx for NetApp ONTAP storage virtual machine (SVM)
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/StorageVirtualMachine">AWS
   * API Reference</a></p>
   */
  class StorageVirtualMachine
  {
  public:
    AWS_FSX_API StorageVirtualMachine();
    AWS_FSX_API StorageVirtualMachine(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API StorageVirtualMachine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the Microsoft Active Directory configuration to which the SVM is
     * joined, if applicable.</p>
     */
    inline const SvmActiveDirectoryConfiguration& GetActiveDirectoryConfiguration() const{ return m_activeDirectoryConfiguration; }

    /**
     * <p>Describes the Microsoft Active Directory configuration to which the SVM is
     * joined, if applicable.</p>
     */
    inline bool ActiveDirectoryConfigurationHasBeenSet() const { return m_activeDirectoryConfigurationHasBeenSet; }

    /**
     * <p>Describes the Microsoft Active Directory configuration to which the SVM is
     * joined, if applicable.</p>
     */
    inline void SetActiveDirectoryConfiguration(const SvmActiveDirectoryConfiguration& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = value; }

    /**
     * <p>Describes the Microsoft Active Directory configuration to which the SVM is
     * joined, if applicable.</p>
     */
    inline void SetActiveDirectoryConfiguration(SvmActiveDirectoryConfiguration&& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = std::move(value); }

    /**
     * <p>Describes the Microsoft Active Directory configuration to which the SVM is
     * joined, if applicable.</p>
     */
    inline StorageVirtualMachine& WithActiveDirectoryConfiguration(const SvmActiveDirectoryConfiguration& value) { SetActiveDirectoryConfiguration(value); return *this;}

    /**
     * <p>Describes the Microsoft Active Directory configuration to which the SVM is
     * joined, if applicable.</p>
     */
    inline StorageVirtualMachine& WithActiveDirectoryConfiguration(SvmActiveDirectoryConfiguration&& value) { SetActiveDirectoryConfiguration(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline StorageVirtualMachine& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    
    inline StorageVirtualMachine& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The endpoints that are used to access data or to manage the SVM using the
     * NetApp ONTAP CLI, REST API, or NetApp CloudManager. They are the
     * <code>Iscsi</code>, <code>Management</code>, <code>Nfs</code>, and
     * <code>Smb</code> endpoints.</p>
     */
    inline const SvmEndpoints& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The endpoints that are used to access data or to manage the SVM using the
     * NetApp ONTAP CLI, REST API, or NetApp CloudManager. They are the
     * <code>Iscsi</code>, <code>Management</code>, <code>Nfs</code>, and
     * <code>Smb</code> endpoints.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>The endpoints that are used to access data or to manage the SVM using the
     * NetApp ONTAP CLI, REST API, or NetApp CloudManager. They are the
     * <code>Iscsi</code>, <code>Management</code>, <code>Nfs</code>, and
     * <code>Smb</code> endpoints.</p>
     */
    inline void SetEndpoints(const SvmEndpoints& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>The endpoints that are used to access data or to manage the SVM using the
     * NetApp ONTAP CLI, REST API, or NetApp CloudManager. They are the
     * <code>Iscsi</code>, <code>Management</code>, <code>Nfs</code>, and
     * <code>Smb</code> endpoints.</p>
     */
    inline void SetEndpoints(SvmEndpoints&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>The endpoints that are used to access data or to manage the SVM using the
     * NetApp ONTAP CLI, REST API, or NetApp CloudManager. They are the
     * <code>Iscsi</code>, <code>Management</code>, <code>Nfs</code>, and
     * <code>Smb</code> endpoints.</p>
     */
    inline StorageVirtualMachine& WithEndpoints(const SvmEndpoints& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The endpoints that are used to access data or to manage the SVM using the
     * NetApp ONTAP CLI, REST API, or NetApp CloudManager. They are the
     * <code>Iscsi</code>, <code>Management</code>, <code>Nfs</code>, and
     * <code>Smb</code> endpoints.</p>
     */
    inline StorageVirtualMachine& WithEndpoints(SvmEndpoints&& value) { SetEndpoints(std::move(value)); return *this;}


    
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    
    inline StorageVirtualMachine& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    
    inline StorageVirtualMachine& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    
    inline StorageVirtualMachine& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>Describes the SVM's lifecycle status.</p> <ul> <li> <p> <code>CREATED</code>
     * - The SVM is fully available for use.</p> </li> <li> <p> <code>CREATING</code> -
     * Amazon FSx is creating the new SVM.</p> </li> <li> <p> <code>DELETING</code> -
     * Amazon FSx is deleting an existing SVM.</p> </li> <li> <p> <code>FAILED</code> -
     * Amazon FSx was unable to create the SVM.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> - The SVM is in a failed but recoverable state.</p>
     * </li> <li> <p> <code>PENDING</code> - Amazon FSx has not started creating the
     * SVM.</p> </li> </ul>
     */
    inline const StorageVirtualMachineLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Describes the SVM's lifecycle status.</p> <ul> <li> <p> <code>CREATED</code>
     * - The SVM is fully available for use.</p> </li> <li> <p> <code>CREATING</code> -
     * Amazon FSx is creating the new SVM.</p> </li> <li> <p> <code>DELETING</code> -
     * Amazon FSx is deleting an existing SVM.</p> </li> <li> <p> <code>FAILED</code> -
     * Amazon FSx was unable to create the SVM.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> - The SVM is in a failed but recoverable state.</p>
     * </li> <li> <p> <code>PENDING</code> - Amazon FSx has not started creating the
     * SVM.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>Describes the SVM's lifecycle status.</p> <ul> <li> <p> <code>CREATED</code>
     * - The SVM is fully available for use.</p> </li> <li> <p> <code>CREATING</code> -
     * Amazon FSx is creating the new SVM.</p> </li> <li> <p> <code>DELETING</code> -
     * Amazon FSx is deleting an existing SVM.</p> </li> <li> <p> <code>FAILED</code> -
     * Amazon FSx was unable to create the SVM.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> - The SVM is in a failed but recoverable state.</p>
     * </li> <li> <p> <code>PENDING</code> - Amazon FSx has not started creating the
     * SVM.</p> </li> </ul>
     */
    inline void SetLifecycle(const StorageVirtualMachineLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>Describes the SVM's lifecycle status.</p> <ul> <li> <p> <code>CREATED</code>
     * - The SVM is fully available for use.</p> </li> <li> <p> <code>CREATING</code> -
     * Amazon FSx is creating the new SVM.</p> </li> <li> <p> <code>DELETING</code> -
     * Amazon FSx is deleting an existing SVM.</p> </li> <li> <p> <code>FAILED</code> -
     * Amazon FSx was unable to create the SVM.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> - The SVM is in a failed but recoverable state.</p>
     * </li> <li> <p> <code>PENDING</code> - Amazon FSx has not started creating the
     * SVM.</p> </li> </ul>
     */
    inline void SetLifecycle(StorageVirtualMachineLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>Describes the SVM's lifecycle status.</p> <ul> <li> <p> <code>CREATED</code>
     * - The SVM is fully available for use.</p> </li> <li> <p> <code>CREATING</code> -
     * Amazon FSx is creating the new SVM.</p> </li> <li> <p> <code>DELETING</code> -
     * Amazon FSx is deleting an existing SVM.</p> </li> <li> <p> <code>FAILED</code> -
     * Amazon FSx was unable to create the SVM.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> - The SVM is in a failed but recoverable state.</p>
     * </li> <li> <p> <code>PENDING</code> - Amazon FSx has not started creating the
     * SVM.</p> </li> </ul>
     */
    inline StorageVirtualMachine& WithLifecycle(const StorageVirtualMachineLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Describes the SVM's lifecycle status.</p> <ul> <li> <p> <code>CREATED</code>
     * - The SVM is fully available for use.</p> </li> <li> <p> <code>CREATING</code> -
     * Amazon FSx is creating the new SVM.</p> </li> <li> <p> <code>DELETING</code> -
     * Amazon FSx is deleting an existing SVM.</p> </li> <li> <p> <code>FAILED</code> -
     * Amazon FSx was unable to create the SVM.</p> </li> <li> <p>
     * <code>MISCONFIGURED</code> - The SVM is in a failed but recoverable state.</p>
     * </li> <li> <p> <code>PENDING</code> - Amazon FSx has not started creating the
     * SVM.</p> </li> </ul>
     */
    inline StorageVirtualMachine& WithLifecycle(StorageVirtualMachineLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline StorageVirtualMachine& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline StorageVirtualMachine& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline StorageVirtualMachine& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    
    inline StorageVirtualMachine& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    
    inline StorageVirtualMachine& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    
    inline StorageVirtualMachine& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const{ return m_storageVirtualMachineId; }

    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }

    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline void SetStorageVirtualMachineId(const Aws::String& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = value; }

    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline void SetStorageVirtualMachineId(Aws::String&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::move(value); }

    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline void SetStorageVirtualMachineId(const char* value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId.assign(value); }

    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline StorageVirtualMachine& WithStorageVirtualMachineId(const Aws::String& value) { SetStorageVirtualMachineId(value); return *this;}

    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline StorageVirtualMachine& WithStorageVirtualMachineId(Aws::String&& value) { SetStorageVirtualMachineId(std::move(value)); return *this;}

    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline StorageVirtualMachine& WithStorageVirtualMachineId(const char* value) { SetStorageVirtualMachineId(value); return *this;}


    /**
     * <p>Describes the SVM's subtype.</p>
     */
    inline const StorageVirtualMachineSubtype& GetSubtype() const{ return m_subtype; }

    /**
     * <p>Describes the SVM's subtype.</p>
     */
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }

    /**
     * <p>Describes the SVM's subtype.</p>
     */
    inline void SetSubtype(const StorageVirtualMachineSubtype& value) { m_subtypeHasBeenSet = true; m_subtype = value; }

    /**
     * <p>Describes the SVM's subtype.</p>
     */
    inline void SetSubtype(StorageVirtualMachineSubtype&& value) { m_subtypeHasBeenSet = true; m_subtype = std::move(value); }

    /**
     * <p>Describes the SVM's subtype.</p>
     */
    inline StorageVirtualMachine& WithSubtype(const StorageVirtualMachineSubtype& value) { SetSubtype(value); return *this;}

    /**
     * <p>Describes the SVM's subtype.</p>
     */
    inline StorageVirtualMachine& WithSubtype(StorageVirtualMachineSubtype&& value) { SetSubtype(std::move(value)); return *this;}


    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }

    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUIDHasBeenSet = true; m_uUID = std::move(value); }

    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline void SetUUID(const char* value) { m_uUIDHasBeenSet = true; m_uUID.assign(value); }

    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline StorageVirtualMachine& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline StorageVirtualMachine& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline StorageVirtualMachine& WithUUID(const char* value) { SetUUID(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline StorageVirtualMachine& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline StorageVirtualMachine& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline StorageVirtualMachine& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline StorageVirtualMachine& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes why the SVM lifecycle state changed.</p>
     */
    inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const{ return m_lifecycleTransitionReason; }

    /**
     * <p>Describes why the SVM lifecycle state changed.</p>
     */
    inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }

    /**
     * <p>Describes why the SVM lifecycle state changed.</p>
     */
    inline void SetLifecycleTransitionReason(const LifecycleTransitionReason& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = value; }

    /**
     * <p>Describes why the SVM lifecycle state changed.</p>
     */
    inline void SetLifecycleTransitionReason(LifecycleTransitionReason&& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = std::move(value); }

    /**
     * <p>Describes why the SVM lifecycle state changed.</p>
     */
    inline StorageVirtualMachine& WithLifecycleTransitionReason(const LifecycleTransitionReason& value) { SetLifecycleTransitionReason(value); return *this;}

    /**
     * <p>Describes why the SVM lifecycle state changed.</p>
     */
    inline StorageVirtualMachine& WithLifecycleTransitionReason(LifecycleTransitionReason&& value) { SetLifecycleTransitionReason(std::move(value)); return *this;}


    /**
     * <p>The security style of the root volume of the SVM.</p>
     */
    inline const StorageVirtualMachineRootVolumeSecurityStyle& GetRootVolumeSecurityStyle() const{ return m_rootVolumeSecurityStyle; }

    /**
     * <p>The security style of the root volume of the SVM.</p>
     */
    inline bool RootVolumeSecurityStyleHasBeenSet() const { return m_rootVolumeSecurityStyleHasBeenSet; }

    /**
     * <p>The security style of the root volume of the SVM.</p>
     */
    inline void SetRootVolumeSecurityStyle(const StorageVirtualMachineRootVolumeSecurityStyle& value) { m_rootVolumeSecurityStyleHasBeenSet = true; m_rootVolumeSecurityStyle = value; }

    /**
     * <p>The security style of the root volume of the SVM.</p>
     */
    inline void SetRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle&& value) { m_rootVolumeSecurityStyleHasBeenSet = true; m_rootVolumeSecurityStyle = std::move(value); }

    /**
     * <p>The security style of the root volume of the SVM.</p>
     */
    inline StorageVirtualMachine& WithRootVolumeSecurityStyle(const StorageVirtualMachineRootVolumeSecurityStyle& value) { SetRootVolumeSecurityStyle(value); return *this;}

    /**
     * <p>The security style of the root volume of the SVM.</p>
     */
    inline StorageVirtualMachine& WithRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle&& value) { SetRootVolumeSecurityStyle(std::move(value)); return *this;}

  private:

    SvmActiveDirectoryConfiguration m_activeDirectoryConfiguration;
    bool m_activeDirectoryConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    SvmEndpoints m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    StorageVirtualMachineLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;

    StorageVirtualMachineSubtype m_subtype;
    bool m_subtypeHasBeenSet = false;

    Aws::String m_uUID;
    bool m_uUIDHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    LifecycleTransitionReason m_lifecycleTransitionReason;
    bool m_lifecycleTransitionReasonHasBeenSet = false;

    StorageVirtualMachineRootVolumeSecurityStyle m_rootVolumeSecurityStyle;
    bool m_rootVolumeSecurityStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
