/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/InstanceAttributeUpdates.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

InstanceAttributeUpdates::InstanceAttributeUpdates(JsonView jsonValue) { *this = jsonValue; }

InstanceAttributeUpdates& InstanceAttributeUpdates::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bundleId")) {
    m_bundleId = jsonValue.GetString("bundleId");
    m_bundleIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceAttributeUpdates::Jsonize() const {
  JsonValue payload;

  if (m_bundleIdHasBeenSet) {
    payload.WithString("bundleId", m_bundleId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
