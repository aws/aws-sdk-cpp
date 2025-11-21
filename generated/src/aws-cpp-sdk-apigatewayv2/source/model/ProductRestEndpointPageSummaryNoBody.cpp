/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ProductRestEndpointPageSummaryNoBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

ProductRestEndpointPageSummaryNoBody::ProductRestEndpointPageSummaryNoBody(JsonView jsonValue) { *this = jsonValue; }

ProductRestEndpointPageSummaryNoBody& ProductRestEndpointPageSummaryNoBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModified")) {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operationName")) {
    m_operationName = jsonValue.GetString("operationName");
    m_operationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productRestEndpointPageArn")) {
    m_productRestEndpointPageArn = jsonValue.GetString("productRestEndpointPageArn");
    m_productRestEndpointPageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productRestEndpointPageId")) {
    m_productRestEndpointPageId = jsonValue.GetString("productRestEndpointPageId");
    m_productRestEndpointPageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restEndpointIdentifier")) {
    m_restEndpointIdentifier = jsonValue.GetObject("restEndpointIdentifier");
    m_restEndpointIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusException")) {
    m_statusException = jsonValue.GetObject("statusException");
    m_statusExceptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tryItState")) {
    m_tryItState = TryItStateMapper::GetTryItStateForName(jsonValue.GetString("tryItState"));
    m_tryItStateHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductRestEndpointPageSummaryNoBody::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_lastModifiedHasBeenSet) {
    payload.WithString("lastModified", m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_operationNameHasBeenSet) {
    payload.WithString("operationName", m_operationName);
  }

  if (m_productRestEndpointPageArnHasBeenSet) {
    payload.WithString("productRestEndpointPageArn", m_productRestEndpointPageArn);
  }

  if (m_productRestEndpointPageIdHasBeenSet) {
    payload.WithString("productRestEndpointPageId", m_productRestEndpointPageId);
  }

  if (m_restEndpointIdentifierHasBeenSet) {
    payload.WithObject("restEndpointIdentifier", m_restEndpointIdentifier.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if (m_statusExceptionHasBeenSet) {
    payload.WithObject("statusException", m_statusException.Jsonize());
  }

  if (m_tryItStateHasBeenSet) {
    payload.WithString("tryItState", TryItStateMapper::GetNameForTryItState(m_tryItState));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
