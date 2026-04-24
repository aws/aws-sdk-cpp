/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-serverless/model/SessionConfigurationOverrides.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRServerless {
namespace Model {

SessionConfigurationOverrides::SessionConfigurationOverrides(JsonView jsonValue) { *this = jsonValue; }

SessionConfigurationOverrides& SessionConfigurationOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("runtimeConfiguration")) {
    Aws::Utils::Array<JsonView> runtimeConfigurationJsonList = jsonValue.GetArray("runtimeConfiguration");
    for (unsigned runtimeConfigurationIndex = 0; runtimeConfigurationIndex < runtimeConfigurationJsonList.GetLength();
         ++runtimeConfigurationIndex) {
      m_runtimeConfiguration.push_back(runtimeConfigurationJsonList[runtimeConfigurationIndex].AsObject());
    }
    m_runtimeConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionConfigurationOverrides::Jsonize() const {
  JsonValue payload;

  if (m_runtimeConfigurationHasBeenSet) {
    Aws::Utils::Array<JsonValue> runtimeConfigurationJsonList(m_runtimeConfiguration.size());
    for (unsigned runtimeConfigurationIndex = 0; runtimeConfigurationIndex < runtimeConfigurationJsonList.GetLength();
         ++runtimeConfigurationIndex) {
      runtimeConfigurationJsonList[runtimeConfigurationIndex].AsObject(m_runtimeConfiguration[runtimeConfigurationIndex].Jsonize());
    }
    payload.WithArray("runtimeConfiguration", std::move(runtimeConfigurationJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
