/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ImagesLogo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ImagesLogo::ImagesLogo(JsonView jsonValue) { *this = jsonValue; }

ImagesLogo& ImagesLogo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Default")) {
    m_default = jsonValue.GetString("Default");
    m_defaultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Favicon")) {
    m_favicon = jsonValue.GetString("Favicon");
    m_faviconHasBeenSet = true;
  }
  return *this;
}

JsonValue ImagesLogo::Jsonize() const {
  JsonValue payload;

  if (m_defaultHasBeenSet) {
    payload.WithString("Default", m_default);
  }

  if (m_faviconHasBeenSet) {
    payload.WithString("Favicon", m_favicon);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
