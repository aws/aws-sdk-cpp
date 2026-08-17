/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExtractionDefinitionDisplay.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExtractionDefinitionDisplay::ExtractionDefinitionDisplay(JsonView jsonValue) { *this = jsonValue; }

ExtractionDefinitionDisplay& ExtractionDefinitionDisplay::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Label")) {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionDefinitionDisplay::Jsonize() const {
  JsonValue payload;

  if (m_labelHasBeenSet) {
    payload.WithString("Label", m_label);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
