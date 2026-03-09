/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EmailAddressConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EmailAddressConfig::EmailAddressConfig(JsonView jsonValue) { *this = jsonValue; }

EmailAddressConfig& EmailAddressConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EmailAddressId")) {
    m_emailAddressId = jsonValue.GetString("EmailAddressId");
    m_emailAddressIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailAddressConfig::Jsonize() const {
  JsonValue payload;

  if (m_emailAddressIdHasBeenSet) {
    payload.WithString("EmailAddressId", m_emailAddressId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
