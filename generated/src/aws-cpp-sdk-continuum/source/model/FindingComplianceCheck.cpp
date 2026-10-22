/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingComplianceCheck.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

FindingComplianceCheck::FindingComplianceCheck(JsonView jsonValue) { *this = jsonValue; }

FindingComplianceCheck& FindingComplianceCheck::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uid")) {
    m_uid = jsonValue.GetString("uid");
    m_uidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingComplianceCheck::Jsonize() const {
  JsonValue payload;

  if (m_uidHasBeenSet) {
    payload.WithString("uid", m_uid);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
