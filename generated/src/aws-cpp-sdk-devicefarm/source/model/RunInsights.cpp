/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/RunInsights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

RunInsights::RunInsights(JsonView jsonValue) { *this = jsonValue; }

RunInsights& RunInsights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = ReportStatusMapper::GetReportStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobReport")) {
    m_jobReport = jsonValue.GetObject("jobReport");
    m_jobReportHasBeenSet = true;
  }
  return *this;
}

JsonValue RunInsights::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", ReportStatusMapper::GetNameForReportStatus(m_status));
  }

  if (m_jobReportHasBeenSet) {
    payload.WithObject("jobReport", m_jobReport.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
