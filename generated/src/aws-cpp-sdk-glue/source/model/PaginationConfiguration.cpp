/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/PaginationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

PaginationConfiguration::PaginationConfiguration(JsonView jsonValue) { *this = jsonValue; }

PaginationConfiguration& PaginationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CursorConfiguration")) {
    m_cursorConfiguration = jsonValue.GetObject("CursorConfiguration");
    m_cursorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OffsetConfiguration")) {
    m_offsetConfiguration = jsonValue.GetObject("OffsetConfiguration");
    m_offsetConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PaginationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_cursorConfigurationHasBeenSet) {
    payload.WithObject("CursorConfiguration", m_cursorConfiguration.Jsonize());
  }

  if (m_offsetConfigurationHasBeenSet) {
    payload.WithObject("OffsetConfiguration", m_offsetConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
