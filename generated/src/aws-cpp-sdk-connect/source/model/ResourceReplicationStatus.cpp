/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ResourceReplicationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ResourceReplicationStatus::ResourceReplicationStatus(JsonView jsonValue) { *this = jsonValue; }

ResourceReplicationStatus& ResourceReplicationStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceReplicationStatus::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", m_status);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
