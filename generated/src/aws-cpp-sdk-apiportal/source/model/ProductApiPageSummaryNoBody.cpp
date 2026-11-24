/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ProductApiPageSummaryNoBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ProductApiPageSummaryNoBody::ProductApiPageSummaryNoBody(JsonView jsonValue) { *this = jsonValue; }

ProductApiPageSummaryNoBody& ProductApiPageSummaryNoBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("productApiPageId")) {
    m_productApiPageId = jsonValue.GetString("productApiPageId");
    m_productApiPageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productApiPageArn")) {
    m_productApiPageArn = jsonValue.GetString("productApiPageArn");
    m_productApiPageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiId")) {
    m_apiId = jsonValue.GetObject("apiId");
    m_apiIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operationName")) {
    m_operationName = jsonValue.GetString("operationName");
    m_operationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiUrl")) {
    m_apiUrl = jsonValue.GetString("apiUrl");
    m_apiUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tryItState")) {
    m_tryItState = TryItStateMapper::GetTryItStateForName(jsonValue.GetString("tryItState"));
    m_tryItStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusException")) {
    m_statusException = jsonValue.GetObject("statusException");
    m_statusExceptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductApiPageSummaryNoBody::Jsonize() const {
  JsonValue payload;

  if (m_productApiPageIdHasBeenSet) {
    payload.WithString("productApiPageId", m_productApiPageId);
  }

  if (m_productApiPageArnHasBeenSet) {
    payload.WithString("productApiPageArn", m_productApiPageArn);
  }

  if (m_apiIdHasBeenSet) {
    payload.WithObject("apiId", m_apiId.Jsonize());
  }

  if (m_operationNameHasBeenSet) {
    payload.WithString("operationName", m_operationName);
  }

  if (m_apiUrlHasBeenSet) {
    payload.WithString("apiUrl", m_apiUrl);
  }

  if (m_tryItStateHasBeenSet) {
    payload.WithString("tryItState", TryItStateMapper::GetNameForTryItState(m_tryItState));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if (m_statusExceptionHasBeenSet) {
    payload.WithObject("statusException", m_statusException.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
