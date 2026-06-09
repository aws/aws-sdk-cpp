/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-data/model/SubscriptionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTDataPlane {
namespace Model {

SubscriptionSummary::SubscriptionSummary(JsonView jsonValue) { *this = jsonValue; }

SubscriptionSummary& SubscriptionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("topicFilter")) {
    m_topicFilter = jsonValue.GetString("topicFilter");
    m_topicFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("qos")) {
    m_qos = jsonValue.GetInteger("qos");
    m_qosHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionSummary::Jsonize() const {
  JsonValue payload;

  if (m_topicFilterHasBeenSet) {
    payload.WithString("topicFilter", m_topicFilter);
  }

  if (m_qosHasBeenSet) {
    payload.WithInteger("qos", m_qos);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTDataPlane
}  // namespace Aws
