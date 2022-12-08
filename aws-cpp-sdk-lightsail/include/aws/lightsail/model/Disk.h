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
    AWS_LIGHTSAIL_API Disk();
    AWS_LIGHTSAIL_API Disk(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Disk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the disk.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the disk.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the disk.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the disk.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the disk.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the disk.</p>
     */
    inline Disk& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the disk.</p>
     */
    inline Disk& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the disk.</p>
     */
    inline Disk& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline Disk& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline Disk& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline Disk& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Disk& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Disk& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline Disk& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The date when the disk was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the disk was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date when the disk was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the disk was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date when the disk was created.</p>
     */
    inline Disk& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the disk was created.</p>
     */
    inline Disk& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The AWS Region and Availability Zone where the disk is located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The AWS Region and Availability Zone where the disk is located.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The AWS Region and Availability Zone where the disk is located.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The AWS Region and Availability Zone where the disk is located.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The AWS Region and Availability Zone where the disk is located.</p>
     */
    inline Disk& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The AWS Region and Availability Zone where the disk is located.</p>
     */
    inline Disk& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type (e.g., <code>Disk</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Disk</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Disk</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Disk</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>Disk</code>).</p>
     */
    inline Disk& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>Disk</code>).</p>
     */
    inline Disk& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Disk& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Disk& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Disk& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Disk& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline const Aws::Vector<AddOn>& GetAddOns() const{ return m_addOns; }

    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }

    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline void SetAddOns(const Aws::Vector<AddOn>& value) { m_addOnsHasBeenSet = true; m_addOns = value; }

    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline void SetAddOns(Aws::Vector<AddOn>&& value) { m_addOnsHasBeenSet = true; m_addOns = std::move(value); }

    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline Disk& WithAddOns(const Aws::Vector<AddOn>& value) { SetAddOns(value); return *this;}

    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline Disk& WithAddOns(Aws::Vector<AddOn>&& value) { SetAddOns(std::move(value)); return *this;}

    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline Disk& AddAddOns(const AddOn& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(value); return *this; }

    /**
     * <p>An array of objects representing the add-ons enabled on the disk.</p>
     */
    inline Disk& AddAddOns(AddOn&& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(std::move(value)); return *this; }


    /**
     * <p>The size of the disk in GB.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline Disk& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}


    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline bool GetIsSystemDisk() const{ return m_isSystemDisk; }

    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline bool IsSystemDiskHasBeenSet() const { return m_isSystemDiskHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline void SetIsSystemDisk(bool value) { m_isSystemDiskHasBeenSet = true; m_isSystemDisk = value; }

    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline Disk& WithIsSystemDisk(bool value) { SetIsSystemDisk(value); return *this;}


    /**
     * <p>The input/output operations per second (IOPS) of the disk.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The input/output operations per second (IOPS) of the disk.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The input/output operations per second (IOPS) of the disk.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The input/output operations per second (IOPS) of the disk.</p>
     */
    inline Disk& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The disk path.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The disk path.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The disk path.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The disk path.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The disk path.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The disk path.</p>
     */
    inline Disk& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The disk path.</p>
     */
    inline Disk& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The disk path.</p>
     */
    inline Disk& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Describes the status of the disk.</p>
     */
    inline const DiskState& GetState() const{ return m_state; }

    /**
     * <p>Describes the status of the disk.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the status of the disk.</p>
     */
    inline void SetState(const DiskState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the status of the disk.</p>
     */
    inline void SetState(DiskState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the status of the disk.</p>
     */
    inline Disk& WithState(const DiskState& value) { SetState(value); return *this;}

    /**
     * <p>Describes the status of the disk.</p>
     */
    inline Disk& WithState(DiskState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline const Aws::String& GetAttachedTo() const{ return m_attachedTo; }

    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }

    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline void SetAttachedTo(const Aws::String& value) { m_attachedToHasBeenSet = true; m_attachedTo = value; }

    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline void SetAttachedTo(Aws::String&& value) { m_attachedToHasBeenSet = true; m_attachedTo = std::move(value); }

    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline void SetAttachedTo(const char* value) { m_attachedToHasBeenSet = true; m_attachedTo.assign(value); }

    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline Disk& WithAttachedTo(const Aws::String& value) { SetAttachedTo(value); return *this;}

    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline Disk& WithAttachedTo(Aws::String&& value) { SetAttachedTo(std::move(value)); return *this;}

    /**
     * <p>The resources to which the disk is attached.</p>
     */
    inline Disk& WithAttachedTo(const char* value) { SetAttachedTo(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the disk is attached.</p>
     */
    inline bool GetIsAttached() const{ return m_isAttached; }

    /**
     * <p>A Boolean value indicating whether the disk is attached.</p>
     */
    inline bool IsAttachedHasBeenSet() const { return m_isAttachedHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the disk is attached.</p>
     */
    inline void SetIsAttached(bool value) { m_isAttachedHasBeenSet = true; m_isAttached = value; }

    /**
     * <p>A Boolean value indicating whether the disk is attached.</p>
     */
    inline Disk& WithIsAttached(bool value) { SetIsAttached(value); return *this;}

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

    Aws::Vector<AddOn> m_addOns;
    bool m_addOnsHasBeenSet = false;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;

    bool m_isSystemDisk;
    bool m_isSystemDiskHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    DiskState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_attachedTo;
    bool m_attachedToHasBeenSet = false;

    bool m_isAttached;
    bool m_isAttachedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
