/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AWSConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AWSConfiguration::AWSConfiguration(JsonView jsonValue) { *this = jsonValue; }

AWSConfiguration& AWSConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assumableRoleArn")) {
    m_assumableRoleArn = jsonValue.GetString("assumableRoleArn");
    m_assumableRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountType")) {
    m_accountType = MonitorAccountTypeMapper::GetMonitorAccountTypeForName(jsonValue.GetString("accountType"));
    m_accountTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AWSConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_assumableRoleArnHasBeenSet) {
    payload.WithString("assumableRoleArn", m_assumableRoleArn);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_accountTypeHasBeenSet) {
    payload.WithString("accountType", MonitorAccountTypeMapper::GetNameForMonitorAccountType(m_accountType));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
