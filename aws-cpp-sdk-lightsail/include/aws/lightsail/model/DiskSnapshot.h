﻿/*
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
#include <aws/lightsail/model/DiskSnapshotState.h>
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
   * <p>Describes a block storage disk snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DiskSnapshot">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API DiskSnapshot
  {
  public:
    DiskSnapshot();
    DiskSnapshot(Aws::Utils::Json::JsonView jsonValue);
    DiskSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline DiskSnapshot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline DiskSnapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline DiskSnapshot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline DiskSnapshot& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline DiskSnapshot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the disk snapshot.</p>
     */
    inline DiskSnapshot& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DiskSnapshot& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline DiskSnapshot& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline DiskSnapshot& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The date when the disk snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the disk snapshot was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the disk snapshot was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date when the disk snapshot was created.</p>
     */
    inline DiskSnapshot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the disk snapshot was created.</p>
     */
    inline DiskSnapshot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The AWS Region and Availability Zone where the disk snapshot was created.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The AWS Region and Availability Zone where the disk snapshot was created.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The AWS Region and Availability Zone where the disk snapshot was created.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The AWS Region and Availability Zone where the disk snapshot was created.</p>
     */
    inline DiskSnapshot& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The AWS Region and Availability Zone where the disk snapshot was created.</p>
     */
    inline DiskSnapshot& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type (e.g., <code>DiskSnapshot</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>DiskSnapshot</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>DiskSnapshot</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>DiskSnapshot</code>).</p>
     */
    inline DiskSnapshot& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>DiskSnapshot</code>).</p>
     */
    inline DiskSnapshot& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline DiskSnapshot& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}


    /**
     * <p>The status of the disk snapshot operation.</p>
     */
    inline const DiskSnapshotState& GetState() const{ return m_state; }

    /**
     * <p>The status of the disk snapshot operation.</p>
     */
    inline void SetState(const DiskSnapshotState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the disk snapshot operation.</p>
     */
    inline void SetState(DiskSnapshotState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the disk snapshot operation.</p>
     */
    inline DiskSnapshot& WithState(const DiskSnapshotState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the disk snapshot operation.</p>
     */
    inline DiskSnapshot& WithState(DiskSnapshotState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The progress of the disk snapshot operation.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The progress of the disk snapshot operation.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The progress of the disk snapshot operation.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>The progress of the disk snapshot operation.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The progress of the disk snapshot operation.</p>
     */
    inline DiskSnapshot& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The progress of the disk snapshot operation.</p>
     */
    inline DiskSnapshot& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The progress of the disk snapshot operation.</p>
     */
    inline DiskSnapshot& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>The unique name of the source disk from which you are creating the disk
     * snapshot.</p>
     */
    inline const Aws::String& GetFromDiskName() const{ return m_fromDiskName; }

    /**
     * <p>The unique name of the source disk from which you are creating the disk
     * snapshot.</p>
     */
    inline void SetFromDiskName(const Aws::String& value) { m_fromDiskNameHasBeenSet = true; m_fromDiskName = value; }

    /**
     * <p>The unique name of the source disk from which you are creating the disk
     * snapshot.</p>
     */
    inline void SetFromDiskName(Aws::String&& value) { m_fromDiskNameHasBeenSet = true; m_fromDiskName = std::move(value); }

    /**
     * <p>The unique name of the source disk from which you are creating the disk
     * snapshot.</p>
     */
    inline void SetFromDiskName(const char* value) { m_fromDiskNameHasBeenSet = true; m_fromDiskName.assign(value); }

    /**
     * <p>The unique name of the source disk from which you are creating the disk
     * snapshot.</p>
     */
    inline DiskSnapshot& WithFromDiskName(const Aws::String& value) { SetFromDiskName(value); return *this;}

    /**
     * <p>The unique name of the source disk from which you are creating the disk
     * snapshot.</p>
     */
    inline DiskSnapshot& WithFromDiskName(Aws::String&& value) { SetFromDiskName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the source disk from which you are creating the disk
     * snapshot.</p>
     */
    inline DiskSnapshot& WithFromDiskName(const char* value) { SetFromDiskName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which you are creating
     * the disk snapshot.</p>
     */
    inline const Aws::String& GetFromDiskArn() const{ return m_fromDiskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which you are creating
     * the disk snapshot.</p>
     */
    inline void SetFromDiskArn(const Aws::String& value) { m_fromDiskArnHasBeenSet = true; m_fromDiskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which you are creating
     * the disk snapshot.</p>
     */
    inline void SetFromDiskArn(Aws::String&& value) { m_fromDiskArnHasBeenSet = true; m_fromDiskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which you are creating
     * the disk snapshot.</p>
     */
    inline void SetFromDiskArn(const char* value) { m_fromDiskArnHasBeenSet = true; m_fromDiskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which you are creating
     * the disk snapshot.</p>
     */
    inline DiskSnapshot& WithFromDiskArn(const Aws::String& value) { SetFromDiskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which you are creating
     * the disk snapshot.</p>
     */
    inline DiskSnapshot& WithFromDiskArn(Aws::String&& value) { SetFromDiskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source disk from which you are creating
     * the disk snapshot.</p>
     */
    inline DiskSnapshot& WithFromDiskArn(const char* value) { SetFromDiskArn(value); return *this;}

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

    DiskSnapshotState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_progress;
    bool m_progressHasBeenSet;

    Aws::String m_fromDiskName;
    bool m_fromDiskNameHasBeenSet;

    Aws::String m_fromDiskArn;
    bool m_fromDiskArnHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
