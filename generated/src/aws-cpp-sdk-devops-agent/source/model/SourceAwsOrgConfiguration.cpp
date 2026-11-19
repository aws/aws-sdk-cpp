/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SourceAwsOrgConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SourceAwsOrgConfiguration::SourceAwsOrgConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceAwsOrgConfiguration& SourceAwsOrgConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountType")) {
    m_accountType = SourceAccountTypeMapper::GetSourceAccountTypeForName(jsonValue.GetString("accountType"));
    m_accountTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationalUnit")) {
    m_organizationalUnit = jsonValue.GetObject("organizationalUnit");
    m_organizationalUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentState")) {
    m_deploymentState = jsonValue.GetObject("deploymentState");
    m_deploymentStateHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceAwsOrgConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_accountTypeHasBeenSet) {
    payload.WithString("accountType", SourceAccountTypeMapper::GetNameForSourceAccountType(m_accountType));
  }

  if (m_organizationalUnitHasBeenSet) {
    payload.WithObject("organizationalUnit", m_organizationalUnit.Jsonize());
  }

  if (m_deploymentStateHasBeenSet) {
    payload.WithObject("deploymentState", m_deploymentState.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
