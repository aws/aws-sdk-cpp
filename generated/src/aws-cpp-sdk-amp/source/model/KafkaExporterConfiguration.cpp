/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/KafkaExporterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

KafkaExporterConfiguration::KafkaExporterConfiguration(JsonView jsonValue) { *this = jsonValue; }

KafkaExporterConfiguration& KafkaExporterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicFilter")) {
    m_topicFilter = jsonValue.GetString("topicFilter");
    m_topicFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consumerGroupFilter")) {
    m_consumerGroupFilter = jsonValue.GetString("consumerGroupFilter");
    m_consumerGroupFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaExporterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
  }

  if (m_topicFilterHasBeenSet) {
    payload.WithString("topicFilter", m_topicFilter);
  }

  if (m_consumerGroupFilterHasBeenSet) {
    payload.WithString("consumerGroupFilter", m_consumerGroupFilter);
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
