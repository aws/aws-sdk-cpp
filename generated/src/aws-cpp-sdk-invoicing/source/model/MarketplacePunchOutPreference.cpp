/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/MarketplacePunchOutPreference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

MarketplacePunchOutPreference::MarketplacePunchOutPreference(JsonView jsonValue) { *this = jsonValue; }

MarketplacePunchOutPreference& MarketplacePunchOutPreference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ApprovalRequestRedirectUrl")) {
    m_approvalRequestRedirectUrl = jsonValue.GetString("ApprovalRequestRedirectUrl");
    m_approvalRequestRedirectUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue MarketplacePunchOutPreference::Jsonize() const {
  JsonValue payload;

  if (m_approvalRequestRedirectUrlHasBeenSet) {
    payload.WithString("ApprovalRequestRedirectUrl", m_approvalRequestRedirectUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
