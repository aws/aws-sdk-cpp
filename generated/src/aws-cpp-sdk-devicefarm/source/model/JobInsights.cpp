/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/JobInsights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

JobInsights::JobInsights(JsonView jsonValue) { *this = jsonValue; }

JobInsights& JobInsights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = ReportStatusMapper::GetReportStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testReport")) {
    m_testReport = jsonValue.GetObject("testReport");
    m_testReportHasBeenSet = true;
  }
  return *this;
}

JsonValue JobInsights::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", ReportStatusMapper::GetNameForReportStatus(m_status));
  }

  if (m_testReportHasBeenSet) {
    payload.WithObject("testReport", m_testReport.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
