/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/PlaybackRestrictionPolicySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

PlaybackRestrictionPolicySummary::PlaybackRestrictionPolicySummary() : 
    m_allowedCountriesHasBeenSet(false),
    m_allowedOriginsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_enableStrictOriginEnforcement(false),
    m_enableStrictOriginEnforcementHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

PlaybackRestrictionPolicySummary::PlaybackRestrictionPolicySummary(JsonView jsonValue) : 
    m_allowedCountriesHasBeenSet(false),
    m_allowedOriginsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_enableStrictOriginEnforcement(false),
    m_enableStrictOriginEnforcementHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

PlaybackRestrictionPolicySummary& PlaybackRestrictionPolicySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedCountries"))
  {
    Aws::Utils::Array<JsonView> allowedCountriesJsonList = jsonValue.GetArray("allowedCountries");
    for(unsigned allowedCountriesIndex = 0; allowedCountriesIndex < allowedCountriesJsonList.GetLength(); ++allowedCountriesIndex)
    {
      m_allowedCountries.push_back(allowedCountriesJsonList[allowedCountriesIndex].AsString());
    }
    m_allowedCountriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowedOrigins"))
  {
    Aws::Utils::Array<JsonView> allowedOriginsJsonList = jsonValue.GetArray("allowedOrigins");
    for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
    {
      m_allowedOrigins.push_back(allowedOriginsJsonList[allowedOriginsIndex].AsString());
    }
    m_allowedOriginsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableStrictOriginEnforcement"))
  {
    m_enableStrictOriginEnforcement = jsonValue.GetBool("enableStrictOriginEnforcement");

    m_enableStrictOriginEnforcementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue PlaybackRestrictionPolicySummary::Jsonize() const
{
  JsonValue payload;

  if(m_allowedCountriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedCountriesJsonList(m_allowedCountries.size());
   for(unsigned allowedCountriesIndex = 0; allowedCountriesIndex < allowedCountriesJsonList.GetLength(); ++allowedCountriesIndex)
   {
     allowedCountriesJsonList[allowedCountriesIndex].AsString(m_allowedCountries[allowedCountriesIndex]);
   }
   payload.WithArray("allowedCountries", std::move(allowedCountriesJsonList));

  }

  if(m_allowedOriginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOriginsJsonList(m_allowedOrigins.size());
   for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
   {
     allowedOriginsJsonList[allowedOriginsIndex].AsString(m_allowedOrigins[allowedOriginsIndex]);
   }
   payload.WithArray("allowedOrigins", std::move(allowedOriginsJsonList));

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_enableStrictOriginEnforcementHasBeenSet)
  {
   payload.WithBool("enableStrictOriginEnforcement", m_enableStrictOriginEnforcement);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
