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
    AWS_COGNITOIDENTITYPROVIDER_API UpdateDeviceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDeviceStatus"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline UpdateDeviceStatusRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline UpdateDeviceStatusRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose device
     * status you want to update.</p>
     */
    inline UpdateDeviceStatusRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


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
    inline UpdateDeviceStatusRequest& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline UpdateDeviceStatusRequest& WithDeviceKey(Aws::String&& value) { SetDeviceKey(std::move(value)); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline UpdateDeviceStatusRequest& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}


    /**
     * <p>The status of whether a device is remembered.</p>
     */
    inline const DeviceRememberedStatusType& GetDeviceRememberedStatus() const{ return m_deviceRememberedStatus; }

    /**
     * <p>The status of whether a device is remembered.</p>
     */
    inline bool DeviceRememberedStatusHasBeenSet() const { return m_deviceRememberedStatusHasBeenSet; }

    /**
     * <p>The status of whether a device is remembered.</p>
     */
    inline void SetDeviceRememberedStatus(const DeviceRememberedStatusType& value) { m_deviceRememberedStatusHasBeenSet = true; m_deviceRememberedStatus = value; }

    /**
     * <p>The status of whether a device is remembered.</p>
     */
    inline void SetDeviceRememberedStatus(DeviceRememberedStatusType&& value) { m_deviceRememberedStatusHasBeenSet = true; m_deviceRememberedStatus = std::move(value); }

    /**
     * <p>The status of whether a device is remembered.</p>
     */
    inline UpdateDeviceStatusRequest& WithDeviceRememberedStatus(const DeviceRememberedStatusType& value) { SetDeviceRememberedStatus(value); return *this;}

    /**
     * <p>The status of whether a device is remembered.</p>
     */
    inline UpdateDeviceStatusRequest& WithDeviceRememberedStatus(DeviceRememberedStatusType&& value) { SetDeviceRememberedStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    DeviceRememberedStatusType m_deviceRememberedStatus;
    bool m_deviceRememberedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
