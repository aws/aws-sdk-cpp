/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/GeneratedReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

GeneratedReport::GeneratedReport(JsonView jsonValue) { *this = jsonValue; }

GeneratedReport& GeneratedReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reportGenerationTime")) {
    m_reportGenerationTime = jsonValue.GetDouble("reportGenerationTime");
    m_reportGenerationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportOutput")) {
    m_reportOutput = jsonValue.GetObject("reportOutput");
    m_reportOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue GeneratedReport::Jsonize() const {
  JsonValue payload;

  if (m_reportGenerationTimeHasBeenSet) {
    payload.WithDouble("reportGenerationTime", m_reportGenerationTime.SecondsWithMSPrecision());
  }

  if (m_reportOutputHasBeenSet) {
    payload.WithObject("reportOutput", m_reportOutput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
