/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/LicenseAssetRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

LicenseAssetRule::LicenseAssetRule(JsonView jsonValue) { *this = jsonValue; }

LicenseAssetRule& LicenseAssetRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RuleStatement")) {
    m_ruleStatement = jsonValue.GetObject("RuleStatement");
    m_ruleStatementHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseAssetRule::Jsonize() const {
  JsonValue payload;

  if (m_ruleStatementHasBeenSet) {
    payload.WithObject("RuleStatement", m_ruleStatement.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
