/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ExpressGatewayServiceAwsLogsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ExpressGatewayServiceAwsLogsConfiguration::ExpressGatewayServiceAwsLogsConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExpressGatewayServiceAwsLogsConfiguration& ExpressGatewayServiceAwsLogsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroup")) {
    m_logGroup = jsonValue.GetString("logGroup");
    m_logGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logStreamPrefix")) {
    m_logStreamPrefix = jsonValue.GetString("logStreamPrefix");
    m_logStreamPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressGatewayServiceAwsLogsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_logGroupHasBeenSet) {
    payload.WithString("logGroup", m_logGroup);
  }

  if (m_logStreamPrefixHasBeenSet) {
    payload.WithString("logStreamPrefix", m_logStreamPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
