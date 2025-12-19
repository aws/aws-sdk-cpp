/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ReportOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

ReportOutput::ReportOutput(JsonView jsonValue) { *this = jsonValue; }

ReportOutput& ReportOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3ReportOutput")) {
    m_s3ReportOutput = jsonValue.GetObject("s3ReportOutput");
    m_s3ReportOutputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedReportOutput")) {
    m_failedReportOutput = jsonValue.GetObject("failedReportOutput");
    m_failedReportOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportOutput::Jsonize() const {
  JsonValue payload;

  if (m_s3ReportOutputHasBeenSet) {
    payload.WithObject("s3ReportOutput", m_s3ReportOutput.Jsonize());
  }

  if (m_failedReportOutputHasBeenSet) {
    payload.WithObject("failedReportOutput", m_failedReportOutput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
