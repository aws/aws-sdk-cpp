/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/IngressPathSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

IngressPathSummary::IngressPathSummary(JsonView jsonValue) { *this = jsonValue; }

IngressPathSummary& IngressPathSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressPathSummary::Jsonize() const {
  JsonValue payload;

  if (m_accessTypeHasBeenSet) {
    payload.WithString("accessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
