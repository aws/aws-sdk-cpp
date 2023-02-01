/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

  /**
   */
  class InitiateDeviceClaimRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API InitiateDeviceClaimRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitiateDeviceClaim"; }

    AWS_IOT1CLICKDEVICESSERVICE_API Aws::String SerializePayload() const override;


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
    inline InitiateDeviceClaimRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline InitiateDeviceClaimRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline InitiateDeviceClaimRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
