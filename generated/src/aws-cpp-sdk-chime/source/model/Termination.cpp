/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/Termination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Termination::Termination() : 
    m_cpsLimit(0),
    m_cpsLimitHasBeenSet(false),
    m_defaultPhoneNumberHasBeenSet(false),
    m_callingRegionsHasBeenSet(false),
    m_cidrAllowedListHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
}

Termination::Termination(JsonView jsonValue) : 
    m_cpsLimit(0),
    m_cpsLimitHasBeenSet(false),
    m_defaultPhoneNumberHasBeenSet(false),
    m_callingRegionsHasBeenSet(false),
    m_cidrAllowedListHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
  *this = jsonValue;
}

Termination& Termination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CpsLimit"))
  {
    m_cpsLimit = jsonValue.GetInteger("CpsLimit");

    m_cpsLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultPhoneNumber"))
  {
    m_defaultPhoneNumber = jsonValue.GetString("DefaultPhoneNumber");

    m_defaultPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CallingRegions"))
  {
    Aws::Utils::Array<JsonView> callingRegionsJsonList = jsonValue.GetArray("CallingRegions");
    for(unsigned callingRegionsIndex = 0; callingRegionsIndex < callingRegionsJsonList.GetLength(); ++callingRegionsIndex)
    {
      m_callingRegions.push_back(callingRegionsJsonList[callingRegionsIndex].AsString());
    }
    m_callingRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrAllowedList"))
  {
    Aws::Utils::Array<JsonView> cidrAllowedListJsonList = jsonValue.GetArray("CidrAllowedList");
    for(unsigned cidrAllowedListIndex = 0; cidrAllowedListIndex < cidrAllowedListJsonList.GetLength(); ++cidrAllowedListIndex)
    {
      m_cidrAllowedList.push_back(cidrAllowedListJsonList[cidrAllowedListIndex].AsString());
    }
    m_cidrAllowedListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  return *this;
}

JsonValue Termination::Jsonize() const
{
  JsonValue payload;

  if(m_cpsLimitHasBeenSet)
  {
   payload.WithInteger("CpsLimit", m_cpsLimit);

  }

  if(m_defaultPhoneNumberHasBeenSet)
  {
   payload.WithString("DefaultPhoneNumber", m_defaultPhoneNumber);

  }

  if(m_callingRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> callingRegionsJsonList(m_callingRegions.size());
   for(unsigned callingRegionsIndex = 0; callingRegionsIndex < callingRegionsJsonList.GetLength(); ++callingRegionsIndex)
   {
     callingRegionsJsonList[callingRegionsIndex].AsString(m_callingRegions[callingRegionsIndex]);
   }
   payload.WithArray("CallingRegions", std::move(callingRegionsJsonList));

  }

  if(m_cidrAllowedListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrAllowedListJsonList(m_cidrAllowedList.size());
   for(unsigned cidrAllowedListIndex = 0; cidrAllowedListIndex < cidrAllowedListJsonList.GetLength(); ++cidrAllowedListIndex)
   {
     cidrAllowedListJsonList[cidrAllowedListIndex].AsString(m_cidrAllowedList[cidrAllowedListIndex]);
   }
   payload.WithArray("CidrAllowedList", std::move(cidrAllowedListJsonList));

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
