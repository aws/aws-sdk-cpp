/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

ReportResult::ReportResult(JsonView jsonValue)
{
  *this = jsonValue;
}

ReportResult& ReportResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PhaseStatusMapper::GetPhaseStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetail"))
  {
    m_errorDetail = jsonValue.GetString("ErrorDetail");
    m_errorDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportResult::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PhaseStatusMapper::GetNameForPhaseStatus(m_status));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorDetailHasBeenSet)
  {
   payload.WithString("ErrorDetail", m_errorDetail);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
