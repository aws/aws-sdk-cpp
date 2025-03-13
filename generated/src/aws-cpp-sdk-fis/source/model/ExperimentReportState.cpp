/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentReportState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentReportState::ExperimentReportState(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentReportState& ExperimentReportState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ExperimentReportStatusMapper::GetExperimentReportStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentReportState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExperimentReportStatusMapper::GetNameForExperimentReportStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
