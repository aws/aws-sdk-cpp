/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/InfluxDBBatchConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

InfluxDBBatchConfig::InfluxDBBatchConfig(JsonView jsonValue) { *this = jsonValue; }

InfluxDBBatchConfig& InfluxDBBatchConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxBatchSize")) {
    m_maxBatchSize = jsonValue.GetInteger("maxBatchSize");
    m_maxBatchSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxBatchOpenMs")) {
    m_maxBatchOpenMs = jsonValue.GetInteger("maxBatchOpenMs");
    m_maxBatchOpenMsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxBatchSizeBytes")) {
    m_maxBatchSizeBytes = jsonValue.GetInteger("maxBatchSizeBytes");
    m_maxBatchSizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchAcrossTopics")) {
    m_batchAcrossTopics = jsonValue.GetBool("batchAcrossTopics");
    m_batchAcrossTopicsHasBeenSet = true;
  }
  return *this;
}

JsonValue InfluxDBBatchConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxBatchSizeHasBeenSet) {
    payload.WithInteger("maxBatchSize", m_maxBatchSize);
  }

  if (m_maxBatchOpenMsHasBeenSet) {
    payload.WithInteger("maxBatchOpenMs", m_maxBatchOpenMs);
  }

  if (m_maxBatchSizeBytesHasBeenSet) {
    payload.WithInteger("maxBatchSizeBytes", m_maxBatchSizeBytes);
  }

  if (m_batchAcrossTopicsHasBeenSet) {
    payload.WithBool("batchAcrossTopics", m_batchAcrossTopics);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
