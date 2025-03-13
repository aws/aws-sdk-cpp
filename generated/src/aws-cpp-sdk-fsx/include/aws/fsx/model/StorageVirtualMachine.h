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
    AWS_FSX_API StorageVirtualMachine() = default;
    AWS_FSX_API StorageVirtualMachine(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API StorageVirtualMachine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the Microsoft Active Directory configuration to which the SVM is
     * joined, if applicable.</p>
     */
    inline const SvmActiveDirectoryConfiguration& GetActiveDirectoryConfiguration() const { return m_activeDirectoryConfiguration; }
    inline bool ActiveDirectoryConfigurationHasBeenSet() const { return m_activeDirectoryConfigurationHasBeenSet; }
    template<typename ActiveDirectoryConfigurationT = SvmActiveDirectoryConfiguration>
    void SetActiveDirectoryConfiguration(ActiveDirectoryConfigurationT&& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = std::forward<ActiveDirectoryConfigurationT>(value); }
    template<typename ActiveDirectoryConfigurationT = SvmActiveDirectoryConfiguration>
    StorageVirtualMachine& WithActiveDirectoryConfiguration(ActiveDirectoryConfigurationT&& value) { SetActiveDirectoryConfiguration(std::forward<ActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    StorageVirtualMachine& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoints that are used to access data or to manage the SVM using the
     * NetApp ONTAP CLI, REST API, or NetApp CloudManager. They are the
     * <code>Iscsi</code>, <code>Management</code>, <code>Nfs</code>, and
     * <code>Smb</code> endpoints.</p>
     */
    inline const SvmEndpoints& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = SvmEndpoints>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = SvmEndpoints>
    StorageVirtualMachine& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    StorageVirtualMachine& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline StorageVirtualMachineLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(StorageVirtualMachineLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline StorageVirtualMachine& WithLifecycle(StorageVirtualMachineLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SVM, if provisioned.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StorageVirtualMachine& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    StorageVirtualMachine& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SVM's system generated unique ID.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
    inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
    template<typename StorageVirtualMachineIdT = Aws::String>
    void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { m_storageVirtualMachineIdHasBeenSet = true; m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value); }
    template<typename StorageVirtualMachineIdT = Aws::String>
    StorageVirtualMachine& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) { SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the SVM's subtype.</p>
     */
    inline StorageVirtualMachineSubtype GetSubtype() const { return m_subtype; }
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }
    inline void SetSubtype(StorageVirtualMachineSubtype value) { m_subtypeHasBeenSet = true; m_subtype = value; }
    inline StorageVirtualMachine& WithSubtype(StorageVirtualMachineSubtype value) { SetSubtype(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SVM's UUID (universally unique identifier).</p>
     */
    inline const Aws::String& GetUUID() const { return m_uUID; }
    inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
    template<typename UUIDT = Aws::String>
    void SetUUID(UUIDT&& value) { m_uUIDHasBeenSet = true; m_uUID = std::forward<UUIDT>(value); }
    template<typename UUIDT = Aws::String>
    StorageVirtualMachine& WithUUID(UUIDT&& value) { SetUUID(std::forward<UUIDT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StorageVirtualMachine& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StorageVirtualMachine& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes why the SVM lifecycle state changed.</p>
     */
    inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
    inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value); }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    StorageVirtualMachine& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { SetLifecycleTransitionReason(std::forward<LifecycleTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security style of the root volume of the SVM.</p>
     */
    inline StorageVirtualMachineRootVolumeSecurityStyle GetRootVolumeSecurityStyle() const { return m_rootVolumeSecurityStyle; }
    inline bool RootVolumeSecurityStyleHasBeenSet() const { return m_rootVolumeSecurityStyleHasBeenSet; }
    inline void SetRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle value) { m_rootVolumeSecurityStyleHasBeenSet = true; m_rootVolumeSecurityStyle = value; }
    inline StorageVirtualMachine& WithRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle value) { SetRootVolumeSecurityStyle(value); return *this;}
    ///@}
  private:

    SvmActiveDirectoryConfiguration m_activeDirectoryConfiguration;
    bool m_activeDirectoryConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    SvmEndpoints m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    StorageVirtualMachineLifecycle m_lifecycle{StorageVirtualMachineLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_storageVirtualMachineId;
    bool m_storageVirtualMachineIdHasBeenSet = false;

    StorageVirtualMachineSubtype m_subtype{StorageVirtualMachineSubtype::NOT_SET};
    bool m_subtypeHasBeenSet = false;

    Aws::String m_uUID;
    bool m_uUIDHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    LifecycleTransitionReason m_lifecycleTransitionReason;
    bool m_lifecycleTransitionReasonHasBeenSet = false;

    StorageVirtualMachineRootVolumeSecurityStyle m_rootVolumeSecurityStyle{StorageVirtualMachineRootVolumeSecurityStyle::NOT_SET};
    bool m_rootVolumeSecurityStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
