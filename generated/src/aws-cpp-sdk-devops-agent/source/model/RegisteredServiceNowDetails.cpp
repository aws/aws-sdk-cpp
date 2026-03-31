/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredServiceNowDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredServiceNowDetails::RegisteredServiceNowDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredServiceNowDetails& RegisteredServiceNowDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceUrl")) {
    m_instanceUrl = jsonValue.GetString("instanceUrl");
    m_instanceUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredServiceNowDetails::Jsonize() const {
  JsonValue payload;

  if (m_instanceUrlHasBeenSet) {
    payload.WithString("instanceUrl", m_instanceUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
