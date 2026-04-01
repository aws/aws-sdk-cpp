/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/NewRelicServiceAuthorizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

NewRelicServiceAuthorizationConfig::NewRelicServiceAuthorizationConfig(JsonView jsonValue) { *this = jsonValue; }

NewRelicServiceAuthorizationConfig& NewRelicServiceAuthorizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiKey")) {
    m_apiKey = jsonValue.GetObject("apiKey");
    m_apiKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue NewRelicServiceAuthorizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_apiKeyHasBeenSet) {
    payload.WithObject("apiKey", m_apiKey.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
