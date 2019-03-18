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
  class AWS_GREENGRASS_API DeviceDefinitionVersion
  {
  public:
    DeviceDefinitionVersion();
    DeviceDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    DeviceDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_devicesHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
