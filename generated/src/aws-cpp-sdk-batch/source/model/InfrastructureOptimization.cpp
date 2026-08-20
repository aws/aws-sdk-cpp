/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/InfrastructureOptimization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

InfrastructureOptimization::InfrastructureOptimization(JsonView jsonValue) { *this = jsonValue; }

InfrastructureOptimization& InfrastructureOptimization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scaleInAfter")) {
    m_scaleInAfter = jsonValue.GetInteger("scaleInAfter");
    m_scaleInAfterHasBeenSet = true;
  }
  return *this;
}

JsonValue InfrastructureOptimization::Jsonize() const {
  JsonValue payload;

  if (m_scaleInAfterHasBeenSet) {
    payload.WithInteger("scaleInAfter", m_scaleInAfter);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
