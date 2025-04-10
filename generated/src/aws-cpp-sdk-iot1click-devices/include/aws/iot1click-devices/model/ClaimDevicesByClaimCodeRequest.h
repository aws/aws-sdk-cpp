﻿/**
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
    AWS_IOT1CLICKDEVICESSERVICE_API ClaimDevicesByClaimCodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClaimDevicesByClaimCode"; }

    AWS_IOT1CLICKDEVICESSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The claim code, starting with "C-", as provided by the device
     * manufacturer.</p>
     */
    inline const Aws::String& GetClaimCode() const { return m_claimCode; }
    inline bool ClaimCodeHasBeenSet() const { return m_claimCodeHasBeenSet; }
    template<typename ClaimCodeT = Aws::String>
    void SetClaimCode(ClaimCodeT&& value) { m_claimCodeHasBeenSet = true; m_claimCode = std::forward<ClaimCodeT>(value); }
    template<typename ClaimCodeT = Aws::String>
    ClaimDevicesByClaimCodeRequest& WithClaimCode(ClaimCodeT&& value) { SetClaimCode(std::forward<ClaimCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_claimCode;
    bool m_claimCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
