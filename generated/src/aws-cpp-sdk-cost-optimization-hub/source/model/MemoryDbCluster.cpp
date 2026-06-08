/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cost-optimization-hub/model/MemoryDbCluster.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CostOptimizationHub {
namespace Model {

MemoryDbCluster::MemoryDbCluster(JsonView jsonValue) { *this = jsonValue; }

MemoryDbCluster& MemoryDbCluster::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("costCalculation")) {
    m_costCalculation = jsonValue.GetObject("costCalculation");
    m_costCalculationHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryDbCluster::Jsonize() const {
  JsonValue payload;

  if (m_costCalculationHasBeenSet) {
    payload.WithObject("costCalculation", m_costCalculation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
