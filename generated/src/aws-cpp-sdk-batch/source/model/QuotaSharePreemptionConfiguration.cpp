/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaSharePreemptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

QuotaSharePreemptionConfiguration::QuotaSharePreemptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

QuotaSharePreemptionConfiguration& QuotaSharePreemptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inSharePreemption")) {
    m_inSharePreemption =
        QuotaShareInSharePreemptionStateMapper::GetQuotaShareInSharePreemptionStateForName(jsonValue.GetString("inSharePreemption"));
    m_inSharePreemptionHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaSharePreemptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_inSharePreemptionHasBeenSet) {
    payload.WithString("inSharePreemption",
                       QuotaShareInSharePreemptionStateMapper::GetNameForQuotaShareInSharePreemptionState(m_inSharePreemption));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
