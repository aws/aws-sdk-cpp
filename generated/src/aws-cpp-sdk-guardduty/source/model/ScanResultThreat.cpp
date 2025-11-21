/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ScanResultThreat.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ScanResultThreat::ScanResultThreat(JsonView jsonValue) { *this = jsonValue; }

ScanResultThreat& ScanResultThreat::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = DetectionSourceMapper::GetDetectionSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hash")) {
    m_hash = jsonValue.GetString("hash");
    m_hashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("itemDetails")) {
    Aws::Utils::Array<JsonView> itemDetailsJsonList = jsonValue.GetArray("itemDetails");
    for (unsigned itemDetailsIndex = 0; itemDetailsIndex < itemDetailsJsonList.GetLength(); ++itemDetailsIndex) {
      m_itemDetails.push_back(itemDetailsJsonList[itemDetailsIndex].AsObject());
    }
    m_itemDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanResultThreat::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", DetectionSourceMapper::GetNameForDetectionSource(m_source));
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  if (m_hashHasBeenSet) {
    payload.WithString("hash", m_hash);
  }

  if (m_itemDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemDetailsJsonList(m_itemDetails.size());
    for (unsigned itemDetailsIndex = 0; itemDetailsIndex < itemDetailsJsonList.GetLength(); ++itemDetailsIndex) {
      itemDetailsJsonList[itemDetailsIndex].AsObject(m_itemDetails[itemDetailsIndex].Jsonize());
    }
    payload.WithArray("itemDetails", std::move(itemDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
