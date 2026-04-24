/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CustomColors.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

CustomColors::CustomColors(JsonView jsonValue) { *this = jsonValue; }

CustomColors& CustomColors::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accentColor")) {
    m_accentColor = jsonValue.GetString("accentColor");
    m_accentColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("backgroundColor")) {
    m_backgroundColor = jsonValue.GetString("backgroundColor");
    m_backgroundColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorValidationColor")) {
    m_errorValidationColor = jsonValue.GetString("errorValidationColor");
    m_errorValidationColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("headerColor")) {
    m_headerColor = jsonValue.GetString("headerColor");
    m_headerColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("navigationColor")) {
    m_navigationColor = jsonValue.GetString("navigationColor");
    m_navigationColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("textColor")) {
    m_textColor = jsonValue.GetString("textColor");
    m_textColorHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomColors::Jsonize() const {
  JsonValue payload;

  if (m_accentColorHasBeenSet) {
    payload.WithString("accentColor", m_accentColor);
  }

  if (m_backgroundColorHasBeenSet) {
    payload.WithString("backgroundColor", m_backgroundColor);
  }

  if (m_errorValidationColorHasBeenSet) {
    payload.WithString("errorValidationColor", m_errorValidationColor);
  }

  if (m_headerColorHasBeenSet) {
    payload.WithString("headerColor", m_headerColor);
  }

  if (m_navigationColorHasBeenSet) {
    payload.WithString("navigationColor", m_navigationColor);
  }

  if (m_textColorHasBeenSet) {
    payload.WithString("textColor", m_textColor);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
