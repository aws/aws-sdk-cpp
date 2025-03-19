/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LineageEventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

LineageEventSummary::LineageEventSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

LineageEventSummary& LineageEventSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventSummary"))
  {
    m_eventSummary = jsonValue.GetObject("eventSummary");
    m_eventSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetDouble("eventTime");
    m_eventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("processingStatus"))
  {
    m_processingStatus = LineageEventProcessingStatusMapper::GetLineageEventProcessingStatusForName(jsonValue.GetString("processingStatus"));
    m_processingStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue LineageEventSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_eventSummaryHasBeenSet)
  {
   payload.WithObject("eventSummary", m_eventSummary.Jsonize());

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("eventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_processingStatusHasBeenSet)
  {
   payload.WithString("processingStatus", LineageEventProcessingStatusMapper::GetNameForLineageEventProcessingStatus(m_processingStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
