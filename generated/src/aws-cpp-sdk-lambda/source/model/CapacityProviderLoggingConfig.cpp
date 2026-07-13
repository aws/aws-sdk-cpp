/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CapacityProviderLoggingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CapacityProviderLoggingConfig::CapacityProviderLoggingConfig(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderLoggingConfig& CapacityProviderLoggingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SystemLogLevel")) {
    m_systemLogLevel = SystemLogLevelMapper::GetSystemLogLevelForName(jsonValue.GetString("SystemLogLevel"));
    m_systemLogLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogGroup")) {
    m_logGroup = jsonValue.GetString("LogGroup");
    m_logGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderLoggingConfig::Jsonize() const {
  JsonValue payload;

  if (m_systemLogLevelHasBeenSet) {
    payload.WithString("SystemLogLevel", SystemLogLevelMapper::GetNameForSystemLogLevel(m_systemLogLevel));
  }

  if (m_logGroupHasBeenSet) {
    payload.WithString("LogGroup", m_logGroup);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
