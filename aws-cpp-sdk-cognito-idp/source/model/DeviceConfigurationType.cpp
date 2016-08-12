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
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

DeviceConfigurationType::DeviceConfigurationType() : 
    m_challengeRequiredOnNewDevice(false),
    m_challengeRequiredOnNewDeviceHasBeenSet(false),
    m_deviceOnlyRememberedOnUserPrompt(false),
    m_deviceOnlyRememberedOnUserPromptHasBeenSet(false)
{
}

DeviceConfigurationType::DeviceConfigurationType(const JsonValue& jsonValue) : 
    m_challengeRequiredOnNewDevice(false),
    m_challengeRequiredOnNewDeviceHasBeenSet(false),
    m_deviceOnlyRememberedOnUserPrompt(false),
    m_deviceOnlyRememberedOnUserPromptHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceConfigurationType& DeviceConfigurationType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ChallengeRequiredOnNewDevice"))
  {
    m_challengeRequiredOnNewDevice = jsonValue.GetBool("ChallengeRequiredOnNewDevice");

    m_challengeRequiredOnNewDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceOnlyRememberedOnUserPrompt"))
  {
    m_deviceOnlyRememberedOnUserPrompt = jsonValue.GetBool("DeviceOnlyRememberedOnUserPrompt");

    m_deviceOnlyRememberedOnUserPromptHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_challengeRequiredOnNewDeviceHasBeenSet)
  {
   payload.WithBool("ChallengeRequiredOnNewDevice", m_challengeRequiredOnNewDevice);

  }

  if(m_deviceOnlyRememberedOnUserPromptHasBeenSet)
  {
   payload.WithBool("DeviceOnlyRememberedOnUserPrompt", m_deviceOnlyRememberedOnUserPrompt);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws