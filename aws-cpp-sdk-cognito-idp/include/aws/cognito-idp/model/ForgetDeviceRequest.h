﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to forget the device.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ForgetDeviceRequest : public CognitoIdentityProviderRequest
  {
  public:
    ForgetDeviceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The access token for the forgotten device request.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token for the forgotten device request.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token for the forgotten device request.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token for the forgotten device request.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token for the forgotten device request.</p>
     */
    inline ForgetDeviceRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token for the forgotten device request.</p>
     */
    inline ForgetDeviceRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token for the forgotten device request.</p>
     */
    inline ForgetDeviceRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline const Aws::String& GetDeviceKey() const{ return m_deviceKey; }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(const Aws::String& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = value; }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(Aws::String&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = value; }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(const char* value) { m_deviceKeyHasBeenSet = true; m_deviceKey.assign(value); }

    /**
     * <p>The device key.</p>
     */
    inline ForgetDeviceRequest& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline ForgetDeviceRequest& WithDeviceKey(Aws::String&& value) { SetDeviceKey(value); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline ForgetDeviceRequest& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}

  private:
    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;
    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
