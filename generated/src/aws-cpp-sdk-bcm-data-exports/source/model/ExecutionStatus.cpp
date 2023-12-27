/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/ExecutionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

ExecutionStatus::ExecutionStatus() : 
    m_completedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_statusCode(ExecutionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusReason(ExecutionStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false)
{
}

ExecutionStatus::ExecutionStatus(JsonView jsonValue) : 
    m_completedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_statusCode(ExecutionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusReason(ExecutionStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionStatus& ExecutionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompletedAt"))
  {
    m_completedAt = jsonValue.GetString("CompletedAt");

    m_completedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = ExecutionStatusCodeMapper::GetExecutionStatusCodeForName(jsonValue.GetString("StatusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = ExecutionStatusReasonMapper::GetExecutionStatusReasonForName(jsonValue.GetString("StatusReason"));

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_completedAtHasBeenSet)
  {
   payload.WithString("CompletedAt", m_completedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("LastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", ExecutionStatusCodeMapper::GetNameForExecutionStatusCode(m_statusCode));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", ExecutionStatusReasonMapper::GetNameForExecutionStatusReason(m_statusReason));
  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
