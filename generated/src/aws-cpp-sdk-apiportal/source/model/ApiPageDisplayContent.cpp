/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiPageDisplayContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ApiPageDisplayContent::ApiPageDisplayContent(JsonView jsonValue) { *this = jsonValue; }

ApiPageDisplayContent& ApiPageDisplayContent::operator=(JsonView jsonValue) {
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

JsonValue ApiPageDisplayContent::Jsonize() const {
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
}  // namespace APIPortal
}  // namespace Aws
