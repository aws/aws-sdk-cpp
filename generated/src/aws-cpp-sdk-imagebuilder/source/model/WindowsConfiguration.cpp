/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/WindowsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

WindowsConfiguration::WindowsConfiguration(JsonView jsonValue) { *this = jsonValue; }

WindowsConfiguration& WindowsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageIndex")) {
    m_imageIndex = jsonValue.GetInt64("imageIndex");
    m_imageIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue WindowsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_imageIndexHasBeenSet) {
    payload.WithInt64("imageIndex", m_imageIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
