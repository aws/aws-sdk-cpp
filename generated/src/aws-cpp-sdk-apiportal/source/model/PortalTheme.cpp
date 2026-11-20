/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/PortalTheme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

PortalTheme::PortalTheme(JsonView jsonValue) { *this = jsonValue; }

PortalTheme& PortalTheme::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customColors")) {
    m_customColors = jsonValue.GetObject("customColors");
    m_customColorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logoUploadedAt")) {
    m_logoUploadedAt = jsonValue.GetDouble("logoUploadedAt");
    m_logoUploadedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PortalTheme::Jsonize() const {
  JsonValue payload;

  if (m_customColorsHasBeenSet) {
    payload.WithObject("customColors", m_customColors.Jsonize());
  }

  if (m_logoUploadedAtHasBeenSet) {
    payload.WithDouble("logoUploadedAt", m_logoUploadedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
