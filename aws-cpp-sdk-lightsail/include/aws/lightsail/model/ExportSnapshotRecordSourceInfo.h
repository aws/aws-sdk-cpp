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
#include <aws/lightsail/model/ExportSnapshotRecordSourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceSnapshotInfo.h>
#include <aws/lightsail/model/DiskSnapshotInfo.h>
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
   * <p>Describes the source of an export snapshot record.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ExportSnapshotRecordSourceInfo">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API ExportSnapshotRecordSourceInfo
  {
  public:
    ExportSnapshotRecordSourceInfo();
    ExportSnapshotRecordSourceInfo(Aws::Utils::Json::JsonView jsonValue);
    ExportSnapshotRecordSourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Lightsail resource type (e.g., <code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline const ExportSnapshotRecordSourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g., <code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline void SetResourceType(const ExportSnapshotRecordSourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline void SetResourceType(ExportSnapshotRecordSourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithResourceType(const ExportSnapshotRecordSourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithResourceType(ExportSnapshotRecordSourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline const Aws::String& GetFromResourceName() const{ return m_fromResourceName; }

    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline bool FromResourceNameHasBeenSet() const { return m_fromResourceNameHasBeenSet; }

    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline void SetFromResourceName(const Aws::String& value) { m_fromResourceNameHasBeenSet = true; m_fromResourceName = value; }

    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline void SetFromResourceName(Aws::String&& value) { m_fromResourceNameHasBeenSet = true; m_fromResourceName = std::move(value); }

    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline void SetFromResourceName(const char* value) { m_fromResourceNameHasBeenSet = true; m_fromResourceName.assign(value); }

    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithFromResourceName(const Aws::String& value) { SetFromResourceName(value); return *this;}

    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithFromResourceName(Aws::String&& value) { SetFromResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithFromResourceName(const char* value) { SetFromResourceName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline const Aws::String& GetFromResourceArn() const{ return m_fromResourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline bool FromResourceArnHasBeenSet() const { return m_fromResourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline void SetFromResourceArn(const Aws::String& value) { m_fromResourceArnHasBeenSet = true; m_fromResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline void SetFromResourceArn(Aws::String&& value) { m_fromResourceArnHasBeenSet = true; m_fromResourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline void SetFromResourceArn(const char* value) { m_fromResourceArnHasBeenSet = true; m_fromResourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithFromResourceArn(const Aws::String& value) { SetFromResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithFromResourceArn(Aws::String&& value) { SetFromResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithFromResourceArn(const char* value) { SetFromResourceArn(value); return *this;}


    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline const InstanceSnapshotInfo& GetInstanceSnapshotInfo() const{ return m_instanceSnapshotInfo; }

    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline bool InstanceSnapshotInfoHasBeenSet() const { return m_instanceSnapshotInfoHasBeenSet; }

    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline void SetInstanceSnapshotInfo(const InstanceSnapshotInfo& value) { m_instanceSnapshotInfoHasBeenSet = true; m_instanceSnapshotInfo = value; }

    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline void SetInstanceSnapshotInfo(InstanceSnapshotInfo&& value) { m_instanceSnapshotInfoHasBeenSet = true; m_instanceSnapshotInfo = std::move(value); }

    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithInstanceSnapshotInfo(const InstanceSnapshotInfo& value) { SetInstanceSnapshotInfo(value); return *this;}

    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithInstanceSnapshotInfo(InstanceSnapshotInfo&& value) { SetInstanceSnapshotInfo(std::move(value)); return *this;}


    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline const DiskSnapshotInfo& GetDiskSnapshotInfo() const{ return m_diskSnapshotInfo; }

    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline bool DiskSnapshotInfoHasBeenSet() const { return m_diskSnapshotInfoHasBeenSet; }

    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline void SetDiskSnapshotInfo(const DiskSnapshotInfo& value) { m_diskSnapshotInfoHasBeenSet = true; m_diskSnapshotInfo = value; }

    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline void SetDiskSnapshotInfo(DiskSnapshotInfo&& value) { m_diskSnapshotInfoHasBeenSet = true; m_diskSnapshotInfo = std::move(value); }

    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithDiskSnapshotInfo(const DiskSnapshotInfo& value) { SetDiskSnapshotInfo(value); return *this;}

    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline ExportSnapshotRecordSourceInfo& WithDiskSnapshotInfo(DiskSnapshotInfo&& value) { SetDiskSnapshotInfo(std::move(value)); return *this;}

  private:

    ExportSnapshotRecordSourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_fromResourceName;
    bool m_fromResourceNameHasBeenSet;

    Aws::String m_fromResourceArn;
    bool m_fromResourceArnHasBeenSet;

    InstanceSnapshotInfo m_instanceSnapshotInfo;
    bool m_instanceSnapshotInfoHasBeenSet;

    DiskSnapshotInfo m_diskSnapshotInfo;
    bool m_diskSnapshotInfoHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
