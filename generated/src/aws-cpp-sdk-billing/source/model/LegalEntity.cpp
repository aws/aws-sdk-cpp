/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/LegalEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

LegalEntity::LegalEntity(JsonView jsonValue) { *this = jsonValue; }

LegalEntity& LegalEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("legalEntityName")) {
    m_legalEntityName = jsonValue.GetString("legalEntityName");
    m_legalEntityNameHasBeenSet = true;
  }
  return *this;
}

JsonValue LegalEntity::Jsonize() const {
  JsonValue payload;

  if (m_legalEntityNameHasBeenSet) {
    payload.WithString("legalEntityName", m_legalEntityName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
