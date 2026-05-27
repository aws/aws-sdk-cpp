/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/AspectRatio.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

AspectRatio::AspectRatio(JsonView jsonValue) { *this = jsonValue; }

AspectRatio& AspectRatio::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("width")) {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("height")) {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  return *this;
}

JsonValue AspectRatio::Jsonize() const {
  JsonValue payload;

  if (m_widthHasBeenSet) {
    payload.WithInteger("width", m_width);
  }

  if (m_heightHasBeenSet) {
    payload.WithInteger("height", m_height);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
