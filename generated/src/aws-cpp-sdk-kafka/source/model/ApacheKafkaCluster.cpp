/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/ApacheKafkaCluster.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

ApacheKafkaCluster::ApacheKafkaCluster(JsonView jsonValue) { *this = jsonValue; }

ApacheKafkaCluster& ApacheKafkaCluster::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apacheKafkaClusterId")) {
    m_apacheKafkaClusterId = jsonValue.GetString("apacheKafkaClusterId");
    m_apacheKafkaClusterIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bootstrapBrokerString")) {
    m_bootstrapBrokerString = jsonValue.GetString("bootstrapBrokerString");
    m_bootstrapBrokerStringHasBeenSet = true;
  }
  return *this;
}

JsonValue ApacheKafkaCluster::Jsonize() const {
  JsonValue payload;

  if (m_apacheKafkaClusterIdHasBeenSet) {
    payload.WithString("apacheKafkaClusterId", m_apacheKafkaClusterId);
  }

  if (m_bootstrapBrokerStringHasBeenSet) {
    payload.WithString("bootstrapBrokerString", m_bootstrapBrokerString);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
