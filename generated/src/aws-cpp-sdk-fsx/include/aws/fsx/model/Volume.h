/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeLifecycle.h>
#include <aws/fsx/model/OntapVolumeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/VolumeType.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/fsx/model/AdministrativeAction.h>
#include <aws/fsx/model/OpenZFSVolumeConfiguration.h>
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
  class AdministrativeAction;

  /**
   * <p>Describes an Amazon FSx volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/Volume">AWS API
   * Reference</a></p>
   */
  class Volume
  {
  public:
    AWS_FSX_API Volume() = default;
    AWS_FSX_API Volume(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Volume& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    Volume& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle status of the volume.</p> <ul> <li> <p> <code>AVAILABLE</code>
     * - The volume is fully available for use.</p> </li> <li> <p> <code>CREATED</code>
     * - The volume has been created.</p> </li> <li> <p> <code>CREATING</code> - Amazon
     * FSx is creating the new volume.</p> </li> <li> <p> <code>DELETING</code> -
     * Amazon FSx is deleting an existing volume.</p> </li> <li> <p>
     * <code>FAILED</code> - Amazon FSx was unable to create the volume.</p> </li> <li>
     * <p> <code>MISCONFIGURED</code> - The volume is in a failed but recoverable
     * state.</p> </li> <li> <p> <code>PENDING</code> - Amazon FSx hasn't started
     * creating the volume.</p> </li> </ul>
     */
    inline VolumeLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(VolumeLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline Volume& WithLifecycle(VolumeLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the volume.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Volume& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OntapVolumeConfiguration& GetOntapConfiguration() const { return m_ontapConfiguration; }
    inline bool OntapConfigurationHasBeenSet() const { return m_ontapConfigurationHasBeenSet; }
    template<typename OntapConfigurationT = OntapVolumeConfiguration>
    void SetOntapConfiguration(OntapConfigurationT&& value) { m_ontapConfigurationHasBeenSet = true; m_ontapConfiguration = std::forward<OntapConfigurationT>(value); }
    template<typename OntapConfigurationT = OntapVolumeConfiguration>
    Volume& WithOntapConfiguration(OntapConfigurationT&& value) { SetOntapConfiguration(std::forward<OntapConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    Volume& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Volume& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Volume& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The system-generated, unique ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    Volume& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the volume.</p>
     */
    inline VolumeType GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(VolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline Volume& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the volume lifecycle status changed.</p>
     */
    inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
    inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value); }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    Volume& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { SetLifecycleTransitionReason(std::forward<LifecycleTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of administrative actions for the volume that are in process or
     * waiting to be processed. Administrative actions describe changes to the volume
     * that you have initiated using the <code>UpdateVolume</code> action.</p>
     */
    inline const Aws::Vector<AdministrativeAction>& GetAdministrativeActions() const { return m_administrativeActions; }
    inline bool AdministrativeActionsHasBeenSet() const { return m_administrativeActionsHasBeenSet; }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    void SetAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = std::forward<AdministrativeActionsT>(value); }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    Volume& WithAdministrativeActions(AdministrativeActionsT&& value) { SetAdministrativeActions(std::forward<AdministrativeActionsT>(value)); return *this;}
    template<typename AdministrativeActionsT = AdministrativeAction>
    Volume& AddAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.emplace_back(std::forward<AdministrativeActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of an Amazon FSx for OpenZFS volume.</p>
     */
    inline const OpenZFSVolumeConfiguration& GetOpenZFSConfiguration() const { return m_openZFSConfiguration; }
    inline bool OpenZFSConfigurationHasBeenSet() const { return m_openZFSConfigurationHasBeenSet; }
    template<typename OpenZFSConfigurationT = OpenZFSVolumeConfiguration>
    void SetOpenZFSConfiguration(OpenZFSConfigurationT&& value) { m_openZFSConfigurationHasBeenSet = true; m_openZFSConfiguration = std::forward<OpenZFSConfigurationT>(value); }
    template<typename OpenZFSConfigurationT = OpenZFSVolumeConfiguration>
    Volume& WithOpenZFSConfiguration(OpenZFSConfigurationT&& value) { SetOpenZFSConfiguration(std::forward<OpenZFSConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    VolumeLifecycle m_lifecycle{VolumeLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OntapVolumeConfiguration m_ontapConfiguration;
    bool m_ontapConfigurationHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    VolumeType m_volumeType{VolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    LifecycleTransitionReason m_lifecycleTransitionReason;
    bool m_lifecycleTransitionReasonHasBeenSet = false;

    Aws::Vector<AdministrativeAction> m_administrativeActions;
    bool m_administrativeActionsHasBeenSet = false;

    OpenZFSVolumeConfiguration m_openZFSConfiguration;
    bool m_openZFSConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
