/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/NewRelicServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

NewRelicServiceDetails::NewRelicServiceDetails(JsonView jsonValue) { *this = jsonValue; }

NewRelicServiceDetails& NewRelicServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationConfig")) {
    m_authorizationConfig = jsonValue.GetObject("authorizationConfig");
    m_authorizationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue NewRelicServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_authorizationConfigHasBeenSet) {
    payload.WithObject("authorizationConfig", m_authorizationConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
