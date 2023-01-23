/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPlanRequest::GetPlanRequest() : 
    m_mappingHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sinksHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_language(Language::NOT_SET),
    m_languageHasBeenSet(false),
    m_additionalPlanOptionsMapHasBeenSet(false)
{
}

Aws::String GetPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mappingHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mappingJsonList(m_mapping.size());
   for(unsigned mappingIndex = 0; mappingIndex < mappingJsonList.GetLength(); ++mappingIndex)
   {
     mappingJsonList[mappingIndex].AsObject(m_mapping[mappingIndex].Jsonize());
   }
   payload.WithArray("Mapping", std::move(mappingJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_sinksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sinksJsonList(m_sinks.size());
   for(unsigned sinksIndex = 0; sinksIndex < sinksJsonList.GetLength(); ++sinksIndex)
   {
     sinksJsonList[sinksIndex].AsObject(m_sinks[sinksIndex].Jsonize());
   }
   payload.WithArray("Sinks", std::move(sinksJsonList));

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", LanguageMapper::GetNameForLanguage(m_language));
  }

  if(m_additionalPlanOptionsMapHasBeenSet)
  {
   JsonValue additionalPlanOptionsMapJsonMap;
   for(auto& additionalPlanOptionsMapItem : m_additionalPlanOptionsMap)
   {
     additionalPlanOptionsMapJsonMap.WithString(additionalPlanOptionsMapItem.first, additionalPlanOptionsMapItem.second);
   }
   payload.WithObject("AdditionalPlanOptionsMap", std::move(additionalPlanOptionsMapJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetPlan"));
  return headers;

}




