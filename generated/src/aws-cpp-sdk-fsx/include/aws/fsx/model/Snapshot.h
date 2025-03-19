/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fsx/model/SnapshotLifecycle.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/AdministrativeAction.h>
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
   * <p>A snapshot of an Amazon FSx for OpenZFS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/Snapshot">AWS API
   * Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_FSX_API Snapshot() = default;
    AWS_FSX_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    Snapshot& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    Snapshot& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Snapshot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    Snapshot& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Snapshot& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle status of the snapshot.</p> <ul> <li> <p> <code>PENDING</code>
     * - Amazon FSx hasn't started creating the snapshot.</p> </li> <li> <p>
     * <code>CREATING</code> - Amazon FSx is creating the snapshot.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting the snapshot.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The snapshot is fully available.</p> </li> </ul>
     */
    inline SnapshotLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(SnapshotLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline Snapshot& WithLifecycle(SnapshotLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
    inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value); }
    template<typename LifecycleTransitionReasonT = LifecycleTransitionReason>
    Snapshot& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) { SetLifecycleTransitionReason(std::forward<LifecycleTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Snapshot& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Snapshot& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline const Aws::Vector<AdministrativeAction>& GetAdministrativeActions() const { return m_administrativeActions; }
    inline bool AdministrativeActionsHasBeenSet() const { return m_administrativeActionsHasBeenSet; }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    void SetAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = std::forward<AdministrativeActionsT>(value); }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    Snapshot& WithAdministrativeActions(AdministrativeActionsT&& value) { SetAdministrativeActions(std::forward<AdministrativeActionsT>(value)); return *this;}
    template<typename AdministrativeActionsT = AdministrativeAction>
    Snapshot& AddAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.emplace_back(std::forward<AdministrativeActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    SnapshotLifecycle m_lifecycle{SnapshotLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    LifecycleTransitionReason m_lifecycleTransitionReason;
    bool m_lifecycleTransitionReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AdministrativeAction> m_administrativeActions;
    bool m_administrativeActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
