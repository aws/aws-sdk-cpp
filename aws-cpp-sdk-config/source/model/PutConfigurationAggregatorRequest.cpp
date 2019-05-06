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

#include <aws/config/model/PutConfigurationAggregatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutConfigurationAggregatorRequest::PutConfigurationAggregatorRequest() : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_accountAggregationSourcesHasBeenSet(false),
    m_organizationAggregationSourceHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutConfigurationAggregatorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_accountAggregationSourcesHasBeenSet)
  {
   Array<JsonValue> accountAggregationSourcesJsonList(m_accountAggregationSources.size());
   for(unsigned accountAggregationSourcesIndex = 0; accountAggregationSourcesIndex < accountAggregationSourcesJsonList.GetLength(); ++accountAggregationSourcesIndex)
   {
     accountAggregationSourcesJsonList[accountAggregationSourcesIndex].AsObject(m_accountAggregationSources[accountAggregationSourcesIndex].Jsonize());
   }
   payload.WithArray("AccountAggregationSources", std::move(accountAggregationSourcesJsonList));

  }

  if(m_organizationAggregationSourceHasBeenSet)
  {
   payload.WithObject("OrganizationAggregationSource", m_organizationAggregationSource.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutConfigurationAggregatorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutConfigurationAggregator"));
  return headers;

}




