/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/LambdaVolumeMount.h>
#include <aws/greengrassv2/model/LambdaDeviceMount.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a container in which Lambda functions run on
   * Greengrass core devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/LambdaContainerParams">AWS
   * API Reference</a></p>
   */
  class LambdaContainerParams
  {
  public:
    AWS_GREENGRASSV2_API LambdaContainerParams() = default;
    AWS_GREENGRASSV2_API LambdaContainerParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaContainerParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The memory size of the container, expressed in kilobytes.</p> <p>Default:
     * <code>16384</code> (16 MB)</p>
     */
    inline int GetMemorySizeInKB() const { return m_memorySizeInKB; }
    inline bool MemorySizeInKBHasBeenSet() const { return m_memorySizeInKBHasBeenSet; }
    inline void SetMemorySizeInKB(int value) { m_memorySizeInKBHasBeenSet = true; m_memorySizeInKB = value; }
    inline LambdaContainerParams& WithMemorySizeInKB(int value) { SetMemorySizeInKB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the container can read information from the device's
     * <code>/sys</code> folder.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetMountROSysfs() const { return m_mountROSysfs; }
    inline bool MountROSysfsHasBeenSet() const { return m_mountROSysfsHasBeenSet; }
    inline void SetMountROSysfs(bool value) { m_mountROSysfsHasBeenSet = true; m_mountROSysfs = value; }
    inline LambdaContainerParams& WithMountROSysfs(bool value) { SetMountROSysfs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline const Aws::Vector<LambdaVolumeMount>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<LambdaVolumeMount>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<LambdaVolumeMount>>
    LambdaContainerParams& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = LambdaVolumeMount>
    LambdaContainerParams& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline const Aws::Vector<LambdaDeviceMount>& GetDevices() const { return m_devices; }
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }
    template<typename DevicesT = Aws::Vector<LambdaDeviceMount>>
    void SetDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices = std::forward<DevicesT>(value); }
    template<typename DevicesT = Aws::Vector<LambdaDeviceMount>>
    LambdaContainerParams& WithDevices(DevicesT&& value) { SetDevices(std::forward<DevicesT>(value)); return *this;}
    template<typename DevicesT = LambdaDeviceMount>
    LambdaContainerParams& AddDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices.emplace_back(std::forward<DevicesT>(value)); return *this; }
    ///@}
  private:

    int m_memorySizeInKB{0};
    bool m_memorySizeInKBHasBeenSet = false;

    bool m_mountROSysfs{false};
    bool m_mountROSysfsHasBeenSet = false;

    Aws::Vector<LambdaVolumeMount> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<LambdaDeviceMount> m_devices;
    bool m_devicesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
