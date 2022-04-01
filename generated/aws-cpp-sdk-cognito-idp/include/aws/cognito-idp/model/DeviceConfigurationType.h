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
   * <p>The device tracking configuration for a user pool. A user pool with device
   * tracking deactivated returns a null value.</p>  <p>When you provide values
   * for any DeviceConfiguration field, you activate device tracking.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeviceConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API DeviceConfigurationType
  {
  public:
    DeviceConfigurationType();
    DeviceConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    DeviceConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When true, device authentication can replace SMS and time-based one-time
     * password (TOTP) factors for multi-factor authentication (MFA).</p> 
     * <p>Users that sign in with devices that have not been confirmed or remembered
     * will still have to provide a second factor, whether or not
     * ChallengeRequiredOnNewDevice is true, when your user pool requires MFA.</p>
     * 
     */
    inline bool GetChallengeRequiredOnNewDevice() const{ return m_challengeRequiredOnNewDevice; }

    /**
     * <p>When true, device authentication can replace SMS and time-based one-time
     * password (TOTP) factors for multi-factor authentication (MFA).</p> 
     * <p>Users that sign in with devices that have not been confirmed or remembered
     * will still have to provide a second factor, whether or not
     * ChallengeRequiredOnNewDevice is true, when your user pool requires MFA.</p>
     * 
     */
    inline bool ChallengeRequiredOnNewDeviceHasBeenSet() const { return m_challengeRequiredOnNewDeviceHasBeenSet; }

    /**
     * <p>When true, device authentication can replace SMS and time-based one-time
     * password (TOTP) factors for multi-factor authentication (MFA).</p> 
     * <p>Users that sign in with devices that have not been confirmed or remembered
     * will still have to provide a second factor, whether or not
     * ChallengeRequiredOnNewDevice is true, when your user pool requires MFA.</p>
     * 
     */
    inline void SetChallengeRequiredOnNewDevice(bool value) { m_challengeRequiredOnNewDeviceHasBeenSet = true; m_challengeRequiredOnNewDevice = value; }

    /**
     * <p>When true, device authentication can replace SMS and time-based one-time
     * password (TOTP) factors for multi-factor authentication (MFA).</p> 
     * <p>Users that sign in with devices that have not been confirmed or remembered
     * will still have to provide a second factor, whether or not
     * ChallengeRequiredOnNewDevice is true, when your user pool requires MFA.</p>
     * 
     */
    inline DeviceConfigurationType& WithChallengeRequiredOnNewDevice(bool value) { SetChallengeRequiredOnNewDevice(value); return *this;}


    /**
     * <p>When true, users can opt in to remembering their device. Your app code must
     * use callback functions to return the user's choice.</p>
     */
    inline bool GetDeviceOnlyRememberedOnUserPrompt() const{ return m_deviceOnlyRememberedOnUserPrompt; }

    /**
     * <p>When true, users can opt in to remembering their device. Your app code must
     * use callback functions to return the user's choice.</p>
     */
    inline bool DeviceOnlyRememberedOnUserPromptHasBeenSet() const { return m_deviceOnlyRememberedOnUserPromptHasBeenSet; }

    /**
     * <p>When true, users can opt in to remembering their device. Your app code must
     * use callback functions to return the user's choice.</p>
     */
    inline void SetDeviceOnlyRememberedOnUserPrompt(bool value) { m_deviceOnlyRememberedOnUserPromptHasBeenSet = true; m_deviceOnlyRememberedOnUserPrompt = value; }

    /**
     * <p>When true, users can opt in to remembering their device. Your app code must
     * use callback functions to return the user's choice.</p>
     */
    inline DeviceConfigurationType& WithDeviceOnlyRememberedOnUserPrompt(bool value) { SetDeviceOnlyRememberedOnUserPrompt(value); return *this;}

  private:

    bool m_challengeRequiredOnNewDevice;
    bool m_challengeRequiredOnNewDeviceHasBeenSet;

    bool m_deviceOnlyRememberedOnUserPrompt;
    bool m_deviceOnlyRememberedOnUserPromptHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
