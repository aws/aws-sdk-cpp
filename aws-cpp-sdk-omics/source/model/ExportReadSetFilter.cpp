/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ExportReadSetFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ExportReadSetFilter::ExportReadSetFilter() : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_status(ReadSetExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ExportReadSetFilter::ExportReadSetFilter(JsonView jsonValue) : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_status(ReadSetExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ExportReadSetFilter& ExportReadSetFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAfter"))
  {
    m_createdAfter = jsonValue.GetString("createdAfter");

    m_createdAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBefore"))
  {
    m_createdBefore = jsonValue.GetString("createdBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetExportJobStatusMapper::GetReadSetExportJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportReadSetFilter::Jsonize() const
{
  JsonValue payload;

  if(m_createdAfterHasBeenSet)
  {
   payload.WithString("createdAfter", m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithString("createdBefore", m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReadSetExportJobStatusMapper::GetNameForReadSetExportJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
