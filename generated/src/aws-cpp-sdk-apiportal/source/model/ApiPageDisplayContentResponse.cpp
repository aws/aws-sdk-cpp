/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiPageDisplayContentResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ApiPageDisplayContentResponse::ApiPageDisplayContentResponse(JsonView jsonValue) { *this = jsonValue; }

ApiPageDisplayContentResponse& ApiPageDisplayContentResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operationName")) {
    m_operationName = jsonValue.GetString("operationName");
    m_operationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiUrl")) {
    m_apiUrl = jsonValue.GetString("apiUrl");
    m_apiUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiPageDisplayContentResponse::Jsonize() const {
  JsonValue payload;

  if (m_operationNameHasBeenSet) {
    payload.WithString("operationName", m_operationName);
  }

  if (m_apiUrlHasBeenSet) {
    payload.WithString("apiUrl", m_apiUrl);
  }

  if (m_bodyHasBeenSet) {
    payload.WithString("body", m_body);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
