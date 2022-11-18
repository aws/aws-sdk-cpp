/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/DNISEmergencyCallingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

DNISEmergencyCallingConfiguration::DNISEmergencyCallingConfiguration() : 
    m_emergencyPhoneNumberHasBeenSet(false),
    m_testPhoneNumberHasBeenSet(false),
    m_callingCountryHasBeenSet(false)
{
}

DNISEmergencyCallingConfiguration::DNISEmergencyCallingConfiguration(JsonView jsonValue) : 
    m_emergencyPhoneNumberHasBeenSet(false),
    m_testPhoneNumberHasBeenSet(false),
    m_callingCountryHasBeenSet(false)
{
  *this = jsonValue;
}

DNISEmergencyCallingConfiguration& DNISEmergencyCallingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmergencyPhoneNumber"))
  {
    m_emergencyPhoneNumber = jsonValue.GetString("EmergencyPhoneNumber");

    m_emergencyPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestPhoneNumber"))
  {
    m_testPhoneNumber = jsonValue.GetString("TestPhoneNumber");

    m_testPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallingCountry"))
  {
    m_callingCountry = jsonValue.GetString("CallingCountry");

    m_callingCountryHasBeenSet = true;
  }

  return *this;
}

JsonValue DNISEmergencyCallingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_emergencyPhoneNumberHasBeenSet)
  {
   payload.WithString("EmergencyPhoneNumber", m_emergencyPhoneNumber);

  }

  if(m_testPhoneNumberHasBeenSet)
  {
   payload.WithString("TestPhoneNumber", m_testPhoneNumber);

  }

  if(m_callingCountryHasBeenSet)
  {
   payload.WithString("CallingCountry", m_callingCountry);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
