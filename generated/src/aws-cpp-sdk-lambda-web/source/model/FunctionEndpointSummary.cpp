/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/FunctionEndpointSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

FunctionEndpointSummary::FunctionEndpointSummary(JsonView jsonValue) { *this = jsonValue; }

FunctionEndpointSummary& FunctionEndpointSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpointArn")) {
    m_endpointArn = jsonValue.GetString("endpointArn");
    m_endpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointName")) {
    m_endpointName = jsonValue.GetString("endpointName");
    m_endpointNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointType")) {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("endpointType"));
    m_endpointTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authType")) {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoDeploymentMode")) {
    m_autoDeploymentMode = AutoDeploymentModeMapper::GetAutoDeploymentModeForName(jsonValue.GetString("autoDeploymentMode"));
    m_autoDeploymentModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revisionWeights")) {
    Aws::Utils::Array<JsonView> revisionWeightsJsonList = jsonValue.GetArray("revisionWeights");
    for (unsigned revisionWeightsIndex = 0; revisionWeightsIndex < revisionWeightsJsonList.GetLength(); ++revisionWeightsIndex) {
      m_revisionWeights.push_back(revisionWeightsJsonList[revisionWeightsIndex].AsObject());
    }
    m_revisionWeightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scalingConfig")) {
    m_scalingConfig = jsonValue.GetObject("scalingConfig");
    m_scalingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("throttleConfig")) {
    m_throttleConfig = jsonValue.GetObject("throttleConfig");
    m_throttleConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = EndpointStateMapper::GetEndpointStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateStatus")) {
    m_updateStatus = EndpointUpdateStatusMapper::GetEndpointUpdateStatusForName(jsonValue.GetString("updateStatus"));
    m_updateStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateStatusReason")) {
    m_updateStatusReason = jsonValue.GetString("updateStatusReason");
    m_updateStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionEndpointSummary::Jsonize() const {
  JsonValue payload;

  if (m_endpointArnHasBeenSet) {
    payload.WithString("endpointArn", m_endpointArn);
  }

  if (m_endpointNameHasBeenSet) {
    payload.WithString("endpointName", m_endpointName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_endpointTypeHasBeenSet) {
    payload.WithString("endpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_authTypeHasBeenSet) {
    payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if (m_autoDeploymentModeHasBeenSet) {
    payload.WithString("autoDeploymentMode", AutoDeploymentModeMapper::GetNameForAutoDeploymentMode(m_autoDeploymentMode));
  }

  if (m_revisionWeightsHasBeenSet) {
    Aws::Utils::Array<JsonValue> revisionWeightsJsonList(m_revisionWeights.size());
    for (unsigned revisionWeightsIndex = 0; revisionWeightsIndex < revisionWeightsJsonList.GetLength(); ++revisionWeightsIndex) {
      revisionWeightsJsonList[revisionWeightsIndex].AsObject(m_revisionWeights[revisionWeightsIndex].Jsonize());
    }
    payload.WithArray("revisionWeights", std::move(revisionWeightsJsonList));
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_scalingConfigHasBeenSet) {
    payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());
  }

  if (m_throttleConfigHasBeenSet) {
    payload.WithObject("throttleConfig", m_throttleConfig.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", EndpointStateMapper::GetNameForEndpointState(m_state));
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("stateReason", m_stateReason);
  }

  if (m_updateStatusHasBeenSet) {
    payload.WithString("updateStatus", EndpointUpdateStatusMapper::GetNameForEndpointUpdateStatus(m_updateStatus));
  }

  if (m_updateStatusReasonHasBeenSet) {
    payload.WithString("updateStatusReason", m_updateStatusReason);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
