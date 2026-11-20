/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiInventoryFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ApiInventoryFilters::ApiInventoryFilters(JsonView jsonValue) { *this = jsonValue; }

ApiInventoryFilters& ApiInventoryFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("discoverySource")) {
    m_discoverySource = DiscoverySourceMapper::GetDiscoverySourceForName(jsonValue.GetString("discoverySource"));
    m_discoverySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiInventoryFilters::Jsonize() const {
  JsonValue payload;

  if (m_discoverySourceHasBeenSet) {
    payload.WithString("discoverySource", DiscoverySourceMapper::GetNameForDiscoverySource(m_discoverySource));
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
