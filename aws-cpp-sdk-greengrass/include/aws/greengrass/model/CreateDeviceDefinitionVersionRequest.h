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
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Device.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateDeviceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    CreateDeviceDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeviceDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeviceDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeviceDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeviceDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * The ID of the device definition.
     */
    inline const Aws::String& GetDeviceDefinitionId() const{ return m_deviceDefinitionId; }

    /**
     * The ID of the device definition.
     */
    inline bool DeviceDefinitionIdHasBeenSet() const { return m_deviceDefinitionIdHasBeenSet; }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(const Aws::String& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = value; }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(Aws::String&& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = std::move(value); }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(const char* value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId.assign(value); }

    /**
     * The ID of the device definition.
     */
    inline CreateDeviceDefinitionVersionRequest& WithDeviceDefinitionId(const Aws::String& value) { SetDeviceDefinitionId(value); return *this;}

    /**
     * The ID of the device definition.
     */
    inline CreateDeviceDefinitionVersionRequest& WithDeviceDefinitionId(Aws::String&& value) { SetDeviceDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the device definition.
     */
    inline CreateDeviceDefinitionVersionRequest& WithDeviceDefinitionId(const char* value) { SetDeviceDefinitionId(value); return *this;}


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
    inline CreateDeviceDefinitionVersionRequest& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * A list of devices in the definition version.
     */
    inline CreateDeviceDefinitionVersionRequest& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * A list of devices in the definition version.
     */
    inline CreateDeviceDefinitionVersionRequest& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * A list of devices in the definition version.
     */
    inline CreateDeviceDefinitionVersionRequest& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_deviceDefinitionId;
    bool m_deviceDefinitionIdHasBeenSet;

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
