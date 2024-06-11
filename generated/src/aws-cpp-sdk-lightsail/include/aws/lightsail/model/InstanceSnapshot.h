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
    AWS_LIGHTSAIL_API InstanceSnapshot();
    AWS_LIGHTSAIL_API InstanceSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceSnapshot& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceSnapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceSnapshot& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot
     * (<code>arn:aws:lightsail:us-east-2:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline InstanceSnapshot& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline InstanceSnapshot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline InstanceSnapshot& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }
    inline InstanceSnapshot& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}
    inline InstanceSnapshot& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}
    inline InstanceSnapshot& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the snapshot was created
     * (<code>1479907467.024</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline InstanceSnapshot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline InstanceSnapshot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region name and Availability Zone where you created the snapshot.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline InstanceSnapshot& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline InstanceSnapshot& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource (usually <code>InstanceSnapshot</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline InstanceSnapshot& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline InstanceSnapshot& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InstanceSnapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline InstanceSnapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline InstanceSnapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline InstanceSnapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state the snapshot is in.</p>
     */
    inline const InstanceSnapshotState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InstanceSnapshotState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InstanceSnapshotState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InstanceSnapshot& WithState(const InstanceSnapshotState& value) { SetState(value); return *this;}
    inline InstanceSnapshot& WithState(InstanceSnapshotState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot.</p>  <p>This is populated only for disk
     * snapshots, and is <code>null</code> for instance snapshots.</p> 
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }
    inline InstanceSnapshot& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}
    inline InstanceSnapshot& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}
    inline InstanceSnapshot& WithProgress(const char* value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of disk objects containing information about all block storage
     * disks.</p>
     */
    inline const Aws::Vector<Disk>& GetFromAttachedDisks() const{ return m_fromAttachedDisks; }
    inline bool FromAttachedDisksHasBeenSet() const { return m_fromAttachedDisksHasBeenSet; }
    inline void SetFromAttachedDisks(const Aws::Vector<Disk>& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks = value; }
    inline void SetFromAttachedDisks(Aws::Vector<Disk>&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks = std::move(value); }
    inline InstanceSnapshot& WithFromAttachedDisks(const Aws::Vector<Disk>& value) { SetFromAttachedDisks(value); return *this;}
    inline InstanceSnapshot& WithFromAttachedDisks(Aws::Vector<Disk>&& value) { SetFromAttachedDisks(std::move(value)); return *this;}
    inline InstanceSnapshot& AddFromAttachedDisks(const Disk& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks.push_back(value); return *this; }
    inline InstanceSnapshot& AddFromAttachedDisks(Disk&& value) { m_fromAttachedDisksHasBeenSet = true; m_fromAttachedDisks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline const Aws::String& GetFromInstanceName() const{ return m_fromInstanceName; }
    inline bool FromInstanceNameHasBeenSet() const { return m_fromInstanceNameHasBeenSet; }
    inline void SetFromInstanceName(const Aws::String& value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName = value; }
    inline void SetFromInstanceName(Aws::String&& value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName = std::move(value); }
    inline void SetFromInstanceName(const char* value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName.assign(value); }
    inline InstanceSnapshot& WithFromInstanceName(const Aws::String& value) { SetFromInstanceName(value); return *this;}
    inline InstanceSnapshot& WithFromInstanceName(Aws::String&& value) { SetFromInstanceName(std::move(value)); return *this;}
    inline InstanceSnapshot& WithFromInstanceName(const char* value) { SetFromInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created
     * (<code>arn:aws:lightsail:us-east-2:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetFromInstanceArn() const{ return m_fromInstanceArn; }
    inline bool FromInstanceArnHasBeenSet() const { return m_fromInstanceArnHasBeenSet; }
    inline void SetFromInstanceArn(const Aws::String& value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn = value; }
    inline void SetFromInstanceArn(Aws::String&& value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn = std::move(value); }
    inline void SetFromInstanceArn(const char* value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn.assign(value); }
    inline InstanceSnapshot& WithFromInstanceArn(const Aws::String& value) { SetFromInstanceArn(value); return *this;}
    inline InstanceSnapshot& WithFromInstanceArn(Aws::String&& value) { SetFromInstanceArn(std::move(value)); return *this;}
    inline InstanceSnapshot& WithFromInstanceArn(const char* value) { SetFromInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blueprint ID from which you created the snapshot
     * (<code>amazon_linux_2023</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline const Aws::String& GetFromBlueprintId() const{ return m_fromBlueprintId; }
    inline bool FromBlueprintIdHasBeenSet() const { return m_fromBlueprintIdHasBeenSet; }
    inline void SetFromBlueprintId(const Aws::String& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = value; }
    inline void SetFromBlueprintId(Aws::String&& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = std::move(value); }
    inline void SetFromBlueprintId(const char* value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId.assign(value); }
    inline InstanceSnapshot& WithFromBlueprintId(const Aws::String& value) { SetFromBlueprintId(value); return *this;}
    inline InstanceSnapshot& WithFromBlueprintId(Aws::String&& value) { SetFromBlueprintId(std::move(value)); return *this;}
    inline InstanceSnapshot& WithFromBlueprintId(const char* value) { SetFromBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID from which you created the snapshot
     * (<code>micro_x_x</code>).</p>
     */
    inline const Aws::String& GetFromBundleId() const{ return m_fromBundleId; }
    inline bool FromBundleIdHasBeenSet() const { return m_fromBundleIdHasBeenSet; }
    inline void SetFromBundleId(const Aws::String& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = value; }
    inline void SetFromBundleId(Aws::String&& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = std::move(value); }
    inline void SetFromBundleId(const char* value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId.assign(value); }
    inline InstanceSnapshot& WithFromBundleId(const Aws::String& value) { SetFromBundleId(value); return *this;}
    inline InstanceSnapshot& WithFromBundleId(Aws::String&& value) { SetFromBundleId(std::move(value)); return *this;}
    inline InstanceSnapshot& WithFromBundleId(const char* value) { SetFromBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the snapshot was created from an automatic
     * snapshot.</p>
     */
    inline bool GetIsFromAutoSnapshot() const{ return m_isFromAutoSnapshot; }
    inline bool IsFromAutoSnapshotHasBeenSet() const { return m_isFromAutoSnapshotHasBeenSet; }
    inline void SetIsFromAutoSnapshot(bool value) { m_isFromAutoSnapshotHasBeenSet = true; m_isFromAutoSnapshot = value; }
    inline InstanceSnapshot& WithIsFromAutoSnapshot(bool value) { SetIsFromAutoSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in GB of the SSD.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }
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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    InstanceSnapshotState m_state;
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

    bool m_isFromAutoSnapshot;
    bool m_isFromAutoSnapshotHasBeenSet = false;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
