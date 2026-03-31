/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/OAuthAdditionalStepDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

OAuthAdditionalStepDetails::OAuthAdditionalStepDetails(JsonView jsonValue) { *this = jsonValue; }

OAuthAdditionalStepDetails& OAuthAdditionalStepDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationUrl")) {
    m_authorizationUrl = jsonValue.GetString("authorizationUrl");
    m_authorizationUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuthAdditionalStepDetails::Jsonize() const {
  JsonValue payload;

  if (m_authorizationUrlHasBeenSet) {
    payload.WithString("authorizationUrl", m_authorizationUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
