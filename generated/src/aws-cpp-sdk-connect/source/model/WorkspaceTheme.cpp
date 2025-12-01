/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkspaceTheme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WorkspaceTheme::WorkspaceTheme(JsonView jsonValue) { *this = jsonValue; }

WorkspaceTheme& WorkspaceTheme::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Light")) {
    m_light = jsonValue.GetObject("Light");
    m_lightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dark")) {
    m_dark = jsonValue.GetObject("Dark");
    m_darkHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceTheme::Jsonize() const {
  JsonValue payload;

  if (m_lightHasBeenSet) {
    payload.WithObject("Light", m_light.Jsonize());
  }

  if (m_darkHasBeenSet) {
    payload.WithObject("Dark", m_dark.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
