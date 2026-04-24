/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AutomaticFailConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AutomaticFailConfiguration::AutomaticFailConfiguration(JsonView jsonValue) { *this = jsonValue; }

AutomaticFailConfiguration& AutomaticFailConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TargetSection")) {
    m_targetSection = jsonValue.GetString("TargetSection");
    m_targetSectionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomaticFailConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_targetSectionHasBeenSet) {
    payload.WithString("TargetSection", m_targetSection);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
