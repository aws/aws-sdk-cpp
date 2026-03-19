/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareResourceSharingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

QuotaShareResourceSharingConfiguration::QuotaShareResourceSharingConfiguration(JsonView jsonValue) { *this = jsonValue; }

QuotaShareResourceSharingConfiguration& QuotaShareResourceSharingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("strategy")) {
    m_strategy = QuotaShareResourceSharingStrategyMapper::GetQuotaShareResourceSharingStrategyForName(jsonValue.GetString("strategy"));
    m_strategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("borrowLimit")) {
    m_borrowLimit = jsonValue.GetInteger("borrowLimit");
    m_borrowLimitHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaShareResourceSharingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_strategyHasBeenSet) {
    payload.WithString("strategy", QuotaShareResourceSharingStrategyMapper::GetNameForQuotaShareResourceSharingStrategy(m_strategy));
  }

  if (m_borrowLimitHasBeenSet) {
    payload.WithInteger("borrowLimit", m_borrowLimit);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
