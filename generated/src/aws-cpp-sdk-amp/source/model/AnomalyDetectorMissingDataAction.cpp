/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/AnomalyDetectorMissingDataAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

AnomalyDetectorMissingDataAction::AnomalyDetectorMissingDataAction(JsonView jsonValue) { *this = jsonValue; }

AnomalyDetectorMissingDataAction& AnomalyDetectorMissingDataAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("markAsAnomaly")) {
    m_markAsAnomaly = jsonValue.GetBool("markAsAnomaly");
    m_markAsAnomalyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("skip")) {
    m_skip = jsonValue.GetBool("skip");
    m_skipHasBeenSet = true;
  }
  return *this;
}

JsonValue AnomalyDetectorMissingDataAction::Jsonize() const {
  JsonValue payload;

  if (m_markAsAnomalyHasBeenSet) {
    payload.WithBool("markAsAnomaly", m_markAsAnomaly);
  }

  if (m_skipHasBeenSet) {
    payload.WithBool("skip", m_skip);
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
