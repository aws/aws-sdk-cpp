/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AllowedExtension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AllowedExtension::AllowedExtension(JsonView jsonValue) { *this = jsonValue; }

AllowedExtension& AllowedExtension::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Extension")) {
    m_extension = jsonValue.GetString("Extension");
    m_extensionHasBeenSet = true;
  }
  return *this;
}

JsonValue AllowedExtension::Jsonize() const {
  JsonValue payload;

  if (m_extensionHasBeenSet) {
    payload.WithString("Extension", m_extension);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
