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
    AWS_GREENGRASSV2_API LambdaContainerParams();
    AWS_GREENGRASSV2_API LambdaContainerParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaContainerParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The memory size of the container, expressed in kilobytes.</p> <p>Default:
     * <code>16384</code> (16 MB)</p>
     */
    inline int GetMemorySizeInKB() const{ return m_memorySizeInKB; }

    /**
     * <p>The memory size of the container, expressed in kilobytes.</p> <p>Default:
     * <code>16384</code> (16 MB)</p>
     */
    inline bool MemorySizeInKBHasBeenSet() const { return m_memorySizeInKBHasBeenSet; }

    /**
     * <p>The memory size of the container, expressed in kilobytes.</p> <p>Default:
     * <code>16384</code> (16 MB)</p>
     */
    inline void SetMemorySizeInKB(int value) { m_memorySizeInKBHasBeenSet = true; m_memorySizeInKB = value; }

    /**
     * <p>The memory size of the container, expressed in kilobytes.</p> <p>Default:
     * <code>16384</code> (16 MB)</p>
     */
    inline LambdaContainerParams& WithMemorySizeInKB(int value) { SetMemorySizeInKB(value); return *this;}


    /**
     * <p>Whether or not the container can read information from the device's
     * <code>/sys</code> folder.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetMountROSysfs() const{ return m_mountROSysfs; }

    /**
     * <p>Whether or not the container can read information from the device's
     * <code>/sys</code> folder.</p> <p>Default: <code>false</code> </p>
     */
    inline bool MountROSysfsHasBeenSet() const { return m_mountROSysfsHasBeenSet; }

    /**
     * <p>Whether or not the container can read information from the device's
     * <code>/sys</code> folder.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetMountROSysfs(bool value) { m_mountROSysfsHasBeenSet = true; m_mountROSysfs = value; }

    /**
     * <p>Whether or not the container can read information from the device's
     * <code>/sys</code> folder.</p> <p>Default: <code>false</code> </p>
     */
    inline LambdaContainerParams& WithMountROSysfs(bool value) { SetMountROSysfs(value); return *this;}


    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline const Aws::Vector<LambdaVolumeMount>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline void SetVolumes(const Aws::Vector<LambdaVolumeMount>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline void SetVolumes(Aws::Vector<LambdaVolumeMount>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline LambdaContainerParams& WithVolumes(const Aws::Vector<LambdaVolumeMount>& value) { SetVolumes(value); return *this;}

    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline LambdaContainerParams& WithVolumes(Aws::Vector<LambdaVolumeMount>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline LambdaContainerParams& AddVolumes(const LambdaVolumeMount& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>The list of volumes that the container can access.</p>
     */
    inline LambdaContainerParams& AddVolumes(LambdaVolumeMount&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline const Aws::Vector<LambdaDeviceMount>& GetDevices() const{ return m_devices; }

    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline void SetDevices(const Aws::Vector<LambdaDeviceMount>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline void SetDevices(Aws::Vector<LambdaDeviceMount>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline LambdaContainerParams& WithDevices(const Aws::Vector<LambdaDeviceMount>& value) { SetDevices(value); return *this;}

    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline LambdaContainerParams& WithDevices(Aws::Vector<LambdaDeviceMount>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline LambdaContainerParams& AddDevices(const LambdaDeviceMount& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>The list of system devices that the container can access.</p>
     */
    inline LambdaContainerParams& AddDevices(LambdaDeviceMount&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }

  private:

    int m_memorySizeInKB;
    bool m_memorySizeInKBHasBeenSet = false;

    bool m_mountROSysfs;
    bool m_mountROSysfsHasBeenSet = false;

    Aws::Vector<LambdaVolumeMount> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<LambdaDeviceMount> m_devices;
    bool m_devicesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
