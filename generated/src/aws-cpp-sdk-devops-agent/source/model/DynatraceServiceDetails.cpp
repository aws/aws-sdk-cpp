/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/DynatraceServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

DynatraceServiceDetails::DynatraceServiceDetails(JsonView jsonValue) { *this = jsonValue; }

DynatraceServiceDetails& DynatraceServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountUrn")) {
    m_accountUrn = jsonValue.GetString("accountUrn");
    m_accountUrnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationConfig")) {
    m_authorizationConfig = jsonValue.GetObject("authorizationConfig");
    m_authorizationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue DynatraceServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_accountUrnHasBeenSet) {
    payload.WithString("accountUrn", m_accountUrn);
  }

  if (m_authorizationConfigHasBeenSet) {
    payload.WithObject("authorizationConfig", m_authorizationConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
