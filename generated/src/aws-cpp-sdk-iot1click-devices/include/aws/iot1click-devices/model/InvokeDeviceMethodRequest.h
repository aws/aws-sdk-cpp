/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InvokeDeviceMethodRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeDeviceMethod"; }

    AWS_IOT1CLICKDEVICESSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline InvokeDeviceMethodRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline InvokeDeviceMethodRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline InvokeDeviceMethodRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device method to invoke.</p>
     */
    inline const DeviceMethod& GetDeviceMethod() const{ return m_deviceMethod; }
    inline bool DeviceMethodHasBeenSet() const { return m_deviceMethodHasBeenSet; }
    inline void SetDeviceMethod(const DeviceMethod& value) { m_deviceMethodHasBeenSet = true; m_deviceMethod = value; }
    inline void SetDeviceMethod(DeviceMethod&& value) { m_deviceMethodHasBeenSet = true; m_deviceMethod = std::move(value); }
    inline InvokeDeviceMethodRequest& WithDeviceMethod(const DeviceMethod& value) { SetDeviceMethod(value); return *this;}
    inline InvokeDeviceMethodRequest& WithDeviceMethod(DeviceMethod&& value) { SetDeviceMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON encoded string containing the device method request parameters.</p>
     */
    inline const Aws::String& GetDeviceMethodParameters() const{ return m_deviceMethodParameters; }
    inline bool DeviceMethodParametersHasBeenSet() const { return m_deviceMethodParametersHasBeenSet; }
    inline void SetDeviceMethodParameters(const Aws::String& value) { m_deviceMethodParametersHasBeenSet = true; m_deviceMethodParameters = value; }
    inline void SetDeviceMethodParameters(Aws::String&& value) { m_deviceMethodParametersHasBeenSet = true; m_deviceMethodParameters = std::move(value); }
    inline void SetDeviceMethodParameters(const char* value) { m_deviceMethodParametersHasBeenSet = true; m_deviceMethodParameters.assign(value); }
    inline InvokeDeviceMethodRequest& WithDeviceMethodParameters(const Aws::String& value) { SetDeviceMethodParameters(value); return *this;}
    inline InvokeDeviceMethodRequest& WithDeviceMethodParameters(Aws::String&& value) { SetDeviceMethodParameters(std::move(value)); return *this;}
    inline InvokeDeviceMethodRequest& WithDeviceMethodParameters(const char* value) { SetDeviceMethodParameters(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    DeviceMethod m_deviceMethod;
    bool m_deviceMethodHasBeenSet = false;

    Aws::String m_deviceMethodParameters;
    bool m_deviceMethodParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
