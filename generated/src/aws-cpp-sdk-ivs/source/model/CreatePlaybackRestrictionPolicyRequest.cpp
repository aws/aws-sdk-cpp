/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/CreatePlaybackRestrictionPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePlaybackRestrictionPolicyRequest::CreatePlaybackRestrictionPolicyRequest() : 
    m_allowedCountriesHasBeenSet(false),
    m_allowedOriginsHasBeenSet(false),
    m_enableStrictOriginEnforcement(false),
    m_enableStrictOriginEnforcementHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePlaybackRestrictionPolicyRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




