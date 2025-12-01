/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CapacityProvider.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CapacityProvider::CapacityProvider(JsonView jsonValue) { *this = jsonValue; }

CapacityProvider& CapacityProvider::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CapacityProviderArn")) {
    m_capacityProviderArn = jsonValue.GetString("CapacityProviderArn");
    m_capacityProviderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = CapacityProviderStateMapper::GetCapacityProviderStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PermissionsConfig")) {
    m_permissionsConfig = jsonValue.GetObject("PermissionsConfig");
    m_permissionsConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceRequirements")) {
    m_instanceRequirements = jsonValue.GetObject("InstanceRequirements");
    m_instanceRequirementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CapacityProviderScalingConfig")) {
    m_capacityProviderScalingConfig = jsonValue.GetObject("CapacityProviderScalingConfig");
    m_capacityProviderScalingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProvider::Jsonize() const {
  JsonValue payload;

  if (m_capacityProviderArnHasBeenSet) {
    payload.WithString("CapacityProviderArn", m_capacityProviderArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", CapacityProviderStateMapper::GetNameForCapacityProviderState(m_state));
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_permissionsConfigHasBeenSet) {
    payload.WithObject("PermissionsConfig", m_permissionsConfig.Jsonize());
  }

  if (m_instanceRequirementsHasBeenSet) {
    payload.WithObject("InstanceRequirements", m_instanceRequirements.Jsonize());
  }

  if (m_capacityProviderScalingConfigHasBeenSet) {
    payload.WithObject("CapacityProviderScalingConfig", m_capacityProviderScalingConfig.Jsonize());
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  if (m_lastModifiedHasBeenSet) {
    payload.WithString("LastModified", m_lastModified);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
