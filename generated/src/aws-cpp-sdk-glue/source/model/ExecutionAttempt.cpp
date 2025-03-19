/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ExecutionAttempt.h>
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

ExecutionAttempt::ExecutionAttempt(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionAttempt& ExecutionAttempt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnStatisticsTaskRunId"))
  {
    m_columnStatisticsTaskRunId = jsonValue.GetString("ColumnStatisticsTaskRunId");
    m_columnStatisticsTaskRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionTimestamp"))
  {
    m_executionTimestamp = jsonValue.GetDouble("ExecutionTimestamp");
    m_executionTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionAttempt::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if(m_columnStatisticsTaskRunIdHasBeenSet)
  {
   payload.WithString("ColumnStatisticsTaskRunId", m_columnStatisticsTaskRunId);

  }

  if(m_executionTimestampHasBeenSet)
  {
   payload.WithDouble("ExecutionTimestamp", m_executionTimestamp.SecondsWithMSPrecision());
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
