/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Crawler.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Crawler::Crawler() : 
    m_nameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_classifiersHasBeenSet(false),
    m_recrawlPolicyHasBeenSet(false),
    m_schemaChangePolicyHasBeenSet(false),
    m_lineageConfigurationHasBeenSet(false),
    m_state(CrawlerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tablePrefixHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_crawlElapsedTime(0),
    m_crawlElapsedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_lastCrawlHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_crawlerSecurityConfigurationHasBeenSet(false),
    m_lakeFormationConfigurationHasBeenSet(false)
{
}

Crawler::Crawler(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_classifiersHasBeenSet(false),
    m_recrawlPolicyHasBeenSet(false),
    m_schemaChangePolicyHasBeenSet(false),
    m_lineageConfigurationHasBeenSet(false),
    m_state(CrawlerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tablePrefixHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_crawlElapsedTime(0),
    m_crawlElapsedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_lastCrawlHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_crawlerSecurityConfigurationHasBeenSet(false),
    m_lakeFormationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Crawler& Crawler::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    m_targets = jsonValue.GetObject("Targets");

    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classifiers"))
  {
    Aws::Utils::Array<JsonView> classifiersJsonList = jsonValue.GetArray("Classifiers");
    for(unsigned classifiersIndex = 0; classifiersIndex < classifiersJsonList.GetLength(); ++classifiersIndex)
    {
      m_classifiers.push_back(classifiersJsonList[classifiersIndex].AsString());
    }
    m_classifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecrawlPolicy"))
  {
    m_recrawlPolicy = jsonValue.GetObject("RecrawlPolicy");

    m_recrawlPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaChangePolicy"))
  {
    m_schemaChangePolicy = jsonValue.GetObject("SchemaChangePolicy");

    m_schemaChangePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineageConfiguration"))
  {
    m_lineageConfiguration = jsonValue.GetObject("LineageConfiguration");

    m_lineageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CrawlerStateMapper::GetCrawlerStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TablePrefix"))
  {
    m_tablePrefix = jsonValue.GetString("TablePrefix");

    m_tablePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlElapsedTime"))
  {
    m_crawlElapsedTime = jsonValue.GetInt64("CrawlElapsedTime");

    m_crawlElapsedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastCrawl"))
  {
    m_lastCrawl = jsonValue.GetObject("LastCrawl");

    m_lastCrawlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetString("Configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlerSecurityConfiguration"))
  {
    m_crawlerSecurityConfiguration = jsonValue.GetString("CrawlerSecurityConfiguration");

    m_crawlerSecurityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LakeFormationConfiguration"))
  {
    m_lakeFormationConfiguration = jsonValue.GetObject("LakeFormationConfiguration");

    m_lakeFormationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Crawler::Jsonize() const
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

  if(m_targetsHasBeenSet)
  {
   payload.WithObject("Targets", m_targets.Jsonize());

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_recrawlPolicyHasBeenSet)
  {
   payload.WithObject("RecrawlPolicy", m_recrawlPolicy.Jsonize());

  }

  if(m_schemaChangePolicyHasBeenSet)
  {
   payload.WithObject("SchemaChangePolicy", m_schemaChangePolicy.Jsonize());

  }

  if(m_lineageConfigurationHasBeenSet)
  {
   payload.WithObject("LineageConfiguration", m_lineageConfiguration.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CrawlerStateMapper::GetNameForCrawlerState(m_state));
  }

  if(m_tablePrefixHasBeenSet)
  {
   payload.WithString("TablePrefix", m_tablePrefix);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_crawlElapsedTimeHasBeenSet)
  {
   payload.WithInt64("CrawlElapsedTime", m_crawlElapsedTime);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_lastCrawlHasBeenSet)
  {
   payload.WithObject("LastCrawl", m_lastCrawl.Jsonize());

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithString("Configuration", m_configuration);

  }

  if(m_crawlerSecurityConfigurationHasBeenSet)
  {
   payload.WithString("CrawlerSecurityConfiguration", m_crawlerSecurityConfiguration);

  }

  if(m_lakeFormationConfigurationHasBeenSet)
  {
   payload.WithObject("LakeFormationConfiguration", m_lakeFormationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
