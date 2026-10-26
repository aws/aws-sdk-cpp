/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ContractDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

ContractDetails::ContractDetails(JsonView jsonValue) { *this = jsonValue; }

ContractDetails& ContractDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("privatePricingAddendum")) {
    m_privatePricingAddendum = jsonValue.GetObject("privatePricingAddendum");
    m_privatePricingAddendumHasBeenSet = true;
  }
  return *this;
}

JsonValue ContractDetails::Jsonize() const {
  JsonValue payload;

  if (m_privatePricingAddendumHasBeenSet) {
    payload.WithObject("privatePricingAddendum", m_privatePricingAddendum.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
