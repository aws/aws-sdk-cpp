/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/UpdatePlaybackRestrictionPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePlaybackRestrictionPolicyRequest::UpdatePlaybackRestrictionPolicyRequest() : 
    m_allowedCountriesHasBeenSet(false),
    m_allowedOriginsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_enableStrictOriginEnforcement(false),
    m_enableStrictOriginEnforcementHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdatePlaybackRestrictionPolicyRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




