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
    AWS_FSX_API Snapshot();
    AWS_FSX_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    
    inline Snapshot& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    
    inline Snapshot& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    
    inline Snapshot& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline Snapshot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline Snapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline Snapshot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline Snapshot& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline Snapshot& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that the snapshot is of.</p>
     */
    inline Snapshot& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline Snapshot& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    
    inline Snapshot& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The lifecycle status of the snapshot.</p> <ul> <li> <p> <code>PENDING</code>
     * - Amazon FSx hasn't started creating the snapshot.</p> </li> <li> <p>
     * <code>CREATING</code> - Amazon FSx is creating the snapshot.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting the snapshot.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The snapshot is fully available.</p> </li> </ul>
     */
    inline const SnapshotLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the snapshot.</p> <ul> <li> <p> <code>PENDING</code>
     * - Amazon FSx hasn't started creating the snapshot.</p> </li> <li> <p>
     * <code>CREATING</code> - Amazon FSx is creating the snapshot.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting the snapshot.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The snapshot is fully available.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle status of the snapshot.</p> <ul> <li> <p> <code>PENDING</code>
     * - Amazon FSx hasn't started creating the snapshot.</p> </li> <li> <p>
     * <code>CREATING</code> - Amazon FSx is creating the snapshot.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting the snapshot.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The snapshot is fully available.</p> </li> </ul>
     */
    inline void SetLifecycle(const SnapshotLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the snapshot.</p> <ul> <li> <p> <code>PENDING</code>
     * - Amazon FSx hasn't started creating the snapshot.</p> </li> <li> <p>
     * <code>CREATING</code> - Amazon FSx is creating the snapshot.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting the snapshot.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The snapshot is fully available.</p> </li> </ul>
     */
    inline void SetLifecycle(SnapshotLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the snapshot.</p> <ul> <li> <p> <code>PENDING</code>
     * - Amazon FSx hasn't started creating the snapshot.</p> </li> <li> <p>
     * <code>CREATING</code> - Amazon FSx is creating the snapshot.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting the snapshot.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The snapshot is fully available.</p> </li> </ul>
     */
    inline Snapshot& WithLifecycle(const SnapshotLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the snapshot.</p> <ul> <li> <p> <code>PENDING</code>
     * - Amazon FSx hasn't started creating the snapshot.</p> </li> <li> <p>
     * <code>CREATING</code> - Amazon FSx is creating the snapshot.</p> </li> <li> <p>
     * <code>DELETING</code> - Amazon FSx is deleting the snapshot.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The snapshot is fully available.</p> </li> </ul>
     */
    inline Snapshot& WithLifecycle(SnapshotLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    
    inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const{ return m_lifecycleTransitionReason; }

    
    inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }

    
    inline void SetLifecycleTransitionReason(const LifecycleTransitionReason& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = value; }

    
    inline void SetLifecycleTransitionReason(LifecycleTransitionReason&& value) { m_lifecycleTransitionReasonHasBeenSet = true; m_lifecycleTransitionReason = std::move(value); }

    
    inline Snapshot& WithLifecycleTransitionReason(const LifecycleTransitionReason& value) { SetLifecycleTransitionReason(value); return *this;}

    
    inline Snapshot& WithLifecycleTransitionReason(LifecycleTransitionReason&& value) { SetLifecycleTransitionReason(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline Snapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline Snapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline Snapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline Snapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline const Aws::Vector<AdministrativeAction>& GetAdministrativeActions() const{ return m_administrativeActions; }

    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline bool AdministrativeActionsHasBeenSet() const { return m_administrativeActionsHasBeenSet; }

    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline void SetAdministrativeActions(const Aws::Vector<AdministrativeAction>& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = value; }

    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline void SetAdministrativeActions(Aws::Vector<AdministrativeAction>&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = std::move(value); }

    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline Snapshot& WithAdministrativeActions(const Aws::Vector<AdministrativeAction>& value) { SetAdministrativeActions(value); return *this;}

    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline Snapshot& WithAdministrativeActions(Aws::Vector<AdministrativeAction>&& value) { SetAdministrativeActions(std::move(value)); return *this;}

    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline Snapshot& AddAdministrativeActions(const AdministrativeAction& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.push_back(value); return *this; }

    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline Snapshot& AddAdministrativeActions(AdministrativeAction&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    SnapshotLifecycle m_lifecycle;
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
