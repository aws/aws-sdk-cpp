/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/ExportStatus.h>
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

ExportStatus::ExportStatus() : 
    m_createdAtHasBeenSet(false),
    m_lastRefreshedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_statusCode(ExportStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusReason(ExecutionStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false)
{
}

ExportStatus::ExportStatus(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_lastRefreshedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_statusCode(ExportStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusReason(ExecutionStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ExportStatus& ExportStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRefreshedAt"))
  {
    m_lastRefreshedAt = jsonValue.GetString("LastRefreshedAt");

    m_lastRefreshedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = ExportStatusCodeMapper::GetExportStatusCodeForName(jsonValue.GetString("StatusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = ExecutionStatusReasonMapper::GetExecutionStatusReasonForName(jsonValue.GetString("StatusReason"));

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportStatus::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastRefreshedAtHasBeenSet)
  {
   payload.WithString("LastRefreshedAt", m_lastRefreshedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("LastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", ExportStatusCodeMapper::GetNameForExportStatusCode(m_statusCode));
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
