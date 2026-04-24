/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaCluster.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaCluster::KafkaCluster(JsonView jsonValue) { *this = jsonValue; }

KafkaCluster& KafkaCluster::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amazonMskCluster")) {
    m_amazonMskCluster = jsonValue.GetObject("amazonMskCluster");
    m_amazonMskClusterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apacheKafkaCluster")) {
    m_apacheKafkaCluster = jsonValue.GetObject("apacheKafkaCluster");
    m_apacheKafkaClusterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientAuthentication")) {
    m_clientAuthentication = jsonValue.GetObject("clientAuthentication");
    m_clientAuthenticationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionInTransit")) {
    m_encryptionInTransit = jsonValue.GetObject("encryptionInTransit");
    m_encryptionInTransitHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaCluster::Jsonize() const {
  JsonValue payload;

  if (m_amazonMskClusterHasBeenSet) {
    payload.WithObject("amazonMskCluster", m_amazonMskCluster.Jsonize());
  }

  if (m_apacheKafkaClusterHasBeenSet) {
    payload.WithObject("apacheKafkaCluster", m_apacheKafkaCluster.Jsonize());
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_clientAuthenticationHasBeenSet) {
    payload.WithObject("clientAuthentication", m_clientAuthentication.Jsonize());
  }

  if (m_encryptionInTransitHasBeenSet) {
    payload.WithObject("encryptionInTransit", m_encryptionInTransit.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
