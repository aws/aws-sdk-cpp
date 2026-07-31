/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ServiceLevelAccountUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

ServiceLevelAccountUsage::ServiceLevelAccountUsage(JsonView jsonValue) { *this = jsonValue; }

ServiceLevelAccountUsage& ServiceLevelAccountUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceCode")) {
    m_serviceCode = jsonValue.GetString("serviceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleSpend")) {
    m_totalSupportEligibleSpend = jsonValue.GetString("totalSupportEligibleSpend");
    m_totalSupportEligibleSpendHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLevelAccountUsage::Jsonize() const {
  JsonValue payload;

  if (m_serviceCodeHasBeenSet) {
    payload.WithString("serviceCode", m_serviceCode);
  }

  if (m_totalSupportEligibleSpendHasBeenSet) {
    payload.WithString("totalSupportEligibleSpend", m_totalSupportEligibleSpend);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
