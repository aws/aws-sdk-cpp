/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessGatewayOutboundAuth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessGatewayOutboundAuth::HarnessGatewayOutboundAuth(JsonView jsonValue) { *this = jsonValue; }

HarnessGatewayOutboundAuth& HarnessGatewayOutboundAuth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("awsIam")) {
    m_awsIam = jsonValue.GetObject("awsIam");
    m_awsIamHasBeenSet = true;
  }
  if (jsonValue.ValueExists("none")) {
    m_none = jsonValue.GetObject("none");
    m_noneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("oauth")) {
    m_oauth = jsonValue.GetObject("oauth");
    m_oauthHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessGatewayOutboundAuth::Jsonize() const {
  JsonValue payload;

  if (m_awsIamHasBeenSet) {
    payload.WithObject("awsIam", m_awsIam.Jsonize());
  }

  if (m_noneHasBeenSet) {
    payload.WithObject("none", m_none.Jsonize());
  }

  if (m_oauthHasBeenSet) {
    payload.WithObject("oauth", m_oauth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
