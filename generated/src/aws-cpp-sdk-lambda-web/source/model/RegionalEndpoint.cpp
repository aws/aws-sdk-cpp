/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/RegionalEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

RegionalEndpoint::RegionalEndpoint(JsonView jsonValue) { *this = jsonValue; }

RegionalEndpoint& RegionalEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authType")) {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revisionWeights")) {
    Aws::Utils::Array<JsonView> revisionWeightsJsonList = jsonValue.GetArray("revisionWeights");
    for (unsigned revisionWeightsIndex = 0; revisionWeightsIndex < revisionWeightsJsonList.GetLength(); ++revisionWeightsIndex) {
      m_revisionWeights.push_back(revisionWeightsJsonList[revisionWeightsIndex].AsObject());
    }
    m_revisionWeightsHasBeenSet = true;
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
  return *this;
}

JsonValue RegionalEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_authTypeHasBeenSet) {
    payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if (m_revisionWeightsHasBeenSet) {
    Aws::Utils::Array<JsonValue> revisionWeightsJsonList(m_revisionWeights.size());
    for (unsigned revisionWeightsIndex = 0; revisionWeightsIndex < revisionWeightsJsonList.GetLength(); ++revisionWeightsIndex) {
      revisionWeightsJsonList[revisionWeightsIndex].AsObject(m_revisionWeights[revisionWeightsIndex].Jsonize());
    }
    payload.WithArray("revisionWeights", std::move(revisionWeightsJsonList));
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

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
