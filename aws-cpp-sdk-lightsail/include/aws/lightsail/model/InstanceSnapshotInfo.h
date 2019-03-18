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
  class AWS_LIGHTSAIL_API InstanceSnapshotInfo
  {
  public:
    InstanceSnapshotInfo();
    InstanceSnapshotInfo(Aws::Utils::Json::JsonView jsonValue);
    InstanceSnapshotInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_fromBundleIdHasBeenSet;

    Aws::String m_fromBlueprintId;
    bool m_fromBlueprintIdHasBeenSet;

    Aws::Vector<DiskInfo> m_fromDiskInfo;
    bool m_fromDiskInfoHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
