/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/DiskInfo.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceSnapshotInfo">AWS
   * API Reference</a></p>
   */
  class InstanceSnapshotInfo
  {
  public:
    AWS_LIGHTSAIL_API InstanceSnapshotInfo();
    AWS_LIGHTSAIL_API InstanceSnapshotInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceSnapshotInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline const Aws::String& GetFromBundleId() const{ return m_fromBundleId; }

    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline bool FromBundleIdHasBeenSet() const { return m_fromBundleIdHasBeenSet; }

    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline void SetFromBundleId(const Aws::String& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = value; }

    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline void SetFromBundleId(Aws::String&& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = std::move(value); }

    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline void SetFromBundleId(const char* value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId.assign(value); }

    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline InstanceSnapshotInfo& WithFromBundleId(const Aws::String& value) { SetFromBundleId(value); return *this;}

    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline InstanceSnapshotInfo& WithFromBundleId(Aws::String&& value) { SetFromBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID from which the source instance was created (e.g.,
     * <code>micro_1_0</code>).</p>
     */
    inline InstanceSnapshotInfo& WithFromBundleId(const char* value) { SetFromBundleId(value); return *this;}


    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline const Aws::String& GetFromBlueprintId() const{ return m_fromBlueprintId; }

    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline bool FromBlueprintIdHasBeenSet() const { return m_fromBlueprintIdHasBeenSet; }

    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline void SetFromBlueprintId(const Aws::String& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = value; }

    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline void SetFromBlueprintId(Aws::String&& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = std::move(value); }

    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline void SetFromBlueprintId(const char* value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId.assign(value); }

    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline InstanceSnapshotInfo& WithFromBlueprintId(const Aws::String& value) { SetFromBlueprintId(value); return *this;}

    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline InstanceSnapshotInfo& WithFromBlueprintId(Aws::String&& value) { SetFromBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The blueprint ID from which the source instance (e.g.,
     * <code>os_debian_8_3</code>).</p>
     */
    inline InstanceSnapshotInfo& WithFromBlueprintId(const char* value) { SetFromBlueprintId(value); return *this;}


    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline const Aws::Vector<DiskInfo>& GetFromDiskInfo() const{ return m_fromDiskInfo; }

    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline bool FromDiskInfoHasBeenSet() const { return m_fromDiskInfoHasBeenSet; }

    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline void SetFromDiskInfo(const Aws::Vector<DiskInfo>& value) { m_fromDiskInfoHasBeenSet = true; m_fromDiskInfo = value; }

    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline void SetFromDiskInfo(Aws::Vector<DiskInfo>&& value) { m_fromDiskInfoHasBeenSet = true; m_fromDiskInfo = std::move(value); }

    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline InstanceSnapshotInfo& WithFromDiskInfo(const Aws::Vector<DiskInfo>& value) { SetFromDiskInfo(value); return *this;}

    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline InstanceSnapshotInfo& WithFromDiskInfo(Aws::Vector<DiskInfo>&& value) { SetFromDiskInfo(std::move(value)); return *this;}

    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline InstanceSnapshotInfo& AddFromDiskInfo(const DiskInfo& value) { m_fromDiskInfoHasBeenSet = true; m_fromDiskInfo.push_back(value); return *this; }

    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline InstanceSnapshotInfo& AddFromDiskInfo(DiskInfo&& value) { m_fromDiskInfoHasBeenSet = true; m_fromDiskInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fromBundleId;
    bool m_fromBundleIdHasBeenSet = false;

    Aws::String m_fromBlueprintId;
    bool m_fromBlueprintIdHasBeenSet = false;

    Aws::Vector<DiskInfo> m_fromDiskInfo;
    bool m_fromDiskInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
