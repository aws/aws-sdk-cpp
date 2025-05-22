/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/LoggingDestination.h>
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

LoggingDestination::LoggingDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

LoggingDestination& LoggingDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogs"))
  {
    m_cloudWatchLogs = jsonValue.GetObject("cloudWatchLogs");
    m_cloudWatchLogsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filters"))
  {
    m_filters = jsonValue.GetObject("filters");
    m_filtersHasBeenSet = true;
  }
  return *this;
}

JsonValue LoggingDestination::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsHasBeenSet)
  {
   payload.WithObject("cloudWatchLogs", m_cloudWatchLogs.Jsonize());

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("filters", m_filters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
