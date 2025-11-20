/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/CrossAccountDiscoveryServiceStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

CrossAccountDiscoveryServiceStatus::CrossAccountDiscoveryServiceStatus(JsonView jsonValue) { *this = jsonValue; }

CrossAccountDiscoveryServiceStatus& CrossAccountDiscoveryServiceStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossAccountDiscoveryServiceStatus::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
