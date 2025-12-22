/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ReportConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

ReportConfiguration::ReportConfiguration(JsonView jsonValue) { *this = jsonValue; }

ReportConfiguration& ReportConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reportOutput")) {
    Aws::Utils::Array<JsonView> reportOutputJsonList = jsonValue.GetArray("reportOutput");
    for (unsigned reportOutputIndex = 0; reportOutputIndex < reportOutputJsonList.GetLength(); ++reportOutputIndex) {
      m_reportOutput.push_back(reportOutputJsonList[reportOutputIndex].AsObject());
    }
    m_reportOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_reportOutputHasBeenSet) {
    Aws::Utils::Array<JsonValue> reportOutputJsonList(m_reportOutput.size());
    for (unsigned reportOutputIndex = 0; reportOutputIndex < reportOutputJsonList.GetLength(); ++reportOutputIndex) {
      reportOutputJsonList[reportOutputIndex].AsObject(m_reportOutput[reportOutputIndex].Jsonize());
    }
    payload.WithArray("reportOutput", std::move(reportOutputJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
