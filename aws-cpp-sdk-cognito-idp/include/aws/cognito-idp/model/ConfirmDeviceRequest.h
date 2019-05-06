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
  class AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceRequest : public CognitoIdentityProviderRequest
  {
  public:
    ConfirmDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmDevice"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The access token.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token.</p>
     */
    inline ConfirmDeviceRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline ConfirmDeviceRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline ConfirmDeviceRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The device key.</p>
     */
    inline const Aws::String& GetDeviceKey() const{ return m_deviceKey; }

    /**
     * <p>The device key.</p>
     */
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(const Aws::String& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = value; }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(Aws::String&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::move(value); }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(const char* value) { m_deviceKeyHasBeenSet = true; m_deviceKey.assign(value); }

    /**
     * <p>The device key.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceKey(Aws::String&& value) { SetDeviceKey(std::move(value)); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}


    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline const DeviceSecretVerifierConfigType& GetDeviceSecretVerifierConfig() const{ return m_deviceSecretVerifierConfig; }

    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline bool DeviceSecretVerifierConfigHasBeenSet() const { return m_deviceSecretVerifierConfigHasBeenSet; }

    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline void SetDeviceSecretVerifierConfig(const DeviceSecretVerifierConfigType& value) { m_deviceSecretVerifierConfigHasBeenSet = true; m_deviceSecretVerifierConfig = value; }

    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline void SetDeviceSecretVerifierConfig(DeviceSecretVerifierConfigType&& value) { m_deviceSecretVerifierConfigHasBeenSet = true; m_deviceSecretVerifierConfig = std::move(value); }

    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceSecretVerifierConfig(const DeviceSecretVerifierConfigType& value) { SetDeviceSecretVerifierConfig(value); return *this;}

    /**
     * <p>The configuration of the device secret verifier.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceSecretVerifierConfig(DeviceSecretVerifierConfigType&& value) { SetDeviceSecretVerifierConfig(std::move(value)); return *this;}


    /**
     * <p>The device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline ConfirmDeviceRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet;

    DeviceSecretVerifierConfigType m_deviceSecretVerifierConfig;
    bool m_deviceSecretVerifierConfigHasBeenSet;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
