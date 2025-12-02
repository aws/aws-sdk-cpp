/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/DurableConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

DurableConfig::DurableConfig(JsonView jsonValue) { *this = jsonValue; }

DurableConfig& DurableConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RetentionPeriodInDays")) {
    m_retentionPeriodInDays = jsonValue.GetInteger("RetentionPeriodInDays");
    m_retentionPeriodInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionTimeout")) {
    m_executionTimeout = jsonValue.GetInteger("ExecutionTimeout");
    m_executionTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue DurableConfig::Jsonize() const {
  JsonValue payload;

  if (m_retentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("RetentionPeriodInDays", m_retentionPeriodInDays);
  }

  if (m_executionTimeoutHasBeenSet) {
    payload.WithInteger("ExecutionTimeout", m_executionTimeout);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
