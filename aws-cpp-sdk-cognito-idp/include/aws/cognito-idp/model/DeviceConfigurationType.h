/*
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The type of configuration for the user pool's device tracking.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API DeviceConfigurationType
  {
  public:
    DeviceConfigurationType();
    DeviceConfigurationType(const Aws::Utils::Json::JsonValue& jsonValue);
    DeviceConfigurationType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Indicates whether a challenge is required on a new device. Only applicable to
     * a new device.</p>
     */
    inline bool GetChallengeRequiredOnNewDevice() const{ return m_challengeRequiredOnNewDevice; }

    /**
     * <p>Indicates whether a challenge is required on a new device. Only applicable to
     * a new device.</p>
     */
    inline void SetChallengeRequiredOnNewDevice(bool value) { m_challengeRequiredOnNewDeviceHasBeenSet = true; m_challengeRequiredOnNewDevice = value; }

    /**
     * <p>Indicates whether a challenge is required on a new device. Only applicable to
     * a new device.</p>
     */
    inline DeviceConfigurationType& WithChallengeRequiredOnNewDevice(bool value) { SetChallengeRequiredOnNewDevice(value); return *this;}

    /**
     * <p>If true, a device is only remembered on user prompt.</p>
     */
    inline bool GetDeviceOnlyRememberedOnUserPrompt() const{ return m_deviceOnlyRememberedOnUserPrompt; }

    /**
     * <p>If true, a device is only remembered on user prompt.</p>
     */
    inline void SetDeviceOnlyRememberedOnUserPrompt(bool value) { m_deviceOnlyRememberedOnUserPromptHasBeenSet = true; m_deviceOnlyRememberedOnUserPrompt = value; }

    /**
     * <p>If true, a device is only remembered on user prompt.</p>
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
