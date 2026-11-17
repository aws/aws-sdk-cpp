/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/QueueStartingPosition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

QueueStartingPosition::QueueStartingPosition(JsonView jsonValue) { *this = jsonValue; }

QueueStartingPosition& QueueStartingPosition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = QueueStartingPositionTypeMapper::GetQueueStartingPositionTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueStartingPosition::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", QueueStartingPositionTypeMapper::GetNameForQueueStartingPositionType(m_type));
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
