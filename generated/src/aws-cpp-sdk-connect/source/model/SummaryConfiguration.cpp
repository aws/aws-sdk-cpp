/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SummaryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

SummaryConfiguration::SummaryConfiguration(JsonView jsonValue) { *this = jsonValue; }

SummaryConfiguration& SummaryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SummaryModes")) {
    Aws::Utils::Array<JsonView> summaryModesJsonList = jsonValue.GetArray("SummaryModes");
    for (unsigned summaryModesIndex = 0; summaryModesIndex < summaryModesJsonList.GetLength(); ++summaryModesIndex) {
      m_summaryModes.push_back(SummaryModeMapper::GetSummaryModeForName(summaryModesJsonList[summaryModesIndex].AsString()));
    }
    m_summaryModesHasBeenSet = true;
  }
  return *this;
}

JsonValue SummaryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_summaryModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> summaryModesJsonList(m_summaryModes.size());
    for (unsigned summaryModesIndex = 0; summaryModesIndex < summaryModesJsonList.GetLength(); ++summaryModesIndex) {
      summaryModesJsonList[summaryModesIndex].AsString(SummaryModeMapper::GetNameForSummaryMode(m_summaryModes[summaryModesIndex]));
    }
    payload.WithArray("SummaryModes", std::move(summaryModesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
