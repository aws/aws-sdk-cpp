/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DataSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

DataSourceConfig::DataSourceConfig(JsonView jsonValue) { *this = jsonValue; }

DataSourceConfig& DataSourceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cloudWatchLogs")) {
    m_cloudWatchLogs = jsonValue.GetObject("cloudWatchLogs");
    m_cloudWatchLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceConfig::Jsonize() const {
  JsonValue payload;

  if (m_cloudWatchLogsHasBeenSet) {
    payload.WithObject("cloudWatchLogs", m_cloudWatchLogs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
