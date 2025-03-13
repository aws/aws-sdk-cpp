/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/InstanceSnapshotState.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/Disk.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an instance snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceSnapshot">AWS
   * API Reference</a></p>
   */
  class InstanceSnapshot
  {
  public:
    AWS_LIGHTSAIL_API InstanceSnapshot() = default;
    AWS_LIGHTSAIL_API InstanceSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceSnapshot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot
     * (<code>arn:aws:lightsail:us-east-2:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    InstanceSnapshot& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    InstanceSnapshot& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the snapshot was created
     * (<code>1479907467.024</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    InstanceSnapshot& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region name and Availability Zone where you created the snapshot.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    InstanceSnapshot& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource (usually <code>InstanceSnapshot</code>).</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline InstanceSnapshot& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InstanceSnapshot& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InstanceSnapshot& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state the snapshot is in.</p>
     */
    inline InstanceSnapshotState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(InstanceSnapshotState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InstanceSnapshot& WithState(InstanceSnapshotState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot.</p>  <p>This is populated only for disk
     * snapshots, and is <code>null</code> for instance snapshots.</p> 
     */
    inline const Aws::String& GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    template<typename ProgressT = Aws::String>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = Aws::String>
    InstanceSnapshot& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of disk objects containing information about all block storage
     * disks.</p>
     */
    inline const Aws::Vector<Disk>& GetFromAttachedDisks() const { return m_fromAttachedDisks; }
    inline bool FromAttachedDisksHasBeenSet() const { return m_fromAttachedDisksHasBeenSet; }
    template<typename FromAttachedDisksT = Aws::Vector<Disk>>
    void SetFromAttachedDisks(FromAttachedDisksT&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks = std::forward<FromAttachedDisksT>(value); }
    template<typename FromAttachedDisksT = Aws::Vector<Disk>>
    InstanceSnapshot& WithFromAttachedDisks(FromAttachedDisksT&& value) { SetFromAttachedDisks(std::forward<FromAttachedDisksT>(value)); return *this;}
    template<typename FromAttachedDisksT = Disk>
    InstanceSnapshot& AddFromAttachedDisks(FromAttachedDisksT&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks.emplace_back(std::forward<FromAttachedDisksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline const Aws::String& GetFromInstanceName() const { return m_fromInstanceName; }
    inline bool FromInstanceNameHasBeenSet() const { return m_fromInstanceNameHasBeenSet; }
    template<typename FromInstanceNameT = Aws::String>
    void SetFromInstanceName(FromInstanceNameT&& value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName = std::forward<FromInstanceNameT>(value); }
    template<typename FromInstanceNameT = Aws::String>
    InstanceSnapshot& WithFromInstanceName(FromInstanceNameT&& value) { SetFromInstanceName(std::forward<FromInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created
     * (<code>arn:aws:lightsail:us-east-2:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetFromInstanceArn() const { return m_fromInstanceArn; }
    inline bool FromInstanceArnHasBeenSet() const { return m_fromInstanceArnHasBeenSet; }
    template<typename FromInstanceArnT = Aws::String>
    void SetFromInstanceArn(FromInstanceArnT&& value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn = std::forward<FromInstanceArnT>(value); }
    template<typename FromInstanceArnT = Aws::String>
    InstanceSnapshot& WithFromInstanceArn(FromInstanceArnT&& value) { SetFromInstanceArn(std::forward<FromInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blueprint ID from which you created the snapshot
     * (<code>amazon_linux_2023</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline const Aws::String& GetFromBlueprintId() const { return m_fromBlueprintId; }
    inline bool FromBlueprintIdHasBeenSet() const { return m_fromBlueprintIdHasBeenSet; }
    template<typename FromBlueprintIdT = Aws::String>
    void SetFromBlueprintId(FromBlueprintIdT&& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = std::forward<FromBlueprintIdT>(value); }
    template<typename FromBlueprintIdT = Aws::String>
    InstanceSnapshot& WithFromBlueprintId(FromBlueprintIdT&& value) { SetFromBlueprintId(std::forward<FromBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID from which you created the snapshot
     * (<code>micro_x_x</code>).</p>
     */
    inline const Aws::String& GetFromBundleId() const { return m_fromBundleId; }
    inline bool FromBundleIdHasBeenSet() const { return m_fromBundleIdHasBeenSet; }
    template<typename FromBundleIdT = Aws::String>
    void SetFromBundleId(FromBundleIdT&& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = std::forward<FromBundleIdT>(value); }
    template<typename FromBundleIdT = Aws::String>
    InstanceSnapshot& WithFromBundleId(FromBundleIdT&& value) { SetFromBundleId(std::forward<FromBundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the snapshot was created from an automatic
     * snapshot.</p>
     */
    inline bool GetIsFromAutoSnapshot() const { return m_isFromAutoSnapshot; }
    inline bool IsFromAutoSnapshotHasBeenSet() const { return m_isFromAutoSnapshotHasBeenSet; }
    inline void SetIsFromAutoSnapshot(bool value) { m_isFromAutoSnapshotHasBeenSet = true; m_isFromAutoSnapshot = value; }
    inline InstanceSnapshot& WithIsFromAutoSnapshot(bool value) { SetIsFromAutoSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in GB of the SSD.</p>
     */
    inline int GetSizeInGb() const { return m_sizeInGb; }
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }
    inline InstanceSnapshot& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    InstanceSnapshotState m_state{InstanceSnapshotState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    Aws::Vector<Disk> m_fromAttachedDisks;
    bool m_fromAttachedDisksHasBeenSet = false;

    Aws::String m_fromInstanceName;
    bool m_fromInstanceNameHasBeenSet = false;

    Aws::String m_fromInstanceArn;
    bool m_fromInstanceArnHasBeenSet = false;

    Aws::String m_fromBlueprintId;
    bool m_fromBlueprintIdHasBeenSet = false;

    Aws::String m_fromBundleId;
    bool m_fromBundleIdHasBeenSet = false;

    bool m_isFromAutoSnapshot{false};
    bool m_isFromAutoSnapshotHasBeenSet = false;

    int m_sizeInGb{0};
    bool m_sizeInGbHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
