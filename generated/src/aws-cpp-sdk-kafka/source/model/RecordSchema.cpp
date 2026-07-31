/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/RecordSchema.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

RecordSchema::RecordSchema(JsonView jsonValue) { *this = jsonValue; }

RecordSchema& RecordSchema::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gsrArn")) {
    m_gsrArn = jsonValue.GetString("gsrArn");
    m_gsrArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordSchema::Jsonize() const {
  JsonValue payload;

  if (m_gsrArnHasBeenSet) {
    payload.WithString("gsrArn", m_gsrArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
