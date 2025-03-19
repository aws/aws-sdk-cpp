/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/DeviceRememberedStatusType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update the device status.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateDeviceStatusRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDeviceStatusRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateDeviceStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDeviceStatus"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the currently signed-in
     * user. Must include a scope claim for
     * <code>aws.cognito.signin.user.admin</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    UpdateDeviceStatusRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device key of the device you want to update, for example
     * <code>us-west-2_a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p>
     */
    inline const Aws::String& GetDeviceKey() const { return m_deviceKey; }
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }
    template<typename DeviceKeyT = Aws::String>
    void SetDeviceKey(DeviceKeyT&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::forward<DeviceKeyT>(value); }
    template<typename DeviceKeyT = Aws::String>
    UpdateDeviceStatusRequest& WithDeviceKey(DeviceKeyT&& value) { SetDeviceKey(std::forward<DeviceKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To enable device authentication with the specified device, set to
     * <code>remembered</code>.To disable, set to <code>not_remembered</code>.</p>
     */
    inline DeviceRememberedStatusType GetDeviceRememberedStatus() const { return m_deviceRememberedStatus; }
    inline bool DeviceRememberedStatusHasBeenSet() const { return m_deviceRememberedStatusHasBeenSet; }
    inline void SetDeviceRememberedStatus(DeviceRememberedStatusType value) { m_deviceRememberedStatusHasBeenSet = true; m_deviceRememberedStatus = value; }
    inline UpdateDeviceStatusRequest& WithDeviceRememberedStatus(DeviceRememberedStatusType value) { SetDeviceRememberedStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    DeviceRememberedStatusType m_deviceRememberedStatus{DeviceRememberedStatusType::NOT_SET};
    bool m_deviceRememberedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
