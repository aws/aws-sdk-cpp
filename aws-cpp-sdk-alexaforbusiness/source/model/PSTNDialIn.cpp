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

#include <aws/alexaforbusiness/model/PSTNDialIn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

PSTNDialIn::PSTNDialIn() : 
    m_countryCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_oneClickIdDelayHasBeenSet(false),
    m_oneClickPinDelayHasBeenSet(false)
{
}

PSTNDialIn::PSTNDialIn(JsonView jsonValue) : 
    m_countryCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_oneClickIdDelayHasBeenSet(false),
    m_oneClickPinDelayHasBeenSet(false)
{
  *this = jsonValue;
}

PSTNDialIn& PSTNDialIn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OneClickIdDelay"))
  {
    m_oneClickIdDelay = jsonValue.GetString("OneClickIdDelay");

    m_oneClickIdDelayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OneClickPinDelay"))
  {
    m_oneClickPinDelay = jsonValue.GetString("OneClickPinDelay");

    m_oneClickPinDelayHasBeenSet = true;
  }

  return *this;
}

JsonValue PSTNDialIn::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_oneClickIdDelayHasBeenSet)
  {
   payload.WithString("OneClickIdDelay", m_oneClickIdDelay);

  }

  if(m_oneClickPinDelayHasBeenSet)
  {
   payload.WithString("OneClickPinDelay", m_oneClickPinDelay);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
