﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/model/InstanceSnapshotState.h>

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
   * <p>Describes the snapshot of the virtual private server, or
   * <i>instance</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceSnapshot">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API InstanceSnapshot
  {
  public:
    InstanceSnapshot();
    InstanceSnapshot(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceSnapshot& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline InstanceSnapshot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline InstanceSnapshot& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline InstanceSnapshot& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline InstanceSnapshot& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline InstanceSnapshot& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:InstanceSnapshot/d23b5706-3322-4d83-81e5-12345EXAMPLE</code>).</p>
     */
    inline InstanceSnapshot& WithArn(const char* value) { SetArn(value); return *this;}

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
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

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
    inline InstanceSnapshot& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline InstanceSnapshot& WithSupportCode(Aws::String&& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about an instance or another resource in Lightsail. This code enables
     * our support team to look up your Lightsail information more easily.</p>
     */
    inline InstanceSnapshot& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}

    /**
     * <p>The timestamp when the snapshot was created (e.g.,
     * <code>1479907467.024</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the snapshot was created (e.g.,
     * <code>1479907467.024</code>).</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the snapshot was created (e.g.,
     * <code>1479907467.024</code>).</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the snapshot was created (e.g.,
     * <code>1479907467.024</code>).</p>
     */
    inline InstanceSnapshot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the snapshot was created (e.g.,
     * <code>1479907467.024</code>).</p>
     */
    inline InstanceSnapshot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The region name and availability zone where you created the snapshot.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The region name and availability zone where you created the snapshot.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The region name and availability zone where you created the snapshot.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The region name and availability zone where you created the snapshot.</p>
     */
    inline InstanceSnapshot& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The region name and availability zone where you created the snapshot.</p>
     */
    inline InstanceSnapshot& WithLocation(ResourceLocation&& value) { SetLocation(value); return *this;}

    /**
     * <p>The type of resource (usually <code>InstanceSnapshot</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource (usually <code>InstanceSnapshot</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource (usually <code>InstanceSnapshot</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource (usually <code>InstanceSnapshot</code>).</p>
     */
    inline InstanceSnapshot& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource (usually <code>InstanceSnapshot</code>).</p>
     */
    inline InstanceSnapshot& WithResourceType(ResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The state the snapshot is in.</p>
     */
    inline const InstanceSnapshotState& GetState() const{ return m_state; }

    /**
     * <p>The state the snapshot is in.</p>
     */
    inline void SetState(const InstanceSnapshotState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state the snapshot is in.</p>
     */
    inline void SetState(InstanceSnapshotState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state the snapshot is in.</p>
     */
    inline InstanceSnapshot& WithState(const InstanceSnapshotState& value) { SetState(value); return *this;}

    /**
     * <p>The state the snapshot is in.</p>
     */
    inline InstanceSnapshot& WithState(InstanceSnapshotState&& value) { SetState(value); return *this;}

    /**
     * <p>The progress of the snapshot.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The progress of the snapshot.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The progress of the snapshot.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The progress of the snapshot.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The progress of the snapshot.</p>
     */
    inline InstanceSnapshot& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The progress of the snapshot.</p>
     */
    inline InstanceSnapshot& WithProgress(Aws::String&& value) { SetProgress(value); return *this;}

    /**
     * <p>The progress of the snapshot.</p>
     */
    inline InstanceSnapshot& WithProgress(const char* value) { SetProgress(value); return *this;}

    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline const Aws::String& GetFromInstanceName() const{ return m_fromInstanceName; }

    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline void SetFromInstanceName(const Aws::String& value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName = value; }

    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline void SetFromInstanceName(Aws::String&& value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName = value; }

    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline void SetFromInstanceName(const char* value) { m_fromInstanceNameHasBeenSet = true; m_fromInstanceName.assign(value); }

    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline InstanceSnapshot& WithFromInstanceName(const Aws::String& value) { SetFromInstanceName(value); return *this;}

    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline InstanceSnapshot& WithFromInstanceName(Aws::String&& value) { SetFromInstanceName(value); return *this;}

    /**
     * <p>The instance from which the snapshot was created.</p>
     */
    inline InstanceSnapshot& WithFromInstanceName(const char* value) { SetFromInstanceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline const Aws::String& GetFromInstanceArn() const{ return m_fromInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline void SetFromInstanceArn(const Aws::String& value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline void SetFromInstanceArn(Aws::String&& value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline void SetFromInstanceArn(const char* value) { m_fromInstanceArnHasBeenSet = true; m_fromInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline InstanceSnapshot& WithFromInstanceArn(const Aws::String& value) { SetFromInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline InstanceSnapshot& WithFromInstanceArn(Aws::String&& value) { SetFromInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance from which the snapshot was
     * created (e.g.,
     * <code>arn:aws:lightsail:us-east-1:123456789101:Instance/64b8404c-ccb1-430b-8daf-12345EXAMPLE</code>).</p>
     */
    inline InstanceSnapshot& WithFromInstanceArn(const char* value) { SetFromInstanceArn(value); return *this;}

    /**
     * <p>The blueprint ID from which you created the snapshot (e.g.,
     * <code>os_debian_8_3</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline const Aws::String& GetFromBlueprintId() const{ return m_fromBlueprintId; }

    /**
     * <p>The blueprint ID from which you created the snapshot (e.g.,
     * <code>os_debian_8_3</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline void SetFromBlueprintId(const Aws::String& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = value; }

    /**
     * <p>The blueprint ID from which you created the snapshot (e.g.,
     * <code>os_debian_8_3</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline void SetFromBlueprintId(Aws::String&& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = value; }

    /**
     * <p>The blueprint ID from which you created the snapshot (e.g.,
     * <code>os_debian_8_3</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline void SetFromBlueprintId(const char* value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId.assign(value); }

    /**
     * <p>The blueprint ID from which you created the snapshot (e.g.,
     * <code>os_debian_8_3</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline InstanceSnapshot& WithFromBlueprintId(const Aws::String& value) { SetFromBlueprintId(value); return *this;}

    /**
     * <p>The blueprint ID from which you created the snapshot (e.g.,
     * <code>os_debian_8_3</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline InstanceSnapshot& WithFromBlueprintId(Aws::String&& value) { SetFromBlueprintId(value); return *this;}

    /**
     * <p>The blueprint ID from which you created the snapshot (e.g.,
     * <code>os_debian_8_3</code>). A blueprint is a virtual private server (or
     * <i>instance</i>) image used to create instances quickly.</p>
     */
    inline InstanceSnapshot& WithFromBlueprintId(const char* value) { SetFromBlueprintId(value); return *this;}

    /**
     * <p>The bundle ID from which you created the snapshot (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline const Aws::String& GetFromBundleId() const{ return m_fromBundleId; }

    /**
     * <p>The bundle ID from which you created the snapshot (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline void SetFromBundleId(const Aws::String& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = value; }

    /**
     * <p>The bundle ID from which you created the snapshot (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline void SetFromBundleId(Aws::String&& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = value; }

    /**
     * <p>The bundle ID from which you created the snapshot (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline void SetFromBundleId(const char* value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId.assign(value); }

    /**
     * <p>The bundle ID from which you created the snapshot (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline InstanceSnapshot& WithFromBundleId(const Aws::String& value) { SetFromBundleId(value); return *this;}

    /**
     * <p>The bundle ID from which you created the snapshot (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline InstanceSnapshot& WithFromBundleId(Aws::String&& value) { SetFromBundleId(value); return *this;}

    /**
     * <p>The bundle ID from which you created the snapshot (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline InstanceSnapshot& WithFromBundleId(const char* value) { SetFromBundleId(value); return *this;}

    /**
     * <p>The size in GB of the SSD.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size in GB of the SSD.</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size in GB of the SSD.</p>
     */
    inline InstanceSnapshot& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}

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
    InstanceSnapshotState m_state;
    bool m_stateHasBeenSet;
    Aws::String m_progress;
    bool m_progressHasBeenSet;
    Aws::String m_fromInstanceName;
    bool m_fromInstanceNameHasBeenSet;
    Aws::String m_fromInstanceArn;
    bool m_fromInstanceArnHasBeenSet;
    Aws::String m_fromBlueprintId;
    bool m_fromBlueprintIdHasBeenSet;
    Aws::String m_fromBundleId;
    bool m_fromBundleIdHasBeenSet;
    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
