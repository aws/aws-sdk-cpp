/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListBillingGroupAccountGrouping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {

ListBillingGroupAccountGrouping::ListBillingGroupAccountGrouping(JsonView jsonValue) { *this = jsonValue; }

ListBillingGroupAccountGrouping& ListBillingGroupAccountGrouping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AutoAssociate")) {
    m_autoAssociate = jsonValue.GetBool("AutoAssociate");
    m_autoAssociateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResponsibilityTransferArn")) {
    m_responsibilityTransferArn = jsonValue.GetString("ResponsibilityTransferArn");
    m_responsibilityTransferArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ListBillingGroupAccountGrouping::Jsonize() const {
  JsonValue payload;

  if (m_autoAssociateHasBeenSet) {
    payload.WithBool("AutoAssociate", m_autoAssociate);
  }

  if (m_responsibilityTransferArnHasBeenSet) {
    payload.WithString("ResponsibilityTransferArn", m_responsibilityTransferArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
