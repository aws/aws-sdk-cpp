/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/IdentityMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

IdentityMapping::IdentityMapping(JsonView jsonValue) { *this = jsonValue; }

IdentityMapping& IdentityMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("usernameAttribute")) {
    m_usernameAttribute = jsonValue.GetString("usernameAttribute");
    m_usernameAttributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("prefix")) {
    m_prefix = jsonValue.GetString("prefix");
    m_prefixHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityMapping::Jsonize() const {
  JsonValue payload;

  if (m_usernameAttributeHasBeenSet) {
    payload.WithString("usernameAttribute", m_usernameAttribute);
  }

  if (m_prefixHasBeenSet) {
    payload.WithString("prefix", m_prefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
