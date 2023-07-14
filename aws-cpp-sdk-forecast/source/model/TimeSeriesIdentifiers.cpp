/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimeSeriesIdentifiers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

TimeSeriesIdentifiers::TimeSeriesIdentifiers() : 
    m_dataSourceHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

TimeSeriesIdentifiers::TimeSeriesIdentifiers(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesIdentifiers& TimeSeriesIdentifiers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetObject("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesIdentifiers::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("Schema", m_schema.Jsonize());

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
