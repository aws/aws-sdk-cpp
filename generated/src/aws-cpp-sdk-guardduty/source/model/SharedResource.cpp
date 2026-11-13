/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/SharedResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

SharedResource::SharedResource(JsonView jsonValue) { *this = jsonValue; }

SharedResource& SharedResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  return *this;
}

JsonValue SharedResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
