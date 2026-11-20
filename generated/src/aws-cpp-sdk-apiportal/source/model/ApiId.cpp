/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ApiId::ApiId(JsonView jsonValue) { *this = jsonValue; }

ApiId& ApiId::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifierParts")) {
    m_identifierParts = jsonValue.GetObject("identifierParts");
    m_identifierPartsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiId::Jsonize() const {
  JsonValue payload;

  if (m_identifierPartsHasBeenSet) {
    payload.WithObject("identifierParts", m_identifierParts.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
