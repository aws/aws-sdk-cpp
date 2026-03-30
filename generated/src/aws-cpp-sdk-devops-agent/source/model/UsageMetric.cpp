/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UsageMetric.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

UsageMetric::UsageMetric(JsonView jsonValue) { *this = jsonValue; }

UsageMetric& UsageMetric::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("limit")) {
    m_limit = jsonValue.GetInteger("limit");
    m_limitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usage")) {
    m_usage = jsonValue.GetDouble("usage");
    m_usageHasBeenSet = true;
  }
  return *this;
}

JsonValue UsageMetric::Jsonize() const {
  JsonValue payload;

  if (m_limitHasBeenSet) {
    payload.WithInteger("limit", m_limit);
  }

  if (m_usageHasBeenSet) {
    payload.WithDouble("usage", m_usage);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
