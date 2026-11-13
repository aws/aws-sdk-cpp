/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactLensChannelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactLensChannelConfiguration::ContactLensChannelConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContactLensChannelConfiguration& ContactLensChannelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AnalyticsModes")) {
    Aws::Utils::Array<JsonView> analyticsModesJsonList = jsonValue.GetArray("AnalyticsModes");
    for (unsigned analyticsModesIndex = 0; analyticsModesIndex < analyticsModesJsonList.GetLength(); ++analyticsModesIndex) {
      m_analyticsModes.push_back(analyticsModesJsonList[analyticsModesIndex].AsString());
    }
    m_analyticsModesHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactLensChannelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_analyticsModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> analyticsModesJsonList(m_analyticsModes.size());
    for (unsigned analyticsModesIndex = 0; analyticsModesIndex < analyticsModesJsonList.GetLength(); ++analyticsModesIndex) {
      analyticsModesJsonList[analyticsModesIndex].AsString(m_analyticsModes[analyticsModesIndex]);
    }
    payload.WithArray("AnalyticsModes", std::move(analyticsModesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
