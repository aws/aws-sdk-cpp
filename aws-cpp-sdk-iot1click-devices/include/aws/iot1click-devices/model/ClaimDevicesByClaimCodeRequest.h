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
#include <utility>

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

  /**
   */
  class AWS_IOT1CLICKDEVICESSERVICE_API ClaimDevicesByClaimCodeRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    ClaimDevicesByClaimCodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClaimDevicesByClaimCode"; }

    Aws::String SerializePayload() const override;


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
    bool m_claimCodeHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
