/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/PortalTheme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

PortalTheme::PortalTheme(JsonView jsonValue) { *this = jsonValue; }

PortalTheme& PortalTheme::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customColors")) {
    m_customColors = jsonValue.GetObject("customColors");
    m_customColorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logoLastUploaded")) {
    m_logoLastUploaded = jsonValue.GetString("logoLastUploaded");
    m_logoLastUploadedHasBeenSet = true;
  }
  return *this;
}

JsonValue PortalTheme::Jsonize() const {
  JsonValue payload;

  if (m_customColorsHasBeenSet) {
    payload.WithObject("customColors", m_customColors.Jsonize());
  }

  if (m_logoLastUploadedHasBeenSet) {
    payload.WithString("logoLastUploaded", m_logoLastUploaded.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
