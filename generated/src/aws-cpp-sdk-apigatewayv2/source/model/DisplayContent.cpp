/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DisplayContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

DisplayContent::DisplayContent(JsonView jsonValue) { *this = jsonValue; }

DisplayContent& DisplayContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  return *this;
}

JsonValue DisplayContent::Jsonize() const {
  JsonValue payload;

  if (m_bodyHasBeenSet) {
    payload.WithString("body", m_body);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
