/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Device.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a device definition version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeviceDefinitionVersion">AWS
   * API Reference</a></p>
   */
  class DeviceDefinitionVersion
  {
  public:
    AWS_GREENGRASS_API DeviceDefinitionVersion();
    AWS_GREENGRASS_API DeviceDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API DeviceDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of devices in the definition version.
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * A list of devices in the definition version.
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * A list of devices in the definition version.
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * A list of devices in the definition version.
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * A list of devices in the definition version.
     */
    inline DeviceDefinitionVersion& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * A list of devices in the definition version.
     */
    inline DeviceDefinitionVersion& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * A list of devices in the definition version.
     */
    inline DeviceDefinitionVersion& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * A list of devices in the definition version.
     */
    inline DeviceDefinitionVersion& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
