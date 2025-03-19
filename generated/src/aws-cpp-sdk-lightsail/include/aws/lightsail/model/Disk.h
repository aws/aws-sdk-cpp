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
#include <aws/lightsail/model/DiskState.h>
#include <aws/lightsail/model/AutoMountStatus.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOn.h>
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
   * <p>Describes a block storage disk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Disk">AWS API
   * Reference</a></p>
   */
  class Disk
  {
  public:
    AWS_LIGHTSAIL_API Disk() = default;
    AWS_LIGHTSAIL_API Disk(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Disk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the disk.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Disk& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Disk& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    Disk& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the disk was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Disk& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region and Availability Zone where the disk is located.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    Disk& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type (<code>Disk</code>).</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline Disk& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
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
    Disk& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Disk& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline const Aws::Vector<AddOn>& GetAddOns() const { return m_addOns; }
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }
    template<typename AddOnsT = Aws::Vector<AddOn>>
    void SetAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns = std::forward<AddOnsT>(value); }
    template<typename AddOnsT = Aws::Vector<AddOn>>
    Disk& WithAddOns(AddOnsT&& value) { SetAddOns(std::forward<AddOnsT>(value)); return *this;}
    template<typename AddOnsT = AddOn>
    Disk& AddAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns.emplace_back(std::forward<AddOnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the disk in GB.</p>
     */
    inline int GetSizeInGb() const { return m_sizeInGb; }
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }
    inline Disk& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline bool GetIsSystemDisk() const { return m_isSystemDisk; }
    inline bool IsSystemDiskHasBeenSet() const { return m_isSystemDiskHasBeenSet; }
    inline void SetIsSystemDisk(bool value) { m_isSystemDiskHasBeenSet = true; m_isSystemDisk = value; }
    inline Disk& WithIsSystemDisk(bool value) { SetIsSystemDisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input/output operations per second (IOPS) of the disk.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline Disk& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk path.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    Disk& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the disk.</p>
     */
    inline DiskState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(DiskState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Disk& WithState(DiskState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline const Aws::String& GetAttachedTo() const { return m_attachedTo; }
    inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }
    template<typename AttachedToT = Aws::String>
    void SetAttachedTo(AttachedToT&& value) { m_attachedToHasBeenSet = true; m_attachedTo = std::forward<AttachedToT>(value); }
    template<typename AttachedToT = Aws::String>
    Disk& WithAttachedTo(AttachedToT&& value) { SetAttachedTo(std::forward<AttachedToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the disk is attached.</p>
     */
    inline bool GetIsAttached() const { return m_isAttached; }
    inline bool IsAttachedHasBeenSet() const { return m_isAttachedHasBeenSet; }
    inline void SetIsAttached(bool value) { m_isAttachedHasBeenSet = true; m_isAttached = value; }
    inline Disk& WithIsAttached(bool value) { SetIsAttached(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of automatically mounting a storage disk to a virtual
     * computer.</p>  <p>This parameter only applies to Lightsail for
     * Research resources.</p> 
     */
    inline AutoMountStatus GetAutoMountStatus() const { return m_autoMountStatus; }
    inline bool AutoMountStatusHasBeenSet() const { return m_autoMountStatusHasBeenSet; }
    inline void SetAutoMountStatus(AutoMountStatus value) { m_autoMountStatusHasBeenSet = true; m_autoMountStatus = value; }
    inline Disk& WithAutoMountStatus(AutoMountStatus value) { SetAutoMountStatus(value); return *this;}
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

    Aws::Vector<AddOn> m_addOns;
    bool m_addOnsHasBeenSet = false;

    int m_sizeInGb{0};
    bool m_sizeInGbHasBeenSet = false;

    bool m_isSystemDisk{false};
    bool m_isSystemDiskHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    DiskState m_state{DiskState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_attachedTo;
    bool m_attachedToHasBeenSet = false;

    bool m_isAttached{false};
    bool m_isAttachedHasBeenSet = false;

    AutoMountStatus m_autoMountStatus{AutoMountStatus::NOT_SET};
    bool m_autoMountStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
