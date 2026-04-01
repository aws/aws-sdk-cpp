/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredPagerDutyDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredPagerDutyDetails::RegisteredPagerDutyDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredPagerDutyDetails& RegisteredPagerDutyDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scopes")) {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("scopes");
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredPagerDutyDetails::Jsonize() const {
  JsonValue payload;

  if (m_scopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
    }
    payload.WithArray("scopes", std::move(scopesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
