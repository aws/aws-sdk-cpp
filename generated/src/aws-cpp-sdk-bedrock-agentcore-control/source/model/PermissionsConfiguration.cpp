/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PermissionsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PermissionsConfiguration::PermissionsConfiguration(JsonView jsonValue) { *this = jsonValue; }

PermissionsConfiguration& PermissionsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacityProviderOperatorRoleArn")) {
    m_capacityProviderOperatorRoleArn = jsonValue.GetString("capacityProviderOperatorRoleArn");
    m_capacityProviderOperatorRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_capacityProviderOperatorRoleArnHasBeenSet) {
    payload.WithString("capacityProviderOperatorRoleArn", m_capacityProviderOperatorRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
