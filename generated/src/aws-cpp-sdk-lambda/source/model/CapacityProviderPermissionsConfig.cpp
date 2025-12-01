/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CapacityProviderPermissionsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CapacityProviderPermissionsConfig::CapacityProviderPermissionsConfig(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderPermissionsConfig& CapacityProviderPermissionsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CapacityProviderOperatorRoleArn")) {
    m_capacityProviderOperatorRoleArn = jsonValue.GetString("CapacityProviderOperatorRoleArn");
    m_capacityProviderOperatorRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderPermissionsConfig::Jsonize() const {
  JsonValue payload;

  if (m_capacityProviderOperatorRoleArnHasBeenSet) {
    payload.WithString("CapacityProviderOperatorRoleArn", m_capacityProviderOperatorRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
