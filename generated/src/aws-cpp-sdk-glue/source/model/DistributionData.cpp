/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DistributionData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DistributionData::DistributionData(JsonView jsonValue) { *this = jsonValue; }

DistributionData& DistributionData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BinEdges")) {
    Aws::Utils::Array<JsonView> binEdgesJsonList = jsonValue.GetArray("BinEdges");
    for (unsigned binEdgesIndex = 0; binEdgesIndex < binEdgesJsonList.GetLength(); ++binEdgesIndex) {
      m_binEdges.push_back(binEdgesJsonList[binEdgesIndex].AsString());
    }
    m_binEdgesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Count")) {
    Aws::Utils::Array<JsonView> countJsonList = jsonValue.GetArray("Count");
    for (unsigned countIndex = 0; countIndex < countJsonList.GetLength(); ++countIndex) {
      m_count.push_back(countJsonList[countIndex].AsInteger());
    }
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataType")) {
    m_dataType = jsonValue.GetString("DataType");
    m_dataTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DistributionData::Jsonize() const {
  JsonValue payload;

  if (m_binEdgesHasBeenSet) {
    Aws::Utils::Array<JsonValue> binEdgesJsonList(m_binEdges.size());
    for (unsigned binEdgesIndex = 0; binEdgesIndex < binEdgesJsonList.GetLength(); ++binEdgesIndex) {
      binEdgesJsonList[binEdgesIndex].AsString(m_binEdges[binEdgesIndex]);
    }
    payload.WithArray("BinEdges", std::move(binEdgesJsonList));
  }

  if (m_countHasBeenSet) {
    Aws::Utils::Array<JsonValue> countJsonList(m_count.size());
    for (unsigned countIndex = 0; countIndex < countJsonList.GetLength(); ++countIndex) {
      countJsonList[countIndex].AsInteger(m_count[countIndex]);
    }
    payload.WithArray("Count", std::move(countJsonList));
  }

  if (m_dataTypeHasBeenSet) {
    payload.WithString("DataType", m_dataType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
