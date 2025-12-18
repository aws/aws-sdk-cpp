/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/BatchConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

BatchConfig::BatchConfig(JsonView jsonValue) { *this = jsonValue; }

BatchConfig& BatchConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxBatchOpenMs")) {
    m_maxBatchOpenMs = jsonValue.GetInteger("maxBatchOpenMs");
    m_maxBatchOpenMsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxBatchSize")) {
    m_maxBatchSize = jsonValue.GetInteger("maxBatchSize");
    m_maxBatchSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxBatchSizeBytes")) {
    m_maxBatchSizeBytes = jsonValue.GetInteger("maxBatchSizeBytes");
    m_maxBatchSizeBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxBatchOpenMsHasBeenSet) {
    payload.WithInteger("maxBatchOpenMs", m_maxBatchOpenMs);
  }

  if (m_maxBatchSizeHasBeenSet) {
    payload.WithInteger("maxBatchSize", m_maxBatchSize);
  }

  if (m_maxBatchSizeBytesHasBeenSet) {
    payload.WithInteger("maxBatchSizeBytes", m_maxBatchSizeBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
