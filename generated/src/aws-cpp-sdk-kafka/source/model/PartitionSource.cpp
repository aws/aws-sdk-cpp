/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/PartitionSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

PartitionSource::PartitionSource(JsonView jsonValue) { *this = jsonValue; }

PartitionSource& PartitionSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceName")) {
    m_sourceName = jsonValue.GetString("sourceName");
    m_sourceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue PartitionSource::Jsonize() const {
  JsonValue payload;

  if (m_sourceNameHasBeenSet) {
    payload.WithString("sourceName", m_sourceName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
