/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomClaimValidationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CustomClaimValidationType::CustomClaimValidationType(JsonView jsonValue) { *this = jsonValue; }

CustomClaimValidationType& CustomClaimValidationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inboundTokenClaimName")) {
    m_inboundTokenClaimName = jsonValue.GetString("inboundTokenClaimName");
    m_inboundTokenClaimNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inboundTokenClaimValueType")) {
    m_inboundTokenClaimValueType =
        InboundTokenClaimValueTypeMapper::GetInboundTokenClaimValueTypeForName(jsonValue.GetString("inboundTokenClaimValueType"));
    m_inboundTokenClaimValueTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizingClaimMatchValue")) {
    m_authorizingClaimMatchValue = jsonValue.GetObject("authorizingClaimMatchValue");
    m_authorizingClaimMatchValueHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomClaimValidationType::Jsonize() const {
  JsonValue payload;

  if (m_inboundTokenClaimNameHasBeenSet) {
    payload.WithString("inboundTokenClaimName", m_inboundTokenClaimName);
  }

  if (m_inboundTokenClaimValueTypeHasBeenSet) {
    payload.WithString("inboundTokenClaimValueType",
                       InboundTokenClaimValueTypeMapper::GetNameForInboundTokenClaimValueType(m_inboundTokenClaimValueType));
  }

  if (m_authorizingClaimMatchValueHasBeenSet) {
    payload.WithObject("authorizingClaimMatchValue", m_authorizingClaimMatchValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
