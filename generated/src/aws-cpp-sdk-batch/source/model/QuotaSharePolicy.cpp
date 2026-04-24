/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaSharePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

QuotaSharePolicy::QuotaSharePolicy(JsonView jsonValue) { *this = jsonValue; }

QuotaSharePolicy& QuotaSharePolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("idleResourceAssignmentStrategy")) {
    m_idleResourceAssignmentStrategy = QuotaShareIdleResourceAssignmentStrategyMapper::GetQuotaShareIdleResourceAssignmentStrategyForName(
        jsonValue.GetString("idleResourceAssignmentStrategy"));
    m_idleResourceAssignmentStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaSharePolicy::Jsonize() const {
  JsonValue payload;

  if (m_idleResourceAssignmentStrategyHasBeenSet) {
    payload.WithString("idleResourceAssignmentStrategy",
                       QuotaShareIdleResourceAssignmentStrategyMapper::GetNameForQuotaShareIdleResourceAssignmentStrategy(
                           m_idleResourceAssignmentStrategy));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
