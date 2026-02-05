/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/As2AsyncMdnConnectorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {

As2AsyncMdnConnectorConfig::As2AsyncMdnConnectorConfig(JsonView jsonValue) { *this = jsonValue; }

As2AsyncMdnConnectorConfig& As2AsyncMdnConnectorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerIds")) {
    Aws::Utils::Array<JsonView> serverIdsJsonList = jsonValue.GetArray("ServerIds");
    for (unsigned serverIdsIndex = 0; serverIdsIndex < serverIdsJsonList.GetLength(); ++serverIdsIndex) {
      m_serverIds.push_back(serverIdsJsonList[serverIdsIndex].AsString());
    }
    m_serverIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue As2AsyncMdnConnectorConfig::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("Url", m_url);
  }

  if (m_serverIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> serverIdsJsonList(m_serverIds.size());
    for (unsigned serverIdsIndex = 0; serverIdsIndex < serverIdsJsonList.GetLength(); ++serverIdsIndex) {
      serverIdsJsonList[serverIdsIndex].AsString(m_serverIds[serverIdsIndex]);
    }
    payload.WithArray("ServerIds", std::move(serverIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
