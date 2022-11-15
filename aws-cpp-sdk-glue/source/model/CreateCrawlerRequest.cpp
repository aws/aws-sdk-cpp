/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_recrawlPolicyHasBeenSet(false),
    m_lineageConfigurationHasBeenSet(false),
    m_lakeFormationConfigurationHasBeenSet(false),
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
   Aws::Utils::Array<JsonValue> classifiersJsonList(m_classifiers.size());
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

  if(m_recrawlPolicyHasBeenSet)
  {
   payload.WithObject("RecrawlPolicy", m_recrawlPolicy.Jsonize());

  }

  if(m_lineageConfigurationHasBeenSet)
  {
   payload.WithObject("LineageConfiguration", m_lineageConfiguration.Jsonize());

  }

  if(m_lakeFormationConfigurationHasBeenSet)
  {
   payload.WithObject("LakeFormationConfiguration", m_lakeFormationConfiguration.Jsonize());

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




