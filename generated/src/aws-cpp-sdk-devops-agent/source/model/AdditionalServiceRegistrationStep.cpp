/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AdditionalServiceRegistrationStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AdditionalServiceRegistrationStep::AdditionalServiceRegistrationStep(JsonView jsonValue) { *this = jsonValue; }

AdditionalServiceRegistrationStep& AdditionalServiceRegistrationStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oauth")) {
    m_oauth = jsonValue.GetObject("oauth");
    m_oauthHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalServiceRegistrationStep::Jsonize() const {
  JsonValue payload;

  if (m_oauthHasBeenSet) {
    payload.WithObject("oauth", m_oauth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
