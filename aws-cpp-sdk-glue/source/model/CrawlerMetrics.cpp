/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlerMetrics.h>
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

CrawlerMetrics::CrawlerMetrics() : 
    m_crawlerNameHasBeenSet(false),
    m_timeLeftSeconds(0.0),
    m_timeLeftSecondsHasBeenSet(false),
    m_stillEstimating(false),
    m_stillEstimatingHasBeenSet(false),
    m_lastRuntimeSeconds(0.0),
    m_lastRuntimeSecondsHasBeenSet(false),
    m_medianRuntimeSeconds(0.0),
    m_medianRuntimeSecondsHasBeenSet(false),
    m_tablesCreated(0),
    m_tablesCreatedHasBeenSet(false),
    m_tablesUpdated(0),
    m_tablesUpdatedHasBeenSet(false),
    m_tablesDeleted(0),
    m_tablesDeletedHasBeenSet(false)
{
}

CrawlerMetrics::CrawlerMetrics(JsonView jsonValue) : 
    m_crawlerNameHasBeenSet(false),
    m_timeLeftSeconds(0.0),
    m_timeLeftSecondsHasBeenSet(false),
    m_stillEstimating(false),
    m_stillEstimatingHasBeenSet(false),
    m_lastRuntimeSeconds(0.0),
    m_lastRuntimeSecondsHasBeenSet(false),
    m_medianRuntimeSeconds(0.0),
    m_medianRuntimeSecondsHasBeenSet(false),
    m_tablesCreated(0),
    m_tablesCreatedHasBeenSet(false),
    m_tablesUpdated(0),
    m_tablesUpdatedHasBeenSet(false),
    m_tablesDeleted(0),
    m_tablesDeletedHasBeenSet(false)
{
  *this = jsonValue;
}

CrawlerMetrics& CrawlerMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrawlerName"))
  {
    m_crawlerName = jsonValue.GetString("CrawlerName");

    m_crawlerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeLeftSeconds"))
  {
    m_timeLeftSeconds = jsonValue.GetDouble("TimeLeftSeconds");

    m_timeLeftSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StillEstimating"))
  {
    m_stillEstimating = jsonValue.GetBool("StillEstimating");

    m_stillEstimatingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRuntimeSeconds"))
  {
    m_lastRuntimeSeconds = jsonValue.GetDouble("LastRuntimeSeconds");

    m_lastRuntimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MedianRuntimeSeconds"))
  {
    m_medianRuntimeSeconds = jsonValue.GetDouble("MedianRuntimeSeconds");

    m_medianRuntimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TablesCreated"))
  {
    m_tablesCreated = jsonValue.GetInteger("TablesCreated");

    m_tablesCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TablesUpdated"))
  {
    m_tablesUpdated = jsonValue.GetInteger("TablesUpdated");

    m_tablesUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TablesDeleted"))
  {
    m_tablesDeleted = jsonValue.GetInteger("TablesDeleted");

    m_tablesDeletedHasBeenSet = true;
  }

  return *this;
}

JsonValue CrawlerMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_crawlerNameHasBeenSet)
  {
   payload.WithString("CrawlerName", m_crawlerName);

  }

  if(m_timeLeftSecondsHasBeenSet)
  {
   payload.WithDouble("TimeLeftSeconds", m_timeLeftSeconds);

  }

  if(m_stillEstimatingHasBeenSet)
  {
   payload.WithBool("StillEstimating", m_stillEstimating);

  }

  if(m_lastRuntimeSecondsHasBeenSet)
  {
   payload.WithDouble("LastRuntimeSeconds", m_lastRuntimeSeconds);

  }

  if(m_medianRuntimeSecondsHasBeenSet)
  {
   payload.WithDouble("MedianRuntimeSeconds", m_medianRuntimeSeconds);

  }

  if(m_tablesCreatedHasBeenSet)
  {
   payload.WithInteger("TablesCreated", m_tablesCreated);

  }

  if(m_tablesUpdatedHasBeenSet)
  {
   payload.WithInteger("TablesUpdated", m_tablesUpdated);

  }

  if(m_tablesDeletedHasBeenSet)
  {
   payload.WithInteger("TablesDeleted", m_tablesDeleted);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
