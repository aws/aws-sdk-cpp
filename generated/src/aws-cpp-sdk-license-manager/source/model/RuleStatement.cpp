/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/RuleStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

RuleStatement::RuleStatement(JsonView jsonValue) { *this = jsonValue; }

RuleStatement& RuleStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LicenseConfigurationRuleStatement")) {
    m_licenseConfigurationRuleStatement = jsonValue.GetObject("LicenseConfigurationRuleStatement");
    m_licenseConfigurationRuleStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LicenseRuleStatement")) {
    m_licenseRuleStatement = jsonValue.GetObject("LicenseRuleStatement");
    m_licenseRuleStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceRuleStatement")) {
    m_instanceRuleStatement = jsonValue.GetObject("InstanceRuleStatement");
    m_instanceRuleStatementHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleStatement::Jsonize() const {
  JsonValue payload;

  if (m_licenseConfigurationRuleStatementHasBeenSet) {
    payload.WithObject("LicenseConfigurationRuleStatement", m_licenseConfigurationRuleStatement.Jsonize());
  }

  if (m_licenseRuleStatementHasBeenSet) {
    payload.WithObject("LicenseRuleStatement", m_licenseRuleStatement.Jsonize());
  }

  if (m_instanceRuleStatementHasBeenSet) {
    payload.WithObject("InstanceRuleStatement", m_instanceRuleStatement.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
