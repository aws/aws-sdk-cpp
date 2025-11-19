/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Preview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

Preview::Preview(JsonView jsonValue) { *this = jsonValue; }

Preview& Preview::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("previewStatus")) {
    m_previewStatus = PreviewStatusMapper::GetPreviewStatusForName(jsonValue.GetString("previewStatus"));
    m_previewStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("previewUrl")) {
    m_previewUrl = jsonValue.GetString("previewUrl");
    m_previewUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusException")) {
    m_statusException = jsonValue.GetObject("statusException");
    m_statusExceptionHasBeenSet = true;
  }
  return *this;
}

JsonValue Preview::Jsonize() const {
  JsonValue payload;

  if (m_previewStatusHasBeenSet) {
    payload.WithString("previewStatus", PreviewStatusMapper::GetNameForPreviewStatus(m_previewStatus));
  }

  if (m_previewUrlHasBeenSet) {
    payload.WithString("previewUrl", m_previewUrl);
  }

  if (m_statusExceptionHasBeenSet) {
    payload.WithObject("statusException", m_statusException.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
