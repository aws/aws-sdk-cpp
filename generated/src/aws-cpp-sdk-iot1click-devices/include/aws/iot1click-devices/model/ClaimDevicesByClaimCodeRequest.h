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
  class ClaimDevicesByClaimCodeRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API ClaimDevicesByClaimCodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClaimDevicesByClaimCode"; }

    AWS_IOT1CLICKDEVICESSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline const Aws::String& GetClaimCode() const{ return m_claimCode; }

    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline bool ClaimCodeHasBeenSet() const { return m_claimCodeHasBeenSet; }

    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline void SetClaimCode(const Aws::String& value) { m_claimCodeHasBeenSet = true; m_claimCode = value; }

    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline void SetClaimCode(Aws::String&& value) { m_claimCodeHasBeenSet = true; m_claimCode = std::move(value); }

    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline void SetClaimCode(const char* value) { m_claimCodeHasBeenSet = true; m_claimCode.assign(value); }

    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline ClaimDevicesByClaimCodeRequest& WithClaimCode(const Aws::String& value) { SetClaimCode(value); return *this;}

    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline ClaimDevicesByClaimCodeRequest& WithClaimCode(Aws::String&& value) { SetClaimCode(std::move(value)); return *this;}

    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline ClaimDevicesByClaimCodeRequest& WithClaimCode(const char* value) { SetClaimCode(value); return *this;}

  private:

    Aws::String m_claimCode;
    bool m_claimCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
