/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The device-remembering configuration for a user pool. A <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">
   * DescribeUserPool</a> request returns a null value for this object when the user
   * pool isn't configured to remember devices. When device remembering is active,
   * you can remember a user's device with a <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ConfirmDevice.html">ConfirmDevice</a>
   * API request. Additionally. when the property
   * <code>DeviceOnlyRememberedOnUserPrompt</code> is <code>true</code>, you must
   * follow <code>ConfirmDevice</code> with an <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateDeviceStatus.html">UpdateDeviceStatus</a>
   * API request that sets the user's device to <code>remembered</code> or
   * <code>not_remembered</code>.</p> <p>To sign in with a remembered device, include
   * <code>DEVICE_KEY</code> in the authentication parameters in your user's <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">
   * InitiateAuth</a> request. If your app doesn't include a <code>DEVICE_KEY</code>
   * parameter, the <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html#API_InitiateAuth_ResponseSyntax">response</a>
   * from Amazon Cognito includes newly-generated <code>DEVICE_KEY</code> and
   * <code>DEVICE_GROUP_KEY</code> values under <code>NewDeviceMetadata</code>. Store
   * these values to use in future device-authentication requests.</p>  <p>When
   * you provide a value for any property of <code>DeviceConfiguration</code>, you
   * activate the device remembering for the user pool.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeviceConfigurationType">AWS
   * API Reference</a></p>
   */
  class DeviceConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeviceConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API DeviceConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API DeviceConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When true, a remembered device can sign in with device authentication instead
     * of SMS and time-based one-time password (TOTP) factors for multi-factor
     * authentication (MFA).</p>  <p>Whether or not
     * <code>ChallengeRequiredOnNewDevice</code> is true, users who sign in with
     * devices that have not been confirmed or remembered must still provide a second
     * factor in a user pool that requires MFA.</p> 
     */
    inline bool GetChallengeRequiredOnNewDevice() const{ return m_challengeRequiredOnNewDevice; }
    inline bool ChallengeRequiredOnNewDeviceHasBeenSet() const { return m_challengeRequiredOnNewDeviceHasBeenSet; }
    inline void SetChallengeRequiredOnNewDevice(bool value) { m_challengeRequiredOnNewDeviceHasBeenSet = true; m_challengeRequiredOnNewDevice = value; }
    inline DeviceConfigurationType& WithChallengeRequiredOnNewDevice(bool value) { SetChallengeRequiredOnNewDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, Amazon Cognito doesn't automatically remember a user's device when
     * your app sends a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ConfirmDevice.html">
     * ConfirmDevice</a> API request. In your app, create a prompt for your user to
     * choose whether they want to remember their device. Return the user's choice in
     * an <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateDeviceStatus.html">
     * UpdateDeviceStatus</a> API request.</p> <p>When
     * <code>DeviceOnlyRememberedOnUserPrompt</code> is <code>false</code>, Amazon
     * Cognito immediately remembers devices that you register in a
     * <code>ConfirmDevice</code> API request.</p>
     */
    inline bool GetDeviceOnlyRememberedOnUserPrompt() const{ return m_deviceOnlyRememberedOnUserPrompt; }
    inline bool DeviceOnlyRememberedOnUserPromptHasBeenSet() const { return m_deviceOnlyRememberedOnUserPromptHasBeenSet; }
    inline void SetDeviceOnlyRememberedOnUserPrompt(bool value) { m_deviceOnlyRememberedOnUserPromptHasBeenSet = true; m_deviceOnlyRememberedOnUserPrompt = value; }
    inline DeviceConfigurationType& WithDeviceOnlyRememberedOnUserPrompt(bool value) { SetDeviceOnlyRememberedOnUserPrompt(value); return *this;}
    ///@}
  private:

    bool m_challengeRequiredOnNewDevice;
    bool m_challengeRequiredOnNewDeviceHasBeenSet = false;

    bool m_deviceOnlyRememberedOnUserPrompt;
    bool m_deviceOnlyRememberedOnUserPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
