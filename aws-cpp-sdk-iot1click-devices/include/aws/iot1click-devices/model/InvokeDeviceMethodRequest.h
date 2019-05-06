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
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot1click-devices/model/DeviceMethod.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

  /**
   */
  class AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    InvokeDeviceMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeDeviceMethod"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The device method to invoke.</p>
     */
    inline const DeviceMethod& GetDeviceMethod() const{ return m_deviceMethod; }

    /**
     * <p>The device method to invoke.</p>
     */
    inline bool DeviceMethodHasBeenSet() const { return m_deviceMethodHasBeenSet; }

    /**
     * <p>The device method to invoke.</p>
     */
    inline void SetDeviceMethod(const DeviceMethod& value) { m_deviceMethodHasBeenSet = true; m_deviceMethod = value; }

    /**
     * <p>The device method to invoke.</p>
     */
    inline void SetDeviceMethod(DeviceMethod&& value) { m_deviceMethodHasBeenSet = true; m_deviceMethod = std::move(value); }

    /**
     * <p>The device method to invoke.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceMethod(const DeviceMethod& value) { SetDeviceMethod(value); return *this;}

    /**
     * <p>The device method to invoke.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceMethod(DeviceMethod&& value) { SetDeviceMethod(std::move(value)); return *this;}


    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline const Aws::String& GetDeviceMethodParameters() const{ return m_deviceMethodParameters; }

    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline bool DeviceMethodParametersHasBeenSet() const { return m_deviceMethodParametersHasBeenSet; }

    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline void SetDeviceMethodParameters(const Aws::String& value) { m_deviceMethodParametersHasBeenSet = true; m_deviceMethodParameters = value; }

    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline void SetDeviceMethodParameters(Aws::String&& value) { m_deviceMethodParametersHasBeenSet = true; m_deviceMethodParameters = std::move(value); }

    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline void SetDeviceMethodParameters(const char* value) { m_deviceMethodParametersHasBeenSet = true; m_deviceMethodParameters.assign(value); }

    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceMethodParameters(const Aws::String& value) { SetDeviceMethodParameters(value); return *this;}

    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceMethodParameters(Aws::String&& value) { SetDeviceMethodParameters(std::move(value)); return *this;}

    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline InvokeDeviceMethodRequest& WithDeviceMethodParameters(const char* value) { SetDeviceMethodParameters(value); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    DeviceMethod m_deviceMethod;
    bool m_deviceMethodHasBeenSet;

    Aws::String m_deviceMethodParameters;
    bool m_deviceMethodParametersHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
