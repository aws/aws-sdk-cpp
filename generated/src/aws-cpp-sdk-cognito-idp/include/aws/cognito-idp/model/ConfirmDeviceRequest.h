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
   * <p>Confirms the device request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDeviceRequest">AWS
   * API Reference</a></p>
   */
  class ConfirmDeviceRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmDevice"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device you
     * want to confirm.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline ConfirmDeviceRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline ConfirmDeviceRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline ConfirmDeviceRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device key.</p>
     */
    inline const Aws::String& GetDeviceKey() const{ return m_deviceKey; }
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }
    inline void SetDeviceKey(const Aws::String& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = value; }
    inline void SetDeviceKey(Aws::String&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::move(value); }
    inline void SetDeviceKey(const char* value) { m_deviceKeyHasBeenSet = true; m_deviceKey.assign(value); }
    inline ConfirmDeviceRequest& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}
    inline ConfirmDeviceRequest& WithDeviceKey(Aws::String&& value) { SetDeviceKey(std::move(value)); return *this;}
    inline ConfirmDeviceRequest& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline const DeviceSecretVerifierConfigType& GetDeviceSecretVerifierConfig() const{ return m_deviceSecretVerifierConfig; }
    inline bool DeviceSecretVerifierConfigHasBeenSet() const { return m_deviceSecretVerifierConfigHasBeenSet; }
    inline void SetDeviceSecretVerifierConfig(const DeviceSecretVerifierConfigType& value) { m_deviceSecretVerifierConfigHasBeenSet = true; m_deviceSecretVerifierConfig = value; }
    inline void SetDeviceSecretVerifierConfig(DeviceSecretVerifierConfigType&& value) { m_deviceSecretVerifierConfigHasBeenSet = true; m_deviceSecretVerifierConfig = std::move(value); }
    inline ConfirmDeviceRequest& WithDeviceSecretVerifierConfig(const DeviceSecretVerifierConfigType& value) { SetDeviceSecretVerifierConfig(value); return *this;}
    inline ConfirmDeviceRequest& WithDeviceSecretVerifierConfig(DeviceSecretVerifierConfigType&& value) { SetDeviceSecretVerifierConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline ConfirmDeviceRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline ConfirmDeviceRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline ConfirmDeviceRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
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
