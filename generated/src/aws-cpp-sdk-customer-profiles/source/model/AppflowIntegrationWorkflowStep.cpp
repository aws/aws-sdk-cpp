/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AppflowIntegrationWorkflowStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

AppflowIntegrationWorkflowStep::AppflowIntegrationWorkflowStep(JsonView jsonValue)
{
  *this = jsonValue;
}

AppflowIntegrationWorkflowStep& AppflowIntegrationWorkflowStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlowName"))
  {
    m_flowName = jsonValue.GetString("FlowName");
    m_flowNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionMessage"))
  {
    m_executionMessage = jsonValue.GetString("ExecutionMessage");
    m_executionMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordsProcessed"))
  {
    m_recordsProcessed = jsonValue.GetInt64("RecordsProcessed");
    m_recordsProcessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchRecordsStartTime"))
  {
    m_batchRecordsStartTime = jsonValue.GetString("BatchRecordsStartTime");
    m_batchRecordsStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchRecordsEndTime"))
  {
    m_batchRecordsEndTime = jsonValue.GetString("BatchRecordsEndTime");
    m_batchRecordsEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AppflowIntegrationWorkflowStep::Jsonize() const
{
  JsonValue payload;

  if(m_flowNameHasBeenSet)
  {
   payload.WithString("FlowName", m_flowName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_executionMessageHasBeenSet)
  {
   payload.WithString("ExecutionMessage", m_executionMessage);

  }

  if(m_recordsProcessedHasBeenSet)
  {
   payload.WithInt64("RecordsProcessed", m_recordsProcessed);

  }

  if(m_batchRecordsStartTimeHasBeenSet)
  {
   payload.WithString("BatchRecordsStartTime", m_batchRecordsStartTime);

  }

  if(m_batchRecordsEndTimeHasBeenSet)
  {
   payload.WithString("BatchRecordsEndTime", m_batchRecordsEndTime);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
