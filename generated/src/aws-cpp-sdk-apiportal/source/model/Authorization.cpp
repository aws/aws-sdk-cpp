/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/Authorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

Authorization::Authorization(JsonView jsonValue) { *this = jsonValue; }

Authorization& Authorization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationConfig")) {
    m_authorizationConfig = jsonValue.GetObject("authorizationConfig");
    m_authorizationConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fineGrainedAccessControl")) {
    m_fineGrainedAccessControl =
        FineGrainedAccessControlMapper::GetFineGrainedAccessControlForName(jsonValue.GetString("fineGrainedAccessControl"));
    m_fineGrainedAccessControlHasBeenSet = true;
  }
  return *this;
}

JsonValue Authorization::Jsonize() const {
  JsonValue payload;

  if (m_authorizationConfigHasBeenSet) {
    payload.WithObject("authorizationConfig", m_authorizationConfig.Jsonize());
  }

  if (m_fineGrainedAccessControlHasBeenSet) {
    payload.WithString("fineGrainedAccessControl",
                       FineGrainedAccessControlMapper::GetNameForFineGrainedAccessControl(m_fineGrainedAccessControl));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
