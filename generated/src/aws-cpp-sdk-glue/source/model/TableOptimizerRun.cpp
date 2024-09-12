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
    m_errorHasBeenSet(false),
    m_compactionMetricsHasBeenSet(false),
    m_retentionMetricsHasBeenSet(false),
    m_orphanFileDeletionMetricsHasBeenSet(false)
{
}

TableOptimizerRun::TableOptimizerRun(JsonView jsonValue)
  : TableOptimizerRun()
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

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compactionMetrics"))
  {
    m_compactionMetrics = jsonValue.GetObject("compactionMetrics");

    m_compactionMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retentionMetrics"))
  {
    m_retentionMetrics = jsonValue.GetObject("retentionMetrics");

    m_retentionMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orphanFileDeletionMetrics"))
  {
    m_orphanFileDeletionMetrics = jsonValue.GetObject("orphanFileDeletionMetrics");

    m_orphanFileDeletionMetricsHasBeenSet = true;
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

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_compactionMetricsHasBeenSet)
  {
   payload.WithObject("compactionMetrics", m_compactionMetrics.Jsonize());

  }

  if(m_retentionMetricsHasBeenSet)
  {
   payload.WithObject("retentionMetrics", m_retentionMetrics.Jsonize());

  }

  if(m_orphanFileDeletionMetricsHasBeenSet)
  {
   payload.WithObject("orphanFileDeletionMetrics", m_orphanFileDeletionMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
