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
   * <p>The request to update the device status, as an administrator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateDeviceStatusRequest">AWS
   * API Reference</a></p>
   */
  class AdminUpdateDeviceStatusRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminUpdateDeviceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminUpdateDeviceStatus"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline AdminUpdateDeviceStatusRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline AdminUpdateDeviceStatusRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline AdminUpdateDeviceStatusRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline AdminUpdateDeviceStatusRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline AdminUpdateDeviceStatusRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline AdminUpdateDeviceStatusRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
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
    inline AdminUpdateDeviceStatusRequest& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}
    inline AdminUpdateDeviceStatusRequest& WithDeviceKey(Aws::String&& value) { SetDeviceKey(std::move(value)); return *this;}
    inline AdminUpdateDeviceStatusRequest& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status indicating whether a device has been remembered or not.</p>
     */
    inline const DeviceRememberedStatusType& GetDeviceRememberedStatus() const{ return m_deviceRememberedStatus; }
    inline bool DeviceRememberedStatusHasBeenSet() const { return m_deviceRememberedStatusHasBeenSet; }
    inline void SetDeviceRememberedStatus(const DeviceRememberedStatusType& value) { m_deviceRememberedStatusHasBeenSet = true; m_deviceRememberedStatus = value; }
    inline void SetDeviceRememberedStatus(DeviceRememberedStatusType&& value) { m_deviceRememberedStatusHasBeenSet = true; m_deviceRememberedStatus = std::move(value); }
    inline AdminUpdateDeviceStatusRequest& WithDeviceRememberedStatus(const DeviceRememberedStatusType& value) { SetDeviceRememberedStatus(value); return *this;}
    inline AdminUpdateDeviceStatusRequest& WithDeviceRememberedStatus(DeviceRememberedStatusType&& value) { SetDeviceRememberedStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    DeviceRememberedStatusType m_deviceRememberedStatus;
    bool m_deviceRememberedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
