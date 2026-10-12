/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/LoggingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

LoggingConfig::LoggingConfig(JsonView jsonValue) { *this = jsonValue; }

LoggingConfig& LoggingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroup")) {
    m_logGroup = jsonValue.GetString("logGroup");
    m_logGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationLogLevel")) {
    m_applicationLogLevel = ApplicationLogLevelMapper::GetApplicationLogLevelForName(jsonValue.GetString("applicationLogLevel"));
    m_applicationLogLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemLogLevel")) {
    m_systemLogLevel = SystemLogLevelMapper::GetSystemLogLevelForName(jsonValue.GetString("systemLogLevel"));
    m_systemLogLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue LoggingConfig::Jsonize() const {
  JsonValue payload;

  if (m_logGroupHasBeenSet) {
    payload.WithString("logGroup", m_logGroup);
  }

  if (m_applicationLogLevelHasBeenSet) {
    payload.WithString("applicationLogLevel", ApplicationLogLevelMapper::GetNameForApplicationLogLevel(m_applicationLogLevel));
  }

  if (m_systemLogLevelHasBeenSet) {
    payload.WithString("systemLogLevel", SystemLogLevelMapper::GetNameForSystemLogLevel(m_systemLogLevel));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
