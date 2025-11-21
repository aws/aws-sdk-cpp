/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/EndpointDisplayContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

EndpointDisplayContent::EndpointDisplayContent(JsonView jsonValue) { *this = jsonValue; }

EndpointDisplayContent& EndpointDisplayContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("none")) {
    m_none = jsonValue.GetObject("none");
    m_noneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("overrides")) {
    m_overrides = jsonValue.GetObject("overrides");
    m_overridesHasBeenSet = true;
  }
  return *this;
}

JsonValue EndpointDisplayContent::Jsonize() const {
  JsonValue payload;

  if (m_noneHasBeenSet) {
    payload.WithObject("none", m_none.Jsonize());
  }

  if (m_overridesHasBeenSet) {
    payload.WithObject("overrides", m_overrides.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
