/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactLensSummaryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactLensSummaryConfiguration::ContactLensSummaryConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContactLensSummaryConfiguration& ContactLensSummaryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SummaryModes")) {
    Aws::Utils::Array<JsonView> summaryModesJsonList = jsonValue.GetArray("SummaryModes");
    for (unsigned summaryModesIndex = 0; summaryModesIndex < summaryModesJsonList.GetLength(); ++summaryModesIndex) {
      m_summaryModes.push_back(summaryModesJsonList[summaryModesIndex].AsString());
    }
    m_summaryModesHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactLensSummaryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_summaryModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> summaryModesJsonList(m_summaryModes.size());
    for (unsigned summaryModesIndex = 0; summaryModesIndex < summaryModesJsonList.GetLength(); ++summaryModesIndex) {
      summaryModesJsonList[summaryModesIndex].AsString(m_summaryModes[summaryModesIndex]);
    }
    payload.WithArray("SummaryModes", std::move(summaryModesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
