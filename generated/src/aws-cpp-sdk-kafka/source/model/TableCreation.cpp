/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/TableCreation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

TableCreation::TableCreation(JsonView jsonValue) { *this = jsonValue; }

TableCreation& TableCreation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableTableCreation")) {
    m_enableTableCreation = jsonValue.GetBool("enableTableCreation");
    m_enableTableCreationHasBeenSet = true;
  }
  return *this;
}

JsonValue TableCreation::Jsonize() const {
  JsonValue payload;

  if (m_enableTableCreationHasBeenSet) {
    payload.WithBool("enableTableCreation", m_enableTableCreation);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
