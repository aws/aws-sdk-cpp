/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DeviceConfigurationType::DeviceConfigurationType(JsonView jsonValue)
{
  *this = jsonValue;
}

DeviceConfigurationType& DeviceConfigurationType::operator =(JsonView jsonValue)
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
