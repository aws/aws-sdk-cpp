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
    m_languageHasBeenSet(false)
{
}

Aws::String GetPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mappingHasBeenSet)
  {
   Array<JsonValue> mappingJsonList(m_mapping.size());
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
   Array<JsonValue> sinksJsonList(m_sinks.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetPlan"));
  return headers;

}




