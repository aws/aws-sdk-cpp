/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/RegionStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

RegionStatus::RegionStatus(JsonView jsonValue) { *this = jsonValue; }

RegionStatus& RegionStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue RegionStatus::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", m_status);
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
