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

#include <aws/glue/model/CreateCrawlerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCrawlerRequest::CreateCrawlerRequest() : 
    m_nameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_classifiersHasBeenSet(false),
    m_tablePrefixHasBeenSet(false),
    m_schemaChangePolicyHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_crawlerSecurityConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCrawlerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_targetsHasBeenSet)
  {
   payload.WithObject("Targets", m_targets.Jsonize());

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_classifiersHasBeenSet)
  {
   Array<JsonValue> classifiersJsonList(m_classifiers.size());
   for(unsigned classifiersIndex = 0; classifiersIndex < classifiersJsonList.GetLength(); ++classifiersIndex)
   {
     classifiersJsonList[classifiersIndex].AsString(m_classifiers[classifiersIndex]);
   }
   payload.WithArray("Classifiers", std::move(classifiersJsonList));

  }

  if(m_tablePrefixHasBeenSet)
  {
   payload.WithString("TablePrefix", m_tablePrefix);

  }

  if(m_schemaChangePolicyHasBeenSet)
  {
   payload.WithObject("SchemaChangePolicy", m_schemaChangePolicy.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithString("Configuration", m_configuration);

  }

  if(m_crawlerSecurityConfigurationHasBeenSet)
  {
   payload.WithString("CrawlerSecurityConfiguration", m_crawlerSecurityConfiguration);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCrawlerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateCrawler"));
  return headers;

}




