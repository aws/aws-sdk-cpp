/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableOptimizerRun.h>
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

TableOptimizerRun::TableOptimizerRun() : 
    m_eventType(TableOptimizerEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

TableOptimizerRun::TableOptimizerRun(JsonView jsonValue) : 
    m_eventType(TableOptimizerEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

TableOptimizerRun& TableOptimizerRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = TableOptimizerEventTypeMapper::GetTableOptimizerEventTypeForName(jsonValue.GetString("eventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("startTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTimestamp"))
  {
    m_endTimestamp = jsonValue.GetDouble("endTimestamp");

    m_endTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metrics"))
  {
    m_metrics = jsonValue.GetObject("metrics");

    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue TableOptimizerRun::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", TableOptimizerEventTypeMapper::GetNameForTableOptimizerEventType(m_eventType));
  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("startTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_endTimestampHasBeenSet)
  {
   payload.WithDouble("endTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  if(m_metricsHasBeenSet)
  {
   payload.WithObject("metrics", m_metrics.Jsonize());

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
