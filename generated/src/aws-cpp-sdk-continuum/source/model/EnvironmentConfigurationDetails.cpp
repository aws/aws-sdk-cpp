/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/EnvironmentConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

EnvironmentConfigurationDetails::EnvironmentConfigurationDetails(JsonView jsonValue) { *this = jsonValue; }

EnvironmentConfigurationDetails& EnvironmentConfigurationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeConfiguration")) {
    m_codeConfiguration = jsonValue.GetObject("codeConfiguration");
    m_codeConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfigurationDetails::Jsonize() const {
  JsonValue payload;

  if (m_codeConfigurationHasBeenSet) {
    payload.WithObject("codeConfiguration", m_codeConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
