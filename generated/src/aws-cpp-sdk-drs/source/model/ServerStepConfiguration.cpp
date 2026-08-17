/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/ServerStepConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

ServerStepConfiguration::ServerStepConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServerStepConfiguration& ServerStepConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("servers")) {
    Aws::Utils::Array<JsonView> serversJsonList = jsonValue.GetArray("servers");
    for (unsigned serversIndex = 0; serversIndex < serversJsonList.GetLength(); ++serversIndex) {
      m_servers.push_back(serversJsonList[serversIndex].AsObject());
    }
    m_serversHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerStepConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_serversHasBeenSet) {
    Aws::Utils::Array<JsonValue> serversJsonList(m_servers.size());
    for (unsigned serversIndex = 0; serversIndex < serversJsonList.GetLength(); ++serversIndex) {
      serversJsonList[serversIndex].AsObject(m_servers[serversIndex].Jsonize());
    }
    payload.WithArray("servers", std::move(serversJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
