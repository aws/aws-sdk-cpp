/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/AssociatedCollector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

AssociatedCollector::AssociatedCollector(JsonView jsonValue) { *this = jsonValue; }

AssociatedCollector& AssociatedCollector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("collectorId")) {
    m_collectorId = jsonValue.GetString("collectorId");
    m_collectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collectorArn")) {
    m_collectorArn = jsonValue.GetString("collectorArn");
    m_collectorArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedCollector::Jsonize() const {
  JsonValue payload;

  if (m_collectorIdHasBeenSet) {
    payload.WithString("collectorId", m_collectorId);
  }

  if (m_collectorArnHasBeenSet) {
    payload.WithString("collectorArn", m_collectorArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
