/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/Address.h>
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

Address::Address() : 
    m_streetNameHasBeenSet(false),
    m_streetSuffixHasBeenSet(false),
    m_postDirectionalHasBeenSet(false),
    m_preDirectionalHasBeenSet(false),
    m_streetNumberHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_postalCodePlus4HasBeenSet(false),
    m_countryHasBeenSet(false)
{
}

Address::Address(JsonView jsonValue) : 
    m_streetNameHasBeenSet(false),
    m_streetSuffixHasBeenSet(false),
    m_postDirectionalHasBeenSet(false),
    m_preDirectionalHasBeenSet(false),
    m_streetNumberHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_postalCodePlus4HasBeenSet(false),
    m_countryHasBeenSet(false)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streetName"))
  {
    m_streetName = jsonValue.GetString("streetName");

    m_streetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streetSuffix"))
  {
    m_streetSuffix = jsonValue.GetString("streetSuffix");

    m_streetSuffixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postDirectional"))
  {
    m_postDirectional = jsonValue.GetString("postDirectional");

    m_postDirectionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preDirectional"))
  {
    m_preDirectional = jsonValue.GetString("preDirectional");

    m_preDirectionalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streetNumber"))
  {
    m_streetNumber = jsonValue.GetString("streetNumber");

    m_streetNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetString("city");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postalCode"))
  {
    m_postalCode = jsonValue.GetString("postalCode");

    m_postalCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postalCodePlus4"))
  {
    m_postalCodePlus4 = jsonValue.GetString("postalCodePlus4");

    m_postalCodePlus4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("country"))
  {
    m_country = jsonValue.GetString("country");

    m_countryHasBeenSet = true;
  }

  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_streetNameHasBeenSet)
  {
   payload.WithString("streetName", m_streetName);

  }

  if(m_streetSuffixHasBeenSet)
  {
   payload.WithString("streetSuffix", m_streetSuffix);

  }

  if(m_postDirectionalHasBeenSet)
  {
   payload.WithString("postDirectional", m_postDirectional);

  }

  if(m_preDirectionalHasBeenSet)
  {
   payload.WithString("preDirectional", m_preDirectional);

  }

  if(m_streetNumberHasBeenSet)
  {
   payload.WithString("streetNumber", m_streetNumber);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("city", m_city);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("postalCode", m_postalCode);

  }

  if(m_postalCodePlus4HasBeenSet)
  {
   payload.WithString("postalCodePlus4", m_postalCodePlus4);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("country", m_country);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
