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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the hard disk (an SSD).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Disk">AWS API
   * Reference</a></p>
   */
  class AWS_LIGHTSAIL_API Disk
  {
  public:
    Disk();
    Disk(const Aws::Utils::Json::JsonValue& jsonValue);
    Disk& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the disk.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the disk.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the disk.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the disk.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the disk.</p>
     */
    inline Disk& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the disk.</p>
     */
    inline Disk& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the disk.</p>
     */
    inline Disk& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the disk.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

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
     * <p>The region and Availability Zone where the disk is located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The region and Availability Zone where the disk is located.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The region and Availability Zone where the disk is located.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The region and Availability Zone where the disk is located.</p>
     */
    inline Disk& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The region and Availability Zone where the disk is located.</p>
     */
    inline Disk& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The resource type of the disk. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type of the disk. </p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type of the disk. </p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type of the disk. </p>
     */
    inline Disk& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type of the disk. </p>
     */
    inline Disk& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline Disk& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}

    /**
     * <p>The number of GB in use by the disk.</p>
     */
    inline int GetGbInUse() const{ return m_gbInUse; }

    /**
     * <p>The number of GB in use by the disk.</p>
     */
    inline void SetGbInUse(int value) { m_gbInUseHasBeenSet = true; m_gbInUse = value; }

    /**
     * <p>The number of GB in use by the disk.</p>
     */
    inline Disk& WithGbInUse(int value) { SetGbInUse(value); return *this;}

    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline bool GetIsSystemDisk() const{ return m_isSystemDisk; }

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
     * <p>The resources to which the disk is attached.</p>
     */
    inline const Aws::String& GetAttachedTo() const{ return m_attachedTo; }

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
    inline void SetIsAttached(bool value) { m_isAttachedHasBeenSet = true; m_isAttached = value; }

    /**
     * <p>A Boolean value indicating whether the disk is attached.</p>
     */
    inline Disk& WithIsAttached(bool value) { SetIsAttached(value); return *this;}

    /**
     * <p>The attachment state of the disk.</p>
     */
    inline const Aws::String& GetAttachmentState() const{ return m_attachmentState; }

    /**
     * <p>The attachment state of the disk.</p>
     */
    inline void SetAttachmentState(const Aws::String& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = value; }

    /**
     * <p>The attachment state of the disk.</p>
     */
    inline void SetAttachmentState(Aws::String&& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = std::move(value); }

    /**
     * <p>The attachment state of the disk.</p>
     */
    inline void SetAttachmentState(const char* value) { m_attachmentStateHasBeenSet = true; m_attachmentState.assign(value); }

    /**
     * <p>The attachment state of the disk.</p>
     */
    inline Disk& WithAttachmentState(const Aws::String& value) { SetAttachmentState(value); return *this;}

    /**
     * <p>The attachment state of the disk.</p>
     */
    inline Disk& WithAttachmentState(Aws::String&& value) { SetAttachmentState(std::move(value)); return *this;}

    /**
     * <p>The attachment state of the disk.</p>
     */
    inline Disk& WithAttachmentState(const char* value) { SetAttachmentState(value); return *this;}

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
    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet;
    int m_gbInUse;
    bool m_gbInUseHasBeenSet;
    bool m_isSystemDisk;
    bool m_isSystemDiskHasBeenSet;
    int m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_attachedTo;
    bool m_attachedToHasBeenSet;
    bool m_isAttached;
    bool m_isAttachedHasBeenSet;
    Aws::String m_attachmentState;
    bool m_attachmentStateHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
