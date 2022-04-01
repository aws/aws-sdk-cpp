/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ExecutionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ExecutionDetails::ExecutionDetails() : 
    m_mostRecentExecutionMessageHasBeenSet(false),
    m_mostRecentExecutionTimeHasBeenSet(false),
    m_mostRecentExecutionStatus(ExecutionStatus::NOT_SET),
    m_mostRecentExecutionStatusHasBeenSet(false)
{
}

ExecutionDetails::ExecutionDetails(JsonView jsonValue) : 
    m_mostRecentExecutionMessageHasBeenSet(false),
    m_mostRecentExecutionTimeHasBeenSet(false),
    m_mostRecentExecutionStatus(ExecutionStatus::NOT_SET),
    m_mostRecentExecutionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionDetails& ExecutionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mostRecentExecutionMessage"))
  {
    m_mostRecentExecutionMessage = jsonValue.GetString("mostRecentExecutionMessage");

    m_mostRecentExecutionMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mostRecentExecutionTime"))
  {
    m_mostRecentExecutionTime = jsonValue.GetDouble("mostRecentExecutionTime");

    m_mostRecentExecutionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mostRecentExecutionStatus"))
  {
    m_mostRecentExecutionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("mostRecentExecutionStatus"));

    m_mostRecentExecutionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_mostRecentExecutionMessageHasBeenSet)
  {
   payload.WithString("mostRecentExecutionMessage", m_mostRecentExecutionMessage);

  }

  if(m_mostRecentExecutionTimeHasBeenSet)
  {
   payload.WithDouble("mostRecentExecutionTime", m_mostRecentExecutionTime.SecondsWithMSPrecision());
  }

  if(m_mostRecentExecutionStatusHasBeenSet)
  {
   payload.WithString("mostRecentExecutionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_mostRecentExecutionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
