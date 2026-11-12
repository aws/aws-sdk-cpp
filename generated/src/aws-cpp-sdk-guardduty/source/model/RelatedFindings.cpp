/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RelatedFindings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RelatedFindings::RelatedFindings(JsonView jsonValue) { *this = jsonValue; }

RelatedFindings& RelatedFindings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("correlated")) {
    Aws::Utils::Array<JsonView> correlatedJsonList = jsonValue.GetArray("correlated");
    for (unsigned correlatedIndex = 0; correlatedIndex < correlatedJsonList.GetLength(); ++correlatedIndex) {
      m_correlated.push_back(correlatedJsonList[correlatedIndex].AsObject());
    }
    m_correlatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observed")) {
    Aws::Utils::Array<JsonView> observedJsonList = jsonValue.GetArray("observed");
    for (unsigned observedIndex = 0; observedIndex < observedJsonList.GetLength(); ++observedIndex) {
      m_observed.push_back(observedJsonList[observedIndex].AsObject());
    }
    m_observedHasBeenSet = true;
  }
  return *this;
}

JsonValue RelatedFindings::Jsonize() const {
  JsonValue payload;

  if (m_correlatedHasBeenSet) {
    Aws::Utils::Array<JsonValue> correlatedJsonList(m_correlated.size());
    for (unsigned correlatedIndex = 0; correlatedIndex < correlatedJsonList.GetLength(); ++correlatedIndex) {
      correlatedJsonList[correlatedIndex].AsObject(m_correlated[correlatedIndex].Jsonize());
    }
    payload.WithArray("correlated", std::move(correlatedJsonList));
  }

  if (m_observedHasBeenSet) {
    Aws::Utils::Array<JsonValue> observedJsonList(m_observed.size());
    for (unsigned observedIndex = 0; observedIndex < observedJsonList.GetLength(); ++observedIndex) {
      observedJsonList[observedIndex].AsObject(m_observed[observedIndex].Jsonize());
    }
    payload.WithArray("observed", std::move(observedJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
