/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateGlossaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGlossaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningProjectIdentifierHasBeenSet)
  {
   payload.WithString("owningProjectIdentifier", m_owningProjectIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GlossaryStatusMapper::GetNameForGlossaryStatus(m_status));
  }

  if(m_usageRestrictionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usageRestrictionsJsonList(m_usageRestrictions.size());
   for(unsigned usageRestrictionsIndex = 0; usageRestrictionsIndex < usageRestrictionsJsonList.GetLength(); ++usageRestrictionsIndex)
   {
     usageRestrictionsJsonList[usageRestrictionsIndex].AsString(GlossaryUsageRestrictionMapper::GetNameForGlossaryUsageRestriction(m_usageRestrictions[usageRestrictionsIndex]));
   }
   payload.WithArray("usageRestrictions", std::move(usageRestrictionsJsonList));

  }

  return payload.View().WriteReadable();
}




