/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CandidateAddress.h>
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

CandidateAddress::CandidateAddress() : 
    m_streetInfoHasBeenSet(false),
    m_streetNumberHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_postalCodePlus4HasBeenSet(false),
    m_countryHasBeenSet(false)
{
}

CandidateAddress::CandidateAddress(JsonView jsonValue) : 
    m_streetInfoHasBeenSet(false),
    m_streetNumberHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_postalCodePlus4HasBeenSet(false),
    m_countryHasBeenSet(false)
{
  *this = jsonValue;
}

CandidateAddress& CandidateAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streetInfo"))
  {
    m_streetInfo = jsonValue.GetString("streetInfo");

    m_streetInfoHasBeenSet = true;
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

JsonValue CandidateAddress::Jsonize() const
{
  JsonValue payload;

  if(m_streetInfoHasBeenSet)
  {
   payload.WithString("streetInfo", m_streetInfo);

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
