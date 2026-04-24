/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/SegmentSort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

SegmentSort::SegmentSort(JsonView jsonValue) { *this = jsonValue; }

SegmentSort& SegmentSort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Attributes")) {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for (unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex) {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }
  return *this;
}

JsonValue SegmentSort::Jsonize() const {
  JsonValue payload;

  if (m_attributesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
    for (unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex) {
      attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
    }
    payload.WithArray("Attributes", std::move(attributesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
