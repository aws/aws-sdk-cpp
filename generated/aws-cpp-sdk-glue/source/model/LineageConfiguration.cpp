/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/LineageConfiguration.h>
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

LineageConfiguration::LineageConfiguration() : 
    m_crawlerLineageSettings(CrawlerLineageSettings::NOT_SET),
    m_crawlerLineageSettingsHasBeenSet(false)
{
}

LineageConfiguration::LineageConfiguration(JsonView jsonValue) : 
    m_crawlerLineageSettings(CrawlerLineageSettings::NOT_SET),
    m_crawlerLineageSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

LineageConfiguration& LineageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrawlerLineageSettings"))
  {
    m_crawlerLineageSettings = CrawlerLineageSettingsMapper::GetCrawlerLineageSettingsForName(jsonValue.GetString("CrawlerLineageSettings"));

    m_crawlerLineageSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue LineageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crawlerLineageSettingsHasBeenSet)
  {
   payload.WithString("CrawlerLineageSettings", CrawlerLineageSettingsMapper::GetNameForCrawlerLineageSettings(m_crawlerLineageSettings));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
