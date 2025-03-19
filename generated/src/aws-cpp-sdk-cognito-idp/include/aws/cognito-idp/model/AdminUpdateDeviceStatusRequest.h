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
    AWS_COGNITOIDENTITYPROVIDER_API AdminUpdateDeviceStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminUpdateDeviceStatus"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to change a user's device status.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    AdminUpdateDeviceStatusRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    AdminUpdateDeviceStatusRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
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
    AdminUpdateDeviceStatusRequest& WithDeviceKey(DeviceKeyT&& value) { SetDeviceKey(std::forward<DeviceKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To enable device authentication with the specified device, set to
     * <code>remembered</code>.To disable, set to <code>not_remembered</code>.</p>
     */
    inline DeviceRememberedStatusType GetDeviceRememberedStatus() const { return m_deviceRememberedStatus; }
    inline bool DeviceRememberedStatusHasBeenSet() const { return m_deviceRememberedStatusHasBeenSet; }
    inline void SetDeviceRememberedStatus(DeviceRememberedStatusType value) { m_deviceRememberedStatusHasBeenSet = true; m_deviceRememberedStatus = value; }
    inline AdminUpdateDeviceStatusRequest& WithDeviceRememberedStatus(DeviceRememberedStatusType value) { SetDeviceRememberedStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    DeviceRememberedStatusType m_deviceRememberedStatus{DeviceRememberedStatusType::NOT_SET};
    bool m_deviceRememberedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
