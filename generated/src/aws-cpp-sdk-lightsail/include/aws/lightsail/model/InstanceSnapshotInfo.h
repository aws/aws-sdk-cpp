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
    AWS_LIGHTSAIL_API InstanceSnapshotInfo() = default;
    AWS_LIGHTSAIL_API InstanceSnapshotInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceSnapshotInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bundle ID from which the source instance was created
     * (<code>micro_x_x</code>).</p>
     */
    inline const Aws::String& GetFromBundleId() const { return m_fromBundleId; }
    inline bool FromBundleIdHasBeenSet() const { return m_fromBundleIdHasBeenSet; }
    template<typename FromBundleIdT = Aws::String>
    void SetFromBundleId(FromBundleIdT&& value) { m_fromBundleIdHasBeenSet = true; m_fromBundleId = std::forward<FromBundleIdT>(value); }
    template<typename FromBundleIdT = Aws::String>
    InstanceSnapshotInfo& WithFromBundleId(FromBundleIdT&& value) { SetFromBundleId(std::forward<FromBundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blueprint ID from which the source instance
     * (<code>amazon_linux_2023</code>).</p>
     */
    inline const Aws::String& GetFromBlueprintId() const { return m_fromBlueprintId; }
    inline bool FromBlueprintIdHasBeenSet() const { return m_fromBlueprintIdHasBeenSet; }
    template<typename FromBlueprintIdT = Aws::String>
    void SetFromBlueprintId(FromBlueprintIdT&& value) { m_fromBlueprintIdHasBeenSet = true; m_fromBlueprintId = std::forward<FromBlueprintIdT>(value); }
    template<typename FromBlueprintIdT = Aws::String>
    InstanceSnapshotInfo& WithFromBlueprintId(FromBlueprintIdT&& value) { SetFromBlueprintId(std::forward<FromBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing the disks that were attached to the source
     * instance.</p>
     */
    inline const Aws::Vector<DiskInfo>& GetFromDiskInfo() const { return m_fromDiskInfo; }
    inline bool FromDiskInfoHasBeenSet() const { return m_fromDiskInfoHasBeenSet; }
    template<typename FromDiskInfoT = Aws::Vector<DiskInfo>>
    void SetFromDiskInfo(FromDiskInfoT&& value) { m_fromDiskInfoHasBeenSet = true; m_fromDiskInfo = std::forward<FromDiskInfoT>(value); }
    template<typename FromDiskInfoT = Aws::Vector<DiskInfo>>
    InstanceSnapshotInfo& WithFromDiskInfo(FromDiskInfoT&& value) { SetFromDiskInfo(std::forward<FromDiskInfoT>(value)); return *this;}
    template<typename FromDiskInfoT = DiskInfo>
    InstanceSnapshotInfo& AddFromDiskInfo(FromDiskInfoT&& value) { m_fromDiskInfoHasBeenSet = true; m_fromDiskInfo.emplace_back(std::forward<FromDiskInfoT>(value)); return *this; }
    ///@}
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
