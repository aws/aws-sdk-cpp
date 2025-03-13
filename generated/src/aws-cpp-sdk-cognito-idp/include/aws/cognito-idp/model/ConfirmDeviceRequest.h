/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/DeviceSecretVerifierConfigType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The confirm-device request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDeviceRequest">AWS
   * API Reference</a></p>
   */
  class ConfirmDeviceRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmDevice"; }

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
    ConfirmDeviceRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier, or device key, of the device that you want to update
     * the status for.</p>
     */
    inline const Aws::String& GetDeviceKey() const { return m_deviceKey; }
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }
    template<typename DeviceKeyT = Aws::String>
    void SetDeviceKey(DeviceKeyT&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::forward<DeviceKeyT>(value); }
    template<typename DeviceKeyT = Aws::String>
    ConfirmDeviceRequest& WithDeviceKey(DeviceKeyT&& value) { SetDeviceKey(std::forward<DeviceKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline const DeviceSecretVerifierConfigType& GetDeviceSecretVerifierConfig() const { return m_deviceSecretVerifierConfig; }
    inline bool DeviceSecretVerifierConfigHasBeenSet() const { return m_deviceSecretVerifierConfigHasBeenSet; }
    template<typename DeviceSecretVerifierConfigT = DeviceSecretVerifierConfigType>
    void SetDeviceSecretVerifierConfig(DeviceSecretVerifierConfigT&& value) { m_deviceSecretVerifierConfigHasBeenSet = true; m_deviceSecretVerifierConfig = std::forward<DeviceSecretVerifierConfigT>(value); }
    template<typename DeviceSecretVerifierConfigT = DeviceSecretVerifierConfigType>
    ConfirmDeviceRequest& WithDeviceSecretVerifierConfig(DeviceSecretVerifierConfigT&& value) { SetDeviceSecretVerifierConfig(std::forward<DeviceSecretVerifierConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the device, for example <code>MyMobilePhone</code>.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    ConfirmDeviceRequest& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    DeviceSecretVerifierConfigType m_deviceSecretVerifierConfig;
    bool m_deviceSecretVerifierConfigHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
