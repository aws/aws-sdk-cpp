/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/cognito-idp/model/EventContextDataType.h>
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

EventContextDataType::EventContextDataType() : 
    m_ipAddressHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false)
{
}

EventContextDataType::EventContextDataType(const JsonValue& jsonValue) : 
    m_ipAddressHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false)
{
  *this = jsonValue;
}

EventContextDataType& EventContextDataType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  return *this;
}

JsonValue EventContextDataType::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
