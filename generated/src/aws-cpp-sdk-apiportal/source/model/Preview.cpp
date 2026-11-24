/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/Preview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

Preview::Preview(JsonView jsonValue) { *this = jsonValue; }

Preview& Preview::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("previewStatus")) {
    m_previewStatus = PreviewStatusMapper::GetPreviewStatusForName(jsonValue.GetString("previewStatus"));
    m_previewStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusException")) {
    m_statusException = jsonValue.GetObject("statusException");
    m_statusExceptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("previewUrl")) {
    m_previewUrl = jsonValue.GetString("previewUrl");
    m_previewUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue Preview::Jsonize() const {
  JsonValue payload;

  if (m_previewStatusHasBeenSet) {
    payload.WithString("previewStatus", PreviewStatusMapper::GetNameForPreviewStatus(m_previewStatus));
  }

  if (m_statusExceptionHasBeenSet) {
    payload.WithObject("statusException", m_statusException.Jsonize());
  }

  if (m_previewUrlHasBeenSet) {
    payload.WithString("previewUrl", m_previewUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
