/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FindingTypeCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FindingTypeCount::FindingTypeCount(JsonView jsonValue) { *this = jsonValue; }

FindingTypeCount& FindingTypeCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingTypeCount::Jsonize() const {
  JsonValue payload;

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
