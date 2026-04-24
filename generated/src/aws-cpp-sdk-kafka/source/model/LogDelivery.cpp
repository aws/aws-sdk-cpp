/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/LogDelivery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

LogDelivery::LogDelivery(JsonView jsonValue) { *this = jsonValue; }

LogDelivery& LogDelivery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("replicatorLogDelivery")) {
    m_replicatorLogDelivery = jsonValue.GetObject("replicatorLogDelivery");
    m_replicatorLogDeliveryHasBeenSet = true;
  }
  return *this;
}

JsonValue LogDelivery::Jsonize() const {
  JsonValue payload;

  if (m_replicatorLogDeliveryHasBeenSet) {
    payload.WithObject("replicatorLogDelivery", m_replicatorLogDelivery.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
