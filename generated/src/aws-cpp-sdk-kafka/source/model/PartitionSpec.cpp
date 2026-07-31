/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/PartitionSpec.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

PartitionSpec::PartitionSpec(JsonView jsonValue) { *this = jsonValue; }

PartitionSpec& PartitionSpec::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("partitionStrategy")) {
    m_partitionStrategy = PartitionStrategyMapper::GetPartitionStrategyForName(jsonValue.GetString("partitionStrategy"));
    m_partitionStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceList")) {
    Aws::Utils::Array<JsonView> sourceListJsonList = jsonValue.GetArray("sourceList");
    for (unsigned sourceListIndex = 0; sourceListIndex < sourceListJsonList.GetLength(); ++sourceListIndex) {
      m_sourceList.push_back(sourceListJsonList[sourceListIndex].AsObject());
    }
    m_sourceListHasBeenSet = true;
  }
  return *this;
}

JsonValue PartitionSpec::Jsonize() const {
  JsonValue payload;

  if (m_partitionStrategyHasBeenSet) {
    payload.WithString("partitionStrategy", PartitionStrategyMapper::GetNameForPartitionStrategy(m_partitionStrategy));
  }

  if (m_sourceListHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceListJsonList(m_sourceList.size());
    for (unsigned sourceListIndex = 0; sourceListIndex < sourceListJsonList.GetLength(); ++sourceListIndex) {
      sourceListJsonList[sourceListIndex].AsObject(m_sourceList[sourceListIndex].Jsonize());
    }
    payload.WithArray("sourceList", std::move(sourceListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
