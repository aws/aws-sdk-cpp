/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class GetDeviceRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API GetDeviceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevice"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the device to retrieve.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    GetDeviceRequest& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
