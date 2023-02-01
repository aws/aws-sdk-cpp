/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimeSeriesReplacementsDataSource.h>
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

TimeSeriesReplacementsDataSource::TimeSeriesReplacementsDataSource() : 
    m_s3ConfigHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_timestampFormatHasBeenSet(false)
{
}

TimeSeriesReplacementsDataSource::TimeSeriesReplacementsDataSource(JsonView jsonValue) : 
    m_s3ConfigHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_timestampFormatHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesReplacementsDataSource& TimeSeriesReplacementsDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Config"))
  {
    m_s3Config = jsonValue.GetObject("S3Config");

    m_s3ConfigHasBeenSet = true;
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

  if(jsonValue.ValueExists("TimestampFormat"))
  {
    m_timestampFormat = jsonValue.GetString("TimestampFormat");

    m_timestampFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesReplacementsDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("S3Config", m_s3Config.Jsonize());

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("Schema", m_schema.Jsonize());

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_timestampFormatHasBeenSet)
  {
   payload.WithString("TimestampFormat", m_timestampFormat);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
