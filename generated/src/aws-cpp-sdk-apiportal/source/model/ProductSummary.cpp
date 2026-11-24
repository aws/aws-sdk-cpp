/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ProductSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ProductSummary::ProductSummary(JsonView jsonValue) { *this = jsonValue; }

ProductSummary& ProductSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("productId")) {
    m_productId = jsonValue.GetString("productId");
    m_productIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productArn")) {
    m_productArn = jsonValue.GetString("productArn");
    m_productArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiSelectionConfiguration")) {
    m_apiSelectionConfiguration = jsonValue.GetObject("apiSelectionConfiguration");
    m_apiSelectionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ProductStatusMapper::GetProductStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = ProductFailureReasonMapper::GetProductFailureReasonForName(jsonValue.GetString("failureReason"));
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductSummary::Jsonize() const {
  JsonValue payload;

  if (m_productIdHasBeenSet) {
    payload.WithString("productId", m_productId);
  }

  if (m_productArnHasBeenSet) {
    payload.WithString("productArn", m_productArn);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_apiSelectionConfigurationHasBeenSet) {
    payload.WithObject("apiSelectionConfiguration", m_apiSelectionConfiguration.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ProductStatusMapper::GetNameForProductStatus(m_status));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", ProductFailureReasonMapper::GetNameForProductFailureReason(m_failureReason));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
