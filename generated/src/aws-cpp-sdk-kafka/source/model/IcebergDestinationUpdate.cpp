/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/IcebergDestinationUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

IcebergDestinationUpdate::IcebergDestinationUpdate(JsonView jsonValue) { *this = jsonValue; }

IcebergDestinationUpdate& IcebergDestinationUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataFreshnessInSeconds")) {
    m_dataFreshnessInSeconds = jsonValue.GetInteger("dataFreshnessInSeconds");
    m_dataFreshnessInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergDestinationUpdate::Jsonize() const {
  JsonValue payload;

  if (m_dataFreshnessInSecondsHasBeenSet) {
    payload.WithInteger("dataFreshnessInSeconds", m_dataFreshnessInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
