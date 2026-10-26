/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/UpdateCodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

UpdateCodeConfiguration::UpdateCodeConfiguration(JsonView jsonValue) { *this = jsonValue; }

UpdateCodeConfiguration& UpdateCodeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceConfiguration")) {
    m_sourceConfiguration = jsonValue.GetObject("sourceConfiguration");
    m_sourceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentConfiguration")) {
    m_environmentConfiguration = jsonValue.GetObject("environmentConfiguration");
    m_environmentConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateCodeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceConfigurationHasBeenSet) {
    payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());
  }

  if (m_environmentConfigurationHasBeenSet) {
    payload.WithObject("environmentConfiguration", m_environmentConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
