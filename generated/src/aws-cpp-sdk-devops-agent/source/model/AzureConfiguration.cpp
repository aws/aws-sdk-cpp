/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AzureConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AzureConfiguration::AzureConfiguration(JsonView jsonValue) { *this = jsonValue; }

AzureConfiguration& AzureConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("subscriptionId")) {
    m_subscriptionId = jsonValue.GetString("subscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("subscriptionId", m_subscriptionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
