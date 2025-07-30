/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/HybridUpdateInfoEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

HybridUpdateInfoEntry::HybridUpdateInfoEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

HybridUpdateInfoEntry& HybridUpdateInfoEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = UpdateStatusMapper::GetUpdateStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiatedBy"))
  {
    m_initiatedBy = jsonValue.GetString("InitiatedBy");
    m_initiatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NewValue"))
  {
    m_newValue = jsonValue.GetObject("NewValue");
    m_newValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreviousValue"))
  {
    m_previousValue = jsonValue.GetObject("PreviousValue");
    m_previousValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssessmentId"))
  {
    m_assessmentId = jsonValue.GetString("AssessmentId");
    m_assessmentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue HybridUpdateInfoEntry::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UpdateStatusMapper::GetNameForUpdateStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_initiatedByHasBeenSet)
  {
   payload.WithString("InitiatedBy", m_initiatedBy);

  }

  if(m_newValueHasBeenSet)
  {
   payload.WithObject("NewValue", m_newValue.Jsonize());

  }

  if(m_previousValueHasBeenSet)
  {
   payload.WithObject("PreviousValue", m_previousValue.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("AssessmentId", m_assessmentId);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
