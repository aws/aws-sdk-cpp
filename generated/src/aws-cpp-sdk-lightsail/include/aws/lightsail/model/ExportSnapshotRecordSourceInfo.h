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
    AWS_LIGHTSAIL_API ExportSnapshotRecordSourceInfo() = default;
    AWS_LIGHTSAIL_API ExportSnapshotRecordSourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ExportSnapshotRecordSourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lightsail resource type (<code>InstanceSnapshot</code> or
     * <code>DiskSnapshot</code>).</p>
     */
    inline ExportSnapshotRecordSourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ExportSnapshotRecordSourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ExportSnapshotRecordSourceInfo& WithResourceType(ExportSnapshotRecordSourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the source instance or disk snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ExportSnapshotRecordSourceInfo& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source instance or disk snapshot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ExportSnapshotRecordSourceInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source instance or disk snapshot.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ExportSnapshotRecordSourceInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot's source instance or disk.</p>
     */
    inline const Aws::String& GetFromResourceName() const { return m_fromResourceName; }
    inline bool FromResourceNameHasBeenSet() const { return m_fromResourceNameHasBeenSet; }
    template<typename FromResourceNameT = Aws::String>
    void SetFromResourceName(FromResourceNameT&& value) { m_fromResourceNameHasBeenSet = true; m_fromResourceName = std::forward<FromResourceNameT>(value); }
    template<typename FromResourceNameT = Aws::String>
    ExportSnapshotRecordSourceInfo& WithFromResourceName(FromResourceNameT&& value) { SetFromResourceName(std::forward<FromResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot's source instance or disk.</p>
     */
    inline const Aws::String& GetFromResourceArn() const { return m_fromResourceArn; }
    inline bool FromResourceArnHasBeenSet() const { return m_fromResourceArnHasBeenSet; }
    template<typename FromResourceArnT = Aws::String>
    void SetFromResourceArn(FromResourceArnT&& value) { m_fromResourceArnHasBeenSet = true; m_fromResourceArn = std::forward<FromResourceArnT>(value); }
    template<typename FromResourceArnT = Aws::String>
    ExportSnapshotRecordSourceInfo& WithFromResourceArn(FromResourceArnT&& value) { SetFromResourceArn(std::forward<FromResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing an instance snapshot.</p>
     */
    inline const InstanceSnapshotInfo& GetInstanceSnapshotInfo() const { return m_instanceSnapshotInfo; }
    inline bool InstanceSnapshotInfoHasBeenSet() const { return m_instanceSnapshotInfoHasBeenSet; }
    template<typename InstanceSnapshotInfoT = InstanceSnapshotInfo>
    void SetInstanceSnapshotInfo(InstanceSnapshotInfoT&& value) { m_instanceSnapshotInfoHasBeenSet = true; m_instanceSnapshotInfo = std::forward<InstanceSnapshotInfoT>(value); }
    template<typename InstanceSnapshotInfoT = InstanceSnapshotInfo>
    ExportSnapshotRecordSourceInfo& WithInstanceSnapshotInfo(InstanceSnapshotInfoT&& value) { SetInstanceSnapshotInfo(std::forward<InstanceSnapshotInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing a disk snapshot.</p>
     */
    inline const DiskSnapshotInfo& GetDiskSnapshotInfo() const { return m_diskSnapshotInfo; }
    inline bool DiskSnapshotInfoHasBeenSet() const { return m_diskSnapshotInfoHasBeenSet; }
    template<typename DiskSnapshotInfoT = DiskSnapshotInfo>
    void SetDiskSnapshotInfo(DiskSnapshotInfoT&& value) { m_diskSnapshotInfoHasBeenSet = true; m_diskSnapshotInfo = std::forward<DiskSnapshotInfoT>(value); }
    template<typename DiskSnapshotInfoT = DiskSnapshotInfo>
    ExportSnapshotRecordSourceInfo& WithDiskSnapshotInfo(DiskSnapshotInfoT&& value) { SetDiskSnapshotInfo(std::forward<DiskSnapshotInfoT>(value)); return *this;}
    ///@}
  private:

    ExportSnapshotRecordSourceType m_resourceType{ExportSnapshotRecordSourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
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
