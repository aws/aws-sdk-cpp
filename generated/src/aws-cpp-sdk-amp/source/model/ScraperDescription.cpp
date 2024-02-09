/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ScraperDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

ScraperDescription::ScraperDescription() : 
    m_aliasHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_scrapeConfigurationHasBeenSet(false),
    m_scraperIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ScraperDescription::ScraperDescription(JsonView jsonValue) : 
    m_aliasHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_scrapeConfigurationHasBeenSet(false),
    m_scraperIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ScraperDescription& ScraperDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scrapeConfiguration"))
  {
    m_scrapeConfiguration = jsonValue.GetObject("scrapeConfiguration");

    m_scrapeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scraperId"))
  {
    m_scraperId = jsonValue.GetString("scraperId");

    m_scraperIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScraperDescription::Jsonize() const
{
  JsonValue payload;

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_scrapeConfigurationHasBeenSet)
  {
   payload.WithObject("scrapeConfiguration", m_scrapeConfiguration.Jsonize());

  }

  if(m_scraperIdHasBeenSet)
  {
   payload.WithString("scraperId", m_scraperId);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

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

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
