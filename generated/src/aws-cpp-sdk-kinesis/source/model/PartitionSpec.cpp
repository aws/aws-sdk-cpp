/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/PartitionSpec.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

PartitionSpec::PartitionSpec(JsonView jsonValue) { *this = jsonValue; }

PartitionSpec& PartitionSpec::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PartitionFields")) {
    Aws::Utils::Array<JsonView> partitionFieldsJsonList = jsonValue.GetArray("PartitionFields");
    for (unsigned partitionFieldsIndex = 0; partitionFieldsIndex < partitionFieldsJsonList.GetLength(); ++partitionFieldsIndex) {
      m_partitionFields.push_back(partitionFieldsJsonList[partitionFieldsIndex].AsObject());
    }
    m_partitionFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue PartitionSpec::Jsonize() const {
  JsonValue payload;

  if (m_partitionFieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> partitionFieldsJsonList(m_partitionFields.size());
    for (unsigned partitionFieldsIndex = 0; partitionFieldsIndex < partitionFieldsJsonList.GetLength(); ++partitionFieldsIndex) {
      partitionFieldsJsonList[partitionFieldsIndex].AsObject(m_partitionFields[partitionFieldsIndex].Jsonize());
    }
    payload.WithArray("PartitionFields", std::move(partitionFieldsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
