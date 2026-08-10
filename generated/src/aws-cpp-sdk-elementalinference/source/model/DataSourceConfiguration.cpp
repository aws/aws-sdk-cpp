/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/DataSourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

DataSourceConfiguration& DataSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fixtureId")) {
    m_fixtureId = jsonValue.GetString("fixtureId");
    m_fixtureIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fixtureIdHasBeenSet) {
    payload.WithString("fixtureId", m_fixtureId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
