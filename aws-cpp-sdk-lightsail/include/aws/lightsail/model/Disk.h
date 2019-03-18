/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes a system disk or an block storage disk.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Disk">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API Disk
  {
  public:
    Disk();
    Disk(Aws::Utils::Json::JsonView jsonValue);
    Disk& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline Disk& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline Disk& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline Disk& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline Disk& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    ResourceLocation m_location;
    bool m_locationHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet;

    bool m_isSystemDisk;
    bool m_isSystemDiskHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    DiskState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_attachedTo;
    bool m_attachedToHasBeenSet;

    bool m_isAttached;
    bool m_isAttachedHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
