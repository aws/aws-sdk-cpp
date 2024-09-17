/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ExportSnapshotRecordSourceInfo
  {
  public:
    AWS_LIGHTSAIL_API ExportSnapshotRecordSourceInfo();
    AWS_LIGHTSAIL_API ExportSnapshotRecordSourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ExportSnapshotRecordSourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lightsail resource type (<code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline const ExportSnapshotRecordSourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ExportSnapshotRecordSourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ExportSnapshotRecordSourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ExportSnapshotRecordSourceInfo& WithResourceType(const ExportSnapshotRecordSourceType& value) { SetResourceType(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithResourceType(ExportSnapshotRecordSourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ExportSnapshotRecordSourceInfo& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ExportSnapshotRecordSourceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ExportSnapshotRecordSourceInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline const Aws::String& GetFromResourceName() const{ return m_fromResourceName; }
    inline bool FromResourceNameHasBeenSet() const { return m_fromResourceNameHasBeenSet; }
    inline void SetFromResourceName(const Aws::String& value) { m_fromResourceNameHasBeenSet = true; m_fromResourceName = value; }
    inline void SetFromResourceName(Aws::String&& value) { m_fromResourceNameHasBeenSet = true; m_fromResourceName = std::move(value); }
    inline void SetFromResourceName(const char* value) { m_fromResourceNameHasBeenSet = true; m_fromResourceName.assign(value); }
    inline ExportSnapshotRecordSourceInfo& WithFromResourceName(const Aws::String& value) { SetFromResourceName(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithFromResourceName(Aws::String&& value) { SetFromResourceName(std::move(value)); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithFromResourceName(const char* value) { SetFromResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline const Aws::String& GetFromResourceArn() const{ return m_fromResourceArn; }
    inline bool FromResourceArnHasBeenSet() const { return m_fromResourceArnHasBeenSet; }
    inline void SetFromResourceArn(const Aws::String& value) { m_fromResourceArnHasBeenSet = true; m_fromResourceArn = value; }
    inline void SetFromResourceArn(Aws::String&& value) { m_fromResourceArnHasBeenSet = true; m_fromResourceArn = std::move(value); }
    inline void SetFromResourceArn(const char* value) { m_fromResourceArnHasBeenSet = true; m_fromResourceArn.assign(value); }
    inline ExportSnapshotRecordSourceInfo& WithFromResourceArn(const Aws::String& value) { SetFromResourceArn(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithFromResourceArn(Aws::String&& value) { SetFromResourceArn(std::move(value)); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithFromResourceArn(const char* value) { SetFromResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline const InstanceSnapshotInfo& GetInstanceSnapshotInfo() const{ return m_instanceSnapshotInfo; }
    inline bool InstanceSnapshotInfoHasBeenSet() const { return m_instanceSnapshotInfoHasBeenSet; }
    inline void SetInstanceSnapshotInfo(const InstanceSnapshotInfo& value) { m_instanceSnapshotInfoHasBeenSet = true; m_instanceSnapshotInfo = value; }
    inline void SetInstanceSnapshotInfo(InstanceSnapshotInfo&& value) { m_instanceSnapshotInfoHasBeenSet = true; m_instanceSnapshotInfo = std::move(value); }
    inline ExportSnapshotRecordSourceInfo& WithInstanceSnapshotInfo(const InstanceSnapshotInfo& value) { SetInstanceSnapshotInfo(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithInstanceSnapshotInfo(InstanceSnapshotInfo&& value) { SetInstanceSnapshotInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline const DiskSnapshotInfo& GetDiskSnapshotInfo() const{ return m_diskSnapshotInfo; }
    inline bool DiskSnapshotInfoHasBeenSet() const { return m_diskSnapshotInfoHasBeenSet; }
    inline void SetDiskSnapshotInfo(const DiskSnapshotInfo& value) { m_diskSnapshotInfoHasBeenSet = true; m_diskSnapshotInfo = value; }
    inline void SetDiskSnapshotInfo(DiskSnapshotInfo&& value) { m_diskSnapshotInfoHasBeenSet = true; m_diskSnapshotInfo = std::move(value); }
    inline ExportSnapshotRecordSourceInfo& WithDiskSnapshotInfo(const DiskSnapshotInfo& value) { SetDiskSnapshotInfo(value); return *this;}
    inline ExportSnapshotRecordSourceInfo& WithDiskSnapshotInfo(DiskSnapshotInfo&& value) { SetDiskSnapshotInfo(std::move(value)); return *this;}
    ///@}
  private:

    ExportSnapshotRecordSourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_fromResourceName;
    bool m_fromResourceNameHasBeenSet = false;

    Aws::String m_fromResourceArn;
    bool m_fromResourceArnHasBeenSet = false;

    InstanceSnapshotInfo m_instanceSnapshotInfo;
    bool m_instanceSnapshotInfoHasBeenSet = false;

    DiskSnapshotInfo m_diskSnapshotInfo;
    bool m_diskSnapshotInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
